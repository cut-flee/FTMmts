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
  set this load A_Zustand to 1

  send to P_Umlauf 
end

begin P_Umlauf arriving procedure
  if this load color=red then 
  begin
    travel to C1:NS6_Output
    set this load A_Nummer_NS to 1
    set this load color to green
    set this A_Zustand to 1
  end  
  
  if V_Verteilregel=1 then send to P_Strat1
  if V_Verteilregel=2 then send to P_Strat2
  if V_Verteilregel=3 then send to P_Strat3
  if V_Verteilregel=4 then send to P_Strat4
end

begin P_Strat1 arriving procedure
  if this load A_Zustand=1 then send to P_NS(1)
  if this load A_Zustand=2 then send to P_NS(this load A_Modulo + 2)
end

begin P_Strat2 arriving procedure
  if this load A_Zustand=1 then send to P_NS(1)
  if this load A_Zustand=2 then send to P_NS(6 - this load A_Modulo)
end

begin P_Strat3 arriving procedure
  if this load A_Zustand=1 then send to P_NS(1)
  if this load A_Zustand=2 then
  begin
  	if this load A_Nummer_NS < 6 then 
  	  send to P_NS(this load A_Nummer_NS + 1)
  	
  	if this load A_Nummer_NS = 6 then
  	  send to P_NS(2)
  end 
end

begin P_Strat4 arriving procedure
  if this load A_Zustand=1 then send to P_NS(1)
  if this load A_Zustand=2 then
  begin
  	if this load A_Nummer_NS = 1 then 
  	  send to P_NS(this load A_Modulo + 2)
  	
  	send to P_Strat3
  end
end

begin P_NS arriving procedure
  /*Anfahren der Input-Station*/
  print "C1:NS" procindex "_Input" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 

  // Setzen der Nummer des letzen Nebenshlusses
  set this load A_Nummer_NS to procindex

  /*Logik für Input*/
  if this load color = red then
  begin
    /*Anfahren der Output-Station*/
    print "C1:NS" procindex "_Output" to A_Str
    set A_Next_Station to A_Str
    travel to A_Next_Station
    send to P_Umlauf
  end

  increment C_NS_Traffic(procindex) by 1
  
  print "C1:NS" procindex "_P1" to A_Str
  set A_Next_Station to A_Str
  if A_Next_Station current > 0 then
  begin
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
  if procindex=1 then
  	use R_AP1(procindex) for normal V_Prozesszeit, V_Prozesszeit_S sec
  else
    use R_AP1(procindex) for normal V_Prozesszeit * V_Balance, V_Prozesszeit_S sec

  /*Anfahren der Position P3*/
  print "C1:NS" procindex "_P3" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 
  
  /*Anfahren der Arbeitposition AP2*/
  print "C1:NS" procindex "_AP2" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 
  if procindex=1 then
  	use R_AP2(procindex) for normal V_Prozesszeit, V_Prozesszeit_S sec
  else
    use R_AP2(procindex) for normal V_Prozesszeit * V_Balance, V_Prozesszeit_S sec

  /*Anfahren der Position P4*/
  print "C1:NS" procindex "_P4" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 

  /*Anfahren der Arbeitposition AP3*/
  print "C1:NS" procindex "_AP3" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 
  if procindex=1 then
  	use R_AP3(procindex) for normal V_Prozesszeit, V_Prozesszeit_S sec
  else
    use R_AP3(procindex) for normal V_Prozesszeit * V_Balance, V_Prozesszeit_S sec

  /*Anfahren der Position P5*/
  print "C1:NS" procindex "_P5" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 

  /*Anfahren der Arbeitposition AP4*/
  print "C1:NS" procindex "_AP4" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 
  if procindex=1 then
  	use R_AP4(procindex) for normal V_Prozesszeit, V_Prozesszeit_S sec
  else
    use R_AP4(procindex) for normal V_Prozesszeit * V_Balance, V_Prozesszeit_S sec
  
  /*Fehler setzen - hier Fehlerrate 1% */
  if V_NIO_Anteil > 0 then
  	set this load color to oneof((1/V_NIO_Anteil - 1):green, 1:red)

  /*Anfahren der Position P6*/
  print "C1:NS" procindex "_P6" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 

  /*Anfahren der Output-Station*/
  print "C1:NS" procindex "_Output" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 
  
  if procindex=1 and this load color!=red then
  begin
    set this load A_Modulo to V_Aktuelle_Anzahl
    set V_Aktuelle_Anzahl to (V_Aktuelle_Anzahl + 1) % 5
    
    if this load A_Modulo=0 then set this load color to brown
    if this load A_Modulo=1 then set this load color to yellow
    if this load A_Modulo=2 then set this load color to blue
    if this load A_Modulo=3 then set this load color to purple
    if this load A_Modulo=4 then set this load color to pink
  end
  
  if procindex=1 then
    set this load A_Zustand to 2
  else
    set this load A_Zustand to 1
  
  send to P_Umlauf
end


begin P_NS leaving procedure
  decrement C_NS_Traffic(procindex) by 1
end

