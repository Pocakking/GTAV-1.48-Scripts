#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	char* sLocal_47 = NULL;
	char* sLocal_48 = NULL;
	char* sLocal_49 = NULL;
	vector3 vLocal_50 = { 0f, 0f, 0f };
	vector3 vLocal_51 = { 0f, 0f, 0f };
	int iLocal_52 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	sLocal_47 = "CHECKPOINT_NORMAL";
	sLocal_48 = "CHECKPOINT_MISSED";
	sLocal_49 = "CHECKPOINT_PERFECT";
	vLocal_50 = { 1694.74f, 3276.502f, 41.2796f };
	vLocal_51 = { 8.79494f, 0.59893f, 154.8464f };
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	HUD::_SET_DIRECTOR_MODE(0);
	MISC::_SHOW_PED_IN_PAUSE_MENU(0);
	STREAMING::REMOVE_IPL("prologue_DistantLights");
	STREAMING::REMOVE_IPL("prologue_LODLights");
	iLocal_52 = 0;
	bVar0 = func_40();
	if (MISC::_0xA049A5BE0F04F2F8() || MISC::_0x3BBBD13E5041A79E())
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		SCRIPT::_0xB1577667C3708F9B();
	}
	MISC::_USE_FREEMODE_MAP_BEHAVIOR(0);
	func_39(joaat("mp_registration"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mp_registration"));
	func_39(joaat("mp_fm_registration"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mp_fm_registration"));
	func_39(joaat("tunables_registration"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("tunables_registration"));
	func_39(joaat("sc_lb_global_block"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("sc_lb_global_block"));
	func_39(joaat("mp_save_game_global_block"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mp_save_game_global_block"));
	func_39(joaat("mp_prop_global_block"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mp_prop_global_block"));
	func_39(joaat("mp_prop_special_global_block"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mp_prop_special_global_block"));
	func_39(joaat("title_update_registration"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("title_update_registration"));
	func_39(-556768532, 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(-556768532);
	func_39(-1350801275, 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(-1350801275);
	Global_4270166 = 0;
	func_39(joaat("sp_dlc_registration"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("sp_dlc_registration"));
	func_39(joaat("sp_pilotschool_reg"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("sp_pilotschool_reg"));
	func_38();
	switch (iLocal_52)
	{
		case 0:
			func_39(joaat("standard_global_init"), 1424);
			SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("standard_global_init"));
			break;
	}
	SYSTEM::WAIT(0);
	Global_71592 = 1;
	Global_2 = bVar0;
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	switch (iLocal_52)
	{
		case 0:
			Global_2621550 = 0;
			Global_2621549 = 0;
			func_39(joaat("standard_global_reg"), 1424);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("standard_global_reg");
			while ((!MISC::IS_BIT_SET(Global_4270166, 0) || !MISC::IS_BIT_SET(Global_4270166, 1)) || !MISC::IS_BIT_SET(Global_4270166, 2))
			{
				if (!MISC::IS_BIT_SET(Global_4270166, 0))
				{
				}
				if (!MISC::IS_BIT_SET(Global_4270166, 1))
				{
				}
				if (!MISC::IS_BIT_SET(Global_4270166, 2))
				{
				}
				SYSTEM::WAIT(0);
			}
			MISC::START_SAVE_DATA(&Global_106565, 1, 1);
			MISC::REGISTER_FLOAT_TO_SAVE(&Global_106565, "fSaveVersion");
			MISC::STOP_SAVE_DATA();
			if (Global_1)
			{
				Global_0 = Global_106565;
			}
			Global_106565 = 1.7f;
			if (Global_1)
			{
				if (Global_0 != 1.7f)
				{
					func_27(Global_0);
				}
			}
			break;
	}
	MISC::START_SAVE_DATA(&Global_2097152, 10779, 0);
	MISC::_START_SAVE_ARRAY(&Global_2097152, 10779, "g_savedMPGlobals");
	iVar1 = 0;
	while (iVar1 < 1)
	{
		func_21(&(Global_2097152[iVar1 /*10778*/]), iVar1);
		func_19(&(Global_2097152[iVar1 /*10778*/]), iVar1);
		func_17(&(Global_2097152[iVar1 /*10778*/]), iVar1);
		func_14(&(Global_2097152[iVar1 /*10778*/]), iVar1);
		func_12(&(Global_2097152[iVar1 /*10778*/]), iVar1);
		func_11(&(Global_2097152[iVar1 /*10778*/]), iVar1);
		func_10(&(Global_2097152[iVar1 /*10778*/]), iVar1);
		func_3(&(Global_2097152[iVar1 /*10778*/]), iVar1);
		iVar1++;
	}
	MISC::STOP_SAVE_STRUCT();
	MISC::STOP_SAVE_DATA();
	iVar2 = 10779;
	iVar3 = MISC::_0xA09F896CE912481F(0);
	if (iVar2 != iVar3)
	{
	}
	if (!NETWORK::_0xEA14EEF5B7CD2C30() && !NETWORK::_0x1D4DC17C38FEAFF0())
	{
		NETWORK::_0xB606E6CC59664972(0);
	}
	PATHFIND::_0x228E5C6AD4D74BFD(0);
	MISC::_SHOW_PED_IN_PAUSE_MENU(0);
	func_2();
	func_1();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()
{
	Global_30[0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1680.49f, -929.44f, -0.462531f, "vbca_tunnel1");
	Global_30[1] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1562.04f, -876.91f, -0.471913f, "vbca_tunnel2");
	Global_30[2] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1429.65f, -823.211f, -0.432763f, "vbca_tunnel3");
	Global_30[3] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1316.9f, -843.515f, 1.43639f, "vbca_tunnel4");
	Global_30[4] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1249.67f, -896.27f, 0.293292f, "vbca_tunnel5");
	Global_30[5] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-38.9818f, -570.534f, 28.4812f, "v_31_tun_01");
	Global_30[6] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(481.908f, -577.602f, 2.41908f, "v_31_newtunnel1");
	Global_30[7] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1029.02f, -260.955f, 48.2681f, "v_31_newtun5");
	Global_30[8] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1022.25f, -205.648f, 42.8956f, "v_31_newtun4b");
	Global_30[9] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(823.852f, -299.823f, 4.54864f, "v_31_newtun3");
	Global_30[0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(615.395f, -409.282f, -1.57599f, "v_31_newtun2");
	Global_30[11] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1190.58f, -685.387f, 11.0753f, "sm20_tun4");
	Global_30[12] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1292.36f, -730.629f, 11.0934f, "sm20_tun3");
	Global_30[13] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1411.97f, -759.518f, 15.5455f, "sm20_tun2");
	Global_30[14] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1531.56f, -762.391f, 15.3451f, "sm20_tun1");
	Global_30[15] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(558.653f, -1486.49f, 21.4096f, "sc1_rd_inttunshort");
	Global_30[16] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(569.673f, -1920.17f, 21.1009f, "sc1_rd_inttun3b_end");
	Global_30[17] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(512.412f, -1908.55f, 21.2086f, "sc1_rd_inttun3b");
	Global_30[18] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(434.343f, -1945.27f, 17.3936f, "sc1_rd_inttun3");
	Global_30[19] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(513.914f, -2009.82f, 21.1486f, "sc1_rd_inttun2b_end");
	Global_30[20] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(465.139f, -2025.49f, 19.4406f, "sc1_rd_inttun2b");
	Global_30[21] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(406.938f, -1978.14f, 16.3512f, "sc1_rd_inttun2");
	Global_30[22] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(319.321f, -1896.97f, 22.4086f, "sc1_rd_inttun1");
	Global_30[23] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-573.473f, -580.793f, 25.3082f, "kt1_04_roadtunnel_int");
	Global_30[24] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-675.628f, -606.272f, 25.3078f, "kt1_03_carpark_int");
	Global_30[25] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1314.63f, -904.059f, 53.0877f, "id2_21_a_tun5");
	Global_30[26] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1248.64f, -773.6f, 44.5493f, "id2_21_a_tun4");
	Global_30[27] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1213.45f, -597.799f, 37.7533f, "id2_21_a_tun3");
	Global_30[28] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1083.25f, -502.542f, 34.6573f, "id2_21_a_tun2");
	Global_30[29] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(926.428f, -488.737f, 33.8564f, "id2_21_a_tun1");
	Global_30[30] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(732.663f, -2486.45f, 11.0686f, "id1_11_tunnel8_int");
	Global_30[31] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(749.494f, -2364.79f, 16.2255f, "id1_11_tunnel7_int");
	Global_30[32] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(758.957f, -2260.08f, 23.4637f, "id1_11_tunnel6_int");
	Global_30[33] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(769.889f, -2124.24f, 21.8223f, "id1_11_tunnel5_int");
	Global_30[34] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(789.138f, -1963.58f, 20.6408f, "id1_11_tunnel4_int");
	Global_30[35] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(815.852f, -1832.2f, 22.9671f, "id1_11_tunnel3_int");
	Global_30[36] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(829.752f, -1718.51f, 20.4594f, "id1_11_tunnel2_int");
	Global_30[37] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(829.845f, -1718.51f, 20.1823f, "id1_11_tunnel1_int");
	Global_30[38] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(274.441f, -636.403f, 29.0854f, "dt1_rd1_tun3");
	Global_30[39] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(142.198f, -581.121f, 31.2974f, "dt1_rd1_tun2");
	Global_30[40] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(204.925f, -601.567f, 29.3757f, "dt1_rd1_tun");
	Global_30[41] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2571.05f, 3907.95f, 41.1896f, "cs4_rwayb_tunnelint");
	Global_30[42] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-493.613f, 4275.55f, 89.1677f, "cs3_03railtunnel_int4");
	Global_30[43] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-476.018f, 4201.55f, 87.9392f, "cs3_03railtunnel_int3");
	Global_30[44] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-457.748f, 4125.51f, 86.1208f, "cs3_03railtunnel_int2");
	Global_30[45] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-442.948f, 4064.86f, 84.1041f, "cs3_03railtunnel_int1");
	Global_30[46] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2159.62f, 5995.87f, 51.2999f, "cs2_roadsb_tunnel_03");
	Global_30[47] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2250.3f, 5915.56f, 49.6273f, "cs2_roadsb_tunnel_02");
	Global_30[48] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2341.18f, 5814.9f, 46.7075f, "cs2_roadsb_tunnel_01");
	Global_30[49] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-537.422f, 4613.09f, 89.7512f, "cs1_14brailway6");
	Global_30[50] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-540.452f, 4719.74f, 89.7576f, "cs1_14brailway5");
	Global_30[51] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-543.783f, 4821.95f, 89.7357f, "cs1_14brailway4");
	Global_30[52] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-546.036f, 4923.02f, 89.8919f, "cs1_14brailway3");
	Global_30[53] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-546.265f, 4999.07f, 90.8104f, "cs1_14brailway2");
	Global_30[54] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-539.261f, 5077.03f, 91.6235f, "cs1_14brailway1");
	Global_30[55] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-183.656f, 4664.52f, 130.5f, "cs1_12_tunnel03_int");
	Global_30[56] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-273.86f, 4752.12f, 138.21f, "cs1_12_tunnel02_int");
	Global_30[57] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-410.302f, 4860.98f, 144.864f, "cs1_12_tunnel01_int");
	Global_30[58] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2596.83f, 3088.87f, 15.4225f, "ch1_roadsdint_tun2");
	Global_30[59] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2583.04f, 3268.07f, 13.3157f, "ch1_roadsdint_tun1");
	Global_30[60] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-179.51f, -180.189f, 43.6251f, "bt1_04_carpark");
}

