begin P_Init arriving procedure
  create V_WT_Anzahl loads of load type L_WT to P_Anlauf
  send to die 
end

begin P_Anlauf arriving procedure
  move into C1:sta_Start
  /*Load auf fehlerfrei setzen, color = green */
  set this load color to green
  /*Nummer des anzufahrenden Nebenschlusses setzen */
  set this load A_Nummer_NS to 0

  send to P_Umlauf 
end

begin P_Umlauf arriving procedure
  /*Erhöhen der Nummer des Nebenshlusses*/
  set this load A_Nummer_NS to A_Nummer_NS + 1
  if this load A_Nummer_NS > 6 then 
  begin
    set this load A_Nummer_NS to 1
    set this load color to green
  end  
  send to P_NS(A_Nummer_NS)
end

begin P_NS arriving procedure
  /*Anfahren der Input-Station*/
  print "C1:NS" procindex "_Input" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 

  /*Logik für Input*/
  if this load color = red then
  begin
    /*Anfahren der Output-Station*/
    print "C1:NS" procindex "_Output" to A_Str
    set A_Next_Station to A_Str
    travel to A_Next_Station
    send to P_Umlauf
  end   
     
  /*Anfahren der Position P1*/
  print "C1:NS" procindex "_P1" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 

  /*Anfahren der Position P2*/
  print "C1:NS" procindex "_P2" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 

  /*Anfahren der Arbeitposition AP1*/
  print "C1:NS" procindex "_AP1" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 
  use R_AP1(procindex) for normal V_Prozesszeit, V_Prozesszeit_S sec

  /*Anfahren der Position P3*/
  print "C1:NS" procindex "_P3" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 
  
  /*Anfahren der Arbeitposition AP2*/
  print "C1:NS" procindex "_AP2" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 
  use R_AP2(procindex) for normal V_Prozesszeit, V_Prozesszeit_S sec

  /*Anfahren der Position P4*/
  print "C1:NS" procindex "_P4" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 

  /*Anfahren der Arbeitposition AP3*/
  print "C1:NS" procindex "_AP3" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 
  use R_AP3(procindex) for normal V_Prozesszeit, V_Prozesszeit_S sec

  /*Anfahren der Position P5*/
  print "C1:NS" procindex "_P5" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 

  /*Anfahren der Arbeitposition AP4*/
  print "C1:NS" procindex "_AP4" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 
  use R_AP4(procindex) for normal V_Prozesszeit, V_Prozesszeit_S sec
  
  /*Fehler setzen - hier Fehlerrate 1% */
  set this load color to oneof(99:green, 1:red)

  /*Anfahren der Position P6*/
  print "C1:NS" procindex "_P6" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 

  /*Anfahren der Output-Station*/
  print "C1:NS" procindex "_Output" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 

  send to P_Umlauf
end

