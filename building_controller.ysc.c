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
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 10;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 2;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 8;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 8;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	float fLocal_83 = 0f;
	int iLocal_84 = 0;
	bool bLocal_85 = 0;
	int iLocal_86 = 0;
	bool bLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90[4] = { 0, 0, 0, 0 };
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	int iLocal_94 = 0;
	vector3 vLocal_95 = { 0f, 0f, 0f };
	var uLocal_96 = 0;
	var uLocal_97 = 3;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 3;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 3;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 3;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 3;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193[2] = { 0, 0 };
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];
	
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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_71 = 1;
	iLocal_72 = 65;
	iLocal_73 = 49;
	iLocal_74 = 64;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&(Global_35385[iVar0 /*8*/]), "", 32);
		iVar0++;
	}
	SYSTEM::WAIT(0);
	while (true)
	{
		func_102();
		switch (iLocal_92)
		{
			case 0:
				func_87();
				break;
			
			case 1:
				func_84();
				func_73();
				if (func_71())
				{
					if (!func_70(9) || Global_105275.f_19 == 4)
					{
						func_46();
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
							{
								if (!bLocal_87)
								{
								}
							}
							else if (bLocal_87)
							{
							}
						}
						func_26();
					}
				}
				break;
			
			case 2:
				if (Global_2413881)
				{
					if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_STATE() == 5))
					{
						Global_2413881 = 0;
						if (STREAMING::IS_IPL_ACTIVE("TrevorsMP"))
						{
							STREAMING::REMOVE_IPL("TrevorsMP");
						}
						if (!STREAMING::IS_IPL_ACTIVE("TrevorsTrailer"))
						{
							STREAMING::REQUEST_IPL("TrevorsTrailer");
						}
						if (STREAMING::IS_IPL_ACTIVE("shr_int"))
						{
							STREAMING::REMOVE_IPL("shr_int");
						}
						if (!STREAMING::IS_IPL_ACTIVE("fakeint"))
						{
							STREAMING::REQUEST_IPL("fakeint");
						}
					}
				}
				break;
		}
		func_15();
		if ((!iLocal_189 && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) && func_14())
		{
			if (!Global_1573972)
			{
				STREAMING::REMOVE_IPL("hei_carrier");
				STREAMING::REMOVE_IPL("hei_carrier_int1");
				STREAMING::REMOVE_IPL("hei_carrier_int2");
				STREAMING::REMOVE_IPL("hei_carrier_int3");
				STREAMING::REMOVE_IPL("hei_carrier_int4");
				STREAMING::REMOVE_IPL("hei_carrier_int5");
				STREAMING::REMOVE_IPL("hei_carrier_int6");
				STREAMING::REMOVE_IPL("hei_carrier_DistantLights");
				STREAMING::REMOVE_IPL("hei_carrier_LODLights");
				STREAMING::REMOVE_IPL("hei_yacht_heist");
				STREAMING::REMOVE_IPL("hei_yacht_heist_enginrm");
				STREAMING::REMOVE_IPL("hei_yacht_heist_Lounge");
				STREAMING::REMOVE_IPL("hei_yacht_heist_Bridge");
				STREAMING::REMOVE_IPL("hei_yacht_heist_Bar");
				STREAMING::REMOVE_IPL("hei_yacht_heist_Bedrm");
			}
			iLocal_189 = 1;
		}
		if (!iLocal_190 && func_14())
		{
			if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				if (!Global_1573972)
				{
					STREAMING::REMOVE_IPL("lr_cs6_08_grave_open");
					STREAMING::REQUEST_IPL("lr_cs6_08_grave_closed");
					STREAMING::REQUEST_IPL("hei_bi_hw1_13_door");
					STREAMING::REQUEST_IPL("bkr_bi_id1_23_door");
					iVar1 = 0;
					while (iVar1 < 12)
					{
						if (iVar1 != 8)
						{
							StringCopy(&cVar2, "GR_case", 24);
							StringIntConCat(&cVar2, iVar1, 24);
							StringConCat(&cVar2, "_BunkerClosed", 24);
							STREAMING::REQUEST_IPL(&cVar2);
						}
						iVar1++;
					}
				}
				iLocal_190 = 1;
			}
		}
		if (iLocal_190 && !func_14())
		{
			iLocal_190 = 0;
		}
		if (func_14())
		{
			if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				if (!Global_1573972)
				{
					if (STREAMING::IS_IPL_ACTIVE("Xs_arena_interior"))
					{
						STREAMING::REMOVE_IPL("Xs_arena_interior");
					}
					if (STREAMING::IS_IPL_ACTIVE("xs_arena_interior_vip"))
					{
						STREAMING::REMOVE_IPL("xs_arena_interior_vip");
					}
				}
			}
		}
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && func_14())
		{
			if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_11())
			{
				if (!Global_1573973)
				{
					if (!STREAMING::IS_IPL_ACTIVE("xm_hatch_closed"))
					{
						STREAMING::REQUEST_IPL("xm_hatch_closed");
					}
					if (!MISC::IS_BIT_SET(Global_4456448.f_154959, 14))
					{
						if (!STREAMING::IS_IPL_ACTIVE("xm_bunkerentrance_door"))
						{
							STREAMING::REQUEST_IPL("xm_bunkerentrance_door");
						}
					}
					if (!STREAMING::IS_IPL_ACTIVE("xm_siloentranceclosed_x17"))
					{
						STREAMING::REQUEST_IPL("xm_siloentranceclosed_x17");
					}
					if (!STREAMING::IS_IPL_ACTIVE("xm_hatches_terrain"))
					{
						STREAMING::REQUEST_IPL("xm_hatches_terrain");
					}
				}
			}
			else
			{
				if (STREAMING::IS_IPL_ACTIVE("xm_hatch_closed"))
				{
					STREAMING::REMOVE_IPL("xm_hatch_closed");
				}
				if (STREAMING::IS_IPL_ACTIVE("xm_bunkerentrance_door"))
				{
					STREAMING::REMOVE_IPL("xm_bunkerentrance_door");
				}
				if (STREAMING::IS_IPL_ACTIVE("xm_siloentranceclosed_x17"))
				{
					STREAMING::REMOVE_IPL("xm_siloentranceclosed_x17");
				}
				if (STREAMING::IS_IPL_ACTIVE("xm_hatches_terrain"))
				{
					STREAMING::REMOVE_IPL("xm_hatches_terrain");
				}
			}
			if (!Global_1573976)
			{
				if (MISC::IS_BIT_SET(Global_1671295.f_5, 18))
				{
					if (STREAMING::IS_IPL_ACTIVE("hei_dlc_windows_casino"))
					{
						STREAMING::REMOVE_IPL("hei_dlc_windows_casino");
					}
				}
				else if (!STREAMING::IS_IPL_ACTIVE("hei_dlc_windows_casino"))
				{
					STREAMING::REQUEST_IPL("hei_dlc_windows_casino");
				}
				if (MISC::IS_BIT_SET(Global_1671295.f_5, 19))
				{
					if (STREAMING::IS_IPL_ACTIVE("hei_dlc_casino_door"))
					{
						STREAMING::REMOVE_IPL("hei_dlc_casino_door");
					}
					if (STREAMING::IS_IPL_ACTIVE("vw_dlc_casino_door"))
					{
						STREAMING::REMOVE_IPL("vw_dlc_casino_door");
					}
					if (!STREAMING::IS_IPL_ACTIVE("hei_dlc_casino_door_broken"))
					{
						STREAMING::REQUEST_IPL("hei_dlc_casino_door_broken");
					}
				}
				else
				{
					if (!STREAMING::IS_IPL_ACTIVE("hei_dlc_casino_door"))
					{
						STREAMING::REQUEST_IPL("hei_dlc_casino_door");
					}
					if (!STREAMING::IS_IPL_ACTIVE("vw_dlc_casino_door"))
					{
						STREAMING::REQUEST_IPL("vw_dlc_casino_door");
					}
					if (STREAMING::IS_IPL_ACTIVE("hei_dlc_casino_door_broken"))
					{
						STREAMING::REMOVE_IPL("hei_dlc_casino_door_broken");
					}
				}
				if (!STREAMING::IS_IPL_ACTIVE("hei_dlc_casino_aircon"))
				{
					STREAMING::REQUEST_IPL("hei_dlc_casino_aircon");
				}
			}
		}
		if (!func_14())
		{
			Global_1573973 = 0;
		}
		if (!iLocal_191)
		{
			if (func_14())
			{
				iLocal_191 = 1;
			}
		}
		else if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !func_14())
		{
			func_4();
			iLocal_191 = 0;
		}
		if (iLocal_192 && func_14())
		{
			func_4();
			iLocal_192 = 0;
		}
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	if (!MISC::IS_BIT_SET(Global_35547, 0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_193[0]))
		{
			STREAMING::REQUEST_MODEL(476379176);
			if (STREAMING::HAS_MODEL_LOADED(476379176))
			{
				iLocal_193[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(476379176, 2222.883f, 5612.299f, 55.291f, 0, false, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_193[0], 0.5f, 0f, 15.325f, 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_193[0], true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(476379176);
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iLocal_193[0]))
	{
		OBJECT::DELETE_OBJECT(&(iLocal_193[0]));
	}
	if ((!MISC::IS_BIT_SET(Global_35547, 1) && func_3() == 0) && !(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && (func_2(Global_4456448.f_138474) == 14 || func_2(Global_4456448.f_138474) == 15)))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_193[1]))
		{
			STREAMING::REQUEST_MODEL(630616933);
			if (STREAMING::HAS_MODEL_LOADED(630616933))
			{
				iLocal_193[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(630616933, -362.402f, 4829.89f, 142.477f, 0, false, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_193[1], 0f, 0f, 320f, 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_193[1], true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(630616933);
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iLocal_193[1]))
	{
		OBJECT::DELETE_OBJECT(&(iLocal_193[1]));
	}
}

int func_2(int iParam0)
{
	if (iParam0 == Global_262145.f_5003[0])
	{
		return 0;
	}
	else if (iParam0 == Global_262145.f_5003[1])
	{
		return 1;
	}
	else if (iParam0 == Global_262145.f_5003[2])
	{
		return 2;
	}
	else if (iParam0 == Global_262145.f_5003[3])
	{
		return 3;
	}
	else if (iParam0 == Global_262145.f_5003[4])
	{
		return 4;
	}
	else if (iParam0 == Global_262145.f_5003[5])
	{
		return 5;
	}
	else if (iParam0 == Global_262145.f_5003[6])
	{
		return 6;
	}
	else if (iParam0 == Global_262145.f_5003[7])
	{
		return 7;
	}
	else if (iParam0 == Global_262145.f_5003[8])
	{
		return 8;
	}
	else if (iParam0 == Global_262145.f_5003[9])
	{
		return 9;
	}
	else if (iParam0 == Global_262145.f_5003[10])
	{
		return 10;
	}
	else if (iParam0 == Global_262145.f_5003[11])
	{
		return 11;
	}
	else if (iParam0 == Global_262145.f_5003[12])
	{
		return 12;
	}
	else if (iParam0 == Global_262145.f_5003[13])
	{
		return 13;
	}
	else if (iParam0 == Global_262145.f_5003[14])
	{
		return 14;
	}
	else if (iParam0 == Global_262145.f_5003[15])
	{
		return 15;
	}
	return -1;
}

int func_3()
{
	return Global_25765;
}

void func_4()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 36)
	{
		func_5(iVar0, 0);
		iVar0++;
	}
}

void func_5(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (func_10(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			STREAMING::REMOVE_IPL(func_8(iParam0, iVar0));
			iVar0++;
		}
		if (!bParam1)
		{
			if (Global_2537295.f_81[iParam0])
			{
				Global_2537295.f_81[iParam0] = 0;
				Global_2537295.f_118 = (Global_2537295.f_118 + -1);
			}
		}
		if (Global_2537295.f_118 <= 0 || bParam1)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_7());
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_6());
			if (!bParam1)
			{
				Global_2537295.f_118 = 0;
			}
		}
	}
}

int func_6()
{
	return 1338692320;
}

int func_7()
{
	return -1126512153;
}

var func_8(int iParam0, int iParam1)
{
	return func_9(&(Global_4006552[iParam0 /*45*/].f_15[iParam1 /*8*/]));
}

var func_9(var uParam0)
{
	return uParam0;
}

int func_10(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 36)
	{
		return 1;
	}
	return 0;
}

int func_11()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_13();
	}
	return func_12(Global_4456448.f_138474);
}

int func_12(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5003[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_13()
{
	return Global_2448756.f_16;
}

bool func_14()
{
	return Global_2460021;
}

void func_15()
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	bVar3 = true;
	iVar2 = 0;
	while (iVar2 < 7)
	{
		if (Global_32194[iVar2] != 0 || Global_32202[iVar2] != 0)
		{
			bVar3 = false;
		}
		iVar2++;
	}
	if (bVar3)
	{
		return;
	}
	iVar0 = iLocal_88;
	vVar1 = { func_24(iVar0) };
	if (func_23(iVar0))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vVar1, true) > 250f)
		{
			func_22(iVar0, 0);
			func_21(iVar0, 1);
			if (iVar0 == 17)
			{
				if (OBJECT::_DOES_DOOR_EXIST(1773088812))
				{
					OBJECT::_0xD9B71952F78A2640(1773088812, 0);
					OBJECT::_SET_DOOR_AJAR_ANGLE(1773088812, 0f, 0, 0);
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(1773088812, 1, 0, 1);
				}
				if (OBJECT::_DOES_DOOR_EXIST(-1332101528))
				{
					OBJECT::_0xD9B71952F78A2640(-1332101528, 0);
					OBJECT::_SET_DOOR_AJAR_ANGLE(-1332101528, 0f, 0, 0);
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1332101528, 1, 0, 1);
				}
			}
		}
	}
	if (func_20(iVar0) && !MISC::ARE_STRINGS_EQUAL(&Global_33147, vVar1.f_3))
	{
		bVar4 = false;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PLAYER::PLAYER_ID() > -1)
			{
				if (MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_142, 8))
				{
					bVar4 = true;
				}
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vVar1, true) > 250f && !bVar4)
		{
			func_18(iVar0, 1);
			func_16(iVar0, 0);
			if (iVar0 == 17)
			{
				if (OBJECT::_DOES_DOOR_EXIST(1773088812))
				{
					OBJECT::_0xD9B71952F78A2640(1773088812, 0);
					OBJECT::_SET_DOOR_AJAR_ANGLE(1773088812, 0f, 0, 0);
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(1773088812, 1, 0, 1);
				}
				if (OBJECT::_DOES_DOOR_EXIST(-1332101528))
				{
					OBJECT::_0xD9B71952F78A2640(-1332101528, 0);
					OBJECT::_SET_DOOR_AJAR_ANGLE(-1332101528, 0f, 0, 0);
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1332101528, 1, 0, 1);
				}
			}
		}
		else if (bVar4)
		{
		}
	}
	iLocal_88++;
	if (iLocal_88 == 204)
	{
		iLocal_88 = 0;
	}
}

void func_16(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_17(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_32202[Var0.f_1]), Var0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_32202[Var0.f_1]), Var0);
	}
}