void func_2()
{
	Global_145394 = 1;
	Global_145395 = 1;
}

void func_3(var uParam0, int iParam1)
{
	func_9(uParam0, iParam1);
	func_8(uParam0, iParam1);
	func_7(uParam0, iParam1);
	func_6(uParam0, iParam1);
	func_5(uParam0, iParam1);
	func_4(uParam0, iParam1);
}

void func_4(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_DATE_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::_START_SAVE_ARRAY(&(uParam0->f_10751.f_19), 8, &cVar0);
	MISC::_START_SAVE_STRUCT(&(uParam0->f_10751.f_19[0 /*7*/]), 7, "TEMPSTAT_DATE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10751.f_19[0 /*7*/]), "TEMPSTAT_DATE.year");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10751.f_19[0 /*7*/].f_1), "TEMPSTAT_DATE.month");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10751.f_19[0 /*7*/].f_2), "TEMPSTAT_DATE.day");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10751.f_19[0 /*7*/].f_3), "TEMPSTAT_DATE.hour");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10751.f_19[0 /*7*/].f_4), "TEMPSTAT_DATE.minute");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10751.f_19[0 /*7*/].f_5), "TEMPSTAT_DATE.seconds");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10751.f_19[0 /*7*/].f_6), "TEMPSTAT_DATE.Milliseconds");
	MISC::STOP_SAVE_STRUCT();
	MISC::STOP_SAVE_ARRAY();
}

void func_5(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_VECTOR_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::_START_SAVE_ARRAY(&(uParam0->f_10751.f_15), 4, &cVar0);
	MISC::_START_SAVE_STRUCT(&(uParam0->f_10751.f_15[0 /*3*/]), 3, "TEMPSTAT_VEC");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_10751.f_15[0 /*3*/]), "TEMPSTAT_VEC.x");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_10751.f_15[0 /*3*/].f_1), "TEMPSTAT_VEC.y");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_10751.f_15[0 /*3*/].f_2), "TEMPSTAT_VEC.z");
	MISC::STOP_SAVE_STRUCT();
	MISC::STOP_SAVE_ARRAY();
}

