VERSION 12.6.1.12
SYSTYPE Conveyor
UNITS Millimeters Seconds
SYSDEF timeout 60 Seconds confname Config1
FLAGS
	System Inherit
	Text Inherit
	Sections Inherit
	Section Names Invisible Inherit
	Direction Invisible Inherit
	Fixed Interval Inherit
	Loads Inherit
	Stations Inherit
	Station Names Inherit
	Transfers Invisible Inherit
	Photoeyes Inherit
	Photoeye Names Inherit
	Center Line Invisible Inherit
CONVDEF UserId 6
	NEXTSEC name sec10 type DefaultSection
	NEXTSTA name NS6_Input type Umlauf_Station
	NEXTTRAN name tran41 type DefaultTransfer
	NEXTMOTOR name motor1 type DefaultMotor
	NEXTPHOTOEYE name photoeye1 type DefaultPhotoeye
	ALTERNATE NONE EXTRASECTIONWIDTH 0 Meters
CONVTOL minang 450 maxang 1350
CONVMOTORTYPE name DefaultMotor
CONVMOTOR name M_sec1 type DefaultMotor
CONVSECTIONTYPE name DefaultSection width 160 Millimeters color -1 motor M_sec1 vel 12 Meters Minutes acc 0.3 Meters Seconds Seconds dec 0.3 Meters Seconds Seconds accum load stopsize 1 0 Meters movesize 1 0 Meters inductsize 1 0 Meters nofixed align centered_in_interval attach rigid nav 1
CONVSECTION name sec1 type DefaultSection motor M_sec1 piece begx 9000 begy 0.0 endx 0.0 endy 0.0 upz 1
CONVSECTION name sec5 type DefaultSection piece begx 8380 begy 80 endx 8380 endy 1380 upz 1
CONVSECTION name sec6 type DefaultSection piece begx 8300 begy 1250 endx 8200 endy 1250 upz 1
CONVSECTION name sec7 type DefaultSection piece begx 8120 begy 1380 endx 8120 endy 80 upz 1
CONVSECTION name sec7_1 type DefaultSection piece begx 6620 begy 1380 endx 6620 endy 80 upz 1
CONVSECTION name sec6_1 type DefaultSection piece begx 6800 begy 1250 endx 6700 endy 1250 upz 1
CONVSECTION name sec5_1 type DefaultSection piece begx 6880 begy 80 endx 6880 endy 1380 upz 1
CONVSECTION name sec7_2 type DefaultSection piece begx 5120 begy 1380 endx 5120 endy 80 upz 1
CONVSECTION name sec5_2 type DefaultSection piece begx 5380 begy 80 endx 5380 endy 1380 upz 1
CONVSECTION name sec6_2 type DefaultSection piece begx 5300 begy 1250 endx 5200 endy 1250 upz 1
CONVSECTION name sec7_3 type DefaultSection piece begx 3620 begy 1380 endx 3620 endy 80 upz 1
CONVSECTION name sec6_3 type DefaultSection piece begx 3800 begy 1250 endx 3700 endy 1250 upz 1
CONVSECTION name sec5_3 type DefaultSection piece begx 3880 begy 80 endx 3880 endy 1380 upz 1
CONVSECTION name sec7_4 type DefaultSection piece begx 2120 begy 1380 endx 2120 endy 80 upz 1
CONVSECTION name sec5_4 type DefaultSection piece begx 2380 begy 80 endx 2380 endy 1380 upz 1
CONVSECTION name sec6_4 type DefaultSection piece begx 2300 begy 1250 endx 2200 endy 1250 upz 1
CONVSECTION name sec7_5 type DefaultSection piece begx 620 begy 1380 endx 620 endy 80 upz 1
CONVSECTION name sec6_5 type DefaultSection piece begx 800 begy 1250 endx 700 endy 1250 upz 1
CONVSECTION name sec5_5 type DefaultSection piece begx 880 begy 80 endx 880 endy 1380 upz 1
CONVSECTION name sec1_1 type DefaultSection motor M_sec1 piece begx 0.0 begy -260 endx 9000 endy -260 upz 1
CONVSECTION name sec8 type DefaultSection piece begx 180 begy -80 endx 180 endy -180 upz 1
CONVSECTION name sec9 type DefaultSection piece begx 8820 begy -180 endx 8820 endy -80 upz 1
CONVSTATIONTYPE name DefaultStation raise 0 Seconds lower 0 Seconds dist 0 Meters release norestriction align leading cap Infinite scale 1 color -1 nrot 0 nscale 1
CONVSTATIONTYPE name Umlauf_Station type DefaultStation align center scale 0.2 nscale 0.2
CONVSTATIONTYPE name NS_Station type DefaultStation align center cap 1 scale 0.2 nscale 0.2
CONVSTATIONTYPE name NS_Input_Station type DefaultStation align center cap 4 scale 0.2 nscale 0.2
CONVSTATION name NS1_P1 type NS_Station at sec5 130
CONVSTATION name NS1_P2 type NS_Station at sec5 340
CONVSTATION name NS1_P3 type NS_Station at sec5 760
CONVSTATION name NS1_P4 type NS_Station at sec7 330
CONVSTATION name NS1_P5 type NS_Station at sec7 750
CONVSTATION name NS1_P6 type NS_Station at sec7 1170
CONVSTATION name NS1_AP1 type NS_Station at sec5 550
CONVSTATION name NS1_AP2 type NS_Station at sec5 970
CONVSTATION name NS1_AP3 type NS_Station at sec7 540
CONVSTATION name NS1_AP4 type NS_Station at sec7 960
CONVSTATION name NS2_P6 type NS_Station at sec7_1 1170
CONVSTATION name NS2_P5 type NS_Station at sec7_1 750
CONVSTATION name NS2_P4 type NS_Station at sec7_1 330
CONVSTATION name NS2_P3 type NS_Station at sec5_1 760
CONVSTATION name NS2_P2 type NS_Station at sec5_1 340
CONVSTATION name NS2_P1 type NS_Station at sec5_1 130
CONVSTATION name NS2_AP4 type NS_Station at sec7_1 960
CONVSTATION name NS2_AP3 type NS_Station at sec7_1 540
CONVSTATION name NS2_AP2 type NS_Station at sec5_1 970
CONVSTATION name NS2_AP1 type NS_Station at sec5_1 550
CONVSTATION name NS3_AP1 type NS_Station at sec5_2 550
CONVSTATION name NS3_AP2 type NS_Station at sec5_2 970
CONVSTATION name NS3_AP3 type NS_Station at sec7_2 540
CONVSTATION name NS3_AP4 type NS_Station at sec7_2 960
CONVSTATION name NS3_P1 type NS_Station at sec5_2 130
CONVSTATION name NS3_P2 type NS_Station at sec5_2 340
CONVSTATION name NS3_P3 type NS_Station at sec5_2 760
CONVSTATION name NS3_P4 type NS_Station at sec7_2 330
CONVSTATION name NS3_P5 type NS_Station at sec7_2 750
CONVSTATION name NS3_P6 type NS_Station at sec7_2 1170
CONVSTATION name NS4_P6 type NS_Station at sec7_3 1170
CONVSTATION name NS4_P5 type NS_Station at sec7_3 750
CONVSTATION name NS4_P4 type NS_Station at sec7_3 330
CONVSTATION name NS4_P3 type NS_Station at sec5_3 760
CONVSTATION name NS4_P2 type NS_Station at sec5_3 340
CONVSTATION name NS4_P1 type NS_Station at sec5_3 130
CONVSTATION name NS4_AP4 type NS_Station at sec7_3 960
CONVSTATION name NS4_AP3 type NS_Station at sec7_3 540
CONVSTATION name NS4_AP2 type NS_Station at sec5_3 970
CONVSTATION name NS4_AP1 type NS_Station at sec5_3 550
CONVSTATION name NS5_AP1 type NS_Station at sec5_4 550
CONVSTATION name NS5_AP2 type NS_Station at sec5_4 970
CONVSTATION name NS5_AP3 type NS_Station at sec7_4 540
CONVSTATION name NS5_AP4 type NS_Station at sec7_4 960
CONVSTATION name NS5_P1 type NS_Station at sec5_4 130
CONVSTATION name NS5_P2 type NS_Station at sec5_4 340
CONVSTATION name NS5_P3 type NS_Station at sec5_4 760
CONVSTATION name NS5_P4 type NS_Station at sec7_4 330
CONVSTATION name NS5_P5 type NS_Station at sec7_4 750
CONVSTATION name NS5_P6 type NS_Station at sec7_4 1170
CONVSTATION name NS6_P6 type NS_Station at sec7_5 1170
CONVSTATION name NS6_P5 type NS_Station at sec7_5 750
CONVSTATION name NS6_P4 type NS_Station at sec7_5 330
CONVSTATION name NS6_P3 type NS_Station at sec5_5 760
CONVSTATION name NS6_P2 type NS_Station at sec5_5 340
CONVSTATION name NS6_P1 type NS_Station at sec5_5 130
CONVSTATION name NS6_AP4 type NS_Station at sec7_5 960
CONVSTATION name NS6_AP3 type NS_Station at sec7_5 540
CONVSTATION name NS6_AP2 type NS_Station at sec5_5 970
CONVSTATION name NS6_AP1 type NS_Station at sec5_5 550
CONVSTATION name sta_Start type NS_Station at sec1_1 468
CONVSTATION name sta_Umlauf type Umlauf_Station at sec1_1 8200
CONVSTATION name NS1_Input type NS_Input_Station at sec1 410
CONVSTATION name NS1_Output type NS_Station at sec1 1090
CONVSTATION name NS2_Output type NS_Station at sec1 2590
CONVSTATION name NS2_Input type NS_Input_Station at sec1 1910
CONVSTATION name NS3_Output type NS_Station at sec1 4090
CONVSTATION name NS3_Input type NS_Input_Station at sec1 3410
CONVSTATION name NS4_Output type NS_Station at sec1 5590
CONVSTATION name NS4_Input type NS_Input_Station at sec1 4910
CONVSTATION name NS5_Output type NS_Station at sec1 7090
CONVSTATION name NS5_Input type NS_Input_Station at sec1 6410
CONVSTATION name NS6_Output type NS_Station at sec1 8590
CONVSTATION name NS6_Input type NS_Input_Station at sec1 7910
CONVPHOTOEYETYPE name DefaultPhotoeye blocktimeout 5 Seconds cleartimeout 5 Seconds
CONVTRANSFERTYPE name DefaultTransfer inductsize 1 0 Meters aheadinductsize 1 0 Meters speedadjust Origin starttime 0 Seconds finishtime 0 Seconds style double movemethod movesection
CONVTRANSFER name tran5 type DefaultTransfer from sec1 620 to sec5 0
CONVTRANSFER name tran6 type DefaultTransfer from sec5 1170 to sec6 0
CONVTRANSFER name tran9 type DefaultTransfer from sec7 1300 to sec1 880
CONVTRANSFER name tran35 type DefaultTransfer from sec6 100 to sec7 130
CONVTRANSFER name tran11 type DefaultTransfer from sec7_1 1300 to sec1 2380
CONVTRANSFER name tran36 type DefaultTransfer from sec6_1 100 to sec7_1 130
CONVTRANSFER name tran12 type DefaultTransfer from sec1 2120 to sec5_1 0
CONVTRANSFER name tran6_1 type DefaultTransfer from sec5_1 1170 to sec6_1 0
CONVTRANSFER name tran15 type DefaultTransfer from sec7_2 1300 to sec1 3880
CONVTRANSFER name tran16 type DefaultTransfer from sec1 3620 to sec5_2 0
CONVTRANSFER name tran37 type DefaultTransfer from sec6_2 100 to sec7_2 130
CONVTRANSFER name tran6_2 type DefaultTransfer from sec5_2 1170 to sec6_2 0
CONVTRANSFER name tran19 type DefaultTransfer from sec7_3 1300 to sec1 5380
CONVTRANSFER name tran38 type DefaultTransfer from sec6_3 100 to sec7_3 130
CONVTRANSFER name tran20 type DefaultTransfer from sec1 5120 to sec5_3 0
CONVTRANSFER name tran6_3 type DefaultTransfer from sec5_3 1170 to sec6_3 0
CONVTRANSFER name tran23 type DefaultTransfer from sec7_4 1300 to sec1 6880
CONVTRANSFER name tran24 type DefaultTransfer from sec1 6620 to sec5_4 0
CONVTRANSFER name tran39 type DefaultTransfer from sec6_4 100 to sec7_4 130
CONVTRANSFER name tran6_4 type DefaultTransfer from sec5_4 1170 to sec6_4 0
CONVTRANSFER name tran27 type DefaultTransfer from sec7_5 1300 to sec1 8380
CONVTRANSFER name tran40 type DefaultTransfer from sec6_5 100 to sec7_5 130
CONVTRANSFER name tran28 type DefaultTransfer from sec1 8120 to sec5_5 0
CONVTRANSFER name tran6_5 type DefaultTransfer from sec5_5 1170 to sec6_5 0
CONVTRANSFER name tran31 type DefaultTransfer from sec1 8820 to sec8 0
CONVTRANSFER name tran32 type DefaultTransfer from sec8 100 to sec1_1 180
CONVTRANSFER name tran33 type DefaultTransfer from sec9 100 to sec1 180
CONVTRANSFER name tran34 type DefaultTransfer from sec1_1 8820 to sec9 0