struct<2> func_17(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 7)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_18(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_19(iParam0, &iVar1);
	if (!MISC::ARE_STRINGS_EQUAL("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (INTERIOR::IS_INTERIOR_DISABLED(iVar1))
			{
				return;
			}
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iVar1)
			{
				func_16(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!INTERIOR::IS_INTERIOR_DISABLED(iVar1))
			{
				return;
			}
			if (func_20(iParam0))
			{
				func_16(iParam0, 0);
			}
		}
		INTERIOR::DISABLE_INTERIOR(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

var func_19(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_24(iParam0) };
	*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, Var0.f_3);
	return Var0.f_4;
}

int func_20(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_17(iParam0) };
	if (Var0.f_1 != -1 && MISC::IS_BIT_SET(Global_32202[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_19(iParam0, &iVar1);
	if (!MISC::ARE_STRINGS_EQUAL("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1 && !INTERIOR::IS_INTERIOR_CAPPED(iVar1))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iVar1)
			{
				func_22(iParam0, 1);
				return;
			}
			INTERIOR::CAP_INTERIOR(iVar1, 1);
		}
		else if (!bParam1 && INTERIOR::IS_INTERIOR_CAPPED(iVar1))
		{
			if (func_23(iParam0))
			{
				func_22(iParam0, 0);
			}
			INTERIOR::CAP_INTERIOR(iVar1, 0);
		}
		else if (!bParam1)
		{
			if (func_23(iParam0))
			{
				func_22(iParam0, 0);
			}
		}
	}
}

void func_22(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_17(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_32194[Var0.f_1]), Var0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_32194[Var0.f_1]), Var0);
	}
}