void func_6(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_STRING_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::_START_SAVE_ARRAY(&(uParam0->f_10751.f_6), 9, &cVar0);
	MISC::_0x8269816F6CFD40F8(&(uParam0->f_10751.f_6[0 /*8*/]), "TEMPSTAT_LABEL");
	MISC::STOP_SAVE_ARRAY();
}

void func_7(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_BOOL_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::_START_SAVE_ARRAY(&(uParam0->f_10751.f_4), 2, &cVar0);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_10751.f_4[0]), "TEMPSTAT_BOOL");
	MISC::STOP_SAVE_ARRAY();
}

void func_8(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_FLOAT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::_START_SAVE_ARRAY(&(uParam0->f_10751.f_2), 2, &cVar0);
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_10751.f_2[0]), "TEMPSTAT_FLOAT");
	MISC::STOP_SAVE_ARRAY();
}

void func_9(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_INT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::_START_SAVE_ARRAY(&(uParam0->f_10751), 2, &cVar0);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10751[0]), "TEMPSTAT_INT1");
	MISC::STOP_SAVE_ARRAY();
}

void func_10(var uParam0, int iParam1)
{
	vector3 vVar0[24];
	int iVar1;
	struct<4> Var2;
	char cVar3[16];
	char cVar4[16];
	char cVar5[16];
	char cVar6[16];
	
	StringCopy(&cVar0, "MP_ATM_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	MISC::_START_SAVE_STRUCT(&(uParam0->f_10601), 150, &cVar0);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10601), "MPATM_CARET_");
	iVar1 = 0;
	StringCopy(&Var2, "MPATMLOGVAL", 16);
	MISC::_START_SAVE_ARRAY(&(uParam0->f_10601.f_1), 17, &Var2);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		cVar3 = { Var2 };
		StringIntConCat(&cVar3, iVar1, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10601.f_1[iVar1]), &cVar3);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var2, "MPATMLOGSCRS", 16);
	MISC::_START_SAVE_ARRAY(&(uParam0->f_10601.f_18), 97, &Var2);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		cVar4 = { Var2 };
		StringIntConCat(&cVar4, iVar1, 16);
		MISC::_0x48F069265A0E4BEC(&(uParam0->f_10601.f_18[iVar1 /*6*/]), &cVar4);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var2, "MPATMLOGACT", 16);
	MISC::_START_SAVE_ARRAY(&(uParam0->f_10601.f_115), 17, &Var2);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		cVar5 = { Var2 };
		StringIntConCat(&cVar5, iVar1, 16);
		MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_10601.f_115[iVar1]), &cVar5);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var2, "MPATMLOGDAT", 16);
	MISC::_START_SAVE_ARRAY(&(uParam0->f_10601.f_132), 17, &Var2);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		cVar6 = { Var2 };
		StringIntConCat(&cVar6, iVar1, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10601.f_132[iVar1]), &cVar6);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_10601.f_149), "mpAnyVecBought");
	MISC::STOP_SAVE_STRUCT();
}

