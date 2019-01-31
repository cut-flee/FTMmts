VERSION 12.6.1.12
SYSTYPE Process
UNITS Millimeters Seconds
SYSDEF UtilByAvail off RefCheck on debugger off warningMessages on report standard
FLAGS
	System Inherit
	Text Inherit
	Resources Inherit
	Resource Names Inherit
	Queues Inherit
	Queue Names Inherit
	Queue Amounts Inherit
	Blocks Inherit
	Block Names Inherit
	Labels Inherit
PROCDEF
PROC name P_Init 0 traf Infinite
PROC name P_Anlauf 0 traf Infinite
PROC name P_Umlauf 0 traf Infinite
PROC name P_NS 6 traf Infinite nextproc die
PROC name P_Strat1 0 traf Infinite nextproc die
PROC name P_Strat2 0 traf Infinite nextproc die
PROC name P_Strat3 0 traf Infinite nextproc die
PROC name P_Strat4 0 traf Infinite nextproc die
LDTYPE name L_WT 0 dis
picpos endx 1
 color 2 template Millimeters
700 17
2 2 0 1 1 WT
6
310 1
8 8 0 1 1 Inntenteil
150 150 150 150 25 0 0
310 5
0 0 0 1 1 Rand
0  77.5  0
0	0.00	0.00	0.00
	1.00	1.00	1.00
5 160 5 160 30 0 0
310 5
0 0 0 1 1 Rand
0  -77.5  0
0	0.00	0.00	0.00
	1.00	1.00	1.00
5 160 5 160 30 0 0
310 5
0 0 0 1 1 Rand
77.5  0  0
0 0 0 90
	1.00	1.00	1.00
5 160 5 160 30 0 0
310 5
0 0 0 1 1 Rand
-77.5  0  0
0 0 0 90
	1.00	1.00	1.00
5 160 5 160 30 0 0
310 21
2 2 0 1 1 Bauteil
0  0  25
0	0.00	0.00	0.00
	1.00	1.00	1.00
50 50 50 50 30 0 0
end
LDTYPE name LInit 0
picpos endx 1
 template Millimeters
700 17
2 2 0 1 1 none
1
310 0
1 1 1 1 1 0 0
end
		create con 0 Seconds stream stream_LInit_1 First P_Init 0 Limit 1
RSRC name R_AP1 6 cap 1 prtime con 5 Seconds stream stream_R_AP1_1

	UserDef	template Millimeters
700 17
-1 -1 0 1 1 none
1
310 0
4 4 4 4 4 0 0
end
		
RSRC name R_AP2 6 cap 1 prtime con 5 Seconds stream stream_R_AP2_1

	UserDef	template Millimeters
700 17
-1 -1 0 1 1 none
1
310 0
4 4 4 4 4 0 0
end
		
RSRC name R_AP3 6 cap 1 prtime con 5 Seconds stream stream_R_AP3_1

	UserDef	template Millimeters
700 17
-1 -1 0 1 1 none
1
310 0
4 4 4 4 4 0 0
end
		
RSRC name R_AP4 6 cap 1 prtime con 5 Seconds stream stream_R_AP4_1

	UserDef	template Millimeters
700 17
-1 -1 0 1 1 none
1
310 0
4 4 4 4 4 0 0
end
		
COUNT name C_Fertig 0 cap Infinite
ATT name A_Nummer_NS 0 type Integer
	title "Nummer des Nebenschlusses"
ATT name A_Str 0 type String
	title "String zum Erzeugen der Anfahrposition"
ATT name A_Next_Station 0 type Location
	title "Die nächste anzufahrende Station"
ATT name A_Zustand 0 type Integer
ATT name A_Modulo 0 type Integer
VAR name V_WT_Anzahl 0 type Integer 80
VAR name V_Prozesszeit 0 type Real 10
VAR name V_Prozesszeit_S 0 type Real 1
VAR name V_Verteilregel 0 type Integer 4
VAR name V_Aktuelle_Anzahl 0 type Integer
VAR name V_NIO_Anteil 0 type Real 0.02
VAR name V_Balance 0 type Real 5
VAR name V_NS_Traffic_Limit 0 type Integer 5
RNSTREAM stream0 0 type CMRG flags 1
	cmrgseed 1 12345 12345 12345 12345 12345 12345
RNSTREAM stream_LInit_1 0 type CMRG flags 1
	title "Generated automatically for LInit"
	cmrgseed 1 3692455944 1366884236 2968912127 335948734 4161675175 475798818