int func_23(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_17(iParam0) };
	if (Var0.f_1 != -1 && MISC::IS_BIT_SET(Global_32194[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

struct<5> func_24(int iParam0)
{
	struct<5> Var0;
	vector3 vVar1;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			vVar1 = { func_25(1, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			vVar1 = { func_25(2, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			vVar1 = { func_25(3, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			vVar1 = { func_25(4, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			vVar1 = { func_25(5, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			vVar1 = { func_25(6, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			vVar1 = { func_25(7, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049815[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			vVar1 = { func_25(35, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			vVar1 = { func_25(36, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			vVar1 = { func_25(37, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			vVar1 = { func_25(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			vVar1 = { func_25(39, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			vVar1 = { func_25(40, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			vVar1 = { func_25(41, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			vVar1 = { func_25(42, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			vVar1 = { func_25(43, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			vVar1 = { func_25(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			vVar1 = { func_25(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			vVar1 = { func_25(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			vVar1 = { func_25(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			vVar1 = { func_25(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			vVar1 = { func_25(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			vVar1 = { func_25(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			vVar1 = { func_25(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			vVar1 = { func_25(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			vVar1 = { func_25(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			vVar1 = { func_25(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			vVar1 = { func_25(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			vVar1 = { func_25(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			vVar1 = { func_25(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			vVar1 = { func_25(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			vVar1 = { func_25(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			vVar1 = { func_25(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			vVar1 = { func_25(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			vVar1 = { func_25(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			vVar1 = { func_25(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			vVar1 = { func_25(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			vVar1 = { func_25(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			vVar1 = { func_25(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			vVar1 = { func_25(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			vVar1 = { func_25(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			vVar1 = { func_25(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			vVar1 = { func_25(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			vVar1 = { func_25(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			vVar1 = { func_25(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			vVar1 = { func_25(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			vVar1 = { func_25(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			vVar1 = { func_25(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			vVar1 = { func_25(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			vVar1 = { func_25(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			vVar1 = { func_25(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			vVar1 = { func_25(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			vVar1 = { func_25(91, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			vVar1 = { func_25(97, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			vVar1 = { func_25(103, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			vVar1 = { func_25(104, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			vVar1 = { func_25(105, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			vVar1 = { func_25(106, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			vVar1 = { func_25(107, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			vVar1 = { func_25(108, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			vVar1 = { func_25(109, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			vVar1 = { func_25(110, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			vVar1 = { func_25(111, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			vVar1 = { func_25(112, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			vVar1 = { func_25(113, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			vVar1 = { func_25(114, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			vVar1 = { func_25(103, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			vVar1 = { func_25(106, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			vVar1 = { func_25(109, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			vVar1 = { func_25(112, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 195:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		
		case 197:
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 198:
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 199:
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 200:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 201:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 202:
			Var0 = { 976.6364f, 70.29476f, 115.1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 203:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
			return Var0;
	}
}

struct<6> func_25(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

void func_26()
{
	float fVar0;
	int iVar1;
	
	iLocal_91 = 0;
	iLocal_81++;
	if (iLocal_81 >= 27)
	{
		iLocal_81 = 0;
	}
	if (iLocal_81 == iLocal_82)
	{
		fLocal_83 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_35548[iLocal_81 /*31*/].f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), true);
	}
	else
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_35548[iLocal_81 /*31*/].f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), true);
		if (fVar0 < fLocal_83)
		{
			fLocal_83 = fVar0;
			iLocal_82 = iLocal_81;
		}
	}
	if (!bLocal_85)
	{
		if (Global_35548[iLocal_84 /*31*/].f_24 == 0)
		{
			iLocal_86 = 0;
			iLocal_84++;
			if (iLocal_84 >= 27)
			{
				iLocal_84 = 0;
			}
		}
		else
		{
			iLocal_86++;
			if (iLocal_86 >= Global_35548[iLocal_84 /*31*/].f_24)
			{
				iLocal_86 = 0;
				iLocal_84++;
				if (iLocal_84 >= 27)
				{
					iLocal_84 = 0;
				}
			}
		}
	}
	if (bLocal_85)
	{
		func_35(iLocal_82);
		func_27(iLocal_82);
	}
	else
	{
		func_35(iLocal_84);
		func_27(iLocal_84);
	}
	bLocal_85 = !bLocal_85;
	iVar1 = 0;
	while (iVar1 < iLocal_89)
	{
		func_27(iLocal_90[iVar1]);
		iVar1++;
	}
}

void func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	
	if (MISC::IS_BIT_SET(iLocal_91, iParam0))
	{
		return;
	}
	MISC::SET_BIT(&iLocal_91, iParam0);
	if (MISC::IS_BIT_SET(Global_35548[iParam0 /*31*/].f_1, 4))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				if (!MISC::IS_BIT_SET(Global_35548[iParam0 /*31*/].f_1, 6))
				{
					func_34(iParam0, 1);
				}
			}
			else if (MISC::IS_BIT_SET(Global_35548[iParam0 /*31*/].f_1, 6))
			{
				func_34(iParam0, 0);
			}
		}
	}
	if (Global_35548[iParam0 /*31*/].f_24 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_35548[iParam0 /*31*/].f_24)
		{
			iVar1 = Global_35548[iParam0 /*31*/].f_25[iVar0];
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				func_33(iParam0, iVar1, 1);
			}
			iVar0++;
		}
	}
	if ((MISC::IS_BIT_SET(Global_35548[iParam0 /*31*/].f_1, 6) || MISC::IS_BIT_SET(Global_35548[iParam0 /*31*/].f_1, 5)) || func_31(iParam0))
	{
		func_30(iParam0);
		iLocal_84 = iParam0;
		if ((((((((Global_35548[iParam0 /*31*/] == -1735618852 || Global_35548[iParam0 /*31*/] == 213039352) || Global_35548[iParam0 /*31*/] == -1247364148) || Global_35548[iParam0 /*31*/] == 935592315) || Global_35548[iParam0 /*31*/] == 179480401) || Global_35548[iParam0 /*31*/] == -804938986) || Global_35548[iParam0 /*31*/] == -599111730) || Global_35548[iParam0 /*31*/] == 1423193534) || Global_35548[iParam0 /*31*/] == -1958174046)
		{
			AUDIO::_0x06C0023BED16DD6B(Global_35548[iParam0 /*31*/], 1);
		}
		if (MISC::IS_BIT_SET(Global_35548[iParam0 /*31*/].f_1, 7))
		{
			func_29(iParam0, 1);
		}
		if (!MISC::IS_BIT_SET(Global_35548[iParam0 /*31*/].f_1, 2))
		{
			if (MISC::IS_BIT_SET(Global_35548[iParam0 /*31*/].f_1, 1))
			{
				if (Global_35548[iParam0 /*31*/].f_22 > -1f)
				{
					Global_35548[iParam0 /*31*/].f_22 = (Global_35548[iParam0 /*31*/].f_22 - (Global_35548[iParam0 /*31*/].f_23 * SYSTEM::TIMESTEP()));
					if (Global_35548[iParam0 /*31*/].f_22 < -1f)
					{
						Global_35548[iParam0 /*31*/].f_22 = -1f;
					}
					MISC::CLEAR_BIT(&(Global_35548[iParam0 /*31*/].f_1), 3);
				}
				else
				{
					MISC::SET_BIT(&(Global_35548[iParam0 /*31*/].f_1), 2);
				}
			}
			else if (Global_35548[iParam0 /*31*/].f_22 < 1f)
			{
				Global_35548[iParam0 /*31*/].f_22 = (Global_35548[iParam0 /*31*/].f_22 + (Global_35548[iParam0 /*31*/].f_23 * SYSTEM::TIMESTEP()));
				if (Global_35548[iParam0 /*31*/].f_22 > 1f)
				{
					Global_35548[iParam0 /*31*/].f_22 = 1f;
				}
				MISC::CLEAR_BIT(&(Global_35548[iParam0 /*31*/].f_1), 3);
			}
			else
			{
				MISC::SET_BIT(&(Global_35548[iParam0 /*31*/].f_1), 2);
			}
			OBJECT::_SET_DOOR_AJAR_ANGLE(Global_35548[iParam0 /*31*/], Global_35548[iParam0 /*31*/].f_22, 0, 0);
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Global_35548[iParam0 /*31*/], 1, 0, 1);
		}
		else if (MISC::IS_BIT_SET(Global_35548[iParam0 /*31*/].f_1, 1))
		{
			if (Global_35548[iParam0 /*31*/].f_22 > -1f)
			{
				MISC::CLEAR_BIT(&(Global_35548[iParam0 /*31*/].f_1), 2);
			}
		}
		else if (Global_35548[iParam0 /*31*/].f_22 < 1f)
		{
			MISC::CLEAR_BIT(&(Global_35548[iParam0 /*31*/].f_1), 2);
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(Global_35548[iParam0 /*31*/].f_1, 7))
		{
			func_29(iParam0, 0);
		}
		if (!MISC::IS_BIT_SET(Global_35548[iParam0 /*31*/].f_1, 3))
		{
			bVar2 = false;
			iVar3 = VEHICLE::GET_CLOSEST_VEHICLE(Global_35548[iParam0 /*31*/].f_2, 15f, 0, 2175);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar3, 0))
				{
					fVar4 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar3, 1), Global_35548[iParam0 /*31*/].f_2);
					if (fVar4 < Global_35548[iParam0 /*31*/].f_7)
					{
						bVar2 = true;
					}
				}
			}
			if (MISC::IS_BIT_SET(Global_35548[iParam0 /*31*/].f_1, 1))
			{
				if (Global_35548[iParam0 /*31*/].f_22 < 0f)
				{
					if (!bVar2)
					{
						Global_35548[iParam0 /*31*/].f_22 = (Global_35548[iParam0 /*31*/].f_22 + (Global_35548[iParam0 /*31*/].f_23 * SYSTEM::TIMESTEP()));
						if (Global_35548[iParam0 /*31*/].f_22 > 0f)
						{
							Global_35548[iParam0 /*31*/].f_22 = 0f;
						}
						MISC::CLEAR_BIT(&(Global_35548[iParam0 /*31*/].f_1), 2);
					}
				}
				else
				{
					Global_35548[iParam0 /*31*/].f_22 = 0f;
					MISC::SET_BIT(&(Global_35548[iParam0 /*31*/].f_1), 3);
				}
			}
			else if (Global_35548[iParam0 /*31*/].f_22 > 0f)
			{
				if (!bVar2)
				{
					Global_35548[iParam0 /*31*/].f_22 = (Global_35548[iParam0 /*31*/].f_22 - (Global_35548[iParam0 /*31*/].f_23 * SYSTEM::TIMESTEP()));
					if (Global_35548[iParam0 /*31*/].f_22 < 0f)
					{
						Global_35548[iParam0 /*31*/].f_22 = 0f;
					}
					MISC::CLEAR_BIT(&(Global_35548[iParam0 /*31*/].f_1), 2);
				}
			}
			else
			{
				Global_35548[iParam0 /*31*/].f_22 = 0f;
				MISC::SET_BIT(&(Global_35548[iParam0 /*31*/].f_1), 3);
			}
			OBJECT::_SET_DOOR_AJAR_ANGLE(Global_35548[iParam0 /*31*/], Global_35548[iParam0 /*31*/].f_22, 0, 0);
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Global_35548[iParam0 /*31*/], 1, 0, 1);
		}
		else
		{
			if ((((((((Global_35548[iParam0 /*31*/] == -1735618852 || Global_35548[iParam0 /*31*/] == 213039352) || Global_35548[iParam0 /*31*/] == -1247364148) || Global_35548[iParam0 /*31*/] == 935592315) || Global_35548[iParam0 /*31*/] == 179480401) || Global_35548[iParam0 /*31*/] == -804938986) || Global_35548[iParam0 /*31*/] == -599111730) || Global_35548[iParam0 /*31*/] == 1423193534) || Global_35548[iParam0 /*31*/] == -1958174046)
			{
				AUDIO::_0x06C0023BED16DD6B(Global_35548[iParam0 /*31*/], 0);
			}
			func_28(iParam0);
		}
	}
}

void func_28(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	iVar2 = iLocal_89;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (bVar1)
		{
			iLocal_90[(iVar0 - 1)] = iLocal_90[iVar0];
		}
		else if (iLocal_90[iVar0] == iParam0)
		{
			iLocal_89 = (iLocal_89 - 1);
			bVar1 = true;
		}
		iVar0++;
	}
}

void func_29(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	
	if (Global_35548[iParam0 /*31*/] == -1298870201)
	{
		iVar0 = 23;
	}
	else if (Global_35548[iParam0 /*31*/] == 65926040)
	{
		iVar0 = 22;
	}
	else if (Global_35548[iParam0 /*31*/] == 1423193534)
	{
		iVar0 = 26;
	}
	else if (Global_35548[iParam0 /*31*/] == -1958174046)
	{
		iVar0 = 25;
	}
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_35548[iVar0 /*31*/].f_1, 2))
		{
			if (MISC::IS_BIT_SET(Global_35548[iVar0 /*31*/].f_1, 1))
			{
				if (Global_35548[iVar0 /*31*/].f_22 > -1f)
				{
					Global_35548[iVar0 /*31*/].f_22 = (Global_35548[iVar0 /*31*/].f_22 - (Global_35548[iVar0 /*31*/].f_23 * SYSTEM::TIMESTEP()));
					if (Global_35548[iVar0 /*31*/].f_22 < -1f)
					{
						Global_35548[iVar0 /*31*/].f_22 = -1f;
					}
					MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
				}
				else
				{
					MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 2);
				}
			}
			else if (Global_35548[iVar0 /*31*/].f_22 < 1f)
			{
				Global_35548[iVar0 /*31*/].f_22 = (Global_35548[iVar0 /*31*/].f_22 + (Global_35548[iVar0 /*31*/].f_23 * SYSTEM::TIMESTEP()));
				if (Global_35548[iVar0 /*31*/].f_22 > 1f)
				{
					Global_35548[iVar0 /*31*/].f_22 = 1f;
				}
				MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
			}
			else
			{
				MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 2);
			}
			OBJECT::_SET_DOOR_AJAR_ANGLE(Global_35548[iVar0 /*31*/], Global_35548[iVar0 /*31*/].f_22, 0, 0);
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Global_35548[iVar0 /*31*/], 1, 0, 1);
		}
		else if (MISC::IS_BIT_SET(Global_35548[iVar0 /*31*/].f_1, 1))
		{
			if (Global_35548[iVar0 /*31*/].f_22 > -1f)
			{
				MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 2);
			}
		}
		else if (Global_35548[iVar0 /*31*/].f_22 < 1f)
		{
			MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 2);
		}
	}
	else if (!MISC::IS_BIT_SET(Global_35548[iVar0 /*31*/].f_1, 3))
	{
		bVar1 = false;
		iVar2 = VEHICLE::GET_CLOSEST_VEHICLE(Global_35548[iVar0 /*31*/].f_2, 15f, 0, 2175);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0))
			{
				fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar2, 1), Global_35548[iVar0 /*31*/].f_2);
				if (fVar3 < Global_35548[iVar0 /*31*/].f_7)
				{
					bVar1 = true;
				}
			}
		}
		if (MISC::IS_BIT_SET(Global_35548[iVar0 /*31*/].f_1, 1))
		{
			if (Global_35548[iVar0 /*31*/].f_22 < 0f)
			{
				if (!bVar1)
				{
					Global_35548[iVar0 /*31*/].f_22 = (Global_35548[iVar0 /*31*/].f_22 + (Global_35548[iVar0 /*31*/].f_23 * SYSTEM::TIMESTEP()));
					if (Global_35548[iVar0 /*31*/].f_22 > 0f)
					{
						Global_35548[iVar0 /*31*/].f_22 = 0f;
					}
					MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 2);
				}
			}
			else
			{
				Global_35548[iVar0 /*31*/].f_22 = 0f;
				MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
			}
		}
		else if (Global_35548[iVar0 /*31*/].f_22 > 0f)
		{
			if (!bVar1)
			{
				Global_35548[iVar0 /*31*/].f_22 = (Global_35548[iVar0 /*31*/].f_22 - (Global_35548[iVar0 /*31*/].f_23 * SYSTEM::TIMESTEP()));
				if (Global_35548[iVar0 /*31*/].f_22 < 0f)
				{
					Global_35548[iVar0 /*31*/].f_22 = 0f;
				}
				MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 2);
			}
		}
		else
		{
			Global_35548[iVar0 /*31*/].f_22 = 0f;
			MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
		}
		OBJECT::_SET_DOOR_AJAR_ANGLE(Global_35548[iVar0 /*31*/], Global_35548[iVar0 /*31*/].f_22, 0, 0);
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Global_35548[iVar0 /*31*/], 1, 0, 1);
	}
}

void func_30(int iParam0)
{
	int iVar0;
	
	if (iLocal_89 < iLocal_90)
	{
		iVar0 = 0;
		while (iVar0 < iLocal_89)
		{
			if (iLocal_90[iVar0] == iParam0)
			{
				return;
			}
			iVar0++;
		}
		iLocal_90[iLocal_89] = iParam0;
		iLocal_89++;
	}
}

int func_31(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
	if (Global_35548[iParam0 /*31*/].f_24 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_35548[iParam0 /*31*/].f_24)
		{
			iVar1 = Global_35548[iParam0 /*31*/].f_25[iVar0];
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (!PED::IS_PED_INJURED(iVar1))
				{
					if (SYSTEM::VDIST2(Global_35548[iParam0 /*31*/].f_2, ENTITY::GET_ENTITY_COORDS(iVar1, 1)) < Global_35548[iParam0 /*31*/].f_6)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Global_35548[iParam0 /*31*/].f_9, Global_35548[iParam0 /*31*/].f_12, Global_35548[iParam0 /*31*/].f_8, 0, 1, 0))
						{
							iLocal_86 = iVar0;
							return 1;
						}
						if (MISC::IS_BIT_SET(Global_35548[iParam0 /*31*/].f_1, 0))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Global_35548[iParam0 /*31*/].f_16, Global_35548[iParam0 /*31*/].f_19, Global_35548[iParam0 /*31*/].f_15, 0, 1, 0))
							{
								iLocal_86 = iVar0;
								return 1;
							}
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
						{
							iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
							vVar3 = { func_32() };
							vVar4 = { func_32() };
							vVar5 = { func_32() };
							vVar6 = { func_32() };
							MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar2), &vVar3, &vVar4);
							vVar4.x = 0f;
							vVar3.x = 0f;
							vVar5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar2, vVar4) };
							vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar2, vVar3) };
							if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar5, Global_35548[iParam0 /*31*/].f_9, Global_35548[iParam0 /*31*/].f_12, Global_35548[iParam0 /*31*/].f_8, 0, 1))
							{
								iLocal_86 = iVar0;
								return 1;
							}
							if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar6, Global_35548[iParam0 /*31*/].f_9, Global_35548[iParam0 /*31*/].f_12, Global_35548[iParam0 /*31*/].f_8, 0, 1))
							{
								iLocal_86 = iVar0;
								return 1;
							}
							if (MISC::IS_BIT_SET(Global_35548[iParam0 /*31*/].f_1, 0))
							{
								if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar5, Global_35548[iParam0 /*31*/].f_16, Global_35548[iParam0 /*31*/].f_19, Global_35548[iParam0 /*31*/].f_15, 0, 1))
								{
									iLocal_86 = iVar0;
									return 1;
								}
								if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar6, Global_35548[iParam0 /*31*/].f_16, Global_35548[iParam0 /*31*/].f_19, Global_35548[iParam0 /*31*/].f_15, 0, 1))
								{
									iLocal_86 = iVar0;
									return 1;
								}
							}
							if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2))
							{
								iVar7 = 0;
								if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iVar2, &iVar7))
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar7, Global_35548[iParam0 /*31*/].f_9, Global_35548[iParam0 /*31*/].f_12, Global_35548[iParam0 /*31*/].f_8, 0, 1, 0))
									{
										iLocal_86 = iVar0;
										return 1;
									}
									if (MISC::IS_BIT_SET(Global_35548[iParam0 /*31*/].f_1, 0))
									{
										if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar7, Global_35548[iParam0 /*31*/].f_16, Global_35548[iParam0 /*31*/].f_19, Global_35548[iParam0 /*31*/].f_15, 0, 1, 0))
										{
											iLocal_86 = iVar0;
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

Vector3 func_32()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_33(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			return;
		}
	}
	if (Global_35548[iParam0 /*31*/].f_24 == 0)
	{
		return;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_35548[iParam0 /*31*/].f_24)
	{
		if (bVar1)
		{
			Global_35548[iParam0 /*31*/].f_25[(iVar0 - 1)] = Global_35548[iParam0 /*31*/].f_25[iVar0];
			Global_35548[iParam0 /*31*/].f_25[iVar0] = 0;
		}
		else if (iParam1 == Global_35548[iParam0 /*31*/].f_25[iVar0])
		{
			Global_35548[iParam0 /*31*/].f_25[iVar0] = 0;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_35548[iParam0 /*31*/].f_24 = (Global_35548[iParam0 /*31*/].f_24 - 1);
	}
}

void func_34(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_35548[iParam0 /*31*/].f_1), 6);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_35548[iParam0 /*31*/].f_1), 6);
	}
}

void func_35(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			switch (iParam0)
			{
				case 13:
					if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_84500[78 /*34*/].f_6) == 0)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Global_35548[13 /*31*/].f_2, true) <= 100f)
							{
								if (!func_45(13, PLAYER::PLAYER_PED_ID()))
								{
									func_44(13, PLAYER::PLAYER_PED_ID());
								}
							}
							else if (func_45(13, PLAYER::PLAYER_PED_ID()))
							{
								func_33(13, PLAYER::PLAYER_PED_ID(), 0);
							}
						}
					}
					else if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_84500[78 /*34*/].f_6) == 0)
					{
						if (func_45(13, PLAYER::PLAYER_PED_ID()))
						{
							func_33(13, PLAYER::PLAYER_PED_ID(), 0);
						}
					}
					break;
				
				case 17:
				case 16:
					if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_84500[9 /*34*/].f_6) == 0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("extreme2")) == 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Global_35548[17 /*31*/].f_2, true) <= 100f)
						{
							switch (func_39())
							{
								case 0:
									if (func_38(12, 5))
									{
										if (!func_45(17, PLAYER::PLAYER_PED_ID()))
										{
											func_44(17, PLAYER::PLAYER_PED_ID());
										}
										if (!func_45(16, PLAYER::PLAYER_PED_ID()))
										{
											func_44(16, PLAYER::PLAYER_PED_ID());
										}
									}
									else
									{
										if (func_45(17, PLAYER::PLAYER_PED_ID()))
										{
											func_33(17, PLAYER::PLAYER_PED_ID(), 0);
										}
										if (func_45(16, PLAYER::PLAYER_PED_ID()))
										{
											func_33(16, PLAYER::PLAYER_PED_ID(), 0);
										}
									}
									break;
								
								case 1:
									if (func_38(13, 5))
									{
										if (!func_45(17, PLAYER::PLAYER_PED_ID()))
										{
											func_44(17, PLAYER::PLAYER_PED_ID());
										}
										if (!func_45(16, PLAYER::PLAYER_PED_ID()))
										{
											func_44(16, PLAYER::PLAYER_PED_ID());
										}
									}
									else
									{
										if (func_45(17, PLAYER::PLAYER_PED_ID()))
										{
											func_33(17, PLAYER::PLAYER_PED_ID(), 0);
										}
										if (func_45(16, PLAYER::PLAYER_PED_ID()))
										{
											func_33(16, PLAYER::PLAYER_PED_ID(), 0);
										}
									}
									break;
								
								case 2:
									if (func_38(14, 5))
									{
										if (!func_45(17, PLAYER::PLAYER_PED_ID()))
										{
											func_44(17, PLAYER::PLAYER_PED_ID());
										}
										if (!func_45(16, PLAYER::PLAYER_PED_ID()))
										{
											func_44(16, PLAYER::PLAYER_PED_ID());
										}
									}
									else
									{
										if (func_45(17, PLAYER::PLAYER_PED_ID()))
										{
											func_33(17, PLAYER::PLAYER_PED_ID(), 0);
										}
										if (func_45(16, PLAYER::PLAYER_PED_ID()))
										{
											func_33(16, PLAYER::PLAYER_PED_ID(), 0);
										}
									}
									break;
							}
						}
						else
						{
							if (func_45(17, PLAYER::PLAYER_PED_ID()))
							{
								func_33(17, PLAYER::PLAYER_PED_ID(), 0);
							}
							if (func_45(16, PLAYER::PLAYER_PED_ID()))
							{
								func_33(16, PLAYER::PLAYER_PED_ID(), 0);
							}
						}
					}
					break;
				
				case 22:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Global_35548[22 /*31*/].f_2, true) <= 100f)
					{
						switch (func_39())
						{
							case 0:
								if (func_38(12, 5))
								{
									if (!func_45(22, PLAYER::PLAYER_PED_ID()))
									{
										func_44(22, PLAYER::PLAYER_PED_ID());
									}
									if (!func_45(23, PLAYER::PLAYER_PED_ID()))
									{
										func_44(23, PLAYER::PLAYER_PED_ID());
									}
								}
								else
								{
									if (func_45(22, PLAYER::PLAYER_PED_ID()))
									{
										func_33(22, PLAYER::PLAYER_PED_ID(), 0);
									}
									if (func_45(23, PLAYER::PLAYER_PED_ID()))
									{
										func_33(23, PLAYER::PLAYER_PED_ID(), 0);
									}
								}
								break;
							
							case 1:
								if (func_38(13, 5))
								{
									if (!func_45(22, PLAYER::PLAYER_PED_ID()))
									{
										func_44(22, PLAYER::PLAYER_PED_ID());
									}
									if (!func_45(23, PLAYER::PLAYER_PED_ID()))
									{
										func_44(23, PLAYER::PLAYER_PED_ID());
									}
								}
								else
								{
									if (func_45(22, PLAYER::PLAYER_PED_ID()))
									{
										func_33(22, PLAYER::PLAYER_PED_ID(), 0);
									}
									if (func_45(23, PLAYER::PLAYER_PED_ID()))
									{
										func_33(23, PLAYER::PLAYER_PED_ID(), 0);
									}
								}
								break;
							
							case 2:
								if (func_38(14, 5))
								{
									if (!func_45(22, PLAYER::PLAYER_PED_ID()))
									{
										func_44(22, PLAYER::PLAYER_PED_ID());
									}
									if (!func_45(23, PLAYER::PLAYER_PED_ID()))
									{
										func_44(23, PLAYER::PLAYER_PED_ID());
									}
								}
								else
								{
									if (func_45(22, PLAYER::PLAYER_PED_ID()))
									{
										func_33(22, PLAYER::PLAYER_PED_ID(), 0);
									}
									if (func_45(23, PLAYER::PLAYER_PED_ID()))
									{
										func_33(23, PLAYER::PLAYER_PED_ID(), 0);
									}
								}
								break;
						}
					}
					else
					{
						if (func_45(22, PLAYER::PLAYER_PED_ID()))
						{
							func_33(22, PLAYER::PLAYER_PED_ID(), 0);
						}
						if (func_45(23, PLAYER::PLAYER_PED_ID()))
						{
							func_33(23, PLAYER::PLAYER_PED_ID(), 0);
						}
					}
					break;
				
				case 14:
				case 15:
					if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_84500[27 /*34*/].f_6) == 0)
					{
						if (func_45(14, PLAYER::PLAYER_PED_ID()))
						{
							func_33(14, PLAYER::PLAYER_PED_ID(), 0);
						}
						if (func_45(15, PLAYER::PLAYER_PED_ID()))
						{
							func_33(15, PLAYER::PLAYER_PED_ID(), 0);
						}
					}
					break;
				
				case 24:
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 480.4354f, -1317.91f, 29.5957f) < 400f)
					{
						if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_84500[8 /*34*/].f_6) == 0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_84500[10 /*34*/].f_6) == 0)
						{
							if (func_45(24, PLAYER::PLAYER_PED_ID()))
							{
								if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != INTERIOR::GET_INTERIOR_AT_COORDS(480.4354f, -1317.91f, 29.5957f) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 486.86f, -1316.604f, 27.71937f, 484.8906f, -1312.647f, 31.72312f, 4.25f, 0, 1, 0))
								{
									func_33(24, PLAYER::PLAYER_PED_ID(), 0);
								}
							}
							else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(480.4354f, -1317.91f, 29.5957f, "v_chopshop"))
							{
								func_44(24, PLAYER::PLAYER_PED_ID());
							}
						}
						else if (!func_45(24, PLAYER::PLAYER_PED_ID()))
						{
							func_44(24, PLAYER::PLAYER_PED_ID());
						}
					}
					break;
				
				case 25:
				case 26:
					if (!func_45(25, PLAYER::PLAYER_PED_ID()))
					{
						func_44(25, PLAYER::PLAYER_PED_ID());
					}
					if (!func_45(26, PLAYER::PLAYER_PED_ID()))
					{
						func_44(26, PLAYER::PLAYER_PED_ID());
					}
					break;
				
				case 4:
					if (!func_45(4, PLAYER::PLAYER_PED_ID()))
					{
						switch (func_39())
						{
							case 0:
								if (SYSTEM::VDIST2(Global_35548[4 /*31*/].f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) < 10000f)
								{
									func_44(4, PLAYER::PLAYER_PED_ID());
								}
								break;
							
							case 1:
								if (func_37(2))
								{
									if (func_37(17))
									{
										if (func_37(19) || func_36(19))
										{
											if (SYSTEM::VDIST2(Global_35548[4 /*31*/].f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) < 10000f)
											{
												func_44(4, PLAYER::PLAYER_PED_ID());
											}
										}
									}
									else if (SYSTEM::VDIST2(Global_35548[4 /*31*/].f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) < 10000f)
									{
										func_44(4, PLAYER::PLAYER_PED_ID());
									}
								}
								break;
							
							case 2:
								if (func_37(20))
								{
									if (SYSTEM::VDIST2(Global_35548[4 /*31*/].f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) < 10000f)
									{
										func_44(4, PLAYER::PLAYER_PED_ID());
									}
								}
								break;
							}
					}
					break;
				}
			}
	}
}

int func_36(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_87697[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_84464)
	{
		if (Global_84464[iVar0 /*5*/] != -1)
		{
			if (Global_71859.f_109[Global_84464[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_37(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_330[iParam0 /*6*/];
}

bool func_38(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_106565.f_32743[iParam0], iParam1);
}

int func_39()
{
	func_40();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_40()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_43(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_42(PLAYER::PLAYER_PED_ID());
			if (func_41(iVar0) && (!func_70(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_41(Global_106565.f_2357.f_539.f_4321))
				{
					Global_106565.f_2357.f_539.f_4322 = Global_106565.f_2357.f_539.f_4321;
				}
				Global_106565.f_2357.f_539.f_4323 = iVar0;
				Global_106565.f_2357.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106565.f_2357.f_539.f_4321 != 145)
			{
				Global_106565.f_2357.f_539.f_4323 = Global_106565.f_2357.f_539.f_4321;
			}
			return;
		}
	}
	Global_106565.f_2357.f_539.f_4321 = 145;
}

bool func_41(int iParam0)
{
	return iParam0 < 3;
}

int func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_43(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_43(int iParam0)
{
	if (func_41(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_44(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (func_45(iParam0, iParam1))
	{
		return;
	}
	if (Global_35548[iParam0 /*31*/].f_24 < 5)
	{
		Global_35548[iParam0 /*31*/].f_25[Global_35548[iParam0 /*31*/].f_24] = iParam1;
		Global_35548[iParam0 /*31*/].f_24++;
	}
	else
	{
		bVar2 = false;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = Global_35548[iParam0 /*31*/].f_25[iVar0];
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_INJURED(iVar1))
			{
				Global_35548[iParam0 /*31*/].f_25[iVar0] = iParam1;
				bVar2 = true;
				iVar0 = 6;
			}
			iVar0++;
		}
		if (!bVar2)
		{
		}
	}
}

int func_45(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_35548[iParam0 /*31*/].f_24)
	{
		if (iParam1 == Global_35548[iParam0 /*31*/].f_25[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_46()
{
	var uVar0;
	int iVar1;
	
	uVar0 = 226;
	uVar0.f_228 = 8;
	func_69(&Global_33155, &uVar0);
	func_47(iLocal_79);
	iVar1 = 0;
	while (iVar1 < uVar0.f_227)
	{
		if (uVar0[iVar1] != iLocal_79)
		{
			func_47(uVar0[iVar1]);
		}
		iVar1++;
	}
	iLocal_79++;
	if (iLocal_79 >= 226)
	{
		iLocal_79 = 0;
	}
}

void func_47(int iParam0)
{
	if ((MISC::IS_BIT_SET(Global_32221[(iParam0 / 32)], (iParam0 % 32)) && Global_32684[iParam0] != 2) && !MISC::IS_BIT_SET(Global_32457[(iParam0 / 32)], (iParam0 % 32)))
	{
		Global_32230[iParam0] = (Global_32230[iParam0] - 1);
		if (Global_32230[iParam0] <= 0)
		{
			MISC::CLEAR_BIT(&(Global_32221[(iParam0 / 32)]), (iParam0 % 32));
			Global_32230[iParam0] = 0;
		}
	}
	else
	{
		func_48(iParam0);
	}
}

void func_48(int iParam0)
{
	struct<7> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	if (!func_71())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	Var0 = { func_68(iParam0) };
	if (MISC::IS_BIT_SET(Var0.f_4, 2))
	{
		func_54(iParam0, &Var0);
	}
	if (!OBJECT::_DOES_DOOR_EXIST(Var0.f_5))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return;
		}
	}
	bVar1 = false;
	bVar2 = false;
	fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), true);
	if ((MISC::IS_BIT_SET(Global_32221[(iParam0 / 32)], (iParam0 % 32)) && Global_32684[iParam0] == 2) && fVar4 > 210f)
	{
		MISC::CLEAR_BIT(&(Global_32221[(iParam0 / 32)]), (iParam0 % 32));
		Global_32230[iParam0] = 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("startup_positioning")) == 0)
	{
		if (MISC::IS_BIT_SET(Global_32457[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar4 < 25f)
			{
				if (Global_93734.f_337 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						Global_93734.f_337 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					}
				}
				iVar5 = Global_93734.f_337;
				iVar6 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
				if (iVar5 == iVar6 && iVar5 != 0)
				{
					MISC::SET_BIT(&(Global_32221[(iParam0 / 32)]), (iParam0 % 32));
					Global_32684[iParam0] = 3;
					MISC::SET_BIT(&(Global_32212[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			MISC::CLEAR_BIT(&(Global_32457[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (MISC::IS_BIT_SET(Global_32221[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar3 = Global_32684[iParam0];
	}
	else if (MISC::IS_BIT_SET(Var0.f_4, 0))
	{
		if (Global_106565.f_9079)
		{
			iVar3 = func_51(iParam0);
		}
		else
		{
			iVar3 = 0;
		}
		if (func_70(14))
		{
			iVar3 = 0;
		}
	}
	else if (MISC::IS_BIT_SET(Var0.f_4, 1) && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ambient_solomon")) == 0)
	{
		if (func_50())
		{
			iVar3 = 0;
		}
		else
		{
			iVar3 = 1;
		}
	}
	else
	{
		iVar3 = Global_106565.f_7255[iParam0];
	}
	if (Global_32911[iParam0] != iVar3)
	{
		bVar1 = true;
	}
	if (MISC::IS_BIT_SET(Global_32212[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!MISC::IS_BIT_SET(Global_32221[(iParam0 / 32)], (iParam0 % 32)) || (Global_32230[iParam0] == 0 && Global_32684[iParam0] != 2))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (!Global_32211)
		{
		}
		else
		{
			if (!OBJECT::_DOES_DOOR_EXIST(Var0.f_5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar3)
			{
				case 1:
					if (MISC::IS_BIT_SET(Var0.f_4, 3))
					{
						bVar7 = true;
					}
					else if (fVar4 > 3f || MISC::ABSF(OBJECT::_0x65499865FCA6E5EC(Var0.f_5)) <= 0.015f)
					{
						iVar8 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
						if (iVar8 != iVar9 || iVar8 == 0)
						{
							bVar7 = true;
						}
					}
					if (bVar7)
					{
						if (Var0.f_6 != 0f)
						{
							OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
						}
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
						bVar2 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 1);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, 0, 0, 1);
					bVar2 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				}
		}
		if (bVar2)
		{
			MISC::CLEAR_BIT(&(Global_32212[(iParam0 / 32)]), (iParam0 % 32));
			Global_32911[iParam0] = iVar3;
		}
	}
	if (MISC::IS_BIT_SET(Global_32221[(iParam0 / 32)], (iParam0 % 32)) && Global_32684[iParam0] != 2)
	{
		MISC::SET_BIT(&(Global_32212[(iParam0 / 32)]), (iParam0 % 32));
		func_49(iParam0);
		if (Global_32230[iParam0] < 2)
		{
			Global_32230[iParam0]++;
		}
	}
}

void func_49(int iParam0)
{
	if (!MISC::IS_BIT_SET(Global_33155.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		MISC::SET_BIT(&(Global_33155.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_33155[Global_33155.f_227] = iParam0;
		Global_33155.f_227++;
	}
}

int func_50()
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	switch (func_39())
	{
		case 0:
			if (Global_106565.f_9079.f_99.f_58[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_106565.f_9079.f_99.f_58[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_106565.f_9079.f_99.f_58[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_51(int iParam0)
{
	int iVar0;
	
	iVar0 = func_39();
	if (func_52(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (MISC::IS_BIT_SET(Global_106565.f_7223[5], 0) || MISC::IS_BIT_SET(Global_106565.f_7223[6], 0))
			{
				return 0;
			}
		}
		if (func_41(iVar0))
		{
			if (MISC::IS_BIT_SET(Global_88739[5], iVar0))
			{
				return 0;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (iVar0 == 0)
			{
				if (MISC::IS_BIT_SET(Global_106565.f_7223[0], 0))
				{
					return 0;
				}
			}
			if (func_41(iVar0))
			{
				if (MISC::IS_BIT_SET(Global_88739[0], iVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (iVar0 == 1)
			{
				if (MISC::IS_BIT_SET(Global_106565.f_7223[5], 0))
				{
					return 0;
				}
			}
			if (func_41(iVar0))
			{
				if (MISC::IS_BIT_SET(Global_88739[5], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (iVar0 == 1)
			{
				if (MISC::IS_BIT_SET(Global_106565.f_7223[6], 0))
				{
					return 0;
				}
			}
			if (func_41(iVar0))
			{
				if (MISC::IS_BIT_SET(Global_88739[6], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (MISC::IS_BIT_SET(Global_106565.f_7223[2], 0))
				{
					return 0;
				}
				if (func_41(iVar0))
				{
					if (MISC::IS_BIT_SET(Global_88739[2], iVar0))
					{
						return 0;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (MISC::IS_BIT_SET(Global_106565.f_7223[1], 0))
				{
					return 0;
				}
				if (func_41(iVar0))
				{
					if (MISC::IS_BIT_SET(Global_88739[1], iVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (iVar0 == 2)
			{
				if (MISC::IS_BIT_SET(Global_106565.f_7223[3], 0))
				{
					return 0;
				}
			}
			if (func_41(iVar0))
			{
				if (MISC::IS_BIT_SET(Global_88739[3], iVar0))
				{
					return 0;
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_52(int iParam0)
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(func_53(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

int func_53(int iParam0)
{
	return iParam0;
}

void func_54(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_57();
	iVar1 = func_56(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_55(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_106565.f_7255[iParam0] = 0;
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_106565.f_7255[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_106565.f_7255[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_55(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_106565.f_7255[iParam0] = 0;
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_106565.f_7255[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_106565.f_7255[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_55(iParam0))
			{
				if ((SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_setup1")) == 0) && !Global_106565.f_9079.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_106565.f_7255[iParam0] = 0;
							OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_106565.f_9079.f_99.f_58[4])
				{
					Global_106565.f_7255[iParam0] = 0;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			else if (Global_106565.f_9079.f_99.f_58[4])
			{
				Global_106565.f_7255[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
			}
			else if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 18f)
					{
						Global_106565.f_7255[iParam0] = 1;
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 18f)
					{
						Global_106565.f_7255[iParam0] = 1;
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_55(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_106565.f_7255[iParam0] = 0;
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 40f)
				{
					Global_106565.f_7255[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 40f)
				{
					Global_106565.f_7255[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_55(iParam0))
			{
				Global_106565.f_7255[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_55(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_valet")) == 0)
				{
					Global_106565.f_7255[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			else if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_valet")) > 0)
			{
				Global_106565.f_7255[iParam0] = 0;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_84500[70 /*34*/].f_6) == 0)
			{
				if (!func_55(iParam0))
				{
					Global_106565.f_7255[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("omega2")) == 0)
			{
				if (!func_55(iParam0))
				{
					Global_106565.f_7255[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_55(iParam0) && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_84500[26 /*34*/].f_6) == 0)
			{
				Global_106565.f_7255[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_55(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_84500[43 /*34*/].f_6) == 0)
				{
					Global_106565.f_7255[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_55(iParam0))
			{
				Global_106565.f_7255[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_55(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_84500[93 /*34*/].f_6) > 0)
				{
					Global_106565.f_7255[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_55(iParam0))
			{
				Global_106565.f_7255[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_55(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_84500[8 /*34*/].f_6) == 0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_84500[10 /*34*/].f_6) == 0)
				{
					Global_106565.f_7255[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_55(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_84500[47 /*34*/].f_6) == 0)
				{
					Global_106565.f_7255[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_84500[70 /*34*/].f_6) == 0)
			{
				if (!func_55(iParam0))
				{
					Global_106565.f_7255[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_84500[48 /*34*/].f_6) == 0)
			{
				if (!func_55(iParam0))
				{
					Global_106565.f_7255[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_84500[39 /*34*/].f_6) == 0)
			{
				if (!func_55(iParam0))
				{
					Global_106565.f_7255[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_55(iParam0))
			{
				Global_106565.f_7255[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_55(iParam0))
			{
				Global_106565.f_7255[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_55(iParam0))
			{
				Global_106565.f_7255[iParam0] = 0;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
			}
			break;
	}
}

bool func_55(int iParam0)
{
	struct<7> Var0;
	int iVar1;
	
	Var0 = { func_68(iParam0) };
	iVar1 = OBJECT::_0x160AA1B32F6139B8(Var0.f_5);
	return ((iVar1 == 1 || iVar1 == 4) || iVar1 == 2);
}

int func_56(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

var func_57()
{
	var uVar0;
	
	func_67(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_66(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_65(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_60(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_59(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_58(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_58(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_59(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_60(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_64(*uParam0);
	iVar1 = func_62(*uParam0);
	if (iParam1 < 1 || iParam1 > func_61(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_61(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_62(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_63(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_63(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_64(var uParam0)
{
	return uParam0 & 15;
}

void func_65(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_66(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_67(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

struct<7> func_68(int iParam0)
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -1287.857f, -1115.742f, 7.1401f };
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1932.952f, 3725.154f, 32.9944f };
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1207.873f, -470.063f, 66.358f };
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -280.7851f, 6232.782f, 31.8455f };
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 82.3186f, -1392.752f, 29.5261f };
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 82.3186f, -1390.476f, 29.5261f };
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1686.983f, 4821.741f, 42.2131f };
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1687.282f, 4819.484f, 42.2131f };
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -1096.661f, 2705.446f, 19.2578f };
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1094.965f, 2706.964f, 19.2578f };
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -818.7642f, -1079.544f, 11.4781f };
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -816.7932f, -1078.406f, 11.4781f };
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1.7253f, 6515.914f, 32.0278f };
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -1201.435f, -776.8566f, 17.9918f };
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 617.2458f, 2751.022f, 42.7578f };
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -3167.75f, 1055.536f, 21.5329f };
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1454.782f, -231.7927f, 50.0565f };
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1456.201f, -233.3682f, 50.0565f };
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = -1212951353;
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = -1212951353;
			Var0 = { -289.1752f, 6199.112f, 31.637f };
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -1155.454f, -1424.008f, 5.0461f };
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 1321.286f, -1650.597f, 52.3663f };
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -3167.789f, 1074.767f, 20.9209f };
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = { -817f, 179f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = { 1972.787f, 3824.554f, 32.5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = { -1150f, -1521f, 11f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 108.8502f, 6617.876f, 32.673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1182.305f, 2645.242f, 38.807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1174.654f, 2645.242f, 38.6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 225:
			Var0.f_3 = -427498890;
			Var0 = { -205.7007f, -1310.692f, 30.2957f };
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = -1212951353;
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = -1212951353;
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1083.547f, -1975.435f, 31.6222f };
			Var0.f_5 = 792295685;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 563273144;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = -726993043;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 2047070410;
			break;
		
		case 79:
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = -1811763714;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = -1456048340;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = 479144380;
			Var0 = { 1988.353f, 3054.411f, 47.3204f };
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = -1230442770;
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = { -1041.933f, -2748.167f, 22.0308f };
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = { -1044.841f, -2746.489f, 22.0308f };
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = { 1385.258f, -2079.949f, 52.7638f };
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 243782214;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = -1184516519;
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = -1184516519;
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = 1230099731;
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = -966790948;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = 1230099731;
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = -2068750132;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 139:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 1874948872;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = -1965020851;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = -1743257725;
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = -1743257725;
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = -431382051;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = 110411286;
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = -293975210;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = 110411286;
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = -785215289;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = -222270721;
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = -366143778;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = -320891223;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = -1517722103;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = -1093199712;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = -444768985;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = -1417472813;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = -1376084479;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 16.1279f, -1114.605f, 29.9469f };
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 18.572f, -1115.495f, 29.9469f };
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 1698.176f, 3751.506f, 34.8553f };
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 1699.937f, 3753.42f, 34.8553f };
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 845.3624f, -1024.539f, 28.3448f };
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 842.7684f, -1024.539f, 23.3448f };
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -326.1122f, 6075.27f, 31.6047f };
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1313.826f, -389.1259f, 36.8457f };
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1114.009f, 2689.77f, 18.7041f };
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1112.071f, 2691.505f, 18.7041f };
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -3164.845f, 1081.392f, 20.9887f };
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -3163.812f, 1083.778f, 20.9887f };
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 2570.905f, 303.3556f, 108.8848f };
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 2568.304f, 303.3556f, 108.8848f };
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 813.1779f, -2148.27f, 29.7689f };
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 810.5769f, -2148.27f, 29.7689f };
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 6.8179f, -1098.209f, 29.9469f };
			Var0.f_5 = 1487704245;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 1529812051;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = -621770121;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = -1331552374;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = -2018911784;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = -93934272;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = -2112857171;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = -722798986;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = -320140460;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = -920027322;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = -58432001;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = -2007378629;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = -1053755588;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = -53446139;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = -41786493;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = -2116116146;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = -74083138;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

void func_69(var uParam0, var uParam1)
{
	*uParam1 = { *uParam0 };
	uParam1->f_227 = uParam0->f_227;
	uParam0->f_227 = 0;
	uParam0->f_228 = { uParam1->f_228 };
}

bool func_70(int iParam0)
{
	return Global_36425 == iParam0;
}

int func_71()
{
	if ((func_3() == -1 || func_3() == 999) && !func_72() == 0)
	{
		return 1;
	}
	return 0;
}

int func_72()
{
	return Global_25766;
}

void func_73()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_35466[iVar0 /*8*/])))
			{
				if (!STREAMING::IS_IPL_ACTIVE(&(Global_35466[iVar0 /*8*/])))
				{
					STREAMING::REQUEST_IPL(&(Global_35466[iVar0 /*8*/]));
				}
				StringCopy(&(Global_35466[iVar0 /*8*/]), "", 32);
			}
			iVar0++;
		}
	}
	if (!func_71())
	{
		if (Global_34586 >= 198)
		{
			if (!bLocal_93)
			{
				func_83();
				iLocal_92 = 2;
				return;
			}
		}
	}
	iLocal_80 = (iLocal_80 + 1 % 198);
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar1 = (iLocal_80 + iVar2 * 198);
		if (iVar1 < 198)
		{
			if (func_78(iVar1))
			{
				if (((((iVar1 == 179 || iVar1 == 174) || iVar1 == 178) || iVar1 == 175) || iVar1 == 176) || iVar1 == 177)
				{
					func_78(179);
					func_78(174);
					func_78(178);
					func_78(175);
					func_78(176);
					func_78(177);
				}
			}
		}
		iVar2++;
	}
	if (Global_34587)
	{
		iVar1 = 0;
		while (iVar1 < 198)
		{
			func_77(&vLocal_95, iVar1);
			func_76(&vLocal_95, iVar1, Global_33790[iVar1]);
			func_74(&vLocal_95, iVar1, Global_33790[iVar1]);
			Global_34787[iVar1] = 0;
			iVar1++;
		}
		Global_34587 = 0;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		iVar3 = 0;
		while (iVar3 < 10)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_35385[iVar3 /*8*/])))
			{
				if (STREAMING::IS_IPL_ACTIVE(&(Global_35385[iVar3 /*8*/])))
				{
					STREAMING::REMOVE_IPL(&(Global_35385[iVar3 /*8*/]));
				}
				StringCopy(&(Global_35385[iVar3 /*8*/]), "", 32);
			}
			iVar3++;
		}
	}
}

void func_74(var uParam0, int iParam1, int iParam2)
{
	if (!func_75(uParam0->f_79, 0f, 0f, 0f, 0))
	{
		if (iParam2 == 0)
		{
			if (Global_34588[iParam1])
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_35185[iParam1], 0);
				Global_34588[iParam1] = 0;
			}
		}
		else if (iParam2 == 1 || iParam2 == 2)
		{
			if (!Global_34588[iParam1])
			{
				Global_35185[iParam1] = PED::ADD_SCENARIO_BLOCKING_AREA(uParam0->f_79, uParam0->f_82, 0, 1, 1, 1);
				Global_34588[iParam1] = 1;
			}
		}
	}
}

bool func_75(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_76(var uParam0, int iParam1, int iParam2)
{
	if (!func_75(uParam0->f_58, 0f, 0f, 0f, 0) && !func_75(uParam0->f_61, 0f, 0f, 0f, 0))
	{
		if (uParam0->f_64[iParam2])
		{
			PATHFIND::SET_ROADS_IN_AREA(uParam0->f_58, uParam0->f_61, 1, 1);
		}
		else
		{
			PATHFIND::SET_ROADS_IN_AREA(uParam0->f_58, uParam0->f_61, 0, 1);
		}
	}
	if (!func_75(uParam0->f_68, 0f, 0f, 0f, 0))
	{
		if (uParam0->f_75[iParam2])
		{
			if (!Global_34188[iParam1])
			{
				Global_33989[iParam1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(uParam0->f_68, uParam0->f_71, uParam0->f_74, 0, 7);
				Global_34188[iParam1] = 1;
			}
		}
		else if (Global_34188[iParam1])
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_33989[iParam1]);
			Global_34188[iParam1] = 0;
		}
	}
	if (!func_75(uParam0->f_85, 0f, 0f, 0f, 0) && !func_75(uParam0->f_88, 0f, 0f, 0f, 0))
	{
		if (uParam0->f_91[iParam2])
		{
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uParam0->f_85, uParam0->f_88, false, 1);
		}
		else
		{
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uParam0->f_85, uParam0->f_88, true, 1);
		}
	}
}

int func_77(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_58 = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_61 = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_71 = { 190.75f, 31.25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -186270611;
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_79 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_82 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_85 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_88 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_68 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_71 = { 13.6f, 20f, 8.9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_79 = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_82 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_85 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_88 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case 79:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_79 = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_82 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_58 = { 1206.8f, 1803f, 43.9f };
			uParam0->f_61 = { 1329f, 2060.4f, 143.9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_68 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_71 = { 5.5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_68 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_71 = { 2.5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_68 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_68 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_79 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_82 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_85 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_88 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_79 = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_82 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_79 = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_82 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_79 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_82 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_79 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_82 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_79 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_82 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_79 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_82 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 1;
}

int func_78(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	Global_1647687 = 0;
	if (Global_33591[iParam0] || (!func_71() && !Global_34387[iParam0]))
	{
		if (func_82(iParam0, 0, 0, 0))
		{
			iVar1 = 1;
			Global_1647687 = 0;
		}
	}
	if (Global_33790[iParam0] == 1)
	{
		func_77(&vLocal_95, iParam0);
		bVar0 = true;
		if (vLocal_95.f_33)
		{
			if (MISC::GET_HASH_KEY(&(vLocal_95.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(""))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vLocal_95, true) > 250f)
				{
					func_79(iParam0, 2, 0, 1, 0);
				}
			}
		}
	}
	if (Global_34986[iParam0])
	{
		if (!bVar0)
		{
			func_77(&vLocal_95, iParam0);
			bVar0 = true;
		}
		func_76(&vLocal_95, iParam0, Global_33790[iParam0]);
		Global_34986[iParam0] = 0;
	}
	if (Global_34787[iParam0])
	{
		if (!bVar0)
		{
			func_77(&vLocal_95, iParam0);
			bVar0 = true;
		}
		func_74(&vLocal_95, iParam0, Global_33790[iParam0]);
		Global_34787[iParam0] = 0;
	}
	return iVar1;
}

void func_79(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_71590)
		{
			Global_2437364.f_75.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_106565.f_7255.f_227[iParam0] = iParam1;
		}
		Global_33392[iParam0] = iParam2;
		Global_33591[iParam0] = 1;
		func_82(iParam0, bParam3, iParam4, 0);
		func_80(iParam0, iParam1);
	}
}

void func_80(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_81(0, 0);
			}
			else
			{
				func_81(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				AUDIO::_0xB4BBFD9CD8B3922B("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_81(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_105203, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_105203, iParam0);
	}
	Global_105202 = 1;
}

bool func_82(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar4;
	bool bVar5;
	int iVar6;
	
	Global_1647687 = 1;
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_77(&Var3, iParam0);
	if (func_71())
	{
		iVar1 = Global_106565.f_7255.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_2437364.f_75.f_227[iParam0];
	}
	iVar2 = Global_33790[iParam0];
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !bParam3)
	{
		Global_1647687 = 1;
	}
	else
	{
		bVar5 = true;
		if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_33392[iParam0] && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var3, true) < 200f)
				{
					bVar5 = false;
					Global_1647687 = 1;
				}
				if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || BRAIN::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID()))
				{
					if (!CAM::IS_SCREEN_FADED_OUT())
					{
						bVar5 = false;
						Global_1647687 = 1;
					}
				}
			}
		}
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_STATE() != 5))
		{
			bVar5 = false;
			Global_1647687 = 1;
		}
		if (bVar5)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							ENTITY::REMOVE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar1], 0);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							ENTITY::CREATE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_34986[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
								Global_1647687 = 1;
							}
						}
						if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
								Global_1647687 = 1;
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[0 /*8*/]));
								Global_1647687 = 1;
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_34)) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_34)))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_34));
								Global_1647687 = 1;
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_34)) != MISC::GET_HASH_KEY(""))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_34)))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_34));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_34)) != MISC::GET_HASH_KEY(""))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_34)))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_34));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES"))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_34787[iParam0] = 1;
					Global_34986[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar6 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var3, &(Var3.f_42));
					if (iVar6 != 0)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_50)) != MISC::GET_HASH_KEY(""))
						{
							if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_50)))
							{
								INTERIOR::_DISABLE_INTERIOR_PROP(iVar6, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::_DISABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::_DISABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (!INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::_ENABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::_DISABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::_DISABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (!INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::_ENABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::_DISABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::_DISABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES"))
							{
								if (!INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::_ENABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							INTERIOR::REFRESH_INTERIOR(iVar6);
						}
					}
					Global_34986[iParam0] = 1;
					Global_34787[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), true) < 250f)
					{
						uVar4 = OBJECT::_GET_DES_OBJECT(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (OBJECT::_DOES_DES_OBJECT_EXIST(uVar4))
						{
							if (iVar1 == 0)
							{
								OBJECT::_SET_DES_OBJECT_STATE(uVar4, 3);
								Global_34986[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((OBJECT::_GET_DES_OBJECT_STATE(uVar4) != 6 && OBJECT::_GET_DES_OBJECT_STATE(uVar4) != 7) && OBJECT::_GET_DES_OBJECT_STATE(uVar4) != 8)
								{
									OBJECT::_SET_DES_OBJECT_STATE(uVar4, 10);
									Global_34986[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						ENTITY::REMOVE_MODEL_SWAP(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						MISC::CLEAR_BIT(&(Global_33138[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						ENTITY::CREATE_MODEL_SWAP(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						MISC::SET_BIT(&(Global_33138[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_33591[iParam0] = 0;
				Global_33790[iParam0] = iVar1;
				if (!func_71())
				{
					if (!Global_34387[iParam0])
					{
						Global_34387[iParam0] = 1;
						Global_34586++;
					}
				}
			}
		}
	}
	return bVar0;
}

void func_83()
{
	int iVar0;
	struct<7> Var1;
	
	if (Global_32211)
	{
		iVar0 = 0;
		while (iVar0 < 226)
		{
			Var1 = { func_68(iVar0) };
			if (OBJECT::_DOES_DOOR_EXIST(Var1.f_5))
			{
				OBJECT::REMOVE_DOOR_FROM_SYSTEM(Var1.f_5);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 27)
		{
			if (OBJECT::_DOES_DOOR_EXIST(Global_35548[iVar0 /*31*/]))
			{
				OBJECT::REMOVE_DOOR_FROM_SYSTEM(Global_35548[iVar0 /*31*/]);
			}
			iVar0++;
		}
	}
	Global_32211 = 0;
}

void func_84()
{
	if (!iLocal_94 && MISC::IS_BIT_SET(Global_106565.f_9079.f_2[27 /*3*/], 2))
	{
		iLocal_94 = 1;
		bLocal_93 = true;
	}
	if (bLocal_93 && (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_STATE() == 5)))
	{
		if (STREAMING::IS_IPL_ACTIVE("prologue01"))
		{
			STREAMING::REMOVE_IPL("prologue01");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue02"))
		{
			STREAMING::REMOVE_IPL("prologue02");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue03"))
		{
			STREAMING::REMOVE_IPL("prologue03");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue04"))
		{
			STREAMING::REMOVE_IPL("prologue04");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue05"))
		{
			STREAMING::REMOVE_IPL("prologue05");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue06"))
		{
			STREAMING::REMOVE_IPL("prologue06");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologuerd"))
		{
			STREAMING::REMOVE_IPL("prologuerd");
		}
		if (STREAMING::IS_IPL_ACTIVE("Prologue01c"))
		{
			STREAMING::REMOVE_IPL("Prologue01c");
		}
		if (STREAMING::IS_IPL_ACTIVE("Prologue01d"))
		{
			STREAMING::REMOVE_IPL("Prologue01d");
		}
		if (STREAMING::IS_IPL_ACTIVE("Prologue01e"))
		{
			STREAMING::REMOVE_IPL("Prologue01e");
		}
		if (STREAMING::IS_IPL_ACTIVE("Prologue01f"))
		{
			STREAMING::REMOVE_IPL("Prologue01f");
		}
		if (STREAMING::IS_IPL_ACTIVE("Prologue01g"))
		{
			STREAMING::REMOVE_IPL("Prologue01g");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue01h"))
		{
			STREAMING::REMOVE_IPL("prologue01h");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue01i"))
		{
			STREAMING::REMOVE_IPL("prologue01i");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue01j"))
		{
			STREAMING::REMOVE_IPL("prologue01j");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue01k"))
		{
			STREAMING::REMOVE_IPL("prologue01k");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue01z"))
		{
			STREAMING::REMOVE_IPL("prologue01z");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue03b"))
		{
			STREAMING::REMOVE_IPL("prologue03b");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue04b"))
		{
			STREAMING::REMOVE_IPL("prologue04b");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue05b"))
		{
			STREAMING::REMOVE_IPL("prologue05b");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue06b"))
		{
			STREAMING::REMOVE_IPL("prologue06b");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologuerdb"))
		{
			STREAMING::REMOVE_IPL("prologuerdb");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue_occl"))
		{
			STREAMING::REMOVE_IPL("prologue_occl");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue06_int"))
		{
			STREAMING::REMOVE_IPL("prologue06_int");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue04_cover"))
		{
			STREAMING::REMOVE_IPL("prologue04_cover");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue03_grv_dug"))
		{
			STREAMING::REMOVE_IPL("prologue03_grv_dug");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue03_grv_cov"))
		{
			STREAMING::REMOVE_IPL("prologue03_grv_cov");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue03_grv_fun"))
		{
			STREAMING::REMOVE_IPL("prologue03_grv_fun");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue_grv_torch"))
		{
			STREAMING::REMOVE_IPL("prologue_grv_torch");
		}
		if (func_71())
		{
			func_86("prologue_DistantLights");
			func_86("prologue_LODLights");
		}
		else
		{
			if (STREAMING::IS_IPL_ACTIVE("prologue_DistantLights"))
			{
				STREAMING::REMOVE_IPL("prologue_DistantLights");
			}
			if (STREAMING::IS_IPL_ACTIVE("prologue_LODLights"))
			{
				STREAMING::REMOVE_IPL("prologue_LODLights");
			}
		}
		STREAMING::REMOVE_IPL("DES_ProTree_start");
		STREAMING::REMOVE_IPL("DES_ProTree_start_lod");
		STREAMING::_0xAF12610C644A35C9("Prologue_Main", 0);
		func_85(0);
		bLocal_93 = false;
	}
}

void func_85(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (!iParam0 == Global_32191)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 263)
		{
			MISC::SET_BIT(&(Global_26140[iVar0 /*23*/].f_11), 18);
			iVar0++;
		}
		if (Global_26137 == 1)
		{
			Global_26138 = 1;
		}
		Global_26137 = 1;
	}
	Global_32191 = iParam0;
	HUD::_SET_NORTH_YANKTON_MAP(iParam0);
	uVar1 = ZONE::GET_ZONE_FROM_NAME_ID("PrLog");
	ZONE::SET_ZONE_ENABLED(uVar1, iParam0);
}

void func_86(char* sParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (STREAMING::IS_IPL_ACTIVE(sParam0))
		{
			STREAMING::REMOVE_IPL(sParam0);
		}
	}
	else
	{
		iVar1 = MISC::GET_HASH_KEY(sParam0);
		bVar3 = false;
		iVar4 = -1;
		iVar0 = 0;
		while (iVar0 < 10)
		{
			iVar2 = MISC::GET_HASH_KEY(&(Global_35385[iVar0 /*8*/]));
			if (iVar2 == 0)
			{
				iVar4 = iVar0;
			}
			if (iVar2 == iVar1)
			{
				bVar3 = true;
			}
			iVar0++;
		}
		if (!bVar3 && iVar4 != -1)
		{
			StringCopy(&(Global_35385[iVar4 /*8*/]), sParam0, 32);
		}
	}
}

void func_87()
{
	int iVar0;
	int iVar1;
	
	if (func_71())
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return;
		}
		if (func_101())
		{
			return;
		}
	}
	else if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_3() != 2)
	{
		return;
	}
	if (Global_2458610)
	{
		func_83();
		func_99(0);
		Global_2458610 = 0;
	}
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_STATE() != 5))
	{
		return;
	}
	STREAMING::REMOVE_IPL("SUNK_SHIP_FIRE");
	STREAMING::REMOVE_IPL("SpaceInterior");
	if (STREAMING::IS_IPL_ACTIVE("PO1_08_sub_waterplane"))
	{
		STREAMING::REMOVE_IPL("PO1_08_sub_waterplane");
	}
	Global_2437364.f_75.f_426 = 0;
	if (!func_98())
	{
		func_97();
		iLocal_188 = 1;
	}
	Global_33155.f_227 = 0;
	iVar0 = 0;
	while (iVar0 < 226)
	{
		MISC::SET_BIT(&(Global_32212[(iVar0 / 32)]), (iVar0 % 32));
		Global_32230[iVar0] = 0;
		MISC::CLEAR_BIT(&(Global_32221[(iVar0 / 32)]), (iVar0 % 32));
		Global_32684[iVar0] = 0;
		Global_32911[iVar0] = 1;
		MISC::SET_BIT(&(Global_32457[(iVar0 / 32)]), (iVar0 % 32));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 198)
	{
		Global_33392[iVar0] = 0;
		if (Global_34188[iVar0])
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_33989[iVar0]);
			Global_34188[iVar0] = 0;
		}
		if (Global_34588[iVar0])
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_35185[iVar0], 0);
			Global_34588[iVar0] = 0;
		}
		Global_34387[iVar0] = 0;
		iVar0++;
	}
	Global_34586 = 0;
	if (func_71())
	{
		func_96();
		func_95();
		func_99(1);
		func_94();
	}
	else
	{
		func_83();
		func_99(0);
	}
	iLocal_78 = 0;
	iLocal_79 = 0;
	iLocal_80 = 0;
	bLocal_93 = true;
	iLocal_94 = 0;
	iLocal_192 = 1;
	Global_32210 = 0;
	if (func_71())
	{
		MISC::SET_BIT(&iLocal_78, 1);
		MISC::SET_BIT(&iLocal_78, 2);
	}
	else
	{
		MISC::SET_BIT(&iLocal_78, 0);
	}
	if (iLocal_188)
	{
		func_90(1);
		iLocal_188 = 0;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		StringCopy(&(Global_35466[iVar1 /*8*/]), "", 32);
		iVar1++;
	}
	func_89();
	if (!func_71())
	{
		func_88();
	}
	iLocal_92 = 1;
}

void func_88()
{
	unk_0xD4A7A435B3710D05(1287.413f, 2846.593f, 45.05f, 40f);
	unk_0xD4A7A435B3710D05(19.022f, 2611.234f, 81.656f, 40f);
	unk_0xD4A7A435B3710D05(2769.089f, 3920.189f, 41.488f, 40f);
	unk_0xD4A7A435B3710D05(3407.521f, 5504.718f, 21.934f, 40f);
	unk_0xD4A7A435B3710D05(2.43f, 6831.906f, 11.473f, 40f);
	unk_0xD4A7A435B3710D05(-2231.284f, 2417.664f, 7.837f, 40f);
	unk_0xD4A7A435B3710D05(-8.5274f, 3327.212f, 40.5878f, 40f);
	unk_0xD4A7A435B3710D05(2086.27f, 1761.552f, 102.98f, 40f);
	unk_0xD4A7A435B3710D05(1874.689f, 284.791f, 159.961f, 40f);
}

void func_89()
{
	unk_0xB7C6D80FB371659A();
}

void func_90(int iParam0)
{
	int iVar0;
	
	if (Global_106565.f_7255.f_426)
	{
		iVar0 = 0;
		while (iVar0 < 198)
		{
			Global_33392[iVar0] = 1;
			func_82(iVar0, 1, iParam0, 0);
			iVar0++;
		}
		func_93();
		func_91();
	}
	Global_35384 = 1;
}

void func_91()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Global_32194[iVar0] = 0;
		Global_32202[iVar0] = 0;
		iVar0++;
	}
	func_21(3, 1);
	func_21(11, 1);
	func_21(15, 1);
	func_21(16, 1);
	func_21(23, 1);
	func_21(22, 1);
	func_21(21, 1);
	func_21(2, 1);
	func_21(4, 1);
	func_22(45, 1);
	func_21(138, 1);
	func_21(166, 1);
	func_21(167, 1);
	func_21(168, 1);
	func_21(149, 1);
	func_21(190, 1);
	func_18(169, 1);
	func_18(170, 1);
	func_18(171, 1);
	func_18(172, 1);
	func_18(173, 1);
	func_18(174, 1);
	func_18(175, 1);
	func_18(176, 1);
	func_18(177, 1);
	func_18(178, 1);
	func_18(179, 1);
	func_18(180, 1);
	func_18(181, 1);
	func_18(182, 1);
	func_18(183, 1);
	func_18(184, 1);
	func_18(185, 1);
	func_18(186, 1);
	func_18(187, 1);
	func_18(188, 1);
	func_18(189, 1);
	func_18(147, 1);
	func_18(146, 1);
	func_18(145, 1);
	func_18(148, 1);
	func_18(141, 1);
	func_18(142, 1);
	func_18(143, 1);
	func_18(139, 1);
	func_18(144, 1);
	func_18(0, 1);
	func_18(1, 1);
	func_16(8, 1);
	func_16(9, 1);
	func_16(10, 1);
	func_18(24, 1);
	func_21(192, 1);
	func_21(193, 1);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_92())
	{
		func_16(25, 1);
		func_16(26, 1);
		func_16(27, 1);
		func_16(28, 1);
		func_16(29, 1);
		func_16(30, 1);
		func_16(31, 1);
		func_16(32, 1);
		func_16(33, 1);
		func_16(34, 1);
		func_16(35, 1);
		func_16(36, 1);
		func_16(37, 1);
		func_16(38, 1);
		func_16(39, 1);
		func_16(40, 1);
		func_16(41, 1);
		func_16(42, 1);
		func_16(43, 1);
		func_16(44, 1);
		func_16(43, 1);
		func_16(46, 1);
		func_16(12, 1);
		func_16(13, 1);
		func_16(14, 1);
		func_16(47, 1);
	}
}

bool func_92()
{
	return Global_2448756.f_579;
}

void func_93()
{
	func_80(12, Global_106565.f_7255.f_227[12]);
	func_80(65, Global_106565.f_7255.f_227[65]);
	func_80(6, Global_106565.f_7255.f_227[6]);
	func_80(174, Global_106565.f_7255.f_227[174]);
	func_80(37, Global_106565.f_7255.f_227[37]);
}

void func_94()
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 226)
	{
		vVar1 = { func_68(iVar0) };
		if (!OBJECT::_DOES_DOOR_EXIST(vVar1.f_5))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(vVar1.f_5, vVar1.f_3, vVar1, 0, 0, 0);
		}
		iVar0++;
	}
	Global_32211 = 1;
}

void func_95()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(Global_35548[iVar0 /*31*/], Global_35548[iVar0 /*31*/].f_5, Global_35548[iVar0 /*31*/].f_2, 1, 1, 0);
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Global_35548[iVar0 /*31*/], 1, 1, 0);
		Global_35548[iVar0 /*31*/].f_22 = OBJECT::_0x65499865FCA6E5EC(Global_35548[iVar0 /*31*/]);
		MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 2);
		MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
		MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 5);
		MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 6);
		iVar0++;
	}
	bLocal_87 = true;
}

void func_96()
{
	int iVar0;
	
	iVar0 = 4;
	Global_35548[iVar0 /*31*/] = -1735618852;
	Global_35548[iVar0 /*31*/].f_2 = { -844f, 156f, 66f };
	Global_35548[iVar0 /*31*/].f_5 = joaat("prop_lrggate_02_ld");
	Global_35548[iVar0 /*31*/].f_6 = 900f;
	Global_35548[iVar0 /*31*/].f_7 = 36f;
	Global_35548[iVar0 /*31*/].f_8 = 15f;
	Global_35548[iVar0 /*31*/].f_9 = { -851.8159f, 170.8743f, 61.30219f };
	Global_35548[iVar0 /*31*/].f_12 = { -851.57f, 148.1459f, 71.34533f };
	Global_35548[iVar0 /*31*/].f_15 = 15f;
	Global_35548[iVar0 /*31*/].f_16 = { -836.6597f, 175.3366f, 65.05977f };
	Global_35548[iVar0 /*31*/].f_19 = { -836.6878f, 152.789f, 73.66382f };
	Global_35548[iVar0 /*31*/].f_23 = 0.25f;
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 4);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
	iVar0 = 0;
	Global_35548[iVar0 /*31*/] = -303823323;
	Global_35548[iVar0 /*31*/].f_2 = { 19f, -2530f, 5f };
	Global_35548[iVar0 /*31*/].f_5 = joaat("prop_gate_docks_ld");
	Global_35548[iVar0 /*31*/].f_6 = 625f;
	Global_35548[iVar0 /*31*/].f_7 = 49f;
	Global_35548[iVar0 /*31*/].f_8 = 7.75f;
	Global_35548[iVar0 /*31*/].f_9 = { 15.18826f, -2531.203f, 5.05037f };
	Global_35548[iVar0 /*31*/].f_12 = { 30.92092f, -2542.128f, 7.5043f };
	Global_35548[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
	iVar0 = 1;
	Global_35548[iVar0 /*31*/] = -1110491335;
	Global_35548[iVar0 /*31*/].f_2 = { 11f, -2542f, 5f };
	Global_35548[iVar0 /*31*/].f_5 = joaat("prop_gate_docks_ld");
	Global_35548[iVar0 /*31*/].f_6 = 625f;
	Global_35548[iVar0 /*31*/].f_7 = 49f;
	Global_35548[iVar0 /*31*/].f_8 = 7.75f;
	Global_35548[iVar0 /*31*/].f_9 = { 13.80261f, -2540.929f, 5.050376f };
	Global_35548[iVar0 /*31*/].f_12 = { -5.521768f, -2527.885f, 7.542066f };
	Global_35548[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
	iVar0 = 2;
	Global_35548[iVar0 /*31*/] = 883531289;
	Global_35548[iVar0 /*31*/].f_2 = { -193f, -2515f, 5f };
	Global_35548[iVar0 /*31*/].f_5 = joaat("prop_gate_docks_ld");
	Global_35548[iVar0 /*31*/].f_6 = 625f;
	Global_35548[iVar0 /*31*/].f_7 = 49f;
	Global_35548[iVar0 /*31*/].f_8 = 12f;
	Global_35548[iVar0 /*31*/].f_9 = { -190.6964f, -2515.288f, 4.678052f };
	Global_35548[iVar0 /*31*/].f_12 = { -190.7913f, -2536.692f, 9.000118f };
	Global_35548[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
	iVar0 = 3;
	Global_35548[iVar0 /*31*/] = -1464860354;
	Global_35548[iVar0 /*31*/].f_2 = { -203f, -2515f, 5f };
	Global_35548[iVar0 /*31*/].f_5 = joaat("prop_gate_docks_ld");
	Global_35548[iVar0 /*31*/].f_6 = 625f;
	Global_35548[iVar0 /*31*/].f_7 = 49f;
	Global_35548[iVar0 /*31*/].f_8 = 12f;
	Global_35548[iVar0 /*31*/].f_9 = { -200.208f, -2515.379f, 5.047561f };
	Global_35548[iVar0 /*31*/].f_12 = { -200.3241f, -2495.309f, 7.891297f };
	Global_35548[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
	iVar0 = 5;
	Global_35548[iVar0 /*31*/] = 1862541262;
	Global_35548[iVar0 /*31*/].f_2 = { 476f, -3116f, 5f };
	Global_35548[iVar0 /*31*/].f_5 = joaat("prop_gate_docks_ld");
	Global_35548[iVar0 /*31*/].f_6 = 900f;
	Global_35548[iVar0 /*31*/].f_7 = 49f;
	Global_35548[iVar0 /*31*/].f_8 = 40f;
	Global_35548[iVar0 /*31*/].f_9 = { 484.581f, -3115.548f, 4.652226f };
	Global_35548[iVar0 /*31*/].f_12 = { 473.6379f, -3116.051f, 11.0701f };
	Global_35548[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
	iVar0 = 6;
	Global_35548[iVar0 /*31*/] = 747815589;
	Global_35548[iVar0 /*31*/].f_2 = { 492f, -3116f, 5f };
	Global_35548[iVar0 /*31*/].f_5 = joaat("prop_gate_docks_ld");
	Global_35548[iVar0 /*31*/].f_6 = 900f;
	Global_35548[iVar0 /*31*/].f_7 = 49f;
	Global_35548[iVar0 /*31*/].f_8 = 40f;
	Global_35548[iVar0 /*31*/].f_9 = { 484.0876f, -3115.801f, 4.652227f };
	Global_35548[iVar0 /*31*/].f_12 = { 494.8903f, -3115.787f, 11.06866f };
	Global_35548[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
	iVar0 = 7;
	Global_35548[iVar0 /*31*/] = 616346630;
	Global_35548[iVar0 /*31*/].f_2 = { 1600f, -2806f, 16f };
	Global_35548[iVar0 /*31*/].f_5 = joaat("prop_gate_military_01");
	Global_35548[iVar0 /*31*/].f_6 = 900f;
	Global_35548[iVar0 /*31*/].f_7 = 25f;
	Global_35548[iVar0 /*31*/].f_8 = 40f;
	Global_35548[iVar0 /*31*/].f_9 = { -1599.609f, 2805.895f, 15.67009f };
	Global_35548[iVar0 /*31*/].f_12 = { -1593.815f, 2811.392f, 22.02457f };
	Global_35548[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
	iVar0 = 8;
	Global_35548[iVar0 /*31*/] = 447317969;
	Global_35548[iVar0 /*31*/].f_2 = { 1605f, -2801f, 16f };
	Global_35548[iVar0 /*31*/].f_5 = joaat("prop_gate_military_01");
	Global_35548[iVar0 /*31*/].f_6 = 900f;
	Global_35548[iVar0 /*31*/].f_7 = 25f;
	Global_35548[iVar0 /*31*/].f_8 = 40f;
	Global_35548[iVar0 /*31*/].f_9 = { -1599.609f, 2805.895f, 15.67009f };
	Global_35548[iVar0 /*31*/].f_12 = { -1605.858f, 2800.541f, 22.5089f };
	Global_35548[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
	iVar0 = 9;
	Global_35548[iVar0 /*31*/] = -367370493;
	Global_35548[iVar0 /*31*/].f_2 = { -1041f, 4906f, 209f };
	Global_35548[iVar0 /*31*/].f_5 = joaat("prop_gate_cult_01_l");
	Global_35548[iVar0 /*31*/].f_6 = 900f;
	Global_35548[iVar0 /*31*/].f_7 = 25f;
	Global_35548[iVar0 /*31*/].f_8 = 40f;
	Global_35548[iVar0 /*31*/].f_9 = { -1050.437f, 4909.196f, 200f };
	Global_35548[iVar0 /*31*/].f_12 = { -1027.922f, 4921.748f, 215f };
	Global_35548[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
	iVar0 = 10;
	Global_35548[iVar0 /*31*/] = -1402957286;
	Global_35548[iVar0 /*31*/].f_2 = { -1045f, 4915f, 209f };
	Global_35548[iVar0 /*31*/].f_5 = joaat("prop_gate_cult_01_r");
	Global_35548[iVar0 /*31*/].f_6 = 900f;
	Global_35548[iVar0 /*31*/].f_7 = 36f;
	Global_35548[iVar0 /*31*/].f_8 = 40f;
	Global_35548[iVar0 /*31*/].f_9 = { -1050.437f, 4909.196f, 200f };
	Global_35548[iVar0 /*31*/].f_12 = { -1027.922f, 4921.748f, 215f };
	Global_35548[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
	iVar0 = 11;
	Global_35548[iVar0 /*31*/] = -170964766;
	Global_35548[iVar0 /*31*/].f_2 = { 523.982f, 167.7104f, 100.5962f };
	Global_35548[iVar0 /*31*/].f_5 = joaat("prop_hw1_03_gardoor_01");
	Global_35548[iVar0 /*31*/].f_6 = 625f;
	Global_35548[iVar0 /*31*/].f_7 = 9f;
	Global_35548[iVar0 /*31*/].f_8 = 21.75f;
	Global_35548[iVar0 /*31*/].f_9 = { 520.2437f, 164.8932f, 98.04417f };
	Global_35548[iVar0 /*31*/].f_12 = { 523.08f, 172.6999f, 102.7824f };
	Global_35548[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
	iVar0 = 12;
	Global_35548[iVar0 /*31*/] = -1247364148;
	Global_35548[iVar0 /*31*/].f_2 = { 18.6504f, 546.3401f, 176.3448f };
	Global_35548[iVar0 /*31*/].f_5 = joaat("prop_ch_025c_g_door_01");
	Global_35548[iVar0 /*31*/].f_6 = 324f;
	Global_35548[iVar0 /*31*/].f_7 = 9f;
	Global_35548[iVar0 /*31*/].f_8 = 14.75f;
	Global_35548[iVar0 /*31*/].f_9 = { 19.32684f, 550.176f, 174.0001f };
	Global_35548[iVar0 /*31*/].f_12 = { 15.76926f, 543.8351f, 178.023f };
	Global_35548[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
	iVar0 = 13;
	Global_35548[iVar0 /*31*/] = 213039352;
	Global_35548[iVar0 /*31*/].f_2 = { 397.83f, -1607.34f, 28.34f };
	Global_35548[iVar0 /*31*/].f_5 = joaat("prop_facgate_07b");
	Global_35548[iVar0 /*31*/].f_6 = 324f;
	Global_35548[iVar0 /*31*/].f_7 = 9f;
	Global_35548[iVar0 /*31*/].f_8 = 14.5f;
	Global_35548[iVar0 /*31*/].f_9 = { 405.3651f, -1612.886f, 27.52282f };
	Global_35548[iVar0 /*31*/].f_12 = { 396.684f, -1605.761f, 32.76698f };
	Global_35548[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
	iVar0 = 14;
	Global_35548[iVar0 /*31*/] = -166321961;
	Global_35548[iVar0 /*31*/].f_2 = { -2559.19f, 1910.86f, 169.07f };
	Global_35548[iVar0 /*31*/].f_5 = joaat("prop_lrggate_01c_l");
	Global_35548[iVar0 /*31*/].f_6 = 324f;
	Global_35548[iVar0 /*31*/].f_7 = 9f;
	Global_35548[iVar0 /*31*/].f_8 = 13f;
	Global_35548[iVar0 /*31*/].f_9 = { -2551.36f, 1909.907f, 166.4336f };
	Global_35548[iVar0 /*31*/].f_12 = { -2572.051f, 1924.18f, 171.3947f };
	Global_35548[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
	iVar0 = 15;
	Global_35548[iVar0 /*31*/] = -2036678178;
	Global_35548[iVar0 /*31*/].f_2 = { -2556.66f, 1915.72f, 169.07f };
	Global_35548[iVar0 /*31*/].f_5 = joaat("prop_lrggate_01c_r");
	Global_35548[iVar0 /*31*/].f_6 = 324f;
	Global_35548[iVar0 /*31*/].f_7 = 9f;
	Global_35548[iVar0 /*31*/].f_8 = 13f;
	Global_35548[iVar0 /*31*/].f_9 = { -2551.36f, 1909.907f, 166.4336f };
	Global_35548[iVar0 /*31*/].f_12 = { -2572.051f, 1924.18f, 171.3947f };
	Global_35548[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
	iVar0 = 16;
	Global_35548[iVar0 /*31*/] = -599111730;
	Global_35548[iVar0 /*31*/].f_2 = { -961.23f, -2796.28f, 13.96f };
	Global_35548[iVar0 /*31*/].f_5 = -1184516519;
	Global_35548[iVar0 /*31*/].f_6 = 324f;
	Global_35548[iVar0 /*31*/].f_7 = 9f;
	Global_35548[iVar0 /*31*/].f_8 = 7f;
	Global_35548[iVar0 /*31*/].f_9 = { -958.5402f, -2798.281f, 12.71478f };
	Global_35548[iVar0 /*31*/].f_12 = { -964.4572f, -2808.593f, 17.71479f };
	Global_35548[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
	iVar0 = 17;
	Global_35548[iVar0 /*31*/] = -804938986;
	Global_35548[iVar0 /*31*/].f_2 = { -967.01f, -2802.45f, 13.96f };
	Global_35548[iVar0 /*31*/].f_5 = -1184516519;
	Global_35548[iVar0 /*31*/].f_6 = 324f;
	Global_35548[iVar0 /*31*/].f_7 = 9f;
	Global_35548[iVar0 /*31*/].f_8 = 6.5f;
	Global_35548[iVar0 /*31*/].f_9 = { -970.272f, -2800.353f, 12.71479f };
	Global_35548[iVar0 /*31*/].f_12 = { -965.0052f, -2791.101f, 17.71479f };
	Global_35548[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
	iVar0 = 18;
	Global_35548[iVar0 /*31*/] = 935592315;
	Global_35548[iVar0 /*31*/].f_2 = { 431.41f, -1000.16f, 28.65f };
	Global_35548[iVar0 /*31*/].f_5 = joaat("prop_com_gar_door_01");
	Global_35548[iVar0 /*31*/].f_6 = 324f;
	Global_35548[iVar0 /*31*/].f_7 = 9f;
	Global_35548[iVar0 /*31*/].f_8 = 11f;
	Global_35548[iVar0 /*31*/].f_9 = { 433.7827f, -1001.49f, 23.79724f };
	Global_35548[iVar0 /*31*/].f_12 = { 433.8862f, -1017.222f, 29.59358f };
	Global_35548[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
	iVar0 = 19;
	Global_35548[iVar0 /*31*/] = 179480401;
	Global_35548[iVar0 /*31*/].f_2 = { 436.22f, -1001.17f, 26.71f };
	Global_35548[iVar0 /*31*/].f_5 = joaat("prop_com_gar_door_01");
	Global_35548[iVar0 /*31*/].f_6 = 324f;
	Global_35548[iVar0 /*31*/].f_7 = 9f;
	Global_35548[iVar0 /*31*/].f_8 = 11f;
	Global_35548[iVar0 /*31*/].f_9 = { 433.7827f, -1001.49f, 23.79724f };
	Global_35548[iVar0 /*31*/].f_12 = { 433.8862f, -1017.222f, 29.59358f };
	Global_35548[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
	iVar0 = 20;
	Global_35548[iVar0 /*31*/] = -2128682856;
	Global_35548[iVar0 /*31*/].f_2 = { -1588.27f, 2794.21f, 16.85f };
	Global_35548[iVar0 /*31*/].f_5 = -1184516519;
	Global_35548[iVar0 /*31*/].f_6 = 324f;
	Global_35548[iVar0 /*31*/].f_7 = 9f;
	Global_35548[iVar0 /*31*/].f_8 = 6.75f;
	Global_35548[iVar0 /*31*/].f_9 = { -1585.349f, 2796.765f, 15.33345f };
	Global_35548[iVar0 /*31*/].f_12 = { -1573.874f, 2783.339f, 20.00324f };
	Global_35548[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
	iVar0 = 21;
	Global_35548[iVar0 /*31*/] = 313531445;
	Global_35548[iVar0 /*31*/].f_2 = { -1589.58f, 2793.67f, 16.86f };
	Global_35548[iVar0 /*31*/].f_5 = -1184516519;
	Global_35548[iVar0 /*31*/].f_6 = 324f;
	Global_35548[iVar0 /*31*/].f_7 = 9f;
	Global_35548[iVar0 /*31*/].f_8 = 6.75f;
	Global_35548[iVar0 /*31*/].f_9 = { -1592.552f, 2791.04f, 15.32601f };
	Global_35548[iVar0 /*31*/].f_12 = { -1604.54f, 2805.558f, 20.1746f };
	Global_35548[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
	iVar0 = 22;
	Global_35548[iVar0 /*31*/] = -1298870201;
	Global_35548[iVar0 /*31*/].f_2 = { -984.08f, -2348.4f, 12.94f };
	Global_35548[iVar0 /*31*/].f_5 = joaat("prop_facgate_01");
	Global_35548[iVar0 /*31*/].f_6 = 324f;
	Global_35548[iVar0 /*31*/].f_7 = 9f;
	Global_35548[iVar0 /*31*/].f_8 = 15.25f;
	Global_35548[iVar0 /*31*/].f_9 = { -979.2388f, -2341.411f, 11.92474f };
	Global_35548[iVar0 /*31*/].f_12 = { -993.5251f, -2333.147f, 20.42473f };
	Global_35548[iVar0 /*31*/].f_15 = 15.25f;
	Global_35548[iVar0 /*31*/].f_16 = { -984.4644f, -2357.32f, 11.92474f };
	Global_35548[iVar0 /*31*/].f_19 = { -1002.451f, -2346.988f, 20.44472f };
	Global_35548[iVar0 /*31*/].f_23 = 0.55f;
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
	iVar0 = 23;
	Global_35548[iVar0 /*31*/] = 65926040;
	Global_35548[iVar0 /*31*/].f_2 = { -994.5f, -2341.65f, 12.94f };
	Global_35548[iVar0 /*31*/].f_5 = joaat("prop_facgate_01");
	Global_35548[iVar0 /*31*/].f_6 = 324f;
	Global_35548[iVar0 /*31*/].f_7 = 9f;
	Global_35548[iVar0 /*31*/].f_8 = 15.25f;
	Global_35548[iVar0 /*31*/].f_9 = { -979.2388f, -2341.411f, 11.92474f };
	Global_35548[iVar0 /*31*/].f_12 = { -993.5251f, -2333.147f, 20.42473f };
	Global_35548[iVar0 /*31*/].f_15 = 15.25f;
	Global_35548[iVar0 /*31*/].f_16 = { -984.4644f, -2357.32f, 11.92474f };
	Global_35548[iVar0 /*31*/].f_19 = { -1002.451f, -2346.988f, 20.44472f };
	Global_35548[iVar0 /*31*/].f_23 = 0.55f;
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
	iVar0 = 24;
	Global_35548[iVar0 /*31*/] = 1061779107;
	Global_35548[iVar0 /*31*/].f_2 = { 484.56f, -1315.57f, 30.2f };
	Global_35548[iVar0 /*31*/].f_5 = joaat("prop_com_gar_door_01");
	Global_35548[iVar0 /*31*/].f_6 = 324f;
	Global_35548[iVar0 /*31*/].f_7 = 9f;
	Global_35548[iVar0 /*31*/].f_8 = 6.5f;
	Global_35548[iVar0 /*31*/].f_9 = { 486.4057f, -1311.665f, 27.75163f };
	Global_35548[iVar0 /*31*/].f_12 = { 488.9124f, -1316.529f, 31.65202f };
	Global_35548[iVar0 /*31*/].f_15 = 8.5f;
	Global_35548[iVar0 /*31*/].f_16 = { 482.3187f, -1319.807f, 26.91848f };
	Global_35548[iVar0 /*31*/].f_19 = { 478.041f, -1311.511f, 31.95297f };
	Global_35548[iVar0 /*31*/].f_23 = 0.55f;
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
	iVar0 = 25;
	Global_35548[iVar0 /*31*/] = 1423193534;
	Global_35548[iVar0 /*31*/].f_2 = { 451.81f, -1994.17f, 22.14f };
	Global_35548[iVar0 /*31*/].f_5 = joaat("prop_facgate_01");
	Global_35548[iVar0 /*31*/].f_6 = 324f;
	Global_35548[iVar0 /*31*/].f_7 = 9f;
	Global_35548[iVar0 /*31*/].f_8 = 10f;
	Global_35548[iVar0 /*31*/].f_9 = { 444.0669f, -1993.736f, 21.10992f };
	Global_35548[iVar0 /*31*/].f_12 = { 459.423f, -2010.026f, 26.19515f };
	Global_35548[iVar0 /*31*/].f_15 = 10f;
	Global_35548[iVar0 /*31*/].f_16 = { 452.2514f, -1987.255f, 21.18945f };
	Global_35548[iVar0 /*31*/].f_19 = { 466.8117f, -2002.878f, 25.8988f };
	Global_35548[iVar0 /*31*/].f_23 = 0.3f;
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
	iVar0 = 26;
	Global_35548[iVar0 /*31*/] = -1958174046;
	Global_35548[iVar0 /*31*/].f_2 = { 460.06f, -2003.11f, 22.14f };
	Global_35548[iVar0 /*31*/].f_5 = joaat("prop_facgate_01b");
	Global_35548[iVar0 /*31*/].f_6 = 324f;
	Global_35548[iVar0 /*31*/].f_7 = 9f;
	Global_35548[iVar0 /*31*/].f_8 = 10f;
	Global_35548[iVar0 /*31*/].f_9 = { 444.0669f, -1993.736f, 21.10992f };
	Global_35548[iVar0 /*31*/].f_12 = { 459.423f, -2010.026f, 26.19515f };
	Global_35548[iVar0 /*31*/].f_15 = 10f;
	Global_35548[iVar0 /*31*/].f_16 = { 452.2514f, -1987.255f, 21.18945f };
	Global_35548[iVar0 /*31*/].f_19 = { 466.8117f, -2002.878f, 25.8988f };
	Global_35548[iVar0 /*31*/].f_23 = 0.3f;
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 0);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 3);
	MISC::SET_BIT(&(Global_35548[iVar0 /*31*/].f_1), 7);
}

void func_97()
{
	int iVar0;
	
	if (func_71())
	{
	}
	iVar0 = 0;
	while (iVar0 <= 197)
	{
		if (func_71())
		{
			Global_106565.f_7255.f_227[iVar0] = 0;
		}
		else
		{
			Global_2437364.f_75.f_227[iVar0] = 0;
		}
		Global_33591[iVar0] = 1;
		Global_33392[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 225)
	{
		if (func_71())
		{
			Global_106565.f_7255[iVar0] = 1;
		}
		else
		{
			Global_2437364.f_75[iVar0] = 0;
		}
		MISC::SET_BIT(&(Global_32212[(iVar0 / 32)]), (iVar0 % 32));
		Global_33155.f_227 = 0;
		Global_32230[iVar0] = 0;
		MISC::CLEAR_BIT(&(Global_32221[(iVar0 / 32)]), (iVar0 % 32));
		Global_32684[iVar0] = 0;
		Global_32911[iVar0] = 0;
		iVar0++;
	}
	if (func_71())
	{
		Global_106565.f_7255.f_227[185] = 1;
		Global_106565.f_7255.f_227[187] = 1;
		Global_106565.f_7255.f_227[186] = 1;
		Global_106565.f_7255.f_227[86] = 1;
		Global_106565.f_7255[106] = 0;
		Global_106565.f_7255[64] = 0;
		Global_106565.f_7255[65] = 0;
		Global_106565.f_7255[66] = 0;
		Global_106565.f_7255[164] = 0;
		Global_106565.f_7255.f_426 = 1;
	}
	else
	{
		Global_2437364.f_75.f_227[62] = 1;
		Global_2437364.f_75.f_227[179] = 1;
		Global_2437364.f_75.f_227[14] = 1;
		Global_2437364.f_75.f_227[86] = 1;
		Global_2437364.f_75.f_227[173] = 1;
		Global_2437364.f_75.f_227[76] = 1;
		Global_2437364.f_75.f_227[94] = 1;
		Global_2437364.f_75.f_227[70] = 1;
		Global_2437364.f_75.f_227[71] = 1;
		Global_2437364.f_75.f_227[73] = 1;
		Global_2437364.f_75.f_227[72] = 0;
		Global_2437364.f_75.f_227[74] = 0;
		Global_2437364.f_75.f_426 = 1;
	}
	Global_106565.f_7255.f_227[76] = 1;
	Global_106565.f_7255.f_227[94] = 1;
}

bool func_98()
{
	if (func_71())
	{
		return Global_106565.f_7255.f_426;
	}
	return Global_2437364.f_75.f_426;
}

void func_99(bool bParam0)
{
	func_100("MPINT_MISC_DOOR", joaat("prop_sc1_12_door"), -58.47f, -1530.51f, 34.54f, bParam0);
	func_100("MPINT_HIGHEND1_DOOR_L", joaat("prop_ss1_mpint_door_l"), -778.36f, 313.54f, 86.14f, bParam0);
	func_100("MPINT_HIGHEND1_DOOR_R", joaat("prop_ss1_mpint_door_r"), -776.2f, 313.54f, 86.14f, bParam0);
	func_100("MPINT_HIGHEND1_DOOR_GARAGE", joaat("prop_ss1_mpint_garage"), -796.08f, 313.78f, 86.68f, bParam0);
	func_100("MPINT_HIGHEND5_DOOR_L", joaat("prop_dt1_20_mp_door_l"), -263.46f, -970.52f, 31.61f, bParam0);
	func_100("MPINT_HIGHEND5_DOOR_R", joaat("prop_dt1_20_mp_door_r"), -260.66f, -969.21f, 31.61f, bParam0);
	func_100("MPINT_HIGHEND5_DOOR_GARAGE", joaat("prop_dt1_20_mp_gar"), -282.55f, -995.16f, 24.67f, bParam0);
	func_100("MPINT_HIGHEND7_DOOR_L", joaat("sm_14_mp_door_l"), -1444.28f, -545.01f, 34.98f, bParam0);
	func_100("MPINT_HIGHEND7_DOOR_R", joaat("sm_14_mp_door_r"), -1442.3f, -543.63f, 34.98f, bParam0);
	func_100("MPINT_HIGHEND7_DOOR_GARAGE", joaat("prop_sm_14_mp_gar"), -1455.81f, -503.98f, 32.29f, bParam0);
	func_100("MPINT_HIGHEND9_DOOR_L", joaat("prop_bh1_09_mp_l"), -914.06f, -453.65f, 39.81f, bParam0);
	func_100("MPINT_HIGHEND9_DOOR_R", joaat("prop_bh1_09_mp_r"), -912.91f, -455.89f, 39.81f, bParam0);
	func_100("MPINT_HIGHEND9_DOOR_GARAGE", joaat("prop_bh1_09_mp_gar"), -820.57f, -436.81f, 37.44f, bParam0);
	func_100("MPINT_HIGHEND12_DOOR_L", joaat("dt1_03_mp_door"), -47.84f, -588.77f, 38.36f, bParam0);
	func_100("MPINT_HIGHEND12_DOOR_GARAGE", joaat("prop_com_gar_door_01"), -33.79f, -621.62f, 36.11f, bParam0);
	func_100("MPINT_HIGHEND14_DOOR_GARAGE", joaat("prop_bh1_08_mp_gar"), -878.02f, -359.46f, 36.27f, bParam0);
	func_100("MPINT_HIGHEND16_DOOR_L", joaat("prop_ss1_mpint_door_l"), -615.8f, 38.37f, 44.04f, bParam0);
	func_100("MPINT_HIGHEND16_DOOR_R", joaat("prop_ss1_mpint_door_r"), -613.64f, 38.37f, 44.04f, bParam0);
	func_100("MPINT_HIGHEND16_DOOR_GARAGE", joaat("prop_ss1_mpint_garage"), -629.91f, 56.57f, 44.72f, bParam0);
	func_100("MPINT_LOWEND1_DOOR", joaat("p_cut_door_01"), -40.19f, -58.21f, 64.21f, bParam0);
	func_100("MPINT_LOWEND2_DOOR", joaat("p_cut_door_03"), -200.29f, 185.6f, 80.66f, bParam0);
	func_100("MPINT_LOWEND3_DOOR_L", joaat("prop_kt1_10_mpdoor_l"), -812.83f, -979.01f, 14.6f, bParam0);
	func_100("MPINT_LOWEND3_DOOR_R", joaat("prop_kt1_10_mpdoor_r"), -811.25f, -981.27f, 14.61f, bParam0);
	func_100("MPINT_LOWEND4_DOOR", joaat("kt1_11_mp_door"), -661.87f, -854.63f, 24.69f, bParam0);
	func_100("MPINT_LOWEND5_DOOR", joaat("prop_sm_10_mp_door"), -1533.58f, -327.59f, 48.09f, bParam0);
	func_100("MPINT_LOWEND6_DOOR_L", joaat("prop_sm1_11_doorr"), -1565.58f, -406.92f, 42.61f, bParam0);
	func_100("MPINT_LOWEND6_DOOR_R", joaat("prop_sm1_11_doorl"), -1564.01f, -405.04f, 42.61f, bParam0);
	func_100("MP_APARTMENT_DOOR_01", joaat("prop_sm1_11_doorr"), -1605.014f, -431.9617f, 40.6384f, bParam0);
	func_100("MPINT_LOWEND7_DOOR_GARAGE", joaat("prop_sm1_11_garaged"), -1605.26f, -447.18f, 38.58f, bParam0);
	func_100("MPINT_MIDEND1_DOOR_L", joaat("prop_bh1_44_door_01l"), 286.91f, -159.22f, 64.84f, bParam0);
	func_100("MPINT_MIDEND1_DOOR_R", joaat("prop_bh1_44_door_01r"), 285.94f, -161.88f, 64.84f, bParam0);
	func_100("MPINT_MIDEND2_DOOR", joaat("prop_bh1_44_door_01r"), 4.4f, 37.32f, 71.75f, bParam0);
	func_100("MPINT_MIDEND3_DOOR", joaat("prop_bh1_44_door_01r"), 8.74f, 81.31f, 78.65f, bParam0);
	func_100("MPINT_MIDEND4_DOOR_L", joaat("prop_sm1_11_doorl"), -510.42f, 108f, 64.02f, bParam0);
	func_100("MPINT_MIDEND4_DOOR_R", joaat("prop_sm1_11_doorr"), -512.84f, 107.66f, 64.02f, bParam0);
	func_100("MPINT_MIDEND5_DOOR", joaat("prop_ss1_05_mp_door"), -197.23f, 85.16f, 69.9f, bParam0);
	func_100("MPINT_MIDEND6_DOOR_L", joaat("prop_ss1_08_mp_door_l"), -627.34f, 170.87f, 61.29f, bParam0);
	func_100("MPINT_MIDEND6_DOOR_R", joaat("prop_ss1_08_mp_door_r"), -627.34f, 168.53f, 61.29f, bParam0);
	func_100("MPINT_MIDEND7_DOOR_L", joaat("vb_43_door_l_mp"), -969.36f, -1429.98f, 7.97f, bParam0);
	func_100("MPINT_MIDEND7_DOOR_R", joaat("vb_43_door_r_mp"), -968.6f, -1432.04f, 6.77f, bParam0);
	func_100("MPINT_MIDEND8_DOOR_L", joaat("prop_kt1_10_mpdoor_r"), -830.05f, -862.99f, 21.09f, bParam0);
	func_100("MPINT_MIDEND8_DOOR_R", joaat("prop_kt1_10_mpdoor_l"), -832.81f, -862.99f, 21.09f, bParam0);
	func_100("MPINT_MIDEND9_DOOR_L", joaat("prop_kt1_06_door_l"), -763.9f, -755.08f, 28.19f, bParam0);
	func_100("MPINT_MIDEND9_DOOR_R", joaat("prop_kt1_06_door_r"), -763.9f, -752.49f, 28.19f, bParam0);
}

void func_100(char* sParam0, int iParam1, vector3 vParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (bParam3)
	{
		if (!OBJECT::_DOES_DOOR_EXIST(iVar0))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iVar0, iParam1, vParam2, 0, 0, 0);
		}
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(iVar0, 1, 0, 1);
	}
	else if (OBJECT::_DOES_DOOR_EXIST(iVar0))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(iVar0, 0, 0, 1);
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iVar0);
	}
}

bool func_101()
{
	return Global_1312836;
}

void func_102()
{
	if (func_71())
	{
		if (((!Global_106565.f_7255.f_426 || MISC::IS_BIT_SET(iLocal_78, 0)) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || Global_32210)
		{
			if (!Global_2460020)
			{
				if (MISC::IS_BIT_SET(iLocal_78, 0) || Global_32210)
				{
					iLocal_188 = 1;
				}
				iLocal_92 = 0;
			}
		}
	}
	else if ((MISC::IS_BIT_SET(iLocal_78, 1) || ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_92()) && !func_103())) || Global_32210)
	{
		if (func_3() == 2)
		{
			if (MISC::IS_BIT_SET(iLocal_78, 2))
			{
				iLocal_92 = 0;
			}
		}
		else
		{
			iLocal_92 = 0;
		}
		if (MISC::IS_BIT_SET(iLocal_78, 1))
		{
			iLocal_188 = 1;
		}
	}
}

int func_103()
{
	if ((((func_107() || func_106()) || func_92()) || func_105()) || func_104())
	{
		return 1;
	}
	return 0;
}

var func_104()
{
	return Global_2448756.f_730;
}

var func_105()
{
	return Global_2448756.f_581;
}

var func_106()
{
	return Global_2448756.f_594;
}

bool func_107()
{
	return MISC::IS_BIT_SET(Global_2448756, 21);
}