void func_11(var uParam0, int iParam1)
{
	struct<6> Var0;
	char cVar1[32];
	int iVar2;
	
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	MISC::_START_SAVE_STRUCT(&(uParam0->f_10360), 241, &Var0);
	MISC::_0xA735353C77334EA0(&(uParam0->f_10360), "BOUNTY_GAMERH64_1");
	MISC::_0xA735353C77334EA0(&(uParam0->f_10360.f_1), "BOUNTY_GAMERH64_2");
	MISC::_0xA735353C77334EA0(&(uParam0->f_10360.f_2), "BOUNTY_GAMERH64_3");
	MISC::_0xA735353C77334EA0(&(uParam0->f_10360.f_3), "BOUNTY_GAMERH64_4");
	MISC::_0xA735353C77334EA0(&(uParam0->f_10360.f_4), "BOUNTY_GAMERH64_5");
	MISC::_0xA735353C77334EA0(&(uParam0->f_10360.f_5), "BOUNTY_GAMERH64_6");
	MISC::_0xA735353C77334EA0(&(uParam0->f_10360.f_6), "BOUNTY_GAMERH64_7");
	MISC::_0xA735353C77334EA0(&(uParam0->f_10360.f_7), "BOUNTY_GAMERH64_8");
	MISC::_0xA735353C77334EA0(&(uParam0->f_10360.f_8), "BOUNTY_GAMERH64_9");
	MISC::_0xA735353C77334EA0(&(uParam0->f_10360.f_9), "BOUNTY_GAMERH64_10");
	MISC::_0xA735353C77334EA0(&(uParam0->f_10360.f_10), "BOUNTY_GAMERH64_11");
	MISC::_0xA735353C77334EA0(&(uParam0->f_10360.f_11), "BOUNTY_GAMERH64_12");
	MISC::_0xA735353C77334EA0(&(uParam0->f_10360.f_12), "BOUNTY_GAMERH64_13");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10360.f_13), "BOUNTY_TIME");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10360.f_14), "BOUNTY_VALUE");
	StringConCat(&Var0, "_GH", 24);
	MISC::_START_SAVE_ARRAY(&(uParam0->f_10360.f_15), 209, &Var0);
	iVar2 = 0;
	while (iVar2 < 16)
	{
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_1", 32);
		MISC::_0xA735353C77334EA0(&(uParam0->f_10360.f_15[iVar2 /*13*/]), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_2", 32);
		MISC::_0xA735353C77334EA0(&(uParam0->f_10360.f_15[iVar2 /*13*/].f_1), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_3", 32);
		MISC::_0xA735353C77334EA0(&(uParam0->f_10360.f_15[iVar2 /*13*/].f_2), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_4", 32);
		MISC::_0xA735353C77334EA0(&(uParam0->f_10360.f_15[iVar2 /*13*/].f_3), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_5", 32);
		MISC::_0xA735353C77334EA0(&(uParam0->f_10360.f_15[iVar2 /*13*/].f_4), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_6", 32);
		MISC::_0xA735353C77334EA0(&(uParam0->f_10360.f_15[iVar2 /*13*/].f_5), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_7", 32);
		MISC::_0xA735353C77334EA0(&(uParam0->f_10360.f_15[iVar2 /*13*/].f_6), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_8", 32);
		MISC::_0xA735353C77334EA0(&(uParam0->f_10360.f_15[iVar2 /*13*/].f_7), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_9", 32);
		MISC::_0xA735353C77334EA0(&(uParam0->f_10360.f_15[iVar2 /*13*/].f_8), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_10", 32);
		MISC::_0xA735353C77334EA0(&(uParam0->f_10360.f_15[iVar2 /*13*/].f_9), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_11", 32);
		MISC::_0xA735353C77334EA0(&(uParam0->f_10360.f_15[iVar2 /*13*/].f_10), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_12", 32);
		MISC::_0xA735353C77334EA0(&(uParam0->f_10360.f_15[iVar2 /*13*/].f_11), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_13", 32);
		MISC::_0xA735353C77334EA0(&(uParam0->f_10360.f_15[iVar2 /*13*/].f_12), &cVar1);
		iVar2++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	StringConCat(&Var0, "_TIM", 24);
	MISC::_START_SAVE_ARRAY(&(uParam0->f_10360.f_224), 17, &Var0);
	iVar2 = 0;
	while (iVar2 < 16)
	{
		MemCopy(&cVar1, {Var0}, 8);
		StringIntConCat(&cVar1, iVar2, 32);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10360.f_224[iVar2]), &cVar1);
		iVar2++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_12(var uParam0, int iParam1)
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MP_GENERAL_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_13(&(uParam0->f_6165), &cVar0);
}

void func_13(var uParam0, char* sParam1)
{
	int iVar0;
	struct<4> Var1;
	int iVar2;
	char cVar3[64];
	int iVar4;
	int iVar5;
	char cVar6[16];
	char cVar7[16];
	char cVar8[16];
	char cVar9[16];
	char cVar10[16];
	
	MISC::_START_SAVE_STRUCT(uParam0, 4195, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "CASH_GIVEN_TOTAL");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "CASH_GIVEN_TIME");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "LAST_SAVED_CAR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "CURRENT_PROP_VALUE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_11), "iNewVehPurchased");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "WHEELIE_TIMER");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "WHEELIE_UPDATES");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "WHEELIE_TIME");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_7), "GRAB_TIME");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "iLastSoldVehicleTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "ilasttimeplayed");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10), "iSaveCoupons");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_12), "iLastBruciePillReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_13), "iLastSecVanReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_14), "iLastBountyReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_15), "iLastParaReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_16), "iLastCrateDropReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_17), "iLastGangAttackReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_18), "iLastImpExpReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_19), "iLastInsuranceReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_20), "iLastSurvivalReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_21), "iLastBikerBackupReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_22), "iLastVagosBackupReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_23), "iLastLesterVehReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_24), "iLastPersonalVehDeliveryReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_25), "iLastPegasusVehicleReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_26), "iLastMerryweatherReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_27), "iLastLesterHelpReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_28), "iLastLesterReqJobReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_29), "iLastGeraldReqJobReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_30), "iLastSimeonReqJobReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_31), "iLastMartinReqJobReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_32), "iLastRonReqJobReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_33), "iRecentlyPassedMissionBitset");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_34), "iRecentlyPassedMissionTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_35), "iLastImportExportDelTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_36), "iLastImportExportListTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_37), "iMyLastImportExportListDay");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_38), "iVehicleWebsiteReminderTime");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_39), "bDefaultClothesSet");
	MISC::_START_SAVE_ARRAY(&(uParam0->f_40), 6, "CLOTHES");
	iVar0 = 0;
	while (iVar0 < uParam0->f_40)
	{
		StringCopy(&Var1, "CLOTHES", 16);
		StringIntConCat(&Var1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_40[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_46), 1225, "CARMODS");
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		StringCopy(&Var1, "CARMODS", 16);
		StringIntConCat(&Var1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_46[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1271), "iLastCrewCharWasIn");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1272), "iStripperUnlockedBS");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1273), "iGeneralBS");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1274), "iCarsModifiedTimeStamp");
	MISC::_START_SAVE_ARRAY(&(uParam0->f_1275), 10, "GOLF_fLongestDriveHole");
	iVar2 = 0;
	while (iVar2 < uParam0->f_1275)
	{
		StringCopy(&cVar3, "fLongestDriveHole_", 64);
		StringIntConCat(&cVar3, iVar2, 64);
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1275[iVar2]), &cVar3);
		iVar2++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_1285), 10, "GOLF_fLongestPuttHole");
	iVar2 = 0;
	while (iVar2 < uParam0->f_1285)
	{
		StringCopy(&cVar3, "fLongestPuttHole_", 64);
		StringIntConCat(&cVar3, iVar2, 64);
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1285[iVar2]), &cVar3);
		iVar2++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1295), "GOLF_iBestRound");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1296), "GOLF_fLongestDrive");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1297), "GOLF_fLongestPutt");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1298), "iShareLJCashTotal");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1299), "iShareLJCashTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1300), "iReceiveLJCashTotal");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1301), "iReceiveLJCashTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1302), "LAST_ACC_PROP");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1303), "MULTI1_PROP_VAL");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1325), "LAST_ACC_SMPLINT");
	MISC::_START_SAVE_ARRAY(&(uParam0->f_1304), 21, "PROP_ARY_VAL");
	iVar4 = 0;
	while (iVar4 < uParam0->f_1304)
	{
		StringCopy(&Var1, "PROP_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1304[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1326), "KR_PATCH_UPDATE");
	iVar4 = 0;
	MISC::_START_SAVE_ARRAY(&(uParam0->f_2682), 919, "DLC_MODS");
	iVar4 = 0;
	while (iVar4 < uParam0->f_2682)
	{
		StringCopy(&Var1, "DLC_MODS_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2682[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar4 = 0;
	MISC::_START_SAVE_ARRAY(&(uParam0->f_3601), 362, "DLC_SUPERMODS");
	iVar4 = 0;
	while (iVar4 < uParam0->f_3601)
	{
		StringCopy(&Var1, "DLC_SMODS_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3601[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_1327), 274, "OUTFIT_CompDraw");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CompDraw", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::_START_SAVE_ARRAY(&(uParam0->f_1327[iVar4 /*13*/]), 13, &Var1);
		iVar5 = 0;
		while (iVar5 < 12)
		{
			StringCopy(&Var1, "CompDraw", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1327[iVar4 /*13*/][iVar5]), &Var1);
			iVar5++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_1601), 274, "OUTFIT_CompTex");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CompTex", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::_START_SAVE_ARRAY(&(uParam0->f_1601[iVar4 /*13*/]), 13, &Var1);
		iVar5 = 0;
		while (iVar5 < 12)
		{
			StringCopy(&Var1, "CompTex", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1601[iVar4 /*13*/][iVar5]), &Var1);
			iVar5++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_1875), 211, "OUTFIT_PropID");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "PropID", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::_START_SAVE_ARRAY(&(uParam0->f_1875[iVar4 /*10*/]), 10, &Var1);
		iVar5 = 0;
		while (iVar5 < 9)
		{
			StringCopy(&Var1, "PropID", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1875[iVar4 /*10*/][iVar5]), &Var1);
			iVar5++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_2086), 211, "OUTFIT_PropTex");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "PropTex", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::_START_SAVE_ARRAY(&(uParam0->f_2086[iVar4 /*10*/]), 10, &Var1);
		iVar5 = 0;
		while (iVar5 < 9)
		{
			StringCopy(&Var1, "PropTex", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2086[iVar4 /*10*/][iVar5]), &Var1);
			iVar5++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_2297), 22, "OUTFIT_Stored");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "Stored", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2297[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_2319), 22, "OUTFIT_CrewTatA");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalA", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2319[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_2341), 22, "OUTFIT_CrewTatB");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalB", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2341[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_2363), 22, "OUTFIT_CrewTatC");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalC", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2363[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_2385), 22, "OUTFIT_CrewTatD");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalD", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2385[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_2407), 22, "OUTFIT_CrewTatE");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalE", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2407[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_2429), 22, "OUTFIT_CrewTatF");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalF", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2429[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_2620), 22, "OUTFIT_Shirt");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "ShirtDecal", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2620[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_2451), 169, "OUTFIT_Name");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "Name", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::_0x8269816F6CFD40F8(&(uParam0->f_2451[iVar4 /*8*/]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_2642), 40, "LAST_JobGamer");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastJobG64_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_1", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_2642[iVar4 /*13*/]), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_2", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_2642[iVar4 /*13*/].f_1), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_3", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_2642[iVar4 /*13*/].f_2), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_4", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_2642[iVar4 /*13*/].f_3), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_5", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_2642[iVar4 /*13*/].f_4), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_6", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_2642[iVar4 /*13*/].f_5), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_7", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_2642[iVar4 /*13*/].f_6), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_8", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_2642[iVar4 /*13*/].f_7), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_9", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_2642[iVar4 /*13*/].f_8), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_10", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_2642[iVar4 /*13*/].f_9), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_11", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_2642[iVar4 /*13*/].f_10), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_12", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_2642[iVar4 /*13*/].f_11), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_13", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_2642[iVar4 /*13*/].f_12), &cVar6);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_3963), "DO_CompletedObjectives");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_3964), "DO_LoggedInToday");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3965), "DO_xValue");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3966), "DO_LastHistoryLength");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3967), "DO_LastResetTime");
	MISC::_START_SAVE_ARRAY(&(uParam0->f_3968), 10, "DO_Objectives");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "Objective", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3968[iVar4 /*3*/]), &Var1);
		StringCopy(&Var1, "Completed", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_3968[iVar4 /*3*/].f_1), &Var1);
		StringCopy(&Var1, "Initial", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3968[iVar4 /*3*/].f_2), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_3978), 25, "DO_History");
	iVar4 = 0;
	while (iVar4 < 24)
	{
		StringCopy(&Var1, "History", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3978[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_4003), 49, "LAST_JobGamer_TL");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastJobTL_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar7 = { Var1 };
		StringConCat(&cVar7, "_1", 16);
		MISC::_0xFAA457EF263E8763(&(uParam0->f_4003[iVar4 /*16*/]), &cVar7);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_4052), 11, "BGSAVEINT");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&Var1, "BGSAVEINT", 16);
		StringIntConCat(&Var1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4052[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_4063), 3, "PROPLIB");
	iVar0 = 0;
	while (iVar0 < uParam0->f_4063)
	{
		StringCopy(&Var1, "PROPLIB", 16);
		StringIntConCat(&Var1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4063[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_4066), 40, "LAST_GOGamer");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastGOG64_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_1", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_4066[iVar4 /*13*/]), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_2", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_4066[iVar4 /*13*/].f_1), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_3", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_4066[iVar4 /*13*/].f_2), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_4", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_4066[iVar4 /*13*/].f_3), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_5", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_4066[iVar4 /*13*/].f_4), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_6", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_4066[iVar4 /*13*/].f_5), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_7", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_4066[iVar4 /*13*/].f_6), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_8", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_4066[iVar4 /*13*/].f_7), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_9", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_4066[iVar4 /*13*/].f_8), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_10", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_4066[iVar4 /*13*/].f_9), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_11", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_4066[iVar4 /*13*/].f_10), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_12", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_4066[iVar4 /*13*/].f_11), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_13", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_4066[iVar4 /*13*/].f_12), &cVar8);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_4106), 40, "LAST_GOJobGamer");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastGJG64_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_1", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_4106[iVar4 /*13*/]), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_2", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_4106[iVar4 /*13*/].f_1), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_3", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_4106[iVar4 /*13*/].f_2), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_4", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_4106[iVar4 /*13*/].f_3), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_5", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_4106[iVar4 /*13*/].f_4), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_6", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_4106[iVar4 /*13*/].f_5), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_7", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_4106[iVar4 /*13*/].f_6), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_8", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_4106[iVar4 /*13*/].f_7), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_9", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_4106[iVar4 /*13*/].f_8), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_10", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_4106[iVar4 /*13*/].f_9), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_11", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_4106[iVar4 /*13*/].f_10), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_12", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_4106[iVar4 /*13*/].f_11), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_13", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_4106[iVar4 /*13*/].f_12), &cVar9);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_4146), 49, "LAST_GOJobGamer_TL");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastGJTL_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar10 = { Var1 };
		StringConCat(&cVar10, "_1", 16);
		MISC::_0xFAA457EF263E8763(&(uParam0->f_4146[iVar4 /*16*/]), &cVar10);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_ARRAY();
}

