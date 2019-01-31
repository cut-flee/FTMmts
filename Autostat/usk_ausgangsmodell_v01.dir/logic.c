// logic.c
// AutoMod 12.6.1 Generated File
// Build: 12.6.1.12
// Model name:	usk_ausgangsmodell_v01
// Model path:	C:\Users\AutoMod\Desktop\usk_ausgangsmodell_v01.dir\
// Generated:	Thu Jan 31 16:32:50 2019
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


#include "cdecls.h"


static int32
P_Init_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	int32 retval = Continue;
	{
		{
			create_l(am2_V_WT_Anzahl, am2_L_WT, am2_P_Anlauf, 0.0);
		}
		{
			this->nextproc = am2_die; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} /* end of P_Init_arriving */

static int32
P_Anlauf_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	int32 retval = Continue;
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			pushppa(this, P_Anlauf_arriving, Step 2, am_localargs);
			load_SetDestLoc(this, LocGetQualifier(am_model.am_C1.am_sta_Start, -9999));
			pushppa(this, move_in_loc, Step 1, NULL);
			return Continue; // go move into territory
Label2: ; // Step 2
		}
		{
			LdSetColor(this, 2);
			EntityChanged(0x00000040);
		}
		{
			this->attribute->am2_A_Nummer_NS = 0;
			EntityChanged(0x00000040);
		}
		{
			this->attribute->am2_A_Zustand = 1;
			EntityChanged(0x00000040);
		}
		{
			this->nextproc = am2_P_Umlauf; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} /* end of P_Anlauf_arriving */

