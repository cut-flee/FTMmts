// decls.h
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


#ifndef __DECLS_H__
#define __DECLS_H__

#include "user.h"
struct model_C1_struct {
	System* $sys;
	LocHead* am_NS2_AP4;
	LocHead* am_NS1_AP4;
	LocHead* am_NS3_AP3;
	LocHead* am_NS2_AP3;
	LocHead* am_NS3_AP4;
	LocHead* am_NS1_AP3;
	LocHead* am_NS6_Input;
	LocHead* am_NS5_Input;
	LocHead* am_NS4_Input;
	LocHead* am_NS3_Input;
	LocHead* am_NS2_Input;
	LocHead* am_NS1_Input;
	LocHead* am_NS5_AP4;
	LocHead* am_NS6_AP3;
	LocHead* am_NS4_AP4;
	LocHead* am_NS5_AP3;
	LocHead* am_NS4_AP3;
	LocHead* am_NS6_AP4;
	LocHead* am_NS2_Output;
	LocHead* am_NS1_Output;
	LocHead* am_NS3_Output;
	LocHead* am_NS5_Output;
	LocHead* am_NS4_Output;
	LocHead* am_NS6_Output;
	LocHead* am_NS1_P6;
	LocHead* am_NS2_P6;
	LocHead* am_NS3_P6;
	LocHead* am_NS1_P4;
	LocHead* am_sta_Umlauf;
	LocHead* am_NS3_P5;
	LocHead* am_NS2_P4;
	LocHead* am_NS3_P4;
	LocHead* am_NS1_P5;
	LocHead* am_NS2_P5;
	LocHead* am_NS6_P5;
	LocHead* am_NS4_P4;
	LocHead* am_NS5_P4;
	LocHead* am_NS4_P5;
	LocHead* am_NS6_P4;
	LocHead* am_NS5_P5;
	LocHead* am_NS4_P6;
	LocHead* am_NS5_P6;
	LocHead* am_NS6_P6;
	LocHead* am_NS5_P1;
	LocHead* am_NS6_AP2;
	System* am_parentsys;
	LocHead* am_NS6_P2;
	LocHead* am_NS4_P1;
	LocHead* am_sta_Start;
	LocHead* am_NS5_P2;
	LocHead* am_NS4_AP2;
	LocHead* am_NS4_P2;
	LocHead* am_NS6_P1;
	LocHead* am_NS5_AP2;
	LocHead* am_NS4_AP1;
	LocHead* am_NS5_P3;
	LocHead* am_NS4_P3;
	LocHead* am_NS5_AP1;
	LocHead* am_NS6_AP1;
	LocHead* am_NS6_P3;
	LocHead* am_NS2_P3;
	LocHead* am_NS1_AP1;
	LocHead* am_NS2_AP1;
	LocHead* am_NS1_P3;
	LocHead* am_NS3_AP1;
	LocHead* am_NS3_P3;
	LocHead* am_NS3_AP2;
	LocHead* am_NS2_P1;
	LocHead* am_NS1_P1;
	LocHead* am_NS3_P2;
	LocHead* am_NS1_AP2;
	LocHead* am_NS2_P2;
	LocHead* am_NS2_AP2;
	LocHead* am_NS3_P1;
	LocHead* am_NS1_P2;
};
char* Acceleration_valstrfunc(void*);
Acceleration Acceleration_strvalfunc(char*);
char* BlockPtr_valstrfunc(void*);
block* BlockPtr_strvalfunc(char*);
char* BlockList_valstrfunc(void*);
char* Color_valstrfunc(void*);
ASI_Color Color_strvalfunc(char*);
char* ContainerPtr_valstrfunc(void*);
Container* ContainerPtr_strvalfunc(char*);
char* ContainerList_valstrfunc(void*);
char* CounterPtr_valstrfunc(void*);
counter* CounterPtr_strvalfunc(char*);
char* Distance_valstrfunc(void*);
Distance Distance_strvalfunc(char*);
char* FilePtr_valstrfunc(void*);
iofile* FilePtr_strvalfunc(char*);
char* GraphPtr_valstrfunc(void*);
bgraph* GraphPtr_strvalfunc(char*);
char* Integer_valstrfunc(void*);
int32 Integer_strvalfunc(char*);
char* LabelPtr_valstrfunc(void*);
label* LabelPtr_strvalfunc(char*);
char* LoadPtr_valstrfunc(void*);
load* LoadPtr_strvalfunc(char*);
char* LoadList_valstrfunc(void*);
char* LoadTypePtr_valstrfunc(void*);
loadtype* LoadTypePtr_strvalfunc(char*);
char* Location_valstrfunc(void*);
simloc* Location_strvalfunc(char*);
char* LocationList_valstrfunc(void*);
char* LocationTypePtr_valstrfunc(void*);
LocationType* LocationTypePtr_strvalfunc(char*);
char* LocationTypeList_valstrfunc(void*);
char* MonitorPtr_valstrfunc(void*);
State_machine* MonitorPtr_strvalfunc(char*);
char* MotorPtr_valstrfunc(void*);
ConvMotor* MotorPtr_strvalfunc(char*);
char* MotorList_valstrfunc(void*);
char* MotorTypePtr_valstrfunc(void*);
MotorType* MotorTypePtr_strvalfunc(char*);
char* MotorTypeList_valstrfunc(void*);
char* OrderListPtr_valstrfunc(void*);
ordlist* OrderListPtr_strvalfunc(char*);
char* PathPtr_valstrfunc(void*);
Path* PathPtr_strvalfunc(char*);
char* PathList_valstrfunc(void*);
char* PathTypePtr_valstrfunc(void*);
AgvPathType* PathTypePtr_strvalfunc(char*);
char* PathTypeList_valstrfunc(void*);
char* PhotoeyePtr_valstrfunc(void*);
Photoeye* PhotoeyePtr_strvalfunc(char*);
char* PhotoeyeList_valstrfunc(void*);
char* PhotoeyeTypePtr_valstrfunc(void*);
PhotoeyeType* PhotoeyeTypePtr_strvalfunc(char*);
char* PhotoeyeTypeList_valstrfunc(void*);
char* ProcessPtr_valstrfunc(void*);
process* ProcessPtr_strvalfunc(char*);
char* QueuePtr_valstrfunc(void*);
queue* QueuePtr_strvalfunc(char*);
char* QueueList_valstrfunc(void*);
char* Rate_valstrfunc(void*);
Rate Rate_strvalfunc(char*);
char* Real_valstrfunc(void*);
double Real_strvalfunc(char*);
char* ResourcePtr_valstrfunc(void*);
resource* ResourcePtr_strvalfunc(char*);
char* ResourceList_valstrfunc(void*);
char* SchedJobPtr_valstrfunc(void*);
SchedJob* SchedJobPtr_strvalfunc(char*);
char* SchedJobList_valstrfunc(void*);
char* SectionPtr_valstrfunc(void*);
ConvSection* SectionPtr_strvalfunc(char*);
char* SectionList_valstrfunc(void*);
char* SectionTypePtr_valstrfunc(void*);
ConvSectionType* SectionTypePtr_strvalfunc(char*);
char* SectionTypeList_valstrfunc(void*);
char* SocketPtr_valstrfunc(void*);
amSocket* SocketPtr_strvalfunc(char*);
char* StatePtr_valstrfunc(void*);
States* StatePtr_strvalfunc(char*);
char* StreamPtr_valstrfunc(void*);
rnstream* StreamPtr_strvalfunc(char*);
char* String_valstrfunc(void*);
char* String_strvalfunc(char*);
char* StringList_valstrfunc(void*);
char* SystemPtr_valstrfunc(void*);
System* SystemPtr_strvalfunc(char*);
char* TablePtr_valstrfunc(void*);
table* TablePtr_strvalfunc(char*);
char* Time_valstrfunc(void*);
ASITime Time_strvalfunc(char*);
char* TransferPtr_valstrfunc(void*);
ConvTransfer* TransferPtr_strvalfunc(char*);
char* TransferTypePtr_valstrfunc(void*);
TransferType* TransferTypePtr_strvalfunc(char*);
char* VehiclePtr_valstrfunc(void*);
vehicle* VehiclePtr_strvalfunc(char*);
char* VehicleList_valstrfunc(void*);
char* VehSegPtr_valstrfunc(void*);
VehSeg* VehSegPtr_strvalfunc(char*);
char* VehSegList_valstrfunc(void*);
char* Velocity_valstrfunc(void*);
Velocity Velocity_strvalfunc(char*);
struct model_struct {
	System* $sys;
	process* am_die;
	variable* am_V_Prozesszeit$var;
	double am_V_Prozesszeit;
	variable* am_V_Balance$var;
	double am_V_Balance;
	process* am_P_Strat3;
	process* am_P_Strat4;
	variable* am_V_Verteilregel$var;
	int32 am_V_Verteilregel;
	process* am_P_Init;
	process* am_P_Umlauf;
	variable* am_OPCTimestamp$var;
	char* am_OPCTimestamp;
	process* am_P_Anlauf;
	counter* am_C_Fertig;
	variable* am_V_NS_Traffic_Limit$var;
	int32 am_V_NS_Traffic_Limit;
	variable* am_V_Aktuelle_Anzahl$var;
	int32 am_V_Aktuelle_Anzahl;
	process* am_P_Strat1;
	process* am_P_Strat2;
	rnstream* am_stream_R_AP4_1;
	System* am_modelsys;
	attribute* am_A_Nummer_NS$att;
	attribute* am_A_Str$att;
	attribute* am_A_Modulo$att;
	rnstream* am_stream_LInit_1;
	rnstream* am_stream_R_AP3_1;
	attribute* am_A_Zustand$att;
	rnstream* am_stream_R_AP1_1;
	variable* am_V_Prozesszeit_S$var;
	double am_V_Prozesszeit_S;
	variable* am_V_NIO_Anteil$var;
	double am_V_NIO_Anteil;
	rnstream* am_stream0;
	rnstream* am_stream_R_AP2_1;
	resource* am_R_AP4;
	attribute* am_A_Next_Station$att;
	resource* am_R_AP1;
	variable* am_V_WT_Anzahl$var;
	int32 am_V_WT_Anzahl;
	resource* am_R_AP2;
	resource* am_R_AP3;
	loadtype* am_L_WT;
	struct model_C1_struct am_C1;
	process* am_P_NS;
	variable* am_OPCQuality$var;
	int32 am_OPCQuality;
};
extern struct model_struct am_model;
void initglobs0();
#endif // __DECLS_H__