void func_14(var uParam0, int iParam1)
{
	func_15(&(uParam0->f_6077), iParam1);
}

void func_15(var uParam0, int iParam1)
{
	char cVar0[64];
	int iVar1;
	
	MISC::_START_SAVE_ARRAY(&(uParam0->f_41), 11, "CAR_HIDDEN");
	iVar1 = 0;
	while (iVar1 < 10)
	{
		StringCopy(&cVar0, "CAR_HIDDEN", 64);
		StringIntConCat(&cVar0, iVar1, 64);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_41[iVar1]), &cVar0);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
	func_16(uParam0, "CAR_APP_ORDER");
	StringCopy(&cVar0, "bUpdateMods", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_52), &cVar0);
	StringCopy(&cVar0, "bMultiplayerDataWiped", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_53), &cVar0);
	StringCopy(&cVar0, "bCarAppPlateSet", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_55), &cVar0);
	StringCopy(&cVar0, "bDeleteCarData", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_54), &cVar0);
	StringCopy(&cVar0, "iCarAppPlateBack", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_60), &cVar0);
	StringCopy(&cVar0, "tlCarAppPlateText", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	MISC::_0x6F7794F28C6B2535(&(uParam0->f_56), &cVar0);
	StringCopy(&cVar0, "iOrderCount", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_61), &cVar0);
	StringCopy(&cVar0, "iOrderVehicle", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_62), &cVar0);
	MISC::_START_SAVE_ARRAY(&(uParam0->f_63), 11, "SAVED_VEH_SLOT");
	iVar1 = 0;
	while (iVar1 < 10)
	{
		StringCopy(&cVar0, "VEH_SLOT", 64);
		StringIntConCat(&cVar0, iVar1, 64);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_63[iVar1]), &cVar0);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_74), 11, "SAVED_VEH_PRIO");
	iVar1 = 0;
	while (iVar1 < 10)
	{
		StringCopy(&cVar0, "VEH_PRIO", 64);
		StringIntConCat(&cVar0, iVar1, 64);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_74[iVar1]), &cVar0);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_85), "LAST_USED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_86), "NEW_SAVED");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_87), "SETUP_INIT");
}