static int32
P_Umlauf_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	int32 retval = Continue;
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			if (LdGetColor(this) == 1) {
				{
					pushppa(this, P_Umlauf_arriving, Step 2, am_localargs);
					load_SetDestLoc(this, LocGetQualifier(am_model.am_C1.am_NS6_Output, -9999));
					pushppa(this, travel_to_loc, Step 1, NULL);
					return Continue; // go move to location
Label2: ; // Step 2
				}
				{
					this->attribute->am2_A_Nummer_NS = 1;
					EntityChanged(0x00000040);
				}
				{
					LdSetColor(this, 2);
					EntityChanged(0x00000040);
				}
				{
					this->attribute->am2_A_Zustand = 1;
					EntityChanged(0x00000040);
				}
			}
		}
		{
			if (am2_V_Verteilregel == 1) {
				this->nextproc = am2_P_Strat1; /* send to ... */
				EntityChanged(W_LOAD);
				retval = Continue;
				goto LabelRet;
			}
		}
		{
			if (am2_V_Verteilregel == 2) {
				this->nextproc = am2_P_Strat2; /* send to ... */
				EntityChanged(W_LOAD);
				retval = Continue;
				goto LabelRet;
			}
		}
		{
			if (am2_V_Verteilregel == 3) {
				this->nextproc = am2_P_Strat3; /* send to ... */
				EntityChanged(W_LOAD);
				retval = Continue;
				goto LabelRet;
			}
		}
		{
			if (am2_V_Verteilregel == 4) {
				this->nextproc = am2_P_Strat4; /* send to ... */
				EntityChanged(W_LOAD);
				retval = Continue;
				goto LabelRet;
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} /* end of P_Umlauf_arriving */

static int32
P_Strat1_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	int32 retval = Continue;
	{
		{
			if (this->attribute->am2_A_Zustand == 1) {
				this->nextproc = &(am2_P_NS[1]); /* send to ... */
				EntityChanged(W_LOAD);
				retval = Continue;
				goto LabelRet;
			}
		}
		{
			if (this->attribute->am2_A_Zustand == 2) {
				this->nextproc = &(am2_P_NS[ValidIndex("am_model.am_P_NS", this->attribute->am2_A_Modulo + 2, 6)]); /* send to ... */
				EntityChanged(W_LOAD);
				retval = Continue;
				goto LabelRet;
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} /* end of P_Strat1_arriving */

static int32
P_Strat2_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	int32 retval = Continue;
	{
		{
			if (this->attribute->am2_A_Zustand == 1) {
				this->nextproc = &(am2_P_NS[1]); /* send to ... */
				EntityChanged(W_LOAD);
				retval = Continue;
				goto LabelRet;
			}
		}
		{
			if (this->attribute->am2_A_Zustand == 2) {
				this->nextproc = &(am2_P_NS[ValidIndex("am_model.am_P_NS", 6 - this->attribute->am2_A_Modulo, 6)]); /* send to ... */
				EntityChanged(W_LOAD);
				retval = Continue;
				goto LabelRet;
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} /* end of P_Strat2_arriving */

static int32
P_Strat3_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	int32 retval = Continue;
	{
		{
			if (this->attribute->am2_A_Zustand == 1) {
				this->nextproc = &(am2_P_NS[1]); /* send to ... */
				EntityChanged(W_LOAD);
				retval = Continue;
				goto LabelRet;
			}
		}
		{
			if (this->attribute->am2_A_Zustand == 2) {
				{
					if (this->attribute->am2_A_Nummer_NS < 6) {
						this->nextproc = &(am2_P_NS[ValidIndex("am_model.am_P_NS", this->attribute->am2_A_Nummer_NS + 1, 6)]); /* send to ... */
						EntityChanged(W_LOAD);
						retval = Continue;
						goto LabelRet;
					}
				}
				{
					if (this->attribute->am2_A_Nummer_NS == 6) {
						this->nextproc = &(am2_P_NS[2]); /* send to ... */
						EntityChanged(W_LOAD);
						retval = Continue;
						goto LabelRet;
					}
				}
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} /* end of P_Strat3_arriving */

static int32
P_Strat4_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	int32 retval = Continue;
	{
		{
			if (this->attribute->am2_A_Zustand == 1) {
				this->nextproc = &(am2_P_NS[1]); /* send to ... */
				EntityChanged(W_LOAD);
				retval = Continue;
				goto LabelRet;
			}
		}
		{
			if (this->attribute->am2_A_Zustand == 2) {
				{
					if (this->attribute->am2_A_Nummer_NS == 1) {
						this->nextproc = &(am2_P_NS[ValidIndex("am_model.am_P_NS", this->attribute->am2_A_Modulo + 2, 6)]); /* send to ... */
						EntityChanged(W_LOAD);
						retval = Continue;
						goto LabelRet;
					}
				}
				{
					this->nextproc = am2_P_Strat3; /* send to ... */
					EntityChanged(W_LOAD);
					retval = Continue;
					goto LabelRet;
				}
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} /* end of P_Strat4_arriving */


static double
Funcl0(load* this)
{
	return (100 - am2_V_NIO_Anteil);
}


static double
Funcl1(load* this)
{
	return am2_V_NIO_Anteil;
}


typedef struct {
	double (*freq)(load*);
	ASI_Color value;
} Oneof0;

static Oneof0 List0[] = {
	{ Funcl0, 2},
	{ Funcl1, 1}
};

static ASI_Color
oneofFunc0(load* this)
{
	size_t ind;
	size_t i;
	static Real freq[2];

	tprintf(tfp, "In oneof\n");
	for (i = 0; i < 2; i++)
		freq[i] = List0[i].freq(this);
	ind = oneof_n(am2_stream0, 2, freq);
	return List0[ind].value;
}

static int32
P_NS_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	int32 retval = Continue;
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	case Step 3: goto Label3;
	case Step 4: goto Label4;
	case Step 5: goto Label5;
	case Step 6: goto Label6;
	case Step 7: goto Label7;
	case Step 8: goto Label8;
	case Step 9: goto Label9;
	case Step 10: goto Label10;
	case Step 11: goto Label11;
	case Step 12: goto Label12;
	case Step 13: goto Label13;
	case Step 14: goto Label14;
	case Step 15: goto Label15;
	case Step 16: goto Label16;
	case Step 17: goto Label17;
	case Step 18: goto Label18;
	case Step 19: goto Label19;
	case Step 20: goto Label20;
	case Step 21: goto Label21;
	case Step 22: goto Label22;
	case Step 23: goto Label23;
	case Step 24: goto Label24;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			{
				char* pArg1 = "C1:NS";
				int32 pArg2 = CurProcIndex();
				char* pArg3 = "_Input";

				char* am_tmp;
				am_tmp = bufsprintf("%s%d%s", pArg1, pArg2, pArg3);
				SetString(&this->attribute->am2_A_Str, am_tmp);
				EntityChanged(0x00000040);
			}
		}
		{
			this->attribute->am2_A_Next_Station = str2Location(this->attribute->am2_A_Str);
			EntityChanged(0x00000040);
		}
		{
			pushppa(this, P_NS_arriving, Step 2, am_localargs);
			load_SetDestLoc(this, this->attribute->am2_A_Next_Station);
			pushppa(this, travel_to_loc, Step 1, NULL);
			return Continue; // go move to location
Label2: ; // Step 2
		}
		{
			this->attribute->am2_A_Nummer_NS = CurProcIndex();
			EntityChanged(0x00000040);
		}
		{
			if (LdGetColor(this) == 1) {
				{
					{
						char* pArg1 = "C1:NS";
						int32 pArg2 = CurProcIndex();
						char* pArg3 = "_Output";

						char* am_tmp;
						am_tmp = bufsprintf("%s%d%s", pArg1, pArg2, pArg3);
						SetString(&this->attribute->am2_A_Str, am_tmp);
						EntityChanged(0x00000040);
					}
				}
				{
					this->attribute->am2_A_Next_Station = str2Location(this->attribute->am2_A_Str);
					EntityChanged(0x00000040);
				}
				{
					pushppa(this, P_NS_arriving, Step 3, am_localargs);
					load_SetDestLoc(this, this->attribute->am2_A_Next_Station);
					pushppa(this, travel_to_loc, Step 1, NULL);
					return Continue; // go move to location
Label3: ; // Step 3
				}
				{
					this->nextproc = am2_P_Umlauf; /* send to ... */
					EntityChanged(W_LOAD);
					retval = Continue;
					goto LabelRet;
				}
			}
		}
		{
			{
				char* pArg1 = "C1:NS";
				int32 pArg2 = CurProcIndex();
				char* pArg3 = "_P1";

				char* am_tmp;
				am_tmp = bufsprintf("%s%d%s", pArg1, pArg2, pArg3);
				SetString(&this->attribute->am2_A_Str, am_tmp);
				EntityChanged(0x00000040);
			}
		}
		{
			this->attribute->am2_A_Next_Station = str2Location(this->attribute->am2_A_Str);
			EntityChanged(0x00000040);
		}
		{
			if (LocGetCurConts(ValidPtr(this->attribute->am2_A_Next_Station, 40, simloc*)) > 0) {
				{
					{
						char* pArg1 = "C1:NS";
						int32 pArg2 = CurProcIndex();
						char* pArg3 = "_Output";

						char* am_tmp;
						am_tmp = bufsprintf("%s%d%s", pArg1, pArg2, pArg3);
						SetString(&this->attribute->am2_A_Str, am_tmp);
						EntityChanged(0x00000040);
					}
				}
				{
					this->attribute->am2_A_Next_Station = str2Location(this->attribute->am2_A_Str);
					EntityChanged(0x00000040);
				}
				{
					pushppa(this, P_NS_arriving, Step 4, am_localargs);
					load_SetDestLoc(this, this->attribute->am2_A_Next_Station);
					pushppa(this, travel_to_loc, Step 1, NULL);
					return Continue; // go move to location
Label4: ; // Step 4
				}
				{
					this->nextproc = am2_P_Umlauf; /* send to ... */
					EntityChanged(W_LOAD);
					retval = Continue;
					goto LabelRet;
				}
			}
		}
		{
			{
				char* pArg1 = "C1:NS";
				int32 pArg2 = CurProcIndex();
				char* pArg3 = "_P1";

				char* am_tmp;
				am_tmp = bufsprintf("%s%d%s", pArg1, pArg2, pArg3);
				SetString(&this->attribute->am2_A_Str, am_tmp);
				EntityChanged(0x00000040);
			}
		}
		{
			this->attribute->am2_A_Next_Station = str2Location(this->attribute->am2_A_Str);
			EntityChanged(0x00000040);
		}
		{
			pushppa(this, P_NS_arriving, Step 5, am_localargs);
			load_SetDestLoc(this, this->attribute->am2_A_Next_Station);
			pushppa(this, travel_to_loc, Step 1, NULL);
			return Continue; // go move to location
Label5: ; // Step 5
		}
		{
			{
				char* pArg1 = "C1:NS";
				int32 pArg2 = CurProcIndex();
				char* pArg3 = "_P2";

				char* am_tmp;
				am_tmp = bufsprintf("%s%d%s", pArg1, pArg2, pArg3);
				SetString(&this->attribute->am2_A_Str, am_tmp);
				EntityChanged(0x00000040);
			}
		}
		{
			this->attribute->am2_A_Next_Station = str2Location(this->attribute->am2_A_Str);
			EntityChanged(0x00000040);
		}
		{
			pushppa(this, P_NS_arriving, Step 6, am_localargs);
			load_SetDestLoc(this, this->attribute->am2_A_Next_Station);
			pushppa(this, travel_to_loc, Step 1, NULL);
			return Continue; // go move to location
Label6: ; // Step 6
		}
		{
			{
				char* pArg1 = "C1:NS";
				int32 pArg2 = CurProcIndex();
				char* pArg3 = "_AP1";

				char* am_tmp;
				am_tmp = bufsprintf("%s%d%s", pArg1, pArg2, pArg3);
				SetString(&this->attribute->am2_A_Str, am_tmp);
				EntityChanged(0x00000040);
			}
		}
		{
			this->attribute->am2_A_Next_Station = str2Location(this->attribute->am2_A_Str);
			EntityChanged(0x00000040);
		}
		{
			pushppa(this, P_NS_arriving, Step 7, am_localargs);
			load_SetDestLoc(this, this->attribute->am2_A_Next_Station);
			pushppa(this, travel_to_loc, Step 1, NULL);
			return Continue; // go move to location
Label7: ; // Step 7
		}
		{
			if (CurProcIndex() == 1) {
				return usefor(&(am2_R_AP1[ValidIndex("am_model.am_R_AP1", CurProcIndex(), 6)]), 1, this, P_NS_arriving, Step 8, am_localargs, ToModelTime(normal1(am2_stream0, am2_V_Prozesszeit / am2_V_Balance, am2_V_Prozesszeit_S), UNITSECONDS));
Label8: ; // Step 8
			}
			else {
				return usefor(&(am2_R_AP1[ValidIndex("am_model.am_R_AP1", CurProcIndex(), 6)]), 1, this, P_NS_arriving, Step 9, am_localargs, ToModelTime(normal1(am2_stream0, am2_V_Prozesszeit, am2_V_Prozesszeit_S), UNITSECONDS));
Label9: ; // Step 9
			}
		}
		{
			{
				char* pArg1 = "C1:NS";
				int32 pArg2 = CurProcIndex();
				char* pArg3 = "_P3";

				char* am_tmp;
				am_tmp = bufsprintf("%s%d%s", pArg1, pArg2, pArg3);
				SetString(&this->attribute->am2_A_Str, am_tmp);
				EntityChanged(0x00000040);
			}
		}
		{
			this->attribute->am2_A_Next_Station = str2Location(this->attribute->am2_A_Str);
			EntityChanged(0x00000040);
		}
		{
			pushppa(this, P_NS_arriving, Step 10, am_localargs);
			load_SetDestLoc(this, this->attribute->am2_A_Next_Station);
			pushppa(this, travel_to_loc, Step 1, NULL);
			return Continue; // go move to location
Label10: ; // Step 10
		}
		{
			{
				char* pArg1 = "C1:NS";
				int32 pArg2 = CurProcIndex();
				char* pArg3 = "_AP2";

				char* am_tmp;
				am_tmp = bufsprintf("%s%d%s", pArg1, pArg2, pArg3);
				SetString(&this->attribute->am2_A_Str, am_tmp);
				EntityChanged(0x00000040);
			}
		}
		{
			this->attribute->am2_A_Next_Station = str2Location(this->attribute->am2_A_Str);
			EntityChanged(0x00000040);
		}
		{
			pushppa(this, P_NS_arriving, Step 11, am_localargs);
			load_SetDestLoc(this, this->attribute->am2_A_Next_Station);
			pushppa(this, travel_to_loc, Step 1, NULL);
			return Continue; // go move to location
Label11: ; // Step 11
		}
		{
			if (CurProcIndex() == 1) {
				return usefor(&(am2_R_AP2[ValidIndex("am_model.am_R_AP2", CurProcIndex(), 6)]), 1, this, P_NS_arriving, Step 12, am_localargs, ToModelTime(normal1(am2_stream0, am2_V_Prozesszeit / am2_V_Balance, am2_V_Prozesszeit_S), UNITSECONDS));
Label12: ; // Step 12
			}
			else {
				return usefor(&(am2_R_AP2[ValidIndex("am_model.am_R_AP2", CurProcIndex(), 6)]), 1, this, P_NS_arriving, Step 13, am_localargs, ToModelTime(normal1(am2_stream0, am2_V_Prozesszeit, am2_V_Prozesszeit_S), UNITSECONDS));
Label13: ; // Step 13
			}
		}
		{
			{
				char* pArg1 = "C1:NS";
				int32 pArg2 = CurProcIndex();
				char* pArg3 = "_P4";

				char* am_tmp;
				am_tmp = bufsprintf("%s%d%s", pArg1, pArg2, pArg3);
				SetString(&this->attribute->am2_A_Str, am_tmp);
				EntityChanged(0x00000040);
			}
		}
		{
			this->attribute->am2_A_Next_Station = str2Location(this->attribute->am2_A_Str);
			EntityChanged(0x00000040);
		}
		{
			pushppa(this, P_NS_arriving, Step 14, am_localargs);
			load_SetDestLoc(this, this->attribute->am2_A_Next_Station);
			pushppa(this, travel_to_loc, Step 1, NULL);
			return Continue; // go move to location
Label14: ; // Step 14
		}
		{
			{
				char* pArg1 = "C1:NS";
				int32 pArg2 = CurProcIndex();
				char* pArg3 = "_AP3";

				char* am_tmp;
				am_tmp = bufsprintf("%s%d%s", pArg1, pArg2, pArg3);
				SetString(&this->attribute->am2_A_Str, am_tmp);
				EntityChanged(0x00000040);
			}
		}
		{
			this->attribute->am2_A_Next_Station = str2Location(this->attribute->am2_A_Str);
			EntityChanged(0x00000040);
		}
		{
			pushppa(this, P_NS_arriving, Step 15, am_localargs);
			load_SetDestLoc(this, this->attribute->am2_A_Next_Station);
			pushppa(this, travel_to_loc, Step 1, NULL);
			return Continue; // go move to location
Label15: ; // Step 15
		}
		{
			if (CurProcIndex() == 1) {
				return usefor(&(am2_R_AP3[ValidIndex("am_model.am_R_AP3", CurProcIndex(), 6)]), 1, this, P_NS_arriving, Step 16, am_localargs, ToModelTime(normal1(am2_stream0, am2_V_Prozesszeit / am2_V_Balance, am2_V_Prozesszeit_S), UNITSECONDS));
Label16: ; // Step 16
			}
			else {
				return usefor(&(am2_R_AP3[ValidIndex("am_model.am_R_AP3", CurProcIndex(), 6)]), 1, this, P_NS_arriving, Step 17, am_localargs, ToModelTime(normal1(am2_stream0, am2_V_Prozesszeit, am2_V_Prozesszeit_S), UNITSECONDS));
Label17: ; // Step 17
			}
		}
		{
			{
				char* pArg1 = "C1:NS";
				int32 pArg2 = CurProcIndex();
				char* pArg3 = "_P5";

				char* am_tmp;
				am_tmp = bufsprintf("%s%d%s", pArg1, pArg2, pArg3);
				SetString(&this->attribute->am2_A_Str, am_tmp);
				EntityChanged(0x00000040);
			}
		}
		{
			this->attribute->am2_A_Next_Station = str2Location(this->attribute->am2_A_Str);
			EntityChanged(0x00000040);
		}
		{
			pushppa(this, P_NS_arriving, Step 18, am_localargs);
			load_SetDestLoc(this, this->attribute->am2_A_Next_Station);
			pushppa(this, travel_to_loc, Step 1, NULL);
			return Continue; // go move to location
Label18: ; // Step 18
		}
		{
			{
				char* pArg1 = "C1:NS";
				int32 pArg2 = CurProcIndex();
				char* pArg3 = "_AP4";

				char* am_tmp;
				am_tmp = bufsprintf("%s%d%s", pArg1, pArg2, pArg3);
				SetString(&this->attribute->am2_A_Str, am_tmp);
				EntityChanged(0x00000040);
			}
		}
		{
			this->attribute->am2_A_Next_Station = str2Location(this->attribute->am2_A_Str);
			EntityChanged(0x00000040);
		}
		{
			pushppa(this, P_NS_arriving, Step 19, am_localargs);
			load_SetDestLoc(this, this->attribute->am2_A_Next_Station);
			pushppa(this, travel_to_loc, Step 1, NULL);
			return Continue; // go move to location
Label19: ; // Step 19
		}
		{
			if (CurProcIndex() == 1) {
				return usefor(&(am2_R_AP4[ValidIndex("am_model.am_R_AP4", CurProcIndex(), 6)]), 1, this, P_NS_arriving, Step 20, am_localargs, ToModelTime(normal1(am2_stream0, am2_V_Prozesszeit / am2_V_Balance, am2_V_Prozesszeit_S), UNITSECONDS));
Label20: ; // Step 20
			}
			else {
				return usefor(&(am2_R_AP4[ValidIndex("am_model.am_R_AP4", CurProcIndex(), 6)]), 1, this, P_NS_arriving, Step 21, am_localargs, ToModelTime(normal1(am2_stream0, am2_V_Prozesszeit, am2_V_Prozesszeit_S), UNITSECONDS));
Label21: ; // Step 21
			}
		}
		{
			if (am2_V_NIO_Anteil > 0 && CurProcIndex() == 1) {
				LdSetColor(this, oneofFunc0(this));
				EntityChanged(0x00000040);
			}
		}
		{
			{
				char* pArg1 = "C1:NS";
				int32 pArg2 = CurProcIndex();
				char* pArg3 = "_P6";

				char* am_tmp;
				am_tmp = bufsprintf("%s%d%s", pArg1, pArg2, pArg3);
				SetString(&this->attribute->am2_A_Str, am_tmp);
				EntityChanged(0x00000040);
			}
		}
		{
			this->attribute->am2_A_Next_Station = str2Location(this->attribute->am2_A_Str);
			EntityChanged(0x00000040);
		}
		{
			pushppa(this, P_NS_arriving, Step 22, am_localargs);
			load_SetDestLoc(this, this->attribute->am2_A_Next_Station);
			pushppa(this, travel_to_loc, Step 1, NULL);
			return Continue; // go move to location
Label22: ; // Step 22
		}
		{
			if (CurProcIndex() == 1 && LdGetColor(this) != 1) {
				{
					this->attribute->am2_A_Modulo = am2_V_Aktuelle_Anzahl;
					EntityChanged(0x00000040);
				}
				{
					am2_V_Aktuelle_Anzahl = (am2_V_Aktuelle_Anzahl + 1) % 5;
					EntityChanged(0x01000000);
				}
				{
					if (this->attribute->am2_A_Modulo == 0) {
						LdSetColor(this, 10);
						EntityChanged(0x00000040);
					}
				}
				{
					if (this->attribute->am2_A_Modulo == 1) {
						LdSetColor(this, 3);
						EntityChanged(0x00000040);
					}
				}
				{
					if (this->attribute->am2_A_Modulo == 2) {
						LdSetColor(this, 4);
						EntityChanged(0x00000040);
					}
				}
				{
					if (this->attribute->am2_A_Modulo == 3) {
						LdSetColor(this, 12);
						EntityChanged(0x00000040);
					}
				}
				{
					if (this->attribute->am2_A_Modulo == 4) {
						LdSetColor(this, 55);
						EntityChanged(0x00000040);
					}
				}
			}
		}
		{
			if (CurProcIndex() == 1) {
				this->attribute->am2_A_Zustand = 2;
				EntityChanged(0x00000040);
			}
			else {
				{
					this->attribute->am2_A_Zustand = 1;
					EntityChanged(0x00000040);
				}
				{
					LdSetColor(this, 2);
					EntityChanged(0x00000040);
				}
				{
					{
						int result = inccount(am2_C_Fertig, 1, this, P_NS_arriving, Step 23, am_localargs);
						if (result != Continue) return result;
Label23: ;	// Step 23
					}
				}
			}
		}
		{
			{
				char* pArg1 = "C1:NS";
				int32 pArg2 = CurProcIndex();
				char* pArg3 = "_Output";

				char* am_tmp;
				am_tmp = bufsprintf("%s%d%s", pArg1, pArg2, pArg3);
				SetString(&this->attribute->am2_A_Str, am_tmp);
				EntityChanged(0x00000040);
			}
		}
		{
			this->attribute->am2_A_Next_Station = str2Location(this->attribute->am2_A_Str);
			EntityChanged(0x00000040);
		}
		{
			pushppa(this, P_NS_arriving, Step 24, am_localargs);
			load_SetDestLoc(this, this->attribute->am2_A_Next_Station);
			pushppa(this, travel_to_loc, Step 1, NULL);
			return Continue; // go move to location
Label24: ; // Step 24
		}
		{
			this->nextproc = am2_P_Umlauf; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} /* end of P_NS_arriving */



/* init function for logic.m */
void
model_logic_init(struct model_struct* data)
{
	data->am_P_Init->aprc = P_Init_arriving;
	data->am_P_Anlauf->aprc = P_Anlauf_arriving;
	data->am_P_Umlauf->aprc = P_Umlauf_arriving;
	data->am_P_Strat1->aprc = P_Strat1_arriving;
	data->am_P_Strat2->aprc = P_Strat2_arriving;
	data->am_P_Strat3->aprc = P_Strat3_arriving;
	data->am_P_Strat4->aprc = P_Strat4_arriving;
	data->am_P_NS->aprc = P_NS_arriving;
}

