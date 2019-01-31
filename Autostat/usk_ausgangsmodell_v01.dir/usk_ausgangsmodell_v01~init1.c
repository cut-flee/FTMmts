// usk_ausgangsmodell_v01~init1.c
// AutoMod 12.6.1 Generated File
// Build: 12.6.1.12
// Model name:	usk_ausgangsmodell_v01
// Model path:	C:\Users\AutoMod\Desktop\usk_ausgangsmodell_v01.dir\
// Generated:	Thu Jan 31 16:33:08 2019
// Applied/AutoMod Licensee Confidential
// NO DISTRIBUTION OR REPRODUCTION RIGHTS GRANTED!
// Copyright (c) 1988-2015 Applied Materials All rights reserved.
//
// All Rights Reserved.  Reproduction or transmission in whole or
// in part, in any form or by any means, electronic, mechanical or
// otherwise, is prohibited without the prior written consent of
// copyright owner.
//
// Licensed Material - Property of Applied Materials, Inc.
//
// Applied Materials, Inc.
// 3050 Bowers Drive
// P.O. Box 58039
// Santa Clara, CA 95054-3299
// U.S.A.
//


#include "decls.h"

void
initglobs0()
{
	am_model.$sys = model;
	am_model.am_C1.$sys = symGetSystemDataByName(am_model.$sys, "C1");
	am_model.am_C1.am_NS2_AP4 = symGetSystemDataByName(am_model.am_C1.$sys, "NS2_AP4");
	am_model.am_C1.am_NS1_AP4 = symGetSystemDataByName(am_model.am_C1.$sys, "NS1_AP4");
	am_model.am_C1.am_NS3_AP3 = symGetSystemDataByName(am_model.am_C1.$sys, "NS3_AP3");
	am_model.am_C1.am_NS2_AP3 = symGetSystemDataByName(am_model.am_C1.$sys, "NS2_AP3");
	am_model.am_C1.am_NS3_AP4 = symGetSystemDataByName(am_model.am_C1.$sys, "NS3_AP4");
	am_model.am_C1.am_NS1_AP3 = symGetSystemDataByName(am_model.am_C1.$sys, "NS1_AP3");
	am_model.am_C1.am_NS6_Input = symGetSystemDataByName(am_model.am_C1.$sys, "NS6_Input");
	am_model.am_C1.am_NS5_Input = symGetSystemDataByName(am_model.am_C1.$sys, "NS5_Input");
	am_model.am_C1.am_NS4_Input = symGetSystemDataByName(am_model.am_C1.$sys, "NS4_Input");
	am_model.am_C1.am_NS3_Input = symGetSystemDataByName(am_model.am_C1.$sys, "NS3_Input");
	am_model.am_C1.am_NS2_Input = symGetSystemDataByName(am_model.am_C1.$sys, "NS2_Input");
	am_model.am_C1.am_NS1_Input = symGetSystemDataByName(am_model.am_C1.$sys, "NS1_Input");
	am_model.am_C1.am_NS5_AP4 = symGetSystemDataByName(am_model.am_C1.$sys, "NS5_AP4");
	am_model.am_C1.am_NS6_AP3 = symGetSystemDataByName(am_model.am_C1.$sys, "NS6_AP3");
	am_model.am_C1.am_NS4_AP4 = symGetSystemDataByName(am_model.am_C1.$sys, "NS4_AP4");
	am_model.am_C1.am_NS5_AP3 = symGetSystemDataByName(am_model.am_C1.$sys, "NS5_AP3");
	am_model.am_C1.am_NS4_AP3 = symGetSystemDataByName(am_model.am_C1.$sys, "NS4_AP3");
	am_model.am_C1.am_NS6_AP4 = symGetSystemDataByName(am_model.am_C1.$sys, "NS6_AP4");
	am_model.am_C1.am_NS2_Output = symGetSystemDataByName(am_model.am_C1.$sys, "NS2_Output");
	am_model.am_C1.am_NS1_Output = symGetSystemDataByName(am_model.am_C1.$sys, "NS1_Output");
	am_model.am_C1.am_NS3_Output = symGetSystemDataByName(am_model.am_C1.$sys, "NS3_Output");
	am_model.am_C1.am_NS5_Output = symGetSystemDataByName(am_model.am_C1.$sys, "NS5_Output");
	am_model.am_C1.am_NS4_Output = symGetSystemDataByName(am_model.am_C1.$sys, "NS4_Output");
	am_model.am_C1.am_NS6_Output = symGetSystemDataByName(am_model.am_C1.$sys, "NS6_Output");
	am_model.am_C1.am_NS1_P6 = symGetSystemDataByName(am_model.am_C1.$sys, "NS1_P6");
	am_model.am_C1.am_NS2_P6 = symGetSystemDataByName(am_model.am_C1.$sys, "NS2_P6");
	am_model.am_C1.am_NS3_P6 = symGetSystemDataByName(am_model.am_C1.$sys, "NS3_P6");
	am_model.am_C1.am_NS1_P4 = symGetSystemDataByName(am_model.am_C1.$sys, "NS1_P4");
	am_model.am_C1.am_sta_Umlauf = symGetSystemDataByName(am_model.am_C1.$sys, "sta_Umlauf");
	am_model.am_C1.am_NS3_P5 = symGetSystemDataByName(am_model.am_C1.$sys, "NS3_P5");
	am_model.am_C1.am_NS2_P4 = symGetSystemDataByName(am_model.am_C1.$sys, "NS2_P4");
	am_model.am_C1.am_NS3_P4 = symGetSystemDataByName(am_model.am_C1.$sys, "NS3_P4");
	am_model.am_C1.am_NS1_P5 = symGetSystemDataByName(am_model.am_C1.$sys, "NS1_P5");
	am_model.am_C1.am_NS2_P5 = symGetSystemDataByName(am_model.am_C1.$sys, "NS2_P5");
	am_model.am_C1.am_NS6_P5 = symGetSystemDataByName(am_model.am_C1.$sys, "NS6_P5");
	am_model.am_C1.am_NS4_P4 = symGetSystemDataByName(am_model.am_C1.$sys, "NS4_P4");
	am_model.am_C1.am_NS5_P4 = symGetSystemDataByName(am_model.am_C1.$sys, "NS5_P4");
	am_model.am_C1.am_NS4_P5 = symGetSystemDataByName(am_model.am_C1.$sys, "NS4_P5");
	am_model.am_C1.am_NS6_P4 = symGetSystemDataByName(am_model.am_C1.$sys, "NS6_P4");
	am_model.am_C1.am_NS5_P5 = symGetSystemDataByName(am_model.am_C1.$sys, "NS5_P5");
	am_model.am_C1.am_NS4_P6 = symGetSystemDataByName(am_model.am_C1.$sys, "NS4_P6");
	am_model.am_C1.am_NS5_P6 = symGetSystemDataByName(am_model.am_C1.$sys, "NS5_P6");
	am_model.am_C1.am_NS6_P6 = symGetSystemDataByName(am_model.am_C1.$sys, "NS6_P6");
	am_model.am_C1.am_NS5_P1 = symGetSystemDataByName(am_model.am_C1.$sys, "NS5_P1");
	am_model.am_C1.am_NS6_AP2 = symGetSystemDataByName(am_model.am_C1.$sys, "NS6_AP2");
	am_model.am_C1.am_parentsys = symGetSystemDataByName(am_model.am_C1.$sys, "parentsys");
	am_model.am_C1.am_NS6_P2 = symGetSystemDataByName(am_model.am_C1.$sys, "NS6_P2");
	am_model.am_C1.am_NS4_P1 = symGetSystemDataByName(am_model.am_C1.$sys, "NS4_P1");
	am_model.am_C1.am_sta_Start = symGetSystemDataByName(am_model.am_C1.$sys, "sta_Start");
	am_model.am_C1.am_NS5_P2 = symGetSystemDataByName(am_model.am_C1.$sys, "NS5_P2");
	am_model.am_C1.am_NS4_AP2 = symGetSystemDataByName(am_model.am_C1.$sys, "NS4_AP2");
	am_model.am_C1.am_NS4_P2 = symGetSystemDataByName(am_model.am_C1.$sys, "NS4_P2");
	am_model.am_C1.am_NS6_P1 = symGetSystemDataByName(am_model.am_C1.$sys, "NS6_P1");
	am_model.am_C1.am_NS5_AP2 = symGetSystemDataByName(am_model.am_C1.$sys, "NS5_AP2");
	am_model.am_C1.am_NS4_AP1 = symGetSystemDataByName(am_model.am_C1.$sys, "NS4_AP1");
	am_model.am_C1.am_NS5_P3 = symGetSystemDataByName(am_model.am_C1.$sys, "NS5_P3");
	am_model.am_C1.am_NS4_P3 = symGetSystemDataByName(am_model.am_C1.$sys, "NS4_P3");
	am_model.am_C1.am_NS5_AP1 = symGetSystemDataByName(am_model.am_C1.$sys, "NS5_AP1");
	am_model.am_C1.am_NS6_AP1 = symGetSystemDataByName(am_model.am_C1.$sys, "NS6_AP1");
	am_model.am_C1.am_NS6_P3 = symGetSystemDataByName(am_model.am_C1.$sys, "NS6_P3");
	am_model.am_C1.am_NS2_P3 = symGetSystemDataByName(am_model.am_C1.$sys, "NS2_P3");
	am_model.am_C1.am_NS1_AP1 = symGetSystemDataByName(am_model.am_C1.$sys, "NS1_AP1");
	am_model.am_C1.am_NS2_AP1 = symGetSystemDataByName(am_model.am_C1.$sys, "NS2_AP1");
	am_model.am_C1.am_NS1_P3 = symGetSystemDataByName(am_model.am_C1.$sys, "NS1_P3");
	am_model.am_C1.am_NS3_AP1 = symGetSystemDataByName(am_model.am_C1.$sys, "NS3_AP1");
	am_model.am_C1.am_NS3_P3 = symGetSystemDataByName(am_model.am_C1.$sys, "NS3_P3");
	am_model.am_C1.am_NS3_AP2 = symGetSystemDataByName(am_model.am_C1.$sys, "NS3_AP2");
	am_model.am_C1.am_NS2_P1 = symGetSystemDataByName(am_model.am_C1.$sys, "NS2_P1");
	am_model.am_C1.am_NS1_P1 = symGetSystemDataByName(am_model.am_C1.$sys, "NS1_P1");
	am_model.am_C1.am_NS3_P2 = symGetSystemDataByName(am_model.am_C1.$sys, "NS3_P2");
	am_model.am_C1.am_NS1_AP2 = symGetSystemDataByName(am_model.am_C1.$sys, "NS1_AP2");
	am_model.am_C1.am_NS2_P2 = symGetSystemDataByName(am_model.am_C1.$sys, "NS2_P2");
	am_model.am_C1.am_NS2_AP2 = symGetSystemDataByName(am_model.am_C1.$sys, "NS2_AP2");
	am_model.am_C1.am_NS3_P1 = symGetSystemDataByName(am_model.am_C1.$sys, "NS3_P1");
	am_model.am_C1.am_NS1_P2 = symGetSystemDataByName(am_model.am_C1.$sys, "NS1_P2");
	am_model.am_die = symGetSystemDataByName(am_model.$sys, "die");
	am_model.am_V_Prozesszeit$var = symGetSystemDataByName(am_model.$sys, "V_Prozesszeit");
	am_model.am_V_Prozesszeit$var->data = (void*)&am_model.am_V_Prozesszeit;
	am_model.am_V_Balance$var = symGetSystemDataByName(am_model.$sys, "V_Balance");
	am_model.am_V_Balance$var->data = (void*)&am_model.am_V_Balance;
	am_model.am_P_Strat3 = symGetSystemDataByName(am_model.$sys, "P_Strat3");
	am_model.am_P_Strat4 = symGetSystemDataByName(am_model.$sys, "P_Strat4");
	am_model.am_V_Verteilregel$var = symGetSystemDataByName(am_model.$sys, "V_Verteilregel");
	am_model.am_V_Verteilregel$var->data = (void*)&am_model.am_V_Verteilregel;
	am_model.am_P_Init = symGetSystemDataByName(am_model.$sys, "P_Init");
	am_model.am_P_Umlauf = symGetSystemDataByName(am_model.$sys, "P_Umlauf");
	am_model.am_OPCTimestamp$var = symGetSystemDataByName(am_model.$sys, "OPCTimestamp");
	am_model.am_OPCTimestamp$var->data = (void*)&am_model.am_OPCTimestamp;
	am_model.am_P_Anlauf = symGetSystemDataByName(am_model.$sys, "P_Anlauf");
	am_model.am_C_Fertig = symGetSystemDataByName(am_model.$sys, "C_Fertig");
	am_model.am_V_NS_Traffic_Limit$var = symGetSystemDataByName(am_model.$sys, "V_NS_Traffic_Limit");
	am_model.am_V_NS_Traffic_Limit$var->data = (void*)&am_model.am_V_NS_Traffic_Limit;
	am_model.am_V_Aktuelle_Anzahl$var = symGetSystemDataByName(am_model.$sys, "V_Aktuelle_Anzahl");
	am_model.am_V_Aktuelle_Anzahl$var->data = (void*)&am_model.am_V_Aktuelle_Anzahl;
	am_model.am_P_Strat1 = symGetSystemDataByName(am_model.$sys, "P_Strat1");
	am_model.am_P_Strat2 = symGetSystemDataByName(am_model.$sys, "P_Strat2");
	am_model.am_stream_R_AP4_1 = symGetSystemDataByName(am_model.$sys, "stream_R_AP4_1");
	am_model.am_modelsys = symGetSystemDataByName(am_model.$sys, "modelsys");
	am_model.am_A_Nummer_NS$att = symGetSystemDataByName(am_model.$sys, "A_Nummer_NS");
	am_model.am_A_Str$att = symGetSystemDataByName(am_model.$sys, "A_Str");
	am_model.am_A_Modulo$att = symGetSystemDataByName(am_model.$sys, "A_Modulo");
	am_model.am_stream_LInit_1 = symGetSystemDataByName(am_model.$sys, "stream_LInit_1");
	am_model.am_stream_R_AP3_1 = symGetSystemDataByName(am_model.$sys, "stream_R_AP3_1");
	am_model.am_A_Zustand$att = symGetSystemDataByName(am_model.$sys, "A_Zustand");
	am_model.am_stream_R_AP1_1 = symGetSystemDataByName(am_model.$sys, "stream_R_AP1_1");
	am_model.am_V_Prozesszeit_S$var = symGetSystemDataByName(am_model.$sys, "V_Prozesszeit_S");
	am_model.am_V_Prozesszeit_S$var->data = (void*)&am_model.am_V_Prozesszeit_S;
	am_model.am_V_NIO_Anteil$var = symGetSystemDataByName(am_model.$sys, "V_NIO_Anteil");
	am_model.am_V_NIO_Anteil$var->data = (void*)&am_model.am_V_NIO_Anteil;
	am_model.am_stream0 = symGetSystemDataByName(am_model.$sys, "stream0");
	am_model.am_stream_R_AP2_1 = symGetSystemDataByName(am_model.$sys, "stream_R_AP2_1");
	am_model.am_R_AP4 = symGetSystemDataByName(am_model.$sys, "R_AP4");
	am_model.am_A_Next_Station$att = symGetSystemDataByName(am_model.$sys, "A_Next_Station");
	am_model.am_R_AP1 = symGetSystemDataByName(am_model.$sys, "R_AP1");
	am_model.am_V_WT_Anzahl$var = symGetSystemDataByName(am_model.$sys, "V_WT_Anzahl");
	am_model.am_V_WT_Anzahl$var->data = (void*)&am_model.am_V_WT_Anzahl;
	am_model.am_R_AP2 = symGetSystemDataByName(am_model.$sys, "R_AP2");
	am_model.am_R_AP3 = symGetSystemDataByName(am_model.$sys, "R_AP3");
	am_model.am_L_WT = symGetSystemDataByName(am_model.$sys, "L_WT");
	am_model.am_P_NS = symGetSystemDataByName(am_model.$sys, "P_NS");
	am_model.am_OPCQuality$var = symGetSystemDataByName(am_model.$sys, "OPCQuality");
	am_model.am_OPCQuality$var->data = (void*)&am_model.am_OPCQuality;
	model_logic_init(&am_model);
	{
		Iter(List, FileList) it = Begin(List, FileList, &((ProcSystem*)am_model.$sys)->files);

	}
	{
		Iter(List, AMTypeList) it = Begin(List, AMTypeList, &((ProcSystem*)am_model.$sys)->types);

		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Acceleration);
		IterValue(List, AMTypeList, it)->valstrfunc = Acceleration_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(block*);
		IterValue(List, AMTypeList, it)->valstrfunc = BlockPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))BlockPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMBlockList*);
		IterValue(List, AMTypeList, it)->valstrfunc = BlockList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ASI_Color);
		IterValue(List, AMTypeList, it)->valstrfunc = Color_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))Color_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Container*);
		IterValue(List, AMTypeList, it)->valstrfunc = ContainerPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))ContainerPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMContainerList*);
		IterValue(List, AMTypeList, it)->valstrfunc = ContainerList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(counter*);
		IterValue(List, AMTypeList, it)->valstrfunc = CounterPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))CounterPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Distance);
		IterValue(List, AMTypeList, it)->valstrfunc = Distance_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(iofile*);
		IterValue(List, AMTypeList, it)->valstrfunc = FilePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))FilePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(bgraph*);
		IterValue(List, AMTypeList, it)->valstrfunc = GraphPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))GraphPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(int32);
		IterValue(List, AMTypeList, it)->valstrfunc = Integer_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(label*);
		IterValue(List, AMTypeList, it)->valstrfunc = LabelPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))LabelPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(load*);
		IterValue(List, AMTypeList, it)->valstrfunc = LoadPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))LoadPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMLoadList*);
		IterValue(List, AMTypeList, it)->valstrfunc = LoadList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(loadtype*);
		IterValue(List, AMTypeList, it)->valstrfunc = LoadTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))LoadTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(simloc*);
		IterValue(List, AMTypeList, it)->valstrfunc = Location_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))Location_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMLocationList*);
		IterValue(List, AMTypeList, it)->valstrfunc = LocationList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(LocationType*);
		IterValue(List, AMTypeList, it)->valstrfunc = LocationTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))LocationTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMLocationTypeList*);
		IterValue(List, AMTypeList, it)->valstrfunc = LocationTypeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(State_machine*);
		IterValue(List, AMTypeList, it)->valstrfunc = MonitorPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))MonitorPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ConvMotor*);
		IterValue(List, AMTypeList, it)->valstrfunc = MotorPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))MotorPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMConvMotorList*);
		IterValue(List, AMTypeList, it)->valstrfunc = MotorList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(MotorType*);
		IterValue(List, AMTypeList, it)->valstrfunc = MotorTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))MotorTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMMotorTypeList*);
		IterValue(List, AMTypeList, it)->valstrfunc = MotorTypeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ordlist*);
		IterValue(List, AMTypeList, it)->valstrfunc = OrderListPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))OrderListPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Path*);
		IterValue(List, AMTypeList, it)->valstrfunc = PathPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))PathPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMPathList*);
		IterValue(List, AMTypeList, it)->valstrfunc = PathList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AgvPathType*);
		IterValue(List, AMTypeList, it)->valstrfunc = PathTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))PathTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMAgvPathTypeList*);
		IterValue(List, AMTypeList, it)->valstrfunc = PathTypeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Photoeye*);
		IterValue(List, AMTypeList, it)->valstrfunc = PhotoeyePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))PhotoeyePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMPhotoList*);
		IterValue(List, AMTypeList, it)->valstrfunc = PhotoeyeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(PhotoeyeType*);
		IterValue(List, AMTypeList, it)->valstrfunc = PhotoeyeTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))PhotoeyeTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMPhotoeyeTypeList*);
		IterValue(List, AMTypeList, it)->valstrfunc = PhotoeyeTypeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(process*);
		IterValue(List, AMTypeList, it)->valstrfunc = ProcessPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))ProcessPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(queue*);
		IterValue(List, AMTypeList, it)->valstrfunc = QueuePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))QueuePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMQueueList*);
		IterValue(List, AMTypeList, it)->valstrfunc = QueueList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Rate);
		IterValue(List, AMTypeList, it)->valstrfunc = Rate_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(double);
		IterValue(List, AMTypeList, it)->valstrfunc = Real_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(resource*);
		IterValue(List, AMTypeList, it)->valstrfunc = ResourcePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))ResourcePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMResourceList*);
		IterValue(List, AMTypeList, it)->valstrfunc = ResourceList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(SchedJob*);
		IterValue(List, AMTypeList, it)->valstrfunc = SchedJobPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))SchedJobPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMSchedJobList*);
		IterValue(List, AMTypeList, it)->valstrfunc = SchedJobList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ConvSection*);
		IterValue(List, AMTypeList, it)->valstrfunc = SectionPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))SectionPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMConvSectionList*);
		IterValue(List, AMTypeList, it)->valstrfunc = SectionList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ConvSectionType*);
		IterValue(List, AMTypeList, it)->valstrfunc = SectionTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))SectionTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMConvSectionTypeList*);
		IterValue(List, AMTypeList, it)->valstrfunc = SectionTypeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(amSocket*);
		IterValue(List, AMTypeList, it)->valstrfunc = SocketPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))SocketPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(States*);
		IterValue(List, AMTypeList, it)->valstrfunc = StatePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))StatePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(rnstream*);
		IterValue(List, AMTypeList, it)->valstrfunc = StreamPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))StreamPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(char*);
		IterValue(List, AMTypeList, it)->valstrfunc = String_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMStringList*);
		IterValue(List, AMTypeList, it)->valstrfunc = StringList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(System*);
		IterValue(List, AMTypeList, it)->valstrfunc = SystemPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))SystemPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(table*);
		IterValue(List, AMTypeList, it)->valstrfunc = TablePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))TablePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ASITime);
		IterValue(List, AMTypeList, it)->valstrfunc = Time_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ConvTransfer*);
		IterValue(List, AMTypeList, it)->valstrfunc = TransferPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))TransferPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(TransferType*);
		IterValue(List, AMTypeList, it)->valstrfunc = TransferTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))TransferTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(vehicle*);
		IterValue(List, AMTypeList, it)->valstrfunc = VehiclePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))VehiclePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMVehicleList*);
		IterValue(List, AMTypeList, it)->valstrfunc = VehicleList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(VehSeg*);
		IterValue(List, AMTypeList, it)->valstrfunc = VehSegPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))VehSegPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMVehSegList*);
		IterValue(List, AMTypeList, it)->valstrfunc = VehSegList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Velocity);
		IterValue(List, AMTypeList, it)->valstrfunc = Velocity_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
	}

}