void func_16(var uParam0, char* sParam1)
{
	MISC::_START_SAVE_STRUCT(uParam0, 41, sParam1);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, "Model");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "iColourID1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "iColourID2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "iColour1Group");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "iColour2Group");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "iWindowTint");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "iTyreSmokeR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7), "iTyreSmokeG");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "iTyreSmokeB");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "iEngine");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10), "iBrakes");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_11), "iWheels");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_12), "iWheelType");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_13), "iExhaust");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_14), "iSuspension");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_15), "iArmour");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_16), "iHorn");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_17), "iLights");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_18), "bBulletProofTyres");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_19), "iTurbo");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_20), "iTyreSmoke");
	MISC::_0x6F7794F28C6B2535(&(uParam0->f_21), "tlPlateText");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_25), "iPlateBack");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_26), "UID");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_27), "Cost");
	MISC::_0x6F7794F28C6B2535(&(uParam0->f_28), "tlPlateText_pending");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_32), "iPlateBack_pending");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_33), "bProcessOrder");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_36), "bOrderPending");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_35), "bOrderReceivedOnBoot");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_34), "bOrderForPlayerVehicle");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_37), "bCheckPlateProfanity");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_40), "bOrderPaidFor");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_38), "bSCProfanityFailed");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_39), "bOrderFailedFunds");
	MISC::STOP_SAVE_STRUCT();
}

void func_17(var uParam0, int iParam1)
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MP_PROPERTY_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_18(&(uParam0->f_5506), &cVar0);
}