RNSTREAM stream_R_AP1_1 6 type CMRG flags 1
	title "Generated automatically for R_AP1"
	cmrgseed 1 1015873554 1310354410 2249465273 994084013 2912484720 3876682925
	cmrgseed 2 2784301963 3004110709 4065265451 2351994899 1824839263 1473060447
	cmrgseed 3 3645411182 1391027122 3995023402 536114258 1376034799 2391282907
	cmrgseed 4 4205039797 2998067142 2737381050 2060484144 21123025 900610517
	cmrgseed 5 1708138263 1103344630 3131738563 354874525 1462105562 2799820805
	cmrgseed 6 1762624356 3338520614 1869672149 2420033342 3823777008 4112813433
RNSTREAM stream_R_AP2_1 6 type CMRG flags 1
	title "Generated automatically for R_AP2"
	cmrgseed 1 2338701263 1119171942 2570676563 317077452 3194180850 618832124
	cmrgseed 2 1597262096 3906379055 3312112953 1016013135 4099474108 275305423
	cmrgseed 3 97147054 3131372450 829345164 3691032523 3006063034 4259826321
	cmrgseed 4 796079799 2105258207 955365076 2923159030 4116632677 3067683584
	cmrgseed 5 3281794178 2616230133 1457051261 2762791137 2480527362 2282316169
	cmrgseed 6 3777646647 1837464056 4204654757 664239048 4190510072 2959195122
RNSTREAM stream_R_AP3_1 6 type CMRG flags 1
	title "Generated automatically for R_AP3"
	cmrgseed 1 4215590817 3862461878 1087200967 1544910132 936383720 1611370123
	cmrgseed 2 1683636369 362165168 814316280 869382050 980203903 2062101717
	cmrgseed 3 272317999 166758548 310112982 201045826 1680231254 118290799
	cmrgseed 4 2245755202 1652682525 2865544364 721509566 209733568 592362218
	cmrgseed 5 3003961408 3529909391 14538032 3603919910 566682685 1235016484
	cmrgseed 6 596094074 2279636413 3050913596 1739649456 2368706608 3058697049
RNSTREAM stream_R_AP4_1 6 type CMRG flags 1
	title "Generated automatically for R_AP4"
	cmrgseed 1 1437096527 2547142266 2541498983 2640839690 2160978219 2618657830
	cmrgseed 2 3224044943 1227141655 2220611050 1504589054 2829780440 108189859
	cmrgseed 3 927434978 1593504038 2143021818 1749489845 1330187821 2371554242
	cmrgseed 4 3446225690 835741554 2195834023 1297741021 3357053382 383824268
	cmrgseed 5 3984477137 1267973573 3770063761 216527865 1568537936 1200352663
	cmrgseed 6 2503334853 3179736892 2080184241 2881517721 3611607237 2639045213
RNSTATE 1406960847 2689758640 2086764669 1479781266 4277003072 4173905453
SFileBegin	name logic.m
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
  	use R_AP1(procindex) for normal V_Prozesszeit / V_Balance, V_Prozesszeit_S sec
  else
    use R_AP1(procindex) for normal V_Prozesszeit, V_Prozesszeit_S sec

  /*Anfahren der Position P3*/
  print "C1:NS" procindex "_P3" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 
  
  /*Anfahren der Arbeitposition AP2*/
  print "C1:NS" procindex "_AP2" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 
  if procindex=1 then
  	use R_AP2(procindex) for normal V_Prozesszeit / V_Balance, V_Prozesszeit_S sec
  else
    use R_AP2(procindex) for normal V_Prozesszeit, V_Prozesszeit_S sec

  /*Anfahren der Position P4*/
  print "C1:NS" procindex "_P4" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 

  /*Anfahren der Arbeitposition AP3*/
  print "C1:NS" procindex "_AP3" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 
  if procindex=1 then
  	use R_AP3(procindex) for normal V_Prozesszeit / V_Balance, V_Prozesszeit_S sec
  else
    use R_AP3(procindex) for normal V_Prozesszeit, V_Prozesszeit_S sec

  /*Anfahren der Position P5*/
  print "C1:NS" procindex "_P5" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 

  /*Anfahren der Arbeitposition AP4*/
  print "C1:NS" procindex "_AP4" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 
  if procindex=1 then
  	use R_AP4(procindex) for normal V_Prozesszeit / V_Balance, V_Prozesszeit_S sec
  else
    use R_AP4(procindex) for normal V_Prozesszeit, V_Prozesszeit_S sec
  
  /*Fehler setzen - hier Fehlerrate 1% */
  if V_NIO_Anteil > 0 and procindex = 1 then
  	set this load color to oneof((100 - V_NIO_Anteil):green, V_NIO_Anteil:red)

  /*Anfahren der Position P6*/
  print "C1:NS" procindex "_P6" to A_Str
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
  else begin
    set this load A_Zustand to 1
    set this load color to green
    
    increment C_Fertig by 1
  end
  
  /*Anfahren der Output-Station*/
  print "C1:NS" procindex "_Output" to A_Str
  set A_Next_Station to A_Str
  travel to A_Next_Station 
  
  send to P_Umlauf
end

#@!
