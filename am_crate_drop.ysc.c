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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
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
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 10;
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
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	struct<189> Local_103 = { 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000, -1357824103, -1, -1, -1, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, -1, 0, 0, 480000, -1, 0, 1, 0, 0, 0, 0, 0, 4, 0, 832784782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 453432689, 30, 200, 100, 0, 832784782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 453432689, 30, 200, 100, 0, 832784782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 453432689, 30, 200, 100, 0, 832784782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 453432689, 30, 200, 100, 1, 0, 2006918058, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1000, 4, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 3, 0, 1, 0, -1861623876, 0, 0, 0, 0, 0 } ;
	var uLocal_292 = 0;
	struct<4> Local_293[32];
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424[1] = { 0 };
	int iLocal_426[1] = { 0 };
	struct<33> Local_428[1];
	var uLocal_462[1] = { 0 };
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	int iLocal_466[1] = { 0 };
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_483 = 0;
	bool bLocal_484 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_468 = joaat("prop_flare_01");
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_468(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_462(ScriptParam_0);
	}
	else
	{
		func_456();
	}
	while (true)
	{
		func_455();
		if (func_445() || func_442(4))
		{
			func_456();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_456();
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_456();
		}
		if (func_440(PLAYER::PLAYER_ID()))
		{
			func_456();
		}
		if (func_438(PLAYER::PLAYER_ID()))
		{
			func_456();
		}
		func_437();
		switch (func_436(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 1;
				if (func_435() == 4)
				{
					Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 3;
				}
				break;
			
			case 1:
				if (func_435() == 1)
				{
					func_77();
				}
				else if (func_435() == 4)
				{
					Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 3;
				}
				break;
			
			case 3:
				func_76(&(Local_103.f_184));
				if (func_75(&(Local_103.f_184)))
				{
					Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 4;
				}
				break;
			
			case 2:
				Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 4;
			
			case 4:
				func_456();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_435())
			{
				case 0:
					if (func_61())
					{
						Local_103 = 1;
					}
					break;
				
				case 1:
					func_7();
					func_3();
					if (func_1())
					{
						Local_103 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x1F2
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x206
{
	return 0;
}

void func_3()//Position - 0x20F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	MISC::SET_BIT(&(Local_103.f_2.f_1[0 /*66*/].f_65), 10);
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			iVar3 = 0;
			while (iVar3 < 1)
			{
				if (!MISC::IS_BIT_SET(Local_103.f_2.f_1[iVar3 /*66*/].f_65, 2))
				{
					if (MISC::IS_BIT_SET(Local_293[iVar0 /*4*/].f_1, (0 + iVar3)))
					{
						MISC::SET_BIT(&(Local_103.f_2.f_1[iVar3 /*66*/].f_65), 2);
					}
				}
				if (!MISC::IS_BIT_SET(Local_103.f_2.f_1[iVar3 /*66*/].f_65, 11))
				{
					if (MISC::IS_BIT_SET(Local_293[iVar0 /*4*/].f_1, (3 + iVar3)))
					{
						MISC::SET_BIT(&(Local_103.f_2.f_1[iVar3 /*66*/].f_65), 11);
					}
				}
				if (!MISC::IS_BIT_SET(Local_103.f_2.f_1[iVar3 /*66*/].f_65, 3))
				{
					if (MISC::IS_BIT_SET(Local_293[iVar0 /*4*/].f_1, (6 + iVar3)))
					{
						MISC::SET_BIT(&(Local_103.f_2.f_1[iVar3 /*66*/].f_65), 3);
					}
				}
				if (!MISC::IS_BIT_SET(Local_103.f_2.f_1[iVar3 /*66*/].f_65, 15))
				{
					if (MISC::IS_BIT_SET(Local_293[iVar0 /*4*/].f_1, (15 + iVar3)))
					{
						MISC::SET_BIT(&(Local_103.f_2.f_1[iVar3 /*66*/].f_65), 15);
					}
				}
				if (func_468(iVar1, 1, 1))
				{
					if (Local_103.f_2.f_1[iVar3 /*66*/].f_64 == -1)
					{
						if (MISC::IS_BIT_SET(Local_293[iVar0 /*4*/].f_1, (12 + iVar3)))
						{
							Local_103.f_2.f_1[iVar3 /*66*/].f_64 = iVar0;
							func_6(iVar3);
							func_5(iVar3);
							func_4(iVar3);
						}
					}
					if (!MISC::IS_BIT_SET(Local_103.f_2.f_1[iVar3 /*66*/].f_65, (14 + iVar3)) && MISC::IS_BIT_SET(Local_103.f_2.f_1[iVar3 /*66*/].f_65, (3 + iVar3)))
					{
						if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_1[iVar3 /*66*/].f_1))
						{
							Local_103.f_179 = (Local_103.f_179 - 1);
							MISC::SET_BIT(&(Local_103.f_2.f_1[iVar3 /*66*/].f_65), (14 + iVar3));
						}
					}
					if (ENTITY::IS_ENTITY_AT_COORD(iVar2, Local_103.f_2.f_68[iVar3 /*104*/].f_1, 100f, 100f, 100f, 0, 1, 0))
					{
						MISC::CLEAR_BIT(&(Local_103.f_2.f_1[0 /*66*/].f_65), 10);
						MISC::CLEAR_BIT(&(Local_103.f_2.f_1[iVar3 /*66*/].f_65), 13);
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(iVar2, Local_103.f_2.f_68[iVar3 /*104*/].f_1, 180f, 180f, 180f, 0, 1, 0))
					{
						MISC::CLEAR_BIT(&(Local_103.f_2.f_1[iVar3 /*66*/].f_65), 13);
					}
				}
				iVar3++;
			}
		}
		iVar0++;
	}
}

void func_4(int iParam0)//Position - 0x49C
{
	if (Local_103.f_2.f_1[iParam0 /*66*/].f_59 != 0)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_103.f_2.f_1[iParam0 /*66*/].f_59))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(Local_103.f_2.f_1[iParam0 /*66*/].f_59, 0);
			Local_103.f_2.f_1[iParam0 /*66*/].f_59 = 0;
		}
	}
}

void func_5(int iParam0)//Position - 0x4EB
{
	if (Local_103.f_2.f_1[iParam0 /*66*/].f_58 != 0)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_103.f_2.f_1[iParam0 /*66*/].f_58))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_103.f_2.f_1[iParam0 /*66*/].f_58, 0);
		}
	}
}

void func_6(int iParam0)//Position - 0x527
{
	if (AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_103.f_2.f_1[iParam0 /*66*/].f_60) != -1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_1[iParam0 /*66*/].f_1))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_103.f_2.f_1[iParam0 /*66*/].f_60)))
			{
				AUDIO::STOP_SOUND(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_103.f_2.f_1[iParam0 /*66*/].f_60));
				AUDIO::RELEASE_SOUND_ID(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_103.f_2.f_1[iParam0 /*66*/].f_60));
			}
		}
		else if (!AUDIO::HAS_SOUND_FINISHED(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_103.f_2.f_1[iParam0 /*66*/].f_60)))
		{
			AUDIO::STOP_SOUND(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_103.f_2.f_1[iParam0 /*66*/].f_60));
			AUDIO::RELEASE_SOUND_ID(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_103.f_2.f_1[iParam0 /*66*/].f_60));
		}
	}
}

void func_7()//Position - 0x5D9
{
	int iVar0;
	
	switch (Local_103.f_180)
	{
		case 0:
			if ((func_59() && func_58()) && func_57())
			{
				Local_103.f_180 = 1;
			}
			break;
		
		case 1:
			MISC::SET_BIT(&(Local_103.f_2.f_1[0 /*66*/].f_65), 6);
			MISC::SET_BIT(&(Local_103.f_2.f_1[0 /*66*/].f_65), 7);
			MISC::SET_BIT(&(Local_103.f_2.f_1[0 /*66*/].f_65), 8);
			MISC::SET_BIT(&(Local_103.f_2.f_1[0 /*66*/].f_65), 9);
			iVar0 = 0;
			while (iVar0 < Local_103.f_2)
			{
				func_50(iVar0);
				func_18(iVar0);
				func_11(iVar0);
				iVar0++;
			}
			if (MISC::IS_BIT_SET(Local_103.f_2.f_1[0 /*66*/].f_65, 6) && MISC::IS_BIT_SET(Local_103.f_2.f_1[0 /*66*/].f_65, 9))
			{
				if (MISC::IS_BIT_SET(Local_103.f_2.f_1[0 /*66*/].f_65, 7))
				{
					if (MISC::IS_BIT_SET(Local_103.f_2.f_1[0 /*66*/].f_65, 10) || func_9(&uLocal_464, 60000, 0))
					{
						func_8();
						Local_103.f_180 = 2;
					}
				}
				else if (MISC::IS_BIT_SET(Local_103.f_2.f_1[0 /*66*/].f_65, 8))
				{
					if (MISC::IS_BIT_SET(Local_103.f_2.f_1[0 /*66*/].f_65, 10) || func_9(&uLocal_464, 60000, 0))
					{
						func_8();
						Local_103.f_180 = 2;
					}
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_8()//Position - 0x73D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_5(iVar0);
		iVar0++;
	}
}

int func_9(var uParam0, int iParam1, bool bParam2)//Position - 0x75D
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)//Position - 0x7BB
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_11(int iParam0)//Position - 0x800
{
	struct<14> Var0;
	
	if (Local_103.f_2.f_1[iParam0 /*66*/].f_64 == -1)
	{
		if (MISC::IS_BIT_SET(Local_103.f_2.f_1[iParam0 /*66*/].f_65, 1))
		{
			if (!MISC::IS_BIT_SET(Local_103.f_1, 11))
			{
				if (Local_103.f_2.f_1[iParam0 /*66*/].f_63 != func_17() && Local_103.f_2.f_1[iParam0 /*66*/].f_63 != func_16())
				{
					Local_103.f_2.f_1[iParam0 /*66*/].f_63 = func_17();
				}
			}
			else if (Local_103.f_2.f_1[iParam0 /*66*/].f_63 != func_15())
			{
				Local_103.f_2.f_1[iParam0 /*66*/].f_63 = func_15();
			}
			if (func_9(&(Local_103.f_2.f_1[iParam0 /*66*/].f_61), Local_103.f_2.f_1[iParam0 /*66*/].f_63, 0))
			{
				if (MISC::IS_BIT_SET(Local_103.f_2.f_1[iParam0 /*66*/].f_65, 13) || MISC::IS_BIT_SET(Local_103.f_1, 14))
				{
					func_4(iParam0);
					Var0.f_2 = -815164265;
					func_13(Var0, func_14(1));
					Local_103.f_2.f_1[iParam0 /*66*/].f_64 = 9999;
				}
				else
				{
					func_12(&(Local_103.f_2.f_1[iParam0 /*66*/].f_61));
					Local_103.f_2.f_1[iParam0 /*66*/].f_63 = func_16();
					MISC::SET_BIT(&(Local_103.f_1), 14);
				}
			}
		}
		MISC::SET_BIT(&(Local_103.f_2.f_1[iParam0 /*66*/].f_65), 13);
	}
}

void func_12(var uParam0)//Position - 0x94A
{
	uParam0->f_1 = 0;
}

void func_13(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0x957
{
	Param0 = 111286607;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam14);
	}
}

int func_14(int iParam0)//Position - 0x984
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_468(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_15()//Position - 0x9E1
{
	return Global_262145.f_11365;
}

int func_16()//Position - 0x9F0
{
	return Global_262145.f_11366;
}

int func_17()//Position - 0x9FF
{
	return Global_262145.f_11364;
}

void func_18(int iParam0)//Position - 0xA0E
{
	if (!MISC::IS_BIT_SET(Local_103.f_2.f_1[iParam0 /*66*/].f_65, 5))
	{
		MISC::CLEAR_BIT(&(Local_103.f_2.f_1[0 /*66*/].f_65), 9);
		if (Local_103.f_2.f_68[iParam0 /*104*/].f_4 == 2)
		{
			if (func_49())
			{
				Local_103.f_2.f_68[iParam0 /*104*/].f_4 = 0;
			}
			else
			{
				Local_103.f_2.f_68[iParam0 /*104*/].f_4 = 1;
				Local_103.f_177++;
			}
		}
		switch (Local_103.f_2.f_68[iParam0 /*104*/].f_4)
		{
			case 1:
				if (MISC::IS_BIT_SET(Local_103.f_2.f_1[iParam0 /*66*/].f_65, 2))
				{
					if (func_39(iParam0))
					{
						MISC::SET_BIT(&(Local_103.f_2.f_1[iParam0 /*66*/].f_65), 5);
					}
				}
				break;
			
			case 0:
				if (func_19(iParam0))
				{
					MISC::SET_BIT(&(Local_103.f_2.f_1[iParam0 /*66*/].f_65), 5);
				}
				break;
			
			default:
				MISC::SET_BIT(&(Local_103.f_2.f_1[iParam0 /*66*/].f_65), 5);
				break;
			}
	}
}

int func_19(int iParam0)//Position - 0xAF9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_103.f_2.f_68[iParam0 /*104*/].f_96)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]))
		{
			if (func_38(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/].f_1))
			{
				if (func_21(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/].f_2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_20(&(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), 22, Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/].f_1, Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/].f_2, Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/].f_5, 1, 1, 1))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), Global_1574990);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), 1, 0);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), 0);
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), joaat("weapon_pistol"), 25000, 0);
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/].f_14, 25000, 1);
						PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/].f_15);
						PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), 1);
						PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), 0, 1);
						PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), 1);
						PED::_0x52D59AB61DDC05DD(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), 1);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), SYSTEM::ROUND((200f * Global_262145.f_153)), 0);
						PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), 1);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), 1);
						BRAIN::TASK_COMBAT_HATED_TARGETS_IN_AREA(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), Local_103.f_2.f_68[iParam0 /*104*/].f_1, 150f, 0);
					}
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_103.f_2.f_68[iParam0 /*104*/].f_96)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_20(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, int iParam8, int iParam9)//Position - 0xDE9
{
	int iVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, vParam3, fParam6, iParam8, bParam7);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(iVar0, iParam9);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam7)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_21(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)//Position - 0xE48
{
	Global_2405071.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(vParam0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (fParam14 > 0f)
	{
		if (func_31(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_22(vParam0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405071.f_2++;
	return 1;
}

int func_22(vector3 vParam0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)//Position - 0xF59
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_468(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_27(PLAYER::PLAYER_ID()), vParam0, 1) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_468(iVar1, 1, 1))
		{
			if (!func_24(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_23(iVar1) || !bParam10) && !Global_2424047[iVar1 /*416*/].f_259)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_27(iVar1), vParam0, 1) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_27(iVar1), vParam0, 1) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_23(int iParam0)//Position - 0x1111
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2424047[iParam0 /*416*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_24(int iParam0, int iParam1)//Position - 0x113C
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_25(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589819[iParam0 /*818*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_25(int iParam0, bool bParam1)//Position - 0x1187
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_26();
	}
	if (Global_1312847[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_26()//Position - 0x11C8
{
	return Global_1312745;
}

Vector3 func_27(int iParam0)//Position - 0x11D4
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_30() && Global_1589819[iVar0 /*818*/].f_789) && !func_29(Global_1589819[iVar0 /*818*/].f_790))
	{
		return Global_1589819[iVar0 /*818*/].f_790;
	}
	return func_28(iParam0);
}

Vector3 func_28(int iParam0)//Position - 0x1227
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_29(vector3 vParam0)//Position - 0x123A
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_30()//Position - 0x1264
{
	return Global_2448756.f_16;
}

int func_31(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)//Position - 0x1272
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_468(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_23(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_32(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_28(iVar1), vParam0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0)//Position - 0x136E
{
	if (func_37(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2505680 = { func_36(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2505680))
	{
		return 1;
	}
	if (func_33(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0, int iParam1)//Position - 0x13B5
{
	int iVar0;
	
	iVar0 = func_35(iParam0);
	if (!iVar0 == func_34())
	{
		if (iVar0 == func_35(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_34()//Position - 0x13E0
{
	return -1;
}

int func_35(int iParam0)//Position - 0x13E9
{
	if (iParam0 != func_34())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_34();
}

struct<13> func_36(int iParam0)//Position - 0x140C
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_37(int iParam0, int iParam1)//Position - 0x1423
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2505680 = { func_36(iParam0) };
		Global_2505693 = { func_36(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2505680))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2505693))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2505610, 35, &Global_2505680);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2505645, 35, &Global_2505693);
				if (Global_2505610 == Global_2505645)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_38(int iParam0)//Position - 0x1490
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_39(int iParam0)//Position - 0x14AE
{
	if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(4, 1, 0, 0))
	{
		if (func_45(iParam0) && func_40(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_40(int iParam0)//Position - 0x14DA
{
	int iVar0;
	int iVar1;
	
	if (func_43(Local_103.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/]))
	{
		if (func_42(Local_103.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/]))
		{
			iVar0 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_103.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/])) + 1;
			if (iVar0 > Local_103.f_2.f_68[iParam0 /*104*/].f_96)
			{
				iVar0 = Local_103.f_2.f_68[iParam0 /*104*/].f_96;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]))
				{
					if (func_38(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/].f_1))
					{
						if (func_41(&(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), Local_103.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/], 22, Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/].f_1, (iVar1 - 1), 1, 1, 1))
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), Global_1574990);
							ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), 1, 0);
							PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), 0);
							WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), joaat("weapon_pistol"), 25000, 0);
							WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/].f_14, 25000, 1);
							PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/].f_15);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), 2, 1);
							PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), 1);
							PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), 0, 1);
							PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), 1);
							PED::_0x52D59AB61DDC05DD(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), 1);
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), SYSTEM::ROUND((200f * Global_262145.f_153)), 0);
							PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), 1);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), 1);
							BRAIN::TASK_COMBAT_HATED_TARGETS_IN_AREA(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), Local_103.f_2.f_68[iParam0 /*104*/].f_1, 250f, 0);
						}
					}
				}
				iVar1++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]))
				{
					return 0;
				}
				iVar1++;
			}
			return 1;
		}
	}
	return 0;
}

int func_41(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x17E8
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_PED(*uParam0), iParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_42(var uParam0)//Position - 0x1870
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

int func_43(var uParam0)//Position - 0x1892
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return !func_44(NETWORK::NET_TO_VEH(uParam0));
	}
	return 0;
}

int func_44(int iParam0)//Position - 0x18B2
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_45(int iParam0)//Position - 0x18EB
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/]))
	{
		if (func_38(Local_103.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/].f_1))
		{
			iVar5 = 0;
			while (iVar5 < 3)
			{
				if (func_21(Local_103.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/].f_2[iVar5 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					vVar0 = { Local_103.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/].f_2[iVar5 /*3*/] };
					fVar3 = Local_103.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/].f_12[iVar5];
					iVar4 = 1;
					iVar5 = 3;
				}
				iVar5++;
			}
			if (iVar4 == 1)
			{
				if (func_46(&(Local_103.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/]), Local_103.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/].f_1, vVar0, fVar3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_103.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/]), Local_103.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/].f_16, 0);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_103.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/]), SYSTEM::TO_FLOAT(Local_103.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/].f_16));
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_103.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/]), SYSTEM::TO_FLOAT(Local_103.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/].f_16));
					if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_103.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/].f_1))
					{
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(NETWORK::NET_TO_VEH(Local_103.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/]));
					}
					VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_103.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/]), true, 1, 0);
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/]))
	{
		return 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_103.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/].f_1);
	return 1;
}

int func_46(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)//Position - 0x1AE6
{
	float fVar0;
	int iVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, vParam2, fParam5, iParam7, iParam6, iParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2528542.f_6212 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::_NETWORK_SET_ENTITY_VISIBLE_TO_NETWORK(iVar1, 1);
			}
			ENTITY::_SET_ENTITY_SOMETHING(iVar1, iParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 0);
				}
				if (bParam13)
				{
					NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(*uParam0, PLAYER::PLAYER_ID(), 1);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam9);
			VEHICLE::_0xB2E0C0D6922D31F2(iVar1, 1);
			if (bParam12)
			{
				VEHICLE::_0xFC40CBF7B90CA77C(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_47(vParam2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_47(vector3 vParam0, float fParam3, int iParam4, int iParam5)//Position - 0x1BEE
{
	int iVar0;
	
	if (func_48(PLAYER::PLAYER_ID(), vParam0, iParam4) > -1)
	{
		if ((Global_2405071.f_2908[1 /*6*/].f_5 == iParam5 && Global_2405071.f_2908[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2405071.f_2908[1 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405071.f_2908[iVar0 /*6*/] = { Global_2405071.f_2908[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405071.f_2908[1 /*6*/] = { vParam0 };
		Global_2405071.f_2908[1 /*6*/].f_3 = fParam3;
		Global_2405071.f_2908[1 /*6*/].f_4 = iParam4;
		Global_2405071.f_2908[1 /*6*/].f_5 = iParam5;
	}
}

int func_48(int iParam0, vector3 vParam1, int iParam4)//Position - 0x1CC1
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				vVar2 = { vParam1 };
				if (MISC::ABSF((Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.z = Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_49()//Position - 0x1D5F
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_50(int iParam0)//Position - 0x1D80
{
	struct<14> Var0;
	struct<14> Var14;
	
	if (!MISC::IS_BIT_SET(Local_103.f_2.f_1[iParam0 /*66*/].f_65, 0))
	{
		if (func_9(&(Local_103.f_186), 60000, 0))
		{
			MISC::SET_BIT(&(Local_103.f_2.f_1[iParam0 /*66*/].f_65), 0);
		}
	}
	else if (!MISC::IS_BIT_SET(Local_103.f_2.f_1[iParam0 /*66*/].f_65, 1))
	{
		if (func_55(iParam0))
		{
			if (func_53())
			{
				if (!MISC::IS_BIT_SET(Local_103.f_1, 11))
				{
					Var0.f_2 = 989345583;
				}
				else
				{
					Var0.f_2 = 93637837;
				}
				func_13(Var0, func_14(1));
				func_51(iParam0);
				STATS::_PLAYSTATS_AMBIENT_MISSION_CRATE_CREATED(Local_103.f_2.f_68[iParam0 /*104*/].f_1, Local_103.f_2.f_68[iParam0 /*104*/].f_1.f_1, Local_103.f_2.f_68[iParam0 /*104*/].f_1.f_2);
				MISC::SET_BIT(&(Local_103.f_2.f_1[iParam0 /*66*/].f_65), 1);
				Local_103.f_176++;
			}
		}
		if (!MISC::IS_BIT_SET(Local_103.f_2.f_1[iParam0 /*66*/].f_65, 1))
		{
			if (func_9(&(Local_103.f_188), 60000, 0))
			{
				func_8();
				Local_103.f_180 = 2;
				Var14.f_2 = 773734482;
				func_13(Var14, func_14(1));
			}
		}
	}
	if (!MISC::IS_BIT_SET(Local_103.f_2.f_1[iParam0 /*66*/].f_65, 1))
	{
		MISC::CLEAR_BIT(&(Local_103.f_2.f_1[0 /*66*/].f_65), 6);
	}
	if (Local_103.f_2.f_1[iParam0 /*66*/].f_64 == -1)
	{
		MISC::CLEAR_BIT(&(Local_103.f_2.f_1[0 /*66*/].f_65), 7);
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_1[iParam0 /*66*/].f_1))
	{
		MISC::CLEAR_BIT(&(Local_103.f_2.f_1[0 /*66*/].f_65), 8);
	}
}

int func_51(int iParam0)//Position - 0x1F13
{
	if (func_52())
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_103.f_2.f_1[iParam0 /*66*/].f_59))
		{
			Local_103.f_2.f_1[iParam0 /*66*/].f_59 = GRAPHICS::_START_PARTICLE_FX_LOOPED_ON_ENTITY_2("scr_crate_drop_beacon", NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1), 0f, 0f, 0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 1065353216, 1065353216, 1065353216, 0);
			if (!MISC::IS_BIT_SET(Local_103.f_1, 11))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(Local_103.f_2.f_1[iParam0 /*66*/].f_59, 0.8f, 0.18f, 0.19f, 0);
			}
			else
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(Local_103.f_2.f_1[iParam0 /*66*/].f_59, 1f, 0.84f, 0f, 0);
			}
		}
	}
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_103.f_2.f_1[iParam0 /*66*/].f_59))
	{
		return 0;
	}
	return 1;
}

int func_52()//Position - 0x1FDC
{
	STREAMING::REQUEST_PTFX_ASSET();
	if (STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		return 1;
	}
	return 0;
}

int func_53()//Position - 0x1FF4
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(Local_103.f_1, 11))
	{
		MISC::SET_BIT(&(Global_2499349.f_10), 9);
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		STREAMING::REQUEST_MODEL(Local_103.f_181[iVar0 /*2*/].f_1);
		if (STREAMING::HAS_MODEL_LOADED(Local_103.f_181[iVar0 /*2*/].f_1))
		{
			MISC::SET_BIT(&(Global_2499349.f_10), 10);
			if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_181[iVar0 /*2*/]) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_1[iVar0 /*66*/].f_1)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_1[iVar0 /*66*/].f_2))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_1[iVar0 /*66*/].f_1))
				{
					MISC::SET_BIT(&(Global_2499349.f_10), 12);
					if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
					{
						MISC::SET_BIT(&(Global_2499349.f_10), 13);
						if (func_42(Local_103.f_2.f_1[iVar0 /*66*/].f_1))
						{
							MISC::SET_BIT(&(Global_2499349.f_10), 14);
							if (func_54(&(Local_103.f_181[iVar0 /*2*/]), Local_103.f_181[iVar0 /*2*/].f_1, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iVar0 /*66*/].f_1), 1) - Vector(5f, 0f, 0f), 1, 1, 1, 0, 0, 0, 0))
							{
								MISC::SET_BIT(&(Global_2499349.f_10), 15);
								NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_103.f_181[iVar0 /*2*/], 1);
								ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_103.f_181[iVar0 /*2*/]), ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iVar0 /*66*/].f_1)));
								ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iVar0 /*66*/].f_1), NETWORK::NET_TO_OBJ(Local_103.f_181[iVar0 /*2*/]), 0, 0f, 0f, 0.35f, 0f, 0f, 0f, 1, 0, 1, 0, 2, 1);
								OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_103.f_181[iVar0 /*2*/]), 1);
								ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_OBJ(Local_103.f_181[iVar0 /*2*/]), 0);
								PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_103.f_181[iVar0 /*2*/]));
								ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_103.f_181[iVar0 /*2*/]), 0f, 0f, -0.2f);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iVar0 /*66*/].f_2), NETWORK::NET_TO_OBJ(Local_103.f_181[iVar0 /*2*/]), 0, 0f, 0f, 0.1f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iVar0 /*66*/].f_2), 1);
								ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iVar0 /*66*/].f_2), 0);
								ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iVar0 /*66*/].f_2), &(Local_103.f_2.f_1[iVar0 /*66*/].f_14), &(Local_103.f_2.f_1[iVar0 /*66*/].f_8), 1000f, 0, 0, 0, 0f, 0);
								ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iVar0 /*66*/].f_2));
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(NETWORK::NET_TO_OBJ(Local_103.f_181[iVar0 /*2*/]), NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iVar0 /*66*/].f_1), 0);
								if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_1[iVar0 /*66*/].f_2))
								{
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(NETWORK::NET_TO_OBJ(Local_103.f_181[iVar0 /*2*/]), NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iVar0 /*66*/].f_2), 0);
								}
							}
						}
					}
					else
					{
						MISC::SET_BIT(&(Global_2499349.f_10), 17);
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_181[iVar0 /*2*/]))
		{
			return 0;
		}
		iVar0++;
	}
	MISC::SET_BIT(&(Global_2499349.f_10), 16);
	return 1;
}

int func_54(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11)//Position - 0x2313
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, vParam2, iParam6, bParam5, iParam7));
	}
	else
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, vParam2, iParam6, bParam5, iParam7));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_OBJ(*uParam0), iParam8);
		if (bParam10)
		{
			NETWORK::_NETWORK_SET_ENTITY_VISIBLE_TO_NETWORK(NETWORK::NET_TO_OBJ(*uParam0), 1);
		}
		if (bParam11)
		{
			ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(*uParam0), false, 0);
		}
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_55(int iParam0)//Position - 0x23B8
{
	int iVar0;
	
	STREAMING::REQUEST_MODEL(Local_103.f_2.f_1[iParam0 /*66*/].f_3);
	STREAMING::REQUEST_MODEL(Local_103.f_2.f_1[iParam0 /*66*/].f_4);
	if (!MISC::IS_BIT_SET(Local_103.f_1, 11))
	{
		STREAMING::REQUEST_MODEL(Local_103.f_181[iParam0 /*2*/].f_1);
	}
	if (STREAMING::HAS_MODEL_LOADED(Local_103.f_2.f_1[iParam0 /*66*/].f_3))
	{
		MISC::SET_BIT(&(Global_2499349.f_10), 0);
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_1[iParam0 /*66*/].f_1))
		{
			MISC::SET_BIT(&(Global_2499349.f_10), 1);
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
			{
				MISC::SET_BIT(&(Global_2499349.f_10), 2);
				Local_103.f_2.f_1[iParam0 /*66*/].f_1 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(joaat("pickup_portable_crate_unfixed"), func_56(iParam0), 0, Local_103.f_2.f_1[iParam0 /*66*/].f_3));
				ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_103.f_2.f_1[iParam0 /*66*/].f_1, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1), 1);
				OBJECT::_0x77F33F2CCF64B3AA(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1), 1);
				OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1), 1);
				ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1), 0);
				PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1));
				ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1), 0f, 0f, -0.2f);
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1), 1, 0);
				func_6(iParam0);
				iVar0 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iVar0, "Crate_Beeps", NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1), "MP_CRATE_DROP_SOUNDS", 1, 0);
				Local_103.f_2.f_1[iParam0 /*66*/].f_60 = AUDIO::GET_NETWORK_ID_FROM_SOUND_ID(iVar0);
			}
		}
	}
	if (STREAMING::HAS_MODEL_LOADED(Local_103.f_2.f_1[iParam0 /*66*/].f_4))
	{
		MISC::SET_BIT(&(Global_2499349.f_10), 3);
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_1[iParam0 /*66*/].f_1))
		{
			MISC::SET_BIT(&(Global_2499349.f_10), 4);
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_1[iParam0 /*66*/].f_2))
			{
				MISC::SET_BIT(&(Global_2499349.f_10), 5);
				if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
				{
					MISC::SET_BIT(&(Global_2499349.f_10), 6);
					if (func_54(&(Local_103.f_2.f_1[iParam0 /*66*/].f_2), Local_103.f_2.f_1[iParam0 /*66*/].f_4, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1), 1) + Vector(1f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
					{
						MISC::SET_BIT(&(Global_2499349.f_10), 7);
						NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_103.f_2.f_1[iParam0 /*66*/].f_2, 1);
						if (MISC::IS_BIT_SET(Local_103.f_1, 11))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_2), NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1), 0, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_2), 1);
							ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_2), 0);
							ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_2), &(Local_103.f_2.f_1[iParam0 /*66*/].f_14), &(Local_103.f_2.f_1[iParam0 /*66*/].f_8), 1000f, 0, 0, 0, 0f, 0);
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_2));
						}
					}
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_1[iParam0 /*66*/].f_1) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_1[iParam0 /*66*/].f_2))
	{
		MISC::SET_BIT(&(Global_2499349.f_10), 8);
		return 1;
	}
	return 0;
}

Vector3 func_56(int iParam0)//Position - 0x2737
{
	vector3 vVar0;
	
	vVar0 = { Local_103.f_2.f_68[iParam0 /*104*/].f_1 };
	vVar0.x = (vVar0.x + MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 7.5f));
	vVar0.y = (vVar0.y + MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 7.5f));
	vVar0.z = (vVar0.z + (PATHFIND::_0x29C24BFBED8AB8FB(vVar0.x, vVar0.y) + 100f));
	return vVar0;
}

int func_57()//Position - 0x2790
{
	int iVar0;
	
	if (func_52())
	{
		iVar0 = 0;
		while (iVar0 < Local_103.f_2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_466[iVar0]))
			{
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_103.f_2.f_1[iVar0 /*66*/].f_58))
				{
					Local_103.f_2.f_1[iVar0 /*66*/].f_58 = GRAPHICS::_START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE_2("scr_crate_drop_flare", iLocal_466[iVar0], 0f, 0f, -0.2f, 0f, 0f, 0f, -1, 1065353216, 0, 0, 0, 1065353216, 1065353216, 1065353216, 0);
					if (!MISC::IS_BIT_SET(Local_103.f_1, 11))
					{
						GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(Local_103.f_2.f_1[iVar0 /*66*/].f_58, 0.8f, 0.18f, 0.19f, 0);
					}
					else
					{
						GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(Local_103.f_2.f_1[iVar0 /*66*/].f_58, 1f, 0.84f, 0f, 0);
					}
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_103.f_2)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_103.f_2.f_1[iVar0 /*66*/].f_58))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_58()//Position - 0x288A
{
	int iVar0;
	
	STREAMING::REQUEST_MODEL(iLocal_468);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_468))
	{
		iVar0 = 0;
		while (iVar0 < Local_103.f_2)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_466[iVar0]))
			{
				MISC::CLEAR_AREA(Local_103.f_2.f_68[iVar0 /*104*/].f_1, 1f, 0, 1, 0, false);
				iLocal_466[iVar0] = OBJECT::CREATE_OBJECT(iLocal_468, Local_103.f_2.f_68[iVar0 /*104*/].f_1, 0, false, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_466[iVar0], 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_466[iVar0], true);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_103.f_2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_466[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_59()//Position - 0x293E
{
	STREAMING::REQUEST_MODEL(Local_103.f_2.f_1[0 /*66*/].f_3);
	STREAMING::REQUEST_MODEL(Local_103.f_2.f_1[0 /*66*/].f_4);
	if ((STREAMING::HAS_MODEL_LOADED(Local_103.f_2.f_1[0 /*66*/].f_3) && STREAMING::HAS_MODEL_LOADED(Local_103.f_2.f_1[0 /*66*/].f_4)) && func_60())
	{
		return 1;
	}
	return 0;
}

int func_60()//Position - 0x2998
{
	STREAMING::REQUEST_ANIM_DICT(&(Local_103.f_2.f_1[0 /*66*/].f_8));
	if (STREAMING::HAS_ANIM_DICT_LOADED(&(Local_103.f_2.f_1[0 /*66*/].f_8)))
	{
		return 1;
	}
	return 0;
}

int func_61()//Position - 0x29C6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_103.f_2)
	{
		func_73(&(Local_103.f_2.f_68[iVar0 /*104*/]));
		func_72(&(Local_103.f_2.f_68[iVar0 /*104*/]), &(Local_103.f_2.f_173));
		func_62(&(Local_103.f_2.f_1[iVar0 /*66*/]));
		Local_103.f_2.f_1[iVar0 /*66*/].f_60 = -1;
		Local_103.f_2.f_1[iVar0 /*66*/].f_59 = 0;
		iVar0++;
	}
	return 1;
}

void func_62(var uParam0)//Position - 0x2A2E
{
	int iVar0;
	int iVar1;
	
	switch (*uParam0)
	{
		case 0:
			uParam0->f_3 = joaat("prop_drug_package");
			uParam0->f_4 = joaat("p_cargo_chute_s");
			uParam0->f_5 = { 0f, 0f, 0f };
			StringCopy(&(uParam0->f_8), "P_cargo_chute_S", 24);
			StringCopy(&(uParam0->f_14), "P_cargo_chute_S_deploy", 32);
			StringCopy(&(uParam0->f_22), "P_cargo_chute_S_crumple", 32);
			uParam0->f_63 = func_17();
			if (!MISC::IS_BIT_SET(Local_103.f_1, 11))
			{
				if (func_49())
				{
					uParam0->f_30 = 0;
				}
				else
				{
					uParam0->f_30 = 1;
				}
			}
			else
			{
				uParam0->f_30 = 8;
			}
			switch (uParam0->f_30)
			{
				case 0:
					uParam0->f_32 = (1000 * MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_40, Global_262145.f_41));
					if (uParam0->f_32 > Global_262145.f_46)
					{
						uParam0->f_32 = Global_262145.f_46;
					}
					break;
				
				case 1:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
					if (Global_262145.f_16[iVar0] != 0 && Global_262145.f_27[iVar0] > 0)
					{
						uParam0->f_32 = Global_262145.f_27[iVar0];
						uParam0->f_33 = Global_262145.f_16[iVar0];
						iLocal_471 = Global_262145.f_16[iVar0];
					}
					else if (iVar0 == 1)
					{
						uParam0->f_32 = 4;
						uParam0->f_33 = joaat("weapon_rpg");
					}
					else if (iVar0 == 2)
					{
						uParam0->f_32 = 4;
						uParam0->f_33 = joaat("weapon_heavysniper");
					}
					else if (iVar0 == 3)
					{
						uParam0->f_32 = 8;
						uParam0->f_33 = joaat("weapon_assaultshotgun");
					}
					else if (iVar0 == 4)
					{
						uParam0->f_32 = 4;
						uParam0->f_33 = joaat("weapon_stickybomb");
					}
					else if (iVar0 == 5)
					{
						uParam0->f_32 = 1;
						uParam0->f_33 = joaat("weapon_grenadelauncher");
					}
					else if (iVar0 == 6)
					{
						uParam0->f_32 = 4;
						uParam0->f_33 = joaat("weapon_advancedrifle");
					}
					else if (iVar0 == 7)
					{
						uParam0->f_32 = 2;
						uParam0->f_33 = joaat("weapon_combatmg");
					}
					else if (iVar0 == 8)
					{
						uParam0->f_32 = 4;
						uParam0->f_33 = joaat("weapon_molotov");
					}
					else if (iVar0 == 9)
					{
						uParam0->f_32 = 4;
						uParam0->f_33 = joaat("weapon_grenade");
					}
					else
					{
						uParam0->f_32 = 1;
						uParam0->f_33 = joaat("weapon_minigun");
					}
					iLocal_471 = uParam0->f_33;
					break;
				
				case 8:
					if (Global_262145.f_42 > 0)
					{
						uParam0->f_32 = Global_262145.f_42;
					}
					else
					{
						uParam0->f_32 = 5000;
					}
					if (Global_262145.f_38 != 0 && Global_262145.f_39 > 0)
					{
						uParam0->f_33 = Global_262145.f_38;
					}
					else
					{
						uParam0->f_33 = joaat("weapon_minigun");
					}
					iLocal_471 = uParam0->f_33;
					iLocal_472 = 0;
					if (func_65(joaat("mp_m_freemode_01"), Global_262145.f_68, &(uParam0->f_34), &(uParam0->f_35)))
					{
						if (func_64(PLAYER::PLAYER_ID()))
						{
							iLocal_474[0] = Global_262145.f_68;
						}
					}
					if (func_65(joaat("mp_f_freemode_01"), Global_262145.f_69, &(uParam0->f_36), &(uParam0->f_37)))
					{
						if (!func_64(PLAYER::PLAYER_ID()))
						{
							iLocal_474[0] = Global_262145.f_69;
						}
					}
					iVar1 = 0;
					while (iVar1 < 4)
					{
						if (func_65(joaat("mp_m_freemode_01"), func_63(iVar1, 1), &(uParam0->f_38[iVar1]), &(uParam0->f_43[iVar1])))
						{
							if (func_64(PLAYER::PLAYER_ID()))
							{
								iLocal_474[iVar1 + 1] = func_63(iVar1, 1);
							}
						}
						if (func_65(joaat("mp_f_freemode_01"), func_63(iVar1, 0), &(uParam0->f_48[iVar1]), &(uParam0->f_53[iVar1])))
						{
							if (!func_64(PLAYER::PLAYER_ID()))
							{
								iLocal_474[iVar1 + 1] = func_63(iVar1, 0);
							}
						}
						iVar1++;
					}
					break;
			}
			break;
	}
}

int func_63(int iParam0, bool bParam1)//Position - 0x2D97
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return Global_262145.f_10128;
			}
			else
			{
				return Global_262145.f_10129;
			}
			break;
		
		case 1:
			if (bParam1)
			{
				return Global_262145.f_10130;
			}
			else
			{
				return Global_262145.f_10131;
			}
			break;
		
		case 2:
			if (bParam1)
			{
				return Global_262145.f_10132;
			}
			else
			{
				return Global_262145.f_10133;
			}
			break;
		
		case 3:
			if (bParam1)
			{
				return Global_262145.f_10134;
			}
			else
			{
				return Global_262145.f_10135;
			}
			break;
	}
	if (bParam1)
	{
		return Global_262145.f_10128;
	}
	return Global_262145.f_10129;
}

int func_64(int iParam0)//Position - 0x2E50
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	return Global_2424047[iParam0 /*416*/].f_230;
}

int func_65(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x2E72
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<8> Var4;
	struct<10> Var19;
	int iVar36;
	int iVar37;
	int iVar38;
	struct<10> Var39;
	int iVar56;
	int iVar57;
	int iVar58;
	struct<8> Var59;
	int iVar74;
	int iVar75;
	int iVar76;
	struct<10> Var77;
	int iVar94;
	int iVar95;
	int iVar96;
	
	if ((iParam1 != -1 && iParam1 != 0) && iParam1 != 1849449579)
	{
		if (iParam0 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
			*uParam2 = func_71(iParam1);
			iVar1 = 3;
		}
		else
		{
			iVar0 = 4;
			*uParam2 = func_70(iParam1);
			iVar1 = 4;
		}
		*uParam3 = -99;
		if (*uParam2 == 10)
		{
			iVar3 = FILES::_GET_NUM_DECORATIONS(iVar1);
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (FILES::_0xFF56381874F82086(iVar1, iVar2, &Var4))
				{
					if (iParam1 == MISC::GET_HASH_KEY(&(Var4.f_7)))
					{
						*uParam3 = (129 + iVar2);
						return 1;
					}
				}
				iVar2++;
			}
			FILES::INIT_SHOP_PED_COMPONENT(&Var19);
			iVar37 = 0;
			iVar38 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iVar0, 7, -1, 0, -1, func_69(*uParam2));
			iVar36 = 0;
			while (iVar36 < iVar38)
			{
				FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar36, &Var19);
				if (!FILES::_IS_DLC_DATA_EMPTY(Var19))
				{
					if (iParam1 == MISC::GET_HASH_KEY(&(Var19.f_9)))
					{
						*uParam3 = (func_68(iParam0, func_69(*uParam2)) + iVar37);
						if (*uParam3 != -99)
						{
							return 1;
						}
					}
					iVar37++;
				}
				iVar36++;
			}
		}
		else if (*uParam2 == 14)
		{
			FILES::INIT_SHOP_PED_PROP(&Var39);
			iVar57 = 0;
			iVar58 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iVar0, 7, -1, 1, -1, -1);
			iVar56 = 0;
			while (iVar56 < iVar58)
			{
				FILES::GET_SHOP_PED_QUERY_PROP(iVar56, &Var39);
				if (!FILES::_IS_DLC_DATA_EMPTY(Var39))
				{
					if (iParam1 == MISC::GET_HASH_KEY(&(Var39.f_9)))
					{
						*uParam3 = (func_67(iParam0) + iVar57);
						if (*uParam3 != -99)
						{
							return 1;
						}
					}
					iVar57++;
				}
				iVar56++;
			}
		}
		else if (*uParam2 == 12)
		{
			iVar75 = 0;
			iVar76 = FILES::_0xF3FBE2D50A6A8C28(iVar0, 0);
			iVar74 = 0;
			while (iVar74 < iVar76)
			{
				FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar74, &Var59);
				if (!FILES::_IS_DLC_DATA_EMPTY(Var59))
				{
					if (iParam1 == MISC::GET_HASH_KEY(&(Var59.f_7)))
					{
						*uParam3 = (func_66(iParam0) + iVar75);
						if (*uParam3 != -99)
						{
							return 1;
						}
					}
					iVar75++;
				}
				iVar74++;
			}
		}
		else
		{
			FILES::INIT_SHOP_PED_COMPONENT(&Var77);
			iVar95 = 0;
			iVar96 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iVar0, 7, -1, 0, -1, func_69(*uParam2));
			iVar94 = 0;
			while (iVar94 < iVar96)
			{
				FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar94, &Var77);
				if (!FILES::_IS_DLC_DATA_EMPTY(Var77))
				{
					if (iParam1 == MISC::GET_HASH_KEY(&(Var77.f_9)))
					{
						*uParam3 = (func_68(iParam0, func_69(*uParam2)) + iVar95);
						if (*uParam3 != -99)
						{
							return 1;
						}
					}
					iVar95++;
				}
				iVar94++;
			}
			if (*uParam2 == 11)
			{
				*uParam2 = 8;
				iVar96 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iVar0, 7, -1, 0, -1, func_69(*uParam2));
				iVar94 = 0;
				while (iVar94 < iVar96)
				{
					FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar94, &Var77);
					if (!FILES::_IS_DLC_DATA_EMPTY(Var77))
					{
						if (iParam1 == MISC::GET_HASH_KEY(&(Var77.f_9)))
						{
							*uParam3 = (func_68(iParam0, func_69(*uParam2)) + iVar95);
							if (*uParam3 != -99)
							{
								return 1;
							}
						}
						iVar95++;
					}
					iVar94++;
				}
			}
		}
	}
	return 0;
}

int func_66(int iParam0)//Position - 0x314F
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 53;
			break;
		
		case joaat("player_one"):
			return 47;
			break;
		
		case joaat("player_two"):
			return 48;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 26;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 28;
			break;
	}
	return -99;
}

int func_67(int iParam0)//Position - 0x31AE
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_68(int iParam0, int iParam1)//Position - 0x320F
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_69(int iParam0)//Position - 0x35B6
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_70(int iParam0)//Position - 0x3666
{
	switch (iParam0)
	{
		case -1826642211:
			return 4;
			break;
		
		case -1386489003:
			return 4;
			break;
		
		case -1130006040:
			return 4;
			break;
		
		case -923757954:
			return 4;
			break;
		
		case -670879581:
			return 4;
			break;
		
		case -364784352:
			return 4;
			break;
		
		case 88279842:
			return 4;
			break;
		
		case 394833837:
			return 4;
			break;
		
		case 552518265:
			return 4;
			break;
		
		case 858744570:
			return 4;
			break;
		
		case -268182756:
			return 4;
			break;
		
		case -1573273719:
			return 4;
			break;
		
		case -1507827641:
			return 4;
			break;
		
		case 696641296:
			return 4;
			break;
		
		case -80770460:
			return 4;
			break;
		
		case 236040232:
			return 4;
			break;
		
		case 1614992525:
			return 4;
			break;
		
		case -493954781:
			return 4;
			break;
		
		case -187925090:
			return 4;
			break;
		
		case -953408930:
			return 4;
			break;
		
		case 426460891:
			return 4;
			break;
		
		case -770787277:
			return 4;
			break;
		
		case -395813030:
			return 4;
			break;
		
		case 1685280626:
			return 4;
			break;
		
		case 659790472:
			return 6;
			break;
		
		case 1417016524:
			return 6;
			break;
		
		case 1112100979:
			return 6;
			break;
		
		case -1460265517:
			return 6;
			break;
		
		case -695404288:
			return 6;
			break;
		
		case -999107380:
			return 6;
			break;
		
		case 1914810411:
			return 6;
			break;
		
		case -284972543:
			return 6;
			break;
		
		case -584808893:
			return 6;
			break;
		
		case 172908694:
			return 6;
			break;
		
		case -794760172:
			return 6;
			break;
		
		case -158255116:
			return 6;
			break;
		
		case -1741034697:
			return 14;
			break;
		
		case -2090614389:
			return 14;
			break;
		
		case 871998136:
			return 14;
			break;
		
		case 751899751:
			return 14;
			break;
		
		case 1527640288:
			return 14;
			break;
		
		case -98685182:
			return 14;
			break;
		
		case -397046927:
			return 14;
			break;
		
		case 94771610:
			return 14;
			break;
		
		case -1549150817:
			return 14;
			break;
		
		case -1852886678:
			return 14;
			break;
		
		case -1168768265:
			return 14;
			break;
		
		case -1340871053:
			return 14;
			break;
		
		case 1723915210:
			return 14;
			break;
		
		case 1016563576:
			return 14;
			break;
		
		case 1879932530:
			return 14;
			break;
		
		case 1579408031:
			return 14;
			break;
		
		case -1939785959:
			return 14;
			break;
		
		case 2058261428:
			return 14;
			break;
		
		case -1934477385:
			return 14;
			break;
		
		case 2052821770:
			return 14;
			break;
		
		case -1490162514:
			return 14;
			break;
		
		case 299969868:
			return 14;
			break;
		
		case 470761896:
			return 14;
			break;
		
		case 1953395301:
			return 14;
			break;
		
		case 111351504:
			return 14;
			break;
		
		case 1530445818:
			return 14;
			break;
		
		case 1684722270:
			return 14;
			break;
		
		case -1655323593:
			return 14;
			break;
		
		case -736157234:
			return 14;
			break;
		
		case -836790833:
			return 14;
			break;
		
		case 1003876666:
			return 14;
			break;
		
		case 831184036:
			return 14;
			break;
		
		case 523843585:
			return 14;
			break;
		
		case 286628794:
			return 14;
			break;
		
		case 1724729128:
			return 14;
			break;
		
		case -1211011407:
			return 11;
			break;
		
		case 857040219:
			return 11;
			break;
		
		case 1099366942:
			return 11;
			break;
		
		case 1363583389:
			return 11;
			break;
		
		case 1862655259:
			return 11;
			break;
		
		case -877029719:
			return 11;
			break;
		
		case -638110940:
			return 11;
			break;
		
		case 2041146389:
			return 11;
			break;
		
		case 1605906481:
			return 11;
			break;
		
		case 1398577018:
			return 11;
			break;
		
		case 1158576862:
			return 11;
			break;
		
		case 1252820554:
			return 11;
			break;
		
		case 1030646734:
			return 11;
			break;
		
		case 767937661:
			return 11;
			break;
		
		case 268865791:
			return 11;
			break;
		
		case -1842866876:
			return 11;
			break;
		
		case -2071987728:
			return 11;
			break;
		
		case 1753989640:
			return 11;
			break;
		
		case 1587878268:
			return 11;
			break;
		
		case 1893711345:
			return 11;
			break;
		
		case 1150906042:
			return 7;
			break;
		
		case 844614199:
			return 7;
			break;
		
		case -1304212980:
			return 7;
			break;
		
		case 1746515386:
			return 7;
			break;
		
		case 1192076525:
			return 7;
			break;
		
		case 1527696623:
			return 7;
			break;
		
		case -56946675:
			return 7;
			break;
		
		case 240497538:
			return 7;
			break;
	}
	switch (iParam0)
	{
		case 554409157:
			return 14;
			break;
		
		case -1985352192:
			return 14;
			break;
		
		case 1954530220:
			return 14;
			break;
		
		case 1744349854:
			return 14;
			break;
		
		case 1505955379:
			return 14;
			break;
		
		case -1694789477:
			return 14;
			break;
		
		case -844270082:
			return 14;
			break;
		
		case -201440609:
			return 14;
			break;
		
		case 790947669:
			return 14;
			break;
		
		case 31886561:
			return 14;
			break;
		
		case 623432549:
			return 14;
			break;
		
		case 911373752:
			return 14;
			break;
		
		case -948004850:
			return 14;
			break;
		
		case -621723917:
			return 14;
			break;
		
		case -361505288:
			return 14;
			break;
		
		case -291314090:
			return 14;
			break;
		
		case -458364182:
			return 14;
			break;
		
		case -270204584:
			return 14;
			break;
		
		case -905693801:
			return 14;
			break;
		
		case -750630893:
			return 14;
			break;
		
		case 1302533284:
			return 6;
			break;
		
		case 1547547097:
			return 6;
			break;
		
		case 1731119035:
			return 6;
			break;
		
		case 1952211478:
			return 6;
			break;
		
		case -87527700:
			return 6;
			break;
		
		case -1978790535:
			return 6;
			break;
		
		case -1743607422:
			return 6;
			break;
		
		case -1115556768:
			return 6;
			break;
		
		case 536721746:
			return 6;
			break;
		
		case 634307828:
			return 6;
			break;
		
		case 1425588924:
			return 6;
			break;
		
		case 1916009778:
			return 6;
			break;
		
		case 1933986553:
			return 6;
			break;
		
		case -1929642396:
			return 6;
			break;
		
		case 1514805505:
			return 6;
			break;
		
		case -1343962051:
			return 6;
			break;
		
		case -1104781120:
			return 6;
			break;
		
		case -1806103258:
			return 6;
			break;
		
		case -1566332485:
			return 6;
			break;
		
		case -206910520:
			return 6;
			break;
		
		case 151123574:
			return 6;
			break;
		
		case -1846867902:
			return 6;
			break;
		
		case -940454604:
			return 6;
			break;
		
		case 1010415058:
			return 6;
			break;
		
		case 1158753130:
			return 4;
			break;
		
		case -1912324785:
			return 4;
			break;
		
		case 2026771171:
			return 4;
			break;
		
		case 260620370:
			return 4;
			break;
		
		case 33236279:
			return 4;
			break;
		
		case 922390333:
			return 4;
			break;
		
		case 628354088:
			return 4;
			break;
		
		case -992695573:
			return 4;
			break;
		
		case -1232990650:
			return 4;
			break;
		
		case -114256990:
			return 4;
			break;
		
		case 1329170676:
			return 4;
			break;
		
		case -1811672436:
			return 4;
			break;
		
		case -976554471:
			return 4;
			break;
		
		case 1712657603:
			return 4;
			break;
		
		case -732597946:
			return 4;
			break;
		
		case -791713230:
			return 4;
			break;
		
		case 1669009287:
			return 4;
			break;
		
		case 1835279193:
			return 4;
			break;
		
		case 2082848988:
			return 4;
			break;
		
		case -1742079772:
			return 4;
			break;
		
		case 703569009:
			return 4;
			break;
		
		case 877572399:
			return 4;
			break;
		
		case 1191990954:
			return 4;
			break;
		
		case -477527020:
			return 4;
			break;
		
		case 989049579:
			return 4;
			break;
		
		case 1479667047:
			return 4;
			break;
		
		case -1407536426:
			return 7;
			break;
		
		case 29646384:
			return 7;
			break;
		
		case 277543869:
			return 7;
			break;
		
		case -1872725150:
			return 7;
			break;
		
		case 1428227300:
			return 7;
			break;
		
		case 1659674747:
			return 7;
			break;
		
		case 1951477365:
			return 11;
			break;
		
		case 1720455915:
			return 11;
			break;
		
		case -1781730964:
			return 11;
			break;
		
		case -2015406703:
			return 11;
			break;
		
		case 190274687:
			return 11;
			break;
		
		case -1651146499:
			return 11;
			break;
		
		case -791386246:
			return 11;
			break;
		
		case -1023783994:
			return 11;
			break;
		
		case 1161154635:
			return 11;
			break;
		
		case -147409858:
			return 11;
			break;
		
		case -357960990:
			return 11;
			break;
		
		case -641248995:
			return 11;
			break;
		
		case 1475058043:
			return 11;
			break;
		
		case -1089116195:
			return 11;
			break;
		
		case -1396718798:
			return 11;
			break;
		
		case -1569083738:
			return 11;
			break;
		
		case -1876358651:
			return 11;
			break;
		
		case 332337487:
			return 11;
			break;
		
		case -1987380023:
			return 11;
			break;
		
		case 2000181284:
			return 11;
			break;
		
		case 1325270960:
			return 11;
			break;
		
		case -859602119:
			return 11;
			break;
		
		case 1973739612:
			return 11;
			break;
		
		case -1378552015:
			return 11;
			break;
		
		case 2099058114:
			return 11;
			break;
		
		case -1854718354:
			return 11;
			break;
		
		case 1854175373:
			return 11;
			break;
		
		case 1161111023:
			return 11;
			break;
		
		case -1835777868:
			return 11;
			break;
		
		case -1446088920:
			return 11;
			break;
		
		case 773683136:
			return 11;
			break;
		
		case -67660939:
			return 11;
			break;
		
		case 291290687:
			return 11;
			break;
		
		case -19177840:
			return 11;
			break;
		
		case 215087741:
			return 11;
			break;
		
		case 462493691:
			return 11;
			break;
		
		case 1735726524:
			return 11;
			break;
		
		case -1615722955:
			return 11;
			break;
		
		case -1310446951:
			return 11;
			break;
		
		case 185982219:
			return 11;
			break;
		
		case 214622325:
			return 11;
			break;
		
		case 734862945:
			return 11;
			break;
		
		case -873720684:
			return 11;
			break;
		
		case -583616727:
			return 11;
			break;
		
		case -1215009819:
			return 11;
			break;
		
		case 350430853:
			return 11;
			break;
		
		case -275719199:
			return 11;
			break;
		
		case 7765420:
			return 11;
			break;
		
		case -887155970:
			return 11;
			break;
		
		case 1273795735:
			return 11;
			break;
		
		case 632047639:
			return 11;
			break;
		
		case 932047834:
			return 11;
			break;
		
		case -435467354:
			return 11;
			break;
		
		case -675762431:
			return 11;
			break;
		
		case -1778537592:
			return 11;
			break;
		
		case -2016735453:
			return 11;
			break;
		
		case -1095500556:
			return 11;
			break;
		
		case -1471754214:
			return 11;
			break;
		
		case -1300331964:
			return 12;
			break;
		
		case -499883601:
			return 12;
			break;
		
		case -776617806:
			return 12;
			break;
		
		case 57648165:
			return 12;
			break;
		
		case -11887653:
			return 12;
			break;
		
		case 823754616:
			return 12;
			break;
		
		case 487544676:
			return 12;
			break;
		
		case 912755220:
			return 12;
			break;
		
		case 1714317729:
			return 12;
			break;
		
		case 1480510914:
			return 12;
			break;
		
		case -961171497:
			return 12;
			break;
		
		case -1191275415:
			return 12;
			break;
		
		case -419205006:
			return 12;
			break;
		
		case 1280326322:
			return 12;
			break;
		
		case 1040031245:
			return 12;
			break;
		
		case 1341047279:
			return 12;
			break;
		
		case -2119326356:
			return 12;
			break;
		
		case 57190628:
			return 12;
			break;
		
		case -121465960:
			return 12;
			break;
		
		case 714438461:
			return 12;
			break;
		
		case -2010369687:
			return 12;
			break;
		
		case 1456852673:
			return 12;
			break;
		
		case 2032079699:
			return 12;
			break;
		
		case 845284826:
			return 12;
			break;
		
		case 1151347286:
			return 12;
			break;
		
		case 497048663:
			return 12;
			break;
	}
	switch (iParam0)
	{
		case -1666068607:
			return 4;
			break;
		
		case -823905291:
			return 4;
			break;
		
		case -602190237:
			return 4;
			break;
		
		case 826636474:
			return 4;
			break;
		
		case -1064790210:
			return 4;
			break;
		
		case 1107765574:
			return 4;
			break;
		
		case 813762106:
			return 4;
			break;
		
		case -1145037642:
			return 4;
			break;
		
		case -2042376014:
			return 7;
			break;
		
		case 897396518:
			return 7;
			break;
		
		case 1787763017:
			return 7;
			break;
		
		case -1530619186:
			return 11;
			break;
		
		case -1769800117:
			return 11;
			break;
		
		case -2128751743:
			return 11;
			break;
		
		case 1540786419:
			return 11;
			break;
		
		case 1309994372:
			return 11;
			break;
		
		case 928956440:
			return 11;
			break;
		
		case 1584385026:
			return 11;
			break;
		
		case 1827498237:
			return 11;
			break;
		
		case 872544039:
			return 11;
			break;
		
		case 1104450252:
			return 11;
			break;
		
		case -1484562900:
			return 11;
			break;
		
		case -1899431161:
			return 11;
			break;
		
		case 1409123697:
			return 11;
			break;
		
		case 1651384914:
			return 11;
			break;
	}
	switch (iParam0)
	{
		case -1563165287:
			return 6;
			break;
		
		case -1868998364:
			return 6;
			break;
		
		case 1193854544:
			return 6;
			break;
		
		case 896213717:
			return 6;
			break;
		
		case -585502172:
			return 6;
			break;
		
		case -874721366:
			return 6;
			break;
		
		case -2119386293:
			return 6;
			break;
		
		case 1818923207:
			return 6;
			break;
		
		case -1274634230:
			return 6;
			break;
		
		case 576486584:
			return 6;
			break;
		
		case -1216212594:
			return 6;
			break;
		
		case -378407571:
			return 6;
			break;
		
		case 69413583:
			return 6;
			break;
		
		case -169111968:
			return 6;
			break;
		
		case 1950812953:
			return 6;
			break;
		
		case -1508643150:
			return 6;
			break;
		
		case -1872116898:
			return 6;
			break;
		
		case -1031297127:
			return 6;
			break;
		
		case 1289993299:
			return 6;
			break;
		
		case 926847241:
			return 6;
			break;
		
		case -958955979:
			return 6;
			break;
		
		case -49059156:
			return 6;
			break;
		
		case 247598601:
			return 6;
			break;
		
		case -772303755:
			return 6;
			break;
		
		case -323958297:
			return 6;
			break;
		
		case 1196097306:
			return 6;
			break;
	}
	switch (iParam0)
	{
		case 1193378284:
			return 14;
			break;
		
		case 1550036080:
			return 14;
			break;
		
		case -151789162:
			return 14;
			break;
		
		case -868643806:
			return 14;
			break;
		
		case -629200723:
			return 14;
			break;
		
		case -1346514133:
			return 14;
			break;
		
		case 902160189:
			return 14;
			break;
		
		case 1140816816:
			return 14;
			break;
		
		case -1815844140:
			return 14;
			break;
		
		case -1235439612:
			return 14;
			break;
		
		case -1372151880:
			return 14;
			break;
		
		case -619153029:
			return 14;
			break;
		
		case -1060289307:
			return 14;
			break;
		
		case 177852653:
			return 14;
			break;
		
		case 552336785:
			return 14;
			break;
		
		case -287303302:
			return 14;
			break;
		
		case 902382307:
			return 14;
			break;
		
		case 738930535:
			return 14;
			break;
		
		case -518907530:
			return 14;
			break;
		
		case 1188029680:
			return 14;
			break;
		
		case -44183027:
			return 14;
			break;
		
		case -212615687:
			return 14;
			break;
		
		case -1410945244:
			return 14;
			break;
		
		case -1716450631:
			return 14;
			break;
		
		case 330198403:
			return 14;
			break;
		
		case -1497525325:
			return 14;
			break;
		
		case 403699286:
			return 14;
			break;
		
		case 174119672:
			return 14;
			break;
		
		case -577142422:
			return 14;
			break;
		
		case -1212641547:
			return 4;
			break;
		
		case -285246078:
			return 4;
			break;
		
		case -666742776:
			return 4;
			break;
		
		case -1094312680:
			return 4;
			break;
		
		case -1468731282:
			return 4;
			break;
		
		case -498277339:
			return 4;
			break;
		
		case -842089687:
			return 4;
			break;
		
		case 2002292278:
			return 4;
			break;
		
		case 1638228688:
			return 4;
			break;
		
		case -1730850513:
			return 4;
			break;
		
		case -1342653968:
			return 4;
			break;
		
		case -1582293665:
			return 4;
			break;
		
		case -881430293:
			return 4;
			break;
		
		case 1818640969:
			return 4;
			break;
		
		case 920765295:
			return 4;
			break;
		
		case 267646352:
			return 4;
			break;
		
		case -648181660:
			return 4;
			break;
		
		case -1366805830:
			return 4;
			break;
		
		case -35106439:
			return 4;
			break;
		
		case -755106907:
			return 4;
			break;
		
		case -1540088302:
			return 4;
			break;
		
		case 1430028328:
			return 4;
			break;
		
		case 1738417387:
			return 4;
			break;
		
		case 1503889590:
			return 4;
			break;
		
		case -2006138518:
			return 4;
			break;
		
		case -956023140:
			return 4;
			break;
		
		case -1260807609:
			return 4;
			break;
		
		case -478677117:
			return 4;
			break;
		
		case -780905604:
			return 4;
			break;
		
		case 193611687:
			return 4;
			break;
	}
	switch (iParam0)
	{
		case -1050198361:
			return 11;
			break;
		
		case 310370535:
			return 11;
			break;
		
		case 813243601:
			return 11;
			break;
		
		case -2102935251:
			return 11;
			break;
		
		case -1824955824:
			return 11;
			break;
		
		case 1702659799:
			return 11;
			break;
		
		case -406353041:
			return 11;
			break;
		
		case -678972038:
			return 11;
			break;
		
		case -500118836:
			return 11;
			break;
		
		case 1648315111:
			return 11;
			break;
		
		case 302450756:
			return 11;
			break;
		
		case -621012433:
			return 11;
			break;
		
		case 782549375:
			return 11;
			break;
		
		case -614393091:
			return 11;
			break;
		
		case -317866410:
			return 11;
			break;
		
		case -140258430:
			return 11;
			break;
		
		case 158955309:
			return 11;
			break;
		
		case -1842902901:
			return 11;
			break;
		
		case -1537856280:
			return 11;
			break;
		
		case 395263187:
			return 11;
			break;
		
		case 1027463459:
			return 11;
			break;
		
		case 796868006:
			return 11;
			break;
		
		case 1467223439:
			return 11;
			break;
		
		case 1136256539:
			return 11;
			break;
		
		case 1979140757:
			return 11;
			break;
		
		case 1748283152:
			return 11;
			break;
		
		case -1870299219:
			return 11;
			break;
		
		case 2026328113:
			return 11;
			break;
		
		case -1561254780:
			return 11;
			break;
		
		case -1655957190:
			return 11;
			break;
		
		case 1722458367:
			return 11;
			break;
		
		case 1479345156:
			return 11;
			break;
		
		case -923877314:
			return 11;
			break;
		
		case -1063473254:
			return 11;
			break;
		
		case 1131787598:
			return 11;
			break;
		
		case 833098163:
			return 11;
			break;
		
		case 654376037:
			return 11;
			break;
		
		case -729113683:
			return 11;
			break;
		
		case -1100288150:
			return 11;
			break;
		
		case -1474837820:
			return 11;
			break;
		
		case 1910298191:
			return 11;
			break;
		
		case -1584941660:
			return 11;
			break;
		
		case 1391532152:
			return 11;
			break;
		
		case -1213586762:
			return 10;
			break;
		
		case -1375465622:
			return 10;
			break;
		
		case -611849615:
			return 10;
			break;
		
		case 1580494808:
			return 10;
			break;
		
		case 1274792807:
			return 10;
			break;
		
		case 1889735861:
			return 10;
			break;
		
		case -1638141914:
			return 10;
			break;
		
		case 594606670:
			return 10;
			break;
		
		case 316823857:
			return 10;
			break;
		
		case 938189639:
			return 10;
			break;
		
		case 1525574773:
			return 10;
			break;
		
		case -1159943084:
			return 10;
			break;
		
		case -1525055282:
			return 10;
			break;
		
		case 391046459:
			return 10;
			break;
		
		case 299162183:
			return 10;
			break;
		
		case -1849075154:
			return 10;
			break;
		
		case -2075345099:
			return 10;
			break;
		
		case 1853264777:
			return 10;
			break;
		
		case -926988263:
			return 10;
			break;
		
		case 183422195:
			return 10;
			break;
		
		case -1913829286:
			return 10;
			break;
		
		case -1051250899:
			return 10;
			break;
		
		case -1425472879:
			return 10;
			break;
		
		case 2081501044:
			return 7;
			break;
		
		case 1783335913:
			return 7;
			break;
		
		case -657135366:
			return 7;
			break;
		
		case -1074022584:
			return 7;
			break;
		
		case 2078277958:
			return 7;
			break;
		
		case -246682596:
			return 7;
			break;
		
		case 1447278094:
			return 7;
			break;
		
		case 1140658561:
			return 7;
			break;
		
		case -1160904923:
			return 7;
			break;
		
		case -1201085112:
			return 1;
			break;
		
		case 1645754536:
			return 1;
			break;
		
		case 1442375387:
			return 1;
			break;
		
		case 674401103:
			return 1;
			break;
		
		case -692164748:
			return 1;
			break;
		
		case -974010917:
			return 1;
			break;
		
		case 1401833895:
			return 1;
			break;
		
		case -2059653886:
			return 1;
			break;
	}
	switch (iParam0)
	{
		case -1132731797:
			return 12;
			break;
		
		case -1363589402:
			return 12;
			break;
		
		case 1629334444:
			return 12;
			break;
		
		case 1382026801:
			return 12;
			break;
		
		case 326865001:
			return 12;
			break;
		
		case -2052197172:
			return 12;
			break;
		
		case 278334108:
			return 12;
			break;
		
		case -2108264935:
			return 12;
			break;
		
		case 1143599553:
			return 12;
			break;
		
		case 904353084:
			return 12;
			break;
		
		case -238027808:
			return 12;
			break;
		
		case 721191542:
			return 10;
			break;
		
		case 1563125459:
			return 10;
			break;
		
		case -2011579213:
			return 10;
			break;
		
		case 1924108767:
			return 10;
			break;
		
		case -278754493:
			return 10;
			break;
		
		case 563376038:
			return 10;
			break;
		
		case 184369784:
			return 10;
			break;
		
		case 841619717:
			return 10;
			break;
		
		case 1164164984:
			return 10;
			break;
		
		case -1911729970:
			return 10;
			break;
		
		case -1599080941:
			return 10;
			break;
		
		case 2067639087:
			return 10;
			break;
		
		case -910964710:
			return 10;
			break;
		
		case -604410715:
			return 10;
			break;
		
		case -254743660:
			return 10;
			break;
		
		case -504148519:
			return 10;
			break;
		
		case -1729856159:
			return 10;
			break;
		
		case 531303152:
			return 10;
			break;
		
		case 1227263313:
			return 10;
			break;
		
		case 2046390006:
			return 10;
			break;
		
		case 465023604:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case -940816108:
			return 12;
			break;
		
		case 1169179806:
			return 12;
			break;
		
		case 865509483:
			return 12;
			break;
		
		case 834051243:
			return 12;
			break;
		
		case -1588528162:
			return 12;
			break;
		
		case 886214272:
			return 1;
			break;
		
		case 1117334029:
			return 1;
			break;
		
		case 899033586:
			return 1;
			break;
		
		case -1294850964:
			return 1;
			break;
		
		case 89080485:
			return 1;
			break;
		
		case -257418921:
			return 1;
			break;
		
		case 966770862:
			return 1;
			break;
		
		case 1804706949:
			return 1;
			break;
		
		case 1830532154:
			return 1;
			break;
		
		case -1154756519:
			return 1;
			break;
		
		case 1816778629:
			return 1;
			break;
		
		case -1854365214:
			return 1;
			break;
		
		case 665775322:
			return 2;
			break;
		
		case 618391324:
			return 2;
			break;
		
		case 497473714:
			return 2;
			break;
		
		case 123808807:
			return 2;
			break;
		
		case -231538229:
			return 2;
			break;
		
		case -546263812:
			return 4;
			break;
		
		case -1955795127:
			return 6;
			break;
		
		case -412637383:
			return 6;
			break;
		
		case -173390914:
			return 6;
			break;
		
		case -980362568:
			return 11;
			break;
		
		case 2058630185:
			return 11;
			break;
		
		case 91818404:
			return 14;
			break;
		
		case -2059902376:
			return 14;
			break;
		
		case -47006053:
			return 14;
			break;
		
		case -761658907:
			return 14;
			break;
		
		case -1256469080:
			return 14;
			break;
		
		case -492656451:
			return 14;
			break;
		
		case 304369947:
			return 14;
			break;
		
		case 225804182:
			return 14;
			break;
		
		case 2043767315:
			return 14;
			break;
		
		case 2032023736:
			return 14;
			break;
		
		case 1781897959:
			return 14;
			break;
		
		case -1077066219:
			return 14;
			break;
		
		case -1347050010:
			return 14;
			break;
		
		case -1656225525:
			return 14;
			break;
		
		case 284813421:
			return 14;
			break;
	}
	switch (iParam0)
	{
		case -217662594:
			return 10;
			break;
		
		case -448716813:
			return 10;
			break;
		
		case 242905701:
			return 10;
			break;
		
		case 12310248:
			return 10;
			break;
		
		case -214909990:
			return 10;
			break;
		
		case -454090921:
			return 10;
			break;
		
		case 245658305:
			return 10;
			break;
		
		case 6936140:
			return 10;
			break;
		
		case -1672278496:
			return 10;
			break;
		
		case -2124036238:
			return 10;
			break;
		
		case 1983328533:
			return 10;
			break;
		
		case 1809980523:
			return 10;
			break;
		
		case 1215944091:
			return 10;
			break;
		
		case -123488800:
			return 10;
			break;
		
		case 788636331:
			return 10;
			break;
		
		case 624856869:
			return 10;
			break;
		
		case -1610644323:
			return 10;
			break;
		
		case -843030498:
			return 10;
			break;
		
		case 229236720:
			return 10;
			break;
		
		case -1055963128:
			return 10;
			break;
		
		case -1728251932:
			return 10;
			break;
		
		case 1723536225:
			return 10;
			break;
		
		case 998489331:
			return 10;
			break;
		
		case -1966744714:
			return 10;
			break;
		
		case -1546351257:
			return 10;
			break;
		
		case -773166702:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case 847696581:
			return 1;
			break;
		
		case -1251988177:
			return 14;
			break;
		
		case 308395095:
			return 12;
			break;
		
		case 1654631855:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case -1734014907:
			return 1;
			break;
		
		case 113828983:
			return 1;
			break;
		
		case -836701380:
			return 1;
			break;
		
		case -1428116292:
			return 1;
			break;
		
		case 2097107194:
			return 1;
			break;
		
		case 639725155:
			return 1;
			break;
		
		case 386289709:
			return 1;
			break;
		
		case 1249982250:
			return 1;
			break;
		
		case 924815463:
			return 1;
			break;
		
		case 1775924700:
			return 1;
			break;
		
		case 1936268068:
			return 1;
			break;
		
		case -364214045:
			return 14;
			break;
		
		case 26785663:
			return 14;
			break;
		
		case 1338954730:
			return 14;
			break;
		
		case -45601014:
			return 14;
			break;
		
		case 1267944351:
			return 14;
			break;
		
		case 1547778595:
			return 4;
			break;
		
		case 1855119046:
			return 4;
			break;
		
		case 1951099447:
			return 4;
			break;
		
		case -2086074062:
			return 4;
			break;
		
		case -1855052612:
			return 4;
			break;
		
		case 536908682:
			return 11;
			break;
		
		case 878427200:
			return 11;
			break;
		
		case 58579589:
			return 11;
			break;
		
		case -641890555:
			return 11;
			break;
		
		case -384358984:
			return 11;
			break;
		
		case 2014785516:
			return 3;
			break;
		
		case 1634992806:
			return 3;
			break;
		
		case -1508078610:
			return 3;
			break;
		
		case -1755189639:
			return 3;
			break;
		
		case -2107128699:
			return 3;
			break;
		
		case -1287626472:
			return 3;
			break;
		
		case 1380622126:
			return 3;
			break;
		
		case 1612462801:
			return 3;
			break;
		
		case 1790857237:
			return 3;
			break;
		
		case 2090529742:
			return 3;
			break;
		
		case -308456130:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case -2133691498:
			return 11;
			break;
		
		case -1904701726:
			return 11;
			break;
		
		case -247049088:
			return 11;
			break;
		
		case -545946476:
			return 11;
			break;
		
		case -1239436823:
			return 11;
			break;
		
		case 124900492:
			return 11;
			break;
		
		case -635799074:
			return 11;
			break;
		
		case -642991077:
			return 7;
			break;
		
		case -350265600:
			return 7;
			break;
		
		case 829385631:
			return 7;
			break;
		
		case -1095006663:
			return 7;
			break;
		
		case 2031481813:
			return 4;
			break;
		
		case 1849876015:
			return 4;
			break;
		
		case 1551907498:
			return 4;
			break;
		
		case -82151464:
			return 4;
			break;
		
		case -437837804:
			return 14;
			break;
		
		case 1766500061:
			return 14;
			break;
		
		case -1827866015:
			return 14;
			break;
		
		case -2100667940:
			return 14;
			break;
		
		case 881016139:
			return 14;
			break;
		
		case -892409352:
			return 14;
			break;
		
		case -1138996077:
			return 14;
			break;
		
		case 1733141239:
			return 14;
			break;
		
		case 1637077634:
			return 14;
			break;
		
		case 1303548099:
			return 14;
			break;
		
		case 1668791373:
			return 14;
			break;
		
		case -364033542:
			return 14;
			break;
		
		case -81171534:
			return 14;
			break;
		
		case -363152649:
			return 14;
			break;
		
		case -65511822:
			return 14;
			break;
		
		case 114652140:
			return 14;
			break;
		
		case -1735714983:
			return 14;
			break;
		
		case -43227451:
			return 14;
			break;
		
		case -328678210:
			return 14;
			break;
		
		case -1709268949:
			return 14;
			break;
		
		case 433299351:
			return 14;
			break;
		
		case 1200716562:
			return 14;
			break;
		
		case 880825584:
			return 14;
			break;
		
		case -473681035:
			return 14;
			break;
		
		case 1586964765:
			return 14;
			break;
		
		case 1295853300:
			return 14;
			break;
		
		case 539872466:
			return 14;
			break;
		
		case 778332479:
			return 14;
			break;
		
		case -1976164127:
			return 14;
			break;
		
		case 1615318277:
			return 14;
			break;
		
		case 1873439690:
			return 14;
			break;
		
		case 1140003932:
			return 14;
			break;
		
		case -981624973:
			return 14;
			break;
		
		case 1510649655:
			return 1;
			break;
		
		case -504783688:
			return 1;
			break;
		
		case -706446153:
			return 1;
			break;
		
		case -823799608:
			return 1;
			break;
		
		case -463668298:
			return 1;
			break;
		
		case -1614908818:
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 2134049184:
		case 513852309:
		case 342339363:
		case -655247304:
		case 799565220:
		case -715443961:
		case -905176471:
		case -121210915:
		case -426585226:
		case -1823527696:
		case -1899487013:
		case 613041245:
		case -149165695:
		case -923398858:
		case -1017249282:
		case -726555483:
		case -372257055:
		case -114397794:
		case -1101989916:
		case -1749374280:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case -893708693:
		case -660753872:
		case -1412999036:
		case -1121780933:
		case -2121038819:
		case -1880350514:
		case 1724501642:
		case 1953982949:
		case 1100809265:
		case 1341235418:
		case 202917910:
		case 509799595:
		case 797675260:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case 1485373828:
		case -71251979:
		case 235269247:
		case 517180954:
		case 756099733:
		case -1329647121:
		case -975545307:
		case -721683864:
		case -356899352:
		case -1253393710:
			return 14;
			break;
	}
	switch (iParam0)
	{
		case 281910967:
		case 572834473:
		case 869950996:
		case -842032640:
		case 1792693843:
		case -2062447935:
		case 330672139:
		case -77301911:
		case 1063549924:
		case 748049992:
		case 1519006255:
		case -937292447:
		case -170465078:
		case -1294245168:
		case -1332781512:
		case 403942439:
		case 1775882162:
		case 2090333486:
		case 1314232490:
		case 904357834:
		case 128518990:
		case 443232466:
			return 10;
			break;
		
		case -773166702:
		case -278754493:
		case 1924108767:
		case 721191542:
		case -2011579213:
		case 1563125459:
		case 2067639087:
		case -1599080941:
		case -604410715:
		case 184369784:
		case 841619717:
		case 563376038:
		case -308456130:
		case -1911729970:
		case -910964710:
		case 1164164984:
			return 10;
			break;
		
		case -1656225525:
		case -1077066219:
		case 2032023736:
		case 1781897959:
		case -1347050010:
		case 284813421:
			return 14;
			break;
		
		case 1936268068:
			return 1;
			break;
		
		case -426585226:
		case -905176471:
		case 2134049184:
		case -715443961:
		case -655247304:
		case 513852309:
		case 799565220:
		case -1823527696:
		case 342339363:
		case -121210915:
			return 10;
			break;
		
		case 613041245:
		case -1899487013:
		case -149165695:
		case -923398858:
		case -1017249282:
		case -726555483:
		case -372257055:
		case -114397794:
		case -1101989916:
		case -1749374280:
			return 10;
			break;
		
		case 1485373828:
		case 235269247:
		case 756099733:
		case -721683864:
		case -71251979:
		case -356899352:
		case 517180954:
		case -1253393710:
		case -1329647121:
		case -975545307:
			return 14;
			break;
		
		case 797675260:
		case -660753872:
		case -1880350514:
		case -893708693:
		case 1341235418:
		case 1724501642:
		case -1121780933:
		case 1953982949:
		case -2121038819:
		case 202917910:
		case -1412999036:
		case 1100809265:
		case 509799595:
			return 10;
			break;
		
		case -1016433282:
		case -1649792514:
		case -506088876:
		case -736684329:
		case -1771791505:
		case -2009137368:
		case -1463271370:
		case -1694522203:
		case 1057298604:
		case 1897856223:
		case 1653104562:
		case 196653588:
		case -32827719:
		case 389105925:
		case -914477664:
			return 10;
			break;
		
		case 14294258:
		case -963172243:
		case 372688811:
		case 1810625300:
		case 1237692104:
		case 259176995:
		case 1529631125:
		case -2114412811:
		case -1876083874:
		case -1770895384:
		case -163970345:
		case 133408330:
		case 1508723288:
		case 1815342821:
		case 892927531:
		case 528208561:
		case 1376106436:
		case 979339384:
		case 1284254933:
		case 920453495:
		case 1762846178:
		case -1787216206:
		case 2141655822:
		case -1307117587:
		case -438549866:
		case -481739408:
		case 1672986187:
		case 1376066278:
			return 11;
			break;
		
		case -939386606:
		case 1210095949:
		case -1243122471:
		case -1549938618:
		case -2124641340:
		case 23923683:
		case 1858987687:
			return 12;
			break;
	}
	switch (iParam0)
	{
		case -836382797:
		case -1006027910:
		case -1438775324:
		case -1094274807:
		case -1348726092:
		case 1786218600:
		case -1858021894:
		case 1237632771:
		case 1987485798:
		case 908992470:
		case -1021993708:
		case -1654828636:
		case -1365707749:
		case -388208479:
		case 2087194554:
		case 981732339:
		case 1271443068:
		case -1785118184:
		case -1521032813:
		case 258618816:
		case 1374601256:
		case -660288110:
		case -426022529:
		case -1132522169:
		case -889671110:
		case -182614393:
		case 48701978:
		case -646852824:
		case -408392811:
		case 1717168382:
		case 619771057:
		case -1519028808:
		case 1996626130:
		case -1981759857:
		case -879279621:
		case 1276101346:
		case 1573086793:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case 1307571635:
		case 1078090328:
		case 856473581:
		case 587669474:
		case 1959183200:
		case 1703421155:
		case 1474693535:
		case -940873304:
		case -1179529931:
		case -1373784563:
		case 243589911:
		case -1153549173:
		case -921184194:
		case -1180223143:
		case -949922611:
		case -733122907:
		case 1675234752:
		case 1922149167:
		case -2141731141:
		case -1902746824:
		case 52614159:
		case 910768731:
		case 679976664:
		case 2091337530:
		case -1964710987:
		case -1611461167:
		case -1372083622:
		case -1018112884:
		case -779325181:
		case -420701241:
		case -1618801967:
		case -851548601:
		case 2031402485:
		case -2080123905:
		case 808594521:
		case 510691542:
		case 1289151906:
		case -113230218:
		case -411395349:
		case 364640109:
		case 262400493:
		case 19746048:
		case -1410227578:
		case -2018747856:
		case 895661466:
		case 588845319:
		case 1087982727:
		case -291100638:
		case -529953879:
		case 238282557:
		case -973318781:
		case -688457864:
		case 1622215406:
		case -1920965448:
		case 933935370:
		case 1258184625:
		case 1395421197:
		case -427682118:
		case -256431324:
		case -3618489:
		case -164779015:
		case -524582635:
		case -762583882:
		case -1114752149:
		case -1352491244:
		case -1633092191:
		case -1963862477:
		case 1955244389:
		case 1724714474:
		case 1368843118:
		case 1560803496:
		case 726832446:
		case 965554611:
		case -555516827:
		case -317122352:
		case -1150306946:
		case -911322629:
		case -2055222881:
		case -1413540323:
		case 1643250308:
		case -2049128183:
		case 1251562099:
		case 2087859764:
		case -967718366:
		case -234806912:
		case -1143065285:
		case -710514485:
		case -1649903408:
		case -1889936333:
		case 1931649989:
		case 929147680:
		case -243687599:
		case 456913621:
		case -711006340:
		case -1487107336:
		case -1209914365:
		case -1951738987:
		case -1671072502:
		case 1848055950:
		case 1125171794:
		case -330125654:
		case -1768422602:
		case 149317585:
		case 1075238441:
		case 1304129906:
		case -479814458:
		case -247449479:
		case 2033305694:
		case -2057477963:
		case 464162129:
		case -1700033995:
		case 1573851249:
		case -1139618557:
		case 1618744803:
		case -1849788313:
		case -885363862:
		case 1846980888:
		case -1497521551:
		case -1719465988:
		case 305133908:
		case 341572732:
		case -847712585:
		case -1148237084:
		case -55423715:
		case 646947035:
			return 10;
			break;
	}
	return 0;
}

int func_71(int iParam0)//Position - 0x61F1
{
	switch (iParam0)
	{
		case 486993462:
			return 14;
			break;
		
		case 189352635:
			return 14;
			break;
		
		case -1182161091:
			return 14;
			break;
		
		case -1480391760:
			return 14;
			break;
		
		case -1830200827:
			return 14;
			break;
		
		case -1523384680:
			return 14;
			break;
		
		case 796726062:
			return 14;
			break;
		
		case -1390344430:
			return 14;
			break;
		
		case -1151360113:
			return 14;
			break;
		
		case 999105508:
			return 14;
			break;
		
		case 397007906:
			return 14;
			break;
		
		case 642611561:
			return 14;
			break;
		
		case -191425027:
			return 14;
			break;
		
		case -694980209:
			return 14;
			break;
		
		case -1024767425:
			return 14;
			break;
		
		case 1965043370:
			return 14;
			break;
		
		case 1699057397:
			return 14;
			break;
		
		case -1887181967:
			return 14;
			break;
		
		case 2144355338:
			return 14;
			break;
		
		case 707172536:
			return 14;
			break;
		
		case 1455550958:
			return 14;
			break;
		
		case -977225367:
			return 6;
			break;
		
		case -1805298001:
			return 6;
			break;
		
		case 268389861:
			return 6;
			break;
		
		case 494397654:
			return 6;
			break;
		
		case -343046910:
			return 6;
			break;
		
		case -103603827:
			return 6;
			break;
		
		case 1821607632:
			return 6;
			break;
		
		case -1705680301:
			return 6;
			break;
		
		case -1993162738:
			return 6;
			break;
		
		case -1090114632:
			return 6;
			break;
		
		case -197638367:
			return 6;
			break;
		
		case 124743055:
			return 6;
			break;
		
		case 1896979820:
			return 4;
			break;
		
		case 2060234978:
			return 4;
			break;
		
		case -2086255979:
			return 4;
			break;
		
		case -1788156386:
			return 4;
			break;
		
		case -1235015618:
			return 4;
			break;
		
		case 144264361:
			return 4;
			break;
		
		case -876227837:
			return 4;
			break;
		
		case -570132608:
			return 4;
			break;
		
		case 1602976392:
			return 4;
			break;
		
		case 828808767:
			return 4;
			break;
		
		case -728462463:
			return 4;
			break;
		
		case -430231794:
			return 4;
			break;
		
		case -1226152127:
			return 4;
			break;
		
		case 1152058052:
			return 4;
			break;
		
		case -94540254:
			return 4;
			break;
		
		case -2004940185:
			return 4;
			break;
		
		case -711547755:
			return 4;
			break;
		
		case -455851248:
			return 4;
			break;
		
		case 1111162332:
			return 4;
			break;
		
		case -814704567:
			return 4;
			break;
		
		case 144607908:
			return 4;
			break;
		
		case 736088358:
			return 4;
			break;
		
		case 457119630:
			return 4;
			break;
		
		case 528311952:
			return 4;
			break;
		
		case -1396702953:
			return 4;
			break;
		
		case -129263571:
			return 4;
			break;
		
		case 253609425:
			return 4;
			break;
		
		case 1542676347:
			return 4;
			break;
		
		case 1789918452:
			return 4;
			break;
		
		case 826739235:
			return 4;
			break;
		
		case 1208694699:
			return 4;
			break;
		
		case -1936703316:
			return 4;
			break;
		
		case -1546948830:
			return 4;
			break;
		
		case -252443194:
			return 4;
			break;
		
		case 525329021:
			return 4;
			break;
		
		case -1258006552:
			return 11;
			break;
		
		case -1030491385:
			return 11;
			break;
		
		case -815723359:
			return 11;
			break;
		
		case -299353676:
			return 11;
			break;
		
		case -537748151:
			return 11;
			break;
		
		case -997562751:
			return 11;
			break;
		
		case -1101964785:
			return 11;
			break;
		
		case -1485394854:
			return 11;
			break;
		
		case -1825274922:
			return 11;
			break;
		
		case -34349256:
			return 11;
			break;
		
		case 108720198:
			return 11;
			break;
		
		case -648473085:
			return 11;
			break;
		
		case -1282487697:
			return 11;
			break;
		
		case -976195854:
			return 11;
			break;
		
		case 500984819:
			return 11;
			break;
		
		case 798691188:
			return 11;
			break;
		
		case -1581452414:
			return 11;
			break;
		
		case -1635940622:
			return 11;
			break;
		
		case 1762139144:
			return 11;
			break;
		
		case -1126644824:
			return 11;
			break;
	}
	switch (iParam0)
	{
		case 561311877:
			return 14;
			break;
		
		case 308171352:
			return 14;
			break;
		
		case 1176091086:
			return 14;
			break;
		
		case 921443187:
			return 14;
			break;
		
		case 1286489847:
			return 14;
			break;
		
		case 2060854098:
			return 14;
			break;
		
		case 1897598940:
			return 14;
			break;
		
		case -1639847383:
			return 14;
			break;
		
		case -1015537418:
			return 14;
			break;
		
		case -1255439267:
			return 14;
			break;
		
		case 894174372:
			return 14;
			break;
		
		case 1736141058:
			return 14;
			break;
		
		case 1513737855:
			return 14;
			break;
		
		case 208745191:
			return 14;
			break;
		
		case 1555354389:
			return 14;
			break;
		
		case 1364966499:
			return 14;
			break;
		
		case -809940015:
			return 6;
			break;
		
		case -497061603:
			return 6;
			break;
		
		case -1206575991:
			return 6;
			break;
		
		case -923681214:
			return 6;
			break;
		
		case -1771841241:
			return 6;
			break;
		
		case 1837336423:
			return 6;
			break;
		
		case 2068652794:
			return 6;
			break;
		
		case 1874201544:
			return 6;
			break;
		
		case -2114637754:
			return 6;
			break;
		
		case 1482939680:
			return 6;
			break;
		
		case -487010550:
			return 6;
			break;
		
		case -2059463784:
			return 6;
			break;
		
		case -13875918:
			return 6;
			break;
		
		case 227729919:
			return 6;
			break;
		
		case -1625520876:
			return 6;
			break;
		
		case -1326012216:
			return 6;
			break;
		
		case -1026929553:
			return 6;
			break;
		
		case 1752733645:
			return 6;
			break;
		
		case 2051390311:
			return 6;
			break;
		
		case -1960092366:
			return 6;
			break;
		
		case -1916706210:
			return 6;
			break;
		
		case -1430873032:
			return 6;
			break;
		
		case -1901909501:
			return 6;
			break;
		
		case 1635471284:
			return 6;
			break;
		
		case 1791524240:
			return 4;
			break;
		
		case 534833082:
			return 4;
			break;
		
		case 227296017:
			return 4;
			break;
		
		case 860393105:
			return 4;
			break;
		
		case -1590433178:
			return 4;
			break;
		
		case 1456756136:
			return 4;
			break;
		
		case 1163506355:
			return 4;
			break;
		
		case 1861649900:
			return 4;
			break;
		
		case -591994517:
			return 4;
			break;
		
		case -1840493417:
			return 4;
			break;
		
		case -952392951:
			return 4;
			break;
		
		case -1123971435:
			return 4;
			break;
		
		case -354522546:
			return 4;
			break;
		
		case 260830436:
			return 4;
			break;
		
		case 21878888:
			return 4;
			break;
		
		case 1578734070:
			return 4;
			break;
		
		case -1873775005:
			return 4;
			break;
		
		case -1171731937:
			return 4;
			break;
		
		case 1825288026:
			return 4;
			break;
		
		case 685385604:
			return 4;
			break;
		
		case 446958360:
			return 4;
			break;
		
		case 1633228929:
			return 4;
			break;
		
		case -1823277964:
			return 4;
			break;
		
		case 877316879:
			return 4;
			break;
		
		case 1161161957:
			return 4;
			break;
		
		case 259228001:
			return 4;
			break;
	}
	switch (iParam0)
	{
		case 2118720551:
			return 7;
			break;
		
		case -1877819462:
			return 7;
			break;
		
		case -356223708:
			return 7;
			break;
		
		case -116715087:
			return 7;
			break;
		
		case -951013827:
			return 7;
			break;
		
		case -712095048:
			return 7;
			break;
		
		case 805011345:
			return 7;
			break;
		
		case 1027938852:
			return 7;
			break;
		
		case 142061706:
			return 7;
			break;
		
		case 431641359:
			return 7;
			break;
		
		case -291513083:
			return 7;
			break;
		
		case 15729061:
			return 7;
			break;
		
		case 1536898810:
			return 7;
			break;
		
		case -1869739104:
			return 7;
			break;
		
		case -1049498265:
			return 7;
			break;
		
		case -1422147333:
			return 7;
			break;
		
		case 1535091072:
			return 7;
			break;
		
		case 1297483053:
			return 7;
			break;
		
		case -1975746823:
			return 7;
			break;
		
		case 1942639125:
			return 7;
			break;
		
		case 1884703593:
			return 7;
			break;
		
		case 548351004:
			return 7;
			break;
		
		case 197263938:
			return 7;
			break;
		
		case 844756076:
			return 7;
			break;
		
		case 1686264000:
			return 7;
			break;
		
		case 1372926822:
			return 7;
			break;
		
		case -180454858:
			return 7;
			break;
		
		case -409870627:
			return 7;
			break;
		
		case -1502121690:
			return 7;
			break;
		
		case 2022085957:
			return 7;
			break;
		
		case 1168977803:
			return 7;
			break;
		
		case -1760308641:
			return 7;
			break;
		
		case -1000919847:
			return 7;
			break;
		
		case 382456257:
			return 7;
			break;
		
		case -474322017:
			return 7;
			break;
		
		case -1302427416:
			return 7;
			break;
		
		case 218545719:
			return 7;
			break;
		
		case 1608868851:
			return 7;
			break;
		
		case 1906555586:
			return 7;
			break;
		
		case 1475381084:
			return 7;
			break;
		
		case -1927319111:
			return 7;
			break;
		
		case 1325870356:
			return 14;
			break;
		
		case 2035450282:
			return 14;
			break;
		
		case 1793385679:
			return 14;
			break;
		
		case 383794371:
			return 14;
			break;
		
		case 1031326785:
			return 11;
			break;
		
		case -1490739308:
			return 11;
			break;
		
		case -1259881703:
			return 11;
			break;
		
		case -2099751169:
			return 11;
			break;
		
		case 503286566:
			return 11;
			break;
		
		case 716809370:
			return 11;
			break;
		
		case -2125934133:
			return 11;
			break;
		
		case -1635251127:
			return 11;
			break;
		
		case 1692080368:
			return 11;
			break;
		
		case 1915302796:
			return 11;
			break;
		
		case -1085813324:
			return 11;
			break;
		
		case -874912040:
			return 11;
			break;
		
		case -1852444079:
			return 11;
			break;
		
		case -1335939101:
			return 11;
			break;
		
		case 1659434315:
			return 11;
			break;
		
		case 1401902744:
			return 11;
			break;
		
		case 1181826140:
			return 11;
			break;
		
		case -1698687156:
			return 11;
			break;
		
		case -1014077208:
			return 11;
			break;
		
		case -1252733835:
			return 11;
			break;
		
		case -1616535281:
			return 11;
			break;
		
		case -1846606430:
			return 11;
			break;
		
		case -634120661:
			return 11;
			break;
		
		case -863110433:
			return 11;
			break;
		
		case -153497738:
			return 11;
			break;
		
		case -416894960:
			return 11;
			break;
		
		case 293438653:
			return 11;
			break;
		
		case 792147216:
			return 11;
			break;
		
		case -1990858420:
			return 11;
			break;
		
		case -1013457453:
			return 11;
			break;
		
		case -1379880411:
			return 11;
			break;
		
		case 1477215930:
			return 11;
			break;
		
		case -765756582:
			return 11;
			break;
		
		case -326946903:
			return 11;
			break;
		
		case -692452329:
			return 11;
			break;
		
		case 157837683:
			return 11;
			break;
		
		case -76100208:
			return 11;
			break;
		
		case 2120599946:
			return 11;
			break;
		
		case -919019741:
			return 11;
			break;
		
		case -746654801:
			return 11;
			break;
		
		case 1779802346:
			return 11;
			break;
		
		case 1004520575:
			return 11;
			break;
		
		case -1904645711:
			return 11;
			break;
		
		case 1614449972:
			return 11;
			break;
		
		case -638287710:
			return 11;
			break;
		
		case -339532737:
			return 11;
			break;
		
		case -23049735:
			return 11;
			break;
		
		case 706090398:
			return 11;
			break;
		
		case 87870444:
			return 11;
			break;
		
		case -149803113:
			return 11;
			break;
		
		case -1548133220:
			return 11;
			break;
		
		case -125893074:
			return 11;
			break;
		
		case 655287117:
			return 11;
			break;
		
		case 1845227814:
			return 11;
			break;
		
		case 177416790:
			return 11;
			break;
		
		case 1612109136:
			return 11;
			break;
		
		case 241414635:
			return 11;
			break;
		
		case 1134173271:
			return 11;
			break;
		
		case 1910438112:
			return 11;
			break;
		
		case -949967902:
			return 11;
			break;
		
		case -1360546088:
			return 11;
			break;
		
		case 166096092:
			return 11;
			break;
		
		case -140457903:
			return 11;
			break;
		
		case -432298617:
			return 11;
			break;
		
		case -738393846:
			return 11;
			break;
		
		case 1384775202:
			return 11;
			break;
		
		case -77078531:
			return 11;
			break;
		
		case -402835160:
			return 11;
			break;
		
		case -710142842:
			return 11;
			break;
		
		case -1869599805:
			return 11;
			break;
		
		case -1644607851:
			return 11;
			break;
		
		case -1321505511:
			return 11;
			break;
		
		case -386390000:
			return 12;
			break;
		
		case -136165916:
			return 12;
			break;
		
		case 108389131:
			return 12;
			break;
		
		case -1287242583:
			return 12;
			break;
		
		case 839105062:
			return 12;
			break;
		
		case 1085921170:
			return 12;
			break;
		
		case 1267723582:
			return 12;
			break;
		
		case -598896965:
			return 12;
			break;
		
		case 1531514028:
			return 12;
			break;
		
		case 1785965313:
			return 12;
			break;
		
		case 1344121348:
			return 12;
			break;
		
		case 1114574503:
			return 12;
			break;
		
		case -1314689774:
			return 12;
			break;
		
		case -1544466002:
			return 12;
			break;
		
		case 58757327:
			return 12;
			break;
		
		case 1992292172:
			return 12;
			break;
		
		case 1761205184:
			return 12;
			break;
		
		case 1517633207:
			return 12;
			break;
		
		case -1098447143:
			return 12;
			break;
		
		case 776922731:
			return 12;
			break;
		
		case -719832:
			return 12;
			break;
		
		case 797959005:
			return 12;
			break;
		
		case -1399136911:
			return 12;
			break;
		
		case 1512814740:
			return 12;
			break;
		
		case 1257576999:
			return 12;
			break;
	}
	switch (iParam0)
	{
		case 2031552901:
			return 4;
			break;
		
		case -1980519618:
			return 4;
			break;
		
		case -1702736805:
			return 4;
			break;
		
		case -1520999931:
			return 4;
			break;
		
		case 934020784:
			return 4;
			break;
		
		case 1401699952:
			return 4;
			break;
		
		case 1664540101:
			return 4;
			break;
		
		case -1953908887:
			return 4;
			break;
		
		case -1739370244:
			return 4;
			break;
		
		case 600762357:
			return 4;
			break;
		
		case 828146448:
			return 4;
			break;
		
		case 1196666622:
			return 4;
			break;
		
		case 1426737771:
			return 4;
			break;
		
		case -732575492:
			return 4;
			break;
		
		case -243477427:
			return 11;
			break;
		
		case -1466449280:
			return 11;
			break;
		
		case -1091702996:
			return 11;
			break;
		
		case -1806427655:
			return 11;
			break;
		
		case -1734139241:
			return 11;
			break;
		
		case 1878937934:
			return 11;
			break;
		
		case -2042593838:
			return 11;
			break;
		
		case 1597943763:
			return 11;
			break;
		
		case -1407107490:
			return 11;
			break;
		
		case -542857884:
			return 11;
			break;
		
		case -309182145:
			return 11;
			break;
		
		case 1189835760:
			return 11;
			break;
		
		case -788232156:
			return 11;
			break;
		
		case 681064266:
			return 11;
			break;
		
		case 914871081:
			return 11;
			break;
		
		case -1950974587:
			return 11;
			break;
		
		case 1592736846:
			return 11;
			break;
		
		case 1889853369:
			return 11;
			break;
		
		case 2052256533:
			return 11;
			break;
		
		case -1946184082:
			return 11;
			break;
		
		case -1782535696:
			return 11;
			break;
		
		case -1485550249:
			return 11;
			break;
		
		case -1323409237:
			return 11;
			break;
		
		case -1025178568:
			return 11;
			break;
		
		case -630273677:
			return 11;
			break;
		
		case -1543119706:
			return 11;
			break;
		
		case -1354763494:
			return 11;
			break;
		
		case -1726986569:
			return 11;
			break;
		
		case -1295418839:
			return 11;
			break;
		
		case 1021316696:
			return 11;
			break;
		
		case 1212556580:
			return 11;
			break;
		
		case 1509247106:
			return 11;
			break;
		
		case -1657253557:
			return 11;
			break;
		
		case 196750925:
			return 11;
			break;
		
		case -99841294:
			return 11;
			break;
		
		case 1749378918:
			return 11;
			break;
		
		case 1438433877:
			return 11;
			break;
		
		case -1834468333:
			return 11;
			break;
		
		case -2131978084:
			return 11;
			break;
		
		case -1172875993:
			return 12;
			break;
		
		case -933695062:
			return 12;
			break;
		
		case -1650353092:
			return 12;
			break;
		
		case -1411630927:
			return 12;
			break;
		
		case -1445514097:
			return 12;
			break;
		
		case -1214984182:
			return 12;
			break;
		
		case -1907262076:
			return 12;
			break;
		
		case -1462772454:
			return 12;
			break;
		
		case -1676142319:
			return 12;
			break;
		
		case 1613734209:
			return 12;
			break;
		
		case 1896432372:
			return 12;
			break;
		
		case -1785709773:
			return 12;
			break;
		
		case -1478893626:
			return 12;
			break;
		
		case -1234338579:
			return 12;
			break;
		
		case -919559537:
			return 12;
			break;
		
		case -1279986972:
			return 12;
			break;
		
		case -656588312:
			return 12;
			break;
		
		case -359406251:
			return 12;
			break;
		
		case -30339953:
			return 12;
			break;
		
		case 276443425:
			return 12;
			break;
		
		case 598005622:
			return 12;
			break;
		
		case 871823386:
			return 12;
			break;
		
		case 2047673121:
			return 12;
			break;
		
		case -723961716:
			return 12;
			break;
		
		case 1826089143:
			return 12;
			break;
		
		case 1576094442:
			return 12;
			break;
		
		case 1336979049:
			return 12;
			break;
		
		case 859010411:
			return 12;
			break;
		
		case 636508901:
			return 12;
			break;
		
		case 378911792:
			return 12;
			break;
		
		case -116031184:
			return 12;
			break;
		
		case -425731047:
			return 12;
			break;
	}
	switch (iParam0)
	{
		case -1774741831:
			return 6;
			break;
		
		case -1753769663:
			return 6;
			break;
		
		case 300340729:
			return 6;
			break;
		
		case -600988309:
			return 4;
			break;
		
		case -473418560:
			return 4;
			break;
		
		case -1240671930:
			return 4;
			break;
		
		case -262746659:
			return 4;
			break;
		
		case 927062347:
			return 4;
			break;
		
		case 552167585:
			return 7;
			break;
		
		case 252069083:
			return 7;
			break;
		
		case -54026146:
			return 7;
			break;
		
		case -573775267:
			return 7;
			break;
		
		case -603463981:
			return 7;
			break;
		
		case -419448319:
			return 11;
			break;
		
		case -1629902406:
			return 11;
			break;
		
		case -1937865468:
			return 11;
			break;
		
		case -2086276269:
			return 11;
			break;
		
		case 37156373:
			return 11;
			break;
		
		case -747792253:
			return 11;
			break;
		
		case -424460530:
			return 11;
			break;
		
		case 671334830:
			return 11;
			break;
		
		case 332564624:
			return 11;
			break;
		
		case 574334306:
			return 11;
			break;
		
		case -353978695:
			return 11;
			break;
		
		case -2030332425:
			return 11;
			break;
		
		case -1756547430:
			return 11;
			break;
		
		case -1927044541:
			return 11;
			break;
		
		case -1619704090:
			return 11;
			break;
		
		case -1309381660:
			return 11;
			break;
		
		case -842955051:
			return 11;
			break;
		
		case 1833387494:
			return 11;
			break;
		
		case 452927827:
			return 11;
			break;
		
		case 279579817:
			return 11;
			break;
		
		case 1047259180:
			return 11;
			break;
		
		case 143053800:
			return 14;
			break;
		
		case 919711869:
			return 14;
			break;
		
		case -317580033:
			return 14;
			break;
		
		case -1492269212:
			return 1;
			break;
		
		case -1588806686:
			return 1;
			break;
		
		case 1133772914:
			return 1;
			break;
		
		case -633960003:
			return 1;
			break;
		
		case 208432680:
			return 1;
			break;
		
		case 1306456332:
			return 1;
			break;
		
		case 574660259:
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 787219564:
			return 11;
			break;
		
		case 1446861130:
			return 11;
			break;
		
		case 1677423814:
			return 11;
			break;
		
		case 1629963538:
			return 11;
			break;
		
		case -1002763460:
			return 11;
			break;
		
		case -696930383:
			return 11;
			break;
		
		case -1530409898:
			return 11;
			break;
		
		case -2029612844:
			return 11;
			break;
		
		case 155391307:
			return 11;
			break;
		
		case 461453767:
			return 11;
			break;
		
		case 2144364744:
			return 11;
			break;
		
		case 1849574820:
			return 11;
			break;
		
		case 1543872819:
			return 11;
			break;
		
		case 1522179741:
			return 11;
			break;
		
		case -918553690:
			return 11;
			break;
		
		case -1232480710:
			return 11;
			break;
		
		case 324282147:
			return 11;
			break;
		
		case -324478539:
			return 11;
			break;
		
		case 40305969:
			return 11;
			break;
		
		case -835412575:
			return 11;
			break;
		
		case -562348498:
			return 11;
			break;
		
		case -506444584:
			return 11;
			break;
		
		case -205952854:
			return 11;
			break;
		
		case 63178943:
			return 11;
			break;
		
		case 829580944:
			return 11;
			break;
		
		case -474494180:
			return 11;
			break;
		
		case -388756986:
			return 11;
			break;
		
		case -20040198:
			return 11;
			break;
		
		case 425291872:
			return 11;
			break;
		
		case -344681321:
			return 11;
			break;
		
		case -121262279:
			return 11;
			break;
		
		case -849586073:
			return 11;
			break;
		
		case -1249117468:
			return 11;
			break;
		
		case 1408690849:
			return 4;
			break;
		
		case 1169444380:
			return 4;
			break;
		
		case 1544354513:
			return 4;
			break;
		
		case 1305108044:
			return 4;
			break;
		
		case 2098740455:
			return 4;
			break;
		
		case 1784289131:
			return 4;
			break;
		
		case -1717373444:
			return 4;
			break;
		
		case -1295243186:
			return 4;
			break;
		
		case -1509978443:
			return 4;
			break;
		
		case -818028239:
			return 4;
			break;
		
		case 1579855243:
			return 4;
			break;
		
		case -2096957641:
			return 4;
			break;
		
		case -557477635:
			return 4;
			break;
		
		case 1281387533:
			return 4;
			break;
		
		case 379977881:
			return 4;
			break;
		
		case 1641551616:
			return 4;
			break;
		
		case 1008388994:
			return 4;
			break;
		
		case 365625059:
			return 4;
			break;
		
		case -536046745:
			return 4;
			break;
		
		case 659464682:
			return 4;
			break;
		
		case 60250748:
			return 4;
			break;
		
		case -1757773384:
			return 4;
			break;
		
		case -1284137737:
			return 4;
			break;
		
		case -1767546029:
			return 4;
			break;
		
		case 1792743147:
			return 4;
			break;
		
		case 1486647918:
			return 4;
			break;
		
		case -1916019508:
			return 4;
			break;
		
		case 2097822537:
			return 4;
			break;
		
		case -1573354075:
			return 4;
			break;
		
		case -1886527408:
			return 4;
			break;
		
		case -992785702:
			return 4;
			break;
		
		case -1273648801:
			return 4;
			break;
		
		case -1012381560:
			return 4;
			break;
		
		case -1293277428:
			return 4;
			break;
		
		case -353019771:
			return 4;
			break;
		
		case 484195410:
			return 4;
			break;
		
		case -961474563:
			return 4;
			break;
		
		case -268016985:
			return 4;
			break;
		
		case -1215270468:
			return 4;
			break;
		
		case -1456220925:
			return 4;
			break;
	}
	switch (iParam0)
	{
		case -279906965:
			return 6;
			break;
		
		case -580562540:
			return 6;
			break;
		
		case -1176106346:
			return 6;
			break;
		
		case 679864276:
			return 6;
			break;
		
		case 583588954:
			return 6;
			break;
		
		case 286406893:
			return 6;
			break;
		
		case 17537248:
			return 6;
			break;
		
		case 1824780371:
			return 6;
			break;
		
		case 1585533902:
			return 6;
			break;
		
		case 1010896718:
			return 6;
			break;
		
		case -1768702692:
			return 6;
			break;
		
		case -1468210962:
			return 6;
			break;
		
		case -1673064831:
			return 6;
			break;
		
		case -1439716782:
			return 6;
			break;
		
		case -122402970:
			return 6;
			break;
		
		case 116253657:
			return 6;
			break;
		
		case 1673895295:
			return 6;
			break;
		
		case 1897412644:
			return 6;
			break;
		
		case -1103179152:
			return 6;
			break;
		
		case -846302961:
			return 6;
			break;
		
		case 718810029:
			return 6;
			break;
		
		case 2022950695:
			return 6;
			break;
		
		case -1574629874:
			return 6;
			break;
		
		case -1310151275:
			return 6;
			break;
		
		case -1600648456:
			return 6;
			break;
		
		case -1371593146:
			return 6;
			break;
		
		case -1123171357:
			return 6;
			break;
		
		case 1766661215:
			return 6;
			break;
		
		case 1139336374:
			return 7;
			break;
		
		case 875578693:
			return 7;
			break;
		
		case 1730325313:
			return 7;
			break;
		
		case 1481182606:
			return 7;
			break;
		
		case 2039500828:
			return 7;
			break;
		
		case -1959267497:
			return 7;
			break;
		
		case 1960625225:
			return 14;
			break;
		
		case 811809615:
			return 14;
			break;
		
		case 52093119:
			return 14;
			break;
		
		case -187939806:
			return 14;
			break;
		
		case -20173275:
			return 14;
			break;
		
		case -327317112:
			return 14;
			break;
		
		case -766683864:
			return 14;
			break;
		
		case 1342754977:
			return 14;
			break;
		
		case 1171373107:
			return 14;
			break;
		
		case 732334045:
			return 14;
			break;
		
		case 424076058:
			return 14;
			break;
		
		case -1683855405:
			return 14;
			break;
		
		case 1511098074:
			return 14;
			break;
		
		case -1725856511:
			return 14;
			break;
		
		case -740492681:
			return 14;
			break;
		
		case -995140580:
			return 14;
			break;
		
		case -286412648:
			return 14;
			break;
		
		case 205384504:
			return 14;
			break;
		
		case -26980475:
			return 14;
			break;
		
		case 671064767:
			return 14;
			break;
		
		case -1677060726:
			return 14;
			break;
		
		case -1229305110:
			return 14;
			break;
		
		case 2034552832:
			return 14;
			break;
		
		case -1406224941:
			return 14;
			break;
		
		case 1425180508:
			return 14;
			break;
		
		case -1883177736:
			return 14;
			break;
		
		case -1402597262:
			return 14;
			break;
		
		case 538539991:
			return 14;
			break;
		
		case 165366619:
			return 14;
			break;
		
		case 1757514026:
			return 14;
			break;
		
		case -707828904:
			return 14;
			break;
		
		case -990527067:
			return 14;
			break;
		
		case -1238096862:
			return 14;
			break;
		
		case 838474652:
			return 14;
			break;
		
		case -1190920460:
			return 14;
			break;
		
		case -335321858:
			return 14;
			break;
	}
	switch (iParam0)
	{
		case -1157702415:
			return 10;
			break;
		
		case 85815597:
			return 10;
			break;
		
		case -1754589750:
			return 10;
			break;
		
		case 332598944:
			return 10;
			break;
		
		case -2120914397:
			return 10;
			break;
		
		case 1857766511:
			return 10;
			break;
		
		case 1584374744:
			return 10;
			break;
		
		case 1527684374:
			return 10;
			break;
		
		case -915998259:
			return 10;
			break;
		
		case -1229400975:
			return 10;
			break;
		
		case -182260974:
			return 10;
			break;
		
		case 67406037:
			return 10;
			break;
		
		case 1536178155:
			return 10;
			break;
		
		case 1767297912:
			return 10;
			break;
		
		case 1054637700:
			return 10;
			break;
		
		case 1288444515:
			return 10;
			break;
		
		case -1522447504:
			return 10;
			break;
		
		case -1752780805:
			return 10;
			break;
		
		case -1061879209:
			return 10;
			break;
		
		case -1293326656:
			return 10;
			break;
		
		case 2117040061:
			return 10;
			break;
		
		case 1810420528:
			return 10;
			break;
		
		case -1462809348:
			return 10;
			break;
		
		case 573181452:
			return 1;
			break;
		
		case -1871025493:
			return 1;
			break;
		
		case 401083057:
			return 1;
			break;
		
		case -1258011389:
			return 1;
			break;
		
		case -1520420552:
			return 1;
			break;
		
		case 2072700298:
			return 1;
			break;
		
		case 694163672:
			return 1;
			break;
		
		case -1693156289:
			return 1;
			break;
		
		case -2049322280:
			return 12;
			break;
		
		case 127817315:
			return 12;
			break;
		
		case -112182841:
			return 12;
			break;
		
		case -351625924:
			return 12;
			break;
		
		case 1287807146:
			return 12;
			break;
		
		case -95437878:
			return 12;
			break;
		
		case 130143918:
			return 12;
			break;
		
		case 354513261:
			return 12;
			break;
		
		case -1280201073:
			return 12;
			break;
		
		case 814557252:
			return 12;
			break;
	}
	switch (iParam0)
	{
		case 1450518601:
			return 10;
			break;
		
		case 2141256344:
			return 10;
			break;
		
		case 1658831126:
			return 10;
			break;
		
		case 1629732254:
			return 10;
			break;
		
		case 1322653955:
			return 10;
			break;
		
		case 919562486:
			return 10;
			break;
		
		case -586304140:
			return 10;
			break;
		
		case -1923085975:
			return 10;
			break;
		
		case 2139123114:
			return 10;
			break;
		
		case 865261012:
			return 10;
			break;
		
		case 603600547:
			return 10;
			break;
		
		case 1448778591:
			return 10;
			break;
		
		case 1207107220:
			return 10;
			break;
		
		case 1601088919:
			return 10;
			break;
		
		case 1831553296:
			return 10;
			break;
		
		case 977199932:
			return 10;
			break;
		
		case 1225425103:
			return 10;
			break;
		
		case -1494041810:
			return 10;
			break;
		
		case -254743660:
			return 10;
			break;
		
		case -504148519:
			return 10;
			break;
		
		case -1729856159:
			return 10;
			break;
		
		case 531303152:
			return 10;
			break;
		
		case 1227263313:
			return 10;
			break;
		
		case 2046390006:
			return 10;
			break;
		
		case 465023604:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case -121376886:
			return 12;
			break;
		
		case -843245187:
			return 12;
			break;
		
		case -612748041:
			return 12;
			break;
		
		case 570901008:
			return 12;
			break;
		
		case 1304402304:
			return 12;
			break;
		
		case 1599918539:
			return 1;
			break;
		
		case -1859144336:
			return 1;
			break;
		
		case -135893623:
			return 1;
			break;
		
		case -1065648464:
			return 1;
			break;
		
		case 2078992037:
			return 1;
			break;
		
		case 2005261787:
			return 1;
			break;
		
		case -1563126486:
			return 1;
			break;
		
		case -726927144:
			return 1;
			break;
		
		case -1435215630:
			return 1;
			break;
		
		case 1537096519:
			return 1;
			break;
		
		case 1350787806:
			return 1;
			break;
		
		case 2077473150:
			return 1;
			break;
		
		case 1577121865:
			return 2;
			break;
		
		case 884057515:
			return 2;
			break;
		
		case 2055188806:
			return 2;
			break;
		
		case 1362452146:
			return 2;
			break;
		
		case -1761842625:
			return 2;
			break;
		
		case 1068701361:
			return 4;
			break;
		
		case -1380486476:
			return 4;
			break;
		
		case -1543872710:
			return 4;
			break;
		
		case -1702878124:
			return 7;
			break;
		
		case -1254139438:
			return 7;
			break;
		
		case 210405475:
			return 7;
			break;
		
		case -1707872538:
			return 11;
			break;
		
		case -2012788083:
			return 11;
			break;
		
		case -463076547:
			return 11;
			break;
		
		case 439709403:
			return 11;
			break;
		
		case 1630043344:
			return 11;
			break;
		
		case 1325521027:
			return 11;
			break;
		
		case -1419210429:
			return 11;
			break;
		
		case -515769099:
			return 11;
			break;
		
		case 132958794:
			return 11;
			break;
		
		case -1114884726:
			return 11;
			break;
		
		case 1757345625:
			return 11;
			break;
		
		case -1610663451:
			return 11;
			break;
		
		case -1494469157:
			return 11;
			break;
		
		case -1096844637:
			return 11;
			break;
		
		case -1376986818:
			return 11;
			break;
		
		case -619564152:
			return 11;
			break;
		
		case -4895131:
			return 11;
			break;
		
		case -303322414:
			return 11;
			break;
		
		case 825569640:
			return 11;
			break;
		
		case 1990051484:
			return 14;
			break;
		
		case -1520061694:
			return 14;
			break;
		
		case -1769535933:
			return 14;
			break;
		
		case -1278290738:
			return 14;
			break;
		
		case -556385537:
			return 14;
			break;
		
		case -795828620:
			return 14;
			break;
		
		case -1848626321:
			return 14;
			break;
		
		case -1947743732:
			return 14;
			break;
		
		case 1454239749:
			return 14;
			break;
		
		case -1560482447:
			return 14;
			break;
		
		case 756154773:
			return 14;
			break;
		
		case 1970016848:
			return 14;
			break;
		
		case -2018330915:
			return 14;
			break;
		
		case 1651272765:
			return 14;
			break;
		
		case 1353042096:
			return 14;
			break;
	}
	switch (iParam0)
	{
		case -1610663451:
			return 10;
			break;
		
		case -1342383648:
			return 10;
			break;
		
		case -1120144290:
			return 10;
			break;
		
		case 1265733835:
			return 10;
			break;
		
		case 1492757467:
			return 10;
			break;
		
		case 74154800:
			return 10;
			break;
		
		case 323166431:
			return 10;
			break;
		
		case 1696679066:
			return 10;
			break;
		
		case 1332943166:
			return 10;
			break;
		
		case -1811791700:
			return 10;
			break;
		
		case -1514347487:
			return 10;
			break;
		
		case 1068996624:
			return 10;
			break;
		
		case 1375091853:
			return 10;
			break;
		
		case 1550143851:
			return 10;
			break;
		
		case 1855649238:
			return 10;
			break;
		
		case 1594644157:
			return 10;
			break;
		
		case -112424129:
			return 10;
			break;
		
		case 192229264:
			return 10;
			break;
		
		case 438291685:
			return 10;
			break;
		
		case 734032114:
			return 10;
			break;
		
		case -1046831960:
			return 10;
			break;
		
		case -108491645:
			return 10;
			break;
		
		case 123545644:
			return 10;
			break;
		
		case 1441514824:
			return 10;
			break;
		
		case 1790504674:
			return 10;
			break;
		
		case 1449707070:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case -1736024889:
			return 1;
			break;
		
		case -1927424120:
			return 14;
			break;
		
		case -714796311:
			return 12;
			break;
		
		case -1516065754:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case 1017575242:
			return 1;
			break;
		
		case -436450826:
			return 1;
			break;
		
		case 388705363:
			return 1;
			break;
		
		case -1044283007:
			return 1;
			break;
		
		case -208444124:
			return 1;
			break;
		
		case 1207664400:
			return 1;
			break;
		
		case 685326540:
			return 1;
			break;
		
		case 507980712:
			return 1;
			break;
		
		case 224168403:
			return 1;
			break;
		
		case -19665722:
			return 1;
			break;
		
		case -567597622:
			return 1;
			break;
		
		case 983703469:
			return 14;
			break;
		
		case 1751120680:
			return 14;
			break;
		
		case 569765473:
			return 14;
			break;
		
		case 272321260:
			return 14;
			break;
		
		case -28039394:
			return 14;
			break;
		
		case -499985406:
			return 4;
			break;
		
		case -841176234:
			return 4;
			break;
		
		case -1080095013:
			return 4;
			break;
		
		case -849106328:
			return 4;
			break;
		
		case -1188462092:
			return 4;
			break;
		
		case -1234554049:
			return 11;
			break;
		
		case -1400168575:
			return 11;
			break;
		
		case -758256634:
			return 11;
			break;
		
		case -1053210403:
			return 11;
			break;
		
		case 1831772361:
			return 11;
			break;
		
		case -189071324:
			return 3;
			break;
		
		case 1735026049:
			return 3;
			break;
		
		case 475582303:
			return 3;
			break;
		
		case 185478346:
			return 3;
			break;
		
		case 1035112978:
			return 3;
			break;
		
		case 1389202323:
			return 3;
			break;
		
		case 1595647023:
			return 3;
			break;
		
		case -1168483685:
			return 3;
			break;
		
		case -946834169:
			return 3;
			break;
		
		case -1761700892:
			return 3;
			break;
		
		case -1912404917:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case 181772562:
			return 11;
			break;
		
		case 1575405367:
			return 11;
			break;
		
		case 2006645407:
			return 11;
			break;
		
		case 1976908542:
			return 11;
			break;
		
		case 1542915906:
			return 11;
			break;
		
		case 1222861079:
			return 11;
			break;
		
		case 1058950541:
			return 11;
			break;
		
		case 800423093:
			return 7;
			break;
		
		case 434065673:
			return 7;
			break;
		
		case 43033196:
			return 7;
			break;
		
		case -187496719:
			return 7;
			break;
		
		case 1475869283:
			return 4;
			break;
		
		case 716775398:
			return 4;
			break;
		
		case 877933340:
			return 4;
			break;
		
		case 2131478666:
			return 4;
			break;
		
		case -2115205532:
			return 14;
			break;
		
		case -1878515045:
			return 14;
			break;
		
		case 373632787:
			return 14;
			break;
		
		case -461157488:
			return 14;
			break;
		
		case -214308611:
			return 14;
			break;
		
		case -647908019:
			return 14;
			break;
		
		case 1465790788:
			return 14;
			break;
		
		case 698865112:
			return 14;
			break;
		
		case -1327490303:
			return 14;
			break;
		
		case 1233573053:
			return 14;
			break;
		
		case 927739976:
			return 14;
			break;
		
		case 772349378:
			return 14;
			break;
		
		case 469989799:
			return 14;
			break;
		
		case 1710557703:
			return 14;
			break;
		
		case 1488613266:
			return 14;
			break;
		
		case 1232621838:
			return 14;
			break;
		
		case 1010218635:
			return 14;
			break;
		
		case -402504268:
			return 14;
			break;
		
		case -2104657208:
			return 14;
			break;
		
		case 1415552621:
			return 14;
			break;
		
		case 1563734039:
			return 14;
			break;
		
		case -1325738078:
			return 14;
			break;
		
		case 269555153:
			return 14;
			break;
		
		case 432548159:
			return 14;
			break;
		
		case 1825656628:
			return 14;
			break;
		
		case -820493119:
			return 14;
			break;
		
		case 1530158331:
			return 14;
			break;
		
		case 1182086013:
			return 14;
			break;
		
		case 949393344:
			return 14;
			break;
		
		case -1848554956:
			return 14;
			break;
		
		case 230441484:
			return 14;
			break;
		
		case -285045:
			return 14;
			break;
		
		case -273611274:
			return 14;
			break;
		
		case -2078570938:
			return 1;
			break;
		
		case -1478350740:
			return 1;
			break;
		
		case 885717964:
			return 1;
			break;
		
		case 826435243:
			return 1;
			break;
		
		case 517784032:
			return 1;
			break;
		
		case 1571831686:
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 1470149028:
		case -1357324997:
		case -399192206:
		case -890006288:
		case 64652989:
		case -161453111:
		case 795762148:
		case 296559202:
		case 1253971075:
		case 1023408391:
		case 1504591288:
		case 2023063246:
		case 1718016625:
		case 1428731893:
		case 1101074662:
		case -1351684992:
		case -1657386993:
		case -1946409573:
		case 2042003728:
		case -170362538:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case -477604174:
		case 364034822:
		case 136191965:
		case 442582143:
		case 84482511:
		case 971670421:
		case 736159614:
		case 1667815057:
		case 1294641685:
		case -2030199366:
		case 601407264:
		case 764138118:
		case 1968955913:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case -1155192675:
		case -1928704920:
		case -524880960:
		case -1356263259:
		case 68860555:
		case -704258466:
		case -902445334:
		case -133258609:
		case -296251615:
		case 479292308:
			return 14;
			break;
	}
	switch (iParam0)
	{
		case -644137588:
		case 683400644:
		case 915306857:
		case 209462597:
		case -1823757478:
		case -546421858:
		case -890070361:
		case -55017934:
		case -894001213:
		case -131040586:
		case -1965580286:
		case -2103079010:
		case -1350342311:
		case 912357359:
		case 52793720:
		case -1382547450:
		case -537992013:
		case -766391943:
		case -2071810596:
		case -1463617956:
		case -1692083424:
		case 1293532939:
			return 10;
			break;
		
		case 1449707070:
		case 1322653955:
		case 1629732254:
		case 1450518601:
		case 1658831126:
		case 2141256344:
		case 1448778591:
		case 603600547:
		case 1601088919:
		case -586304140:
		case -1923085975:
		case 919562486:
		case -1912404917:
		case 865261012:
		case 1207107220:
		case 2139123114:
			return 10;
			break;
		
		case 1651272765:
		case 1970016848:
		case -1560482447:
		case 756154773:
		case -2018330915:
		case 1353042096:
			return 14;
			break;
		
		case -567597622:
			return 1;
			break;
		
		case 1253971075:
		case 795762148:
		case 1470149028:
		case -161453111:
		case -890006288:
		case -1357324997:
		case 64652989:
		case 1023408391:
		case -399192206:
		case 296559202:
			return 10;
			break;
		
		case 2023063246:
		case 1504591288:
		case 1718016625:
		case 1428731893:
		case 1101074662:
		case -1351684992:
		case -1657386993:
		case -1946409573:
		case 2042003728:
		case -170362538:
			return 10;
			break;
		
		case -1155192675:
		case -524880960:
		case 68860555:
		case -133258609:
		case -1928704920:
		case -296251615:
		case -1356263259:
		case 479292308:
		case -704258466:
		case -902445334:
			return 14;
			break;
		
		case 1968955913:
		case 364034822:
		case 971670421:
		case -477604174:
		case -2030199366:
		case 736159614:
		case 442582143:
		case 1667815057:
		case 84482511:
		case 601407264:
		case 136191965:
		case 1294641685:
		case 764138118:
			return 10;
			break;
		
		case -418887148:
		case 366454706:
		case 60687167:
		case 775182443:
		case -1375807486:
		case -591383164:
		case -897412855:
		case -111219007:
		case -1351208589:
		case -2078483775:
		case -1998855105:
		case 1466433880:
		case 1849569028:
		case 992299215:
		case 674833163:
			return 10;
			break;
		
		case -929851004:
		case 375141656:
		case 604491887:
		case 1941532625:
		case 27069338:
		case 1330358006:
		case 1559839313:
		case 1402285957:
		case 1634061094:
		case -1354340630:
		case 1976347623:
		case 1736380236:
		case -478935244:
		case -856958428:
		case -902522358:
		case -1534144833:
		case 1380690490:
		case -2130638940:
		case -1362631887:
		case 1809800545:
		case 430455028:
		case 1181454970:
		case 1982755327:
		case 69307871:
		case -256272621:
		case 511406742:
		case 340024872:
		case 902799678:
			return 11;
			break;
		
		case 676167905:
		case -775662644:
		case -1014319271:
		case -182314361:
		case -418415006:
		case -2081802219:
		case 1990434184:
			return 12;
			break;
	}
	switch (iParam0)
	{
		case -1604737223:
		case -1367129204:
		case 87453937:
		case -1686659723:
		case 1992217604:
		case -1934557208:
		case -1034032319:
		case 1747334867:
		case 236389050:
		case 591736086:
		case -357636850:
		case 479676642:
		case 242920617:
		case -1219723702:
		case -1576971340:
		case -622901905:
		case -981132613:
		case -1908986844:
		case 2029126042:
		case -1307315235:
		case -571324979:
		case 867332432:
		case -1005186539:
		case -1314656979:
		case 1110085176:
		case -1736983851:
		case -1496983695:
		case 1827333048:
		case 420690954:
		case 1330653315:
		case -14316613:
		case 1281631799:
		case 447234752:
		case 278933172:
		case -562607521:
		case 755492739:
		case -85982412:
			return 10;
			break;
	}
	switch (iParam0)
	{
		case 1133645712:
		case 1367911293:
		case -1625667937:
		case -1392254350:
		case -2084794396:
		case -1854985399:
		case -556612077:
		case -317693298:
		case 875917527:
		case -895312461:
		case -1112451642:
		case 1814573757:
		case 1623858177:
		case -1886586490:
		case 18111547:
		case 256833712:
		case -577202876:
		case -337890869:
		case 986566573:
		case 1208904238:
		case -1015519532:
		case -709981376:
		case -425841377:
		case -119844455:
		case 169866274:
		case 475666582:
		case 833766214:
		case 1140123595:
		case 344688897:
		case 651767196:
		case 1599840124:
		case 1084842520:
		case 836224117:
		case 630238183:
		case 135753973:
		case -104737718:
		case -325862930:
		case -590144915:
		case -1063132661:
		case -1294055804:
		case 1212247740:
		case 1413449400:
		case 1643979315:
		case 1904656710:
		case -1623515978:
		case -887655326:
		case -666890573:
		case -435836354:
		case -188037176:
		case 80308165:
		case -1995017923:
		case -1725230738:
		case -1208856836:
		case -981603821:
		case -732952649:
		case 1500680786:
		case 1346142182:
		case -2065602257:
		case 1806710477:
		case -1500599167:
		case -30514961:
		case -1481493508:
		case -110995621:
		case -889718137:
		case -1658183956:
		case 1575526498:
		case -1330723339:
		case -2057015463:
		case 1412730106:
		case 1191670428:
		case 257784725:
		case -93269496:
		case 215971557:
		case 1177938321:
		case 409931268:
		case 1675273434:
		case 908872062:
		case -1891533913:
		case 1367736369:
		case 2018069939:
		case -1263842386:
		case -1571215606:
		case -1870625959:
		case 1462800562:
		case -1930298316:
		case -1537791178:
		case -1979648382:
		case -1074732439:
		case -1816950289:
		case 828294463:
		case 1919633535:
		case 1827061110:
		case 1470141162:
		case 291800691:
		case 1007410113:
		case 422352391:
		case 1139927953:
		case -37822676:
		case 677196904:
		case -540826826:
		case 233305764:
		case -1410649428:
		case -910922178:
		case -1201812591:
		case 1694442709:
		case 1389592702:
		case -1853293080:
		case 2132302087:
		case 803551906:
		case 510924736:
		case -925209166:
		case -1229928097:
		case 1685923065:
		case 1378517076:
		case 2140199712:
		case 759838356:
		case 453349899:
		case 1224142317:
		case 916932942:
		case -467098550:
		case 684993940:
		case 2067452512:
		case -1902577380:
		case 1607080831:
		case 1912324066:
			return 10;
			break;
	}
	return 0;
}

void func_72(var uParam0, var uParam1)//Position - 0x9681
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == 6)
	{
		*uParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	}
	switch (*uParam1)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				uParam0->f_5[iVar0 /*18*/].f_1 = joaat("g_m_y_mexgoon_03");
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (iVar1 < 33)
				{
					uParam0->f_5[iVar0 /*18*/].f_14 = joaat("weapon_microsmg");
				}
				else if (iVar1 > 66)
				{
					uParam0->f_5[iVar0 /*18*/].f_14 = joaat("weapon_assaultrifle");
				}
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				uParam0->f_78[iVar0 /*17*/].f_1 = joaat("cavalcade");
				iVar0++;
			}
			break;
		
		case 1:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				uParam0->f_5[iVar0 /*18*/].f_1 = joaat("g_m_y_lost_03");
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (iVar1 < 33)
				{
					uParam0->f_5[iVar0 /*18*/].f_14 = joaat("weapon_sawnoffshotgun");
				}
				else if (iVar1 > 66)
				{
					uParam0->f_5[iVar0 /*18*/].f_14 = joaat("weapon_assaultrifle");
				}
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				uParam0->f_78[iVar0 /*17*/].f_1 = joaat("hexer");
				iVar0++;
			}
			break;
		
		case 2:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				uParam0->f_5[iVar0 /*18*/].f_1 = joaat("g_m_y_famca_01");
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (iVar1 < 33)
				{
					uParam0->f_5[iVar0 /*18*/].f_14 = joaat("weapon_microsmg");
				}
				else if (iVar1 > 66)
				{
					uParam0->f_5[iVar0 /*18*/].f_14 = joaat("weapon_pumpshotgun");
				}
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				uParam0->f_78[iVar0 /*17*/].f_1 = joaat("baller");
				iVar0++;
			}
			break;
		
		case 3:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				uParam0->f_5[iVar0 /*18*/].f_1 = joaat("mp_g_m_pros_01");
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (iVar1 < 33)
				{
					uParam0->f_5[iVar0 /*18*/].f_14 = joaat("weapon_smg");
				}
				else if (iVar1 > 66)
				{
					uParam0->f_5[iVar0 /*18*/].f_14 = joaat("weapon_combatmg");
				}
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				uParam0->f_78[iVar0 /*17*/].f_1 = joaat("granger");
				iVar0++;
			}
			break;
		
		case 4:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				uParam0->f_5[iVar0 /*18*/].f_1 = joaat("g_m_m_chigoon_01");
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (iVar1 < 33)
				{
					uParam0->f_5[iVar0 /*18*/].f_14 = joaat("weapon_smg");
				}
				else if (iVar1 > 66)
				{
					uParam0->f_5[iVar0 /*18*/].f_14 = joaat("weapon_carbinerifle");
				}
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				uParam0->f_78[iVar0 /*17*/].f_1 = joaat("jackal");
				iVar0++;
			}
			break;
		
		case 5:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				uParam0->f_5[iVar0 /*18*/].f_1 = joaat("a_m_m_hillbilly_02");
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (iVar1 < 33)
				{
					uParam0->f_5[iVar0 /*18*/].f_14 = joaat("weapon_sawnoffshotgun");
				}
				else if (iVar1 > 66)
				{
					uParam0->f_5[iVar0 /*18*/].f_14 = joaat("weapon_combatmg");
				}
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				uParam0->f_78[iVar0 /*17*/].f_1 = joaat("rebel");
				iVar0++;
			}
			break;
	}
}

void func_73(var uParam0)//Position - 0x99C5
{
	uParam0->f_96 = MISC::GET_RANDOM_INT_IN_RANGE(2, 5);
	Local_103.f_178 = (Local_103.f_178 + uParam0->f_96);
	switch (*uParam0)
	{
		case 0:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 2320.896f, 1452.707f, 62.2404f };
			uParam0->f_5[0 /*18*/].f_5 = 354.4594f;
			uParam0->f_5[1 /*18*/].f_2 = { 2353.574f, 1510.125f, 53.1555f };
			uParam0->f_5[1 /*18*/].f_5 = 98.8266f;
			uParam0->f_5[2 /*18*/].f_2 = { 2294.484f, 1508.458f, 61.1572f };
			uParam0->f_5[2 /*18*/].f_5 = 284.4314f;
			uParam0->f_5[3 /*18*/].f_2 = { 2287.753f, 1476.692f, 69.8952f };
			uParam0->f_5[3 /*18*/].f_5 = 313.3356f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 2330.363f, 1286.403f, 65.6944f };
			uParam0->f_78[0 /*17*/].f_12[0] = 1.8055f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 2380.052f, 1486.732f, 39.3839f };
			uParam0->f_78[0 /*17*/].f_12[1] = 173.8279f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 2212.928f, 1728.134f, 88.8012f };
			uParam0->f_78[0 /*17*/].f_12[2] = 261.9384f;
			uParam0->f_97 = { 3319.875f, 1396.298f, 177.9103f };
			uParam0->f_100 = 84.3397f;
			break;
		
		case 1:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 1063.983f, 2338.235f, 48.6123f };
			uParam0->f_5[0 /*18*/].f_5 = 350.1455f;
			uParam0->f_5[1 /*18*/].f_2 = { 1008.183f, 2370.161f, 54.5713f };
			uParam0->f_5[1 /*18*/].f_5 = 265.6562f;
			uParam0->f_5[2 /*18*/].f_2 = { 1128.295f, 2345.031f, 52.2852f };
			uParam0->f_5[2 /*18*/].f_5 = 72.3582f;
			uParam0->f_5[3 /*18*/].f_2 = { 1075.685f, 2394.358f, 51.4952f };
			uParam0->f_5[3 /*18*/].f_5 = 178.4742f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 934.3832f, 2377.912f, 45.5848f };
			uParam0->f_78[0 /*17*/].f_12[0] = 302.7182f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 1161.811f, 2398.735f, 56.8772f };
			uParam0->f_78[0 /*17*/].f_12[1] = 3.897f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 1042.273f, 2432.6f, 44.1508f };
			uParam0->f_78[0 /*17*/].f_12[2] = 275.9303f;
			uParam0->f_97 = { -361.9944f, 2414.308f, 471.9749f };
			uParam0->f_100 = 263.7351f;
			break;
		
		case 2:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { -1952.565f, 2589.525f, 1.6831f };
			uParam0->f_5[0 /*18*/].f_5 = 113.619f;
			uParam0->f_5[1 /*18*/].f_2 = { -1981.117f, 2631.698f, 1.702f };
			uParam0->f_5[1 /*18*/].f_5 = 183.9359f;
			uParam0->f_5[2 /*18*/].f_2 = { -1992.678f, 2632.717f, 1.9292f };
			uParam0->f_5[2 /*18*/].f_5 = 197.8271f;
			uParam0->f_5[3 /*18*/].f_2 = { -1996.694f, 2527.202f, 1.8938f };
			uParam0->f_5[3 /*18*/].f_5 = 337.1221f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { -2214.625f, 2820.103f, 2.034f };
			uParam0->f_78[0 /*17*/].f_12[0] = 215.3564f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { -1770.402f, 2736.629f, 4.4394f };
			uParam0->f_78[0 /*17*/].f_12[1] = 152.8846f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { -2015.04f, 2702.457f, 2.4495f };
			uParam0->f_78[0 /*17*/].f_12[2] = 273.5316f;
			uParam0->f_97 = { -3106.78f, 2567.887f, 200f };
			uParam0->f_100 = 266.9502f;
			break;
		
		case 3:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 1892.234f, 592.2417f, 189.3747f };
			uParam0->f_5[0 /*18*/].f_5 = 249.6456f;
			uParam0->f_5[1 /*18*/].f_2 = { 1927.436f, 591.7188f, 177.8152f };
			uParam0->f_5[1 /*18*/].f_5 = 159.7268f;
			uParam0->f_5[2 /*18*/].f_2 = { 1906.445f, 577.1587f, 174.8717f };
			uParam0->f_5[2 /*18*/].f_5 = 198.8829f;
			uParam0->f_5[3 /*18*/].f_2 = { 1896.536f, 584.7686f, 177.4033f };
			uParam0->f_5[3 /*18*/].f_5 = 211.7178f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 1935.604f, 669.2496f, 184.7174f };
			uParam0->f_78[0 /*17*/].f_12[0] = 224.7734f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 1865.464f, 478.8249f, 170.5025f };
			uParam0->f_78[0 /*17*/].f_12[1] = 261.0713f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 1796.104f, 298.5035f, 170.3443f };
			uParam0->f_78[0 /*17*/].f_12[2] = 337.5981f;
			uParam0->f_97 = { 2961.06f, -102.1822f, 483.754f };
			uParam0->f_100 = 67.1375f;
			break;
		
		case 4:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 1460.868f, 1088.279f, 113.334f };
			uParam0->f_5[0 /*18*/].f_5 = 10.3573f;
			uParam0->f_5[1 /*18*/].f_2 = { 1455.516f, 1133.988f, 113.334f };
			uParam0->f_5[1 /*18*/].f_5 = 186.5074f;
			uParam0->f_5[2 /*18*/].f_2 = { 1482.747f, 1130.094f, 113.334f };
			uParam0->f_5[2 /*18*/].f_5 = 116.289f;
			uParam0->f_5[3 /*18*/].f_2 = { 1464.915f, 1134.746f, 113.3225f };
			uParam0->f_5[3 /*18*/].f_5 = 181.0186f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 1287.343f, 1210.874f, 106.6704f };
			uParam0->f_78[0 /*17*/].f_12[0] = 180.3493f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 1310.347f, 1073.41f, 104.5521f };
			uParam0->f_78[0 /*17*/].f_12[1] = 2.8196f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 1468.254f, 1176.568f, 113.334f };
			uParam0->f_78[0 /*17*/].f_12[2] = 88.018f;
			uParam0->f_97 = { 2718.076f, 844.5446f, 650.5612f };
			uParam0->f_100 = 86.5865f;
			break;
		
		case 5:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 781.7131f, 1296.37f, 360.3558f };
			uParam0->f_5[0 /*18*/].f_5 = 298.7285f;
			uParam0->f_5[1 /*18*/].f_2 = { 817.8524f, 1342.544f, 356.6494f };
			uParam0->f_5[1 /*18*/].f_5 = 2.4516f;
			uParam0->f_5[2 /*18*/].f_2 = { 837.4887f, 1296.438f, 363.3529f };
			uParam0->f_5[2 /*18*/].f_5 = 235.0403f;
			uParam0->f_5[3 /*18*/].f_2 = { 779.8301f, 1314.87f, 359.3835f };
			uParam0->f_5[3 /*18*/].f_5 = 258.0066f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 842.7767f, 1338.928f, 351.54f };
			uParam0->f_78[0 /*17*/].f_12[0] = 219.8066f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 834.7274f, 1247.029f, 352.0706f };
			uParam0->f_78[0 /*17*/].f_12[1] = 289.2027f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 675.3398f, 1351.774f, 327.9539f };
			uParam0->f_78[0 /*17*/].f_12[2] = 256.7171f;
			uParam0->f_97 = { 869.2994f, 2807.811f, 770.8076f };
			uParam0->f_100 = 178.8456f;
			break;
		
		case 6:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 1422.101f, -2184.86f, 61.8352f };
			uParam0->f_5[0 /*18*/].f_5 = 30.6842f;
			uParam0->f_5[1 /*18*/].f_2 = { 1394.916f, -2087.58f, 53.4358f };
			uParam0->f_5[1 /*18*/].f_5 = 201.2894f;
			uParam0->f_5[2 /*18*/].f_2 = { 1391.63f, -2205.374f, 60.4674f };
			uParam0->f_5[2 /*18*/].f_5 = 18.653f;
			uParam0->f_5[3 /*18*/].f_2 = { 1357.787f, -2191.316f, 58.6791f };
			uParam0->f_5[3 /*18*/].f_5 = 108.6812f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 1347.645f, -2021.752f, 48.4312f };
			uParam0->f_78[0 /*17*/].f_12[0] = 298.7371f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 1504.546f, -1982.46f, 69.9607f };
			uParam0->f_78[0 /*17*/].f_12[1] = 75.8727f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 1524.317f, -2293.609f, 72.1833f };
			uParam0->f_78[0 /*17*/].f_12[2] = 30.4687f;
			uParam0->f_97 = { 2283.102f, -1684.922f, 109.8941f };
			uParam0->f_100 = 130.1306f;
			break;
		
		case 7:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 1139.829f, -3134.407f, 15.0016f };
			uParam0->f_5[0 /*18*/].f_5 = 104.6551f;
			uParam0->f_5[1 /*18*/].f_2 = { 1139.654f, -3149.986f, 22.1254f };
			uParam0->f_5[1 /*18*/].f_5 = 86.9869f;
			uParam0->f_5[2 /*18*/].f_2 = { 1083.742f, -3163.082f, 4.901f };
			uParam0->f_5[2 /*18*/].f_5 = 312.9454f;
			uParam0->f_5[3 /*18*/].f_2 = { 1106.558f, -3120.745f, 4.901f };
			uParam0->f_5[3 /*18*/].f_5 = 186.7521f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 983.3778f, -3091.903f, 4.9009f };
			uParam0->f_78[0 /*17*/].f_12[0] = 181.5385f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 1241.716f, -3095.097f, 4.9016f };
			uParam0->f_78[0 /*17*/].f_12[1] = 88.178f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 1020.388f, -3218.337f, 4.888f };
			uParam0->f_78[0 /*17*/].f_12[2] = 270.4624f;
			uParam0->f_97 = { 1082.761f, -3913.538f, 259.5345f };
			uParam0->f_100 = 357.1163f;
			break;
		
		case 8:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 550.9495f, -3046.577f, 12.2886f };
			uParam0->f_5[0 /*18*/].f_5 = 8.8327f;
			uParam0->f_5[1 /*18*/].f_2 = { 542.4202f, -3002.079f, 5.0443f };
			uParam0->f_5[1 /*18*/].f_5 = 197.559f;
			uParam0->f_5[2 /*18*/].f_2 = { 567.1848f, -3005.176f, 22.0949f };
			uParam0->f_5[2 /*18*/].f_5 = 120.1645f;
			uParam0->f_5[3 /*18*/].f_2 = { 520.8234f, -3053.324f, 5.0696f };
			uParam0->f_5[3 /*18*/].f_5 = 0.38f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 656.7521f, -2960.734f, 5.0444f };
			uParam0->f_78[0 /*17*/].f_12[0] = 158.5572f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 586.759f, -2960.094f, 5.0444f };
			uParam0->f_78[0 /*17*/].f_12[1] = 182.1605f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 524.9021f, -2962.522f, 5.0453f };
			uParam0->f_78[0 /*17*/].f_12[2] = 175.0801f;
			uParam0->f_97 = { -378.6478f, -3677.805f, 291.4673f };
			uParam0->f_100 = 314.9697f;
			break;
		
		case 9:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 1409.335f, -734.6124f, 66.6396f };
			uParam0->f_5[0 /*18*/].f_5 = 93.3841f;
			uParam0->f_5[1 /*18*/].f_2 = { 1395.727f, -701.6596f, 66.4683f };
			uParam0->f_5[1 /*18*/].f_5 = 140.4233f;
			uParam0->f_5[2 /*18*/].f_2 = { 1383.732f, -776.3151f, 66.4024f };
			uParam0->f_5[2 /*18*/].f_5 = 11.4037f;
			uParam0->f_5[3 /*18*/].f_2 = { 1361.304f, -697.9785f, 65.3824f };
			uParam0->f_5[3 /*18*/].f_5 = 208.016f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 1237.501f, -761.1631f, 58.9825f };
			uParam0->f_78[0 /*17*/].f_12[0] = 287.8288f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 1268.024f, -615.4786f, 67.8305f };
			uParam0->f_78[0 /*17*/].f_12[1] = 208.6499f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 1245.512f, -711.1078f, 61.9082f };
			uParam0->f_78[0 /*17*/].f_12[2] = 180.0621f;
			uParam0->f_97 = { 2409.291f, -1098.351f, 496.8289f };
			uParam0->f_100 = 70.7044f;
			break;
		
		case 10:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 1103.402f, 89.1884f, 79.8909f };
			uParam0->f_5[0 /*18*/].f_5 = 323.525f;
			uParam0->f_5[1 /*18*/].f_2 = { 1193.05f, 149.3631f, 79.5353f };
			uParam0->f_5[1 /*18*/].f_5 = 115.8848f;
			uParam0->f_5[2 /*18*/].f_2 = { 1144.888f, 82.5526f, 79.8909f };
			uParam0->f_5[2 /*18*/].f_5 = 345.2191f;
			uParam0->f_5[3 /*18*/].f_2 = { 1106.952f, 128.1926f, 80.8914f };
			uParam0->f_5[3 /*18*/].f_5 = 255.009f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 1065.068f, 241.121f, 79.8555f };
			uParam0->f_78[0 /*17*/].f_12[0] = 326.5492f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 980.4287f, -68.106f, 73.9594f };
			uParam0->f_78[0 /*17*/].f_12[1] = 297.0119f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 967.2383f, 184.9293f, 79.8308f };
			uParam0->f_78[0 /*17*/].f_12[2] = 261.3374f;
			uParam0->f_97 = { 1742.13f, 1556.528f, 326.8489f };
			uParam0->f_100 = 158.5592f;
			break;
		
		case 11:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 1725.837f, 3028.07f, 61.2235f };
			uParam0->f_5[0 /*18*/].f_5 = 67.0086f;
			uParam0->f_5[1 /*18*/].f_2 = { 1609.881f, 3047.903f, 46.7991f };
			uParam0->f_5[1 /*18*/].f_5 = 263.2002f;
			uParam0->f_5[2 /*18*/].f_2 = { 1674.129f, 3113.69f, 43.6611f };
			uParam0->f_5[2 /*18*/].f_5 = 30.7465f;
			uParam0->f_5[3 /*18*/].f_2 = { 1731.598f, 3019.928f, 61.4284f };
			uParam0->f_5[3 /*18*/].f_5 = 157.5899f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 1741.06f, 3156.46f, 42.1906f };
			uParam0->f_78[0 /*17*/].f_12[0] = 110.1921f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 1601.519f, 2890.423f, 55.9619f };
			uParam0->f_78[0 /*17*/].f_12[1] = 318.1643f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 1571.932f, 3092.044f, 39.8558f };
			uParam0->f_78[0 /*17*/].f_12[2] = 297.0444f;
			uParam0->f_97 = { 768.1101f, 4080.211f, 438.6512f };
			uParam0->f_100 = 199.9345f;
			break;
		
		case 12:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 1002.517f, 4324.697f, 39.1856f };
			uParam0->f_5[0 /*18*/].f_5 = 3.4408f;
			uParam0->f_5[1 /*18*/].f_2 = { 1019.279f, 4405.163f, 42.1815f };
			uParam0->f_5[1 /*18*/].f_5 = 73.8213f;
			uParam0->f_5[2 /*18*/].f_2 = { 995.6335f, 4394.133f, 47.8651f };
			uParam0->f_5[2 /*18*/].f_5 = 355.3108f;
			uParam0->f_5[3 /*18*/].f_2 = { 972.6747f, 4352.731f, 43.7555f };
			uParam0->f_5[3 /*18*/].f_5 = 282.5687f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 1125.155f, 4429.389f, 62.2158f };
			uParam0->f_78[0 /*17*/].f_12[0] = 82.7581f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 885.6168f, 4459.245f, 50.8314f };
			uParam0->f_78[0 /*17*/].f_12[1] = 239.2189f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 993.9852f, 4460.117f, 49.8088f };
			uParam0->f_78[0 /*17*/].f_12[2] = 260.9623f;
			uParam0->f_97 = { -865.817f, 4403.578f, 604.2233f };
			uParam0->f_100 = 268.7136f;
			break;
		
		case 13:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { -1714.584f, 4954.133f, 7.2482f };
			uParam0->f_5[0 /*18*/].f_5 = 116.3591f;
			uParam0->f_5[1 /*18*/].f_2 = { -1689.055f, 4954.641f, 10.6516f };
			uParam0->f_5[1 /*18*/].f_5 = 102.0189f;
			uParam0->f_5[2 /*18*/].f_2 = { -1714.612f, 4982.892f, 7.9491f };
			uParam0->f_5[2 /*18*/].f_5 = 148.2065f;
			uParam0->f_5[3 /*18*/].f_2 = { -1733.629f, 4983.355f, 5.2886f };
			uParam0->f_5[3 /*18*/].f_5 = 172.3626f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { -1850.084f, 4774.318f, 3.2752f };
			uParam0->f_78[0 /*17*/].f_12[0] = 22.5589f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { -1582.051f, 5057.125f, 33.7903f };
			uParam0->f_78[0 /*17*/].f_12[1] = 139.2498f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { -1555.555f, 4921.68f, 60.363f };
			uParam0->f_78[0 /*17*/].f_12[2] = 307.6337f;
			uParam0->f_97 = { -688.8508f, 7607.529f, 349.1056f };
			uParam0->f_100 = 172.9232f;
			break;
		
		case 14:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { -2405.702f, 4210.707f, 10.5095f };
			uParam0->f_5[0 /*18*/].f_5 = 146.9088f;
			uParam0->f_5[1 /*18*/].f_2 = { -2382.956f, 4205.869f, 21.6201f };
			uParam0->f_5[1 /*18*/].f_5 = 121.7438f;
			uParam0->f_5[2 /*18*/].f_2 = { -2407.653f, 4137.372f, 17.563f };
			uParam0->f_5[2 /*18*/].f_5 = 35.8796f;
			uParam0->f_5[3 /*18*/].f_2 = { -2375.453f, 4184.967f, 22.8146f };
			uParam0->f_5[3 /*18*/].f_5 = 93.1919f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { -2309.195f, 4291.07f, 30.5234f };
			uParam0->f_78[0 /*17*/].f_12[0] = 139.4109f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { -2479.676f, 4007.82f, 5.868f };
			uParam0->f_78[0 /*17*/].f_12[1] = 345.5383f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { -2368.042f, 4077.419f, 30.5281f };
			uParam0->f_78[0 /*17*/].f_12[2] = 326.4518f;
			uParam0->f_97 = { -3820.056f, 4296.777f, 220.0733f };
			uParam0->f_100 = 266.5256f;
			break;
		
		case 15:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { -3131.286f, 753.4323f, 5.3342f };
			uParam0->f_5[0 /*18*/].f_5 = 94.0004f;
			uParam0->f_5[1 /*18*/].f_2 = { -3177.387f, 790.2584f, 3.0064f };
			uParam0->f_5[1 /*18*/].f_5 = 172.8542f;
			uParam0->f_5[2 /*18*/].f_2 = { -3183.727f, 787.8382f, 2.8265f };
			uParam0->f_5[2 /*18*/].f_5 = 203.5908f;
			uParam0->f_5[3 /*18*/].f_2 = { -3140.75f, 724.6806f, 1.2483f };
			uParam0->f_5[3 /*18*/].f_5 = 56.6538f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { -3116.019f, 647.4692f, 1.1468f };
			uParam0->f_78[0 /*17*/].f_12[0] = 41.7007f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { -3235.432f, 892.0785f, 2.3308f };
			uParam0->f_78[0 /*17*/].f_12[1] = 169.4398f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { -3170.898f, 944.9553f, 13.5189f };
			uParam0->f_78[0 /*17*/].f_12[2] = 181.8572f;
			uParam0->f_97 = { -3996.097f, 1914.244f, 219.9833f };
			uParam0->f_100 = 232.6708f;
			break;
		
		case 16:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { -1744.401f, -966.3932f, 6.4026f };
			uParam0->f_5[0 /*18*/].f_5 = 300.0445f;
			uParam0->f_5[1 /*18*/].f_2 = { -1721.433f, -1013.865f, 4.2361f };
			uParam0->f_5[1 /*18*/].f_5 = 124.3674f;
			uParam0->f_5[2 /*18*/].f_2 = { -1710.114f, -999.4743f, 5.1064f };
			uParam0->f_5[2 /*18*/].f_5 = 60.6101f;
			uParam0->f_5[3 /*18*/].f_2 = { -1673.702f, -992.2216f, 6.3501f };
			uParam0->f_5[3 /*18*/].f_5 = 53.7375f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { -1708.448f, -868.3484f, 7.4161f };
			uParam0->f_78[0 /*17*/].f_12[0] = 144.709f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { -1683.468f, -1047.061f, 3.2051f };
			uParam0->f_78[0 /*17*/].f_12[1] = 55.3434f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { -1619.064f, -905.6519f, 7.9512f };
			uParam0->f_78[0 /*17*/].f_12[2] = 141.2538f;
			uParam0->f_97 = { -1902.681f, -1889.568f, 114.6166f };
			uParam0->f_100 = 358.7342f;
			break;
		
		case 17:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { -813.9835f, 835.9732f, 201.4461f };
			uParam0->f_5[0 /*18*/].f_5 = 191.4548f;
			uParam0->f_5[1 /*18*/].f_2 = { -799.1475f, 838.1729f, 203.5733f };
			uParam0->f_5[1 /*18*/].f_5 = 198.4863f;
			uParam0->f_5[2 /*18*/].f_2 = { -833.4322f, 897.7642f, 212.0651f };
			uParam0->f_5[2 /*18*/].f_5 = 199.7569f;
			uParam0->f_5[3 /*18*/].f_2 = { -798.2678f, 886.1758f, 202.1105f };
			uParam0->f_5[3 /*18*/].f_5 = 143.6434f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { -739.907f, 822.6394f, 213.0717f };
			uParam0->f_78[0 /*17*/].f_12[0] = 38.4355f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { -869.4866f, 797.1853f, 189.8626f };
			uParam0->f_78[0 /*17*/].f_12[1] = 294.5416f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { -707.6155f, 897.8837f, 228.5368f };
			uParam0->f_78[0 /*17*/].f_12[2] = 178.5833f;
			uParam0->f_97 = { -2203.284f, 1580.05f, 569.6727f };
			uParam0->f_100 = 228.5565f;
			break;
		
		case 18:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { -423.9036f, 1226.663f, 324.7588f };
			uParam0->f_5[0 /*18*/].f_5 = 232.6687f;
			uParam0->f_5[1 /*18*/].f_2 = { -382.1511f, 1228.877f, 324.7606f };
			uParam0->f_5[1 /*18*/].f_5 = 156.8766f;
			uParam0->f_5[2 /*18*/].f_2 = { -385.6131f, 1187.106f, 324.7588f };
			uParam0->f_5[2 /*18*/].f_5 = 154.8572f;
			uParam0->f_5[3 /*18*/].f_2 = { -429.266f, 1214.575f, 324.7588f };
			uParam0->f_5[3 /*18*/].f_5 = 261.6925f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { -509.5673f, 1228.719f, 320.3937f };
			uParam0->f_78[0 /*17*/].f_12[0] = 165.9902f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { -321.2862f, 1201.17f, 320.5964f };
			uParam0->f_78[0 /*17*/].f_12[1] = 132.4112f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { -345.4358f, 1303.327f, 335.4418f };
			uParam0->f_78[0 /*17*/].f_12[2] = 178.3955f;
			uParam0->f_97 = { -1468.097f, 2146.756f, 764.3748f };
			uParam0->f_100 = 233.1176f;
			break;
		
		case 19:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 721.5088f, -1510.831f, 18.6862f };
			uParam0->f_5[0 /*18*/].f_5 = 196.9149f;
			uParam0->f_5[1 /*18*/].f_2 = { 753.9851f, -1520.364f, 19.5089f };
			uParam0->f_5[1 /*18*/].f_5 = 100.5212f;
			uParam0->f_5[2 /*18*/].f_2 = { 703.6952f, -1539.909f, 8.7089f };
			uParam0->f_5[2 /*18*/].f_5 = 114.8652f;
			uParam0->f_5[3 /*18*/].f_2 = { 733.1053f, -1535.687f, 18.647f };
			uParam0->f_5[3 /*18*/].f_5 = 173.8219f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 667.9203f, -1410.711f, 8.7295f };
			uParam0->f_78[0 /*17*/].f_12[0] = 196.4158f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 787.4294f, -1396.085f, 26.0718f };
			uParam0->f_78[0 /*17*/].f_12[1] = 179.2513f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 653.0773f, -1731.387f, 8.6921f };
			uParam0->f_78[0 /*17*/].f_12[2] = 354.5085f;
			uParam0->f_97 = { 2206.569f, -3593.554f, 346.688f };
			uParam0->f_100 = 50.9998f;
			break;
		
		case 20:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 1148.578f, -1295.304f, 33.6676f };
			uParam0->f_5[0 /*18*/].f_5 = 178.5031f;
			uParam0->f_5[1 /*18*/].f_2 = { 1124.733f, -1303.865f, 33.7184f };
			uParam0->f_5[1 /*18*/].f_5 = 281.0662f;
			uParam0->f_5[2 /*18*/].f_2 = { 1149.984f, -1280.695f, 33.6471f };
			uParam0->f_5[2 /*18*/].f_5 = 356.4931f;
			uParam0->f_5[3 /*18*/].f_2 = { 1155.671f, -1277.51f, 39.4394f };
			uParam0->f_5[3 /*18*/].f_5 = 134.7168f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 1175.252f, -1284.31f, 33.7757f };
			uParam0->f_78[0 /*17*/].f_12[0] = 179.5388f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 1179.979f, -1373.488f, 33.87f };
			uParam0->f_78[0 /*17*/].f_12[1] = 75.5108f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 1251.886f, -1335.891f, 34.2108f };
			uParam0->f_78[0 /*17*/].f_12[2] = 351.2707f;
			uParam0->f_97 = { 2534.776f, -1420.195f, 451.8415f };
			uParam0->f_100 = 83.05f;
			break;
		
		case 21:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 2932.422f, 790.123f, 24.9383f };
			uParam0->f_5[0 /*18*/].f_5 = 108.1342f;
			uParam0->f_5[1 /*18*/].f_2 = { 2927.758f, 769.4883f, 23.6032f };
			uParam0->f_5[1 /*18*/].f_5 = 105.6544f;
			uParam0->f_5[2 /*18*/].f_2 = { 2880.078f, 715.3883f, 30.4501f };
			uParam0->f_5[2 /*18*/].f_5 = 341.9437f;
			uParam0->f_5[3 /*18*/].f_2 = { 2896.484f, 764.3184f, 18.5266f };
			uParam0->f_5[3 /*18*/].f_5 = 326.4059f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 2636.005f, 543.1351f, 94.625f };
			uParam0->f_78[0 /*17*/].f_12[0] = 0.7481f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 2619.153f, 639.2633f, 93.4987f };
			uParam0->f_78[0 /*17*/].f_12[1] = 18.6567f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 2554.605f, 405.6805f, 107.4526f };
			uParam0->f_78[0 /*17*/].f_12[2] = 312.7786f;
			uParam0->f_97 = { 3882.837f, 1694.206f, 365.5233f };
			uParam0->f_100 = 145.8588f;
			break;
		
		case 22:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 2790.81f, 2842.266f, 35.1792f };
			uParam0->f_5[0 /*18*/].f_5 = 41.1631f;
			uParam0->f_5[1 /*18*/].f_2 = { 2796.613f, 2874.403f, 39.164f };
			uParam0->f_5[1 /*18*/].f_5 = 131.3994f;
			uParam0->f_5[2 /*18*/].f_2 = { 2778.494f, 2831.878f, 39.7195f };
			uParam0->f_5[2 /*18*/].f_5 = 35.0007f;
			uParam0->f_5[3 /*18*/].f_2 = { 2756.627f, 2855.263f, 36.8614f };
			uParam0->f_5[3 /*18*/].f_5 = 279.8899f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 2664.172f, 2850.17f, 38.4106f };
			uParam0->f_78[0 /*17*/].f_12[0] = 252.0351f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 2619.735f, 2726.488f, 40.1266f };
			uParam0->f_78[0 /*17*/].f_12[1] = 286.5096f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 2642.569f, 2948.26f, 37.3319f };
			uParam0->f_78[0 /*17*/].f_12[2] = 230.3495f;
			uParam0->f_97 = { 3896.27f, 2191.885f, 350.8098f };
			uParam0->f_100 = 74.6998f;
			break;
		
		case 23:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 2466.814f, 3784.966f, 39.9763f };
			uParam0->f_5[0 /*18*/].f_5 = 150.9192f;
			uParam0->f_5[1 /*18*/].f_2 = { 2491.589f, 3769.751f, 43.3539f };
			uParam0->f_5[1 /*18*/].f_5 = 88.8265f;
			uParam0->f_5[2 /*18*/].f_2 = { 2477.978f, 3761.751f, 40.9253f };
			uParam0->f_5[2 /*18*/].f_5 = 24.5861f;
			uParam0->f_5[3 /*18*/].f_2 = { 2450.197f, 3755.673f, 40.9738f };
			uParam0->f_5[3 /*18*/].f_5 = 67.7862f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 2310.018f, 3748.419f, 36.9374f };
			uParam0->f_78[0 /*17*/].f_12[0] = 311.6797f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 2429.797f, 3874.425f, 36.0097f };
			uParam0->f_78[0 /*17*/].f_12[1] = 142.634f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 2301.956f, 3735.456f, 36.7863f };
			uParam0->f_78[0 /*17*/].f_12[2] = 339.1366f;
			uParam0->f_97 = { 1528.498f, 5012.703f, 555.9046f };
			uParam0->f_100 = 223.5092f;
			break;
		
		case 24:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 1917.188f, 4609.002f, 37.6286f };
			uParam0->f_5[0 /*18*/].f_5 = 154.3076f;
			uParam0->f_5[1 /*18*/].f_2 = { 1932.687f, 4649.753f, 39.4995f };
			uParam0->f_5[1 /*18*/].f_5 = 244.4298f;
			uParam0->f_5[2 /*18*/].f_2 = { 1876.038f, 4609.205f, 36.2622f };
			uParam0->f_5[2 /*18*/].f_5 = 180.3719f;
			uParam0->f_5[3 /*18*/].f_2 = { 1927.87f, 4635.505f, 39.4275f };
			uParam0->f_5[3 /*18*/].f_5 = 88.5296f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 1970.517f, 4653.994f, 39.8374f };
			uParam0->f_78[0 /*17*/].f_12[0] = 148.0159f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 1797.508f, 4585.467f, 36.0648f };
			uParam0->f_78[0 /*17*/].f_12[1] = 186.4325f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 1990.042f, 4601.601f, 39.5506f };
			uParam0->f_78[0 /*17*/].f_12[2] = 117.1525f;
			uParam0->f_97 = { 3711.549f, 4878.36f, 404.1502f };
			uParam0->f_100 = 101.3695f;
			break;
		
		case 25:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 574.2339f, 2924.322f, 39.7349f };
			uParam0->f_5[0 /*18*/].f_5 = 213.2177f;
			uParam0->f_5[1 /*18*/].f_2 = { 541.8079f, 2870.406f, 42.1283f };
			uParam0->f_5[1 /*18*/].f_5 = 288.7304f;
			uParam0->f_5[2 /*18*/].f_2 = { 625.1206f, 2877.854f, 38.1618f };
			uParam0->f_5[2 /*18*/].f_5 = 87.2171f;
			uParam0->f_5[3 /*18*/].f_2 = { 598.0822f, 2930.774f, 39.914f };
			uParam0->f_5[3 /*18*/].f_5 = 321.3549f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 591.658f, 2974.451f, 39.7528f };
			uParam0->f_78[0 /*17*/].f_12[0] = 258.7779f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 521.3518f, 2887.909f, 42.3507f };
			uParam0->f_78[0 /*17*/].f_12[1] = 194.5046f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 733.1032f, 2908.255f, 46.4786f };
			uParam0->f_78[0 /*17*/].f_12[2] = 27.0771f;
			uParam0->f_97 = { -1071.609f, 2496.11f, 332.6916f };
			uParam0->f_100 = 288.7392f;
			break;
		
		case 26:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 2805.899f, -684.5618f, 2.7772f };
			uParam0->f_5[0 /*18*/].f_5 = 356.7281f;
			uParam0->f_5[1 /*18*/].f_2 = { 2792.485f, -650.1158f, 3.6368f };
			uParam0->f_5[1 /*18*/].f_5 = 212.2862f;
			uParam0->f_5[2 /*18*/].f_2 = { 2815.231f, -668.5212f, 0.2468f };
			uParam0->f_5[2 /*18*/].f_5 = 274.147f;
			uParam0->f_5[3 /*18*/].f_2 = { 2824.972f, -694.6227f, 0.5617f };
			uParam0->f_5[3 /*18*/].f_5 = 106.0981f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 2733.123f, -774.2815f, 22.6375f };
			uParam0->f_78[0 /*17*/].f_12[0] = 7.3256f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 2659.813f, -781.988f, 34.7736f };
			uParam0->f_78[0 /*17*/].f_12[1] = 191.9212f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 2669.105f, -686.0164f, 39.8963f };
			uParam0->f_78[0 /*17*/].f_12[2] = 207.926f;
			uParam0->f_97 = { 3835.905f, -1895.431f, 621.9581f };
			uParam0->f_100 = 48.6187f;
			break;
		
		case 27:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { -1725.351f, -189.919f, 57.519f };
			uParam0->f_5[0 /*18*/].f_5 = 103.1486f;
			uParam0->f_5[1 /*18*/].f_2 = { -1746.584f, -206.355f, 56.4266f };
			uParam0->f_5[1 /*18*/].f_5 = 132.9578f;
			uParam0->f_5[2 /*18*/].f_2 = { -1676.474f, -199.428f, 56.672f };
			uParam0->f_5[2 /*18*/].f_5 = 249.4169f;
			uParam0->f_5[3 /*18*/].f_2 = { -1681.592f, -165.3771f, 56.7343f };
			uParam0->f_5[3 /*18*/].f_5 = 292.0603f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { -1660.808f, -131.8831f, 58.885f };
			uParam0->f_78[0 /*17*/].f_12[0] = 92.4984f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { -1787.203f, -265.7223f, 44.2972f };
			uParam0->f_78[0 /*17*/].f_12[1] = 231.4039f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { -1603.282f, -201.1913f, 53.8901f };
			uParam0->f_78[0 /*17*/].f_12[2] = 143.5364f;
			uParam0->f_97 = { -2497.777f, -1044.295f, 247.0226f };
			uParam0->f_100 = 326.3715f;
			break;
		
		case 28:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { -519.8322f, 3036.58f, 34.8224f };
			uParam0->f_5[0 /*18*/].f_5 = 209.6163f;
			uParam0->f_5[1 /*18*/].f_2 = { -459.0498f, 2991.124f, 25.7687f };
			uParam0->f_5[1 /*18*/].f_5 = 78.439f;
			uParam0->f_5[2 /*18*/].f_2 = { -531.2136f, 2980.925f, 25.18f };
			uParam0->f_5[2 /*18*/].f_5 = 168.7811f;
			uParam0->f_5[3 /*18*/].f_2 = { -461.0627f, 3029.61f, 27.943f };
			uParam0->f_5[3 /*18*/].f_5 = 297.2584f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { -349.4192f, 2959.483f, 24.8059f };
			uParam0->f_78[0 /*17*/].f_12[0] = 100.0125f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { -405.8636f, 3068.1f, 29.4591f };
			uParam0->f_78[0 /*17*/].f_12[1] = 112.6015f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { -659.7894f, 3011.683f, 23.5569f };
			uParam0->f_78[0 /*17*/].f_12[2] = 284.9224f;
			uParam0->f_97 = { -2460.682f, 2015.017f, 839.101f };
			uParam0->f_100 = 296.1674f;
			break;
		
		case 29:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { -417.435f, 4308.393f, 63.3466f };
			uParam0->f_5[0 /*18*/].f_5 = 234.5174f;
			uParam0->f_5[1 /*18*/].f_2 = { -438.7067f, 4340.647f, 61.0735f };
			uParam0->f_5[1 /*18*/].f_5 = 278.47f;
			uParam0->f_5[2 /*18*/].f_2 = { -368.8454f, 4339.037f, 57.1845f };
			uParam0->f_5[2 /*18*/].f_5 = 77.0994f;
			uParam0->f_5[3 /*18*/].f_2 = { -393.7048f, 4374.429f, 54.2199f };
			uParam0->f_5[3 /*18*/].f_5 = 64.5219f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { -465.3588f, 4334.785f, 60.7145f };
			uParam0->f_78[0 /*17*/].f_12[0] = 227.85f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { -338.1241f, 4256.839f, 42.4494f };
			uParam0->f_78[0 /*17*/].f_12[1] = 51.2469f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { -542.6022f, 4354.644f, 64.1361f };
			uParam0->f_78[0 /*17*/].f_12[2] = 275.3314f;
			uParam0->f_97 = { -2603.97f, 4864.047f, 631.5f };
			uParam0->f_100 = 253.7774f;
			break;
		
		case 30:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { -127.9382f, -865.4045f, 32.33f };
			uParam0->f_5[0 /*18*/].f_5 = 131.1114f;
			uParam0->f_5[1 /*18*/].f_2 = { -120.4006f, -839.0247f, 43.2158f };
			uParam0->f_5[1 /*18*/].f_5 = 303.7408f;
			uParam0->f_5[2 /*18*/].f_2 = { -99.936f, -877.1848f, 43.2164f };
			uParam0->f_5[2 /*18*/].f_5 = 313.9738f;
			uParam0->f_5[3 /*18*/].f_2 = { -85.6775f, -842.2723f, 39.5395f };
			uParam0->f_5[3 /*18*/].f_5 = 126.871f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { -62.7999f, -923.7296f, 28.1789f };
			uParam0->f_78[0 /*17*/].f_12[0] = 69.7026f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { -215.8648f, -1010.772f, 28.1444f };
			uParam0->f_78[0 /*17*/].f_12[1] = 337.6824f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { -270.7842f, -887.5016f, 30.101f };
			uParam0->f_78[0 /*17*/].f_12[2] = 338.2989f;
			uParam0->f_97 = { -1532.046f, -652.9149f, 637.4343f };
			uParam0->f_100 = 262.2055f;
			uParam0->f_101 = { -133.2166f, -871.6094f, 43.2173f };
			break;
		
		case 31:
			uParam0->f_1 = { func_74(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 1109.562f, -544.2077f, 56.1076f };
			uParam0->f_5[0 /*18*/].f_5 = 174.9766f;
			uParam0->f_5[1 /*18*/].f_2 = { 1100.509f, -529.1635f, 61.9093f };
			uParam0->f_5[1 /*18*/].f_5 = 356.8412f;
			uParam0->f_5[2 /*18*/].f_2 = { 1078.51f, -554.7376f, 55.9086f };
			uParam0->f_5[2 /*18*/].f_5 = 263.975f;
			uParam0->f_5[3 /*18*/].f_2 = { 1130.424f, -565.5107f, 55.7759f };
			uParam0->f_5[3 /*18*/].f_5 = 132.5288f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 1077.153f, -428.0514f, 65.6296f };
			uParam0->f_78[0 /*17*/].f_12[0] = 169.8658f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 1176.293f, -465.3253f, 65.0413f };
			uParam0->f_78[0 /*17*/].f_12[1] = 167.1621f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 975.8554f, -567.0255f, 58.0341f };
			uParam0->f_78[0 /*17*/].f_12[2] = 307.5059f;
			uParam0->f_97 = { 1466.305f, -2052.086f, 382.5888f };
			uParam0->f_100 = 23.7138f;
			uParam0->f_101 = { 1100.461f, -546.2083f, 56.2259f };
			break;
	}
	if (MISC::IS_BIT_SET(Local_103.f_1, 11))
	{
		uParam0->f_96 = 4;
		uParam0->f_4 = 0;
	}
}

Vector3 func_74(int iParam0)//Position - 0xC68F
{
	switch (iParam0)
	{
		case 0:
			return 2312.707f, 1531.258f, 59.8792f;
		
		case 1:
			return 1069.58f, 2366.363f, 43.0396f;
		
		case 2:
			return -1979.781f, 2584.161f, 2.2587f;
		
		case 3:
			return 1915.902f, 563.9669f, 174.4925f;
		
		case 4:
			return 1458.393f, 1113.066f, 113.334f;
		
		case 5:
			return 817.5361f, 1316.57f, 362.0491f;
		
		case 6:
			return 1402.858f, -2148.418f, 57.9675f;
		
		case 7:
			return 1104.815f, -3142.335f, 4.901f;
		
		case 8:
			return 545.7347f, -3025.327f, 5.0591f;
		
		case 9:
			return 1376.037f, -740.2166f, 66.2331f;
		
		case 10:
			return 1147.162f, 126.3452f, 80.8693f;
		
		case 11:
			return 1671.232f, 3041.176f, 53.0351f;
		
		case 12:
			return 1015.599f, 4350.668f, 41.484f;
		
		case 13:
			return -1731.06f, 4959.484f, 3.8134f;
		
		case 14:
			return -2436.25f, 4181.913f, 7.7719f;
		
		case 15:
			return -3163.364f, 756.8276f, 2.1183f;
		
		case 16:
			return -1731.085f, -989.8386f, 4.4152f;
		
		case 17:
			return -799.6782f, 885.0139f, 202.1319f;
		
		case 18:
			return -401.2717f, 1211.677f, 324.9297f;
		
		case 19:
			return 728.2132f, -1532.48f, 18.7348f;
		
		case 20:
			return 1140.923f, -1285.639f, 33.6091f;
		
		case 21:
			return 2909.154f, 770.3181f, 21.1684f;
		
		case 22:
			return 2778.909f, 2853.266f, 34.7828f;
		
		case 23:
			return 2463.142f, 3769.651f, 40.328f;
		
		case 24:
			return 1888.61f, 4626.815f, 37.4665f;
		
		case 25:
			return 585.3987f, 2893.778f, 38.5297f;
		
		case 26:
			return 2811.453f, -668.671f, 1.581f;
		
		case 27:
			return -1706.013f, -183.4387f, 56.3712f;
		
		case 28:
			return -498.3305f, 3006.906f, 27.4341f;
		
		case 29:
			return -388.8584f, 4353.478f, 54.3806f;
		
		case 30:
			return -134.0402f, -869.4509f, 43.2175f;
		
		case 31:
			return 1098.246f, -544.2941f, 56.4061f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_75(var uParam0)//Position - 0xC9A1
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_76(var uParam0)//Position - 0xC9CA
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_10(uParam0, 0, 0);
		}
	}
}

void func_77()//Position - 0xC9E9
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	func_426();
	switch (Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3)
	{
		case 0:
			if (Local_103.f_180 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 1)
				{
					Global_2528542.f_238[iVar0 /*3*/] = { Local_103.f_2.f_68[iVar0 /*104*/].f_1 };
					iVar0++;
				}
				if ((func_60() && func_58()) && func_52())
				{
					if (((!MISC::IS_BIT_SET(Local_103.f_2.f_1[0 /*66*/].f_65, 1) && func_418(31, 0, 0)) && func_417(60000)) && !func_416())
					{
						if (!MISC::IS_BIT_SET(Local_103.f_1, 11))
						{
							func_415("ACD_TICKS", 1);
						}
						else
						{
							func_415("ACD_TSC0", 1);
						}
					}
					func_414();
					Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 1;
				}
			}
			break;
		
		case 1:
			func_408();
			func_407();
			iVar1 = 0;
			while (iVar1 < Local_103.f_2)
			{
				func_194(iVar1);
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_1[iVar1 /*66*/].f_1) && (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_181[iVar1 /*2*/]) || MISC::IS_BIT_SET(Local_103.f_1, 11)))
				{
					func_192(iVar1);
					func_191(iVar1);
					func_185(iVar1, Local_103.f_2.f_68[iVar1 /*104*/].f_101);
				}
				func_177(iVar1);
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_103.f_2.f_68[iVar1 /*104*/].f_1, 200f, 200f, 200f, 0, 1, 0))
				{
					func_176();
					func_118(iVar1);
					fVar2 = ((200f / 4f) * 3f);
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_103.f_2.f_68[iVar1 /*104*/].f_1, fVar2, fVar2, fVar2, 0, 1, 0))
					{
						func_98(iVar1, fVar2);
					}
				}
				else
				{
					func_78(1);
				}
				iVar1++;
			}
			if (Local_103.f_180 >= 2)
			{
				Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 2;
			}
			break;
		
		case 2:
			func_456();
			break;
	}
}

void func_78(int iParam0)//Position - 0xCBDF
{
	if (MISC::IS_BIT_SET(iLocal_422, 13))
	{
		if (func_468(PLAYER::PLAYER_ID(), 1, 1) || iParam0 == 0)
		{
			func_79(1, 1, 0);
			MISC::CLEAR_BIT(&iLocal_422, 13);
		}
	}
}

void func_79(bool bParam0, bool bParam1, bool bParam2)//Position - 0xCC1A
{
	if (bParam1)
	{
		MISC::_0x213AEB2B90CBA7AC(&(Global_2405071.f_45), &Global_2409334, 318);
	}
	else
	{
		Global_2405071.f_45 = { Global_2409334 };
		Global_2405071.f_45.f_49 = { Global_2409334.f_49 };
		Global_2405071.f_45.f_52 = Global_2409334.f_52;
		Global_2405071.f_45.f_53 = Global_2409334.f_53;
	}
	if (bParam0)
	{
		func_97();
	}
	if (!bParam2)
	{
		func_82(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0);
	}
	func_81(0);
	func_80();
}

void func_80()//Position - 0xCCBB
{
	struct<6> Var0;
	
	if (Global_2405071.f_485.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405071.f_485 = { Var0 };
	}
}

void func_81(bool bParam0)//Position - 0xCCE0
{
	if (bParam0)
	{
		Global_2405071.f_703 = 0;
	}
	else
	{
		Global_2405071.f_703 = 1;
	}
}

void func_82(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0xCD00
{
	if (bParam0)
	{
		if (func_96())
		{
			func_95();
		}
		Global_2405071.f_704.f_517 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405071.f_704.f_504 = iParam1;
		Global_2405071.f_704.f_505 = iParam2;
		Global_2405071.f_704.f_506 = iParam10;
		func_93();
		func_86(8, 0, 0, 0, 0);
		Global_2405071.f_704.f_507 = iParam11;
		Global_2405071.f_704.f_512 = iParam3;
		Global_2405071.f_704.f_513 = iParam4;
		Global_2405071.f_704.f_510 = iParam5;
		Global_2405071.f_704.f_511 = iParam6;
		Global_2405071.f_704.f_514 = iParam7;
		Global_2405071.f_704.f_515 = iParam8;
		Global_2405071.f_704.f_516 = iParam9;
		Global_2405071.f_704.f_508 = iParam12;
		Global_2405071.f_704.f_509 = iParam13;
		Global_2405071.f_1741 = 1;
	}
	else
	{
		func_83();
	}
}

void func_83()//Position - 0xCDDF
{
	if (func_96() && !func_85())
	{
		func_95();
	}
	if (func_85())
	{
		func_84();
	}
	else
	{
		func_93();
		func_86(0, 0, 0, 0, 0);
		Global_2405071.f_1741 = 0;
		Global_2405071.f_1740 = 0;
	}
}

void func_84()//Position - 0xCE27
{
	MISC::_0x213AEB2B90CBA7AC(&(Global_2405071.f_704), &(Global_2405071.f_1222), 518);
	Global_2405071.f_485 = { Global_2405071.f_491 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_517)
	{
		Global_2405071.f_1740 = 0;
	}
}

int func_85()//Position - 0xCE6F
{
	if ((Global_2405071.f_1740 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_1222.f_517) && SCRIPT::IS_THREAD_ACTIVE(Global_2405071.f_1222.f_517))
	{
		return 1;
	}
	return 0;
}

void func_86(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xCEAE
{
	if (Global_2437364.f_1893.f_690.f_16 != func_34())
	{
		if (MISC::IS_BIT_SET(Global_2424047[Global_2437364.f_1893.f_690.f_16 /*416*/].f_402, 0) && func_87())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412626 = 0;
	}
	Global_2405071.f_485 = iParam0;
	Global_2405071.f_485.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405071.f_485.f_2 = iParam1;
	Global_2405071.f_485.f_3 = iParam2;
	Global_2405071.f_485.f_4 = iParam3;
	Global_2405071.f_485.f_5 = iParam4;
}

int func_87()//Position - 0xCF4D
{
	if (((((func_91(PLAYER::PLAYER_ID()) == 229 || func_91(PLAYER::PLAYER_ID()) == 191) || func_90()) || func_89()) || func_88(PLAYER::PLAYER_ID())) || Global_2506344.f_173 == 1)
	{
		return 0;
	}
	return 1;
}

int func_88(int iParam0)//Position - 0xCFA9
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2506343;
	}
	else
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0));
		if (iVar0 == joaat("mp_m_freemode_01") || iVar0 == joaat("mp_f_freemode_01"))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

var func_89()//Position - 0xD001
{
	return Global_1574395;
}

int func_90()//Position - 0xD00D
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

int func_91(int iParam0)//Position - 0xD022
{
	if (func_92(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_92(int iParam0, int iParam1)//Position - 0xD045
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_93()//Position - 0xD080
{
	if (func_96() && !func_85())
	{
		func_95();
	}
	func_94();
	Global_2405071.f_704 = 0;
}

void func_94()//Position - 0xD0A9
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405071.f_704.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_95()//Position - 0xD0E4
{
	if (func_85())
	{
		if (Global_2405071.f_704.f_517 == Global_2405071.f_1222.f_517)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_517)
	{
		MISC::_0x213AEB2B90CBA7AC(&(Global_2405071.f_1222), &(Global_2405071.f_704), 518);
		Global_2405071.f_491 = { Global_2405071.f_485 };
		Global_2405071.f_1740 = 1;
	}
}

int func_96()//Position - 0xD152
{
	if ((Global_2405071.f_1741 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_517) && SCRIPT::IS_THREAD_ACTIVE(Global_2405071.f_704.f_517))
	{
		return 1;
	}
	return 0;
}

void func_97()//Position - 0xD191
{
	MISC::_0x213AEB2B90CBA7AC(&(Global_2405071.f_363), &Global_2409652, 121);
}

void func_98(int iParam0, float fParam1)//Position - 0xD1AA
{
	if (!MISC::IS_BIT_SET(iLocal_422, 13))
	{
		if (func_468(PLAYER::PLAYER_ID(), 1, 1))
		{
			func_115(Local_103.f_2.f_68[iParam0 /*104*/].f_1, fParam1, 0, 0, 1, 0);
			func_100(Local_103.f_2.f_68[iParam0 /*104*/].f_1, ((200f / 4f) * 2f), 0, 1);
			func_99(Local_103.f_2.f_68[iParam0 /*104*/].f_1, 1, 0);
			MISC::SET_BIT(&iLocal_422, 13);
		}
	}
}

void func_99(vector3 vParam0, int iParam3, int iParam4)//Position - 0xD21E
{
	Global_2405071.f_45.f_49 = { vParam0 };
	Global_2405071.f_45.f_52 = iParam3;
	Global_2405071.f_45.f_53 = iParam4;
}

void func_100(vector3 vParam0, float fParam3, int iParam4, int iParam5)//Position - 0xD248
{
	func_101(vParam0, 0f, 0f, 0f, fParam3, 0, iParam4, iParam5);
}

void func_101(vector3 vParam0, vector3 vParam3, var uParam6, int iParam7, int iParam8, var uParam9)//Position - 0xD262
{
	struct<12> Var0;
	
	if (func_110(PLAYER::PLAYER_ID()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_109(&vParam0, &vParam3);
		}
		Var0 = { vParam0 };
		Var0.f_3 = { vParam3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_104(Var0))
		{
			Global_2405071.f_45.f_64 = func_103(PLAYER::PLAYER_ID());
			func_102(Var0, iParam8);
		}
	}
}

void func_102(struct<12> Param0, int iParam12)//Position - 0xD2D8
{
	Global_2405071.f_363[iParam12 /*12*/] = { Param0 };
	Global_2405071.f_363[iParam12 /*12*/].f_9 = 1;
}

int func_103(int iParam0)//Position - 0xD301
{
	if (func_468(iParam0, 0, 1))
	{
		return Global_2424047[iParam0 /*416*/].f_1;
	}
	return 0;
}

int func_104(struct<12> Param0)//Position - 0xD323
{
	struct<12> Var0[1];
	int iVar13;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2405071.f_45[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_105(Global_2405071.f_45[iVar13 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_105(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0xD383
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam12)
	{
		if ((uParam12[iVar0 /*12*/])->f_9)
		{
			switch ((uParam12[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (vParam0.f_10)
					{
						case 0:
							if (func_108(vParam0, vParam0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_106(vParam0, vParam0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (vParam0.f_10)
					{
						case 0:
							if (func_108(vParam0, vParam0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_106(vParam0, vParam0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (SYSTEM::VMAG(vParam0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_106(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9)//Position - 0xD4BC
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	fVar6 = (fParam9 * 0.7071068f);
	vVar0 = { vParam6 - Vector(fVar6, fVar6, fVar6) };
	vVar3 = { vParam6 + Vector(fVar6, fVar6, fVar6) };
	return func_107(vParam0, vParam3, vVar0, vVar3);
}

int func_107(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9)//Position - 0xD500
{
	if (((((vParam0.x >= vParam6.x && vParam0.y >= vParam6.y) && vParam0.z >= vParam6.z) && vParam3.x <= vParam9.x) && vParam3.y <= vParam9.y) && vParam3.z <= vParam9.z)
	{
		return 1;
	}
	return 0;
}

int func_108(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7)//Position - 0xD557
{
	vector3 vVar0;
	
	vVar0 = { vParam4 - vParam0 };
	if ((SYSTEM::VMAG(vVar0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_109(var uParam0, var uParam1)//Position - 0xD582
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (*uParam0 <= *uParam1)
	{
		vVar0.x = *uParam0;
		vVar3.x = *uParam1;
	}
	else
	{
		vVar0.x = *uParam1;
		vVar3.x = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		vVar0.y = uParam0->f_1;
		vVar3.y = uParam1->f_1;
	}
	else
	{
		vVar0.y = uParam1->f_1;
		vVar3.y = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		vVar0.z = uParam0->f_2;
		vVar3.z = uParam1->f_2;
	}
	else
	{
		vVar0.z = uParam1->f_2;
		vVar3.z = uParam0->f_2;
	}
	*uParam0 = { vVar0 };
	*uParam1 = { vVar3 };
}

int func_110(int iParam0)//Position - 0xD619
{
	if (((func_113(iParam0, 1) || func_112(iParam0)) || func_92(iParam0, 0)) || func_111(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0)//Position - 0xD655
{
	if (!func_468(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1589819[iParam0 /*818*/].f_35;
}

int func_112(int iParam0)//Position - 0xD678
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1626536[iVar0 /*603*/] != -1;
	}
	return 0;
}

bool func_113(int iParam0, bool bParam1)//Position - 0xD699
{
	if (Global_1312448 != 0)
	{
		return func_103(iParam0) != 0;
	}
	return func_114(iParam0, bParam1);
}

int func_114(int iParam0, bool bParam1)//Position - 0xD6BF
{
	if (bParam1)
	{
		if (func_438(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589819[iParam0 /*818*/] == -1)
	{
		return 0;
	}
	return 1;
}

void func_115(vector3 vParam0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xD6EB
{
	func_116(vParam0, 0f, 0f, 0f, uParam3, 0, iParam4, iParam6, iParam5, iParam7);
}

void func_116(vector3 vParam0, vector3 vParam3, var uParam6, int iParam7, int iParam8, var uParam9, var uParam10, var uParam11)//Position - 0xD709
{
	struct<12> Var0;
	
	if (func_110(PLAYER::PLAYER_ID()) || uParam9)
	{
		if (Global_2405071.f_1741)
		{
			func_83();
		}
		if (Var0.f_10 == 1)
		{
			func_109(&vParam0, &vParam3);
		}
		Var0 = { vParam0 };
		Var0.f_3 = { vParam3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		Var0.f_11 = uParam10;
		Var0.f_8 = uParam11;
		if (Var0.f_8 < 0f)
		{
			Var0.f_8 = 0f;
		}
		Global_2405071.f_45.f_64 = func_103(PLAYER::PLAYER_ID());
		func_117(Var0, iParam8);
	}
}

void func_117(struct<12> Param0, int iParam12)//Position - 0xD798
{
	Global_2405071.f_45[iParam12 /*12*/] = { Param0 };
	Global_2405071.f_45[iParam12 /*12*/].f_9 = 1;
}

void func_118(int iParam0)//Position - 0xD7BF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_103.f_2.f_68[iParam0 /*104*/].f_96)
	{
		func_172(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/], &(Local_428[iParam0 /*33*/][iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
		func_119(iParam0, iVar0);
		iVar0++;
	}
}

void func_119(int iParam0, int iParam1)//Position - 0xD817
{
	var uVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iParam1 /*18*/]))
	{
		if (!MISC::IS_BIT_SET(uLocal_462[iParam0], (0 + iParam1)))
		{
			if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iParam1 /*18*/]), 0))
			{
				if (PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iParam1 /*18*/], &uVar0))
				{
					func_120(0, NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iParam1 /*18*/]), "XPT_KAIE", -1859646258, 2131309714, SYSTEM::ROUND((50f * Global_262145.f_4222)), 1, -1, 0, 0, 0);
					iLocal_469 += 50;
					iLocal_473++;
					MISC::SET_BIT(&(uLocal_462[iParam0]), (0 + iParam1));
				}
			}
		}
		else if (!PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_103.f_2.f_68[iParam0 /*104*/].f_5[iParam1 /*18*/])))
		{
			MISC::CLEAR_BIT(&(uLocal_462[iParam0]), (0 + iParam1));
		}
	}
}

int func_120(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0xD90C
{
	return func_121(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_121(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0xD92E
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_131(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_127(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_122(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_122(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0xD9A7
{
	vector3 vVar0;
	
	vVar0 = { func_125(iParam0, 1) };
	if (iParam0 == func_124(PLAYER::PLAYER_PED_ID()))
	{
		func_123(1);
	}
	func_127(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_123(int iParam0)//Position - 0xD9DB
{
	Global_2437364.f_1890 = iParam0;
}

int func_124(int iParam0)//Position - 0xD9EC
{
	return iParam0;
}

Vector3 func_125(int iParam0, bool bParam1)//Position - 0xD9F6
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		vVar3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_126(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
		{
			fVar6 = vVar3.z;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar7, &vVar10);
	if (bParam1)
	{
		fVar13 = (vVar10.z + 0.18f);
	}
	else
	{
		fVar13 = (vVar7.z + 0.18f);
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar6, 0f, 0f, fVar13) };
	return vVar0;
}

int func_126(int iParam0)//Position - 0xDABA
{
	return iParam0;
}

void func_127(vector3 vParam0, int iParam3, int iParam4, char* sParam5, int iParam6)//Position - 0xDAC4
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2437364.f_1289[iVar0 /*30*/].f_6 == 0 || Global_2437364.f_1289[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2437364.f_1289[iVar1 /*30*/] = { vParam0 };
			Global_2437364.f_1289[iVar1 /*30*/].f_6 = 1;
			Global_2437364.f_1289[iVar1 /*30*/].f_4 = func_130(Global_2437364.f_1289[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437364.f_1289[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2437364.f_1289[iVar1 /*30*/].f_3 = iParam3;
			Global_2437364.f_1289[iVar1 /*30*/].f_8 = iParam4;
			Global_2437364.f_1289[iVar1 /*30*/].f_9 = func_129();
			Global_2437364.f_1289[iVar1 /*30*/].f_10 = func_128();
			StringCopy(&(Global_2437364.f_1289[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2437364.f_1289[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_128()//Position - 0xDBDB
{
	if (Global_2437364.f_1890)
	{
		Global_2437364.f_1890 = 0;
		return 1;
	}
	Global_2437364.f_1890 = 0;
	return 0;
}

var func_129()//Position - 0xDC05
{
	var uVar0;
	
	uVar0 = Global_2437364.f_1892;
	Global_2437364.f_1892 = 1;
	return uVar0;
}

float func_130(vector3 vParam0, var uParam3, var uParam4)//Position - 0xDC20
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_131(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xDCB9
{
	var uVar0;
	
	uVar0 = func_132(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_132(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xDCDC
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_171(PLAYER::PLAYER_ID()) || func_170(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9526 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9526;
		}
	}
	else if (func_168() || func_166(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22647 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22647;
		}
	}
	else if (Global_262145.f_6526 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6526;
	}
	if (func_165(sParam2))
	{
	}
	if (func_164())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_162(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_161(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_159(0, &iVar1);
					break;
				
				case 3:
					func_159(1, &iVar1);
					break;
				
				case 1:
					func_156(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1680657)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_153(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_142((func_152(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_39.f_2 != -1)
				{
					func_153(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_137(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_133((func_135(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_133((func_135(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_133(int iParam0)//Position - 0xDEDA
{
	if (func_164())
	{
		Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_211.f_5 = iParam0;
		func_134(joaat("mpply_globalxp"), iParam0);
	}
}

void func_134(int iParam0, int iParam1)//Position - 0xDF05
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_135(int iParam0)//Position - 0xDF21
{
	if (iParam0 > -1)
	{
		if (func_468(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_136(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_5;
			}
		}
		else
		{
			return func_136(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_136(int iParam0)//Position - 0xDF72
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_137(int iParam0)//Position - 0xDF90
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_36(PLAYER::PLAYER_ID()) };
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_140(func_141(&Var0));
			if (iVar13 == 0)
			{
				func_139(&Global_1382581, iParam0);
				func_138(joaat("mpply_crew_local_xp_0"), Global_1382581);
			}
			else if (iVar13 == 1)
			{
				func_139(&Global_1382582, iParam0);
				func_138(joaat("mpply_crew_local_xp_1"), Global_1382582);
			}
			else if (iVar13 == 2)
			{
				func_139(&Global_1382583, iParam0);
				func_138(joaat("mpply_crew_local_xp_2"), Global_1382583);
			}
			else if (iVar13 == 3)
			{
				func_139(&Global_1382584, iParam0);
				func_138(joaat("mpply_crew_local_xp_3"), Global_1382584);
			}
			else if (iVar13 == 4)
			{
				func_139(&Global_1382585, iParam0);
				func_138(joaat("mpply_crew_local_xp_4"), Global_1382585);
			}
		}
	}
}

void func_138(int iParam0, int iParam1)//Position - 0xE064
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1382576 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1382578 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1382578 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1382579 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1382580 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1382581 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1382582 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1382583 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1382584 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1382585 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1382586 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1382587 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1382588 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1382589 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1382590 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1382591 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1382592 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_139(var uParam0, int iParam1)//Position - 0xE189
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_140(int iParam0)//Position - 0xE19A
{
	if (iParam0 == Global_1382576)
	{
		return 0;
	}
	else if (iParam0 == Global_1382577)
	{
		return 1;
	}
	else if (iParam0 == Global_1382578)
	{
		return 2;
	}
	else if (iParam0 == Global_1382579)
	{
		return 3;
	}
	else if (iParam0 == Global_1382580)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_141(var uParam0)//Position - 0xE1F7
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2458541;
		}
	}
	return Global_2458541;
}

void func_142(int iParam0, int iParam1, int iParam2)//Position - 0xE21A
{
	if (func_164())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9494 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1382702[func_151(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1382702[func_151(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9493 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9493 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_150(PLAYER::PLAYER_ID()))
		{
			Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_211.f_1 = iParam0;
			Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_211.f_6 = func_148(iParam0, 1);
		}
		func_147(639, iParam0, -1, 1);
		func_146(640, func_148(iParam0, 1), -1, 1, 0);
		Global_1382702[func_151(-1)] = iParam0;
		func_143(7, 0);
	}
}

void func_143(int iParam0, int iParam1)//Position - 0xE33B
{
	int iVar0;
	
	if (func_145(iParam0, iParam1))
	{
		iVar0 = func_144();
		Global_2458506[iVar0] = iParam0;
	}
}

int func_144()//Position - 0xE35E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2458506[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_145(int iParam0, var uParam1)//Position - 0xE393
{
	if (Global_1312855)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312867) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_146(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xE419
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_151(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_147(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xE449
{
	int iVar0;
	
	iVar0 = Global_2539502[iParam0 /*3*/][func_151(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1382642[func_151(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1382648[func_151(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1382654[func_151(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1382660[func_151(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1382618[func_151(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1382624[func_151(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1382630[func_151(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1382636[func_151(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1382594[func_151(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1382600[func_151(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1382606[func_151(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1382612[func_151(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1382666[func_151(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1382672[func_151(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1382678[func_151(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1382684[func_151(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1382690[func_151(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1382696[func_151(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1382702[func_151(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1382708[func_151(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2573513[0 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2573513[1 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2573513[2 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2573513[3 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 8956:
			Global_2573644[func_151(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1382714[func_151(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1382720[func_151(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1382726[func_151(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1382732[func_151(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2573577[0 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2573577[1 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2573577[2 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2573577[3 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2573577[4 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2573647[0 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2573647[1 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2573647[2 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2573647[3 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2573647[4 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2573663[0 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2573663[1 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2573663[2 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2573663[3 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2573663[4 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2573577[5 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2573513[4 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2573679[func_151(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2573688[func_151(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2573682[func_151(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2573691[func_151(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2573685[func_151(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2573694[func_151(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2573697[func_151(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2573577[6 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2573513[5 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2573577[7 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2573513[6 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2573577[8 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2573513[7 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2573577[9 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2573513[8 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2573577[10 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2573513[9 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2573577[11 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2573513[10 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2573577[12 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2573513[11 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2573577[13 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2573513[12 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2573577[14 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2573513[13 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2573577[15 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2573513[14 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2573577[16 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2573513[15 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2573577[17 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2573513[16 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2573513[17 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2573513[18 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2573513[19 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2573513[20 /*3*/][func_151(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2573700[func_151(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2573703[func_151(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2573706[func_151(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2573709[func_151(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2573712[func_151(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2573715[func_151(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2573718[func_151(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2573721[func_151(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2573724[func_151(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2573727[func_151(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2573730[func_151(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2573733[func_151(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2573736[func_151(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_148(int iParam0, bool bParam1)//Position - 0xED9A
{
	if (bParam1)
	{
	}
	return func_149(iParam0, 0);
}

int func_149(int iParam0, int iParam1)//Position - 0xEDAE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_289559[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_289559[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_150(int iParam0)//Position - 0xEE6D
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2437364.f_1, iParam0);
	}
	return 1;
}

int func_151(int iParam0)//Position - 0xEE92
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
		if (iVar1 > -1)
		{
			Global_2539215 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2539215 = 1;
		}
	}
	return iVar0;
}

int func_152(int iParam0)//Position - 0xEEC6
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1382702[func_151(-1)];
			}
			else if (func_150(iParam0))
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1382702[func_151(-1)];
	}
	return 0;
}

void func_153(int iParam0, int iParam1, int iParam2)//Position - 0xEF23
{
	int iVar0;
	
	iVar0 = func_155(iParam0, func_151(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_154(iParam0))
	{
		func_146(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_147(iParam0, iVar0, iParam2, 1);
	}
}

int func_154(int iParam0)//Position - 0xEF65
{
	if (Global_1382575)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 8956:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
				return 1;
				break;
			}
	}
	return 0;
}

int func_155(int iParam0, int iParam1, int iParam2)//Position - 0xF1C3
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_151(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_156(int iParam0)//Position - 0xF1F5
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_158(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_37(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_157(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_157(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_157(int iParam0, int iParam1)//Position - 0xF2E0
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_158(int iParam0, int iParam1, int iParam2)//Position - 0xF301
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 0);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 1);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 2);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 4);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 5);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 6);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 8);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 9);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 10);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 12);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 13);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 14);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_55, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_159(bool bParam0, int iParam1)//Position - 0xF4CC
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_468(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_37(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_468(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_160(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_37(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_157(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_157(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_160(int iParam0, int iParam1)//Position - 0xF5E4
{
	return SYSTEM::VDIST(func_28(iParam0), func_28(iParam1));
	return 0f;
}

int func_161(int iParam0)//Position - 0xF600
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_157(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_162(int iParam0)//Position - 0xF637
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_152(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_152(PLAYER::PLAYER_ID());
		}
	}
	if (func_163(8000, 0, 0) > 0)
	{
		if (func_163(8000, 0, 0) < (iParam0 + func_152(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_163(8000, 0, 0) - func_152(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_163(int iParam0, bool bParam1, int iParam2)//Position - 0xF69B
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_289559[iParam0];
}

int func_164()//Position - 0xF6C3
{
	return 1;
}

int func_165(char* sParam0)//Position - 0xF6CC
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_166(int iParam0)//Position - 0xF704
{
	return func_167(func_91(iParam0));
}

int func_167(int iParam0)//Position - 0xF716
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_168()//Position - 0xF730
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_30();
	}
	return func_169(Global_4456448.f_138474);
}

int func_169(int iParam0)//Position - 0xF754
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

bool func_170(int iParam0)//Position - 0xF78E
{
	return Global_2424047[iParam0 /*416*/].f_115 == 2;
}

bool func_171(int iParam0)//Position - 0xF7A3
{
	return Global_2424047[iParam0 /*416*/].f_115 == 7;
}

void func_172(var uParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0xF7B8
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		if (func_175())
		{
			Global_2437364 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_174(NETWORK::NET_TO_PED(uParam0), iParam1, 1, Global_2437364, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_174(NETWORK::NET_TO_PED(uParam0), iParam1, -1, Global_2437364, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_173(iParam1);
	}
}

void func_173(int iParam0)//Position - 0xF833
{
	bool bVar0;
	struct<8> Var1;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7, 0))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(iParam0->f_7))
			{
				HUD::_SET_PED_ENEMY_AI_BLIP(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_174(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xF8A5
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			if (iParam8 == -1)
			{
				HUD::_SET_PED_ENEMY_AI_BLIP(iParam0, 1);
			}
			else
			{
				HUD::_0xB13DCB4C6FAAD238(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			HUD::_0xE52B8E7F85D39A08(iParam0, iParam2);
			HUD::_SET_AI_BLIP_MAX_DISTANCE(iParam0, fParam6);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			HUD::_0xFCFACD0DB9D7A57D(iParam0, iParam9);
		}
		HUD::_0x0C4BBF625CA98C4E(iParam0, iParam4);
		HUD::HIDE_SPECIAL_ABILITY_LOCKON_OPERATION(iParam0, iParam5);
		*uParam1 = HUD::_0x7CD934010E115C2C(iParam0);
		if (!iParam9 == -1)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
				{
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(iParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam7);
					}
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!MISC::IS_BIT_SET(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			uParam1->f_1 = HUD::_0x56176892826A4FE8(iParam0);
			if (!MISC::IS_BIT_SET(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(iParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam7);
						}
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_175()//Position - 0xFA7A
{
	return Global_1312844;
}

void func_176()//Position - 0xFA86
{
	Global_1365612.f_2 = 1;
	Global_1365612.f_3 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 1000);
}

void func_177(int iParam0)//Position - 0xFAA6
{
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_1[iParam0 /*66*/].f_1) && Local_103.f_2.f_1[iParam0 /*66*/].f_64 == -1) && func_182())
	{
		func_178(iParam0);
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_426[iParam0]))
	{
		HUD::REMOVE_BLIP(&(iLocal_426[iParam0]));
	}
}

void func_178(int iParam0)//Position - 0xFB00
{
	if (HUD::DOES_BLIP_EXIST(iLocal_426[iParam0]))
	{
		if (func_180() || func_179())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_426[iParam0], 0);
		}
		else
		{
			HUD::SET_BLIP_DISPLAY(iLocal_426[iParam0], 4);
		}
	}
	else
	{
		iLocal_426[iParam0] = HUD::ADD_BLIP_FOR_RADIUS(Local_103.f_2.f_68[iParam0 /*104*/].f_1, 200f);
		HUD::SET_BLIP_COLOUR(iLocal_426[iParam0], 2);
		HUD::SET_BLIP_ALPHA(iLocal_426[iParam0], 220);
		HUD::_0x75A16C3DA34F1245(iLocal_426[iParam0], 0);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_426[iParam0], "ACD_BLIPR");
		if (func_180())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_426[iParam0], 0);
		}
	}
}

var func_179()//Position - 0xFBA9
{
	return Global_2416063.f_1690;
}

int func_180()//Position - 0xFBB8
{
	if (func_181(15))
	{
		return 1;
	}
	if (func_181(0))
	{
		return 1;
	}
	return 0;
}

bool func_181(int iParam0)//Position - 0xFBDA
{
	int iVar0;
	
	iVar0 = func_155(2480, -1, 0);
	return MISC::IS_BIT_SET(iVar0, iParam0);
}

int func_182()//Position - 0xFBF5
{
	if (func_184())
	{
		return 0;
	}
	if ((func_183(PLAYER::PLAYER_ID(), 1) || func_183(PLAYER::PLAYER_ID(), 2)) || Global_1589819[PLAYER::PLAYER_ID() /*818*/] == 5)
	{
		return 0;
	}
	if (!func_418(31, 0, 0))
	{
		return 0;
	}
	return 1;
}

bool func_183(int iParam0, int iParam1)//Position - 0xFC4B
{
	return MISC::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_208, iParam1);
}

int func_184()//Position - 0xFC64
{
	int iVar0;
	
	iVar0 = Global_2437364;
	if (MISC::IS_BIT_SET(Global_1625319[iVar0 /*38*/].f_14, 0) && Global_1625319[iVar0 /*38*/].f_23 == 2)
	{
		return 1;
	}
	return 0;
}

void func_185(int iParam0, vector3 vParam1)//Position - 0xFC9A
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	var uVar8;
	bool bVar11;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_1[iParam0 /*66*/].f_1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_2.f_1[iParam0 /*66*/].f_1) || (!NETWORK::_0xA1607996431332DF(Local_103.f_2.f_1[iParam0 /*66*/].f_1) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_1[iParam0 /*66*/].f_2))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_2.f_1[iParam0 /*66*/].f_2) || (!NETWORK::_0xA1607996431332DF(Local_103.f_2.f_1[iParam0 /*66*/].f_2) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					if (func_42(Local_103.f_2.f_1[iParam0 /*66*/].f_1) && func_42(Local_103.f_2.f_1[iParam0 /*66*/].f_2))
					{
						if (!MISC::IS_BIT_SET(Local_103.f_2.f_1[iParam0 /*66*/].f_65, 2) && !MISC::IS_BIT_SET(Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, (0 + iParam0)))
						{
							if (!MISC::IS_BIT_SET(Local_103.f_1, 11))
							{
								if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_181[iParam0 /*2*/]))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_181[iParam0 /*2*/]) || (!NETWORK::_0xA1607996431332DF(Local_103.f_181[iParam0 /*2*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
									{
										if (func_42(Local_103.f_181[iParam0 /*2*/]))
										{
											iVar4 = 1;
										}
									}
									iVar3 = NETWORK::NET_TO_OBJ(Local_103.f_181[iParam0 /*2*/]);
								}
							}
							else
							{
								MISC::IS_BIT_SET(Local_103.f_1, 11);
								iVar3 = NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1);
								iVar4 = 1;
							}
							if ((MISC::IS_BIT_SET(Local_103.f_2.f_1[iParam0 /*66*/].f_65, 13) && ENTITY::IS_ENTITY_STATIC(iVar3)) && iVar4 == 1)
							{
								ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1), 1);
								ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_OBJ(Local_103.f_181[iParam0 /*2*/]), 1);
								ENTITY::SET_ENTITY_VELOCITY(iVar3, 0f, 0f, 0f);
								if (func_190(vParam1, 0f, 0f, 0f, 0))
								{
									MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar3), &vVar5, &uVar8);
									if (func_49())
									{
										vVar5.x = MISC::ABSF((vVar5.x * 2f));
									}
									else
									{
										vVar5.x = -MISC::ABSF((vVar5.x * 2f));
									}
									if (func_49())
									{
										vVar5.y = MISC::ABSF((vVar5.y * 2f));
									}
									else
									{
										vVar5.y = -MISC::ABSF((vVar5.y * 2f));
									}
									vVar5.z = MISC::ABSF(vVar5.z);
									ENTITY::SET_ENTITY_COORDS(iVar3, Local_103.f_2.f_68[iParam0 /*104*/].f_1 + vVar5, 1, 0, 0, 1);
								}
								else
								{
									ENTITY::SET_ENTITY_COORDS(iVar3, vParam1, 1, 0, 0, 1);
								}
								MISC::SET_BIT(&(Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), (6 + iParam0));
								MISC::SET_BIT(&(Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), (3 + iParam0));
								MISC::SET_BIT(&(Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), (0 + iParam0));
								func_189(&(Local_103.f_2.f_1[iParam0 /*66*/].f_2));
								OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1), 0, 0);
							}
						}
						if (!MISC::IS_BIT_SET(Local_103.f_2.f_1[iParam0 /*66*/].f_65, 3) && !MISC::IS_BIT_SET(Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, (6 + iParam0)))
						{
							if (MISC::IS_BIT_SET(Local_103.f_2.f_1[iParam0 /*66*/].f_65, 11) || MISC::IS_BIT_SET(Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, (3 + iParam0)))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_2), &(Local_103.f_2.f_1[iParam0 /*66*/].f_8), &(Local_103.f_2.f_1[iParam0 /*66*/].f_22), 3))
								{
									MISC::SET_BIT(&(Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), (6 + iParam0));
									func_189(&(Local_103.f_2.f_1[iParam0 /*66*/].f_2));
									OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1), 0, 0);
								}
							}
						}
						if (!MISC::IS_BIT_SET(Local_103.f_2.f_1[iParam0 /*66*/].f_65, 11) && !MISC::IS_BIT_SET(Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, (3 + iParam0)))
						{
							if (MISC::IS_BIT_SET(Local_103.f_2.f_1[iParam0 /*66*/].f_65, 2) || MISC::IS_BIT_SET(Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, (0 + iParam0)))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_2), &(Local_103.f_2.f_1[iParam0 /*66*/].f_8), &(Local_103.f_2.f_1[iParam0 /*66*/].f_22), 3))
								{
									MISC::SET_BIT(&(Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), (3 + iParam0));
								}
							}
						}
						if (!MISC::IS_BIT_SET(Local_103.f_2.f_1[iParam0 /*66*/].f_65, 2) && !MISC::IS_BIT_SET(Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, (0 + iParam0)))
						{
							if (func_187(iParam0))
							{
								ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_2), &(Local_103.f_2.f_1[iParam0 /*66*/].f_22), &(Local_103.f_2.f_1[iParam0 /*66*/].f_8), 1000f, 0, 0, 0, 0f, 0);
								MISC::SET_BIT(&(Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), (0 + iParam0));
							}
							else
							{
								PHYSICS::SET_DAMPING(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1), 2, 0.0245f);
							}
						}
					}
				}
			}
			if (!MISC::IS_BIT_SET(Local_103.f_1, 11))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_181[iParam0 /*2*/]))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_181[iParam0 /*2*/]) || (!NETWORK::_0xA1607996431332DF(Local_103.f_181[iParam0 /*2*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
					{
						if (!MISC::IS_BIT_SET(Local_103.f_2.f_1[iParam0 /*66*/].f_65, 15) && !MISC::IS_BIT_SET(Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, (15 + iParam0)))
						{
							if (func_42(Local_103.f_181[iParam0 /*2*/]))
							{
								PHYSICS::SET_DAMPING(NETWORK::NET_TO_OBJ(Local_103.f_181[iParam0 /*2*/]), 2, 0.1f);
								if (OBJECT::HAS_OBJECT_BEEN_BROKEN(NETWORK::NET_TO_OBJ(Local_103.f_181[iParam0 /*2*/]), 0))
								{
									if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_1[iParam0 /*66*/].f_1))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_2.f_1[iParam0 /*66*/].f_1) || (!NETWORK::_0xA1607996431332DF(Local_103.f_2.f_1[iParam0 /*66*/].f_1) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
										{
											if (func_42(Local_103.f_2.f_1[iParam0 /*66*/].f_1))
											{
												ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1), 1, 1);
												OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1), 0, 0);
												if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_1[iParam0 /*66*/].f_2))
												{
													if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_2.f_1[iParam0 /*66*/].f_2) || (!NETWORK::_0xA1607996431332DF(Local_103.f_2.f_1[iParam0 /*66*/].f_2) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
													{
														func_189(&(Local_103.f_2.f_1[iParam0 /*66*/].f_2));
													}
												}
												MISC::SET_BIT(&(Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), (15 + iParam0));
											}
										}
									}
								}
								vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_103.f_181[iParam0 /*2*/]), 1) };
								if (vVar0.z < 0f)
								{
									ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_103.f_181[iParam0 /*2*/]), Local_103.f_2.f_68[iParam0 /*104*/].f_1, 1, 0, 0, 1);
								}
							}
						}
						if (!MISC::IS_BIT_SET(Local_103.f_1, 12))
						{
							if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(NETWORK::NET_TO_OBJ(Local_103.f_181[iParam0 /*2*/])) < 1f)
							{
								if (func_42(Local_103.f_181[iParam0 /*2*/]))
								{
									PHYSICS::SET_DISABLE_BREAKING(NETWORK::NET_TO_OBJ(Local_103.f_181[iParam0 /*2*/]), 1);
									PHYSICS::SET_DISABLE_FRAG_DAMAGE(NETWORK::NET_TO_OBJ(Local_103.f_181[iParam0 /*2*/]), 1);
									MISC::SET_BIT(&(Local_103.f_1), 12);
								}
							}
						}
						else if (!MISC::IS_BIT_SET(Local_103.f_1, 13))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(NETWORK::NET_TO_OBJ(Local_103.f_181[iParam0 /*2*/])))
							{
								bVar11 = true;
							}
							if (MISC::IS_BIT_SET(Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, (6 + iParam0)))
							{
								if (!ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(NETWORK::NET_TO_OBJ(Local_103.f_181[iParam0 /*2*/])) || ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(NETWORK::NET_TO_OBJ(Local_103.f_181[iParam0 /*2*/])))
								{
									if (!ENTITY::IS_ENTITY_IN_AIR(NETWORK::NET_TO_OBJ(Local_103.f_181[iParam0 /*2*/])) && ENTITY::IS_ENTITY_STATIC(NETWORK::NET_TO_OBJ(Local_103.f_181[iParam0 /*2*/])))
									{
										bVar11 = true;
									}
								}
							}
							if (bVar11)
							{
								if (func_42(Local_103.f_181[iParam0 /*2*/]))
								{
									PHYSICS::SET_DISABLE_BREAKING(NETWORK::NET_TO_OBJ(Local_103.f_181[iParam0 /*2*/]), 0);
									PHYSICS::SET_DISABLE_FRAG_DAMAGE(NETWORK::NET_TO_OBJ(Local_103.f_181[iParam0 /*2*/]), 0);
									MISC::SET_BIT(&(Local_103.f_1), 13);
								}
							}
						}
					}
				}
			}
			vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1), 1) };
			if (vVar0.z < 0f)
			{
				if (func_42(Local_103.f_2.f_1[iParam0 /*66*/].f_1))
				{
					ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1), Local_103.f_2.f_68[iParam0 /*104*/].f_1, 1, 0, 0, 1);
				}
			}
			func_186(iParam0);
		}
	}
}

void func_186(int iParam0)//Position - 0x104DC
{
	if (Local_103.f_2.f_1[iParam0 /*66*/].f_64 != -1)
	{
		if (func_42(Local_103.f_2.f_1[iParam0 /*66*/].f_1))
		{
			func_189(&(Local_103.f_2.f_1[iParam0 /*66*/].f_1));
		}
	}
}

int func_187(int iParam0)//Position - 0x10517
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!MISC::IS_BIT_SET(Local_103.f_1, 11))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_181[iParam0 /*2*/]))
		{
			if (!ENTITY::IS_ENTITY_IN_AIR(NETWORK::NET_TO_OBJ(Local_103.f_181[iParam0 /*2*/])))
			{
				bVar0 = false;
			}
			else
			{
				bVar0 = true;
			}
			if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_103.f_181[iParam0 /*2*/])))
			{
				iVar1 = 1;
			}
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(NETWORK::NET_TO_OBJ(Local_103.f_181[iParam0 /*2*/]), 0))
			{
				iVar2 = 1;
			}
		}
		if (func_188(iParam0))
		{
			iVar3 = 1;
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_181[iParam0 /*2*/]) || (!NETWORK::_0xA1607996431332DF(Local_103.f_181[iParam0 /*2*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
		{
			if (((!bVar0 || iVar1) || iVar2) || iVar3)
			{
				if (func_42(Local_103.f_181[iParam0 /*2*/]))
				{
					return 1;
				}
			}
		}
	}
	else if ((!ENTITY::IS_ENTITY_IN_AIR(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1)) || ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1))) || func_188(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_188(int iParam0)//Position - 0x10634
{
	float fVar0;
	
	fVar0 = ENTITY::GET_ENTITY_PITCH(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	fVar0 = ENTITY::GET_ENTITY_ROLL(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	return 0;
}

void func_189(var uParam0)//Position - 0x106A3
{
	var uVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		uVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&uVar0);
	}
}

bool func_190(vector3 vParam0, vector3 vParam3, bool bParam6)//Position - 0x106DC
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_191(int iParam0)//Position - 0x10723
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(iLocal_422, (1 + iParam0)))
	{
		if (MISC::IS_BIT_SET(Local_103.f_2.f_1[iParam0 /*66*/].f_65, 1) && Local_103.f_2.f_1[iParam0 /*66*/].f_64 == -1)
		{
			iVar0 = iParam0 + 1;
			if (iVar0 > (Local_103.f_2 - 1))
			{
				iVar0 = (Local_103.f_2 - 1);
			}
			if (!MISC::IS_BIT_SET(Local_103.f_2.f_1[iVar0 /*66*/].f_65, 1))
			{
				MISC::SET_BIT(&iLocal_422, (1 + iParam0));
			}
		}
	}
}

void func_192(int iParam0)//Position - 0x1079A
{
	if (func_182() && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1)))
	{
		if ((!MISC::IS_BIT_SET(Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, (9 + iParam0)) && MISC::IS_BIT_SET(Local_103.f_2.f_1[iParam0 /*66*/].f_65, 3)) && HUD::DOES_BLIP_EXIST(iLocal_424[iParam0]))
		{
			HUD::SET_BLIP_ALPHA(iLocal_424[iParam0], 255);
			HUD::_0x75A16C3DA34F1245(iLocal_424[iParam0], 1);
			MISC::SET_BIT(&(Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), (9 + iParam0));
		}
		else if (MISC::IS_BIT_SET(Local_103.f_2.f_1[iParam0 /*66*/].f_65, 1))
		{
			func_193(iParam0);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_424[iParam0]))
	{
		HUD::REMOVE_BLIP(&(iLocal_424[iParam0]));
	}
}

void func_193(int iParam0)//Position - 0x10867
{
	if (HUD::DOES_BLIP_EXIST(iLocal_424[iParam0]))
	{
		if (func_180() || func_179())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_424[iParam0], 0);
		}
		else
		{
			HUD::SET_BLIP_DISPLAY(iLocal_424[iParam0], 4);
		}
	}
	else
	{
		iLocal_424[iParam0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1));
		HUD::SET_BLIP_SCALE(iLocal_424[iParam0], 1.2f);
		HUD::SET_BLIP_SPRITE(iLocal_424[iParam0], 306);
		HUD::SET_BLIP_COLOUR(iLocal_424[iParam0], 2);
		HUD::SET_BLIP_ALPHA(iLocal_424[iParam0], 120);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_424[iParam0], "ACD_BLIPN");
		HUD::SET_BLIP_PRIORITY(iLocal_424[iParam0], 5);
		if (func_180())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_424[iParam0], 0);
		}
	}
}

void func_194(int iParam0)//Position - 0x1092B
{
	struct<14> Var0;
	
	if (!MISC::IS_BIT_SET(iLocal_423, iParam0))
	{
		if (Local_103.f_2.f_1[iParam0 /*66*/].f_64 == -1)
		{
			if (!MISC::IS_BIT_SET(Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, (12 + iParam0)))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_1[iParam0 /*66*/].f_1))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1), PLAYER::PLAYER_PED_ID()))
					{
						func_6(iParam0);
						func_4(iParam0);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Crate_Collect", NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1), "MP_CRATE_DROP_SOUNDS", 1, 15);
						func_200(iParam0);
						MISC::SET_BIT(&iLocal_423, iParam0);
						if (!MISC::IS_BIT_SET(Local_103.f_1, 11))
						{
							Var0.f_2 = 1008832087;
							func_199();
						}
						else
						{
							Var0.f_2 = 1137715566;
							func_197();
						}
						Var0.f_10 = PLAYER::PLAYER_ID();
						func_13(Var0, func_14(0));
						func_195(31, 1);
						MISC::SET_BIT(&(Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), (12 + iParam0));
					}
				}
			}
		}
		else if (Local_103.f_2.f_1[iParam0 /*66*/].f_64 == 9999)
		{
			func_6(iParam0);
			func_4(iParam0);
			MISC::SET_BIT(&iLocal_423, iParam0);
		}
		else
		{
			func_6(iParam0);
			func_4(iParam0);
			MISC::SET_BIT(&iLocal_423, iParam0);
		}
	}
}

void func_195(int iParam0, bool bParam1)//Position - 0x10A6D
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_196() /*10778*/].f_6165.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_196() /*10778*/].f_6165.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_196() /*10778*/].f_6165.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_196() /*10778*/].f_6165.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_196() /*10778*/].f_6165.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_196() /*10778*/].f_6165.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_196() /*10778*/].f_6165.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_196() /*10778*/].f_6165.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_196() /*10778*/].f_6165.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_196() /*10778*/].f_6165.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_196() /*10778*/].f_6165.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_196() /*10778*/].f_6165.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_196() /*10778*/].f_6165.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_196() /*10778*/].f_6165.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_196() /*10778*/].f_6165.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_196() /*10778*/].f_6165.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_196() /*10778*/].f_6165.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_196() /*10778*/].f_6165.f_30 = iVar0;
			break;
	}
}

int func_196()//Position - 0x10CAC
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_197()//Position - 0x10CB9
{
	int iVar0;
	
	iVar0 = func_198(46);
	Global_2414402[iVar0 /*83*/] = 46;
	StringCopy(&(Global_2414402[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_198(int iParam0)//Position - 0x10CE5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2414402[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2414402[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_199()//Position - 0x10D32
{
	int iVar0;
	
	iVar0 = func_198(45);
	Global_2414402[iVar0 /*83*/] = 45;
	StringCopy(&(Global_2414402[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

void func_200(int iParam0)//Position - 0x10D5E
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	char* sVar16;
	int iVar24;
	var uVar25;
	
	if (Local_103.f_2.f_1[iParam0 /*66*/].f_30 == 2)
	{
		Local_103.f_2.f_1[iParam0 /*66*/].f_30 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_1[iParam0 /*66*/].f_1))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1), 1) };
	}
	else
	{
		vVar2 = { func_28(PLAYER::PLAYER_ID()) };
	}
	iVar5 = func_406(PLAYER::PLAYER_PED_ID());
	if (iVar5 == joaat("weapon_unarmed") || iVar5 == joaat("weapon_flare"))
	{
		iVar5 = Global_1312415;
	}
	func_404(iVar5, 3, 1);
	if (Local_103.f_2.f_1[iParam0 /*66*/].f_30 != 8)
	{
		if (Global_262145.f_65 < 0)
		{
			iVar6 = (250 * MISC::GET_RANDOM_INT_IN_RANGE(1, 5));
		}
		else
		{
			iVar6 = Global_262145.f_65;
		}
	}
	else if (Global_262145.f_66 < 0)
	{
		iVar6 = (250 * MISC::GET_RANDOM_INT_IN_RANGE(1, 5));
	}
	else
	{
		iVar6 = Global_262145.f_66;
	}
	iVar6 = SYSTEM::ROUND((IntToFloat(iVar6) * Global_262145.f_4221));
	func_403(3);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_2.f_1[iParam0 /*66*/].f_1))
	{
		func_120(0, NETWORK::NET_TO_OBJ(Local_103.f_2.f_1[iParam0 /*66*/].f_1), "XPT_MEDIUMT", -979004785, 1022861207, iVar6, 1, -1, 0, 0, 0);
	}
	else
	{
		func_120(0, PLAYER::PLAYER_PED_ID(), "XPT_MEDIUMT", -979004785, 1022861207, iVar6, 1, -1, 0, 0, 0);
	}
	iLocal_469 = (iLocal_469 + iVar6);
	switch (Local_103.f_2.f_1[iParam0 /*66*/].f_30)
	{
		case 0:
			iVar1 = func_402(Local_103.f_2.f_1[iParam0 /*66*/].f_32, 1);
			if (iVar1 > Global_262145.f_46)
			{
				iVar1 = Global_262145.f_46;
			}
			func_354(&iVar1, 1);
			if (iVar1 > 0)
			{
				if (func_353())
				{
					func_341(563463121, iVar1, &uVar7, 0, 0, 0);
				}
				else
				{
					NETCASH::NETWORK_EARN_FROM_CRATE_DROP(iVar1);
				}
				func_340(vVar2, iVar1);
				func_339("ACD_TCONT_CX", iVar1, iVar6, 1);
				iLocal_470 = (iLocal_470 + iVar1);
				func_338(2, iLocal_470);
			}
			break;
		
		case 1:
			if (Global_262145.f_4718 == 0)
			{
				if (func_331(Local_103.f_2.f_1[iParam0 /*66*/].f_33, &iVar8))
				{
				}
			}
			else
			{
				iVar8 = Local_103.f_2.f_1[iParam0 /*66*/].f_33;
			}
			if (iVar8 == joaat("weapon_minigun"))
			{
				iVar0 = Local_103.f_2.f_1[iParam0 /*66*/].f_32 * 200;
			}
			else
			{
				iVar0 = (Local_103.f_2.f_1[iParam0 /*66*/].f_32 * WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iVar8, 1));
			}
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iVar8, iVar0, 1);
			func_327("ACD_TCONT_XW", func_328(iVar8, 0), iVar6, 1);
			break;
		
		case 8:
			iVar1 = func_402(Local_103.f_2.f_1[iParam0 /*66*/].f_32, 1);
			if (iVar1 > Global_262145.f_42)
			{
				iVar1 = Global_262145.f_42;
			}
			func_354(&iVar1, 1);
			if (iVar1 > 0)
			{
				if (func_353())
				{
					func_341(563463121, iVar1, &uVar9, 0, 0, 0);
				}
				else
				{
					NETCASH::NETWORK_EARN_FROM_CRATE_DROP(iVar1);
				}
				func_340(vVar2, iVar1);
				iLocal_470 = (iLocal_470 + iVar1);
				func_338(2, iLocal_470);
			}
			if (Local_103.f_2.f_1[iParam0 /*66*/].f_33 != 0)
			{
				if (Local_103.f_2.f_1[iParam0 /*66*/].f_33 != joaat("weapon_minigun"))
				{
					iVar0 = (Global_262145.f_39 * WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), Local_103.f_2.f_1[iParam0 /*66*/].f_33, 1));
				}
				else
				{
					iVar0 = Global_262145.f_39 * 300;
				}
				WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Local_103.f_2.f_1[iParam0 /*66*/].f_33, iVar0, 1);
			}
			func_326();
			iLocal_483 = 1;
			iVar11 = -1;
			iVar12 = -1;
			if (func_64(PLAYER::PLAYER_ID()))
			{
				iVar11 = Local_103.f_2.f_1[iParam0 /*66*/].f_34;
				iVar12 = Local_103.f_2.f_1[iParam0 /*66*/].f_35;
			}
			else
			{
				iVar11 = Local_103.f_2.f_1[iParam0 /*66*/].f_36;
				iVar12 = Local_103.f_2.f_1[iParam0 /*66*/].f_37;
			}
			if (func_324(iVar11, iVar12))
			{
				iVar10 = 1;
			}
			if (iVar10 == 0)
			{
				iVar13 = 0;
				while (iVar13 < 3 && iVar10 == 0)
				{
					iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
					if (func_64(PLAYER::PLAYER_ID()))
					{
						iVar11 = Local_103.f_2.f_1[iParam0 /*66*/].f_38[iVar14];
						iVar12 = Local_103.f_2.f_1[iParam0 /*66*/].f_43[iVar14];
					}
					else
					{
						iVar11 = Local_103.f_2.f_1[iParam0 /*66*/].f_48[iVar14];
						iVar12 = Local_103.f_2.f_1[iParam0 /*66*/].f_53[iVar14];
					}
					if (func_324(iVar11, iVar12))
					{
						iVar10 = 1;
					}
					iVar13++;
				}
			}
			if (iVar10 == 0)
			{
				iVar15 = 0;
				while (iVar15 < 4)
				{
					if (func_64(PLAYER::PLAYER_ID()))
					{
						iVar11 = Local_103.f_2.f_1[iParam0 /*66*/].f_38[iVar15];
						iVar12 = Local_103.f_2.f_1[iParam0 /*66*/].f_43[iVar15];
					}
					else
					{
						iVar11 = Local_103.f_2.f_1[iParam0 /*66*/].f_48[iVar15];
						iVar12 = Local_103.f_2.f_1[iParam0 /*66*/].f_53[iVar15];
					}
					if (func_324(iVar11, iVar12))
					{
						iVar10 = 1;
						iVar15 = 4;
					}
					iVar15++;
				}
			}
			if (iVar10 == 0)
			{
				iVar12 = -99;
			}
			iVar24 = func_212(iVar11, iVar12, &sVar16);
			switch (iVar24)
			{
				case 0:
					func_211("ACD_TCONT_CXWA", func_328(Local_103.f_2.f_1[iParam0 /*66*/].f_33, 0), iVar1, iVar6, 1);
					break;
				
				case 1:
					func_206("ACD_TCONT_CXWAC", func_328(Local_103.f_2.f_1[iParam0 /*66*/].f_33, 0), &sVar16, iVar1, iVar6, 1);
					break;
				
				case 2:
					func_206("ACD_TCONT_CXWAC", func_328(Local_103.f_2.f_1[iParam0 /*66*/].f_33, 0), &sVar16, iVar1, iVar6, 1);
					break;
			}
			func_153(1252, 1, -1);
			if (func_205(9, -1) == 0)
			{
				func_204(9, 1, -1);
			}
			break;
		
		default:
			iVar1 = func_402(Local_103.f_2.f_1[iParam0 /*66*/].f_32, 1);
			func_354(&iVar1, 1);
			if (iVar1 > 0)
			{
				if (func_353())
				{
					func_341(563463121, iVar1, &uVar25, 0, 0, 0);
				}
				else
				{
					NETCASH::NETWORK_EARN_FROM_CRATE_DROP(iVar1);
				}
				func_340(vVar2, iVar1);
				func_339("ACD_TCONT_CX", iVar1, iVar6, 1);
				iLocal_470 = (iLocal_470 + iVar1);
				func_338(2, iLocal_470);
			}
			break;
	}
	func_201(50, 1, -1);
}

void func_201(int iParam0, int iParam1, int iParam2)//Position - 0x1136A
{
	int iVar0;
	
	iVar0 = func_203(iParam0, func_151(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_202(iParam0, iVar0, iParam2);
}

void func_202(int iParam0, int iParam1, int iParam2)//Position - 0x11391
{
	int iVar0;
	
	iVar0 = Global_2572886[iParam0 /*3*/][func_151(iParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, 1);
}

int func_203(int iParam0, int iParam1)//Position - 0x113B5
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2572886[iParam0 /*3*/][func_151(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_204(int iParam0, int iParam1, int iParam2)//Position - 0x113E1
{
	int iVar0;
	
	iVar0 = Global_2573223[iParam0 /*3*/][func_151(iParam2)];
	STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
}

int func_205(int iParam0, int iParam1)//Position - 0x11405
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2573223[iParam0 /*3*/][func_151(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_206(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x11431
{
	int iVar0;
	
	iVar0 = -1;
	HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
	func_207(13, sParam0, 1, sParam1, iParam3, iParam4, 0, 0f, 0, sParam2, 0, 0);
	return iVar0;
}

void func_207(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x1147A
{
	int iVar0;
	
	if ((!func_210() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_24(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_208(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1665914.f_5[iVar0 /*53*/] = iParam0;
		Global_1665914.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1665914.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1665914.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1665914.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1665914.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1665914.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_208(int iParam0)//Position - 0x11582
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1665914 - 1))
	{
		if (iParam0 > Global_1665914.f_5[iVar0 /*53*/].f_1)
		{
			func_209(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1665914++;
	if (Global_1665914 > 5)
	{
		Global_1665914 = 5;
		return Global_1665914;
	}
	return (Global_1665914 - 1);
}

void func_209(int iParam0)//Position - 0x115E4
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1665914.f_5[iVar0 /*53*/] = { Global_1665914.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_210()//Position - 0x1161D
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

int func_211(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1162E
{
	int iVar0;
	
	iVar0 = -1;
	HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
	func_207(10, sParam0, 1, sParam1, iParam2, iParam3, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_212(int iParam0, int iParam1, var uParam2)//Position - 0x11670
{
	int iVar0;
	struct<4> Var1;
	struct<14> Var14;
	bool bVar28;
	
	iVar0 = 0;
	Var14 = { func_283(func_323(), iParam0, iParam1, -1) };
	bVar28 = false;
	if ((iParam0 == 10 && iParam1 != -1) && iParam1 > 129)
	{
		if (func_64(PLAYER::PLAYER_ID()))
		{
			if (func_275(&Var1, iParam1, 3, PLAYER::PLAYER_PED_ID(), -1))
			{
				bVar28 = true;
			}
		}
		else if (func_275(&Var1, iParam1, 4, PLAYER::PLAYER_PED_ID(), -1))
		{
			bVar28 = true;
		}
	}
	if (bVar28)
	{
		func_246(iParam1, 1, 0, 1, 0, -1);
		func_245(MISC::GET_HASH_KEY(&Var1));
		MemCopy(uParam2, {Var1}, 8);
		iVar0 = 1;
	}
	else if (((((iParam0 != -1 && (iParam0 != 10 || !bVar28)) && iParam1 != -1) && iParam1 != -99) && func_244(func_323(), iParam0, iParam1)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Var14.f_8)))
	{
		func_221(func_323(), iParam0, iParam1, 1, 1);
		func_245(MISC::GET_HASH_KEY(&(Var14.f_8)));
		MemCopy(uParam2, {Var14.f_8}, 8);
		func_213(MISC::GET_HASH_KEY(&(Var14.f_8)));
		iVar0 = 2;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_213(int iParam0)//Position - 0x11797
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_353())
	{
		return 1;
	}
	if (func_220())
	{
		func_216();
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_4264078[iVar0] == -1)
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 == -1)
	{
		return 0;
	}
	iVar2 = func_215(iParam0);
	if (iVar2 != 2)
	{
		func_146(func_214(iVar1), iVar2, -1, 1, 0);
		Global_4264078[iVar1] = 1;
		return 1;
	}
	return 0;
}

int func_214(int iParam0)//Position - 0x11813
{
	switch (iParam0)
	{
		case 0:
			return 3192;
			break;
		
		case 1:
			return 3193;
			break;
		
		case 2:
			return 3194;
			break;
		
		case 3:
			return 3195;
			break;
	}
	return 3192;
}

int func_215(int iParam0)//Position - 0x11861
{
	switch (iParam0)
	{
		case 1751120680:
			return 1884872695;
			break;
	}
	return 2;
}

void func_216()//Position - 0x11882
{
	int iVar0;
	int iVar1;
	
	if (!func_219(188, -1))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			func_146(func_214(iVar0), 2, -1, 1, 0);
			Global_4264078[iVar0] = -1;
			iVar0++;
		}
		func_217(188, 1, -1, 1);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (Global_4264078[iVar0] == 0)
			{
				iVar1 = func_155(func_214(iVar0), -1, 0);
				if (iVar1 != 2)
				{
					Global_4264078[iVar0] = 1;
				}
				else
				{
					Global_4264078[iVar0] = -1;
				}
			}
			iVar0++;
		}
	}
}

void func_217(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x11911
{
	int iVar0;
	
	if (func_218())
	{
		iVar0 = Global_2571340[iParam0 /*3*/][func_151(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_218()//Position - 0x11943
{
	return 1;
	return 0;
}

int func_219(int iParam0, int iParam1)//Position - 0x11950
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2571340[iParam0 /*3*/][func_151(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_220()//Position - 0x1197C
{
	return (1 && Global_4264078[0] == 0);
}

int func_221(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x11993
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar24;
	int iVar34;
	int iVar35;
	int iVar36;
	var uVar37;
	var uVar54;
	int iVar64;
	int iVar65;
	int iVar66[2];
	struct<2> Var69;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89[2];
	struct<2> Var92;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	struct<2> Var113;
	int iVar130;
	int iVar131;
	int iVar132;
	
	Global_71402[1 /*14*/] = { func_283(iParam0, iParam1, iParam2, -1) };
	if (MISC::IS_BIT_SET(Global_71402[1 /*14*/].f_6, 0))
	{
		if (MISC::IS_BIT_SET(Global_71402[1 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				if (bParam3)
				{
					func_243(Global_2621444, 1, 1, 1, -1);
				}
				else
				{
					func_241(Global_2621444, 1, 1, 1, -1);
				}
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				if (bParam3)
				{
					func_243(Global_2621444, 1, 1, 1, -1);
				}
				else
				{
					func_241(Global_2621444, 1, 1, 1, -1);
				}
			}
			else if (bParam3)
			{
				func_243(Global_2621444, 1, 1, 1, -1);
			}
			else
			{
				func_241(Global_2621444, 1, 1, 1, -1);
			}
			if (iParam4 == 1 && bParam3 == 1)
			{
				iVar0 = FILES::_0xC17AD0E5752BECDA(Global_2621444);
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					FILES::GET_VARIANT_COMPONENT(Global_2621444, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar2 != 0 && iVar2 != 1849449579)
					{
						func_243(iVar2, 1, 1, 1, -1);
					}
					else
					{
						func_221(iParam0, func_240(iVar4), uVar3, 1, 0);
					}
					iVar1++;
				}
			}
			if (iParam1 == 12)
			{
				uVar7 = { func_237(iParam0, iParam2) };
				iVar5 = 0;
				while (iVar5 <= 14)
				{
					if ((uVar7[iVar5] != -99 && iVar5 != 12) && iVar5 != 14)
					{
						if (iVar5 != 13)
						{
							func_221(iParam0, iVar5, uVar7[iVar5], 1, 1);
							func_234(iParam0, iVar5, uVar7[iVar5], 1, 0);
						}
						else
						{
							uVar24 = { func_231(iParam0, uVar7[iVar5]) };
							iVar6 = 0;
							while (iVar6 <= 8)
							{
								if (uVar24[iVar6] >= 10)
								{
									func_221(iParam0, 14, uVar24[iVar6], 1, 1);
									func_234(iParam0, 14, uVar24[iVar6], 1, 0);
								}
								iVar6++;
							}
						}
					}
					iVar5++;
				}
			}
		}
		else
		{
			if (iParam1 != 5)
			{
				iVar34 = func_155(func_230(iParam1, Global_71402[1 /*14*/].f_2), Global_71399, 0);
				if (bParam3)
				{
					MISC::SET_BIT(&iVar34, Global_71402[1 /*14*/].f_1);
				}
				else
				{
					MISC::CLEAR_BIT(&iVar34, Global_71402[1 /*14*/].f_1);
				}
				func_146(func_230(iParam1, Global_71402[1 /*14*/].f_2), iVar34, Global_71399, 1, 0);
			}
			if (iParam1 == 12)
			{
				uVar37 = { func_237(iParam0, iParam2) };
				iVar35 = 0;
				while (iVar35 <= 14)
				{
					if ((uVar37[iVar35] != -99 && iVar35 != 12) && iVar35 != 14)
					{
						if (iVar35 != 13)
						{
							func_221(iParam0, iVar35, uVar37[iVar35], 1, 1);
							func_234(iParam0, iVar35, uVar37[iVar35], 1, 0);
						}
						else
						{
							uVar54 = { func_231(iParam0, uVar37[iVar35]) };
							iVar36 = 0;
							while (iVar36 <= 8)
							{
								func_221(iParam0, 14, uVar54[iVar36], 1, 1);
								func_234(iParam0, 14, uVar54[iVar36], 1, 0);
								iVar36++;
							}
						}
					}
					iVar35++;
				}
			}
			if (iParam4 == 1 && bParam3 == 1)
			{
				if (iParam0 == joaat("mp_m_freemode_01"))
				{
					if (iParam1 == 14)
					{
						if (iParam2 >= 83 && iParam2 <= 90)
						{
							iVar64 = (75 + Global_71402[1 /*14*/].f_4);
							func_221(iParam0, 14, iVar64, 1, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar64 = (83 + Global_71402[1 /*14*/].f_4);
							func_221(iParam0, 14, iVar64, 1, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar64 = (64 + Global_71402[1 /*14*/].f_4);
							func_221(iParam0, 8, iVar64, 1, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar64 = (48 + Global_71402[1 /*14*/].f_4);
							func_221(iParam0, 8, iVar64, 1, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar64 = (112 + Global_71402[1 /*14*/].f_4);
							func_221(iParam0, 8, iVar64, 1, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar64 = (96 + Global_71402[1 /*14*/].f_4);
							func_221(iParam0, 8, iVar64, 1, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar64 = (160 + Global_71402[1 /*14*/].f_4);
							func_221(iParam0, 8, iVar64, 1, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar64 = (176 + Global_71402[1 /*14*/].f_4);
							func_221(iParam0, 8, iVar64, 1, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar64 = (0 + Global_71402[1 /*14*/].f_4);
							func_221(iParam0, 11, iVar64, 1, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar64 = (16 + Global_71402[1 /*14*/].f_4);
							func_221(iParam0, 11, iVar64, 1, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar64 = (32 + Global_71402[1 /*14*/].f_4);
							func_221(iParam0, 8, iVar64, 1, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar64 = (224 + Global_71402[1 /*14*/].f_4);
							func_221(iParam0, 8, iVar64, 1, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									iVar66[0] = -783649692;
									iVar66[1] = 691352495;
									break;
								
								case 221:
									iVar66[0] = 1313566316;
									iVar66[1] = 451909412;
									break;
								
								case 222:
									iVar66[0] = 1552550633;
									iVar66[1] = -206550874;
									break;
								
								case 223:
									iVar66[0] = 860928119;
									iVar66[1] = -445797343;
									break;
								
								case 224:
									iVar66[0] = 1107219923;
									iVar66[1] = -173716332;
									break;
								
								case 225:
									iVar66[0] = -2017140386;
									iVar66[1] = -538304226;
									break;
								
								case 226:
									iVar66[0] = -1235599732;
									iVar66[1] = -592242000;
									break;
								
								case 227:
									iVar66[0] = 1815489089;
									iVar66[1] = -831095241;
									break;
								
								case 228:
									iVar66[0] = 2062043045;
									iVar66[1] = -1092100326;
									break;
								
								case 229:
									iVar66[0] = -1065332020;
									iVar66[1] = -1465994616;
									break;
								
								case 230:
									iVar66[0] = -1516536717;
									iVar66[1] = 507503642;
									break;
								
								case 231:
									iVar66[0] = -1470397961;
									iVar66[1] = -1392082519;
									break;
								
								case 232:
									iVar66[0] = 264425668;
									iVar66[1] = -88859389;
									break;
								
								case 233:
									iVar66[0] = 560755735;
									iVar66[1] = 157858412;
									break;
								
								case 234:
									iVar66[0] = -593565059;
									iVar66[1] = -513152401;
									break;
								
								case 235:
									iVar66[0] = -286945526;
									iVar66[1] = 2004948615;
									break;
							}
							FILES::INIT_SHOP_PED_COMPONENT(&Var69);
							iVar88 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(3, 7, -1, 0, -1, 8);
							iVar86 = 0;
							while (iVar86 < iVar88)
							{
								FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar86, &Var69);
								if (!FILES::_IS_DLC_DATA_EMPTY(Var69))
								{
									if (Var69.f_1 == iVar66[0] || Var69.f_1 == iVar66[1])
									{
										func_221(iParam0, 8, (241 + iVar87), 1, 0);
									}
									iVar87++;
								}
								iVar86++;
							}
						}
						else if (iParam2 >= 188 && iParam2 <= 203)
						{
							switch (iParam2)
							{
								case 188:
									iVar89[0] = -1319425641;
									iVar89[1] = -1739646902;
									break;
								
								case 189:
									iVar89[0] = -1019622060;
									iVar89[1] = -1357494824;
									break;
								
								case 190:
									iVar89[0] = 1745491702;
									iVar89[1] = 1466340978;
									break;
								
								case 191:
									iVar89[0] = 133748437;
									iVar89[1] = 1689596175;
									break;
								
								case 192:
									iVar89[0] = 431159881;
									iVar89[1] = 2055363753;
									break;
								
								case 193:
									iVar89[0] = -1408327934;
									iVar89[1] = -2008549324;
									break;
								
								case 194:
									iVar89[0] = -1395416948;
									iVar89[1] = 504177600;
									break;
								
								case 195:
									iVar89[0] = 755638519;
									iVar89[1] = 870797172;
									break;
								
								case 196:
									iVar89[0] = 1053279346;
									iVar89[1] = 1094380059;
									break;
								
								case 197:
									iVar89[0] = 1360193800;
									iVar89[1] = -687139395;
									break;
								
								case 198:
									iVar89[0] = 1515149778;
									iVar89[1] = 1859221515;
									break;
								
								case 199:
									iVar89[0] = 1830748017;
									iVar89[1] = 707489472;
									break;
								
								case 200:
									iVar89[0] = 778666503;
									iVar89[1] = -209845914;
									break;
								
								case 201:
									iVar89[0] = 1130015721;
									iVar89[1] = 1007948429;
									break;
								
								case 202:
									iVar89[0] = -1793274004;
									iVar89[1] = 1306572326;
									break;
								
								case 203:
									iVar89[0] = -1549112185;
									iVar89[1] = 1627839602;
									break;
							}
							FILES::INIT_SHOP_PED_COMPONENT(&Var92);
							iVar111 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(3, 7, -1, 0, -1, 8);
							iVar109 = 0;
							while (iVar109 < iVar111)
							{
								FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar109, &Var92);
								if (!FILES::_IS_DLC_DATA_EMPTY(Var92))
								{
									if (Var92.f_1 == iVar89[0] || Var92.f_1 == iVar89[1])
									{
										func_221(iParam0, 8, (241 + iVar110), 1, 0);
									}
									iVar110++;
								}
								iVar109++;
							}
						}
					}
					else if (iParam1 == 7)
					{
						if (iParam2 >= 41 && iParam2 <= 56)
						{
							switch (Global_71402[2 /*14*/].f_4)
							{
								case 0:
									func_221(iParam0, 7, func_229(iParam0, -1893758670, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, 221276858, 7, 3), 1, 0);
									break;
								
								case 1:
									func_221(iParam0, 7, func_229(iParam0, -1596052305, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, 576886046, 7, 3), 1, 0);
									break;
								
								case 2:
									func_221(iParam0, 7, func_229(iParam0, 1233059274, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, -392978047, 7, 3), 1, 0);
									break;
								
								case 3:
									func_221(iParam0, 7, func_229(iParam0, 232228476, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, -33764269, 7, 3), 1, 0);
									break;
								
								case 4:
									func_221(iParam0, 7, func_229(iParam0, -454445919, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, 1510704243, 7, 3), 1, 0);
									break;
								
								case 5:
									func_221(iParam0, 7, func_229(iParam0, 925653285, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, 1800939276, 7, 3), 1, 0);
									break;
								
								case 6:
									func_221(iParam0, 7, func_229(iParam0, -2104856604, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, 833565623, 7, 3), 1, 0);
									break;
								
								case 7:
									func_221(iParam0, 7, func_229(iParam0, 1657483366, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, 1201823645, 7, 3), 1, 0);
									break;
								
								case 8:
									func_221(iParam0, 7, func_229(iParam0, 501294735, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, 2132496022, 7, 3), 1, 0);
									break;
								
								case 9:
									func_221(iParam0, 7, func_229(iParam0, 1882573627, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, -1939019463, 7, 3), 1, 0);
									break;
								
								case 10:
									func_221(iParam0, 7, func_229(iParam0, 206035418, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, 1713491273, 7, 3), 1, 0);
									break;
								
								case 11:
									func_221(iParam0, 7, func_229(iParam0, -642943834, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, -156668318, 7, 3), 1, 0);
									break;
								
								case 12:
									func_221(iParam0, 7, func_229(iParam0, -388295935, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, 106696135, 7, 3), 1, 0);
									break;
								
								case 13:
									func_221(iParam0, 7, func_229(iParam0, 927641567, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, -802905767, 7, 3), 1, 0);
									break;
								
								case 14:
									func_221(iParam0, 7, func_229(iParam0, 1147226636, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, -505527092, 7, 3), 1, 0);
									break;
								
								case 15:
									func_221(iParam0, 7, func_229(iParam0, 312665744, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, -1144129332, 7, 3), 1, 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_71402[2 /*14*/].f_4)
							{
								case 0:
									func_221(iParam0, 7, func_229(iParam0, -335266079, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, -925989020, 7, 3), 1, 0);
									break;
								
								case 1:
									func_221(iParam0, 7, func_229(iParam0, -1379548555, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, 244486895, 7, 3), 1, 0);
									break;
								
								case 2:
									func_221(iParam0, 7, func_229(iParam0, -1402159165, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, 1095104597, 7, 3), 1, 0);
									break;
								
								case 3:
									func_221(iParam0, 7, func_229(iParam0, 1357351098, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, 1787874026, 7, 3), 1, 0);
									break;
								
								case 4:
									func_221(iParam0, 7, func_229(iParam0, -1097178082, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, 476163725, 7, 3), 1, 0);
									break;
								
								case 5:
									func_221(iParam0, 7, func_229(iParam0, -179482237, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, 1223952305, 7, 3), 1, 0);
									break;
								
								case 6:
									func_221(iParam0, 7, func_229(iParam0, -750514831, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, 2049796643, 7, 3), 1, 0);
									break;
								
								case 7:
									func_221(iParam0, 7, func_229(iParam0, -1724573356, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, -1013547784, 7, 3), 1, 0);
									break;
								
								case 8:
									func_221(iParam0, 7, func_229(iParam0, 94106144, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, 1456972664, 7, 3), 1, 0);
									break;
								
								case 9:
									func_221(iParam0, 7, func_229(iParam0, 1070524041, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, -1670762848, 7, 3), 1, 0);
									break;
								
								case 10:
									func_221(iParam0, 7, func_229(iParam0, -1644577318, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, 1428867383, 7, 3), 1, 0);
									break;
								
								case 11:
									func_221(iParam0, 7, func_229(iParam0, 1865900118, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, -1664165762, 7, 3), 1, 0);
									break;
								
								case 12:
									func_221(iParam0, 7, func_229(iParam0, 1611776523, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, -1962101510, 7, 3), 1, 0);
									break;
								
								case 13:
									func_221(iParam0, 7, func_229(iParam0, 1381115532, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, -1270511757, 7, 3), 1, 0);
									break;
								
								case 14:
									func_221(iParam0, 7, func_229(iParam0, 1636484345, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, -1571626106, 7, 3), 1, 0);
									break;
								
								case 15:
									func_221(iParam0, 7, func_229(iParam0, 1422633851, 7, 3), 1, 0);
									func_221(iParam0, 7, func_229(iParam0, -698332248, 7, 3), 1, 0);
									break;
								}
							}
					}
				}
				else if (iParam0 == joaat("mp_f_freemode_01"))
				{
					if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar64 = (16 + Global_71402[1 /*14*/].f_4);
							func_221(iParam0, 8, iVar64, 1, 0);
						}
					}
				}
				Global_71402[1 /*14*/] = { func_283(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar65 = func_228(iParam0, iParam2, Global_71402[1 /*14*/].f_4);
					if (iVar65 != -99)
					{
						func_221(iParam0, 8, iVar65, 1, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								iVar112 = 331193219;
								break;
							
							case 200:
								iVar112 = 1115060468;
								break;
							
							case 201:
								iVar112 = 779636984;
								break;
						}
						FILES::INIT_SHOP_PED_COMPONENT(&Var113);
						iVar132 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(4, 7, -1, 0, -1, 8);
						iVar130 = 0;
						while (iVar130 < iVar132)
						{
							FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar130, &Var113);
							if (!FILES::_IS_DLC_DATA_EMPTY(Var113))
							{
								if (Var113.f_1 == iVar112)
								{
									func_221(iParam0, 8, (136 + iVar131), 1, 0);
									iVar130 = iVar132 + 1;
								}
								iVar131++;
							}
							iVar130++;
						}
					}
				}
				else if (iParam1 == 8)
				{
					iVar65 = func_226(iParam0, iParam2, Global_71402[1 /*14*/].f_4);
					if (iVar65 != -99)
					{
						func_221(iParam0, 11, iVar65, 1, 0);
					}
				}
			}
			if (bParam3)
			{
				if (iParam0 == joaat("mp_m_freemode_01"))
				{
					if ((((((((((((((((((((((Global_2621444 == 2039172785 || Global_2621444 == 1160537588) || Global_2621444 == 896976521) || Global_2621444 == -560326439) || Global_2621444 == 273939532) || Global_2621444 == -67054682) || Global_2621444 == -1381058813) || Global_2621444 == -1755018641) || Global_2621444 == -953521670) || Global_2621444 == -1193685671) || Global_2621444 == -476429380) || Global_2621444 == -178460863) || Global_2621444 == 117967511) || Global_2621444 == 415346186) || Global_2621444 == 1616428343) || Global_2621444 == 722883251) || Global_2621444 == 1948542158) || Global_2621444 == 1307121752) || Global_2621444 == 1778798742) || Global_2621444 == 2092496379) || Global_2621444 == 305799771) || Global_2621444 == 6422187) || FILES::_0x341DE7ED1D2A1BFD(Global_2621444, 351511157, 0))
					{
						if (func_223(26965, -1, -1))
						{
						}
						else
						{
							func_222(26965, 1, -1, 1);
						}
					}
				}
				else if (iParam0 == joaat("mp_f_freemode_01"))
				{
					if ((((((((((((((((((((((Global_2621444 == 1738597343 || Global_2621444 == 861371237) || Global_2621444 == 87793454) || Global_2621444 == -948690016) || Global_2621444 == 398476343) || Global_2621444 == 1006800055) || Global_2621444 == 1181065597) || Global_2621444 == 275756438) || Global_2621444 == 1624757857) || Global_2621444 == -1532338679) || Global_2621444 == 1676863966) || Global_2621444 == 942117448) || Global_2621444 == 1184214820) || Global_2621444 == 482663299) || Global_2621444 == 771423727) || Global_2621444 == -476255948) || Global_2621444 == -245627726) || Global_2621444 == -923192339) || Global_2621444 == -689877059) || Global_2621444 == -1400669438) || Global_2621444 == -1735798333) || Global_2621444 == 1647371530) || FILES::_0x341DE7ED1D2A1BFD(Global_2621444, 351511157, 0))
					{
						if (func_223(26965, -1, -1))
						{
						}
						else
						{
							func_222(26965, 1, -1, 1);
						}
					}
				}
			}
		}
		return 1;
	}
	return 0;
}

int func_222(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x12F82
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	if (iParam2 == -1)
	{
		iParam2 = func_26();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar20, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_223(int iParam0, int iParam1, int iParam2)//Position - 0x13538
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	iVar1 = func_225(iParam0, iParam1);
	uVar2 = func_224(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_224(int iParam0)//Position - 0x13575
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
	}
	return iVar0;
}

int func_225(int iParam0, int iParam1)//Position - 0x138B9
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	return iVar0;
}

int func_226(int iParam0, int iParam1, int iParam2)//Position - 0x13BDC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = -99;
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = 124;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = 140;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 207)
		{
			iVar0 = 188;
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 204;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 240)
		{
			iVar0 = 236;
		}
		else if (iParam1 >= 241)
		{
			iVar1 = func_227(iParam0, iParam1, 8, 3);
			if (iVar1 != -1)
			{
				iVar2 = FILES::_0xC17AD0E5752BECDA(iVar1);
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					FILES::GET_VARIANT_COMPONENT(iVar1, iVar3, &iVar4, &iVar5, &iVar6);
					if (iVar6 == 11)
					{
						if (iVar4 != 0 && iVar4 != 1849449579)
						{
							iVar0 = func_229(iParam0, iVar4, 11, 3);
							return iVar0;
						}
						else
						{
							iVar0 = iVar5;
							return iVar0;
						}
					}
					iVar3++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 32)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 33)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 49)
		{
			iVar0 = 64;
		}
		else if (iParam1 <= 65)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 66)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 67)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 68)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 69)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 70)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 86)
		{
			iVar0 = 176;
		}
		else if (iParam1 <= 102)
		{
			iVar0 = 192;
		}
		else if (iParam1 <= 118)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 119)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 135)
		{
			iVar0 = 240;
		}
		else if (iParam1 >= 136)
		{
			iVar7 = func_227(iParam0, iParam1, 8, 4);
			if (iVar7 != -1)
			{
				iVar8 = FILES::_0xC17AD0E5752BECDA(iVar7);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					FILES::GET_VARIANT_COMPONENT(iVar7, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 11)
					{
						if (iVar10 != 0 && iVar10 != 1849449579)
						{
							iVar0 = func_229(iParam0, iVar10, 11, 4);
							return iVar0;
						}
						else
						{
							iVar0 = iVar11;
							return iVar0;
						}
					}
					iVar9++;
				}
			}
		}
	}
	if (iVar0 != -99)
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_227(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x13ED3
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var0);
		iVar18 = 0;
		iVar19 = (iParam1 - func_67(iParam0));
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 7, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			FILES::GET_SHOP_PED_QUERY_PROP(iVar17, &Var0);
			if (!FILES::_IS_DLC_DATA_EMPTY(Var0))
			{
				if (iVar18 == iVar19)
				{
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var21);
		iVar39 = 0;
		iVar40 = (iParam1 - func_68(iParam0, func_69(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_71524.f_26[iParam2] && iParam1 == Global_71524[iParam2]) && Global_71524.f_13[iParam2] != 0)
		{
			return Global_71524.f_13[iParam2];
		}
		iVar41 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 7, -1, 0, -1, func_69(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar38, &Var21);
			if (!FILES::_IS_DLC_DATA_EMPTY(Var21))
			{
				if (iVar39 == iVar40)
				{
					Global_71524.f_13[iParam2] = Var21.f_1;
					Global_71524[iParam2] = iParam1;
					Global_71524.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

int func_228(int iParam0, int iParam1, int iParam2)//Position - 0x14030
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = -99;
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 107)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 123)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 139)
		{
			iVar0 = 128;
		}
		else if (iParam1 <= 155)
		{
			iVar0 = 144;
		}
		else if (iParam1 <= 171)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 187)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 203)
		{
			iVar0 = 192;
		}
		else if (iParam1 <= 219)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 235)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 236)
		{
			iVar0 = 240;
		}
		else if (iParam1 >= 237)
		{
			iVar1 = func_227(iParam0, iParam1, 11, 3);
			if (iVar1 != -1)
			{
				iVar2 = FILES::_0xC17AD0E5752BECDA(iVar1);
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					FILES::GET_VARIANT_COMPONENT(iVar1, iVar3, &iVar4, &iVar5, &iVar6);
					if (iVar6 == 8)
					{
						if (iVar4 != 0 && iVar4 != 1849449579)
						{
							iVar0 = func_229(iParam0, iVar4, 8, 3);
						}
						else
						{
							iVar0 = iVar5;
						}
						iVar3 = iVar2 + 1;
					}
					iVar3++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = 34;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 50;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = 71;
		}
		else if (iParam1 <= 207)
		{
			iVar0 = 87;
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 103;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 255)
		{
			iVar0 = 120;
		}
		else if (iParam1 >= 256)
		{
			iVar7 = func_227(iParam0, iParam1, 11, 4);
			if (iVar7 != -1)
			{
				iVar8 = FILES::_0xC17AD0E5752BECDA(iVar7);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					FILES::GET_VARIANT_COMPONENT(iVar7, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 8)
					{
						if (iVar10 != 0 && iVar10 != 1849449579)
						{
							iVar0 = func_229(iParam0, iVar10, 8, 4);
						}
						else
						{
							iVar0 = iVar11;
						}
						iVar9 = iVar8 + 1;
					}
					iVar9++;
				}
			}
		}
	}
	if (iVar0 != -99)
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_229(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x14325
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var0);
		iVar18 = 0;
		iVar19 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 7, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			FILES::GET_SHOP_PED_QUERY_PROP(iVar17, &Var0);
			if (!FILES::_IS_DLC_DATA_EMPTY(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_67(iParam0) + iVar18);
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var20);
		iVar38 = 0;
		iVar39 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 7, -1, 0, -1, func_69(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar37, &Var20);
			if (!FILES::_IS_DLC_DATA_EMPTY(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_68(iParam0, func_69(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_230(int iParam0, int iParam1)//Position - 0x14405
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 927;
					break;
				
				case 3:
					return 1414;
					break;
				
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 9:
					return 1423;
					break;
				
				case 10:
					return 1425;
					break;
				
				case 1:
					return 959;
					break;
				
				case 7:
					return 1426;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
				
				case 12:
					return 978;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 975;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
	}
	return 935;
}

struct<10> func_231(int iParam0, int iParam1)//Position - 0x14800
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_233(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_233(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_233(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_233(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_233(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_233(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_233(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_233(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_233(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_233(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_233(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_232(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_233(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_233(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_233(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_233(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_233(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_233(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_233(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_233(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_233(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_233(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_232(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_233(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_233(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_233(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_233(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_233(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_233(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_233(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_233(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_233(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_233(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_232(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_233(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_233(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_233(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_233(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_233(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_233(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_233(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_233(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_233(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_233(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_233(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_233(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_233(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_233(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_233(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_233(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_233(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_233(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_233(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_233(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_233(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_233(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_233(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_233(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_233(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_233(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_232(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_233(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_233(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_233(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_233(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_233(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_233(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_233(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_233(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_233(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_233(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_233(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_233(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_233(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_233(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_233(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_233(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_233(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_233(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_233(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_233(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_233(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_233(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_233(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_233(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_233(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_232(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_232(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1512F
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar16;
	int iVar19;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		FILES::GET_SHOP_PED_OUTFIT(iParam2, &Var1);
		if (!FILES::_IS_DLC_DATA_EMPTY(Var1))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (FILES::_0xA9F9C2E0FDE11CBB(Var1.f_1, iVar19, &vVar16) && vVar16.z != -1)
				{
					if ((vVar16.x != 0 && vVar16.x != -1) && vVar16.x != 1849449579)
					{
						(*iParam0)[vVar16.z] = func_229(iParam1, vVar16.x, 14, iVar0);
					}
					else if (vVar16.y != -1)
					{
						(*iParam0)[vVar16.z] = vVar16.y;
					}
				}
				iVar19++;
			}
		}
	}
}

void func_233(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x15259
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

int func_234(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x152A1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	Global_71402[1 /*14*/] = { func_283(iParam0, iParam1, iParam2, -1) };
	Global_71400++;
	if (MISC::IS_BIT_SET(Global_71402[1 /*14*/].f_6, 0) && !MISC::IS_BIT_SET(Global_71402[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			if (((((iParam1 == 4 || iParam1 == 11) || iParam1 == 6) || iParam1 == 0) || iParam1 == 14) || iParam1 == 7)
			{
				func_147(1236, Global_1382732[func_151(-1)] + 1, -1, 1);
			}
			if (iParam1 == 1)
			{
				func_153(1242, 1, -1);
			}
		}
		else
		{
			if (((((iParam1 == 4 || iParam1 == 11) || iParam1 == 6) || iParam1 == 0) || iParam1 == 14) || iParam1 == 7)
			{
				func_147(1236, (Global_1382732[func_151(-1)] - 1), -1, 1);
			}
			if (iParam1 == 1)
			{
				func_153(1242, -1, -1);
			}
		}
		if (iParam1 != 5)
		{
			iVar0 = func_155(func_236(iParam1, Global_71402[1 /*14*/].f_2), Global_71399, 0);
			if (bParam3)
			{
				MISC::SET_BIT(&iVar0, Global_71402[1 /*14*/].f_1);
			}
			else
			{
				MISC::CLEAR_BIT(&iVar0, Global_71402[1 /*14*/].f_1);
			}
			func_146(func_236(iParam1, Global_71402[1 /*14*/].f_2), iVar0, Global_71399, 1, 0);
		}
		if (bParam4)
		{
			if (func_235(iParam1, Global_71402[1 /*14*/].f_2, &iVar1))
			{
				iVar2 = func_155(iVar1, Global_71399, 0);
				MISC::SET_BIT(&iVar2, Global_71402[1 /*14*/].f_1);
				func_146(iVar1, iVar2, Global_71399, 1, 0);
			}
		}
		if (Global_71400 == 1 && bParam3 == 1)
		{
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 == 14)
				{
					if (iParam2 >= 83 && iParam2 <= 90)
					{
						iVar3 = (75 + Global_71402[1 /*14*/].f_4);
						func_234(iParam0, 14, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 75 && iParam2 <= 82)
					{
						iVar3 = (83 + Global_71402[1 /*14*/].f_4);
						func_234(iParam0, 14, iVar3, 1, bParam4);
					}
				}
				else if (iParam1 == 8)
				{
					if (iParam2 >= 48 && iParam2 <= 63)
					{
						iVar3 = (64 + Global_71402[1 /*14*/].f_4);
						func_234(iParam0, 8, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 64 && iParam2 <= 79)
					{
						iVar3 = (48 + Global_71402[1 /*14*/].f_4);
						func_234(iParam0, 8, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 96 && iParam2 <= 111)
					{
						iVar3 = (112 + Global_71402[1 /*14*/].f_4);
						func_234(iParam0, 8, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 112 && iParam2 <= 127)
					{
						iVar3 = (96 + Global_71402[1 /*14*/].f_4);
						func_234(iParam0, 8, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 176 && iParam2 <= 191)
					{
						iVar3 = (160 + Global_71402[1 /*14*/].f_4);
						func_234(iParam0, 8, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 160 && iParam2 <= 175)
					{
						iVar3 = (176 + Global_71402[1 /*14*/].f_4);
						func_234(iParam0, 8, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 32 && iParam2 <= 47)
					{
						iVar3 = (0 + Global_71402[1 /*14*/].f_4);
						func_234(iParam0, 11, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 224 && iParam2 <= 239)
					{
						iVar3 = (16 + Global_71402[1 /*14*/].f_4);
						func_234(iParam0, 11, iVar3, 1, bParam4);
					}
				}
				else if (iParam1 == 11)
				{
					if (iParam2 >= 0 && iParam2 <= 15)
					{
						iVar3 = (32 + Global_71402[1 /*14*/].f_4);
						func_234(iParam0, 8, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 16 && iParam2 <= 31)
					{
						iVar3 = (224 + Global_71402[1 /*14*/].f_4);
						func_234(iParam0, 8, iVar3, 1, bParam4);
					}
				}
			}
			else if (iParam0 == joaat("mp_f_freemode_01"))
			{
				if (iParam1 == 11)
				{
					if (iParam2 >= 0 && iParam2 <= 15)
					{
						iVar3 = (16 + Global_71402[1 /*14*/].f_4);
						func_234(iParam0, 8, iVar3, 1, bParam4);
					}
				}
			}
			Global_71402[1 /*14*/] = { func_283(iParam0, iParam1, iParam2, -1) };
			if (iParam1 == 11)
			{
				iVar4 = func_228(iParam0, iParam2, Global_71402[1 /*14*/].f_4);
				if (iVar4 != -99)
				{
					func_234(iParam0, 8, iVar4, 1, bParam4);
				}
			}
			else if (iParam1 == 8)
			{
				iVar4 = func_226(iParam0, iParam2, Global_71402[1 /*14*/].f_4);
				if (iVar4 != -99)
				{
					func_234(iParam0, 11, iVar4, 1, bParam4);
				}
			}
		}
		Global_71400 = (Global_71400 - 1);
		return 1;
	}
	Global_71400 = (Global_71400 - 1);
	return 0;
}

bool func_235(int iParam0, int iParam1, var uParam2)//Position - 0x157A6
{
	*uParam2 = 978;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 979;
					break;
				
				case 3:
					*uParam2 = 1429;
					break;
				
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 9:
					*uParam2 = 1438;
					break;
				
				case 10:
					*uParam2 = 1440;
					break;
				
				case 1:
					*uParam2 = 1011;
					break;
				
				case 7:
					*uParam2 = 1441;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
				
				case 12:
					*uParam2 = 1030;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
	}
	return *uParam2 != 978;
}

int func_236(int iParam0, int iParam1)//Position - 0x15BAB
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 875;
					break;
				
				case 3:
					return 1399;
					break;
				
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 9:
					return 1408;
					break;
				
				case 10:
					return 1410;
					break;
				
				case 1:
					return 907;
					break;
				
				case 7:
					return 1411;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
				
				case 12:
					return 926;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 923;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
	}
	return 883;
}

struct<17> func_237(int iParam0, int iParam1)//Position - 0x15FA6
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_106565.f_9079.f_99.f_58[120])
					{
						func_239(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_239(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_239(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_239(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_239(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_239(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_239(&Var1, -99, -99, Global_106565.f_2357.f_539.f_196[0], Global_106565.f_2357.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_239(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_239(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_239(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_239(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_239(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_239(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_239(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_239(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_239(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_239(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_239(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_239(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_239(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_239(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_239(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_239(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_239(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_239(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_239(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_239(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_239(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_239(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_239(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_239(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_239(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_239(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_239(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_239(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_239(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_239(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_239(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_239(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_239(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_239(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_239(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_239(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_239(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_239(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_239(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_239(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_239(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_239(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_239(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_239(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_239(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_239(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_239(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_238(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_239(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_239(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_239(&Var1, -99, -99, Global_106565.f_2357.f_539.f_196[1], Global_106565.f_2357.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_239(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_239(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_239(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_239(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_239(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_239(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_239(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_239(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_239(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_239(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_239(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_239(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_239(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_239(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_239(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_239(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_239(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_239(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_239(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_239(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_239(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_239(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_239(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_239(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_239(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_239(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_239(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_239(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_239(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_239(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_239(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_239(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_239(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_239(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_239(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_239(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_239(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_239(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_239(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_239(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_239(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_239(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_239(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_239(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_238(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_239(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_239(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_239(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_239(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_239(&Var1, -99, -99, Global_106565.f_2357.f_539.f_196[2], Global_106565.f_2357.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_239(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_239(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_239(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_239(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_239(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_239(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_239(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_239(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_239(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_239(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_239(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_239(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_239(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_239(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_239(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_239(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_239(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_239(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_239(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_239(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_239(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_239(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_239(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_239(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_239(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_239(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_239(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_239(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_239(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_239(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_239(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_239(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_239(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_239(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_239(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_239(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_239(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_239(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_239(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_239(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_239(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_239(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_239(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_238(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_239(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_239(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_239(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_239(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_239(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_239(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_239(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_239(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_239(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_239(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_239(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_239(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_239(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_239(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_239(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_239(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_239(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_239(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_239(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_239(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_239(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_239(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_239(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_239(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_239(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_239(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_238(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_239(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_239(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_239(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_239(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_239(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_239(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_239(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_239(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_239(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_239(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_239(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_239(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_239(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_239(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_239(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_239(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_239(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_239(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_239(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_239(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_239(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_239(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_239(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_239(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_239(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_239(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_239(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_239(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_238(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_238(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x17DEE
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar16;
	struct<2> Var19;
	int iVar36;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	FILES::_0xF3FBE2D50A6A8C28(iVar0, 0);
	FILES::GET_SHOP_PED_QUERY_OUTFIT((iParam2 - iParam3), &Var1);
	if (!FILES::_IS_DLC_DATA_EMPTY(Var1))
	{
		iVar36 = 0;
		while (iVar36 < Var1.f_4)
		{
			if (FILES::_GET_PROP_FROM_OUTFIT(Var1.f_1, iVar36, &vVar16))
			{
				if ((vVar16.x != 0 && vVar16.x != -1) && vVar16.x != 1849449579)
				{
					if (vVar16.z == 10)
					{
						FILES::INIT_SHOP_PED_COMPONENT(&Var19);
						FILES::GET_SHOP_PED_COMPONENT(vVar16.x, &Var19);
						if (vVar16.x != Var19.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (vVar16.z == 10 && uParam0->f_16)
					{
						(*uParam0)[func_240(vVar16.z)] = vVar16.x;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_240(vVar16.z)] = func_229(iParam1, vVar16.x, func_240(vVar16.z), iVar0);
					}
				}
				else if (vVar16.y != -1)
				{
					(*uParam0)[func_240(vVar16.z)] = vVar16.y;
				}
			}
			iVar36++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

void func_239(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x17FD8
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

int func_240(int iParam0)//Position - 0x1804B
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_241(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x180FB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_71399;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_242(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_155(iVar2, iVar0, 0);
		MISC::CLEAR_BIT(&iVar3, iVar1);
		func_146(iVar2, iVar3, iVar0, 1, 0);
	}
}

bool func_242(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x18145
{
	int iVar0;
	
	*uParam2 = 10383;
	if ((bParam4 && Global_4266643) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
					
					case -1071423629:
					case -1382822784:
					case 385813134:
						*uParam2 = 935;
						*uParam3 = 0;
						return 1;
						break;
					
					case -833094692:
					case -1731353868:
					case 675392787:
						*uParam2 = 935;
						*uParam3 = 1;
						return 1;
						break;
					
					case -1836153782:
					case -1960638561:
					case -238272479:
						*uParam2 = 935;
						*uParam3 = 2;
						return 1;
						break;
					
					case -1598414687:
					case 147161830:
					case 67757212:
						*uParam2 = 935;
						*uParam3 = 3;
						return 1;
						break;
					
					case 123661793:
					case -92608943:
					case -536372072:
						*uParam2 = 935;
						*uParam3 = 4;
						return 1;
						break;
					
					case 330958487:
					case -162931217:
					case -247578875:
						*uParam2 = 935;
						*uParam3 = 5;
						return 1;
						break;
					
					case -142717408:
					case 1665087452:
					case -854821214:
						*uParam2 = 935;
						*uParam3 = 7;
						return 1;
						break;
					
					case 1290696959:
					case 1012984348:
					case -1458295118:
						*uParam2 = 935;
						*uParam3 = 8;
						return 1;
						break;
					
					case 2059568454:
					case 933072050:
					case -1454802604:
						*uParam2 = 935;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4266643)
		{
			iVar0 = PED::_0x1E77FA7A62EE6C4C(iParam0);
		}
		else
		{
			iVar0 = PED::_0xF033419D1B81FAE8(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = PED::_0x1E77FA7A62EE6C4C(iParam0);
	}
	else
	{
		iVar0 = PED::_0xF033419D1B81FAE8(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1759;
					break;
				
				case 1:
					*uParam2 = 1760;
					break;
				
				case 2:
					*uParam2 = 1761;
					break;
				
				case 3:
					*uParam2 = 1762;
					break;
				
				case 4:
					*uParam2 = 1763;
					break;
				
				case 5:
					*uParam2 = 1764;
					break;
				
				case 6:
					*uParam2 = 1771;
					break;
				
				case 7:
					*uParam2 = 1772;
					break;
				
				case 8:
					*uParam2 = 1773;
					break;
				
				case 9:
					*uParam2 = 1774;
					break;
				
				case 10:
					*uParam2 = 1775;
					break;
				
				case 11:
					*uParam2 = 1776;
					break;
				
				case 12:
					*uParam2 = 1777;
					break;
				
				case 13:
					*uParam2 = 1785;
					break;
				
				case 14:
					*uParam2 = 1786;
					break;
				
				case 15:
					*uParam2 = 1887;
					break;
				
				case 16:
					*uParam2 = 1888;
					break;
				
				case 17:
					*uParam2 = 1919;
					break;
				
				case 18:
					*uParam2 = 1933;
					break;
				
				case 19:
					*uParam2 = 1934;
					break;
				
				case 20:
					*uParam2 = 1935;
					break;
				
				case 21:
					*uParam2 = 1936;
					break;
				
				case 22:
					*uParam2 = 1937;
					break;
				
				case 23:
					*uParam2 = 2041;
					break;
				
				case 24:
					*uParam2 = 2042;
					break;
				
				case 25:
					*uParam2 = 2068;
					break;
				
				case 26:
					*uParam2 = 2069;
					break;
				
				case 27:
					*uParam2 = 2070;
					break;
				
				case 28:
					*uParam2 = 2071;
					break;
				
				case 29:
					*uParam2 = 2072;
					break;
				
				case 30:
					*uParam2 = 2073;
					break;
				
				case 31:
					*uParam2 = 2074;
					break;
				
				case 32:
					*uParam2 = 2075;
					break;
				
				case 33:
					*uParam2 = 2076;
					break;
				
				case 34:
					*uParam2 = 2077;
					break;
				
				case 35:
					*uParam2 = 2324;
					break;
				
				case 36:
					*uParam2 = 2325;
					break;
				
				case 37:
					*uParam2 = 2389;
					break;
				
				case 38:
					*uParam2 = 2390;
					break;
				
				case 39:
					*uParam2 = 2391;
					break;
				
				case 40:
					*uParam2 = 2392;
					break;
				
				case 41:
					*uParam2 = 2451;
					break;
				
				case 42:
					*uParam2 = 2452;
					break;
				
				case 43:
					*uParam2 = 2453;
					break;
				
				case 44:
					*uParam2 = 2454;
					break;
				
				case 45:
					*uParam2 = 2455;
					break;
				
				case 46:
					*uParam2 = 2456;
					break;
				
				case 47:
					*uParam2 = 2457;
					break;
				
				case 48:
					*uParam2 = 2458;
					break;
				
				case 49:
					*uParam2 = 2459;
					break;
				
				case 50:
					*uParam2 = 2460;
					break;
				
				case 51:
					*uParam2 = 2589;
					break;
				
				case 52:
					*uParam2 = 2590;
					break;
				
				case 53:
					*uParam2 = 2591;
					break;
				
				case 54:
					*uParam2 = 2592;
					break;
				
				case 55:
					*uParam2 = 2593;
					break;
				
				case 56:
					*uParam2 = 2594;
					break;
				
				case 57:
					*uParam2 = 2595;
					break;
				
				case 58:
					*uParam2 = 2596;
					break;
				
				case 59:
					*uParam2 = 2597;
					break;
				
				case 60:
					*uParam2 = 2598;
					break;
				
				case 61:
					*uParam2 = 2599;
					break;
				
				case 62:
					*uParam2 = 3196;
					break;
				
				case 63:
					*uParam2 = 3197;
					break;
				
				case 64:
					*uParam2 = 3198;
					break;
				
				case 65:
					*uParam2 = 3199;
					break;
				
				case 66:
					*uParam2 = 3200;
					break;
				
				case 67:
					*uParam2 = 3201;
					break;
				
				case 68:
					*uParam2 = 3669;
					break;
				
				case 69:
					*uParam2 = 3670;
					break;
				
				case 70:
					*uParam2 = 3671;
					break;
				
				case 71:
					*uParam2 = 3672;
					break;
				
				case 72:
					*uParam2 = 3673;
					break;
				
				case 73:
					*uParam2 = 3674;
					break;
				
				case 74:
					*uParam2 = 3675;
					break;
				
				case 75:
					*uParam2 = 3676;
					break;
				
				case 76:
					*uParam2 = 3677;
					break;
				
				case 77:
					*uParam2 = 3678;
					break;
				
				case 78:
					*uParam2 = 3792;
					break;
				
				case 79:
					*uParam2 = 3793;
					break;
				
				case 80:
					*uParam2 = 3794;
					break;
				
				case 81:
					*uParam2 = 3795;
					break;
				
				case 82:
					*uParam2 = 3796;
					break;
				
				case 83:
					*uParam2 = 3797;
					break;
				
				case 84:
					*uParam2 = 3798;
					break;
				
				case 85:
					*uParam2 = 3799;
					break;
				
				case 86:
					*uParam2 = 3902;
					break;
				
				case 87:
					*uParam2 = 3903;
					break;
				
				case 88:
					*uParam2 = 3904;
					break;
				
				case 89:
					*uParam2 = 5337;
					break;
				
				case 90:
					*uParam2 = 5338;
					break;
				
				case 91:
					*uParam2 = 5339;
					break;
				
				case 92:
					*uParam2 = 5340;
					break;
				
				case 93:
					*uParam2 = 5341;
					break;
				
				case 94:
					*uParam2 = 5342;
					break;
				
				case 95:
					*uParam2 = 5343;
					break;
				
				case 96:
					*uParam2 = 5344;
					break;
				
				case 97:
					*uParam2 = 5345;
					break;
				
				case 98:
					*uParam2 = 5346;
					break;
				
				case 99:
					*uParam2 = 5347;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5348;
					break;
				
				case 101:
					*uParam2 = 5394;
					break;
				
				case 102:
					*uParam2 = 5395;
					break;
				
				case 103:
					*uParam2 = 5396;
					break;
				
				case 104:
					*uParam2 = 5397;
					break;
				
				case 105:
					*uParam2 = 5398;
					break;
				
				case 106:
					*uParam2 = 5399;
					break;
				
				case 107:
					*uParam2 = 5400;
					break;
				
				case 108:
					*uParam2 = 5401;
					break;
				
				case 109:
					*uParam2 = 5402;
					break;
				
				case 110:
					*uParam2 = 5403;
					break;
				
				case 111:
					*uParam2 = 5404;
					break;
				
				case 112:
					*uParam2 = 5405;
					break;
				
				case 113:
					*uParam2 = 5406;
					break;
				
				case 114:
					*uParam2 = 5407;
					break;
				
				case 115:
					*uParam2 = 5408;
					break;
				
				case 116:
					*uParam2 = 5409;
					break;
				
				case 117:
					*uParam2 = 5410;
					break;
				
				case 118:
					*uParam2 = 5411;
					break;
				
				case 119:
					*uParam2 = 5412;
					break;
				
				case 120:
					*uParam2 = 5413;
					break;
				
				case 121:
					*uParam2 = 5414;
					break;
				
				case 122:
					*uParam2 = 5415;
					break;
				
				case 123:
					*uParam2 = 5416;
					break;
				
				case 124:
					*uParam2 = 6122;
					break;
				
				case 125:
					*uParam2 = 6123;
					break;
				
				case 126:
					*uParam2 = 6124;
					break;
				
				case 127:
					*uParam2 = 6125;
					break;
				
				case 128:
					*uParam2 = 6126;
					break;
				
				case 129:
					*uParam2 = 6127;
					break;
				
				case 130:
					*uParam2 = 6128;
					break;
				
				case 131:
					*uParam2 = 6129;
					break;
				
				case 132:
					*uParam2 = 6130;
					break;
				
				case 133:
					*uParam2 = 6131;
					break;
				
				case 134:
					*uParam2 = 6132;
					break;
				
				case 135:
					*uParam2 = 6133;
					break;
				
				case 136:
					*uParam2 = 6134;
					break;
				
				case 137:
					*uParam2 = 6135;
					break;
				
				case 138:
					*uParam2 = 6136;
					break;
				
				case 139:
					*uParam2 = 6435;
					break;
				
				case 140:
					*uParam2 = 6436;
					break;
				
				case 141:
					*uParam2 = 6437;
					break;
				
				case 142:
					*uParam2 = 6438;
					break;
				
				case 143:
					*uParam2 = 6439;
					break;
				
				case 144:
					*uParam2 = 6440;
					break;
				
				case 145:
					*uParam2 = 6441;
					break;
				
				case 146:
					*uParam2 = 6442;
					break;
				
				case 147:
					*uParam2 = 6443;
					break;
				
				case 148:
					*uParam2 = 6444;
					break;
				
				case 149:
					*uParam2 = 6445;
					break;
				
				case 150:
					*uParam2 = 6446;
					break;
				
				case 151:
					*uParam2 = 6447;
					break;
				
				case 152:
					*uParam2 = 6448;
					break;
				
				case 153:
					*uParam2 = 6449;
					break;
				
				case 154:
					*uParam2 = 7266;
					break;
				
				case 155:
					*uParam2 = 7267;
					break;
				
				case 156:
					*uParam2 = 7268;
					break;
				
				case 157:
					*uParam2 = 7269;
					break;
				
				case 158:
					*uParam2 = 7270;
					break;
				
				case 159:
					*uParam2 = 7271;
					break;
				
				case 160:
					*uParam2 = 7272;
					break;
				
				case 161:
					*uParam2 = 7879;
					break;
				
				case 162:
					*uParam2 = 7880;
					break;
				
				case 163:
					*uParam2 = 7881;
					break;
				
				case 164:
					*uParam2 = 7882;
					break;
				
				case 165:
					*uParam2 = 7883;
					break;
				
				case 166:
					*uParam2 = 7884;
					break;
				
				case 167:
					*uParam2 = 7885;
					break;
				
				case 168:
					*uParam2 = 7886;
					break;
				
				case 169:
					*uParam2 = 7887;
					break;
				
				case 170:
					*uParam2 = 7888;
					break;
				
				case 171:
					*uParam2 = 7889;
					break;
				
				case 172:
					*uParam2 = 7890;
					break;
				
				case 173:
					*uParam2 = 7891;
					break;
				
				case 174:
					*uParam2 = 7892;
					break;
				
				case 175:
					*uParam2 = 7893;
					break;
				
				case 176:
					*uParam2 = 8299;
					break;
				
				case 177:
					*uParam2 = 8300;
					break;
				
				case 178:
					*uParam2 = 8301;
					break;
				
				case 179:
					*uParam2 = 8302;
					break;
				
				case 180:
					*uParam2 = 8303;
					break;
				
				case 181:
					*uParam2 = 8304;
					break;
				
				case 182:
					*uParam2 = 8305;
					break;
				
				case 183:
					*uParam2 = 8306;
					break;
				
				case 184:
					*uParam2 = 8307;
					break;
				
				case 185:
					*uParam2 = 8308;
					break;
				
				case 186:
					*uParam2 = 8309;
					break;
				
				case 187:
					*uParam2 = 8310;
					break;
				
				case 188:
					*uParam2 = 8311;
					break;
				
				case 189:
					*uParam2 = 8312;
					break;
				
				case 190:
					*uParam2 = 8313;
					break;
				
				case 191:
					*uParam2 = 8314;
					break;
				
				case 192:
					*uParam2 = 8315;
					break;
				
				case 193:
					*uParam2 = 8316;
					break;
				
				case 194:
					*uParam2 = 8317;
					break;
				
				case 195:
					*uParam2 = 8318;
					break;
				
				case 196:
					*uParam2 = 8319;
					break;
				
				case 197:
					*uParam2 = 8320;
					break;
				
				case 198:
					*uParam2 = 8321;
					break;
				
				case 199:
					*uParam2 = 8322;
					break;
				
				case 200:
					*uParam2 = 8323;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1765;
					break;
				
				case 1:
					*uParam2 = 1766;
					break;
				
				case 2:
					*uParam2 = 1767;
					break;
				
				case 3:
					*uParam2 = 1768;
					break;
				
				case 4:
					*uParam2 = 1769;
					break;
				
				case 5:
					*uParam2 = 1770;
					break;
				
				case 6:
					*uParam2 = 1778;
					break;
				
				case 7:
					*uParam2 = 1779;
					break;
				
				case 8:
					*uParam2 = 1780;
					break;
				
				case 9:
					*uParam2 = 1781;
					break;
				
				case 10:
					*uParam2 = 1782;
					break;
				
				case 11:
					*uParam2 = 1783;
					break;
				
				case 12:
					*uParam2 = 1784;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1920;
					break;
				
				case 18:
					*uParam2 = 1938;
					break;
				
				case 19:
					*uParam2 = 1939;
					break;
				
				case 20:
					*uParam2 = 1940;
					break;
				
				case 21:
					*uParam2 = 1941;
					break;
				
				case 22:
					*uParam2 = 1942;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2078;
					break;
				
				case 26:
					*uParam2 = 2079;
					break;
				
				case 27:
					*uParam2 = 2080;
					break;
				
				case 28:
					*uParam2 = 2081;
					break;
				
				case 29:
					*uParam2 = 2082;
					break;
				
				case 30:
					*uParam2 = 2083;
					break;
				
				case 31:
					*uParam2 = 2084;
					break;
				
				case 32:
					*uParam2 = 2085;
					break;
				
				case 33:
					*uParam2 = 2086;
					break;
				
				case 34:
					*uParam2 = 2087;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2393;
					break;
				
				case 38:
					*uParam2 = 2394;
					break;
				
				case 39:
					*uParam2 = 2395;
					break;
				
				case 40:
					*uParam2 = 2396;
					break;
				
				case 41:
					*uParam2 = 2461;
					break;
				
				case 42:
					*uParam2 = 2462;
					break;
				
				case 43:
					*uParam2 = 2463;
					break;
				
				case 44:
					*uParam2 = 2464;
					break;
				
				case 45:
					*uParam2 = 2465;
					break;
				
				case 46:
					*uParam2 = 2466;
					break;
				
				case 47:
					*uParam2 = 2467;
					break;
				
				case 48:
					*uParam2 = 2468;
					break;
				
				case 49:
					*uParam2 = 2469;
					break;
				
				case 50:
					*uParam2 = 2470;
					break;
				
				case 51:
					*uParam2 = 2600;
					break;
				
				case 52:
					*uParam2 = 2601;
					break;
				
				case 53:
					*uParam2 = 2602;
					break;
				
				case 54:
					*uParam2 = 2603;
					break;
				
				case 55:
					*uParam2 = 2604;
					break;
				
				case 56:
					*uParam2 = 2605;
					break;
				
				case 57:
					*uParam2 = 2606;
					break;
				
				case 58:
					*uParam2 = 2607;
					break;
				
				case 59:
					*uParam2 = 2608;
					break;
				
				case 60:
					*uParam2 = 2609;
					break;
				
				case 61:
					*uParam2 = 2610;
					break;
				
				case 62:
					*uParam2 = 3202;
					break;
				
				case 63:
					*uParam2 = 3203;
					break;
				
				case 64:
					*uParam2 = 3204;
					break;
				
				case 65:
					*uParam2 = 3205;
					break;
				
				case 66:
					*uParam2 = 3206;
					break;
				
				case 67:
					*uParam2 = 3207;
					break;
				
				case 68:
					*uParam2 = 3679;
					break;
				
				case 69:
					*uParam2 = 3680;
					break;
				
				case 70:
					*uParam2 = 3681;
					break;
				
				case 71:
					*uParam2 = 3682;
					break;
				
				case 72:
					*uParam2 = 3683;
					break;
				
				case 73:
					*uParam2 = 3684;
					break;
				
				case 74:
					*uParam2 = 3685;
					break;
				
				case 75:
					*uParam2 = 3686;
					break;
				
				case 76:
					*uParam2 = 3687;
					break;
				
				case 77:
					*uParam2 = 3688;
					break;
				
				case 78:
					*uParam2 = 3800;
					break;
				
				case 79:
					*uParam2 = 3801;
					break;
				
				case 80:
					*uParam2 = 3802;
					break;
				
				case 81:
					*uParam2 = 3803;
					break;
				
				case 82:
					*uParam2 = 3804;
					break;
				
				case 83:
					*uParam2 = 3805;
					break;
				
				case 84:
					*uParam2 = 3806;
					break;
				
				case 85:
					*uParam2 = 3807;
					break;
				
				case 86:
					*uParam2 = 3905;
					break;
				
				case 87:
					*uParam2 = 3906;
					break;
				
				case 88:
					*uParam2 = 3907;
					break;
				
				case 89:
					*uParam2 = 5349;
					break;
				
				case 90:
					*uParam2 = 5350;
					break;
				
				case 91:
					*uParam2 = 5351;
					break;
				
				case 92:
					*uParam2 = 5352;
					break;
				
				case 93:
					*uParam2 = 5353;
					break;
				
				case 94:
					*uParam2 = 5354;
					break;
				
				case 95:
					*uParam2 = 5355;
					break;
				
				case 96:
					*uParam2 = 5356;
					break;
				
				case 97:
					*uParam2 = 5357;
					break;
				
				case 98:
					*uParam2 = 5358;
					break;
				
				case 99:
					*uParam2 = 5359;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5360;
					break;
				
				case 101:
					*uParam2 = 5417;
					break;
				
				case 102:
					*uParam2 = 5418;
					break;
				
				case 103:
					*uParam2 = 5419;
					break;
				
				case 104:
					*uParam2 = 5420;
					break;
				
				case 105:
					*uParam2 = 5421;
					break;
				
				case 106:
					*uParam2 = 5422;
					break;
				
				case 107:
					*uParam2 = 5423;
					break;
				
				case 108:
					*uParam2 = 5424;
					break;
				
				case 109:
					*uParam2 = 5425;
					break;
				
				case 110:
					*uParam2 = 5426;
					break;
				
				case 111:
					*uParam2 = 5427;
					break;
				
				case 112:
					*uParam2 = 5428;
					break;
				
				case 113:
					*uParam2 = 5429;
					break;
				
				case 114:
					*uParam2 = 5430;
					break;
				
				case 115:
					*uParam2 = 5431;
					break;
				
				case 116:
					*uParam2 = 5432;
					break;
				
				case 117:
					*uParam2 = 5433;
					break;
				
				case 118:
					*uParam2 = 5434;
					break;
				
				case 119:
					*uParam2 = 5435;
					break;
				
				case 120:
					*uParam2 = 5436;
					break;
				
				case 121:
					*uParam2 = 5437;
					break;
				
				case 122:
					*uParam2 = 5438;
					break;
				
				case 123:
					*uParam2 = 5439;
					break;
				
				case 124:
					*uParam2 = 6137;
					break;
				
				case 125:
					*uParam2 = 6138;
					break;
				
				case 126:
					*uParam2 = 6139;
					break;
				
				case 127:
					*uParam2 = 6140;
					break;
				
				case 128:
					*uParam2 = 6141;
					break;
				
				case 129:
					*uParam2 = 6142;
					break;
				
				case 130:
					*uParam2 = 6143;
					break;
				
				case 131:
					*uParam2 = 6144;
					break;
				
				case 132:
					*uParam2 = 6145;
					break;
				
				case 133:
					*uParam2 = 6146;
					break;
				
				case 134:
					*uParam2 = 6147;
					break;
				
				case 135:
					*uParam2 = 6148;
					break;
				
				case 136:
					*uParam2 = 6149;
					break;
				
				case 137:
					*uParam2 = 6150;
					break;
				
				case 138:
					*uParam2 = 6151;
					break;
				
				case 139:
					*uParam2 = 6450;
					break;
				
				case 140:
					*uParam2 = 6451;
					break;
				
				case 141:
					*uParam2 = 6452;
					break;
				
				case 142:
					*uParam2 = 6453;
					break;
				
				case 143:
					*uParam2 = 6454;
					break;
				
				case 144:
					*uParam2 = 6455;
					break;
				
				case 145:
					*uParam2 = 6456;
					break;
				
				case 146:
					*uParam2 = 6457;
					break;
				
				case 147:
					*uParam2 = 6458;
					break;
				
				case 148:
					*uParam2 = 6459;
					break;
				
				case 149:
					*uParam2 = 6460;
					break;
				
				case 150:
					*uParam2 = 6461;
					break;
				
				case 151:
					*uParam2 = 6462;
					break;
				
				case 152:
					*uParam2 = 6463;
					break;
				
				case 153:
					*uParam2 = 6464;
					break;
				
				case 154:
					*uParam2 = 7273;
					break;
				
				case 155:
					*uParam2 = 7274;
					break;
				
				case 156:
					*uParam2 = 7275;
					break;
				
				case 157:
					*uParam2 = 7276;
					break;
				
				case 158:
					*uParam2 = 7277;
					break;
				
				case 159:
					*uParam2 = 7278;
					break;
				
				case 160:
					*uParam2 = 7279;
					break;
				
				case 161:
					*uParam2 = 7894;
					break;
				
				case 162:
					*uParam2 = 7895;
					break;
				
				case 163:
					*uParam2 = 7896;
					break;
				
				case 164:
					*uParam2 = 7897;
					break;
				
				case 165:
					*uParam2 = 7898;
					break;
				
				case 166:
					*uParam2 = 7899;
					break;
				
				case 167:
					*uParam2 = 7900;
					break;
				
				case 168:
					*uParam2 = 7901;
					break;
				
				case 169:
					*uParam2 = 7902;
					break;
				
				case 170:
					*uParam2 = 7903;
					break;
				
				case 171:
					*uParam2 = 7904;
					break;
				
				case 172:
					*uParam2 = 7905;
					break;
				
				case 173:
					*uParam2 = 7906;
					break;
				
				case 174:
					*uParam2 = 7907;
					break;
				
				case 175:
					*uParam2 = 7908;
					break;
				
				case 176:
					*uParam2 = 8324;
					break;
				
				case 177:
					*uParam2 = 8325;
					break;
				
				case 178:
					*uParam2 = 8326;
					break;
				
				case 179:
					*uParam2 = 8327;
					break;
				
				case 180:
					*uParam2 = 8328;
					break;
				
				case 181:
					*uParam2 = 8329;
					break;
				
				case 182:
					*uParam2 = 8330;
					break;
				
				case 183:
					*uParam2 = 8331;
					break;
				
				case 184:
					*uParam2 = 8332;
					break;
				
				case 185:
					*uParam2 = 8333;
					break;
				
				case 186:
					*uParam2 = 8334;
					break;
				
				case 187:
					*uParam2 = 8335;
					break;
				
				case 188:
					*uParam2 = 8336;
					break;
				
				case 189:
					*uParam2 = 8337;
					break;
				
				case 190:
					*uParam2 = 8338;
					break;
				
				case 191:
					*uParam2 = 8339;
					break;
				
				case 192:
					*uParam2 = 8340;
					break;
				
				case 193:
					*uParam2 = 8341;
					break;
				
				case 194:
					*uParam2 = 8342;
					break;
				
				case 195:
					*uParam2 = 8343;
					break;
				
				case 196:
					*uParam2 = 8344;
					break;
				
				case 197:
					*uParam2 = 8345;
					break;
				
				case 198:
					*uParam2 = 8346;
					break;
				
				case 199:
					*uParam2 = 8347;
					break;
				
				case 200:
					*uParam2 = 8348;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 10383;
}

void func_243(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x19F16
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_71399;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_242(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_155(iVar2, iVar0, 0);
		MISC::SET_BIT(&iVar3, iVar1);
		func_146(iVar2, iVar3, iVar0, 1, 0);
	}
}

bool func_244(int iParam0, int iParam1, int iParam2)//Position - 0x19F60
{
	Global_71402[1 /*14*/] = { func_283(iParam0, iParam1, iParam2, -1) };
	return MISC::IS_BIT_SET(Global_71402[1 /*14*/].f_6, 1);
}

void func_245(int iParam0)//Position - 0x19F8B
{
	switch (iParam0)
	{
		case -1823757478:
		case 1792693843:
			func_222(9366, 1, -1, 1);
			break;
		
		case -546421858:
		case -2062447935:
			func_222(9367, 1, -1, 1);
			break;
		
		case -55017934:
		case -77301911:
			func_222(9369, 1, -1, 1);
			break;
		
		case -890070361:
		case 330672139:
			func_222(9368, 1, -1, 1);
			break;
		
		case 209462597:
		case -842032640:
			func_222(9365, 1, -1, 1);
			break;
		
		case 915306857:
		case 869950996:
			func_222(9364, 1, -1, 1);
			break;
		
		case 683400644:
		case 572834473:
			func_222(9363, 1, -1, 1);
			break;
		
		case -644137588:
		case 281910967:
			func_222(9362, 1, -1, 1);
			break;
		
		case -894001213:
		case 1063549924:
			func_222(9370, 1, -1, 1);
			break;
		
		case -131040586:
		case 748049992:
			func_222(9371, 1, -1, 1);
			break;
		
		case -1965580286:
		case 1519006255:
			func_222(9372, 1, -1, 1);
			break;
		
		case -2103079010:
		case -937292447:
			func_222(9373, 1, -1, 1);
			break;
		
		case -1350342311:
		case -170465078:
			func_222(9374, 1, -1, 1);
			break;
		
		case -1521855257:
		case -476265386:
			func_222(9384, 1, -1, 1);
			break;
		
		case 647714915:
		case 322085761:
			func_222(9385, 1, -1, 1);
			break;
		
		case 912357359:
		case -1294245168:
			func_222(9375, 1, -1, 1);
			break;
		
		case 52793720:
		case -1332781512:
			func_222(9376, 1, -1, 1);
			break;
		
		case -1382547450:
		case 403942439:
			func_222(9377, 1, -1, 1);
			break;
		
		case -537992013:
		case 1775882162:
			func_222(9378, 1, -1, 1);
			break;
		
		case -766391943:
		case 2090333486:
			func_222(9379, 1, -1, 1);
			break;
		
		case -2071810596:
		case 1314232490:
			func_222(9380, 1, -1, 1);
			break;
		
		case -1463617956:
		case 904357834:
			func_222(9381, 1, -1, 1);
			break;
		
		case -1692083424:
		case 128518990:
			func_222(9382, 1, -1, 1);
			break;
		
		case 1293532939:
		case 443232466:
			func_222(9383, 1, -1, 1);
			break;
	}
	switch (iParam0)
	{
		case 1449707070:
		case -773166702:
			func_222(3593, 1, -1, 1);
			break;
		
		case -1912404917:
		case -308456130:
			func_222(3615, 1, -1, 1);
			break;
		
		case 603600547:
		case -1599080941:
			func_217(152, 1, -1, 1);
			break;
		
		case 1629732254:
		case 1924108767:
			func_217(151, 1, -1, 1);
			break;
		
		case 1470149028:
		case 2134049184:
			func_222(3783, 1, -1, 1);
			break;
		
		case -1357324997:
		case 513852309:
			func_222(3784, 1, -1, 1);
			break;
		
		case -399192206:
		case 342339363:
			func_222(3785, 1, -1, 1);
			break;
		
		case -890006288:
		case -655247304:
			func_222(3786, 1, -1, 1);
			break;
		
		case 64652989:
		case 799565220:
			func_222(3787, 1, -1, 1);
			break;
		
		case -161453111:
		case -715443961:
			func_222(3788, 1, -1, 1);
			break;
		
		case 795762148:
		case -905176471:
			func_222(3789, 1, -1, 1);
			break;
		
		case 296559202:
		case -121210915:
			func_222(3790, 1, -1, 1);
			break;
		
		case 1253971075:
		case -426585226:
			func_222(3791, 1, -1, 1);
			break;
		
		case 1023408391:
		case -1823527696:
			func_222(3792, 1, -1, 1);
			break;
		
		case 1504591288:
		case -1899487013:
			func_222(3793, 1, -1, 1);
			break;
		
		case 2023063246:
		case 613041245:
			func_222(3794, 1, -1, 1);
			break;
		
		case 1718016625:
		case -149165695:
			func_222(3795, 1, -1, 1);
			break;
		
		case 1428731893:
		case -923398858:
			func_222(3796, 1, -1, 1);
			break;
		
		case 1101074662:
		case -1017249282:
			func_222(3797, 1, -1, 1);
			break;
		
		case -1351684992:
		case -726555483:
			func_222(3798, 1, -1, 1);
			break;
		
		case -1657386993:
		case -372257055:
			func_222(3799, 1, -1, 1);
			break;
		
		case -1946409573:
		case -114397794:
			func_222(3800, 1, -1, 1);
			break;
		
		case 2042003728:
		case -1101989916:
			func_222(3801, 1, -1, 1);
			break;
		
		case -170362538:
		case -1749374280:
			func_222(3802, 1, -1, 1);
			break;
		
		case 2032023736:
		case -1560482447:
			func_222(3594, 1, -1, 1);
			break;
		
		case 1781897959:
		case 756154773:
			func_222(3595, 1, -1, 1);
			break;
		
		case -1077066219:
		case 1970016848:
			func_222(3596, 1, -1, 1);
			break;
		
		case -1347050010:
		case -2018330915:
			func_222(3597, 1, -1, 1);
			break;
		
		case -1656225525:
		case 1651272765:
			func_222(3598, 1, -1, 1);
			break;
		
		case 284813421:
		case 1353042096:
			func_222(3599, 1, -1, 1);
			break;
		
		case 1936268068:
		case -567597622:
			func_222(3616, 1, -1, 1);
			break;
		
		case -893708693:
		case -477604174:
			func_222(4260, 1, -1, 1);
			break;
		
		case -660753872:
		case 364034822:
			func_222(4257, 1, -1, 1);
			break;
		
		case -1412999036:
		case 136191965:
			func_222(4269, 1, -1, 1);
			break;
		
		case -1121780933:
		case 442582143:
			func_222(4261, 1, -1, 1);
			break;
		
		case -2121038819:
		case 84482511:
			func_222(4259, 1, -1, 1);
			break;
		
		case -1880350514:
		case 971670421:
			func_222(4268, 1, -1, 1);
			break;
		
		case 1724501642:
		case 736159614:
			func_222(4265, 1, -1, 1);
			break;
		
		case 1953982949:
		case 1667815057:
			func_222(4258, 1, -1, 1);
			break;
		
		case 1100809265:
		case 1294641685:
			func_222(4264, 1, -1, 1);
			break;
		
		case 1341235418:
		case -2030199366:
			func_222(4267, 1, -1, 1);
			break;
		
		case 202917910:
		case 601407264:
			func_222(4262, 1, -1, 1);
			break;
		
		case 509799595:
		case 764138118:
			func_222(4263, 1, -1, 1);
			break;
		
		case 797675260:
		case 1968955913:
			func_222(4266, 1, -1, 1);
			break;
		
		case -1155192675:
		case 1485373828:
			func_222(4247, 1, -1, 1);
			break;
		
		case -1928704920:
		case -71251979:
			func_222(4248, 1, -1, 1);
			break;
		
		case -524880960:
		case 235269247:
			func_222(4249, 1, -1, 1);
			break;
		
		case -1356263259:
		case 517180954:
			func_222(4250, 1, -1, 1);
			break;
		
		case 68860555:
		case 756099733:
			func_222(4251, 1, -1, 1);
			break;
		
		case -704258466:
		case -1329647121:
			func_222(4252, 1, -1, 1);
			break;
		
		case -902445334:
		case -975545307:
			func_222(4253, 1, -1, 1);
			break;
		
		case -133258609:
		case -721683864:
			func_222(4254, 1, -1, 1);
			break;
		
		case -296251615:
		case -356899352:
			func_222(4255, 1, -1, 1);
			break;
		
		case 479292308:
		case -1253393710:
			func_222(4256, 1, -1, 1);
			break;
	}
}

void func_246(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x1A789
{
	if (iParam4 || bParam1)
	{
		if ((((((iParam0 != 87 && iParam0 != 89) && iParam0 != 88) && iParam0 != 13) && iParam0 != 14) && iParam0 != 15) && iParam0 != 16)
		{
			if (iParam0 != 71 && iParam0 != 72)
			{
				func_274(1238, iParam5);
			}
		}
		else
		{
			func_274(1238, iParam5);
		}
	}
	if (bParam1)
	{
		if (!func_273(iParam0, iParam5))
		{
			func_270(iParam0, 1, iParam5);
		}
		if (iParam2 && iParam0 < 129)
		{
			if (func_268(iParam0) == 0)
			{
				func_262(12, func_267(iParam0, 3), func_266(iParam0, 3), func_265(iParam0, 3), func_264(iParam0, 3), -1, 0, 0, 0, -1, 0);
				func_261(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_256(iParam0, 1, iParam5);
		}
		if (Global_1371947.f_1043 == 0)
		{
			Global_1371947.f_1044 = iParam0;
		}
	}
	else
	{
		if (func_273(iParam0, iParam5))
		{
			func_270(iParam0, 0, iParam5);
			func_153(1238, -1, iParam5);
		}
		if (func_268(iParam0) == 1)
		{
			func_261(iParam0, 0);
		}
		if (func_255(iParam0, iParam5))
		{
			func_247(iParam0, 0, iParam5);
		}
	}
}

void func_247(int iParam0, bool bParam1, int iParam2)//Position - 0x1A8D3
{
	if (bParam1)
	{
		if (!func_255(iParam0, iParam2))
		{
			func_248(iParam0, 1, iParam2);
		}
	}
	else if (func_255(iParam0, iParam2))
	{
		func_248(iParam0, 0, iParam2);
	}
}

void func_248(int iParam0, bool bParam1, int iParam2)//Position - 0x1A90C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_254(iParam0, iParam2);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, func_253(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_253(iVar1));
		}
		if (!func_175())
		{
			func_146(func_249(iParam0), iVar0, iParam2, 1, 0);
		}
	}
}

int func_249(int iParam0)//Position - 0x1A963
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = func_252(iVar0);
	if ((func_251() == 0 || func_250() == 0) || (func_251() == 999 && func_250() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1048;
				break;
			
			case 1:
				return 1049;
				break;
			
			case 2:
				return 1050;
				break;
			
			case 3:
				return 1051;
				break;
			
			case 4:
				return 1052;
				break;
			
			case 5:
				return 1053;
				break;
			
			case 6:
				return 1487;
				break;
			
			case 7:
				return 1488;
				break;
			
			case 8:
				return 1489;
				break;
			
			case 9:
				return 1490;
				break;
			
			case 10:
				return 1947;
				break;
			
			case 11:
				return 1948;
				break;
			
			case 12:
				return 1949;
				break;
			
			case 13:
				return 2423;
				break;
			
			case 14:
				return 2443;
				break;
			
			case 15:
				return 2446;
				break;
			
			case 16:
				return 2449;
				break;
			
			case 17:
				return 2612;
				break;
			
			case 18:
				return 2615;
				break;
			
			case 19:
				return 2618;
				break;
			
			case 20:
				return 3784;
				break;
			
			case 21:
				return 3787;
				break;
			
			case 22:
				return 3862;
				break;
			
			case 23:
				return 3865;
				break;
			
			case 24:
				return 3868;
				break;
			
			case 25:
				return 3871;
				break;
			
			case 26:
				return 5362;
			
			case 27:
				return 5365;
				break;
			
			case 28:
				return 5467;
				break;
			
			case 29:
				return 5470;
				break;
			
			case 30:
				return 6429;
				break;
			
			case 31:
				return 6432;
				break;
			
			case 32:
				return 7253;
				break;
			
			case 33:
				return 7256;
				break;
			
			case 34:
				return 7259;
				break;
			
			case 35:
				return 7968;
				break;
			
			case 36:
				return 7971;
				break;
			
			case 37:
				return 7974;
				break;
			
			case 38:
				return 7977;
				break;
			
			case 39:
				return 8399;
				break;
			
			case 40:
				return 8402;
				break;
			
			case 41:
				return 8405;
				break;
			
			case 42:
				return 8408;
				break;
			
			case 43:
				break;
		}
		return 10383;
	}
	if (func_251() == 2 && func_250() == 2)
	{
		return 10383;
	}
	return 10383;
}

int func_250()//Position - 0x1AC5F
{
	return Global_25766;
}

int func_251()//Position - 0x1AC6A
{
	return Global_25765;
}

int func_252(int iParam0)//Position - 0x1AC75
{
	return (iParam0 / 32);
}

int func_253(int iParam0)//Position - 0x1AC82
{
	return (iParam0 % 32);
}

int func_254(int iParam0, int iParam1)//Position - 0x1AC8F
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_249(iParam0);
	if (iVar0 == 10383)
	{
		if (func_251() == 2 && func_250() == 2)
		{
			return 0;
		}
		else
		{
			return 0;
		}
	}
	iVar1 = func_155(iVar0, iParam1, 0);
	return iVar1;
}

bool func_255(int iParam0, int iParam1)//Position - 0x1ACD6
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_254(iParam0, iParam1);
	iVar1 = func_253(iParam0);
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(iVar0, iVar1);
}

void func_256(int iParam0, bool bParam1, int iParam2)//Position - 0x1AD18
{
	if (bParam1)
	{
		if (!func_260(iParam0))
		{
			func_257(iParam0, 1, iParam2);
		}
	}
	else if (func_260(iParam0))
	{
		func_257(iParam0, 0, iParam2);
	}
}

void func_257(var uParam0, bool bParam1, int iParam2)//Position - 0x1AD4D
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_259(uParam0);
	iVar1 = uParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, func_253(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_253(iVar1));
		}
		func_146(func_258(uParam0), iVar0, iParam2, 1, 0);
	}
}

int func_258(var uParam0)//Position - 0x1AD9A
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_252(iVar0);
	if ((func_251() == 0 || func_250() == 0) || (func_251() == 999 && func_250() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1043;
				break;
			
			case 1:
				return 1044;
				break;
			
			case 2:
				return 1045;
				break;
			
			case 3:
				return 1046;
				break;
			
			case 4:
				return 1047;
				break;
			
			case 5:
				return 1491;
				break;
			
			case 6:
				return 1492;
				break;
			
			case 7:
				return 1493;
				break;
			
			case 8:
				return 1494;
				break;
			
			case 9:
				return 1943;
				break;
			
			case 10:
				return 1944;
				break;
			
			case 11:
				return 1945;
				break;
			
			case 12:
				return 1946;
				break;
			
			case 13:
				return 2424;
				break;
			
			case 14:
				return 2444;
				break;
			
			case 15:
				return 2447;
				break;
			
			case 16:
				return 2450;
				break;
			
			case 17:
				return 2613;
				break;
			
			case 18:
				return 2616;
				break;
			
			case 19:
				return 2619;
				break;
			
			case 20:
				return 3785;
				break;
			
			case 21:
				return 3788;
				break;
			
			case 22:
				return 3863;
				break;
			
			case 23:
				return 3866;
				break;
			
			case 24:
				return 3869;
				break;
			
			case 25:
				return 3872;
				break;
			
			case 26:
				return 5363;
				break;
			
			case 27:
				return 5366;
				break;
			
			case 28:
				return 5468;
				break;
			
			case 29:
				return 5471;
				break;
			
			case 30:
				return 6430;
				break;
			
			case 31:
				return 6433;
				break;
			
			case 32:
				return 7254;
				break;
			
			case 33:
				return 7257;
				break;
			
			case 34:
				return 7260;
				break;
			
			case 35:
				return 7969;
				break;
			
			case 36:
				return 7972;
				break;
			
			case 37:
				return 7975;
				break;
			
			case 38:
				return 7978;
				break;
			
			case 39:
				return 8400;
				break;
			
			case 40:
				return 8403;
				break;
			
			case 41:
				return 8406;
				break;
			
			case 42:
				return 8409;
				break;
			}
	}
	return 10383;
}

int func_259(var uParam0)//Position - 0x1B06D
{
	int iVar0;
	
	iVar0 = func_155(func_258(uParam0), -1, 0);
	return iVar0;
}

bool func_260(var uParam0)//Position - 0x1B085
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_259(uParam0);
	iVar1 = uParam0;
	return MISC::IS_BIT_SET(iVar0, func_253(iVar1));
}

void func_261(int iParam0, bool bParam1)//Position - 0x1B0A5
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_2538129.f_1032[func_252(iVar0)]), func_253(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2538129.f_1032[func_252(iVar0)]), func_253(iVar0));
		}
	}
}

void func_262(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)//Position - 0x1B0F4
{
	int iVar0;
	
	iVar0 = func_263(&Global_1379695);
	Global_1379695[iVar0 /*106*/] = iParam0;
	StringCopy(&(Global_1379695[iVar0 /*106*/].f_17), sParam3, 64);
	StringCopy(&(Global_1379695[iVar0 /*106*/].f_1), sParam4, 64);
	StringCopy(&(Global_1379695[iVar0 /*106*/].f_33), sParam1, 64);
	StringCopy(&(Global_1379695[iVar0 /*106*/].f_49), sParam2, 64);
	Global_1379695[iVar0 /*106*/].f_97 = iParam5;
	Global_1379695[iVar0 /*106*/].f_104 = iParam9;
	Global_1379695[iVar0 /*106*/].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		StringCopy(&(Global_1379695[iVar0 /*106*/].f_98), sParam8, 24);
	}
}

int func_263(var uParam0)//Position - 0x1B190
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1 /*106*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_264(int iParam0, int iParam1)//Position - 0x1B1BF
{
	char* sVar0;
	
	sVar0 = "MPTATTOOS";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 56:
			return "MPTattoos3";
			break;
		
		case 89:
			return "MPTSHIRTAWARDS";
			break;
		
		case 88:
			return "MPTSHIRTAWARDS";
			break;
		
		case 87:
			return "MPTSHIRTAWARDS";
			break;
		
		case 57:
			return "MPTattoos2";
			break;
		
		case 58:
			return "MPTattoos2";
			break;
		
		case 59:
			return "MPTattoos2";
			break;
		
		case 60:
			return "MPTattoos2";
			break;
		
		case 12:
		case 55:
		case 49:
		case 48:
		case 46:
		case 45:
		case 34:
		case 65:
		case 25:
			return "MPTattoos3";
			break;
	}
	return sVar0;
}

char* func_265(int iParam0, int iParam1)//Position - 0x1B2A4
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 56:
			return "TATTOO_WIN_PARLEY";
			break;
		
		case 57:
			return "TATTOO_HOLD_UP_SHOPS_10";
			break;
		
		case 58:
			return "TATTOO_HOLD_UP_SHOPS_25";
			break;
		
		case 59:
			return "TATTOO_HOLD_UP_SHOPS_50";
			break;
		
		case 60:
			return "TATTOO_HOLD_UP_SHOPS_100";
			break;
		
		case 0:
			return "HeadBanger";
			break;
		
		case 1:
			return "theslayer";
			break;
		
		case 2:
			return "clearout";
			break;
		
		case 4:
			return "thehustler";
			break;
		
		case 3:
			return "armoredvantakedowns";
			break;
		
		case 54:
			return "wineverymodeonce";
			break;
		
		case 5:
			return "killplayerbountyhead";
			break;
		
		case 6:
			return "holdworldrecord";
			break;
		
		case 55:
			return "MP_FM_Tat_Award_008";
			break;
		
		case 7:
			return "getrevengekills";
			break;
		
		case 8:
			return "kill3otherracers";
			break;
		
		case 9:
			return "reachrank1";
			break;
		
		case 10:
			return "reachrank2";
			break;
		
		case 11:
			return "reachrank3";
			break;
		
		case 13:
			return "HeadBanger";
			break;
		
		case 14:
			return "HeadBanger";
			break;
		
		case 15:
			return "HeadBanger";
			break;
		
		case 16:
			return "HeadBanger";
			break;
		
		case 89:
			return "RockstarVerifiied";
			break;
		
		case 87:
			return "ReachHordeModeWave";
			break;
		
		case 12:
			return "TATTOO_RACES_WON";
			break;
	}
	switch (iParam0)
	{
		case 17:
			return "Headbanger";
			break;
		
		case 18:
			return "Headbanger";
			break;
		
		case 19:
			return "Headbanger";
			break;
		
		case 20:
			return "Headbanger";
			break;
		
		case 21:
			return "Headbanger";
			break;
		
		case 22:
			return "Headbanger";
			break;
		
		case 23:
			return "Headbanger";
			break;
		
		case 24:
			return "Headbanger";
			break;
		
		case 25:
			return "MP_FM_Tat_002";
			break;
		
		case 26:
			return "Headbanger";
			break;
		
		case 27:
			return "Headbanger";
			break;
		
		case 28:
			return "Headbanger";
			break;
		
		case 61:
			return "Headbanger";
			break;
		
		case 62:
			return "Headbanger";
			break;
		
		case 63:
			return "Headbanger";
			break;
		
		case 64:
			return "Headbanger";
			break;
		
		case 65:
			return "MP_FM_Tat_019";
			break;
		
		case 29:
			return "Headbanger";
			break;
		
		case 30:
			return "Headbanger";
			break;
		
		case 31:
			return "Headbanger";
			break;
		
		case 66:
			return "Headbanger";
			break;
		
		case 32:
			return "Headbanger";
			break;
		
		case 33:
			return "Headbanger";
			break;
		
		case 34:
			return "MP_FM_Tat_023";
			break;
		
		case 35:
			return "Headbanger";
			break;
		
		case 36:
			return "Headbanger";
			break;
		
		case 37:
			return "Headbanger";
			break;
		
		case 38:
			return "Headbanger";
			break;
		
		case 39:
			return "Headbanger";
			break;
		
		case 40:
			return "Headbanger";
			break;
		
		case 67:
			return "Headbanger";
			break;
		
		case 41:
			return "Headbanger";
			break;
		
		case 68:
			return "Headbanger";
			break;
		
		case 42:
			return "Headbanger";
			break;
		
		case 43:
			return "Headbanger";
			break;
		
		case 44:
			return "Headbanger";
			break;
		
		case 45:
			return "MP_FM_Tat_036";
			break;
		
		case 46:
			return "MP_FM_Tat_037";
			break;
		
		case 47:
			return "Headbanger";
			break;
		
		case 48:
			return "MP_FM_Tat_039";
			break;
		
		case 49:
			return "MP_FM_Tat_040";
			break;
		
		case 50:
			return "Headbanger";
			break;
		
		case 51:
			return "Headbanger";
			break;
		
		case 52:
			return "Headbanger";
			break;
		
		case 53:
			return "Headbanger";
			break;
		
		case 69:
			return "Headbanger";
			break;
	}
	return sVar0;
}

char* func_266(int iParam0, int iParam1)//Position - 0x1B74F
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 7:
			return "TAT_FM_REVENKIL_D";
			break;
		
		case 6:
			return "TAT_FM_RECHOLD_d";
			break;
		
		case 8:
			return "TAT_FM_KIL3RACE_D";
			break;
		
		case 5:
			return "TAT_FM_KILb_D";
			break;
		
		case 0:
			return "TAT_FM_HEADBANG_D";
			break;
		
		case 12:
			return "TAT_RACE50_D";
			break;
		
		case 2:
			return "TAT_CLEAROUT_D";
			break;
		
		case 9:
			return "TAT_FM_RANK1_D";
			break;
		
		case 10:
			return "TAT_FM_RANK2_D";
			break;
		
		case 11:
			return "TAT_FM_RANK3_D";
			break;
		
		case 4:
			return "TAT_FM_HUST_D";
			break;
		
		case 1:
			return "TAT_FM_SLAY_D";
			break;
		
		case 54:
			return "TAT_FM_EVERMODE1_D";
			break;
		
		case 3:
			return "TAT_FM_ARVANTAKE_D";
			break;
		
		case 56:
			return "TAT_CHEATER_D";
			break;
		
		case 13:
			return "TAT_CRANKA_D";
			break;
		
		case 14:
			return "TAT_CRANKB_D";
			break;
		
		case 15:
			return "TAT_CRANKC_D";
			break;
		
		case 16:
			return "TAT_CRANKD_D";
			break;
		
		case 89:
			return "TAT_FM_ROCKSTAR_D";
			break;
		
		case 87:
			return "TAT_FM_REDSKULL_D";
			break;
		
		case 55:
			return "TAT_FM_MODDED_D";
			break;
	}
	switch (iParam0)
	{
		case 17:
			return "TAT_RANK10_D";
			break;
		
		case 18:
			return "TAT_RANK20_D";
			break;
		
		case 19:
			return "TAT_RANK20_D";
			break;
		
		case 20:
			return "TAT_RANK10_D";
			break;
		
		case 21:
			return "TAT_RANK20_D";
			break;
		
		case 22:
			return "TAT_RANK10_D";
			break;
		
		case 23:
			return "TAT_RANK10_D";
			break;
		
		case 24:
			return "TAT_RANK20_D";
			break;
		
		case 25:
			return "TAT_TAT9U";
			break;
		
		case 26:
			return "TAT_RANK20_D";
			break;
		
		case 27:
			return "TAT_RANK20_D";
			break;
		
		case 28:
			return "TAT_RANK10_D";
			break;
		
		case 61:
			return "TAT_RANK10_D";
			break;
		
		case 62:
			return "TAT_RANK10_D";
			break;
		
		case 63:
			return "TAT_RANK10_D";
			break;
		
		case 64:
			return "TAT_RANK10_D";
			break;
		
		case 65:
			return "TAT_TAT17U";
			break;
		
		case 29:
			return "TAT_RANK10_D";
			break;
		
		case 30:
			return "TAT_RANK10_D";
			break;
		
		case 31:
			return "TAT_RANK10_D";
			break;
		
		case 66:
			return "TAT_RANK20_D";
			break;
		
		case 32:
			return "TAT_RANK20_D";
			break;
		
		case 33:
			return "TAT_RANK20_D";
			break;
		
		case 34:
			return "TAT_TAT24U";
			break;
		
		case 35:
			return "TAT_RANK20_D";
			break;
		
		case 36:
			return "TAT_RANK20_D";
			break;
		
		case 37:
			return "TAT_RANK20_D";
			break;
		
		case 38:
			return "TAT_RANK20_D";
			break;
		
		case 39:
			return "TAT_RANK20_D";
			break;
		
		case 40:
			return "TAT_RANK20_D";
			break;
		
		case 67:
			return "TAT_RANK20_D";
			break;
		
		case 41:
			return "TAT_RANK20_D";
			break;
		
		case 68:
			return "TAT_RANK20_D";
			break;
		
		case 42:
			return "TAT_RANK20_D";
			break;
		
		case 43:
			return "TAT_RANK20_D";
			break;
		
		case 44:
			return "TAT_RANK20_D";
			break;
		
		case 45:
			return "TAT_TAT37U";
			break;
		
		case 46:
			return "TAT_TAT38U";
			break;
		
		case 47:
			return "TAT_RANK20_D";
			break;
		
		case 48:
			return "TAT_TAT40U";
			break;
		
		case 49:
			return "TAT_TAT41U";
			break;
		
		case 50:
			return "TAT_RANK20_D";
			break;
		
		case 51:
			return "TAT_RANK20_D";
			break;
		
		case 52:
			return "TAT_RANK20_D";
			break;
		
		case 53:
			return "TAT_RANK20_D";
			break;
		
		case 69:
			return "TAT_RANK20_D";
			break;
		
		case 57:
			return "TAT_HOLDUP1V_D";
			break;
		
		case 58:
			return "TAT_HOLDUP5V_D";
			break;
		
		case 59:
			return "TAT_HOLDUP10V_D";
			break;
		
		case 60:
			return "TAT_HOLDUP20V_D";
			break;
	}
	return sVar0;
}

char* func_267(int iParam0, int iParam1)//Position - 0x1BBFA
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "TAT_FM_HEADBANG";
			break;
		
		case 2:
			return "TAT_CLEAROUT";
			break;
		
		case 9:
			return "TAT_FM_RANK1";
			break;
		
		case 10:
			return "TAT_FM_RANK2";
			break;
		
		case 11:
			return "TAT_FM_RANK3";
			break;
		
		case 4:
			return "TAT_FM_HUST";
			break;
		
		case 1:
			return "TAT_FM_SLAY";
			break;
		
		case 54:
			return "TAT_FM_EVERMODE1";
			break;
		
		case 3:
			return "TAT_FM_ARVANTAKE";
			break;
		
		case 7:
			return "TAT_FM_REVENKIL";
			break;
		
		case 5:
			return "TAT_FM_KILb";
			break;
		
		case 8:
			return "TAT_FM_KIL3RACE";
			break;
		
		case 6:
			return "TAT_FM_RECHOLD";
			break;
		
		case 12:
			return "TAT_RACE50";
			break;
		
		case 13:
			return "TAT_CRANKA";
			break;
		
		case 14:
			return "TAT_CRANKB";
			break;
		
		case 15:
			return "TAT_CRANKC";
			break;
		
		case 16:
			return "TAT_CRANKD";
			break;
		
		case 87:
			return "TAT_FM_REDSKULL";
			break;
		
		case 88:
			return "TAT_FM_BELLE";
			break;
		
		case 89:
			return "TAT_FM_ROCKSTAR";
			break;
		
		case 55:
			return "TAT_FM_MODDED";
			break;
		
		case 17:
			return "TAT_FM_TAT1";
			break;
		
		case 18:
			return "TAT_FM_TAT2";
			break;
		
		case 19:
			return "TAT_FM_TAT3";
			break;
		
		case 20:
			return "TAT_FM_TAT4";
			break;
		
		case 21:
			return "TAT_FM_TAT5";
			break;
		
		case 22:
			return "TAT_FM_TAT6";
			break;
		
		case 56:
			return "TAT_CHEATER";
			break;
	}
	switch (iParam0)
	{
		case 23:
			return "TAT_FM_TAT7";
			break;
		
		case 24:
			return "TAT_FM_TAT8";
			break;
		
		case 25:
			return "TAT_FM_TAT9";
			break;
		
		case 26:
			return "TAT_FM_TAT10";
			break;
		
		case 27:
			return "TAT_FM_TAT11";
			break;
		
		case 28:
			return "TAT_FM_TAT12";
			break;
		
		case 61:
			return "TAT_FM_TAT13";
			break;
		
		case 62:
			return "TAT_FM_TAT14";
			break;
		
		case 63:
			return "TAT_FM_TAT15";
			break;
		
		case 64:
			return "TAT_FM_TAT16";
			break;
		
		case 65:
			return "TAT_FM_TAT38";
			break;
		
		case 29:
			return "TAT_FM_TAT18";
			break;
		
		case 30:
			return "TAT_FM_TAT19";
			break;
		
		case 31:
			return "TAT_FM_TAT20";
			break;
		
		case 66:
			return "TAT_FM_TAT21";
			break;
		
		case 32:
			return "TAT_FM_TAT22";
			break;
		
		case 33:
			return "TAT_FM_TAT23";
			break;
		
		case 34:
			return "TAT_FM_TAT24";
			break;
		
		case 35:
			return "TAT_FM_TAT25";
			break;
		
		case 36:
			return "TAT_FM_TAT26";
			break;
		
		case 37:
			return "TAT_FM_TAT27";
			break;
		
		case 38:
			return "TAT_FM_TAT28";
			break;
		
		case 39:
			return "TAT_FM_TAT29";
			break;
		
		case 40:
			return "TAT_FM_TAT30";
			break;
		
		case 67:
			return "TAT_FM_TAT31";
			break;
		
		case 41:
			return "TAT_FM_TAT32";
			break;
		
		case 68:
			return "TAT_FM_TAT33";
			break;
		
		case 42:
			return "TAT_FM_TAT34";
			break;
		
		case 43:
			return "TAT_FM_TAT35";
			break;
		
		case 44:
			return "TAT_FM_TAT36";
			break;
		
		case 45:
			return "TAT_FM_TAT37";
			break;
		
		case 46:
			return "TAT_FM_TAT41";
			break;
		
		case 47:
			return "TAT_FM_TAT39";
			break;
		
		case 48:
			return "TAT_FM_TAT40";
			break;
		
		case 49:
			return "TAT_FM_TAT17";
			break;
		
		case 50:
			return "TAT_FM_TAT42";
			break;
		
		case 51:
			return "TAT_FM_TAT43";
			break;
		
		case 52:
			return "TAT_FM_TAT44";
			break;
		
		case 53:
			return "TAT_FM_TAT45";
			break;
		
		case 69:
			return "TAT_FM_TAT46";
			break;
		
		case 57:
			return "TAT_HOLDUP1V";
			break;
		
		case 58:
			return "TAT_HOLDUP5V";
			break;
		
		case 59:
			return "TAT_HOLDUP10V";
			break;
		
		case 60:
			return "TAT_HOLDUP20V";
			break;
	}
	return sVar0;
}

bool func_268(int iParam0)//Position - 0x1C0B6
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_269(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(iVar0, func_253(iVar1));
}

var func_269(int iParam0)//Position - 0x1C0D6
{
	var uVar0;
	
	uVar0 = Global_2538129.f_1032[func_252(iParam0)];
	return uVar0;
}

void func_270(int iParam0, bool bParam1, int iParam2)//Position - 0x1C0F1
{
	int iVar0;
	int iVar1;
	
	if (func_272(iParam0) == 10383)
	{
		return;
	}
	iVar0 = func_271(iParam0, -1);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, func_253(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_253(iVar1));
		}
		func_146(func_272(iParam0), iVar0, iParam2, 1, 0);
	}
}

int func_271(var uParam0, int iParam1)//Position - 0x1C14E
{
	int iVar0;
	
	iVar0 = func_155(func_272(uParam0), iParam1, 0);
	return iVar0;
}

int func_272(var uParam0)//Position - 0x1C167
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_252(iVar0);
	if ((func_251() == 0 || func_250() == 0) || (func_251() == 999 && func_250() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1038;
				break;
			
			case 1:
				return 1039;
				break;
			
			case 2:
				return 1040;
				break;
			
			case 3:
				return 1041;
				break;
			
			case 4:
				return 1042;
				break;
			
			case 5:
				return 1502;
				break;
			
			case 6:
				return 1756;
				break;
			
			case 7:
				return 1950;
				break;
			
			case 8:
				return 1951;
				break;
			
			case 9:
				return 1952;
				break;
			
			case 10:
				return 1953;
				break;
			
			case 11:
				return 1954;
				break;
			
			case 12:
				return 1955;
				break;
			
			case 13:
				return 2422;
				break;
			
			case 14:
				return 2442;
				break;
			
			case 15:
				return 2445;
				break;
			
			case 16:
				return 2448;
				break;
			
			case 17:
				return 2611;
				break;
			
			case 18:
				return 2614;
				break;
			
			case 19:
				return 2617;
				break;
			
			case 20:
				return 3783;
				break;
			
			case 21:
				return 3786;
				break;
			
			case 22:
				return 3861;
				break;
			
			case 23:
				return 3864;
				break;
			
			case 24:
				return 3867;
				break;
			
			case 25:
				return 3870;
				break;
			
			case 26:
				return 5361;
				break;
			
			case 27:
				return 5364;
				break;
			
			case 28:
				return 5466;
				break;
			
			case 29:
				return 5469;
				break;
			
			case 30:
				return 6428;
				break;
			
			case 31:
				return 6431;
				break;
			
			case 32:
				return 7252;
				break;
			
			case 33:
				return 7255;
				break;
			
			case 34:
				return 7258;
				break;
			
			case 35:
				return 7967;
				break;
			
			case 36:
				return 7970;
				break;
			
			case 37:
				return 7973;
				break;
			
			case 38:
				return 7976;
				break;
			
			case 39:
				return 8398;
				break;
			
			case 40:
				return 8401;
				break;
			
			case 41:
				return 8404;
				break;
			
			case 42:
				return 8407;
				break;
			}
	}
	return 10383;
}

bool func_273(int iParam0, int iParam1)//Position - 0x1C43A
{
	int iVar0;
	int iVar1;
	
	if (func_272(iParam0) == 10383)
	{
		return 0;
	}
	iVar0 = func_271(iParam0, iParam1);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(iVar0, func_253(iVar1));
}

void func_274(int iParam0, int iParam1)//Position - 0x1C46C
{
	int iVar0;
	
	iVar0 = func_155(iParam0, func_151(iParam1), 0);
	iVar0++;
	if (!func_154(iParam0))
	{
		func_146(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_147(iParam0, iVar0, iParam1, 1);
	}
}

bool func_275(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1C4AD
{
	int iVar0;
	int iVar1;
	
	func_282(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam3) && !PED::IS_PED_INJURED(iParam3))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam3);
	}
	switch (iParam2)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					func_282(sParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
					break;
				
				case 1:
					func_282(sParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
					break;
				
				case 2:
					func_282(sParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
					break;
				
				case 3:
					func_282(sParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
					break;
				
				case 4:
					func_282(sParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
					break;
				
				case 5:
					func_282(sParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
					break;
				
				case 6:
					func_282(sParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
					break;
				
				case 7:
					func_282(sParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
					break;
				
				case 8:
					func_282(sParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
					break;
				
				case 9:
					if (func_281() || func_280())
					{
						iVar1 = 400;
						if (func_279() && (func_278() || func_277()))
						{
							iVar1 = 0;
						}
						func_282(sParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1, 2);
					}
					break;
				
				case 10:
					func_282(sParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
					break;
				
				case 11:
					func_282(sParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
					break;
				
				case 12:
					func_282(sParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
					break;
				
				case 13:
					func_282(sParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
					break;
				
				case 14:
					func_282(sParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
					break;
				
				case 15:
					func_282(sParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
					break;
				
				case 16:
					func_282(sParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
					break;
				
				case 17:
					func_282(sParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
					break;
				
				case 18:
					func_282(sParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
					break;
				
				case 19:
					func_282(sParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
					break;
				
				case 20:
					func_282(sParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
					break;
				
				default:
					func_276(sParam0, iParam2, iParam1, 21);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					if (func_281() || func_280())
					{
						iVar1 = 450;
						if (func_279() && (func_278() || func_277()))
						{
							iVar1 = 0;
						}
						func_282(sParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1, 0);
					}
					break;
				
				case 1:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
					break;
				
				case 2:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
					break;
				
				case 3:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
					break;
				
				case 4:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
					break;
				
				case 5:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
					break;
				
				case 6:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
					break;
				
				case 7:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
					break;
				
				case 8:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
					break;
				
				case 9:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
					break;
				
				case 10:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
					break;
				
				case 11:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
					break;
				
				case 12:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
					break;
				
				case 13:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
					break;
				
				case 14:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
					break;
				
				case 15:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
					break;
				
				case 16:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
					break;
				
				case 17:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
					break;
				
				case 18:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
					break;
				
				case 19:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
					break;
				
				case 20:
					break;
				
				case 21:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
					break;
				
				case 22:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
					break;
				
				case 23:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
					break;
				
				case 24:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
					break;
				
				case 25:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
					break;
				
				case 26:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
					break;
				
				case 27:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
					break;
				
				case 28:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
					break;
				
				case 29:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
					break;
				
				case 30:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
					break;
				
				case 31:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
					break;
				
				case 32:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
					break;
				
				case 33:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
					break;
				
				case 34:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
					break;
				
				case 35:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
					break;
				
				case 36:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
					break;
				
				case 37:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
					break;
				
				case 38:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
					break;
				
				case 39:
					func_282(sParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
					break;
				
				default:
					func_276(sParam0, iParam2, iParam1, 40);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
					break;
				
				case 1:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
					break;
				
				case 2:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
					break;
				
				case 3:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
					break;
				
				case 4:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
					break;
				
				case 5:
					if (func_281() || func_280())
					{
						iVar1 = 380;
						if (func_279() && (func_278() || func_277()))
						{
							iVar1 = 0;
						}
						func_282(sParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1, 3);
					}
					break;
				
				case 6:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
					break;
				
				case 7:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
					break;
				
				case 8:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
					break;
				
				case 9:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
					break;
				
				case 10:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
					break;
				
				case 11:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
					break;
				
				case 12:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
					break;
				
				case 13:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
					break;
				
				case 14:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
					break;
				
				case 15:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
					break;
				
				case 16:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
					break;
				
				case 17:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
					break;
				
				case 18:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
					break;
				
				case 19:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
					break;
				
				case 20:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
					break;
				
				case 21:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
					break;
				
				case 22:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
					break;
				
				case 23:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
					break;
				
				case 24:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
					break;
				
				case 25:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
					break;
				
				case 26:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
					break;
				
				case 27:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
					break;
				
				case 28:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
					break;
				
				case 29:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
					break;
				
				case 30:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
					break;
				
				case 31:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
					break;
				
				case 32:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
					break;
				
				case 33:
					func_282(sParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
					break;
				
				default:
					func_276(sParam0, iParam2, iParam1, 34);
					break;
			}
			break;
		
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(20000) * Global_262145.f_2906)), 0);
					break;
				
				case 1:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1400) * Global_262145.f_2907)), 2);
					break;
				
				case 2:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(9750) * Global_262145.f_2908)), 3);
					break;
				
				case 3:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2150) * Global_262145.f_2909)), 0);
					break;
				
				case 4:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2910)), 0);
					break;
				
				case 54:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12400) * Global_262145.f_2911)), 1);
					break;
				
				case 5:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3500) * Global_262145.f_2912)), 0);
					break;
				
				case 6:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_262145.f_2913)), 2);
					break;
				
				case 55:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1350) * Global_262145.f_2914)), 1);
					break;
				
				case 7:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1450) * Global_262145.f_2915)), 0);
					break;
				
				case 8:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2700) * Global_262145.f_2916)), 7);
					break;
				
				case 9:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1200) * Global_262145.f_2917)), 0);
					break;
				
				case 10:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1500) * Global_262145.f_2918)), 0);
					break;
				
				case 11:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2650) * Global_262145.f_2919)), 0);
					break;
				
				case 56:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1900) * Global_262145.f_2920)), 1);
					break;
				
				case 12:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_262145.f_2921)), 2);
					break;
				
				case 57:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2400) * Global_262145.f_2922)), 1);
					break;
				
				case 58:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_262145.f_2923)), 1);
					break;
				
				case 59:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7400) * Global_262145.f_2924)), 1);
					break;
				
				case 60:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2925)), 1);
					break;
				
				case 17:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2400) * Global_262145.f_2930)), 2);
					break;
				
				case 18:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_262145.f_2931)), 2);
					break;
				
				case 19:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3600) * Global_262145.f_2932)), 2);
					break;
				
				case 20:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2933)), 3);
					break;
				
				case 21:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12500) * Global_262145.f_2934)), 3);
					break;
				
				case 22:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2935)), 3);
					break;
				
				case 23:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2936)), 3);
					break;
				
				case 24:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2937)), 3);
					break;
				
				case 25:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3750) * Global_262145.f_2938)), 2);
					break;
				
				case 26:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3750) * Global_262145.f_2939)), 3);
					break;
				
				case 27:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4800) * Global_262145.f_2940)), 3);
					break;
				
				case 28:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3500) * Global_262145.f_2941)), 3);
					break;
				
				case 61:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12350) * Global_262145.f_2942)), 1);
					break;
				
				case 62:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1900) * Global_262145.f_2943)), 1);
					break;
				
				case 63:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4500) * Global_262145.f_2944)), 1);
					break;
				
				case 64:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12250) * Global_262145.f_2945)), 1);
					break;
				
				case 65:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12300) * Global_262145.f_2946)), 1);
					break;
				
				case 29:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_262145.f_2947)), 0);
					break;
				
				case 30:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2948)), 0);
					break;
				
				case 31:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2949)), 0);
					break;
				
				case 66:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2950)), 1);
					break;
				
				case 32:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2951)), 2);
					break;
				
				case 33:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7300) * Global_262145.f_2952)), 3);
					break;
				
				case 34:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7250) * Global_262145.f_2953)), 2);
					break;
				
				case 35:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(11900) * Global_262145.f_2954)), 0);
					break;
				
				case 36:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2750) * Global_262145.f_2955)), 0);
					break;
				
				case 37:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1750) * Global_262145.f_2956)), 0);
					break;
				
				case 38:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7300) * Global_262145.f_2957)), 3);
					break;
				
				case 39:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3250) * Global_262145.f_2958)), 2);
					break;
				
				case 40:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1000) * Global_262145.f_2959)), 0);
					break;
				
				case 67:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2960)), 1);
					break;
				
				case 41:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2961)), 2);
					break;
				
				case 68:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_262145.f_2962)), 1);
					break;
				
				case 42:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5050) * Global_262145.f_2963)), 0);
					break;
				
				case 43:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2450) * Global_262145.f_2964)), 2);
					break;
				
				case 44:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_262145.f_2965)), 0);
					break;
				
				case 45:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_262145.f_2966)), 0);
					break;
				
				case 46:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12250) * Global_262145.f_2967)), 0);
					break;
				
				case 47:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1150) * Global_262145.f_2968)), 3);
					break;
				
				case 48:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2969)), 3);
					break;
				
				case 49:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7600) * Global_262145.f_2970)), 3);
					break;
				
				case 50:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2600) * Global_262145.f_2971)), 2);
					break;
				
				case 51:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_262145.f_2972)), 3);
					break;
				
				case 52:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7450) * Global_262145.f_2973)), 3);
					break;
				
				case 53:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2974)), 0);
					break;
				
				case 69:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2975)), 1);
					break;
				
				case 70:
					func_282(sParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_262145.f_2976)), 2);
					break;
			}
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 86:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 90:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 91:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 124:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 125:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2977)), 0);
						break;
					
					case 88:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2978)), 0);
						break;
					
					case 89:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2979)), 0);
						break;
					
					case 93:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_282(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2926)), 0);
						break;
					
					case 14:
						func_282(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2927)), 0);
						break;
					
					case 15:
						func_282(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2928)), 2);
						break;
					
					case 16:
						func_282(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2929)), 0);
						break;
					
					case 71:
						func_282(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_E", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2929)), 0);
						break;
					
					case 72:
						func_282(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_F", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2929)), 0);
						break;
				}
			}
			else if (iVar0 == joaat("mp_f_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 92:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2977)), 0);
						break;
					
					case 88:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2978)), 0);
						break;
					
					case 89:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2979)), 0);
						break;
					
					case 93:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 118:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 119:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 120:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 121:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 122:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_282(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_282(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2926)), 0);
						break;
					
					case 14:
						func_282(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2927)), 0);
						break;
					
					case 15:
						func_282(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2928)), 2);
						break;
					
					case 16:
						func_282(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2929)), 0);
						break;
					}
			}
			break;
	}
	if ((iParam2 == 3 || iParam2 == 4) && iParam1 >= 129)
	{
		func_276(sParam0, iParam2, iParam1, 129);
	}
	if (iParam4 == 22)
	{
		sParam0->f_7 *= 2;
	}
	return sParam0->f_11 != -1;
}

void func_276(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1F4F6
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	
	iVar0 = (iParam2 - iParam3);
	iVar1 = FILES::_GET_NUM_DECORATIONS(iParam1);
	if (iVar1 > 0 && iVar0 < iVar1)
	{
		if (FILES::_0xFF56381874F82086(iParam1, iVar0, &Var2))
		{
			if (!FILES::_IS_DLC_DATA_EMPTY(Var2))
			{
				sParam0->f_11 = iParam2;
				MemCopy(sParam0, {Var2.f_7}, 4);
				sParam0->f_5 = Var2.f_3;
				sParam0->f_4 = Var2.f_2;
				sParam0->f_8 = Var2.f_6;
				sParam0->f_6 = iParam1;
				sParam0->f_7 = Var2.f_4;
				sParam0->f_9 = (iParam2 / 32);
				sParam0->f_10 = (iParam2 % 32);
				sParam0->f_12 = Var2.f_5;
			}
		}
	}
}

int func_277()//Position - 0x1F588
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (MISC::IS_BIT_SET(Global_25, 5))
	{
		if (MISC::IS_BIT_SET(Global_25, 1) || MISC::IS_BIT_SET(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (MISC::IS_BIT_SET(iVar0, 5))
		{
			if (MISC::IS_BIT_SET(iVar0, 1) || MISC::IS_BIT_SET(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_145399.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (STATS::STAT_GET_INT(iVar2, &iVar1, -1))
			{
				if (MISC::IS_BIT_SET(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::_0x5AA3BEFA29F03AD4())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (MISC::IS_BIT_SET(iVar3, 1) || MISC::IS_BIT_SET(iVar3, 3))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x91B87C55093DE351())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				MISC::SET_BIT(&iVar4, 1);
				MISC::SET_BIT(&iVar4, 3);
				MISC::SET_BIT(&iVar4, 5);
				MISC::SET_BIT(&Global_25, 1);
				MISC::SET_BIT(&Global_25, 3);
				MISC::SET_BIT(&Global_25, 5);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (MISC::_0x5AA3BEFA29F03AD4())
				{
					iVar4 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar4, 1);
					MISC::SET_BIT(&iVar4, 3);
					STATS::_0xDAC073C7901F9E15(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_278()//Position - 0x1F6DC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (MISC::IS_BIT_SET(Global_25, 6))
	{
		if (MISC::IS_BIT_SET(Global_25, 2) || MISC::IS_BIT_SET(Global_25, 4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (MISC::IS_BIT_SET(iVar0, 6))
		{
			if (MISC::IS_BIT_SET(iVar0, 2) || MISC::IS_BIT_SET(iVar0, 4))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_145399.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (STATS::STAT_GET_INT(iVar2, &iVar1, -1))
			{
				if (MISC::IS_BIT_SET(iVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::_0x5AA3BEFA29F03AD4())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (MISC::IS_BIT_SET(iVar3, 2) || MISC::IS_BIT_SET(iVar3, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_279()//Position - 0x1F7AD
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x593570C289A77688())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (MISC::_0x5AA3BEFA29F03AD4())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_0xDAC073C7901F9E15(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_145398 == 2)
	{
		return 1;
	}
	else if (Global_145398 == 3)
	{
		return 0;
	}
	if (MISC::_0x5AA3BEFA29F03AD4())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_280()//Position - 0x1F868
{
	return 1;
}

int func_281()//Position - 0x1F871
{
	return 1;
}

void func_282(char* sParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9)//Position - 0x1F87A
{
	char cVar0[32];
	
	sParam0->f_11 = iParam1;
	StringCopy(sParam0, sParam3, 16);
	sParam0->f_4 = MISC::GET_HASH_KEY(sParam4);
	sParam0->f_5 = MISC::GET_HASH_KEY(sParam5);
	sParam0->f_8 = MISC::GET_HASH_KEY(sParam6);
	sParam0->f_6 = iParam7;
	sParam0->f_7 = iParam8;
	sParam0->f_9 = (iParam1 / 32);
	sParam0->f_10 = (iParam1 % 32);
	sParam0->f_12 = iParam9;
	if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !PED::IS_PED_INJURED(iParam2))
	{
		if ((sParam0->f_6 == 0 || sParam0->f_6 == 1) || sParam0->f_6 == 2)
		{
		}
		else if (sParam0->f_6 == 3 || sParam0->f_6 == 4)
		{
			StringCopy(&cVar0, "", 32);
			if (((((sParam0->f_11 == 13 || sParam0->f_11 == 14) || sParam0->f_11 == 15) || sParam0->f_11 == 16) || sParam0->f_11 == 71) || sParam0->f_11 == 72)
			{
				StringConCat(&cVar0, "FM_", 32);
				StringConCat(&cVar0, "CREW_", 32);
				if (ENTITY::GET_ENTITY_MODEL(iParam2) == joaat("mp_m_freemode_01"))
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam6, "torsoDecal") || MISC::ARE_STRINGS_EQUAL(sParam6, "hairOverlay"))
			{
				StringCopy(&cVar0, sParam5, 32);
			}
			else
			{
				if (((((((((((((((((((sParam0->f_11 == 0 || sParam0->f_11 == 1) || sParam0->f_11 == 2) || sParam0->f_11 == 4) || sParam0->f_11 == 3) || sParam0->f_11 == 54) || sParam0->f_11 == 5) || sParam0->f_11 == 6) || sParam0->f_11 == 55) || sParam0->f_11 == 7) || sParam0->f_11 == 8) || sParam0->f_11 == 9) || sParam0->f_11 == 10) || sParam0->f_11 == 11) || sParam0->f_11 == 56) || sParam0->f_11 == 12) || sParam0->f_11 == 57) || sParam0->f_11 == 58) || sParam0->f_11 == 59) || sParam0->f_11 == 60)
				{
					StringConCat(&cVar0, "FM_Tat_Award_", 32);
				}
				else
				{
					StringConCat(&cVar0, "FM_Tat_", 32);
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam2) == joaat("mp_m_freemode_01") || sParam0->f_11 == 20)
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			sParam0->f_5 = MISC::GET_HASH_KEY(&cVar0);
			if (PED::_GET_TATTOO_ZONE(sParam0->f_4, sParam0->f_5) == 7)
			{
				sParam0->f_11 = -1;
			}
		}
	}
}

struct<14> func_283(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1FB30
{
	func_322();
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		func_306(iParam1, iParam2, iParam3);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		func_284(iParam1, iParam2, iParam3);
	}
	return Global_71402[0 /*14*/];
}

void func_284(int iParam0, int iParam1, int iParam2)//Position - 0x1FB71
{
	switch (iParam0)
	{
		case 2:
			func_305(iParam1, iParam2);
			break;
		
		case 11:
			func_304(iParam1, iParam2);
			break;
		
		case 8:
			func_303(iParam1, iParam2);
			break;
		
		case 9:
			func_302(iParam1, iParam2);
			break;
		
		case 3:
			func_301(iParam1, iParam2);
			break;
		
		case 4:
			func_300(iParam1, iParam2);
			break;
		
		case 6:
			func_299(iParam1, iParam2);
			break;
		
		case 1:
			func_298(iParam1, iParam2);
			break;
		
		case 7:
			func_297(iParam1, iParam2);
			break;
		
		case 10:
			func_296(iParam1, iParam2);
			break;
		
		case 14:
			func_295(iParam1, iParam2);
			break;
		
		case 12:
			func_294(iParam1, iParam2);
			break;
		
		case 5:
			func_293(iParam1, iParam2);
			break;
		
		case 0:
			func_291(iParam1, iParam2);
			break;
		
		case 13:
			func_285(iParam1);
			break;
	}
}

void func_285(int iParam0)//Position - 0x1FC7D
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_286(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x1FE38
{
	int iVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_290(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (MISC::GET_HASH_KEY(sParam3) != MISC::GET_HASH_KEY("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			MISC::SET_BIT(&(uParam0->f_6), 5);
		}
		MISC::SET_BIT(&(uParam0->f_6), 1);
		MISC::SET_BIT(&(uParam0->f_6), 2);
		MISC::SET_BIT(&(uParam0->f_6), 6);
		if (func_289(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (FILES::_0x341DE7ED1D2A1BFD(Global_2621444, 1827025211, 0))
			{
				MISC::SET_BIT(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_288(Global_2621444, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_288(Global_2621444, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_288(Global_2621444, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_288(Global_2621444, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_288(Global_2621444, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_288(Global_2621444, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		MISC::SET_BIT(&(uParam0->f_6), 5);
		if (func_287(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
		}
		if (func_287(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
		if (!func_287(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 4);
		}
	}
	else
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_289(14))
			{
				return;
			}
			iVar0 = func_155(func_236(iParam1, uParam0->f_2), Global_71399, 0);
			if (MISC::IS_BIT_SET(iVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 1);
			}
			iVar0 = func_155(func_230(iParam1, uParam0->f_2), Global_71399, 0);
			if (MISC::IS_BIT_SET(iVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 2);
			}
			if (func_235(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_155(iVar1, Global_71399, 0);
				if (!MISC::IS_BIT_SET(iVar0, uParam0->f_1))
				{
					MISC::SET_BIT(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
}

int func_287(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x201C9
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/][iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_106565.f_2357[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_106565.f_2357[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_288(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x210E7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_71399;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_242(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_155(iVar2, iVar0, 0);
		return MISC::IS_BIT_SET(iVar3, iVar1);
	}
	return 0;
}

bool func_289(int iParam0)//Position - 0x21129
{
	return Global_36425 == iParam0;
}

int func_290(int iParam0)//Position - 0x21137
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_291(int iParam0, int iParam1)//Position - 0x2120B
{
	int iVar0;
	
	iVar0 = 0;
	Global_71402[0 /*14*/].f_5 = 4;
	func_292(iVar0, iParam0, 0, iParam1);
}

void func_292(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2122B
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_71402[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = FILES::_0xF3FBE2D50A6A8C28(iVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar17, &Var2);
			if (!FILES::_IS_DLC_DATA_EMPTY(Var2))
			{
				if (iVar18 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_286(&(Global_71402[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_286(&(Global_71402[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var20);
		iVar39 = 0;
		iVar40 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iVar1, 7, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			FILES::GET_SHOP_PED_QUERY_PROP(iVar38, &Var20);
			if (!FILES::_IS_DLC_DATA_EMPTY(Var20))
			{
				if (iVar39 == (iParam1 - iParam2))
				{
					if (Var20.f_6 == 0)
					{
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1)
					{
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2)
					{
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3)
					{
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4)
					{
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5)
					{
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6)
					{
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7)
					{
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8)
					{
						iVar37 = 8;
					}
					else
					{
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20;
					func_286(&(Global_71402[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, FILES::_0x341DE7ED1D2A1BFD(Var20.f_1, -2050632586, 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var41);
		if (iParam3 != -1 && Global_71571)
		{
			FILES::GET_SHOP_PED_COMPONENT(iParam3, &Var41);
			Global_2621444 = Var41.f_1;
			Global_2621445 = Var41;
			func_286(&(Global_71402[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, FILES::_0x341DE7ED1D2A1BFD(Var41.f_1, -2050632586, 0), -1, 2, Var41.f_1 != 0);
			return;
		}
		iVar59 = 0;
		iVar60 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iVar1, 7, -1, 0, -1, func_69(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar58, &Var41);
			if (!FILES::_IS_DLC_DATA_EMPTY(Var41))
			{
				if (iVar59 == (iParam1 - iParam2))
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_286(&(Global_71402[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, FILES::_0x341DE7ED1D2A1BFD(Var41.f_1, -2050632586, 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_293(int iParam0, int iParam1)//Position - 0x21504
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_71402[0 /*14*/].f_5 = 4;
			func_292(iVar10, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_294(int iParam0, int iParam1)//Position - 0x21607
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S1", 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S2", 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S3", 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S4", 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S5", 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S6", 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S7", 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S8", 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P1", 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P2", 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P3", 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P4", 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P5", 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P6", 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P7", 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P8", 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P9", 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P10", 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B1", 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B2", 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B3", 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B4", 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B5", 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B6", 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B7", 16);
			break;
		
		case 26:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B8", 16);
			break;
		
		case 27:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B9", 16);
			break;
		
		default:
			Global_71402[0 /*14*/].f_5 = 4;
			func_292(iVar10, iParam0, 28, iParam1);
			return;
			break;
	}
	func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_295(int iParam0, int iParam1)//Position - 0x218E6
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMF_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMF_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 400;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 375;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 325;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 255;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMF_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 360;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 3970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1355;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMF_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 230;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMF_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMF_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 515;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMF_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 545;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMF_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMF_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMF_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMF_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 1440;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMF_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMF_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMF_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMF_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 79:
			StringCopy(&Var2, "HT_FMF_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 50;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMF_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMF_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 575;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMF_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 605;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMF_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 285;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 2125;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 295;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 855;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1615;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 1130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMF_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMF_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMF_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMF_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMF_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMF_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMF_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMF_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 390;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 425;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMF_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMF_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMF_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMF_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMF_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMF_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMF_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMF_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMF_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMF_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMF_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMF_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMF_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMF_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMF_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMF_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMF_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMF_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMF_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMF_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMF_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMF_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMF_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMF_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 163:
			StringCopy(&Var2, "CLO_EXF_G_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "CLO_EXF_G_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "CLO_EXF_G_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMF_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMF_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMF_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMF_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMF_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 174:
			StringCopy(&Var2, "CLO_EXF_G_1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 970;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "CLO_EXF_G_1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 585;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "CLO_EXF_G_1_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMF_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 595;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "G_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "G_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 545;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "G_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "CLO_EXF_G_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 1125;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "CLO_EXF_G_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 740;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "CLO_EXF_G_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 805;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 6250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 3585;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 4075;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 4935;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "G_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "G_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 5600;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "G_FMF_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 4790;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "CLO_EXF_G_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "CLO_EXF_G_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "CLO_EXF_G_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 2245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 1205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "G_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "G_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 2215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "G_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "CLO_EXF_G_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 2835;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "CLO_EXF_G_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 2450;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "CLO_EXF_G_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 2515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "G_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "G_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "G_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMF_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 5000;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 229:
			StringCopy(&Var2, "CLO_EXF_G_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 2820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "CLO_EXF_G_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 2435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "CLO_EXF_G_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 2500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMF_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 4815;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMF_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 4795;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "G_FMF_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "G_FMF_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "G_FMF_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 4965;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "G_FMF_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 480;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMF_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 465;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMF_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4320;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "CLO_EXF_G_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 2390;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "CLO_EXF_G_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 2005;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "CLO_EXF_G_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 2070;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 243:
			StringCopy(&Var2, "G_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 245:
			StringCopy(&Var2, "G_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 246:
			StringCopy(&Var2, "G_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 247:
			StringCopy(&Var2, "G_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 251:
			StringCopy(&Var2, "CLO_EXF_G_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "CLO_EXF_G_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "CLO_EXF_G_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMF_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMF_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "G_FMF_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "G_FMF_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 570;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "G_FMF_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 525;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMF_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMF_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMF_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "CLO_EXF_G_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "CLO_EXF_G_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "CLO_EXF_G_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "G_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "G_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4275;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "G_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMF_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 273:
			StringCopy(&Var2, "CLO_EXF_G_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 274:
			StringCopy(&Var2, "CLO_EXF_G_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 275:
			StringCopy(&Var2, "CLO_EXF_G_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 276:
			StringCopy(&Var2, "G_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 3660;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 4165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 3670;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 3620;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 3610;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 4140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 286:
			StringCopy(&Var2, "G_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 287:
			StringCopy(&Var2, "G_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 288:
			StringCopy(&Var2, "G_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 297:
			StringCopy(&Var2, "G_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 298:
			StringCopy(&Var2, "G_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 299:
			StringCopy(&Var2, "G_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMF_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMF_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMF_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMF_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMF_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMF_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMF_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMF_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 308:
			StringCopy(&Var2, "CLO_EXF_G_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 1490;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "CLO_EXF_G_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 1105;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "CLO_EXF_G_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 1170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 316:
			StringCopy(&Var2, "G_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 317:
			StringCopy(&Var2, "G_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 318:
			StringCopy(&Var2, "G_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 825;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
	}
	if (iVar11 == 1)
	{
		iVar12 = (iParam0 - 10);
		if (iVar12 >= 0 && iVar12 < 121)
		{
			if (iVar12 > 8)
			{
				iVar12 = (iVar12 - 1);
			}
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2043[iVar12]) * Global_289489.f_26));
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = (iParam0 - 131);
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2164[iVar13]) * Global_289489.f_27));
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = (iParam0 - 155);
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2189[iVar14]) * Global_289489.f_56));
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = (iParam0 - 319);
		if (iVar15 >= 0 && iVar15 < 10)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2318[iVar15]) * Global_289489.f_28));
		}
	}
	if (iParam0 >= 327)
	{
		Global_71402[0 /*14*/].f_5 = 4;
		func_292(iVar10, iParam0, 327, iParam1);
		if (Global_71402[0 /*14*/].f_7 > 0)
		{
			if (FILES::_0x341DE7ED1D2A1BFD(Global_2621444, -1757550583, 1))
			{
				Global_71402[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_71402[0 /*14*/].f_7) * Global_289489.f_26));
			}
			else if (FILES::_0x341DE7ED1D2A1BFD(Global_2621444, 97230661, 1))
			{
				Global_71402[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_71402[0 /*14*/].f_7) * Global_289489.f_56));
			}
			else if (FILES::_0x341DE7ED1D2A1BFD(Global_2621444, 1147826474, 1))
			{
				Global_71402[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_71402[0 /*14*/].f_7) * Global_289489.f_28));
			}
		}
	}
	else
	{
		func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_296(int iParam0, int iParam1)//Position - 0x246BC
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_71402[0 /*14*/].f_5 = 4;
			func_292(iVar10, iParam0, 6, iParam1);
			return;
			break;
	}
	func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_297(int iParam0, int iParam1)//Position - 0x247C1
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			if (Global_262145.f_4140 != -1)
			{
				iVar1 = Global_262145.f_4140;
			}
			else
			{
				iVar1 = 310;
			}
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			if (Global_262145.f_4141 != -1)
			{
				iVar1 = Global_262145.f_4141;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			if (Global_262145.f_4142 != -1)
			{
				iVar1 = Global_262145.f_4142;
			}
			else
			{
				iVar1 = 145;
			}
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			if (Global_262145.f_4143 != -1)
			{
				iVar1 = Global_262145.f_4143;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			if (Global_262145.f_4144 != -1)
			{
				iVar1 = Global_262145.f_4144;
			}
			else
			{
				iVar1 = 265;
			}
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			if (Global_262145.f_4145 != -1)
			{
				iVar1 = Global_262145.f_4145;
			}
			else
			{
				iVar1 = 280;
			}
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			if (Global_262145.f_4146 != -1)
			{
				iVar1 = Global_262145.f_4146;
			}
			else
			{
				iVar1 = 295;
			}
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			if (Global_262145.f_4147 != -1)
			{
				iVar1 = Global_262145.f_4147;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			if (Global_262145.f_4148 != -1)
			{
				iVar1 = Global_262145.f_4148;
			}
			else
			{
				iVar1 = 85;
			}
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			if (Global_262145.f_4149 != -1)
			{
				iVar1 = Global_262145.f_4149;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			if (Global_262145.f_4150 != -1)
			{
				iVar1 = Global_262145.f_4150;
			}
			else
			{
				iVar1 = 105;
			}
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			if (Global_262145.f_4151 != -1)
			{
				iVar1 = Global_262145.f_4151;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			if (Global_262145.f_4152 != -1)
			{
				iVar1 = Global_262145.f_4152;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			if (Global_262145.f_4153 != -1)
			{
				iVar1 = Global_262145.f_4153;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			if (Global_262145.f_4154 != -1)
			{
				iVar1 = Global_262145.f_4154;
			}
			else
			{
				iVar1 = 30;
			}
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			if (Global_262145.f_4155 != -1)
			{
				iVar1 = Global_262145.f_4155;
			}
			else
			{
				iVar1 = 40;
			}
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			if (Global_262145.f_4156 != -1)
			{
				iVar1 = Global_262145.f_4156;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 18:
			iVar6 = 3;
			iVar7 = 5;
			if (Global_262145.f_4157 != -1)
			{
				iVar1 = Global_262145.f_4157;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 2;
			if (Global_262145.f_4158 != -1)
			{
				iVar1 = Global_262145.f_4158;
			}
			else
			{
				iVar1 = 355;
			}
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 3;
			if (Global_262145.f_4159 != -1)
			{
				iVar1 = Global_262145.f_4159;
			}
			else
			{
				iVar1 = 370;
			}
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 4;
			if (Global_262145.f_4160 != -1)
			{
				iVar1 = Global_262145.f_4160;
			}
			else
			{
				iVar1 = 110;
			}
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 5;
			if (Global_262145.f_4161 != -1)
			{
				iVar1 = Global_262145.f_4161;
			}
			else
			{
				iVar1 = 160;
			}
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 0;
			if (Global_262145.f_4162 != -1)
			{
				iVar1 = Global_262145.f_4162;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 1;
			if (Global_262145.f_4163 != -1)
			{
				iVar1 = Global_262145.f_4163;
			}
			else
			{
				iVar1 = 190;
			}
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 2;
			if (Global_262145.f_4164 != -1)
			{
				iVar1 = Global_262145.f_4164;
			}
			else
			{
				iVar1 = 235;
			}
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 3;
			if (Global_262145.f_4165 != -1)
			{
				iVar1 = Global_262145.f_4165;
			}
			else
			{
				iVar1 = 220;
			}
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 4;
			if (Global_262145.f_4166 != -1)
			{
				iVar1 = Global_262145.f_4166;
			}
			else
			{
				iVar1 = 250;
			}
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 5;
			if (Global_262145.f_4167 != -1)
			{
				iVar1 = Global_262145.f_4167;
			}
			else
			{
				iVar1 = 205;
			}
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 0;
			if (Global_262145.f_4168 != -1)
			{
				iVar1 = Global_262145.f_4168;
			}
			else
			{
				iVar1 = 445;
			}
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 1;
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
			}
			else
			{
				iVar1 = 175;
			}
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 0;
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
			}
			else
			{
				iVar1 = 340;
			}
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		default:
			Global_71402[0 /*14*/].f_5 = 4;
			func_292(iVar10, iParam0, 55, iParam1);
			if (Global_71402[0 /*14*/].f_7 > 0)
			{
				Global_71402[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_71402[0 /*14*/].f_7) * Global_289489.f_58));
			}
			return;
			break;
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_289489.f_58));
	StringCopy(&Var2, "T_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_298(int iParam0, int iParam1)//Position - 0x24F9D
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_71402[0 /*14*/].f_5 = 4;
			func_292(iVar10, iParam0, 26, iParam1);
			if (Global_71402[0 /*14*/].f_7 > 0)
			{
				Global_71402[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_71402[0 /*14*/].f_7) * Global_289489.f_29));
			}
			return;
			break;
	}
	StringCopy(&Var2, "M_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = (iParam0 - 1);
	if (iVar11 >= 0 && iVar11 < 26)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2016[iVar11]) * Global_289489.f_29));
	}
	func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_299(int iParam0, int iParam1)//Position - 0x25282
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 1765;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 760;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 760;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 765;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 90;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 95;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 100;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 1255;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 1050;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 1895;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 185;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 190;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 115;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 415;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 105;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3530;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2610;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 1295;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 120;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 160;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 160;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 145;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 105;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 115;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 150;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 540;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 460;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 415;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 135;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 140;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 160;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1025;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 1560;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 120;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 365;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 2395;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 3675;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 320;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 3875;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2050;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 375;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2105;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 345;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 380;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 340;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 385;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4135;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 370;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 375;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 385;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 365;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 325;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 325;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 370;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 400;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 365;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 410;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 4125;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 4365;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 5365;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 6225;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 3755;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 405;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 4115;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 2240;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 3850;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 3110;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 1950;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 455;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 405;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 410;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 415;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 4425;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 360;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 175;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 675;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 400;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 340;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 195;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 165;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 1040;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 100;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 205;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 200;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 100;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 1420;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 445;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 435;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 425;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 435;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 425;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 430;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 3215;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 3320;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 440;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 440;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 450;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 450;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 1255;
			break;
		
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 750;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 165;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 460;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 195;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 210;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 215;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 220;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 455;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 175;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 790;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 175;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 190;
			break;
	}
	StringCopy(&Var2, "F_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1759[iVar11]) * Global_289489.f_25));
	}
	if (iParam0 >= 256)
	{
		Global_71402[0 /*14*/].f_5 = 4;
		func_292(iVar10, iParam0, 256, iParam1);
		if (Global_71402[0 /*14*/].f_7 > 0)
		{
			Global_71402[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_71402[0 /*14*/].f_7) * Global_289489.f_25));
		}
	}
	else
	{
		func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_300(int iParam0, int iParam1)//Position - 0x268A9
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 450;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 4875;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 1760;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 1090;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 2465;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 305;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 290;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 410;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 255;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 255;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 405;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 5000;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 4480;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 4335;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 375;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 265;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 275;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 280;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 300;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 265;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 255;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 260;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 225;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 230;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 650;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 425;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 345;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 110;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 525;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 535;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 130;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 140;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 520;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 215;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 225;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 215;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 630;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 250;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 260;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 200;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 225;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 230;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 725;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 650;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 230;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 230;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 280;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 330;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 320;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 315;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 530;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 890;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 440;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 455;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 295;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 155;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 150;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 950;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 580;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 200;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 665;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 780;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 615;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 250;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 435;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 485;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 380;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 1295;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 1135;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 1425;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1645;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1925;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 2250;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 365;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 360;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 2245;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 2170;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 275;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 300;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 145;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 155;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 155;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 510;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 165;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 465;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 250;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 110;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 470;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 480;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 155;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 275;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 395;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 285;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 560;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 595;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 295;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 230;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 215;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 270;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 295;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 215;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 290;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 230;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 230;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 350;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 335;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "L_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1245[iVar11]) * Global_289489.f_23));
	}
	if (iParam0 >= 256)
	{
		Global_71402[0 /*14*/].f_5 = 4;
		func_292(iVar10, iParam0, 256, iParam1);
		if (Global_71402[0 /*14*/].f_7 > 0)
		{
			Global_71402[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_71402[0 /*14*/].f_7) * Global_289489.f_23));
		}
	}
	else
	{
		func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_301(int iParam0, int iParam1)//Position - 0x27F08
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 15;
			iVar7 = 0;
			break;
	}
	if (iParam0 >= 16)
	{
		Global_71402[0 /*14*/].f_5 = 4;
		func_292(iVar10, iParam0, 16, iParam1);
		return;
	}
	func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_302(int iParam0, int iParam1)//Position - 0x28064
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 11:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 21:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 23:
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 26:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 27:
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 28:
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 29:
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 31:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 32:
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 33:
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 34:
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 4;
			break;
	}
	if (iParam0 >= 36)
	{
		Global_71402[0 /*14*/].f_5 = 4;
		func_292(iVar10, iParam0, 36, iParam1);
		return;
	}
	func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_303(int iParam0, int iParam1)//Position - 0x282E4
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 33:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMF_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMF_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMF_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMF_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMF_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMF_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[77]));
			break;
		
		case 48:
			StringCopy(&Var2, "U_FMF_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[78]));
			break;
		
		case 49:
			StringCopy(&Var2, "U_FMF_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "U_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[80]));
			break;
		
		case 51:
			StringCopy(&Var2, "U_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[81]));
			break;
		
		case 52:
			StringCopy(&Var2, "U_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "U_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "U_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "U_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "U_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "U_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[87]));
			break;
		
		case 58:
			StringCopy(&Var2, "U_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "U_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[89]));
			break;
		
		case 60:
			StringCopy(&Var2, "U_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "U_FMF_5_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "U_FMF_5_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "U_FMF_5_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "U_FMF_5_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "U_FMF_5_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 67:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 68:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 69:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 70:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "U_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[176]));
			break;
		
		case 72:
			StringCopy(&Var2, "U_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[177]));
			break;
		
		case 73:
			StringCopy(&Var2, "U_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[178]));
			break;
		
		case 74:
			StringCopy(&Var2, "U_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "U_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "U_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "U_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "U_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "U_FMF_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMF_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMF_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[186]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMF_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[187]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMF_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMF_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMF_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMF_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[191]));
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[199]));
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMF_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[200]));
			break;
		
		case 96:
			StringCopy(&Var2, "U_FMF_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[201]));
			break;
		
		case 97:
			StringCopy(&Var2, "U_FMF_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "U_FMF_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "U_FMF_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 100:
			StringCopy(&Var2, "U_FMF_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "U_FMF_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "U_FMF_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "U_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[208]));
			break;
		
		case 104:
			StringCopy(&Var2, "U_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[209]));
			break;
		
		case 105:
			StringCopy(&Var2, "U_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[210]));
			break;
		
		case 106:
			StringCopy(&Var2, "U_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[211]));
			break;
		
		case 107:
			StringCopy(&Var2, "U_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[212]));
			break;
		
		case 108:
			StringCopy(&Var2, "U_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[213]));
			break;
		
		case 109:
			StringCopy(&Var2, "U_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[214]));
			break;
		
		case 110:
			StringCopy(&Var2, "U_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[215]));
			break;
		
		case 111:
			StringCopy(&Var2, "U_FMF_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[216]));
			break;
		
		case 112:
			StringCopy(&Var2, "U_FMF_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[217]));
			break;
		
		case 113:
			StringCopy(&Var2, "U_FMF_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[218]));
			break;
		
		case 114:
			StringCopy(&Var2, "U_FMF_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[219]));
			break;
		
		case 115:
			StringCopy(&Var2, "U_FMF_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[220]));
			break;
		
		case 116:
			StringCopy(&Var2, "U_FMF_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[221]));
			break;
		
		case 117:
			StringCopy(&Var2, "U_FMF_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[222]));
			break;
		
		case 118:
			StringCopy(&Var2, "U_FMF_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[223]));
			break;
		
		case 119:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 120:
			StringCopy(&Var2, "U_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[240]));
			break;
		
		case 121:
			StringCopy(&Var2, "U_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 122:
			StringCopy(&Var2, "U_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 123:
			StringCopy(&Var2, "U_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[243]));
			break;
		
		case 124:
			StringCopy(&Var2, "U_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 125:
			StringCopy(&Var2, "U_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 126:
			StringCopy(&Var2, "U_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 127:
			StringCopy(&Var2, "U_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 128:
			StringCopy(&Var2, "U_FMF_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMF_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMF_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[250]));
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMF_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[251]));
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMF_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMF_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMF_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMF_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		default:
			Global_71402[0 /*14*/].f_5 = 4;
			func_292(iVar10, iParam0, 136, iParam1);
			if (Global_71402[0 /*14*/].f_7 > 0)
			{
				Global_71402[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_71402[0 /*14*/].f_7) * Global_289489.f_24));
			}
			return;
			break;
	}
	if (iParam0 == 4 || iParam0 == 20)
	{
		if (func_273(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2979));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(40) * Global_262145.f_1502[4]));
		}
	}
	else if (iParam0 == 7 || iParam0 == 23)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(450) * Global_262145.f_2978));
	}
	else if (iParam0 == 9 || iParam0 == 25)
	{
		if (func_273(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_262145.f_2977));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(40) * Global_262145.f_1502[9]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 16)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[iVar11]));
		}
	}
	else if (iParam0 >= 16 && iParam0 < 32)
	{
		iVar12 = (iParam0 - 16);
		if (iVar12 >= 0 && iVar12 < 256)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[iVar12]));
		}
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_289489.f_24));
	func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_304(int iParam0, int iParam1)//Position - 0x29686
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 230;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 355;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5000;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2725;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3265;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 3625;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 4220;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 310;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 295;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 2250;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 275;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 445;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 470;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 95;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 360;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 100;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 460;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1980;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 2110;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 95;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 900;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1000;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1050;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1000;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2975;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 1100;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 1825;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 1750;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 1075;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 2805;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 2250;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 525;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 130;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 560;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 975;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 160;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 100;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 1700;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 380;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 90;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 85;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 385;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 345;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 430;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 375;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 375;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 360;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 325;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 340;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 435;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 300;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 315;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 415;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 420;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "U_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 4)
	{
		if (func_273(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2979) * Global_289489.f_24));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(40) * Global_262145.f_1502[4]) * Global_289489.f_24));
		}
	}
	else if (iParam0 == 7)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(450) * Global_262145.f_2978) * Global_289489.f_24));
	}
	else if (iParam0 == 9)
	{
		if (func_273(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(500) * Global_262145.f_2977) * Global_289489.f_24));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(40) * Global_262145.f_1502[9]) * Global_289489.f_24));
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[iVar11]) * Global_289489.f_24));
		}
	}
	if (iParam0 >= 256)
	{
		Global_71402[0 /*14*/].f_5 = 4;
		func_292(iVar10, iParam0, 256, iParam1);
		if (Global_71402[0 /*14*/].f_7 > 0)
		{
			Global_71402[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_71402[0 /*14*/].f_7) * Global_289489.f_24));
		}
	}
	else
	{
		func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_305(int iParam0, int iParam1)//Position - 0x2ADEB
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[0]));
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[1]));
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 495;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[2]));
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 490;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[3]));
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 485;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[4]));
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 480;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[5]));
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 440;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[6]));
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 435;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[7]));
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 430;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[8]));
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 425;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[9]));
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 420;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[10]));
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 190;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[11]));
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 185;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[12]));
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 180;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[13]));
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 175;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[14]));
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 170;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[15]));
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 295;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[16]));
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 290;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[17]));
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 285;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[18]));
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 280;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[19]));
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 275;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[20]));
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 2000;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[21]));
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1995;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[22]));
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1990;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[23]));
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1985;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[24]));
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1980;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[25]));
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 1150;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[26]));
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1145;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[27]));
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1140;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[28]));
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1135;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[29]));
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1130;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[30]));
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 550;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[31]));
			break;
		
		case 36:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 545;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[32]));
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 540;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[33]));
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 535;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[34]));
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 530;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[35]));
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 41:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 580;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[36]));
			break;
		
		case 42:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 575;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[37]));
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 570;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[38]));
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 565;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[39]));
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 560;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[40]));
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 47:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 1100;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[41]));
			break;
		
		case 48:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 1095;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[42]));
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 1090;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[43]));
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 1085;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[44]));
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 1080;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[45]));
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 53:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 520;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[46]));
			break;
		
		case 54:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 515;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[47]));
			break;
		
		case 55:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 510;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[48]));
			break;
		
		case 56:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 505;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[49]));
			break;
		
		case 57:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[50]));
			break;
		
		case 58:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 59:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 60:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 395;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[51]));
			break;
		
		case 61:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 390;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[52]));
			break;
		
		case 62:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 385;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[53]));
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 380;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[54]));
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 375;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[55]));
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 67:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1050;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[56]));
			break;
		
		case 68:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 1045;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[57]));
			break;
		
		case 69:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1040;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[58]));
			break;
		
		case 70:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 1035;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[59]));
			break;
		
		case 71:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 1030;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[60]));
			break;
		
		case 72:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 73:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 1200;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[61]));
			break;
		
		case 74:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1195;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[62]));
			break;
		
		case 75:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 1190;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[63]));
			break;
		
		case 76:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 1185;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[64]));
			break;
		
		case 77:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1180;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[65]));
			break;
		
		case 78:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 79:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 475;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[66]));
			break;
		
		case 80:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 470;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[67]));
			break;
		
		case 81:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 465;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[68]));
			break;
		
		case 82:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 460;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[69]));
			break;
		
		case 83:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 455;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[70]));
			break;
		
		case 84:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 85:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 950;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[71]));
			break;
		
		case 86:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 945;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[72]));
			break;
		
		case 87:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 940;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[73]));
			break;
		
		case 88:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 935;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[74]));
			break;
		
		case 89:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 930;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[75]));
			break;
		
		case 90:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 91:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		default:
			Global_71402[0 /*14*/].f_5 = 4;
			func_292(iVar10, iParam0, 92, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_306(int iParam0, int iParam1, int iParam2)//Position - 0x2BCBC
{
	switch (iParam0)
	{
		case 2:
			func_321(iParam1, iParam2);
			break;
		
		case 11:
			func_320(iParam1, iParam2);
			break;
		
		case 8:
			func_319(iParam1, iParam2);
			break;
		
		case 9:
			func_318(iParam1, iParam2);
			break;
		
		case 3:
			func_317(iParam1, iParam2);
			break;
		
		case 4:
			func_316(iParam1, iParam2);
			break;
		
		case 6:
			func_315(iParam1, iParam2);
			break;
		
		case 1:
			func_314(iParam1, iParam2);
			break;
		
		case 7:
			func_313(iParam1, iParam2);
			break;
		
		case 10:
			func_312(iParam1, iParam2);
			break;
		
		case 14:
			func_311(iParam1, iParam2);
			break;
		
		case 12:
			func_310(iParam1, iParam2);
			break;
		
		case 5:
			func_309(iParam1, iParam2);
			break;
		
		case 0:
			func_308(iParam1, iParam2);
			break;
		
		case 13:
			func_307(iParam1);
			break;
	}
}

void func_307(int iParam0)//Position - 0x2BDC8
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_308(int iParam0, int iParam1)//Position - 0x2BF92
{
	int iVar0;
	
	iVar0 = 0;
	Global_71402[0 /*14*/].f_5 = 3;
	func_292(iVar0, iParam0, 0, iParam1);
}

void func_309(int iParam0, int iParam1)//Position - 0x2BFB2
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_71402[0 /*14*/].f_5 = 3;
			func_292(iVar10, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_310(int iParam0, int iParam1)//Position - 0x2C0E6
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S1", 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S2", 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S3", 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S4", 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S5", 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S6", 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S7", 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S8", 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S9", 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P1", 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P2", 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P3", 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P4", 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P5", 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P6", 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P7", 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P8", 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B1", 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B2", 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B3", 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B4", 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B5", 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B6", 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B7", 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B8", 16);
			break;
		
		default:
			Global_71402[0 /*14*/].f_5 = 3;
			func_292(iVar10, iParam0, 26, iParam1);
			return;
			break;
	}
	func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_311(int iParam0, int iParam1)//Position - 0x2C397
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMM_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMM_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMM_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 320;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMM_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMM_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 245;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMM_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMM_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMM_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 415;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMM_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 315;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMM_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMM_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMM_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMM_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMM_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMM_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 265;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 570;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 560;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMM_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 260;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMM_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMM_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 430;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMM_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMM_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMM_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMM_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMM_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "HT_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 100;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMM_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMM_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMM_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMM_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMM_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMM_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMM_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMM_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1715;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 3900;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1550;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 4250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 4460;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 4970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 290;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 305;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 4170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 335;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 4940;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 275;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 3620;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMM_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMM_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMM_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMM_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMM_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMM_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMM_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 350;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMM_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 365;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMM_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 380;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMM_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMM_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMM_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMM_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMM_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMM_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMM_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMM_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMM_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMM_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMM_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMM_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMM_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMM_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMM_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMM_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMM_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMM_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMM_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMM_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMM_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMM_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMM_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMM_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMM_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMM_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMM_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMM_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMM_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMM_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 163:
			StringCopy(&Var2, "G_FMM_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "G_FMM_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "G_FMM_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMM_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMM_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMM_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMM_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMM_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 174:
			StringCopy(&Var2, "G_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "G_FMM_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "G_FMM_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 380;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMM_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMM_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMM_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMM_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMM_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 390;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "CLO_EXM_G_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 950;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "CLO_EXM_G_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 565;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "CLO_EXM_G_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 630;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "G_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "G_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "G_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 95;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "CLO_EXM_G_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "CLO_EXM_G_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 265;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "CLO_EXM_G_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 330;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "G_FMM_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "G_FMM_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "G_FMM_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMM_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMM_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMM_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMM_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMM_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "CLO_EXM_G_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "CLO_EXM_G_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 610;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "CLO_EXM_G_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 675;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "G_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 4050;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "G_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 4060;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "G_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 215:
			StringCopy(&Var2, "CLO_EXM_G_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 1760;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 216:
			StringCopy(&Var2, "CLO_EXM_G_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 1375;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 217:
			StringCopy(&Var2, "CLO_EXM_G_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 1440;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMM_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMM_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMM_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "G_FMM_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "G_FMM_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "G_FMM_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 1445;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMM_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 530;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMM_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "CLO_EXM_G_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 1170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "CLO_EXM_G_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 785;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "CLO_EXM_G_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 850;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 237:
			StringCopy(&Var2, "G_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 4260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 4310;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 4130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "G_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "G_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "G_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "G_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "CLO_EXM_G_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1885;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "CLO_EXM_G_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 1500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "CLO_EXM_G_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 1565;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "G_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "G_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "G_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 4290;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 4150;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 4295;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "CLO_EXM_G_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "CLO_EXM_G_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "CLO_EXM_G_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 6240;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 4955;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 5590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "G_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4920;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "G_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 4990;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "G_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 4780;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 4775;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 4800;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "CLO_EXM_G_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 2835;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "CLO_EXM_G_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 2450;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "CLO_EXM_G_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 2515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMM_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMM_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMM_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 273:
			StringCopy(&Var2, "G_FMM_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 274:
			StringCopy(&Var2, "G_FMM_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 275:
			StringCopy(&Var2, "G_FMM_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMM_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 385;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 310;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 3655;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 4055;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 3595;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 3605;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 3645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 320;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 286:
			StringCopy(&Var2, "CLO_EXM_G_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 2820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 287:
			StringCopy(&Var2, "CLO_EXM_G_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 2435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 288:
			StringCopy(&Var2, "CLO_EXM_G_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 2500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 230;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1605;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 2230;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2070;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 1690;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 297:
			StringCopy(&Var2, "CLO_EXM_G_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 2715;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 298:
			StringCopy(&Var2, "CLO_EXM_G_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2330;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 299:
			StringCopy(&Var2, "CLO_EXM_G_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 2395;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMM_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMM_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMM_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMM_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMM_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMM_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMM_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMM_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 308:
			StringCopy(&Var2, "G_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "G_FMM_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "G_FMM_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMM_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 95;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMM_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMM_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMM_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 485;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMM_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 545;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 316:
			StringCopy(&Var2, "CLO_EXM_G_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 317:
			StringCopy(&Var2, "CLO_EXM_G_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 318:
			StringCopy(&Var2, "CLO_EXM_G_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 695;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
	}
	if (iVar11 == 1)
	{
		iVar12 = (iParam0 - 10);
		if (iVar12 >= 0 && iVar12 < 121)
		{
			if (iVar12 > 8)
			{
				iVar12 = (iVar12 - 1);
			}
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_954[iVar12]) * Global_289489.f_18));
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = (iParam0 - 131);
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1075[iVar13]) * Global_289489.f_19));
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = (iParam0 - 155);
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1100[iVar14]) * Global_289489.f_20));
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = (iParam0 - 319);
		if (iVar15 >= 0 && iVar15 < 15)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1229[iVar15]) * Global_289489.f_21));
		}
	}
	if (iParam0 >= 327)
	{
		Global_71402[0 /*14*/].f_5 = 3;
		func_292(iVar10, iParam0, 327, iParam1);
		if (Global_71402[0 /*14*/].f_7 > 0)
		{
			if (FILES::_0x341DE7ED1D2A1BFD(Global_2621444, -1757550583, 1))
			{
				Global_71402[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_71402[0 /*14*/].f_7) * Global_289489.f_18));
			}
			else if (FILES::_0x341DE7ED1D2A1BFD(Global_2621444, 97230661, 1))
			{
				Global_71402[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_71402[0 /*14*/].f_7) * Global_289489.f_20));
			}
			else if (FILES::_0x341DE7ED1D2A1BFD(Global_2621444, 1147826474, 1))
			{
				Global_71402[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_71402[0 /*14*/].f_7) * Global_289489.f_21));
			}
		}
	}
	else
	{
		func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_312(int iParam0, int iParam1)//Position - 0x2F156
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 6:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_71402[0 /*14*/].f_5 = 3;
			func_292(iVar10, iParam0, 7, iParam1);
			return;
			break;
	}
	func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_313(int iParam0, int iParam1)//Position - 0x2F277
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 4:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 31:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 39:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 40:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 41:
			iVar6 = 10;
			iVar7 = 0;
			if (Global_262145.f_4171 != -1)
			{
				iVar1 = Global_262145.f_4171;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 42:
			iVar6 = 10;
			iVar7 = 1;
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 43:
			iVar6 = 10;
			iVar7 = 2;
			if (Global_262145.f_4173 != -1)
			{
				iVar1 = Global_262145.f_4173;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 44:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 50:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 59:
			iVar6 = 11;
			iVar7 = 2;
			if (Global_262145.f_4177 != -1)
			{
				iVar1 = Global_262145.f_4177;
			}
			else
			{
				iVar1 = 725;
			}
			break;
		
		case 60:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 61:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 62:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 12;
			iVar7 = 0;
			if (Global_262145.f_4174 != -1)
			{
				iVar1 = Global_262145.f_4174;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 74:
			iVar6 = 12;
			iVar7 = 1;
			if (Global_262145.f_4175 != -1)
			{
				iVar1 = Global_262145.f_4175;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 75:
			iVar6 = 12;
			iVar7 = 2;
			if (Global_262145.f_4176 != -1)
			{
				iVar1 = Global_262145.f_4176;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 76:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 90:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 91:
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		default:
			Global_71402[0 /*14*/].f_5 = 3;
			func_292(iVar10, iParam0, 92, iParam1);
			if (Global_71402[0 /*14*/].f_7 > 0)
			{
				Global_71402[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_71402[0 /*14*/].f_7) * Global_289489.f_57));
			}
			return;
			break;
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_289489.f_57));
	StringCopy(&Var2, "T_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_314(int iParam0, int iParam1)//Position - 0x2FB6F
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_71402[0 /*14*/].f_5 = 3;
			func_292(iVar10, iParam0, 26, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "M_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = (iParam0 - 1);
	if (iVar11 >= 0 && iVar11 < 26)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_927[iVar11]) * Global_289489.f_22));
	}
	func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_315(int iParam0, int iParam1)//Position - 0x2FE26
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 300;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 285;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 165;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 480;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 155;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 350;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 290;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 165;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 165;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 170;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 155;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 165;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 165;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 160;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 205;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 560;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 275;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 300;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 360;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 355;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 310;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 350;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 305;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 280;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 320;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 65;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 65;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 165;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 165;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 185;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 175;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 185;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 460;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 185;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 190;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 165;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 165;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 185;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 175;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 235;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 445;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 185;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 190;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 175;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 215;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 225;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 230;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 235;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 225;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 225;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 230;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 235;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 215;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 425;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 245;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 225;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 135;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 140;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 115;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 115;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 115;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 500;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 440;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 1090;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 1865;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 490;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 470;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 1795;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 1830;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 455;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 455;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 2110;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 380;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 1655;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 415;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 730;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 445;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 425;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 410;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 480;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 485;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 480;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 395;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 495;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 2090;
			break;
		
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 450;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 685;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 365;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 465;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 405;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 400;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 440;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 385;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 435;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 375;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 390;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 475;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 430;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 490;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 490;
			break;
		
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 615;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 315;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 415;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 425;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 435;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 445;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 640;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 460;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 465;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 745;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 845;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 1420;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 475;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 470;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 1000;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 690;
			break;
	}
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_670[iVar11]) * Global_289489.f_17));
	}
	StringCopy(&Var2, "F_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 >= 256)
	{
		Global_71402[0 /*14*/].f_5 = 3;
		func_292(iVar10, iParam0, 256, iParam1);
		if (Global_71402[0 /*14*/].f_7 > 0)
		{
			Global_71402[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_71402[0 /*14*/].f_7) * Global_289489.f_17));
		}
	}
	else
	{
		func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_316(int iParam0, int iParam1)//Position - 0x31464
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 335;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 460;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 455;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 470;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 385;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 455;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 2150;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 375;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 2190;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 295;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 2240;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 465;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 1740;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 1415;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 325;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 345;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 355;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 395;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 315;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 265;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 305;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 255;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 235;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 245;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 1865;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 450;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 415;
			break;
		
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 100;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 100;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 90;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 225;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 205;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 215;
			break;
		
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 490;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 485;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 485;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 100;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 80;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 95;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 440;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 380;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 80;
			break;
		
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 140;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 255;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 325;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 110;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 345;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 745;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 120;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 130;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 140;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 660;
			break;
		
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 150;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 75;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 90;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 145;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 155;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 255;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 165;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1150;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1150;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 1210;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 1125;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 1135;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 1145;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 1145;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 845;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 480;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 475;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 460;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 475;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 470;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 100;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 100;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 95;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 105;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 295;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 285;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 275;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 105;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 100;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 95;
			break;
	}
	StringCopy(&Var2, "L_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_175[iVar11]) * Global_289489.f_15));
	}
	if (iParam0 >= 256)
	{
		Global_71402[0 /*14*/].f_5 = 3;
		func_292(iVar10, iParam0, 256, iParam1);
		if (Global_71402[0 /*14*/].f_7 > 0)
		{
			Global_71402[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_71402[0 /*14*/].f_7) * Global_289489.f_15));
		}
	}
	else
	{
		func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_317(int iParam0, int iParam1)//Position - 0x32A97
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		default:
			Global_71402[0 /*14*/].f_5 = 3;
			func_292(iVar10, iParam0, 16, iParam1);
			return;
			break;
	}
	func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_318(int iParam0, int iParam1)//Position - 0x32BEE
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 11:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 21:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 23:
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 26:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 27:
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 28:
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 29:
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 31:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 32:
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 33:
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 34:
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 36:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 37:
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 38:
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 39:
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 40:
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 41:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 42:
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 43:
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 44:
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 45:
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		default:
			Global_71402[0 /*14*/].f_5 = 3;
			func_292(iVar10, iParam0, 46, iParam1);
			return;
			break;
	}
	func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_319(int iParam0, int iParam1)//Position - 0x32F0A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar6 = 1;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar6 = 1;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 33:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 49:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 50:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 51:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 58:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 60:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 65:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 66:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 67:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 80;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[80]));
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[81]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[82]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 50;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[87]));
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMM_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMM_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMM_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMM_5_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMM_5_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMM_5_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMM_5_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMM_5_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 97:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 98:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 99:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 100:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 101:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 102:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			if (Global_262145.f_4198 != -1)
			{
				iVar1 = Global_262145.f_4198;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 103:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 104:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 105:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 106:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 107:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 108:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 109:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 110:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 111:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 112:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 113:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 114:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 115:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 116:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 117:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 118:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			if (Global_262145.f_4198 != -1)
			{
				iVar1 = Global_262145.f_4198;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 119:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 120:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 121:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 122:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 123:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 124:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 125:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 126:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 127:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 435;
			}
			break;
	}
	switch (iParam0)
	{
		case 128:
			StringCopy(&Var2, "U_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 136:
			StringCopy(&Var2, "U_FMM_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 137:
			StringCopy(&Var2, "U_FMM_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 138:
			StringCopy(&Var2, "U_FMM_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 139:
			StringCopy(&Var2, "U_FMM_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 140:
			StringCopy(&Var2, "U_FMM_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 141:
			StringCopy(&Var2, "U_FMM_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 142:
			StringCopy(&Var2, "U_FMM_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 143:
			StringCopy(&Var2, "U_FMM_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 144:
			StringCopy(&Var2, "U_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 145:
			StringCopy(&Var2, "U_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 340;
			break;
		
		case 146:
			StringCopy(&Var2, "U_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 335;
			break;
		
		case 147:
			StringCopy(&Var2, "U_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 148:
			StringCopy(&Var2, "U_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 345;
			break;
		
		case 149:
			StringCopy(&Var2, "U_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 550;
			break;
		
		case 150:
			StringCopy(&Var2, "U_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 151:
			StringCopy(&Var2, "U_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 152:
			StringCopy(&Var2, "U_FMM_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 153:
			StringCopy(&Var2, "U_FMM_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 154:
			StringCopy(&Var2, "U_FMM_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 545;
			break;
		
		case 155:
			StringCopy(&Var2, "U_FMM_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 156:
			StringCopy(&Var2, "U_FMM_9_12", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 315;
			break;
		
		case 157:
			StringCopy(&Var2, "U_FMM_9_13", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 520;
			break;
		
		case 158:
			StringCopy(&Var2, "U_FMM_9_14", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 159:
			StringCopy(&Var2, "U_FMM_9_15", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 160:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 161:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 162:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 163:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 164:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 165:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 166:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 167:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			if (Global_262145.f_4198 != -1)
			{
				iVar1 = Global_262145.f_4198;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 168:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 169:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 170:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 171:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 172:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 173:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			if (Global_262145.f_4197 != -1)
			{
				iVar1 = Global_262145.f_4197;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 174:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 175:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 460;
			}
			break;
		
		case 176:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 177:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 178:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 179:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 180:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 181:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 182:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 183:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			if (Global_262145.f_4198 != -1)
			{
				iVar1 = Global_262145.f_4198;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 184:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 185:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 186:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 187:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 188:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 189:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			if (Global_262145.f_4197 != -1)
			{
				iVar1 = Global_262145.f_4197;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 190:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 191:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 460;
			}
			break;
	}
	switch (iParam0)
	{
		case 192:
			StringCopy(&Var2, "U_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 193:
			StringCopy(&Var2, "U_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 194:
			StringCopy(&Var2, "U_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 695;
			break;
		
		case 195:
			StringCopy(&Var2, "U_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 196:
			StringCopy(&Var2, "U_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 197:
			StringCopy(&Var2, "U_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 198:
			StringCopy(&Var2, "U_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 199:
			StringCopy(&Var2, "U_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 450;
			break;
		
		case 200:
			StringCopy(&Var2, "U_FMM_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 201:
			StringCopy(&Var2, "U_FMM_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 202:
			StringCopy(&Var2, "U_FMM_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 1060;
			break;
		
		case 203:
			StringCopy(&Var2, "U_FMM_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 1040;
			break;
		
		case 204:
			StringCopy(&Var2, "U_FMM_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 205:
			StringCopy(&Var2, "U_FMM_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 206:
			StringCopy(&Var2, "U_FMM_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 207:
			StringCopy(&Var2, "U_FMM_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 208:
			StringCopy(&Var2, "U_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 209:
			StringCopy(&Var2, "U_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 210:
			StringCopy(&Var2, "U_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 680;
			break;
		
		case 211:
			StringCopy(&Var2, "U_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 212:
			StringCopy(&Var2, "U_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "U_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 214:
			StringCopy(&Var2, "U_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "U_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "U_FMM_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "U_FMM_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "U_FMM_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "U_FMM_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "U_FMM_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "U_FMM_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1065;
			break;
		
		case 222:
			StringCopy(&Var2, "U_FMM_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "U_FMM_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[16]));
			break;
		
		case 225:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[17]));
			break;
		
		case 226:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[19]));
			break;
		
		case 228:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 315;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[20]));
			break;
		
		case 229:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 215;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[21]));
			break;
		
		case 230:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 265;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[22]));
			break;
		
		case 231:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[23]));
			break;
		
		case 232:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 205;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[24]));
			break;
		
		case 233:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 234:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 235:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[27]));
			break;
		
		case 236:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 55;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[28]));
			break;
		
		case 237:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 238:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 170;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[30]));
			break;
		
		case 239:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 240:
			StringCopy(&Var2, "U_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 0;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[32]));
			break;
	}
	if (iParam0 == 23 || iParam0 == 231)
	{
		if (func_273(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2979));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(45) * Global_262145.f_432[23]));
		}
	}
	else if (iParam0 == 17 || iParam0 == 225)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(450) * Global_262145.f_2978));
	}
	else if (iParam0 == 28 || iParam0 == 236)
	{
		if (func_273(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_262145.f_2977));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(55) * Global_262145.f_432[28]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 32)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[iVar11]));
		}
	}
	else if (iParam0 >= 32 && iParam0 < 48)
	{
		iVar12 = (iParam0 - 32);
		if (iVar12 >= 0 && iVar12 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[iVar12]));
		}
	}
	else if (iParam0 >= 128 && iParam0 < 160)
	{
		iVar13 = (iParam0 - 160) + 124;
		if (iVar13 >= 0 && iVar13 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[iVar13]));
		}
	}
	else if (iParam0 >= 192 && iParam0 < 224)
	{
		iVar14 = (iParam0 - 160) + 188;
		if (iVar14 >= 0 && iVar14 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[iVar14]));
		}
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_289489.f_16));
	if (iParam0 >= 241)
	{
		Global_71402[0 /*14*/].f_5 = 3;
		func_292(iVar10, iParam0, 241, iParam1);
		if (Global_71402[0 /*14*/].f_7 > 0)
		{
			Global_71402[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_71402[0 /*14*/].f_7) * Global_289489.f_16));
		}
	}
	else
	{
		func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_320(int iParam0, int iParam1)//Position - 0x353FE
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 160;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 205;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 110;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 115;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 150;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 150;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 115;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 140;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 115;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 150;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 275;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 460;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 260;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 2520;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 350;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 3125;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 2485;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 2945;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 3080;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 2990;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 3750;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 515;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 530;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 2810;
			break;
		
		case 108:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 109:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 110:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 320;
			break;
		
		case 111:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 140;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 150;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 140;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 135;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 130;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 130;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 145;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 740;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 790;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 130;
			break;
	}
	switch (iParam0)
	{
		case 124:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 125:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 128:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 141:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 340;
			break;
		
		case 142:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 335;
			break;
		
		case 143:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 345;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 550;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 545;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 315;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 520;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 156:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 505;
			break;
		
		case 157:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 470;
			break;
		
		case 158:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 475;
			break;
		
		case 159:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 173:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 360;
			break;
		
		case 174:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 2450;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 188:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 189:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 190:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 695;
			break;
		
		case 191:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 450;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 1060;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 1040;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 205:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 206:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 680;
			break;
		
		case 207:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 208:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1065;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 220:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 221:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 222:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 440;
			break;
		
		case 223:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 445;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 440;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 325;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 435;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 440;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 325;
			break;
		
		case 236:
			iVar6 = 15;
			iVar7 = 0;
			break;
	}
	StringCopy(&Var2, "U_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 23)
	{
		if (func_273(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2979) * Global_289489.f_16));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(45) * Global_262145.f_432[23]) * Global_289489.f_16));
		}
	}
	else if (iParam0 == 17)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(450) * Global_262145.f_2978) * Global_289489.f_16));
	}
	else if (iParam0 == 28)
	{
		if (func_273(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(500) * Global_262145.f_2977) * Global_289489.f_16));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(55) * Global_262145.f_432[28]) * Global_289489.f_16));
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[iVar11]) * Global_289489.f_16));
		}
	}
	if (iParam0 >= 237)
	{
		Global_71402[0 /*14*/].f_5 = 3;
		func_292(iVar10, iParam0, 237, iParam1);
		if (Global_71402[0 /*14*/].f_7 > 0)
		{
			Global_71402[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_71402[0 /*14*/].f_7) * Global_289489.f_16));
		}
	}
	else
	{
		func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_321(int iParam0, int iParam1)//Position - 0x36989
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[0]));
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 190;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[1]));
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 185;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[2]));
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 180;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[3]));
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 175;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[4]));
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 170;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[5]));
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 580;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[6]));
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 575;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[7]));
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 570;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[8]));
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 565;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[9]));
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 560;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[10]));
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 1100;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[11]));
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 1095;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[12]));
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 1090;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[13]));
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 1085;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[14]));
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 1080;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[15]));
			break;
		
		case 18:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 520;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[16]));
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 515;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[17]));
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 510;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[18]));
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 505;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[19]));
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[20]));
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 25:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 295;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[21]));
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 290;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[22]));
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 285;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[23]));
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 280;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[24]));
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 275;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[25]));
			break;
		
		case 31:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 950;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[26]));
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 945;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[27]));
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 940;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[28]));
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 935;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[29]));
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 930;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[30]));
			break;
		
		case 37:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 440;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[31]));
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 435;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[32]));
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 430;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[33]));
			break;
		
		case 41:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 425;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[34]));
			break;
		
		case 42:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 420;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[35]));
			break;
		
		case 43:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 44:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1150;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[36]));
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 1145;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[37]));
			break;
		
		case 47:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 1140;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[38]));
			break;
		
		case 48:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1135;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[39]));
			break;
		
		case 49:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1130;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[40]));
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 395;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[41]));
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 390;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[42]));
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 385;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[43]));
			break;
		
		case 53:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 380;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[44]));
			break;
		
		case 54:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 375;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[45]));
			break;
		
		case 55:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 56:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 57:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[46]));
			break;
		
		case 58:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 495;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[47]));
			break;
		
		case 59:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 490;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[48]));
			break;
		
		case 60:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 485;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[49]));
			break;
		
		case 61:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 480;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[50]));
			break;
		
		case 62:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 1050;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[51]));
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 1045;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[52]));
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 1040;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[53]));
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 1035;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[54]));
			break;
		
		case 67:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 1030;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[55]));
			break;
		
		case 68:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 69:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 550;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[56]));
			break;
		
		case 70:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 545;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[57]));
			break;
		
		case 71:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 540;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[58]));
			break;
		
		case 72:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 535;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[59]));
			break;
		
		case 73:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 530;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[60]));
			break;
		
		case 74:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 1200;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[61]));
			break;
		
		case 75:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1195;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[62]));
			break;
		
		case 76:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 1190;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[63]));
			break;
		
		case 77:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 1185;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[64]));
			break;
		
		case 78:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1180;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[65]));
			break;
		
		case 79:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 80:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 2000;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[66]));
			break;
		
		case 81:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 1995;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[67]));
			break;
		
		case 82:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 1990;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[68]));
			break;
		
		case 83:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 1985;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[69]));
			break;
		
		case 84:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 1980;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[70]));
			break;
		
		case 85:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 475;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[71]));
			break;
		
		case 86:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 470;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[72]));
			break;
		
		case 87:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 465;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[73]));
			break;
		
		case 88:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 460;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[74]));
			break;
		
		case 89:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 455;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[75]));
			break;
		
		case 90:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		default:
			Global_71402[0 /*14*/].f_5 = 3;
			func_292(iVar10, iParam0, 91, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_286(&(Global_71402[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_322()//Position - 0x37843
{
	Global_71402[0 /*14*/].f_1 = -1;
	Global_71402[0 /*14*/].f_2 = -1;
	Global_71402[0 /*14*/].f_5 = -1;
	Global_71402[0 /*14*/].f_3 = -1;
	Global_71402[0 /*14*/].f_4 = -1;
	Global_71402[0 /*14*/].f_7 = 0;
	Global_71402[0 /*14*/].f_6 = 0;
	Global_71402[0 /*14*/].f_13 = -1;
	Global_71402[0 /*14*/].f_12 = 0;
	Global_71402[0 /*14*/] = 0;
	StringCopy(&(Global_71402[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_323()//Position - 0x378BC
{
	return ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
}

int func_324(int iParam0, int iParam1)//Position - 0x378CC
{
	char* sVar0;
	struct<14> Var13;
	
	if (iParam0 == 10)
	{
		if ((func_64(PLAYER::PLAYER_ID()) && func_275(&sVar0, iParam1, 3, PLAYER::PLAYER_PED_ID(), -1)) || (!func_64(PLAYER::PLAYER_ID()) && func_275(&sVar0, iParam1, 4, PLAYER::PLAYER_PED_ID(), -1)))
		{
			if (!func_325(MISC::GET_HASH_KEY(&sVar0)))
			{
				return 1;
			}
		}
	}
	else if (iParam0 != -1)
	{
		if ((iParam1 != -1 && iParam1 != -99) && func_244(func_323(), iParam0, iParam1))
		{
			Var13 = { func_283(func_323(), iParam0, iParam1, -1) };
			if (MISC::IS_BIT_SET(Var13.f_6, 1) && !func_325(MISC::GET_HASH_KEY(&(Var13.f_8))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_325(int iParam0)//Position - 0x37994
{
	switch (iParam0)
	{
		case -1823757478:
		case 1792693843:
			return func_223(9366, -1, -1);
			break;
		
		case -546421858:
		case -2062447935:
			return func_223(9367, -1, -1);
			break;
		
		case -55017934:
		case -77301911:
			return func_223(9369, -1, -1);
			break;
		
		case -890070361:
		case 330672139:
			return func_223(9368, -1, -1);
			break;
		
		case 209462597:
		case -842032640:
			return func_223(9365, -1, -1);
			break;
		
		case 915306857:
		case 869950996:
			return func_223(9364, -1, -1);
			break;
		
		case 683400644:
		case 572834473:
			return func_223(9363, -1, -1);
			break;
		
		case -644137588:
		case 281910967:
			return func_223(9362, -1, -1);
			break;
		
		case -894001213:
		case 1063549924:
			return func_223(9370, -1, -1);
			break;
		
		case -131040586:
		case 748049992:
			return func_223(9371, -1, -1);
			break;
		
		case -1965580286:
		case 1519006255:
			return func_223(9372, -1, -1);
			break;
		
		case -2103079010:
		case -937292447:
			return func_223(9373, -1, -1);
			break;
		
		case -1350342311:
		case -170465078:
			return func_223(9374, -1, -1);
			break;
		
		case -1521855257:
		case -476265386:
			return func_223(9384, -1, -1);
			break;
		
		case 647714915:
		case 322085761:
			return func_223(9385, -1, -1);
			break;
		
		case 912357359:
		case -1294245168:
			return func_223(9375, -1, -1);
			break;
		
		case 52793720:
		case -1332781512:
			return func_223(9376, -1, -1);
			break;
		
		case -1382547450:
		case 403942439:
			return func_223(9377, -1, -1);
			break;
		
		case -537992013:
		case 1775882162:
			return func_223(9378, -1, -1);
			break;
		
		case -766391943:
		case 2090333486:
			return func_223(9379, -1, -1);
			break;
		
		case -2071810596:
		case 1314232490:
			return func_223(9380, -1, -1);
			break;
		
		case -1463617956:
		case 904357834:
			return func_223(9381, -1, -1);
			break;
		
		case -1692083424:
		case 128518990:
			return func_223(9382, -1, -1);
			break;
		
		case 1293532939:
		case 443232466:
			return func_223(9383, -1, -1);
			break;
	}
	switch (iParam0)
	{
		case 1449707070:
		case -773166702:
			return func_223(3593, -1, -1);
			break;
		
		case -1912404917:
		case -308456130:
			return func_223(3615, -1, -1);
			break;
		
		case 603600547:
		case -1599080941:
			return func_219(152, -1);
			break;
		
		case 1629732254:
		case 1924108767:
			return func_219(151, -1);
			break;
		
		case 1470149028:
		case 2134049184:
			return func_223(3783, -1, -1);
			break;
		
		case -1357324997:
		case 513852309:
			return func_223(3784, -1, -1);
			break;
		
		case -399192206:
		case 342339363:
			return func_223(3785, -1, -1);
			break;
		
		case -890006288:
		case -655247304:
			return func_223(3786, -1, -1);
			break;
		
		case 64652989:
		case 799565220:
			return func_223(3787, -1, -1);
			break;
		
		case -161453111:
		case -715443961:
			return func_223(3788, -1, -1);
			break;
		
		case 795762148:
		case -905176471:
			return func_223(3789, -1, -1);
			break;
		
		case 296559202:
		case -121210915:
			return func_223(3790, -1, -1);
			break;
		
		case 1253971075:
		case -426585226:
			return func_223(3791, -1, -1);
			break;
		
		case 1023408391:
		case -1823527696:
			return func_223(3792, -1, -1);
			break;
		
		case 1504591288:
		case -1899487013:
			return func_223(3793, -1, -1);
			break;
		
		case 2023063246:
		case 613041245:
			return func_223(3794, -1, -1);
			break;
		
		case 1718016625:
		case -149165695:
			return func_223(3795, -1, -1);
			break;
		
		case 1428731893:
		case -923398858:
			return func_223(3796, -1, -1);
			break;
		
		case 1101074662:
		case -1017249282:
			return func_223(3797, -1, -1);
			break;
		
		case -1351684992:
		case -726555483:
			return func_223(3798, -1, -1);
			break;
		
		case -1657386993:
		case -372257055:
			return func_223(3799, -1, -1);
			break;
		
		case -1946409573:
		case -114397794:
			return func_223(3800, -1, -1);
			break;
		
		case 2042003728:
		case -1101989916:
			return func_223(3801, -1, -1);
			break;
		
		case -170362538:
		case -1749374280:
			return func_223(3802, -1, -1);
			break;
		
		case -893708693:
		case -477604174:
			return func_223(4260, -1, -1);
			break;
		
		case -660753872:
		case 364034822:
			return func_223(4257, -1, -1);
			break;
		
		case -1412999036:
		case 136191965:
			return func_223(4269, -1, -1);
			break;
		
		case -1121780933:
		case 442582143:
			return func_223(4261, -1, -1);
			break;
		
		case -2121038819:
		case 84482511:
			return func_223(4259, -1, -1);
			break;
		
		case -1880350514:
		case 971670421:
			return func_223(4268, -1, -1);
			break;
		
		case 1724501642:
		case 736159614:
			return func_223(4265, -1, -1);
			break;
		
		case 1953982949:
		case 1667815057:
			return func_223(4258, -1, -1);
			break;
		
		case 1100809265:
		case 1294641685:
			return func_223(4264, -1, -1);
			break;
		
		case 1341235418:
		case -2030199366:
			return func_223(4267, -1, -1);
			break;
		
		case 202917910:
		case 601407264:
			return func_223(4262, -1, -1);
			break;
		
		case 509799595:
		case 764138118:
			return func_223(4263, -1, -1);
			break;
		
		case 797675260:
		case 1968955913:
			return func_223(4266, -1, -1);
			break;
		
		case -1155192675:
		case 1485373828:
			return func_223(4247, -1, -1);
			break;
		
		case -1928704920:
		case -71251979:
			return func_223(4248, -1, -1);
			break;
		
		case -524880960:
		case 235269247:
			return func_223(4249, -1, -1);
			break;
		
		case -1356263259:
		case 517180954:
			return func_223(4250, -1, -1);
			break;
		
		case 68860555:
		case 756099733:
			return func_223(4251, -1, -1);
			break;
		
		case -704258466:
		case -1329647121:
			return func_223(4252, -1, -1);
			break;
		
		case -902445334:
		case -975545307:
			return func_223(4253, -1, -1);
			break;
		
		case -133258609:
		case -721683864:
			return func_223(4254, -1, -1);
			break;
		
		case -296251615:
		case -356899352:
			return func_223(4255, -1, -1);
			break;
		
		case 479292308:
		case -1253393710:
			return func_223(4256, -1, -1);
			break;
	}
	return 0;
}

void func_326()//Position - 0x38124
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = SYSTEM::ROUND((50f * Global_262145.f_110));
		func_146(816, iVar0, -1, 1, 0);
		iVar1 = PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID());
		iVar2 = PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID());
		iVar3 = (iVar1 - iVar2);
		PED::SET_PED_ARMOUR(PLAYER::PLAYER_PED_ID(), (iVar2 + iVar3));
	}
}

int func_327(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x3817E
{
	int iVar0;
	
	iVar0 = -1;
	HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
	func_207(9, sParam0, 1, sParam1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

char* func_328(int iParam0, bool bParam1)//Position - 0x381B9
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case 1742569970:
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case -1474608608:
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case 527765612:
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case -165357558:
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case -1372674932:
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_railgun"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case joaat("weapon_machete"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("weapon_machinepistol"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case joaat("weapon_dbshotgun"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("weapon_compactrifle"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("weapon_switchblade"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("weapon_revolver"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case 317205821:
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case -853065399:
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case 125959754:
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case -1121678507:
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case -1169823560:
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case -1810795771:
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case 419712736:
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		case -1075685676:
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case 2024373456:
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case 177293209:
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case -608341376:
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case 961495388:
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case -86904375:
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case 1432025498:
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case -1768145561:
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case -2009644972:
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case 1785463520:
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case -879347409:
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case -2066285827:
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case -1746263880:
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		case 940833800:
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		
		case -1355376991:
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		
		case 1198256469:
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		
		case -1238556825:
			if (bParam1)
			{
				return "WTU_RAYMINIGUN";
			}
			else
			{
				return "WT_RAYMINIGUN";
			}
			break;
		
		default:
			if (func_330(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_329(&(Var0.f_31));
				}
				else
				{
					return func_329(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_329(var uParam0)//Position - 0x38E35
{
	return uParam0;
}

int func_330(int iParam0, var uParam1)//Position - 0x38E3F
{
	int iVar0;
	int iVar1;
	
	iVar1 = FILES::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_331(var uParam0, var uParam1)//Position - 0x38E7A
{
	bool bVar0;
	
	bVar0 = false;
	*uParam1 = uParam0;
	while (!func_332(*uParam1, -1, 0))
	{
		switch (*uParam1)
		{
			case joaat("weapon_minigun"):
				*uParam1 = joaat("weapon_rpg");
				break;
			
			case joaat("weapon_rpg"):
				*uParam1 = joaat("weapon_grenadelauncher");
				break;
			
			case joaat("weapon_grenadelauncher"):
				*uParam1 = joaat("weapon_mg");
				break;
			
			case joaat("weapon_molotov"):
				*uParam1 = joaat("weapon_grenade");
				break;
			
			case joaat("weapon_grenade"):
				*uParam1 = joaat("weapon_smokegrenade");
				break;
			
			case joaat("weapon_smokegrenade"):
				*uParam1 = joaat("weapon_petrolcan");
				break;
			
			case joaat("weapon_petrolcan"):
				*uParam1 = joaat("weapon_stickybomb");
				break;
			
			case joaat("weapon_stickybomb"):
				*uParam1 = joaat("weapon_pistol");
				break;
			
			case joaat("weapon_combatmg"):
				*uParam1 = joaat("weapon_mg");
				break;
			
			case joaat("weapon_mg"):
				*uParam1 = joaat("weapon_assaultrifle");
				break;
			
			case joaat("weapon_heavysniper"):
				*uParam1 = joaat("weapon_sniperrifle");
				break;
			
			case joaat("weapon_sniperrifle"):
				*uParam1 = joaat("weapon_assaultrifle");
				break;
			
			case joaat("weapon_advancedrifle"):
				*uParam1 = joaat("weapon_carbinerifle");
				break;
			
			case joaat("weapon_carbinerifle"):
				*uParam1 = joaat("weapon_assaultrifle");
				break;
			
			case joaat("weapon_assaultrifle"):
				*uParam1 = joaat("weapon_smg");
				break;
			
			case joaat("weapon_smg"):
				*uParam1 = joaat("weapon_microsmg");
				break;
			
			case joaat("weapon_microsmg"):
				*uParam1 = joaat("weapon_pistol");
				break;
			
			case joaat("weapon_assaultshotgun"):
				*uParam1 = joaat("weapon_pumpshotgun");
				break;
			
			case joaat("weapon_pumpshotgun"):
				*uParam1 = joaat("weapon_sawnoffshotgun");
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				*uParam1 = joaat("weapon_pistol");
				break;
			
			case joaat("weapon_appistol"):
				*uParam1 = joaat("weapon_combatpistol");
				break;
			
			case joaat("weapon_combatpistol"):
				*uParam1 = joaat("weapon_pistol");
				break;
			
			case joaat("weapon_pistol"):
				*uParam1 = joaat("weapon_knife");
				break;
			
			default:
				*uParam1 = joaat("weapon_pistol");
				break;
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

bool func_332(int iParam0, int iParam1, int iParam2)//Position - 0x39041
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (func_337())
	{
		return 0;
	}
	iVar0 = func_335(iParam0, iParam1);
	iVar1 = func_333(iParam0);
	return MISC::IS_BIT_SET(iVar0, func_253(iVar1));
}

int func_333(int iParam0)//Position - 0x39078
{
	return func_334(iParam0);
}

int func_334(int iParam0)//Position - 0x39086
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 0;
			break;
		
		case joaat("weapon_pistol"):
			return 1;
			break;
		
		case joaat("weapon_combatpistol"):
			return 2;
			break;
		
		case joaat("weapon_appistol"):
			return 3;
			break;
		
		case joaat("weapon_pistol50"):
			return 4;
			break;
		
		case joaat("weapon_smg"):
			return 5;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 6;
			break;
		
		case joaat("weapon_microsmg"):
			return 7;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 9;
			break;
		
		case -947031628:
			return 10;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 11;
			break;
		
		case joaat("weapon_mg"):
			return 12;
			break;
		
		case joaat("weapon_combatmg"):
			return 13;
			break;
		
		case -572349828:
			return 14;
			break;
		
		case joaat("weapon_stickybomb"):
			return 15;
			break;
		
		case joaat("weapon_grenade"):
			return 16;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 17;
			break;
		
		case joaat("weapon_remotesniper"):
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 20;
			break;
		
		case joaat("weapon_heavysniper"):
			return 21;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 22;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 23;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 24;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 25;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 26;
			break;
		
		case joaat("weapon_rpg"):
			return 27;
			break;
		
		case joaat("weapon_minigun"):
			return 28;
			break;
		
		case -344484024:
			return 29;
			break;
		
		case -1887867191:
			return 30;
			break;
		
		case joaat("weapon_stungun"):
			return 31;
			break;
		
		case -837150131:
			return 32;
			break;
		
		case joaat("gadget_parachute"):
			return 33;
			break;
		
		case joaat("weapon_knife"):
			return 34;
			break;
		
		case joaat("weapon_nightstick"):
			return 35;
			break;
		
		case joaat("weapon_hammer"):
			return 36;
			break;
		
		case joaat("weapon_bat"):
			return 37;
			break;
		
		case joaat("weapon_crowbar"):
			return 38;
			break;
		
		case joaat("weapon_golfclub"):
			return 39;
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			return 40;
			break;
		
		case joaat("weapon_molotov"):
			return 41;
			break;
		
		case joaat("weapon_fireextinguisher"):
			return 42;
			break;
		
		case joaat("weapon_petrolcan"):
			return 43;
			break;
		
		case joaat("weapon_digiscanner"):
			return 44;
			break;
		
		case joaat("weapon_bottle"):
			return 45;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 46;
			break;
		
		case joaat("weapon_snspistol"):
			return 47;
			break;
		
		case joaat("weapon_heavypistol"):
			return 49;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 48;
			break;
		
		case joaat("weapon_gusenberg"):
			return 50;
			break;
		
		case joaat("weapon_dagger"):
			return 51;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 52;
			break;
		
		case joaat("weapon_flaregun"):
			return 57;
			break;
		
		case joaat("weapon_musket"):
			return 53;
			break;
		
		case joaat("weapon_firework"):
			return 54;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 56;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 55;
			break;
		
		case joaat("weapon_proxmine"):
			return 60;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 61;
			break;
		
		case joaat("weapon_hatchet"):
			return 58;
			break;
		
		case joaat("weapon_railgun"):
			return 59;
			break;
		
		case joaat("weapon_combatpdw"):
			return 64;
			break;
		
		case joaat("weapon_knuckle"):
			return 62;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 63;
			break;
		
		case joaat("weapon_machete"):
			return 65;
			break;
		
		case joaat("weapon_machinepistol"):
			return 68;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 66;
			break;
		
		case joaat("weapon_compactrifle"):
			return 67;
			break;
		
		case joaat("weapon_flashlight"):
			return 69;
			break;
		
		case joaat("weapon_revolver"):
			return 70;
			break;
		
		case joaat("weapon_switchblade"):
			return 71;
			break;
		
		case 317205821:
			return 72;
			break;
		
		case -1121678507:
			return 73;
			break;
		
		case 125959754:
			return 74;
			break;
		
		case -853065399:
			return 75;
			break;
		
		case -1169823560:
			return 76;
			break;
		
		case -1810795771:
			return 77;
			break;
		
		case 419712736:
			return 78;
			break;
		
		case 961495388:
			return 8;
			break;
		
		case -86904375:
			return 9;
			break;
		
		case -608341376:
			return 13;
			break;
		
		case 177293209:
			return 21;
			break;
		
		case -1075685676:
			return 1;
			break;
		
		case 2024373456:
			return 5;
			break;
		
		case 1432025498:
			return 22;
			break;
		
		case -1768145561:
			return 46;
			break;
		
		case -2009644972:
			return 47;
			break;
		
		case 1785463520:
			return 56;
			break;
		
		case -879347409:
			return 70;
			break;
		
		case -2066285827:
			return 48;
			break;
		
		case -1746263880:
			return 79;
			break;
		
		case 940833800:
			return 80;
			break;
		
		case -1355376991:
			return 81;
			break;
		
		case 1198256469:
			return 82;
			break;
		
		case -1238556825:
			return 83;
			break;
	}
	return 0;
}

var func_335(int iParam0, int iParam1)//Position - 0x395CC
{
	var uVar0;
	
	uVar0 = func_155(func_336(iParam0), iParam1, 0);
	return uVar0;
}

int func_336(int iParam0)//Position - 0x395E5
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_333(iParam0);
	iVar1 = func_252(iVar0);
	if ((func_251() == 0 || func_250() == 0) || (func_251() == 999 && func_250() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 679;
				break;
			
			case 1:
				return 680;
				break;
			
			case 2:
				return 2427;
				break;
			}
	}
	return 10383;
}

bool func_337()//Position - 0x39664
{
	return Global_1312846;
}

void func_338(int iParam0, int iParam1)//Position - 0x39670
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23355 == 0 || Global_262145.f_23355 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_23355 == 1)
			{
				Global_2528542.f_274 = iParam0;
				if (iParam1 > Global_262145.f_6475)
				{
					iParam1 = Global_262145.f_6475;
				}
				Global_2528542.f_275 = iParam1;
				Global_2528542.f_276 = 0;
			}
		}
	}
}

int func_339(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x396E2
{
	int iVar0;
	
	iVar0 = -1;
	HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
	func_207(4, sParam0, 1, "", iParam1, iParam2, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_340(vector3 vParam0, int iParam3)//Position - 0x3971E
{
	func_127(vParam0, iParam3, 6, 0, 0);
}

void func_341(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x39733
{
	int iVar0;
	
	if (!func_353())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0)
			{
				func_342(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_342(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
			if (iParam1 > 0)
			{
				func_342(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -1693570755:
			func_342(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case 1727256317:
		case -2017925037:
			func_342(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_342(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x39D38
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_353())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOP::_NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER(func_26()) || NETSHOP::_NETWORK_SHOP_GET_TRANSACTIONS_DISABLED())
		{
			Global_4264085 = 1;
			return 0;
		}
		if (Global_2459772)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264086 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263509[iVar2 /*84*/].f_65.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOP::_NETWORK_SHOP_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOP::_NETWORK_SHOP_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_349(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263509[*uParam0 /*84*/].f_65.f_8 = 1;
					Global_4263509[*uParam0 /*84*/].f_65.f_12 = 1;
				}
			}
			Global_4264070 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264084 = 1;
			Global_4264087 = iParam4;
			Global_4264089 = iParam3;
			Global_4264090 = 1;
			Global_4264088 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264087 = iParam4;
			Global_4264089 = iParam3;
			Global_4264090 = 1;
			Global_4264088 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_348(1, iParam4);
			Global_4264084 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_343(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_343(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x39EE3
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_344(iParam0);
	}
}

void func_344(int iParam0)//Position - 0x39F1B
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_353())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_347(iParam0))
		{
			if (!bVar0)
			{
				unk_0xFA336E7F40C0A0D0();
			}
		}
		else if (!bVar0)
		{
			NETSHOP::_NETWORK_SHOP_END_SERVICE(Global_4263509[iParam0 /*84*/].f_65);
		}
		func_345(&(Global_4263509[iParam0 /*84*/]));
	}
}

void func_345(var uParam0)//Position - 0x39F6F
{
	uParam0->f_65 = 0;
	uParam0->f_65 = 2147483647;
	uParam0->f_65.f_1 = 0;
	uParam0->f_65.f_2 = 0;
	uParam0->f_65.f_3 = -1593119440;
	uParam0->f_65.f_4 = -2085313189;
	uParam0->f_65.f_5 = 0;
	uParam0->f_65.f_6 = 1227573907;
	uParam0->f_65.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_346(&(uParam0->f_13));
	func_346(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_65.f_8 = 0;
	uParam0->f_65.f_9 = 0;
	uParam0->f_65.f_10 = 0;
	uParam0->f_65.f_11 = 0;
	uParam0->f_65.f_13 = 0;
	uParam0->f_65.f_12 = 0;
	uParam0->f_65.f_14 = 0;
	uParam0->f_65.f_15 = 0;
	uParam0->f_65.f_16 = 0;
	uParam0->f_65.f_18 = 0;
}

void func_346(var uParam0)//Position - 0x3A076
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_347(int iParam0)//Position - 0x3A0BE
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_348(int iParam0, int iParam1)//Position - 0x3A0E8
{
	Global_2460949 = iParam1;
	Global_2460948 = iParam0;
}

int func_349(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x3A0FC
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263509[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_353())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263509[iVar0 /*84*/].f_65.f_2 = 1;
			Global_4263509[iVar0 /*84*/].f_65.f_1 = iParam5;
			Global_4263509[iVar0 /*84*/].f_65.f_3 = iParam1;
			Global_4263509[iVar0 /*84*/].f_65.f_4 = iParam2;
			Global_4263509[iVar0 /*84*/].f_65.f_7 = iParam3;
			Global_4263509[iVar0 /*84*/].f_65.f_5 = 0;
			Global_4263509[iVar0 /*84*/].f_65 = iParam0;
			Global_4263509[iVar0 /*84*/].f_65.f_6 = iParam4;
			Global_4263509[iVar0 /*84*/].f_65.f_11 = uParam8;
			Global_4263509[iVar0 /*84*/].f_65.f_10 = iParam7;
			Global_4263509[iVar0 /*84*/].f_65.f_13 = iParam9;
			Global_4263509[iVar0 /*84*/].f_65.f_12 = 0;
			Global_4263509[iVar0 /*84*/].f_65.f_14 = MISC::GET_FRAME_COUNT();
			Global_4263509[iVar0 /*84*/].f_65.f_18 = 0;
			Global_4264070 = 0;
			if (bParam6)
			{
				Global_4263509[iVar0 /*84*/].f_65.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_350(Global_4263509[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_350(struct<66> Param0, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, int iParam84)//Position - 0x3A238
{
	vector3 vVar0;
	int iVar35;
	
	if (iParam84 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = 1803946278;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.f_2 = { Param0.f_65 };
	vVar0.f_2.f_32 = iParam84;
	iVar35 = func_352(vVar0.y);
	if ((Global_262145.f_23434 && !Global_262145.f_23435) && !Global_262145.f_23436)
	{
		return;
	}
	if (!iVar35 == 0)
	{
		func_351();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar35);
	}
}

void func_351()//Position - 0x3A2CA
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_352(int iParam0)//Position - 0x3A2DA
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_353()//Position - 0x3A2EC
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

void func_354(int iParam0, int iParam1)//Position - 0x3A303
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_401())
		{
			if (func_400(0))
			{
				if (!func_396(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_395()))
					{
						if (func_394() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_394());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_392(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_359("GB_BCUT_TICK1", func_395(), iVar0, 0, 0, 1, 1);
						}
						func_358(20);
						func_355(func_395(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_355(int iParam0, int iParam1, int iParam2)//Position - 0x3A3A4
{
	struct<8> Var0;
	
	if (func_468(iParam0, 0, 1))
	{
		Var0 = 614714962;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_357(iParam0);
		func_356(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_352(iParam0));
	}
}

void func_356(var uParam0, var uParam1)//Position - 0x3A3FA
{
	*uParam0 = Global_1645834.f_9;
	*uParam1 = Global_1645834.f_10;
}

var func_357(int iParam0)//Position - 0x3A414
{
	return Global_1626536[iParam0 /*603*/].f_529;
}

void func_358(int iParam0)//Position - 0x3A428
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2528542.f_4889.f_7[iVar0]), iVar1);
}

int func_359(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x3A451
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
		HUD::_SET_NOTIFICATION_COLOR_NEXT(func_362(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_360(&Var1));
		if (!iParam3 == 0)
		{
			HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		func_207(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

var func_360(char* sParam0)//Position - 0x3A4E9
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_361(&cVar0);
}

var func_361(char[4] cParam0)//Position - 0x3A50D
{
	return cParam0;
}

int func_362(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x3A517
{
	int iVar0;
	int iVar1;
	
	if (func_390(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_133551[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_390(PLAYER::PLAYER_ID()) || (func_389() && func_388())) && !MISC::IS_BIT_SET(Global_2528542.f_4582, 31)) && !bParam4)
	{
		iVar1 = func_387();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_468(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_133551[iParam1] != -1)
							{
								return func_385(iParam1, iParam0, 0);
							}
							else
							{
								return func_374(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_374(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_133551[iParam1] != -1)
				{
					return func_385(iParam1, iParam0, 0);
				}
				else
				{
					return func_363(0, -1, 0);
				}
			}
			else
			{
				return func_363(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_133551[iParam1] != -1)
		{
			return func_385(iParam1, iParam0, 0);
		}
		else
		{
			return func_374(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_374(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_363(bool bParam0, int iParam1, bool bParam2)//Position - 0x3A6F7
{
	return func_364(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_364(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x3A70D
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_373() || (func_372() && func_370())) && Global_1382745.f_1)
	{
		if (bParam1)
		{
			return func_369(iParam2, iVar0);
		}
		else
		{
			return func_369(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_158(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_368(1);
				}
				else
				{
					return func_368(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_365(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_365(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_368(1);
	}
	return func_368(0);
}

int func_365(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x3A814
{
	int iVar0;
	
	iVar0 = func_367(iParam0, iParam1, iParam3);
	if (func_366(Global_4456448.f_138474, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_366(int iParam0, bool bParam1)//Position - 0x3A92C
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_161209 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8910[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_367(int iParam0, int iParam1, int iParam2)//Position - 0x3A97D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_158(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_368(bool bParam0)//Position - 0x3A9C4
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_369(int iParam0, int iParam1)//Position - 0x3A9DB
{
	if (iParam0 == -1)
	{
		iParam0 = func_367(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_370()//Position - 0x3AA29
{
	if (func_371())
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_4456448.f_165254, 4);
}

bool func_371()//Position - 0x3AA4B
{
	return MISC::IS_BIT_SET(Global_4456448.f_154961, 12);
}

bool func_372()//Position - 0x3AA63
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_165254, 0);
	}
	return ((MISC::IS_BIT_SET(Global_4456448.f_165254, 0) || Global_1648547) && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_373()//Position - 0x3AAB0
{
	if (func_371() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_374(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x3AACD
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1589819[PLAYER::PLAYER_ID() /*818*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1589819[iVar2 /*818*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_382(1))
			{
				iVar3 = func_379(iParam0);
				if (!iVar3 == -1)
				{
					return func_377(iVar3);
				}
			}
			if ((func_376(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_158(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_368(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_375(1);
			}
			else
			{
				return func_364(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574400 || Global_1574391) || Global_1589819[iParam0 /*818*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574400 == 1 && Global_1574410 == 0))
			{
				return func_368(1);
			}
			else
			{
				return func_364(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574395 && Global_1573892.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_379(iParam0);
	if (!iVar4 == -1)
	{
		return func_377(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_375(bool bParam0)//Position - 0x3AC71
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_376(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3AC88
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_377(int iParam0)//Position - 0x3AD00
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_378(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_378(int iParam0)//Position - 0x3ADC3
{
	return Global_2417757.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_379(int iParam0)//Position - 0x3ADDA
{
	if (!iParam0 == func_34())
	{
		if (func_380(iParam0, 1))
		{
			return Global_2417757.f_2105.f_11[func_35(iParam0)];
		}
	}
	return -1;
}

bool func_380(int iParam0, bool bParam1)//Position - 0x3AE0C
{
	if (!bParam1)
	{
		if (func_381(iParam0))
		{
			return 0;
		}
	}
	return Global_1626536[iParam0 /*603*/].f_11 != func_34();
}

int func_381(int iParam0)//Position - 0x3AE37
{
	if (iParam0 != func_34())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_34())
		{
			return Global_1626536[iParam0 /*603*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_382(int iParam0)//Position - 0x3AE6C
{
	if ((func_384() || func_383()) || (func_30() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_383()//Position - 0x3AE9B
{
	return Global_2448756.f_15;
}

var func_384()//Position - 0x3AEA9
{
	return Global_2448756.f_14;
}

int func_385(int iParam0, int iParam1, bool bParam2)//Position - 0x3AEB7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969025.f_13[iParam0];
	if (func_382(1))
	{
		iVar2 = func_379(iParam1);
		if (!iVar2 == -1)
		{
			return func_377(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_105[iParam0 /*11309*/].f_5586[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_34())
	{
		if (Global_4456448.f_133551[iParam0] != -1 && Global_4456448.f_133551[iParam0] <= 4)
		{
			if (Global_4456448.f_133551[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_133551[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_133551[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_133551[iParam0] == 4)
			{
				if (MISC::IS_BIT_SET(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_133551[iParam0];
			}
		}
		else
		{
			iVar0 = func_364(iParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_386(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_15, 26) && !func_158(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_375(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_386(int iParam0)//Position - 0x3B045
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_161253;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_161254;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_161255;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_161256;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_387()//Position - 0x3B11A
{
	return Global_2359302.f_2;
}

bool func_388()//Position - 0x3B128
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

bool func_389()//Position - 0x3B139
{
	return MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_39.f_18, 14);
}

int func_390(int iParam0)//Position - 0x3B156
{
	if (func_24(iParam0, 0))
	{
		return 1;
	}
	if (func_391())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_391()//Position - 0x3B198
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

void func_392(int iParam0, bool bParam1)//Position - 0x3B1A9
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_393(1);
	}
	else
	{
		iVar1 = func_393(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_393(bool bParam0)//Position - 0x3B1DB
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12281;
}

int func_394()//Position - 0x3B201
{
	return Global_262145.f_12280;
}

int func_395()//Position - 0x3B210
{
	return Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11;
}

bool func_396(bool bParam0)//Position - 0x3B225
{
	return func_397(PLAYER::PLAYER_ID(), bParam0);
}

int func_397(int iParam0, bool bParam1)//Position - 0x3B237
{
	return func_398(iParam0, bParam1, 1);
}

int func_398(int iParam0, bool bParam1, int iParam2)//Position - 0x3B248
{
	int iVar0;
	
	if (iParam0 == func_34())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_399(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1626536[iParam0 /*603*/].f_11;
	if (iVar0 != func_34() && Global_1626536[iVar0 /*603*/].f_11.f_447 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_399(int iParam0, int iParam1)//Position - 0x3B2A4
{
	if (iParam0 != func_34())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_34())
		{
			if (Global_1626536[iParam0 /*603*/].f_11 == iParam0 && Global_1626536[iParam0 /*603*/].f_11.f_447 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_400(bool bParam0)//Position - 0x3B2F3
{
	return func_380(PLAYER::PLAYER_ID(), bParam0);
}

bool func_401()//Position - 0x3B305
{
	return func_381(PLAYER::PLAYER_ID());
}

int func_402(int iParam0, int iParam1)//Position - 0x3B315
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(iParam0) * Global_262145);
				iParam0 = SYSTEM::ROUND(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

void func_403(int iParam0)//Position - 0x3B356
{
	Global_2437364.f_1892 = iParam0;
}

void func_404(int iParam0, int iParam1, int iParam2)//Position - 0x3B367
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != 0)
	{
		iVar0 = (WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iParam0, 1) * iParam1);
		WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), iParam0, &iVar1);
		iVar2 = (iVar1 - WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0));
		if (iVar0 > iVar2)
		{
			iVar0 = iVar2;
		}
		WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), iParam0, iVar0);
		if (iParam2 == 1)
		{
			func_405(PLAYER::PLAYER_PED_ID(), iVar0);
		}
	}
}

void func_405(int iParam0, int iParam1)//Position - 0x3B3C8
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	
	if (iParam1 > 0)
	{
		if (func_29(ENTITY::GET_ENTITY_COORDS(iParam0, 0)))
		{
		}
		func_123(1);
		vVar0 = { func_125(PLAYER::PLAYER_PED_ID(), 1) };
		iVar4 = -1;
		iVar3 = 0;
		while (iVar3 < 20)
		{
			if (Global_2437364.f_1289[iVar3 /*30*/].f_6 == 0 || Global_2437364.f_1289[iVar3 /*30*/].f_6 == 7)
			{
				iVar4 = iVar3;
				iVar3 = 20;
			}
			iVar3++;
		}
		if (iVar4 != -1)
		{
			Global_2437364.f_1289[iVar4 /*30*/] = { vVar0 };
			Global_2437364.f_1289[iVar4 /*30*/].f_6 = 1;
			Global_2437364.f_1289[iVar4 /*30*/].f_4 = func_130(Global_2437364.f_1289[iVar4 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437364.f_1289[iVar4 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2437364.f_1289[iVar4 /*30*/].f_3 = iParam1;
			Global_2437364.f_1289[iVar4 /*30*/].f_8 = 1;
			Global_2437364.f_1289[iVar4 /*30*/].f_9 = func_129();
			Global_2437364.f_1289[iVar4 /*30*/].f_10 = func_128();
			Global_1667045 = 1;
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", 0);
		}
	}
}

var func_406(int iParam0)//Position - 0x3B4E4
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, 1);
	return uVar0;
}

void func_407()//Position - 0x3B4F8
{
}

void func_408()//Position - 0x3B500
{
	if (func_468(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!MISC::IS_BIT_SET(Global_2528542.f_206.f_1, 0))
		{
			if ((((((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !func_413()) && !func_412()) && !func_411()) && func_418(31, 0, 0)) && !func_438(PLAYER::PLAYER_ID())) && !func_410())
			{
				if (func_417(60000))
				{
					if (!func_180())
					{
						func_409("ACD_HELP1", -1);
					}
					MISC::SET_BIT(&(Global_2528542.f_206.f_1), 0);
				}
				else
				{
					MISC::SET_BIT(&(Global_2528542.f_206.f_1), 0);
				}
			}
		}
	}
}

void func_409(char* sParam0, int iParam1)//Position - 0x3B5AA
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

bool func_410()//Position - 0x3B5C1
{
	return Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_196 != 0;
}

bool func_411()//Position - 0x3B5D8
{
	return MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_39.f_18, 0);
}

bool func_412()//Position - 0x3B5F4
{
	return Global_93734.f_340 > 0;
}

bool func_413()//Position - 0x3B605
{
	return MISC::GET_GAME_TIMER() <= Global_17411.f_5878 + 100;
}

void func_414()//Position - 0x3B61A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = (1 - iVar0);
		if (iVar1 > 0)
		{
			Global_2528542.f_206.f_25[iVar1 /*3*/] = { Global_2528542.f_206.f_25[(iVar1 - 1) /*3*/] };
		}
		else
		{
			Global_2528542.f_206.f_25[iVar1 /*3*/] = { func_74(Local_103.f_2.f_68[0 /*104*/]) };
		}
		iVar0++;
	}
}

int func_415(char* sParam0, int iParam1)//Position - 0x3B67C
{
	int iVar0;
	
	iVar0 = -1;
	HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
	func_207(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

bool func_416()//Position - 0x3B6A8
{
	return Global_1312867;
}

bool func_417(int iParam0)//Position - 0x3B6B4
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2413879, NETWORK::GET_NETWORK_TIME())) > iParam0;
}

bool func_418(int iParam0, bool bParam1, bool bParam2)//Position - 0x3B6CF
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_7577 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_422(PLAYER::PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4716 == 1)
		{
			return 1;
		}
	}
	if (func_421() || func_420())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_419())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1574624[iVar1], iVar0);
}

int func_419()//Position - 0x3B83D
{
	int iVar0;
	
	if (Global_1312447)
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2528542.f_1722, 23))
	{
		return 1;
	}
	if (func_421())
	{
		return 1;
	}
	if (func_420())
	{
		return 1;
	}
	iVar0 = Global_1382690[func_151(-1)];
	if (MISC::IS_BIT_SET(iVar0, 7))
	{
		MISC::SET_BIT(&(Global_2528542.f_1722), 23);
		return 1;
	}
	return 0;
}

bool func_420()//Position - 0x3B8A3
{
	return Global_1312855;
}

bool func_421()//Position - 0x3B8AF
{
	return Global_1312857;
}

bool func_422(int iParam0, int iParam1)//Position - 0x3B8BB
{
	var uVar0;
	int iVar1;
	
	if (!func_425())
	{
		return 0;
	}
	if (func_424())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_423(iParam1);
	iVar1 = uVar0;
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_672, iVar1);
}

int func_423(int iParam0)//Position - 0x3B903
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		default:
	}
	return 1;
}

bool func_424()//Position - 0x3BA76
{
	return MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_146, 3);
}

int func_425()//Position - 0x3BA90
{
	if (Global_1312447)
	{
		return 1;
	}
	if (func_421())
	{
		return 1;
	}
	if (func_420())
	{
		return 1;
	}
	return func_219(120, -1);
}

void func_426()//Position - 0x3BAC0
{
	int iVar0;
	
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0);
	if (Local_103.f_177 != iVar0)
	{
		if (Local_103.f_177 < iVar0 || func_434(Local_103.f_177, 0, 1))
		{
			if (Local_103.f_177 >= NETWORK::_0x0CD9AB83489430EA(0))
			{
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(Local_103.f_177);
			}
		}
	}
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0);
	if (Local_103.f_178 != iVar0)
	{
		if (Local_103.f_178 < iVar0 || func_433(Local_103.f_178, 0, 1))
		{
			if (Local_103.f_178 >= NETWORK::_0xCB215C4B56A7FAE7(0))
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_103.f_178);
			}
		}
	}
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0);
	if (Local_103.f_179 != iVar0)
	{
		if (Local_103.f_179 < iVar0 || func_427(Local_103.f_179, 0, 1))
		{
			if (Local_103.f_179 >= NETWORK::_0x12B6281B6C6706C0(0))
			{
				NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_103.f_179);
			}
		}
	}
}

int func_427(int iParam0, bool bParam1, bool bParam2)//Position - 0x3BB85
{
	return func_428(2, iParam0, 1, bParam1, bParam2);
}

int func_428(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x3BB99
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(Global_1383928, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_432(iParam0) - func_431(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_431(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_432(iParam0) - func_430(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_431(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_432(iParam0) - func_431(iParam0, 1));
		}
		if (!bParam4 && Global_1589819[PLAYER::PLAYER_ID() /*818*/] != 3)
		{
			iVar1 = (iVar1 - func_429(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_429(int iParam0)//Position - 0x3BC62
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_430(int iParam0)//Position - 0x3BC9C
{
	switch (iParam0)
	{
		case 0:
			return Global_1383928.f_1;
			break;
		
		case 1:
			return Global_1383928.f_2;
			break;
		
		case 2:
			return Global_1383928.f_3;
			break;
	}
	return 0;
}

int func_431(int iParam0, bool bParam1)//Position - 0x3BCE2
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2424047[iVar0 /*416*/].f_209;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2424047[iVar0 /*416*/].f_210;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2424047[iVar0 /*416*/].f_211;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_432(int iParam0)//Position - 0x3BD7F
{
	switch (iParam0)
	{
		case 0:
			return Global_1383936;
			break;
		
		case 1:
			return Global_1383937;
			break;
		
		case 2:
			return Global_1383938;
			break;
	}
	return 0;
}

int func_433(int iParam0, bool bParam1, bool bParam2)//Position - 0x3BDBF
{
	return func_428(0, iParam0, 1, bParam1, bParam2);
}

int func_434(int iParam0, bool bParam1, bool bParam2)//Position - 0x3BDD3
{
	return func_428(1, iParam0, 1, bParam1, bParam2);
}

int func_435()//Position - 0x3BDE7
{
	return Local_103;
}

int func_436(int iParam0)//Position - 0x3BDF1
{
	return Local_293[iParam0 /*4*/];
}

void func_437()//Position - 0x3BE00
{
	Global_2499349 = Local_103;
	Global_2499349.f_1 = Local_103.f_180;
	Global_2499349.f_2 = Local_103.f_2.f_1[0 /*66*/].f_64;
	Global_2499349.f_3 = MISC::IS_BIT_SET(Local_103.f_2.f_1[0 /*66*/].f_65, 0);
	Global_2499349.f_4 = MISC::IS_BIT_SET(Local_103.f_2.f_1[0 /*66*/].f_65, 1);
	Global_2499349.f_5 = MISC::IS_BIT_SET(Local_103.f_2.f_1[0 /*66*/].f_65, 13);
	Global_2499349.f_6 = MISC::IS_BIT_SET(Local_103.f_2.f_1[0 /*66*/].f_65, 3);
	Global_2499349.f_7 = MISC::IS_BIT_SET(Local_103.f_2.f_1[0 /*66*/].f_65, 5);
	Global_2499349.f_8 = MISC::IS_BIT_SET(Local_103.f_1, 11);
	Global_2499349.f_9 = Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3;
}

bool func_438(int iParam0)//Position - 0x3BEB9
{
	return func_439(iParam0);
}

bool func_439(int iParam0)//Position - 0x3BEC7
{
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_13.f_1, 0);
}

int func_440(int iParam0)//Position - 0x3BEE1
{
	switch (func_441(iParam0))
	{
		case 20:
		case 21:
		case 24:
		case 26:
		case 27:
		case 29:
		case 28:
		case 30:
		case 31:
		case 32:
		case 33:
		case 25:
			return 1;
		
		default:
	}
	return 0;
}

int func_441(int iParam0)//Position - 0x3BF41
{
	return Global_1589819[iParam0 /*818*/].f_196;
}

bool func_442(int iParam0)//Position - 0x3BF54
{
	return !func_443(iParam0);
}

int func_443(int iParam0)//Position - 0x3BF63
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6551)
			{
				return 0;
			}
			if (func_183(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_23, 0) || MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_23, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6552)
			{
				return 0;
			}
			if (func_183(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_23, 0) || MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_23, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6553)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6554)
			{
				return 0;
			}
			if (func_183(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_23, 0) || MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_23, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_444(4))
			{
				return 0;
			}
			if (func_183(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_23, 0) || MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_23, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_444(4))
			{
				return 0;
			}
			if (func_183(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_23, 0) || MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_23, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_444(4))
			{
				return 0;
			}
			if (func_183(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_23, 0) || MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_23, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_444(4))
			{
				return 0;
			}
			if (func_183(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_23, 0) || MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_23, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_444(4))
			{
				return 0;
			}
			if (func_183(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_444(4))
			{
				return 0;
			}
			if (func_183(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_444(int iParam0)//Position - 0x3C2C2
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_468(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (MISC::IS_BIT_SET(Global_2424047[iVar0 /*416*/].f_208, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_445()//Position - 0x3C308
{
	var uVar0;
	
	func_452(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_451())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_450())
	{
		return 1;
	}
	if (func_449(157))
	{
		if (!func_448())
		{
			return 1;
		}
	}
	if (func_449(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_446() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_446()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_446()//Position - 0x3C392
{
	switch (func_251())
	{
		case 0:
			return func_447();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_447()//Position - 0x3C3C5
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_448()//Position - 0x3C3E9
{
	return Global_2448756.f_586;
}

int func_449(int iParam0)//Position - 0x3C3F8
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_450()//Position - 0x3C40F
{
	return Global_2458613;
}

bool func_451()//Position - 0x3C41B
{
	return Global_2448756.f_581;
}

void func_452(var uParam0)//Position - 0x3C42A
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 171)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -275425152:
					func_453(iVar0);
					break;
				
				case -42615386:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar4, 4);
					if (vVar4.z == 1267052711)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_453(int iParam0)//Position - 0x3C49D
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_468(vVar0.y, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_454(iVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar4, vVar0.z);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_454(int iParam0, var uParam1)//Position - 0x3C51E
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_455()//Position - 0x3C57D
{
	SYSTEM::WAIT(0);
}

void func_456()//Position - 0x3C58A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_424[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_424[iVar0]));
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_426[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_426[iVar0]));
		}
		func_4(iVar0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (func_435() == 4)
				{
					func_8();
					func_6(iVar0);
				}
			}
		}
		Global_2528542.f_238[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	func_78(1);
	func_461(4, 0);
	if (bLocal_484)
	{
		func_459(0f, 0f, 0f, func_460(31), 1);
	}
	if (func_458("ACD_HELP1"))
	{
		HUD::CLEAR_HELP(1);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!MISC::IS_BIT_SET(iLocal_423, 0))
		{
			iLocal_471 = 0;
			iLocal_472 = 0;
			iLocal_474[0] = 0;
			iLocal_483 = 0;
		}
		if ((((((iLocal_469 != 0 || iLocal_470 != 0) || iLocal_471 != 0) || iLocal_472 != 0) || iLocal_473 != 0) || iLocal_474[0] != 0) || iLocal_483 == 1)
		{
			STATS::_0x1CAE5D2E3F9A07F0(31, iLocal_469, iLocal_470, iLocal_471, iLocal_472, iLocal_473, &iLocal_474, iLocal_483);
		}
	}
	Global_2499349.f_10 = 0;
	func_457();
}

void func_457()//Position - 0x3C6D3
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_458(char* sParam0)//Position - 0x3C6DF
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_459(vector3 vParam0, int iParam3, int iParam4)//Position - 0x3C6F2
{
	int iVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2528542.f_3959[iVar0 /*26*/].f_4), iParam3))
			{
				if (iParam4 || func_190(Global_2528542.f_3959[iVar0 /*26*/].f_1, vParam0, 0))
				{
					Global_2528542.f_3959[iVar0 /*26*/] = 0;
					Global_2528542.f_3959[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2528542.f_3959[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2528542.f_3959[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

char* func_460(int iParam0)//Position - 0x3C792
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

void func_461(int iParam0, bool bParam1)//Position - 0x3C7A4
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_208, iParam0))
		{
			MISC::SET_BIT(&(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_208), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_208, iParam0))
	{
		MISC::CLEAR_BIT(&(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_208), iParam0);
	}
}

void func_462(struct<21> Param0)//Position - 0x3C807
{
	func_467(32, Param0);
	func_466(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_103, 190);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_293, 129);
	if (!func_465())
	{
		func_456();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_463();
			func_61();
		}
		NETWORK::RESERVE_NETWORK_MISSION_PEDS((4 * Local_103.f_2));
		NETWORK::RESERVE_NETWORK_MISSION_VEHICLES((1 * Local_103.f_2));
		NETWORK::RESERVE_NETWORK_MISSION_OBJECTS((3 * Local_103.f_2));
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		func_461(4, 1);
		Local_293[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 0;
	}
	else
	{
		func_456();
	}
}

void func_463()//Position - 0x3C88F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_262145.f_67 >= 0 && Global_262145.f_67 < 32)
	{
		iVar1 = 1;
		if (Global_262145.f_6483 >= 0 && Global_262145.f_6483 < 32)
		{
			iVar1 = 5;
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		}
		else if (Global_262145.f_6482 >= 0 && Global_262145.f_6482 < 32)
		{
			iVar1 = 4;
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		}
		else if (Global_262145.f_6481 >= 0 && Global_262145.f_6481 < 32)
		{
			iVar1 = 3;
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		}
		else if (Global_262145.f_6480 >= 0 && Global_262145.f_6480 < 32)
		{
			iVar1 = 2;
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		}
		else
		{
			iVar1 = 1;
			iVar2 = 0;
		}
		switch (iVar2)
		{
			case 0:
				Local_103.f_2.f_68[0 /*104*/] = Global_262145.f_67;
				break;
			
			case 1:
				Local_103.f_2.f_68[0 /*104*/] = Global_262145.f_6480;
				break;
			
			case 2:
				Local_103.f_2.f_68[0 /*104*/] = Global_262145.f_6481;
				break;
			
			case 3:
				Local_103.f_2.f_68[0 /*104*/] = Global_262145.f_6482;
				break;
			
			case 4:
				Local_103.f_2.f_68[0 /*104*/] = Global_262145.f_6483;
				break;
		}
		if (iVar1 > 1)
		{
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (func_464(Global_2528542.f_206.f_25[iVar0 /*3*/], func_74(Local_103.f_2.f_68[0 /*104*/]), 50f, 0))
				{
					iVar2++;
					if (iVar2 >= iVar1)
					{
						iVar2 = 0;
					}
					switch (iVar2)
					{
						case 0:
							Local_103.f_2.f_68[0 /*104*/] = Global_262145.f_67;
							break;
						
						case 1:
							Local_103.f_2.f_68[0 /*104*/] = Global_262145.f_6480;
							break;
						
						case 2:
							Local_103.f_2.f_68[0 /*104*/] = Global_262145.f_6481;
							break;
						
						case 3:
							Local_103.f_2.f_68[0 /*104*/] = Global_262145.f_6482;
							break;
						
						case 4:
							Local_103.f_2.f_68[0 /*104*/] = Global_262145.f_6483;
							break;
						}
				}
				iVar0++;
			}
		}
	}
	if (((Global_262145.f_67 < 0 || Global_262145.f_67 >= 32) || Local_103.f_2.f_68[0 /*104*/] < 0) || Local_103.f_2.f_68[0 /*104*/] >= 32)
	{
		Local_103.f_2.f_68[0 /*104*/] = MISC::GET_RANDOM_INT_IN_RANGE(0, 32);
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (func_464(Global_2528542.f_206.f_25[iVar0 /*3*/], func_74(Local_103.f_2.f_68[0 /*104*/]), 50f, 0))
			{
				Local_103.f_2.f_68[0 /*104*/]++;
				if (Local_103.f_2.f_68[0 /*104*/] >= 32)
				{
					Local_103.f_2.f_68[0 /*104*/] = 0;
				}
			}
			iVar0++;
		}
	}
	if (Global_2420474.f_84.f_2 == 1)
	{
		MISC::SET_BIT(&(Local_103.f_1), 11);
		Local_103.f_2 = 1;
	}
	else
	{
		Local_103.f_2 = 1;
	}
	func_414();
}

int func_464(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)//Position - 0x3CB91
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
		{
			if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
			{
				if (MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_465()//Position - 0x3CC0C
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_451())
		{
			return 0;
		}
		if (func_449(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_466(int iParam0, int iParam1, bool bParam2)//Position - 0x3CC65
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_457();
			}
			else
			{
				return 0;
			}
		}
		if (!func_175())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_457();
					}
					else
					{
						return 0;
					}
				}
				if (func_451())
				{
					if (!bParam2)
					{
						func_457();
					}
					else
					{
						return 0;
					}
				}
				if (func_449(155))
				{
					if (!bParam2)
					{
						func_457();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_457();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_457();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_457();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_467(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x3CD7A
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_457();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

int func_468(int iParam0, bool bParam1, bool bParam2)//Position - 0x3CD99
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437364.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