void func_18(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[16];
	
	MISC::_START_SAVE_STRUCT(uParam0, 571, sParam1);
	MISC::REGISTER_BOOL_TO_SAVE(uParam0, "TV_ON");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "TV_CHANNEL_ID");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2), "PENTHOUSE_TV_ON");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "PENTHOUSE_TV_CHANNEL_ID");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_4), "MEDIA_ROOM_TV_ON");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "MEDIA_ROOM_TV_CHANNEL_ID");
	MISC::_START_SAVE_ARRAY(&(uParam0->f_6), 3, "RADIO_ON");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "RADIO_ON_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_6[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_9), 3, "RADIO_STATION");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "RDO_STA_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_12), "GARAGE_TV_ON");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_13), "GARAGE_TV_CHANNEL_ID");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_14), "GARAGE_RADIO_ON");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_15), "GARAGE_RADIO_STATION_ID");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_16), "NUMBERS_TIMES_SMOKED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_17), "NUMBER_TIMES_DRANK");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_18), "NUMBER_TIMES_STRIPPERS");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_19), "NUMBERS_TIMES_SMOKED_SECOND");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_20), "NUMBER_TIMES_DRANK_SECOND");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_21), "NUMBER_TIMES_STRIPPERS_SECOND");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_22), "NUMBERS_TIMES_SMOKED3");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_23), "NUMBER_TIMES_DRANK3");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_24), "NUMBER_TIMES_STRIPPERS3");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_25), "NUMBERS_TIMES_SMOKED4");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_26), "NUMBER_TIMES_DRANK4");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_27), "NUMBER_TIMES_STRIPPERS4");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_28), "NUMBERS_TIMES_SMOKED5");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_29), "NUMBER_TIMES_DRANK5");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_30), "NUMBER_TIMES_STRIPPERS5");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_31), "NUMBERS_TIMES_SMOKEDYacht");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_32), "NUMBER_TIMES_DRANKYacht");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_33), "NUMBER_TIMES_STRIPPERSYacht");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_34), "DATE_LAST_CLEANED_APARTMENT");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_35), "SHOWERS_TAKEN");
	MISC::_START_SAVE_ARRAY(&(uParam0->f_36), 18, "PROP_DRINKS");
	StringCopy(&cVar1, "DRANK_", 16);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_36[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&cVar1, "DRANK_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_36[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_54), 18, "PROP_SMOKES");
	StringCopy(&cVar1, "SMOKED_", 16);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_54[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&cVar1, "SMOKED_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_54[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_72), 18, "PROP_STRIPPERS");
	StringCopy(&cVar1, "STRIPPERS_", 16);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_72[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&cVar1, "STRIPPERS_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_72[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_90), 481, "PROP_NAMEDVEHS");
	iVar0 = 0;
	while (iVar0 < 30)
	{
		StringCopy(&cVar1, "NAMEDVEH_", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::_0xFAA457EF263E8763(&(uParam0->f_90[iVar0 /*16*/]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_ARRAY();
}

void func_19(var uParam0, int iParam1)
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MP_BIG_ASS_VEHICLES", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_20(&(uParam0->f_5500), &cVar0);
}

void func_20(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[16];
	
	MISC::_START_SAVE_STRUCT(uParam0, 6, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "BAV_Timestamp");
	MISC::_START_SAVE_ARRAY(&(uParam0->f_1), 5, "B_A_V_BS_ID");
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "B_A_V_BS_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_ARRAY();
}

void func_21(var uParam0, int iParam1)
{
	vector3 vVar0;
	
	StringCopy(&vVar0, "MP_SAVED_VEHICLES", 24);
	StringIntConCat(&vVar0, iParam1, 24);
	func_22(uParam0, &vVar0);
}

void func_22(var uParam0, char* sParam1)
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	MISC::_START_SAVE_ARRAY(uParam0, 5500, sParam1);
	iVar0 = 0;
	while (iVar0 < 39)
	{
		StringCopy(&Var1, "MP_VEHICLE", 32);
		StringIntConCat(&Var1, iVar0, 32);
		func_23(uParam0[iVar0 /*141*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_23(var uParam0, char* sParam1)
{
	MISC::_START_SAVE_STRUCT(uParam0, 141, sParam1);
	func_24(uParam0, "VEHICLE_SETUP_STRUCT_MP");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_102), "VEHICLE_BS");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_104), "PAID_PREMIUM");
	MISC::_0xFAA457EF263E8763(&(uParam0->f_105), "PAID_PLAYER");
	MISC::_0xFAA457EF263E8763(&(uParam0->f_121), "RADIO_STATION");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_103), "IMPOUND_TIME");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_137), "COLOUR_GROUP1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_138), "COLOUR_GROUP2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_139), "PRICE_PAID");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_140), "OBTAIN_TIME");
	MISC::STOP_SAVE_STRUCT();
}

void func_24(var uParam0, char* sParam1)
{
	func_26(uParam0, "VEHICLE_SETUP_STRUCT");
	MISC::_START_SAVE_STRUCT(uParam0, 102, sParam1);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_78), "iSpawnVehicleHorn");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_79), "iHornID");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_80), "fEnveffScale");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_97), "iColour5");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_98), "iLivery2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_99), "iColour6");
	func_25(&(uParam0->f_81), "GamerHandleOfCarOwner");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_94), "OwnerStatus");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_95), "iFlags");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_96), "iPVSlot");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_100), "iPlayerIndex");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_101), "iIEPlayerVehicle");
	MISC::STOP_SAVE_STRUCT();
}

void func_25(var uParam0, char* sParam1)
{
	MISC::_START_SAVE_STRUCT(uParam0, 13, sParam1);
	MISC::_0xA735353C77334EA0(uParam0, "Data64_1");
	MISC::_0xA735353C77334EA0(&(uParam0->f_1), "Data64_2");
	MISC::_0xA735353C77334EA0(&(uParam0->f_2), "Data64_3");
	MISC::_0xA735353C77334EA0(&(uParam0->f_3), "Data64_4");
	MISC::_0xA735353C77334EA0(&(uParam0->f_4), "Data64_5");
	MISC::_0xA735353C77334EA0(&(uParam0->f_5), "Data64_6");
	MISC::_0xA735353C77334EA0(&(uParam0->f_6), "Data64_7");
	MISC::_0xA735353C77334EA0(&(uParam0->f_7), "Data64_8");
	MISC::_0xA735353C77334EA0(&(uParam0->f_8), "Data64_9");
	MISC::_0xA735353C77334EA0(&(uParam0->f_9), "Data64_10");
	MISC::_0xA735353C77334EA0(&(uParam0->f_10), "Data64_11");
	MISC::_0xA735353C77334EA0(&(uParam0->f_11), "Data64_12");
	MISC::_0xA735353C77334EA0(&(uParam0->f_12), "Data64_13");
	MISC::STOP_SAVE_STRUCT();
}

void func_26(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[16];
	
	MISC::_START_SAVE_STRUCT(uParam0, 78, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "iPlateIndex");
	MISC::_0x6F7794F28C6B2535(&(uParam0->f_1), "tlPlateText");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "iColour1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "iColour2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7), "iColourExtra1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "iColourExtra2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_62), "iTyreR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_63), "iTyreG");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_64), "iTyreB");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_65), "iWindowTintColour");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_67), "iLivery");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_69), "iWheelType");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_68), "eRoofState");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_77), "iFlags");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_71), "iCustomR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_72), "iCustomG");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_73), "iCustomB");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_74), "iNeonR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_75), "iNeonG");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_76), "iNeonB");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_66), "eModel");
	MISC::_START_SAVE_ARRAY(&(uParam0->f_9), 50, "MODS_ID");
	iVar0 = 0;
	while (iVar0 < 49)
	{
		StringCopy(&cVar1, "MOD_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_59), 3, "MODS_VAR");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "MOD_VAR", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_59[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_70), "eLockState");
	MISC::STOP_SAVE_STRUCT();
}

void func_27(float fParam0)
{
	func_36();
	if (fParam0 == 1f)
	{
		func_34();
	}
	if (fParam0 <= 1.1f)
	{
		func_33();
	}
	if (fParam0 < 1.5f)
	{
		func_31();
	}
	if (fParam0 <= 1.5f)
	{
		func_30();
	}
	if (fParam0 == 1.5f)
	{
		func_29();
	}
	if (fParam0 < 1.7f)
	{
		func_28();
	}
}

void func_28()
{
	Global_106565.f_26428.f_4 = 0;
}

void func_29()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	STATS::STAT_GET_INT(joaat("content_hanger_veh"), &iVar0, -1);
	STATS::STAT_GET_INT(joaat("content_marina_veh"), &iVar1, -1);
	STATS::STAT_GET_INT(joaat("content_heli_veh"), &iVar2, -1);
	if ((iVar0 >= 0 && iVar1 >= 0) && iVar2 >= 0)
	{
		Global_106565.f_668.f_1306 = (Global_106565.f_668.f_1306 - iVar0);
	}
}

void func_30()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 171;
		while (iVar1 <= 198)
		{
			if (MISC::IS_BIT_SET(Global_106565.f_25176[iVar1], iVar0))
			{
				MISC::CLEAR_BIT(&(Global_106565.f_25176[iVar1]), iVar0);
				iVar2 = (iVar1 + (198 - 171)) + 1;
				MISC::SET_BIT(&(Global_106565.f_25176[iVar2]), iVar0);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_31()
{
	if ((((func_32(54) || func_32(55)) || func_32(56)) || func_32(57)) || func_32(58))
	{
		MISC::SET_BIT(&(Global_106565.f_10010.f_25), 6);
	}
}

int func_32(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_330[iParam0 /*6*/];
}

void func_33()
{
}

void func_34()
{
	if (Global_106565.f_9079.f_99.f_205[7] != 0)
	{
		if (!Global_106565.f_9079.f_330[86 /*6*/])
		{
			Global_106565.f_9079.f_330[86 /*6*/] = 1;
		}
	}
	if (Global_106565.f_9079.f_99.f_205[8] != 0)
	{
		if (!Global_106565.f_9079.f_330[71 /*6*/])
		{
			Global_106565.f_9079.f_330[71 /*6*/] = 1;
		}
	}
	if (Global_106565.f_9079.f_99.f_205[9] != 0)
	{
		if (!Global_106565.f_9079.f_330[91 /*6*/])
		{
			Global_106565.f_9079.f_330[91 /*6*/] = 1;
		}
	}
	if (Global_106565.f_9079.f_99.f_205[10] != 0)
	{
		if (!Global_106565.f_9079.f_330[67 /*6*/])
		{
			Global_106565.f_9079.f_330[67 /*6*/] = 1;
		}
	}
	if (Global_106565.f_9079.f_99.f_205[11] != 0)
	{
		if (!Global_106565.f_9079.f_330[77 /*6*/])
		{
			Global_106565.f_9079.f_330[77 /*6*/] = 1;
		}
	}
	func_35(195, 198);
	func_35(195, 197);
	func_35(195, 196);
}

void func_35(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	
	Var0 = { Global_106565.f_10188[iParam0 /*12*/] };
	uVar1 = Global_106565.f_10188[iParam0 /*12*/].f_4;
	uVar2 = Global_106565.f_10188[iParam0 /*12*/].f_5;
	uVar3 = Global_106565.f_10188[iParam0 /*12*/].f_6;
	uVar4 = Global_106565.f_10188[iParam0 /*12*/].f_7;
	uVar5 = Global_106565.f_10188[iParam0 /*12*/].f_8;
	uVar6 = Global_106565.f_10188[iParam0 /*12*/].f_9;
	uVar7 = Global_106565.f_10188[iParam0 /*12*/].f_10;
	uVar8 = Global_106565.f_10188[iParam0 /*12*/].f_11;
	Global_106565.f_10188[iParam0 /*12*/] = { Global_106565.f_10188[iParam1 /*12*/] };
	Global_106565.f_10188[iParam0 /*12*/].f_4 = Global_106565.f_10188[iParam1 /*12*/].f_4;
	Global_106565.f_10188[iParam0 /*12*/].f_5 = Global_106565.f_10188[iParam1 /*12*/].f_5;
	Global_106565.f_10188[iParam0 /*12*/].f_6 = Global_106565.f_10188[iParam1 /*12*/].f_6;
	Global_106565.f_10188[iParam0 /*12*/].f_7 = Global_106565.f_10188[iParam1 /*12*/].f_7;
	Global_106565.f_10188[iParam0 /*12*/].f_8 = Global_106565.f_10188[iParam1 /*12*/].f_8;
	Global_106565.f_10188[iParam0 /*12*/].f_9 = Global_106565.f_10188[iParam1 /*12*/].f_9;
	Global_106565.f_10188[iParam0 /*12*/].f_10 = Global_106565.f_10188[iParam1 /*12*/].f_10;
	Global_106565.f_10188[iParam0 /*12*/].f_11 = Global_106565.f_10188[iParam1 /*12*/].f_11;
	Global_106565.f_10188[iParam1 /*12*/] = { Var0 };
	Global_106565.f_10188[iParam1 /*12*/].f_4 = uVar1;
	Global_106565.f_10188[iParam1 /*12*/].f_5 = uVar2;
	Global_106565.f_10188[iParam1 /*12*/].f_6 = uVar3;
	Global_106565.f_10188[iParam1 /*12*/].f_7 = uVar4;
	Global_106565.f_10188[iParam1 /*12*/].f_8 = uVar5;
	Global_106565.f_10188[iParam1 /*12*/].f_9 = uVar6;
	Global_106565.f_10188[iParam1 /*12*/].f_10 = uVar7;
	Global_106565.f_10188[iParam1 /*12*/].f_11 = uVar8;
}

void func_36()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!func_37(Global_106565.f_24898[iVar0 /*4*/]))
		{
			if (Global_106565.f_24898[iVar0 /*4*/] != 145)
			{
				Global_106565.f_24898[iVar0 /*4*/] = 145;
			}
		}
		iVar0++;
	}
}

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

void func_38()
{
	RENDERING::_0x7E2BD3EF6C205F09("No_Filter", 1);
	RENDERING::_0x7E2BD3EF6C205F09("phone_cam1", 1);
	RENDERING::_0x7E2BD3EF6C205F09("phone_cam2", 1);
	RENDERING::_0x7E2BD3EF6C205F09("phone_cam3", 1);
	RENDERING::_0x7E2BD3EF6C205F09("phone_cam4", 1);
	RENDERING::_0x7E2BD3EF6C205F09("phone_cam5", 1);
	RENDERING::_0x7E2BD3EF6C205F09("phone_cam6", 1);
	RENDERING::_0x7E2BD3EF6C205F09("phone_cam7", 1);
	RENDERING::_0x7E2BD3EF6C205F09("phone_cam9", 1);
	RENDERING::_0x7E2BD3EF6C205F09("phone_cam12", 0);
}

void func_39(int iParam0, int iParam1)
{
	SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam0);
	while (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam0))
	{
		SYSTEM::WAIT(0);
		SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam0);
	}
	SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(iParam0, iParam1);
}

int func_40()
{
	if (((LOADING::_0xEF7D17BC6C85264C() || LOADING::_0xF2CA003F167E21D2()) || NETWORK::_0x88B588B41FF7868E()) || NETWORK::_0x67FC09BC554A75E5())
	{
		return 1;
	}
	return 0;
}

