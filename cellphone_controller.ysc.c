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
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	bool bLocal_38 = 0;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43[4] = { 0, 0, 0, 0 };
	int iLocal_48[4] = { 0, 0, 0, 0 };
	int iLocal_53[4] = { 0, 0, 0, 0 };
	int iLocal_58[4] = { 0, 0, 0, 0 };
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	bool bLocal_82 = 0;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<57> Var0;
	int iVar314;
	
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
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	fLocal_39 = 0f;
	fLocal_40 = 0f;
	fLocal_86 = 0.95f;
	fLocal_87 = 0.07f;
	fLocal_88 = 0.755f;
	iLocal_97 = 9999;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_106507 = MISC::GET_GAME_TIMER();
	func_117();
	func_116();
	func_114();
	Global_14553.f_1 = 3;
	Global_14541 = 0;
	Global_14727 = 0;
	Global_16901 = 0;
	Var0.f_23 = 2;
	Var0.f_56 = 16;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_14553.f_1 > 3)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 337, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 353, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 354, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 357, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 353, 1);
		}
		if (iLocal_95 == 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_95 = 1;
				iLocal_97 = func_111(8920, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iLocal_95 == 1)
			{
				switch (LOCALE::_GET_CURRENT_LANGUAGE_ID())
				{
					case -1:
						SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_en");
						break;
					
					case 0:
						SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_en");
						break;
					
					case 1:
						SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_fr");
						break;
					
					case 2:
						SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_ge");
						break;
					
					case 3:
						SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_it");
						break;
					
					case 4:
						SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_sp");
						break;
					
					case 5:
						SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_pt");
						break;
					
					case 6:
						SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_pl");
						break;
					
					case 7:
						SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_ru");
						break;
					
					case 8:
						SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_ko");
						break;
					
					case 9:
						SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_ch");
						break;
					
					case 10:
						SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_ja");
						break;
					
					case 11:
						SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_me");
						break;
					
					case 12:
						SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_cn");
						break;
				}
				SOCIALCLUB::_SC_INBOX_GET_EMAILS(0, 1);
				iLocal_95 = 2;
			}
			if (iLocal_95 == 2)
			{
				iLocal_96 = SOCIALCLUB::_0x16DA8172459434AA();
				switch (iLocal_96)
				{
					case 3:
						break;
					
					case 0:
						if (SOCIALCLUB::_0x7DB18CA8CAD5B098() > 0)
						{
							SOCIALCLUB::_0x4737980E8A283806(0, &Var0);
							if (Var0.f_1 != iLocal_97)
							{
								Global_4268042 = 1;
							}
							else
							{
								Global_4268042 = 0;
							}
						}
						iLocal_95 = 3;
						break;
					
					case 1:
						break;
					
					case 4:
						Global_4268042 = 0;
						iLocal_95 = 3;
						break;
					}
			}
		}
		else
		{
			Global_4268042 = 0;
			iLocal_95 = 0;
		}
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
			{
				if (Global_14553.f_1 == 6)
				{
					Global_14553.f_1 = 3;
				}
			}
		}
		if (func_110(146))
		{
			if (Global_71590 == 0)
			{
				iVar314 = func_78(0, 0, 119);
				if (iVar314 != 0)
				{
					func_76(iVar314);
				}
				else
				{
					func_75();
				}
				func_72(0);
			}
		}
		if (Global_2528542.f_4534 == 1)
		{
			if (Global_14553.f_1 > 3)
			{
				Global_14553.f_1 = 3;
			}
		}
		if (Global_71590 == 1)
		{
			if (Global_14553.f_1 == 3)
			{
				if (MISC::IS_BIT_SET(Global_4269308, 15))
				{
					MISC::SET_BIT(&Global_4269308, 14);
					SYSTEM::WAIT(0);
					while (!func_70(3, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					MISC::CLEAR_BIT(&Global_4269308, 14);
					MISC::CLEAR_BIT(&Global_4269308, 15);
				}
				if (MISC::IS_BIT_SET(Global_4269308, 16))
				{
					MISC::SET_BIT(&Global_4269308, 14);
					SYSTEM::WAIT(0);
					while (!func_70(17, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					MISC::CLEAR_BIT(&Global_4269308, 14);
					MISC::CLEAR_BIT(&Global_4269308, 16);
					MISC::CLEAR_BIT(&Global_4269308, 27);
				}
				if (MISC::IS_BIT_SET(Global_4269308, 27))
				{
					MISC::SET_BIT(&Global_4269308, 14);
					SYSTEM::WAIT(0);
					while (!func_70(23, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					MISC::CLEAR_BIT(&Global_4269308, 14);
					MISC::CLEAR_BIT(&Global_4269308, 16);
					MISC::CLEAR_BIT(&Global_4269308, 27);
				}
			}
		}
		if (Global_71590 == 0)
		{
			if (MISC::IS_BIT_SET(Global_4269308, 11))
			{
				if ((Global_14553.f_1 != 10 && Global_14553.f_1 != 9) || func_69() == 0)
				{
					MISC::CLEAR_BIT(&Global_4269308, 11);
					MISC::SET_BIT(&Global_2424, 11);
				}
			}
			else if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
			{
				if (func_69())
				{
					MISC::SET_BIT(&Global_4269308, 11);
					MISC::SET_BIT(&Global_2424, 11);
				}
			}
			if (MISC::IS_BIT_SET(Global_4269308, 12))
			{
				MISC::CLEAR_BIT(&Global_4269308, 12);
				MISC::SET_BIT(&Global_2424, 11);
			}
		}
		else if (MISC::IS_BIT_SET(Global_4269308, 12))
		{
			if ((Global_16929 == 0 || Global_16930 == 0) && !Global_16931)
			{
				MISC::CLEAR_BIT(&Global_4269308, 12);
				MISC::SET_BIT(&Global_2424, 11);
			}
		}
		else if (Global_16931 || (Global_16929 > 0 && Global_16930 == 1))
		{
			MISC::SET_BIT(&Global_4269308, 12);
			MISC::SET_BIT(&Global_2424, 11);
		}
		if (MISC::IS_PC_VERSION())
		{
			if (NETWORK::_0xC0D2AF00BCC234CA())
			{
				if (!MISC::IS_BIT_SET(Global_4269308, 19))
				{
					MISC::SET_BIT(&Global_4269308, 19);
					MISC::SET_BIT(&Global_2424, 11);
				}
			}
			else if (MISC::IS_BIT_SET(Global_4269308, 19))
			{
				MISC::CLEAR_BIT(&Global_4269308, 19);
				MISC::SET_BIT(&Global_2424, 11);
			}
		}
		if (iLocal_93 == 0)
		{
			if (MISC::IS_BIT_SET(Global_2423, 25))
			{
				STATS::STAT_GET_INT(joaat("sp_cellphone_sleep_time"), &iLocal_92, -1);
				iLocal_90 = MISC::GET_GAME_TIMER();
				iLocal_93 = 1;
			}
		}
		else if (!MISC::IS_BIT_SET(Global_2423, 25))
		{
			STATS::STAT_GET_INT(joaat("sp_cellphone_sleep_time"), &iLocal_92, -1);
			iLocal_91 = MISC::GET_GAME_TIMER();
			iLocal_93 = 0;
			STATS::STAT_SET_INT(joaat("sp_cellphone_sleep_time"), (iLocal_92 + (iLocal_91 - iLocal_90)), 1);
		}
		func_68();
		func_67();
		func_66();
		func_64();
		func_53();
		func_52();
		func_51();
		if (MISC::IS_BIT_SET(Global_2424, 21))
		{
			if (!AUDIO::_0xC8B1B2425604CDD0())
			{
				MISC::CLEAR_BIT(&Global_2424, 21);
			}
		}
		if (MISC::IS_BIT_SET(Global_2423, 7))
		{
			func_47();
			MISC::CLEAR_BIT(&Global_2423, 7);
		}
		if (MISC::IS_BIT_SET(Global_2423, 0))
		{
			func_46();
		}
		if (MISC::IS_BIT_SET(Global_4269308, 0))
		{
			func_45();
		}
		if (MISC::IS_BIT_SET(Global_2424, 11))
		{
			Global_3127 = 0;
			if (MISC::IS_BIT_SET(Global_2423, 25))
			{
				Global_3127++;
			}
			if (MISC::IS_BIT_SET(Global_4269308, 11))
			{
				if (Global_71590 == 0)
				{
					Global_3127++;
				}
			}
			if (MISC::IS_BIT_SET(Global_4269308, 28))
			{
				if (Global_71590 == 1)
				{
					Global_3127++;
				}
			}
			if (MISC::IS_BIT_SET(Global_4269308, 12))
			{
				if (Global_71590 && (Global_16930 || Global_16931))
				{
					Global_3127++;
				}
			}
			if (MISC::IS_BIT_SET(Global_4269308, 19))
			{
				Global_3127++;
			}
			if (Global_3127 == 0)
			{
				MISC::CLEAR_BIT(&Global_2424, 11);
				iLocal_41 = 0;
			}
			else
			{
				iLocal_41 = 1;
			}
		}
		if (!func_44())
		{
			if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
			{
				if (Global_14553.f_1 == 3)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || CUTSCENE::_0x5EDEF0CF8C1DAB3C())
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (Global_71590)
								{
									func_32();
								}
								else
								{
									func_32();
								}
							}
						}
					}
				}
			}
			if (Global_14553.f_1 == 4)
			{
				if (MISC::IS_BIT_SET(Global_2424, 21))
				{
					func_32();
				}
			}
			func_22();
		}
		else if (func_15())
		{
		}
		switch (Global_16901)
		{
			case 0:
				func_14();
				if (Global_16903 == 1)
				{
					func_13();
				}
				break;
			
			case 1:
				func_12();
				break;
			
			case 2:
				func_11();
				break;
			
			case 3:
				func_10();
				break;
			
			case 4:
				func_9();
				break;
			
			case 5:
				func_8();
				break;
			
			case 14:
				func_13();
				break;
			
			case 6:
				if (Global_16903 == 1)
				{
					func_13();
				}
				if (Global_16904 == 1)
				{
					Global_16901 = 9;
					Global_16904 = 0;
				}
				break;
			
			case 8:
				func_7();
				break;
			
			case 9:
				func_5();
				break;
			
			case 10:
				func_4();
				break;
			
			case 11:
				func_3();
				break;
			
			case 12:
				func_2();
				break;
			
			case 13:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x845
{
	iLocal_70 = GRAPHICS::_RETURN_TWO(Global_16905);
	switch (iLocal_70)
	{
		case 0:
			Global_16901 = 4;
			break;
		
		case 1:
			break;
		
		case 2:
			MISC::SET_BIT(&Global_2424, 15);
			func_13();
			break;
	}
}

void func_2()//Position - 0x889
{
	if (GRAPHICS::_0xEC72C258667BE5EA(Global_16905))
	{
		Global_16901 = 13;
	}
	else
	{
		func_13();
	}
}

void func_3()//Position - 0x8A7
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_68 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_66);
	}
	else
	{
		iLocal_67 = MISC::GET_GAME_TIMER();
		iLocal_68 = (iLocal_67 - iLocal_65);
	}
	if (iLocal_68 > 3000)
	{
		HUD::_REMOVE_LOADING_PROMPT();
	}
	if (iLocal_68 > 3200)
	{
		Global_16901 = 6;
	}
}

void func_4()//Position - 0x8EA
{
	iLocal_70 = GRAPHICS::_0x0C0C4E81E1AC60A0();
	switch (iLocal_70)
	{
		case 0:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_66 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_65 = MISC::GET_GAME_TIMER();
			}
			Global_16901 = 11;
			SYSTEM::SETTIMERB(0);
			break;
		
		case 1:
			break;
		
		case 2:
			func_13();
			break;
	}
}

void func_5()//Position - 0x93E
{
	Global_16906 = -1;
	if (Global_71590)
	{
		if (func_6())
		{
			unk_0xF3F776ADA161E47D(Global_4456448.f_154963, Global_4456448.f_154963.f_1);
		}
	}
	if (GRAPHICS::_0x3DEC726C25A11BAC(Global_16906))
	{
		Global_16901 = 10;
		HUD::_SET_LOADING_PROMPT_TEXT_ENTRY("CELL_278");
		HUD::_SHOW_LOADING_PROMPT(1);
	}
	else
	{
		func_13();
	}
}

bool func_6()//Position - 0x993
{
	return MISC::IS_BIT_SET(Global_4456448.f_154961, 12);
}

void func_7()//Position - 0x9AB
{
	iLocal_70 = GRAPHICS::_0xF5BED327CEA362B1(1);
	switch (iLocal_70)
	{
		case 0:
			Global_16901 = 9;
			break;
		
		case 1:
			break;
		
		case 2:
			func_13();
			break;
	}
}

void func_8()//Position - 0x9E5
{
	iLocal_70 = GRAPHICS::_0xCB82A0BF0E3E3265(iLocal_71);
	switch (iLocal_70)
	{
		case 0:
			GRAPHICS::_0x1072F115DAB0717E(1, 1);
			Global_16901 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			if (iLocal_71 == 3)
			{
				MISC::SET_BIT(&Global_2424, 14);
				GRAPHICS::_0x1072F115DAB0717E(0, 0);
				GRAPHICS::_0xD801CC02177FA3F1();
				GRAPHICS::_0x6A12D88881435DCA();
				Global_16901 = 6;
			}
			if (Global_16901 == 5)
			{
				if (iLocal_71 == 0)
				{
					Global_16901 = 4;
					iLocal_71 = 1;
					GRAPHICS::_0x6A12D88881435DCA();
					SYSTEM::WAIT(0);
				}
			}
			if (Global_16901 == 5)
			{
				if (iLocal_71 == 1)
				{
					Global_16901 = 4;
					iLocal_71 = 2;
					GRAPHICS::_0x6A12D88881435DCA();
					SYSTEM::WAIT(0);
				}
			}
			if (Global_16901 == 5)
			{
				if (iLocal_71 == 2)
				{
					Global_16901 = 4;
					iLocal_71 = 3;
					GRAPHICS::_0x6A12D88881435DCA();
					SYSTEM::WAIT(0);
				}
			}
			break;
	}
}

void func_9()//Position - 0xA99
{
	if (GRAPHICS::_0x759650634F07B6B4(iLocal_71))
	{
		Global_16901 = 5;
	}
	else
	{
		MISC::SET_BIT(&Global_2424, 15);
		func_13();
	}
}

void func_10()//Position - 0xABE
{
	iLocal_70 = GRAPHICS::_0x0D6CA79EEEBD8CA3();
	switch (iLocal_70)
	{
		case 0:
			Global_16901 = 4;
			iLocal_71 = 2;
			break;
		
		case 1:
			break;
		
		case 2:
			Global_14553.f_1 = 3;
			func_13();
			break;
	}
}

void func_11()//Position - 0xAFF
{
	if (GRAPHICS::_0xA67C35C56EB1BD9D())
	{
		Global_16901 = 3;
	}
}

void func_12()//Position - 0xB12
{
	if (SYSTEM::TIMERB() > 0)
	{
		Global_16901 = 2;
	}
}

void func_13()//Position - 0xB26
{
	GRAPHICS::_0x1072F115DAB0717E(0, 0);
	GRAPHICS::_0xD801CC02177FA3F1();
	GRAPHICS::_0x6A12D88881435DCA();
	HUD::_REMOVE_LOADING_PROMPT();
	Global_16902 = 0;
	Global_16903 = 0;
	Global_16904 = 0;
	Global_16901 = 0;
}

void func_14()//Position - 0xB50
{
	if (Global_16902)
	{
		Global_16901 = 1;
		MISC::CLEAR_BIT(&Global_2424, 14);
		SYSTEM::SETTIMERB(0);
	}
}

int func_15()//Position - 0xB70
{
	char* sVar0;
	
	if ((func_21(2, Global_14520, 0) && !HUD::IS_HUD_COMPONENT_ACTIVE(19)) && !MISC::IS_STUNT_JUMP_IN_PROGRESS())
	{
		if (MISC::IS_PC_VERSION())
		{
			if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
			{
				sVar0 = HUD::_GET_LABEL_TEXT("CELL_ANTIH_A");
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_ANTIH");
				HUD::_SET_NOTIFICATION_MESSAGE_2("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, sVar0, 0);
			}
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_20(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_AIMING_FROM_COVER(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
		Global_16925 = 0;
		Global_16926 = 0;
		if (HUD::_GET_CURRENT_NOTIFICATION() == Global_16923 && HUD::_GET_CURRENT_NOTIFICATION() != -1)
		{
			Global_16925 = Global_16924;
			iLocal_74 = MISC::GET_GAME_TIMER();
			iLocal_76 = 0;
			iLocal_77 = 0;
			while (((func_19(2, Global_14520) && iLocal_76 < 250) && Global_14733 == 0) && !HUD::IS_HUD_COMPONENT_ACTIVE(19))
			{
				if (Global_3127 > 0)
				{
					func_16();
				}
				SYSTEM::WAIT(0);
				iLocal_75 = MISC::GET_GAME_TIMER();
				iLocal_76 = (iLocal_75 - iLocal_74);
				if (Global_3127 > 0)
				{
					func_16();
				}
			}
			if ((func_19(2, Global_14520) && Global_14733 == 0) && !HUD::IS_HUD_COMPONENT_ACTIVE(19))
			{
				iLocal_77 = 1;
			}
			if (Global_14733 == 0)
			{
				if (iLocal_77 == 1)
				{
					Global_16926 = 1;
					Global_16925 = Global_16924;
					if (Global_16925 == 1)
					{
					}
					if (Global_16925 == 2)
					{
					}
					if (Global_16925 == 3)
					{
					}
					if (Global_16925 == 0)
					{
					}
					if (Global_16925 == 4)
					{
					}
				}
				else
				{
					Global_16925 = 0;
				}
			}
			else
			{
				Global_16925 = 0;
			}
		}
		else
		{
			Global_16925 = 0;
		}
		if (!HUD::IS_HUD_COMPONENT_ACTIVE(19))
		{
			return 1;
		}
		else
		{
			Global_16925 = 0;
			Global_16926 = 0;
			return 0;
		}
	}
	return 0;
}

void func_16()//Position - 0xD29
{
	int iVar0;
	
	iVar0 = 255;
	if (Global_16931)
	{
		fLocal_87 = -0.055f;
		fLocal_88 = 0.745f;
		fLocal_83 = GRAPHICS::GET_SAFE_ZONE_SIZE();
		fLocal_89 = ((100f * fLocal_86) - (100f * fLocal_83));
		fLocal_84 = (fLocal_87 + (fLocal_89 * 0.005f));
		fLocal_85 = (fLocal_88 - (fLocal_89 * 0.005f));
		if (!func_18())
		{
			GRAPHICS::_0xC6372ECD45D73BCD(1);
			GRAPHICS::_SET_2D_LAYER(7);
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::_0xEFABC7722293DA7C();
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_37, fLocal_84, fLocal_85, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
			GRAPHICS::_0xC6372ECD45D73BCD(0);
			GRAPHICS::_SET_2D_LAYER(4);
		}
	}
	else
	{
		if (MISC::IS_PC_VERSION())
		{
			if (Global_2416063.f_1486)
			{
				bLocal_38 = false;
			}
			else if (MISC::IS_BIT_SET(Global_2423, 13))
			{
				if (MISC::IS_BIT_SET(Global_4269308, 19))
				{
					bLocal_38 = false;
				}
				else
				{
					bLocal_38 = true;
				}
			}
			else
			{
				bLocal_38 = false;
			}
		}
		else if (Global_2416063.f_1486 || MISC::IS_BIT_SET(Global_2423, 13))
		{
			bLocal_38 = true;
		}
		else
		{
			bLocal_38 = false;
		}
		if (func_44())
		{
			bLocal_38 = true;
		}
		if (MISC::IS_BIT_SET(Global_4269308, 28))
		{
			iVar0 = 125;
			if (bLocal_38 == 1)
			{
				bLocal_38 = false;
			}
		}
		if (HUD::_IS_RADAR_ENABLED())
		{
			if (!HUD::IS_RADAR_HIDDEN())
			{
				if (!bLocal_38)
				{
					if (!func_17())
					{
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							if (!PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
							{
								GRAPHICS::_SET_2D_LAYER(4);
								if (MISC::IS_PC_VERSION() && Global_2416063.f_1486)
								{
									fLocal_87 = 0.165f;
									fLocal_88 = 0.755f;
								}
								else
								{
									fLocal_87 = 0.07f;
									fLocal_88 = 0.755f;
								}
								fLocal_83 = GRAPHICS::GET_SAFE_ZONE_SIZE();
								fLocal_89 = ((100f * fLocal_86) - (100f * fLocal_83));
								fLocal_84 = (fLocal_87 + (fLocal_89 * 0.005f));
								fLocal_85 = (fLocal_88 - (fLocal_89 * 0.005f));
								if (!func_18())
								{
									if (MISC::IS_PC_VERSION())
									{
										GRAPHICS::_0xEFABC7722293DA7C();
									}
									if (Global_2416063.f_1486)
									{
										fLocal_39 = 0.09f;
										fLocal_40 = -0.25f;
										if (MISC::IS_PC_VERSION())
										{
											if (MISC::IS_BIT_SET(Global_4269308, 28))
											{
											}
											else
											{
												GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_37, fLocal_84, fLocal_85, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
											}
										}
										else
										{
											GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_37, (fLocal_84 + fLocal_39), (fLocal_85 + fLocal_40), 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
										}
									}
									else
									{
										GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_37, fLocal_84, fLocal_85, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_17()//Position - 0xF87
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_18()//Position - 0xFA4
{
	if (MISC::IS_BIT_SET(Global_2425, 3))
	{
		return 1;
	}
	return 0;
}

int func_19(int iParam0, int iParam1)//Position - 0xFBF
{
	if (PAD::IS_CONTROL_PRESSED(iParam0, iParam1))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0)
			{
				return 0;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
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

int func_20(int iParam0)//Position - 0x1005
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_21(int iParam0, int iParam1, int iParam2)//Position - 0x1062
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && PAD::_IS_INPUT_DISABLED(2)))
			{
				return 0;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
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

void func_22()//Position - 0x10D4
{
	switch (Global_14553.f_1)
	{
		case 4:
			if (MISC::IS_BIT_SET(Global_2424, 21))
			{
			}
			else
			{
				if (SCRIPT::IS_THREAD_ACTIVE(Global_14550))
				{
				}
				else
				{
					if (!SCRIPT::IS_THREAD_ACTIVE(Global_14550))
					{
						if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
						{
							SCRIPT::REQUEST_SCRIPT("cellphone_flashhand");
							while (!SCRIPT::HAS_SCRIPT_LOADED("cellphone_flashhand"))
							{
								SYSTEM::WAIT(0);
								if (Global_3127 > 0)
								{
									func_16();
								}
							}
							if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
							{
								Global_14550 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
							}
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
						}
					}
					func_31(0);
				}
				if (Global_15876 || Global_15877)
				{
					if (!SCRIPT::IS_THREAD_ACTIVE(Global_14550))
					{
						if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
						{
							SCRIPT::REQUEST_SCRIPT("cellphone_flashhand");
							while (!SCRIPT::HAS_SCRIPT_LOADED("cellphone_flashhand"))
							{
								SYSTEM::WAIT(0);
								if (Global_3127 > 0)
								{
									func_16();
								}
							}
							if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
							{
								Global_14550 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
							}
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
						}
					}
					while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14534) && Global_14536 == 0)
					{
						SYSTEM::WAIT(0);
						if (Global_3127 > 0)
						{
							func_16();
						}
					}
					if (Global_14536 == 0)
					{
						Global_14553.f_1 = 9;
						func_23();
					}
				}
				else
				{
					bLocal_82 = false;
					if (Global_71590 && (Global_16928 || Global_1625180.f_5))
					{
						bLocal_82 = true;
					}
					if (((Global_106565.f_14045[Global_14553 /*20*/].f_18 == 1 || Global_106565.f_14045[Global_14553 /*20*/].f_17 == 1) || bLocal_82 == 1) || Global_16925 != 0)
					{
						while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14534) && Global_14536 == 0)
						{
							SYSTEM::WAIT(0);
							if (Global_3127 > 0)
							{
								func_16();
							}
						}
						if (Global_14536 == 0)
						{
							if (Global_14553.f_1 > 3)
							{
								Global_14553.f_1 = 6;
								if (Global_16925 == 0)
								{
									if (bLocal_82)
									{
									}
									else if (Global_71590 == 0)
									{
										if (Global_106565.f_14045[Global_14553 /*20*/].f_17 == 1)
										{
											func_70(1, 0, 1, 0);
										}
									}
								}
								else
								{
									if (Global_16925 == 3)
									{
									}
									if (Global_16925 == 1)
									{
									}
									if (Global_16925 == 2)
									{
									}
									if (Global_16925 == 4)
									{
									}
								}
							}
						}
					}
					else
					{
						while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14534) && Global_14536 == 0)
						{
							SYSTEM::WAIT(0);
							if (Global_3127 > 0)
							{
								func_16();
							}
						}
						if (Global_14536 == 0)
						{
							if (Global_14553.f_1 > 3)
							{
								if (Global_15876 || Global_15877)
								{
									Global_14553.f_1 = 9;
								}
								else
								{
									Global_14553.f_1 = 6;
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_23()//Position - 0x1360
{
	vector3 vVar0[24];
	
	if (Global_14536 == 1)
	{
		return;
	}
	if (Global_14553.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14534))
	{
		if (Global_71590)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_14553.f_1)
	{
		case 6:
			func_30(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_28(Global_3028);
			if (Global_3028 == 1)
			{
				func_30(Global_14534, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14557), -1082130432, -1082130432, -1082130432);
				Global_14533 = Global_14557;
			}
			else
			{
				func_30(Global_14534, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14558), -1082130432, -1082130432, -1082130432);
				Global_14533 = Global_14558;
			}
			if (Global_14541)
			{
				func_27(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_27(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_27(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_27(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14727 == 0)
			{
				func_27(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_2423, 17);
			}
			else if (Global_71590)
			{
				func_27(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_2423, 17);
			}
			else
			{
				if (Global_14726 == 1)
				{
					if (Global_14541)
					{
						func_27(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_27(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14541)
				{
					func_27(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_27(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_2423, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_30(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_27(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_27(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2423, 17);
			if (MISC::IS_BIT_SET(Global_2423, 20))
			{
				func_27(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_27(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14496)
				{
					func_27(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_27(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14552 == 1)
			{
				func_26();
				func_30(Global_14534, "SET_THEME", SYSTEM::TO_FLOAT(Global_106565.f_14045[Global_14553 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15879)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14534, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15881);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_25("CELL_300");
					func_25("CELL_217");
					func_25("CELL_217");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				else if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
				{
					func_27(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_1738 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_27(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_7), "CELL_217", &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
				}
				func_30(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15866 == 4 || Global_15866 == 3)
			{
				func_30(Global_14534, "SET_THEME", SYSTEM::TO_FLOAT(Global_106565.f_14045[Global_14553 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_26();
				if (Global_15879)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14534, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15881);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_25("CELL_300");
					func_25("CELL_219");
					func_25("CELL_219");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				else
				{
					if (Global_16124)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
					{
						func_30(Global_14534, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_27(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_1738 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_30(Global_14534, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_27(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_7), &cVar0, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
					}
				}
				func_30(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_24();
			break;
		
		default:
			break;
	}
}

void func_24()//Position - 0x193D
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14534))
	{
		if (Global_14552 == 1)
		{
			if (Global_14541)
			{
				func_27(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_27(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15913)
			{
				func_27(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_2423, 20))
			{
				func_27(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_27(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_27(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_27(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2423, 17);
		}
		else
		{
			func_27(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_27(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2423, 17);
			if (MISC::IS_BIT_SET(Global_2423, 20))
			{
				func_27(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_27(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14496)
				{
					func_27(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_27(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_25(char* sParam0)//Position - 0x1ACD
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_26()//Position - 0x1ADF
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_14553 == 0)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14553 == 1)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14553 == 2)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14553 == 3)
		{
			switch (Global_4269584)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_27(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x1D56
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, sParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_25(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_25(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_25(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_25(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_25(sParam11);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_28(int iParam0)//Position - 0x1E09
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
	
	Global_16934 = 0;
	Global_3028 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2992[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_29(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2430[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2430[iVar1 /*15*/].f_4)
					{
						if (Global_2992[iVar0] == 0)
						{
							Global_2956[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_2424, 3))
								{
									iVar2 = 42;
									Global_14729 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14729 = 0;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14534, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2430[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_25(&(Global_2430[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar2);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							if (Global_2458608)
							{
								if (iVar1 == 14)
								{
									func_27(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2992[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2430[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2430[iVar1 /*15*/].f_4)
					{
						if (Global_2992[iVar0] == 0)
						{
							Global_2956[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_106565.f_14135[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_106565.f_14135[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_106565.f_14135[iVar3 /*104*/].f_99[Global_14553] == 1)
											{
												Global_16934++;
											}
										}
									}
									iVar3++;
								}
								func_27(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16934), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_71590)
								{
									iVar4 = 0;
									iVar4 = Global_4268042;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268043[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4268043[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4268043[iVar5 /*104*/].f_99[Global_14553] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_27(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14553)
									{
										case 0:
											iVar6 = Global_37589;
											break;
										
										case 1:
											iVar6 = Global_37590;
											break;
										
										case 2:
											iVar6 = Global_37591;
											break;
										
										default:
											break;
									}
									func_27(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_27(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14534, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2430[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_25(&(Global_2430[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2429);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 2)
							{
								if (MISC::IS_BIT_SET(Global_2424, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14534, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2430[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_25(&(Global_2430[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar7);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_2424, 3))
								{
									iVar8 = 42;
									Global_14729 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14729 = 0;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14534, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2430[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_25(&(Global_2430[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar8);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14534, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2430[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_25(&(Global_2430[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_2430[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_2424, 6))
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14534, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2430[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_25(&(Global_2430[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (Global_2430[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1625180.f_1;
								func_27(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_27(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2992[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_29(int iParam0)//Position - 0x23AF
{
	return Global_36425 == iParam0;
}

void func_30(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x23BD
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, sParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_31(bool bParam0)//Position - 0x2420
{
	if (bParam0)
	{
		if (Global_14553.f_1 == 9)
		{
			Global_14725 = 1;
		}
	}
	else
	{
		Global_14725 = 0;
	}
}

void func_32()//Position - 0x2442
{
	if (func_15() || MISC::IS_BIT_SET(Global_2423, 8))
	{
		MISC::CLEAR_BIT(&Global_2423, 8);
		func_38();
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				if (func_37())
				{
				}
				else if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					if (MISC::IS_BIT_SET(Global_2424, 21))
					{
						MISC::CLEAR_BIT(&Global_2424, 21);
					}
					if (Global_14733 == 1)
					{
						Global_14733 = 0;
					}
					switch (Global_14553.f_1)
					{
						case 3:
							Global_14553.f_1 = 4;
							if (iLocal_94 == 0)
							{
								func_33();
								iLocal_94 = 1;
							}
							break;
						
						default:
							break;
					}
					Global_14723 = 1;
				}
			}
		}
	}
}

void func_33()//Position - 0x24EA
{
	if (Global_4268042 == 1)
	{
		if (!func_36())
		{
			return;
		}
		if (func_34(PLAYER::PLAYER_ID()))
		{
			if (MISC::GET_PROFILE_SETTING(803) == 1)
			{
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_EMAIL_EVENT");
				HUD::_DRAW_NOTIFICATION(1, 1);
			}
			else if (MISC::GET_PROFILE_SETTING(803) != 1)
			{
			}
		}
	}
}

int func_34(int iParam0)//Position - 0x2538
{
	int iVar0;
	struct<13> Var1;
	
	if (NETWORK::_0x66B59CFFD78467AF() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != PLAYER::PLAYER_ID())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		if (NETWORK::_0xAEEF48CDF5B6CE7C(0, iVar0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			if (NETWORK::_0x83F28CE49FBBFFBA(0, -3, 1) || NETWORK::_0xAEEF48CDF5B6CE7C(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_35(iParam0) };
			if (NETWORK::_0xAEEF48CDF5B6CE7C(0, -1) || (NETWORK::_0xAEEF48CDF5B6CE7C(1, -1) && NETWORK::NETWORK_IS_FRIEND(&Var1)))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::_0xAEEF48CDF5B6CE7C(0, iVar0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_35(int iParam0)//Position - 0x2611
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_36()//Position - 0x2628
{
	if (MISC::IS_PS3_VERSION() && NETWORK::_0x9614B71F8ADB982B() == 3)
	{
		return 1;
	}
	if (MISC::IS_XBOX360_VERSION() && NETWORK::_0x9614B71F8ADB982B() == 3)
	{
		return 1;
	}
	if (MISC::IS_ORBIS_VERSION() && NETWORK::_0x1353F87E89946207() == 0)
	{
		return 1;
	}
	if (MISC::IS_DURANGO_VERSION() && NETWORK::_0x1353F87E89946207() == 0)
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	return 0;
}

int func_37()//Position - 0x269D
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if ((((PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0)) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID())) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_38()//Position - 0x2708
{
	if (func_29(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106565.f_28044[0 /*29*/])
			{
				Global_14553 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106565.f_28044[1 /*29*/])
			{
				Global_14553 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106565.f_28044[2 /*29*/])
			{
				Global_14553 = 2;
			}
			else
			{
				Global_14553 = 0;
			}
		}
	}
	else
	{
		Global_14553 = func_39();
		if (Global_14553 == 145)
		{
			Global_14553 = 3;
		}
		if (Global_71590)
		{
			Global_14553 = 3;
		}
		if (Global_14553 > 3)
		{
			Global_14553 = 3;
		}
	}
}

var func_39()//Position - 0x27AA
{
	func_40();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_40()//Position - 0x27C3
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_43(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_42(PLAYER::PLAYER_PED_ID());
			if (func_41(iVar0) && (!func_29(14) || Global_105516))
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

bool func_41(int iParam0)//Position - 0x28C0
{
	return iParam0 < 3;
}

int func_42(int iParam0)//Position - 0x28CC
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

int func_43(int iParam0)//Position - 0x2909
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

int func_44()//Position - 0x2933
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_45()//Position - 0x295A
{
	char cVar0[64];
	int iVar16;
	char cVar17[64];
	char cVar33[64];
	char cVar49[64];
	char cVar65[64];
	
	MISC::CLEAR_BIT(&Global_4269308, 0);
	if (Global_16927 != 0)
	{
		if (PED::IS_PEDHEADSHOT_VALID(Global_16927))
		{
			if (PED::IS_PEDHEADSHOT_READY(Global_16927))
			{
				StringCopy(&cVar0, PED::GET_PEDHEADSHOT_TXD_STRING(Global_16927), 64);
				Global_16935[Global_16933] = Global_16927;
			}
			else
			{
				StringCopy(&cVar0, "CHAR_DEFAULT", 64);
				Global_16935[Global_4269292] = 0;
			}
		}
		else
		{
			StringCopy(&cVar0, "CHAR_DEFAULT", 64);
			Global_16935[Global_4269292] = 0;
		}
	}
	else
	{
		StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[Global_4268043[Global_4269292 /*104*/].f_17 /*29*/].f_7)), 64);
		Global_16935[Global_4269292] = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar0, "NULL"))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	if (((((((Global_4268043[Global_4269292 /*104*/].f_32 == 4 || Global_4268043[Global_4269292 /*104*/].f_32 == 5) || Global_4268043[Global_4269292 /*104*/].f_32 == 6) || Global_4268043[Global_4269292 /*104*/].f_32 == 7) || Global_4268043[Global_4269292 /*104*/].f_32 == 8) || Global_4268043[Global_4269292 /*104*/].f_32 == 9) || Global_4268043[Global_4269292 /*104*/].f_32 == 10) || Global_4268043[Global_4269292 /*104*/].f_32 == 11)
	{
		iVar16 = 0;
		switch (Global_4268043[Global_4269292 /*104*/].f_49)
		{
			case 1:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL01");
				break;
			
			case 2:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL02");
				break;
			
			case 3:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL03");
				break;
			
			case 4:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL04");
				break;
			
			case 5:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL05");
				break;
			
			case 6:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL06");
				break;
			
			case 7:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL07");
				break;
			
			case 8:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL08");
				break;
			
			case 9:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL09");
				break;
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268043[Global_4269292 /*104*/]));
		while (iVar16 < Global_4268043[Global_4269292 /*104*/].f_49)
		{
			switch (Global_4268043[Global_4269292 /*104*/].f_32)
			{
				case 4:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2528542.f_1653[iVar16 /*4*/]));
					break;
				
				case 5:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657086[iVar16 /*4*/]));
					break;
				
				case 6:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657127[iVar16 /*4*/]));
					break;
				
				case 7:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657148[iVar16 /*4*/]));
					break;
				
				case 8:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657165[iVar16 /*4*/]));
					break;
				
				case 9:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657178[iVar16 /*4*/]));
					break;
				
				case 10:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657191[iVar16 /*4*/]));
					break;
				
				case 11:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657204[iVar16 /*4*/]));
					break;
			}
			iVar16++;
		}
		StringCopy(&cVar17, HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[Global_4268043[Global_4269292 /*104*/].f_17 /*29*/].f_3)), 64);
		uLocal_64 = HUD::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 2, &cVar17, 0);
		MISC::SET_BIT(&Global_4269308, 1);
		Global_16924 = 1;
		Global_16923 = uLocal_64;
		Global_16927 = 0;
	}
	else
	{
		HUD::_SET_NOTIFICATION_TEXT_ENTRY(&(Global_4268043[Global_4269292 /*104*/]));
		switch (Global_4268043[Global_4269292 /*104*/].f_32)
		{
			case 0:
				break;
			
			case 1:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268043[Global_4269292 /*104*/].f_33));
				if (Global_4268043[Global_4269292 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_4268043[Global_4269292 /*104*/].f_67), "NULL"))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268043[Global_4269292 /*104*/].f_67));
				}
				if ((Global_4268043[Global_4269292 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_4268043[Global_4269292 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_4268043[Global_4269292 /*104*/].f_83), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4268043[Global_4269292 /*104*/].f_67)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268043[Global_4269292 /*104*/].f_67));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268043[Global_4269292 /*104*/].f_67));
					}
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4268043[Global_4269292 /*104*/].f_83)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268043[Global_4269292 /*104*/].f_83));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268043[Global_4269292 /*104*/].f_83));
					}
				}
				break;
			
			case 2:
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4268043[Global_4269292 /*104*/].f_49);
				break;
			
			case 3:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268043[Global_4269292 /*104*/].f_33));
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4268043[Global_4269292 /*104*/].f_49);
				if (Global_4268043[Global_4269292 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_4268043[Global_4269292 /*104*/].f_67), "NULL"))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268043[Global_4269292 /*104*/].f_67));
				}
				if ((Global_4268043[Global_4269292 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_4268043[Global_4269292 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_4268043[Global_4269292 /*104*/].f_83), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4268043[Global_4269292 /*104*/].f_67)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268043[Global_4269292 /*104*/].f_67));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268043[Global_4269292 /*104*/].f_67));
					}
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4268043[Global_4269292 /*104*/].f_83)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268043[Global_4269292 /*104*/].f_83));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268043[Global_4269292 /*104*/].f_83));
					}
				}
				break;
		}
		if (Global_4268043[Global_4269292 /*104*/].f_17 == 145)
		{
			StringCopy(&cVar33, "<C>", 64);
			StringConCat(&cVar33, &Global_3111, 64);
			StringConCat(&cVar33, "</C>", 64);
			uLocal_64 = HUD::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 2, &cVar33, 0);
			MISC::SET_BIT(&Global_4269308, 1);
			Global_16924 = 1;
			Global_16923 = uLocal_64;
		}
		else
		{
			StringCopy(&cVar49, HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[Global_4268043[Global_4269292 /*104*/].f_17 /*29*/].f_3)), 64);
			if (Global_4268043[Global_4269292 /*104*/].f_17 == 98)
			{
				StringCopy(&cVar65, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar65, &cVar49, 64);
				uLocal_64 = HUD::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 2, &cVar65, 0);
			}
			else
			{
				uLocal_64 = HUD::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 2, &cVar49, 0);
			}
			MISC::SET_BIT(&Global_4269308, 1);
			Global_16924 = 1;
			Global_16923 = uLocal_64;
			Global_16927 = 0;
		}
	}
	Global_4268043[Global_4269292 /*104*/].f_16 = uLocal_64;
}

void func_46()//Position - 0x2FB0
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[Global_3109 /*29*/].f_7)), 64);
	if (Global_3128 == 0)
	{
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("");
		StringCopy(&cVar16, HUD::_GET_LABEL_TEXT(&(Global_3033[1 /*6*/])), 64);
		sVar32 = HUD::_GET_LABEL_TEXT("CELL_253");
		HUD::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_3033[1 /*6*/]));
		HUD::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_2423, 0);
}

void func_47()//Position - 0x3031
{
	if (MISC::IS_BIT_SET(Global_2423, 1))
	{
		func_50();
		func_48();
		Global_106565.f_14045[Global_14553 /*20*/].f_18 = 1;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_53[Global_14553] = NETWORK::GET_NETWORK_TIME();
			iLocal_43[Global_14553] = 1;
		}
		else if (!MISC::IS_BIT_SET(Global_2423, 10))
		{
			iLocal_48[Global_14553] = MISC::GET_GAME_TIMER();
			iLocal_43[Global_14553] = 1;
		}
		else
		{
			iLocal_48[0] = MISC::GET_GAME_TIMER();
			iLocal_48[2] = MISC::GET_GAME_TIMER();
			iLocal_48[1] = MISC::GET_GAME_TIMER();
			iLocal_43[0] = 1;
			iLocal_43[2] = 1;
			iLocal_43[1] = 1;
		}
		MISC::CLEAR_BIT(&Global_2423, 1);
	}
}

void func_48()//Position - 0x30D0
{
	func_38();
	if (Global_71590)
	{
		Global_106565.f_14045[3 /*20*/].f_10 = func_111(1197, -1, 0);
	}
	if (Global_106565.f_14045[Global_14553 /*20*/].f_10 == 1)
	{
		if (!func_49(0))
		{
			PAD::SET_PAD_SHAKE(0, 2000, 100);
		}
	}
}

int func_49(int iParam0)//Position - 0x311D
{
	if (iParam0 == 1)
	{
		if (Global_14553.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2423, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_50()//Position - 0x3177
{
	char cVar0[64];
	int iVar16;
	char cVar17[64];
	char cVar33[64];
	char cVar49[64];
	char cVar65[64];
	
	if (Global_16927 != 0)
	{
		if (PED::IS_PEDHEADSHOT_VALID(Global_16927))
		{
			if (PED::IS_PEDHEADSHOT_READY(Global_16927))
			{
				StringCopy(&cVar0, PED::GET_PEDHEADSHOT_TXD_STRING(Global_16927), 64);
				Global_16935[Global_16933] = Global_16927;
			}
			else
			{
				StringCopy(&cVar0, "CHAR_DEFAULT", 64);
				Global_16935[Global_16933] = 0;
			}
		}
		else
		{
			StringCopy(&cVar0, "CHAR_DEFAULT", 64);
			Global_16935[Global_16933] = 0;
		}
	}
	else
	{
		StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[Global_106565.f_14135[Global_16933 /*104*/].f_17 /*29*/].f_7)), 64);
		if (Global_106565.f_14135[Global_16933 /*104*/].f_17 == 159)
		{
			StringCopy(&cVar0, HUD::_GET_LABEL_TEXT("CELL_COMIC_P"), 64);
		}
		Global_16935[Global_16933] = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar0, "NULL"))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	if (((((((Global_106565.f_14135[Global_16933 /*104*/].f_32 == 4 || Global_106565.f_14135[Global_16933 /*104*/].f_32 == 5) || Global_106565.f_14135[Global_16933 /*104*/].f_32 == 6) || Global_106565.f_14135[Global_16933 /*104*/].f_32 == 7) || Global_106565.f_14135[Global_16933 /*104*/].f_32 == 8) || Global_106565.f_14135[Global_16933 /*104*/].f_32 == 9) || Global_106565.f_14135[Global_16933 /*104*/].f_32 == 10) || Global_106565.f_14135[Global_16933 /*104*/].f_32 == 11)
	{
		iVar16 = 0;
		switch (Global_106565.f_14135[Global_16933 /*104*/].f_49)
		{
			case 1:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL01");
				break;
			
			case 2:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL02");
				break;
			
			case 3:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL03");
				break;
			
			case 4:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL04");
				break;
			
			case 5:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL05");
				break;
			
			case 6:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL06");
				break;
			
			case 7:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL07");
				break;
			
			case 8:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL08");
				break;
			
			case 9:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL09");
				break;
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_106565.f_14135[Global_16933 /*104*/]));
		while (iVar16 < Global_106565.f_14135[Global_16933 /*104*/].f_49)
		{
			switch (Global_106565.f_14135[Global_16933 /*104*/].f_32)
			{
				case 4:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2528542.f_1653[iVar16 /*4*/]));
					break;
				
				case 5:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657086[iVar16 /*4*/]));
					break;
				
				case 6:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657127[iVar16 /*4*/]));
					break;
				
				case 7:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657148[iVar16 /*4*/]));
					break;
				
				case 8:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657165[iVar16 /*4*/]));
					break;
				
				case 9:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657178[iVar16 /*4*/]));
					break;
				
				case 10:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657191[iVar16 /*4*/]));
					break;
				
				case 11:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657204[iVar16 /*4*/]));
					break;
			}
			iVar16++;
		}
		StringCopy(&cVar17, HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[Global_106565.f_14135[Global_16933 /*104*/].f_17 /*29*/].f_3)), 64);
		uLocal_64 = HUD::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 1, &cVar17, 0);
		Global_16924 = 3;
		Global_16923 = uLocal_64;
		Global_16927 = 0;
	}
	else
	{
		HUD::_SET_NOTIFICATION_TEXT_ENTRY(&(Global_106565.f_14135[Global_16933 /*104*/]));
		switch (Global_106565.f_14135[Global_16933 /*104*/].f_32)
		{
			case 0:
				break;
			
			case 1:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106565.f_14135[Global_16933 /*104*/].f_33));
				if (Global_106565.f_14135[Global_16933 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_106565.f_14135[Global_16933 /*104*/].f_67), "NULL"))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106565.f_14135[Global_16933 /*104*/].f_67));
				}
				if ((Global_106565.f_14135[Global_16933 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_106565.f_14135[Global_16933 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_106565.f_14135[Global_16933 /*104*/].f_83), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_106565.f_14135[Global_16933 /*104*/].f_67)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_106565.f_14135[Global_16933 /*104*/].f_67));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106565.f_14135[Global_16933 /*104*/].f_67));
					}
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_106565.f_14135[Global_16933 /*104*/].f_83)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_106565.f_14135[Global_16933 /*104*/].f_83));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106565.f_14135[Global_16933 /*104*/].f_83));
					}
				}
				break;
			
			case 2:
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_106565.f_14135[Global_16933 /*104*/].f_49);
				break;
			
			case 3:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106565.f_14135[Global_16933 /*104*/].f_33));
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_106565.f_14135[Global_16933 /*104*/].f_49);
				if (Global_106565.f_14135[Global_16933 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_106565.f_14135[Global_16933 /*104*/].f_67), "NULL"))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106565.f_14135[Global_16933 /*104*/].f_67));
				}
				if ((Global_106565.f_14135[Global_16933 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_106565.f_14135[Global_16933 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_106565.f_14135[Global_16933 /*104*/].f_83), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_106565.f_14135[Global_16933 /*104*/].f_67)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_106565.f_14135[Global_16933 /*104*/].f_67));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106565.f_14135[Global_16933 /*104*/].f_67));
					}
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_106565.f_14135[Global_16933 /*104*/].f_83)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_106565.f_14135[Global_16933 /*104*/].f_83));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106565.f_14135[Global_16933 /*104*/].f_83));
					}
				}
				break;
		}
		if (Global_106565.f_14135[Global_16933 /*104*/].f_17 == 145)
		{
			StringCopy(&cVar33, "<C>", 64);
			StringConCat(&cVar33, &Global_3111, 64);
			StringConCat(&cVar33, "</C>", 64);
			uLocal_64 = HUD::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 1, &cVar33, 0);
			Global_16924 = 3;
			Global_16923 = uLocal_64;
		}
		else
		{
			StringCopy(&cVar49, HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[Global_106565.f_14135[Global_16933 /*104*/].f_17 /*29*/].f_3)), 64);
			if (Global_106565.f_14135[Global_16933 /*104*/].f_17 == 98)
			{
				StringCopy(&cVar65, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar65, &cVar49, 64);
				uLocal_64 = HUD::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 1, &cVar65, 0);
			}
			else
			{
				uLocal_64 = HUD::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 1, &cVar49, 0);
			}
			Global_16924 = 3;
			Global_16923 = uLocal_64;
			Global_16927 = 0;
		}
	}
	Global_106565.f_14135[Global_16933 /*104*/].f_16 = uLocal_64;
}

void func_51()//Position - 0x3825
{
	if (MISC::IS_BIT_SET(Global_2423, 19))
	{
		MISC::CLEAR_BIT(&Global_2423, 19);
		func_38();
		Global_106565.f_14045[3 /*20*/].f_18 = 0;
		Global_106565.f_14045[3 /*20*/].f_17 = 0;
	}
}

void func_52()//Position - 0x3860
{
	if (iLocal_43[Global_14553] == 1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_63 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_53[Global_14553]);
		}
		else
		{
			iLocal_58[Global_14553] = MISC::GET_GAME_TIMER();
			iLocal_63 = (iLocal_58[Global_14553] - iLocal_48[Global_14553]);
		}
		if (iLocal_63 > 300000)
		{
			Global_106565.f_14045[Global_14553 /*20*/].f_18 = 0;
			Global_106565.f_14045[Global_14553 /*20*/].f_17 = 0;
			iLocal_43[Global_14553] = 0;
		}
	}
}

void func_53()//Position - 0x38D9
{
	int iVar0;
	
	func_38();
	if (Global_71590 == 0)
	{
		if (!func_44())
		{
			if (iLocal_69 == 0)
			{
				if ((Global_106565.f_14135[21 /*104*/].f_24 != 0 || Global_106565.f_14135[22 /*104*/].f_24 != 0) || Global_106565.f_14135[23 /*104*/].f_24 != 0)
				{
					switch (Global_14553)
					{
						case 0:
							if (Global_106565.f_14135[21 /*104*/].f_24 != 0)
							{
								iLocal_42 = 21;
								iLocal_69 = 1;
								SYSTEM::SETTIMERA(0);
							}
							break;
						
						case 1:
							if (Global_106565.f_14135[22 /*104*/].f_24 != 0)
							{
								iLocal_42 = 22;
								iLocal_69 = 1;
								SYSTEM::SETTIMERA(0);
							}
							break;
						
						case 2:
							if (Global_106565.f_14135[23 /*104*/].f_24 != 0)
							{
								iLocal_42 = 23;
								iLocal_69 = 1;
								SYSTEM::SETTIMERA(0);
							}
							break;
						
						default:
							break;
						}
				}
			}
			else if (SYSTEM::TIMERA() > 15000)
			{
				iLocal_69 = 0;
				iVar0 = 0;
				func_38();
				if (iLocal_42 == 21 && Global_14553 != 0)
				{
					iVar0 = 1;
				}
				if (iLocal_42 == 22 && Global_14553 != 1)
				{
					iVar0 = 1;
				}
				if (iLocal_42 == 23 && Global_14553 != 2)
				{
					iVar0 = 1;
				}
				if (Global_106565.f_14135[iLocal_42 /*104*/].f_24 != 0 && iVar0 == 0)
				{
					if (!func_29(14))
					{
						if (func_56(Global_106565.f_14135[iLocal_42 /*104*/].f_17, &(Global_106565.f_14135[iLocal_42 /*104*/]), Global_106565.f_14135[iLocal_42 /*104*/].f_24, Global_106565.f_14135[iLocal_42 /*104*/].f_25, Global_106565.f_14135[iLocal_42 /*104*/].f_26, Global_106565.f_14135[iLocal_42 /*104*/].f_29, 0, 1, Global_106565.f_14135[iLocal_42 /*104*/].f_31, Global_106565.f_14135[iLocal_42 /*104*/].f_30))
						{
							Global_106565.f_14135[iLocal_42 /*104*/].f_24 = 0;
						}
					}
				}
			}
			if (iLocal_80 == 0)
			{
				if (Global_3099[Global_14553])
				{
					iLocal_80 = 1;
					iLocal_81 = Global_14553;
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						iLocal_78 = NETWORK::GET_NETWORK_TIME();
					}
					else
					{
						iLocal_72 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_79 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_78);
				}
				else
				{
					iLocal_73 = MISC::GET_GAME_TIMER();
					iLocal_79 = (iLocal_73 - iLocal_72);
				}
				if (iLocal_79 > 7000)
				{
					if (func_54(0))
					{
						Global_3033[1 /*6*/] = { Global_3082[Global_14553 /*4*/] };
						Global_3109 = Global_3104[Global_14553];
						Global_3099[Global_14553] = 0;
						iLocal_80 = 0;
					}
				}
				if (iLocal_81 != Global_14553)
				{
					iLocal_80 = 0;
				}
			}
		}
	}
}

bool func_54(int iParam0)//Position - 0x3B45
{
	return func_55(iParam0, Global_36425);
}

int func_55(int iParam0, int iParam1)//Position - 0x3B56
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_56(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, var uParam5, int iParam6, bool bParam7, var uParam8, var uParam9)//Position - 0x3D37
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_2423, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_57(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, uParam4, uParam5, bParam7, uParam8, uParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3130 = iParam6;
			Global_3033[3 /*6*/] = { Global_106565.f_28044[iParam0 /*29*/].f_3 };
			Global_3110 = iParam0;
			MISC::SET_BIT(&Global_2423, 1);
			MISC::SET_BIT(&Global_2423, 7);
		}
		return 1;
	}
	return 0;
}

int func_57(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x3DCF
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_38();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14553 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14553 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14553 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_106565.f_14045[Global_14553 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_63() == 0)
	{
		func_61();
		return 0;
	}
	func_60(Global_16933);
	StringCopy(&(Global_106565.f_14135[Global_16933 /*104*/]), sParam1, 64);
	Global_106565.f_14135[Global_16933 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_106565.f_14135[Global_16933 /*104*/].f_24 = iParam2;
	}
	Global_106565.f_14135[Global_16933 /*104*/].f_25 = iParam7;
	Global_106565.f_14135[Global_16933 /*104*/].f_26 = uParam8;
	Global_106565.f_14135[Global_16933 /*104*/].f_29 = uParam9;
	Global_106565.f_14135[Global_16933 /*104*/].f_30 = uParam12;
	Global_106565.f_14135[Global_16933 /*104*/].f_31 = uParam11;
	Global_106565.f_14135[Global_16933 /*104*/].f_28 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_106565.f_14135[Global_16933 /*104*/].f_33), sParam4, 64);
	Global_106565.f_14135[Global_16933 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_106565.f_14135[Global_16933 /*104*/].f_50), sParam5, 64);
	Global_106565.f_14135[Global_16933 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_106565.f_14135[Global_16933 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_106565.f_14135[Global_16933 /*104*/].f_83), sParam15, 64);
	if (MISC::IS_BIT_SET(Global_2423, 10))
	{
		Global_106565.f_14135[Global_16933 /*104*/].f_99[0] = 1;
		Global_106565.f_14135[Global_16933 /*104*/].f_99[1] = 1;
		Global_106565.f_14135[Global_16933 /*104*/].f_99[2] = 1;
		Global_3129 = 4;
		func_59(0);
		func_59(2);
		func_59(1);
	}
	else
	{
		func_38();
		switch (iParam16)
		{
			case 3:
				Global_106565.f_14135[Global_16933 /*104*/].f_99[Global_14553] = 1;
				break;
			
			case 0:
				Global_106565.f_14135[Global_16933 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_106565.f_14135[Global_16933 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_106565.f_14135[Global_16933 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14553)
			{
				case 0:
					func_59(0);
					Global_3129 = 0;
					break;
				
				case 1:
					func_59(1);
					Global_3129 = 1;
					break;
				
				case 2:
					func_59(2);
					Global_3129 = 2;
					break;
				
				case 3:
					func_59(3);
					Global_3129 = 3;
					break;
				
				default:
					Global_3129 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (MISC::IS_BIT_SET(Global_2423, 10))
		{
			Global_106565.f_14045[0 /*20*/].f_17 = 1;
			Global_106565.f_14045[1 /*20*/].f_17 = 1;
			Global_106565.f_14045[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_106565.f_14045[Global_14553 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_106565.f_14045[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_106565.f_14045[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_106565.f_14045[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16935[Global_16933] = 0;
	if (bParam10)
	{
		func_38();
		if (Global_14496)
		{
			StringCopy(&Global_14542, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14553)
			{
				case 0:
					StringCopy(&Global_14542, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14542, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14542, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14542, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_58())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14542, 1);
			}
		}
	}
	if (!Global_14726)
	{
		if (Global_14553.f_1 == 6)
		{
			func_30(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_28(1);
			func_30(Global_14534, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14533), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

bool func_58()//Position - 0x4288
{
	return Global_1312867;
}

void func_59(int iParam0)//Position - 0x4294
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_106565.f_14045[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_60(int iParam0)//Position - 0x42B3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_106565.f_14135[iParam0 /*104*/].f_18 = iVar0;
	Global_106565.f_14135[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_106565.f_14135[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_106565.f_14135[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_106565.f_14135[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_106565.f_14135[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_61()//Position - 0x4345
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71590)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16933 = 34;
	Global_106565.f_14135[Global_16933 /*104*/].f_18 = -1;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_1 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_2 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_3 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_62(Global_106565.f_14135[iVar2 /*104*/].f_18, Global_106565.f_14135[Global_16933 /*104*/].f_18))
		{
			Global_16933 = iVar2;
		}
		iVar2++;
	}
	Global_106565.f_14135[Global_16933 /*104*/].f_24 = 1;
}

int func_62(struct<6> Param0, struct<6> Param6)//Position - 0x4410
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_63()//Position - 0x44FB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71590)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_106565.f_14135[iVar2 /*104*/].f_24 == 0)
		{
			Global_16933 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16933 = 34;
	Global_106565.f_14135[Global_16933 /*104*/].f_18 = -1;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_1 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_2 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_3 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_106565.f_14135[iVar2 /*104*/].f_24 == 0 || Global_106565.f_14135[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_62(Global_106565.f_14135[iVar2 /*104*/].f_18, Global_106565.f_14135[Global_16933 /*104*/].f_18))
			{
				Global_16933 = iVar2;
			}
		}
		if (Global_106565.f_14135[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_16933 == 34)
	{
		return 0;
	}
	Global_106565.f_14135[Global_16933 /*104*/].f_99[0] = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_99[1] = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_99[2] = 0;
	return 1;
}

void func_64()//Position - 0x4663
{
	if (MISC::IS_BIT_SET(Global_2423, 6))
	{
		if (Global_3127 > 0)
		{
			if (MISC::IS_BIT_SET(Global_2424, 11))
			{
				if (iLocal_41)
				{
					func_65(iLocal_37, "CLEAR_ALL");
					if (MISC::IS_BIT_SET(Global_2423, 25))
					{
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_37, "CREATE_ALERT");
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(26);
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(222f);
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(222f);
						GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					}
					if (MISC::IS_BIT_SET(Global_4269308, 11))
					{
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_37, "CREATE_ALERT");
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(53);
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(222f);
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(222f);
						GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					}
					if (Global_71590 == 1)
					{
						if (MISC::IS_BIT_SET(Global_4269308, 12))
						{
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_37, "CREATE_ALERT");
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(52);
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(222f);
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(222f);
							GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
						}
						if (MISC::IS_BIT_SET(Global_4269308, 28))
						{
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_37, "CREATE_ALERT");
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(60);
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(222f);
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(148f);
							GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
						}
					}
					if (MISC::IS_BIT_SET(Global_4269308, 19))
					{
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_37, "CREATE_ALERT");
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(55);
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(222f);
						if ((MISC::IS_BIT_SET(Global_4269308, 12) || MISC::IS_BIT_SET(Global_4269308, 11)) || MISC::IS_BIT_SET(Global_2423, 25))
						{
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(192f);
						}
						else
						{
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(222f);
						}
						GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					}
					MISC::CLEAR_BIT(&Global_2424, 11);
					iLocal_41 = 0;
				}
			}
		}
		if (Global_3127 < 1)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_37);
			MISC::CLEAR_BIT(&Global_2423, 6);
		}
		else
		{
			func_16();
		}
	}
	else if (Global_3127 > 0)
	{
		iLocal_37 = unk_0x67D02A194A2FC2BD("cellphone_alert_popup");
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_37))
		{
			SYSTEM::WAIT(0);
		}
		GRAPHICS::_SET_2D_LAYER(4);
		MISC::SET_BIT(&Global_2423, 6);
	}
}

void func_65(int iParam0, char* sParam1)//Position - 0x4836
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, sParam1);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_66()//Position - 0x484B
{
	if (MISC::IS_BIT_SET(Global_2424, 7))
	{
		MISC::SET_BIT(&Global_2424, 6);
		MISC::CLEAR_BIT(&Global_2424, 7);
		return;
	}
	if (!MISC::IS_BIT_SET(Global_2424, 7))
	{
		MISC::CLEAR_BIT(&Global_2424, 6);
		return;
	}
}

void func_67()//Position - 0x4888
{
	if (MISC::IS_BIT_SET(Global_2424, 4))
	{
		MISC::SET_BIT(&Global_2424, 3);
		MISC::CLEAR_BIT(&Global_2424, 4);
		return;
	}
	if (!MISC::IS_BIT_SET(Global_2424, 4))
	{
		MISC::CLEAR_BIT(&Global_2424, 3);
		return;
	}
}

void func_68()//Position - 0x48C5
{
	if (MISC::IS_BIT_SET(Global_2424, 2))
	{
		if (!Global_14553.f_1 == 1)
		{
			Global_14553.f_1 = 0;
		}
		MISC::CLEAR_BIT(&Global_2424, 2);
		return;
	}
	if (!MISC::IS_BIT_SET(Global_2424, 2))
	{
		if (!Global_14553.f_1 == 1)
		{
			if (Global_14553.f_1 < 4)
			{
				Global_14553.f_1 = 3;
			}
		}
		return;
	}
}

int func_69()//Position - 0x491D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
		{
			if (Global_14496 == 0)
			{
				if (Global_1738 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (Global_15866 != 2)
						{
						}
					}
				}
			}
		}
		if (func_29(14))
		{
			return 0;
		}
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!CAM::_IS_IN_VEHICLE_CAM_DISABLED())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
				{
					return 0;
				}
			}
		}
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		if (Global_105613)
		{
			return 0;
		}
	}
	if (Global_71590)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::_IS_IN_VEHICLE_CAM_DISABLED()))
	{
		iVar2 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if ((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4269586 || iVar2 == 1)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0 || Global_106565.f_14045.f_89)
		{
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_70(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4B44
{
	func_38();
	if (Global_71590 == 0)
	{
		if (func_29(14))
		{
			if (Global_16925 == 2 || Global_16925 == 4)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (Global_14553.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_49(0) == 1)
		{
			return 0;
		}
	}
	if (Global_14519 == 1)
	{
		return 0;
	}
	if (Global_14553.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_14550))
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_14553.f_1 < 4)
			{
				func_71("cellphone_flashhand");
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_14550 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_14535)
	{
		SYSTEM::WAIT(0);
	}
	func_116();
	func_114();
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_2430[iParam0 /*15*/].f_9) == 0)
	{
		Global_3029 = 0;
		Global_14553.f_1 = 7;
		func_71(&(Global_2430[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_2430[iParam0 /*15*/].f_9) == 0)
			{
				Global_14551 = SYSTEM::START_NEW_SCRIPT(&(Global_2430[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_2430[iParam0 /*15*/].f_9) == 0)
		{
			Global_14551 = SYSTEM::START_NEW_SCRIPT(&(Global_2430[iParam0 /*15*/].f_5), 2552);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_2430[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_71(char* sParam0)//Position - 0x4CA7
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_72(int iParam0)//Position - 0x4CC7
{
	if (func_74())
	{
		return;
	}
	if (Global_14725)
	{
		func_73(0, 0);
	}
	if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
	{
		MISC::SET_BIT(&Global_2424, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_15866 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2423, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2423, 30);
	}
	if (!func_44())
	{
		Global_14553.f_1 = 3;
	}
}

void func_73(bool bParam0, bool bParam1)//Position - 0x4D41
{
	if (bParam0)
	{
		if (func_49(0))
		{
			Global_14725 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_14490);
			}
			Global_14481 = { Global_14499[Global_14498 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14481);
		}
	}
	else if (Global_14725 == 1)
	{
		Global_14725 = 0;
		Global_14481 = { Global_14506[Global_14498 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14490);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14481);
		}
	}
}

bool func_74()//Position - 0x4DB5
{
	return MISC::IS_BIT_SET(Global_1681628, 19);
}

void func_75()//Position - 0x4DC7
{
	float fVar0;
	
	MISC::SET_GAME_PAUSED(1);
	PAD::SET_INPUT_EXCLUSIVE(2, 201);
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	fVar0 = 0f;
	while ((!PAD::IS_CONTROL_JUST_PRESSED(2, 201) && !PAD::IS_CONTROL_JUST_PRESSED(2, 202)) || fVar0 < 1f)
	{
		HUD::_SET_WARNING_MESSAGE_2("VEUI_HDR_ALERT", "VE_DIR_MODE_SURE", 18, 0, 0, -1, 0, 0, 1, 0);
		SYSTEM::WAIT(0);
		fVar0 = (fVar0 + MISC::GET_FRAME_TIME());
	}
	MISC::SET_GAME_PAUSED(0);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		Global_105510 = 1;
	}
}

void func_76(int iParam0)//Position - 0x4E46
{
	float fVar0;
	int iVar1;
	
	MISC::SET_GAME_PAUSED(1);
	PAD::SET_INPUT_EXCLUSIVE(2, 201);
	fVar0 = 0f;
	while (!PAD::IS_CONTROL_JUST_PRESSED(2, 201) || fVar0 < 1f)
	{
		iVar1 = func_77(iParam0, 119);
		HUD::SET_WARNING_MESSAGE("FBR_GENERIC", 16384, 0, 0, -1, "FBR_DIR_MODE", iVar1, 1, 0);
		SYSTEM::WAIT(0);
		fVar0 = (fVar0 + MISC::GET_FRAME_TIME());
	}
	MISC::SET_GAME_PAUSED(0);
}

char* func_77(int iParam0, int iParam1)//Position - 0x4EA8
{
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 1:
			return "FBR_BLK_CLEAN";
			break;
		
		case 2:
			return "FBR_BLK_RNNNG";
			break;
		
		case 13:
			return "FBR_BLK_DEAD";
			break;
		
		case 3:
			return "FBR_BLK_MISS";
			break;
		
		case 5:
			return "FBR_BLK_SHOP";
			break;
		
		case 4:
			return "FBR_BLK_CUTS";
			break;
		
		case 6:
			return "FBR_BLK_WANT";
			break;
		
		case 7:
			return "FBR_BLK_ONLI";
			break;
		
		case 8:
			return "FBR_BLK_ACT";
			break;
		
		case 9:
			return "FBR_BLK_LOC";
			break;
		
		case 10:
			return "FBR_BLK_VEH";
			break;
		
		case 11:
			return "FBR_BLK_PARA";
			break;
		
		case 12:
			return "FBR_BLK_FALL";
			break;
		
		default:
			return "ERROR";
			break;
	}
	return "ERROR";
}

int func_78(int iParam0, bool bParam1, int iParam2)//Position - 0x4F99
{
	int iVar0;
	
	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 13;
	}
	if (bParam1)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1)
		{
			return 2;
		}
	}
	if (func_109() && !func_29(14))
	{
		return 3;
	}
	if (func_108())
	{
		return 3;
	}
	if (func_107())
	{
		return 8;
	}
	if (bParam1)
	{
		if (func_106())
		{
			return 8;
		}
	}
	if (Global_90632)
	{
		return 3;
	}
	if (Global_26019)
	{
		return 8;
	}
	if (Global_25913)
	{
		return 8;
	}
	if (Global_2621550)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1516147206) > 0)
		{
			return 3;
		}
	}
	else if (Global_2621549)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(2006115718) > 0)
		{
			return 3;
		}
	}
	else if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0)
	{
		return 3;
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("finale_choice")) > 0)
	{
		return 3;
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("creator")) > 0)
	{
		return 3;
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("respawn_controller")) > 0)
	{
		return 13;
	}
	if (func_105(bParam1))
	{
		return 3;
	}
	if (PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		return 12;
	}
	if (func_104(Global_105590, 256))
	{
		return 3;
	}
	if (((func_103() || func_102()) || func_97()) || func_96())
	{
		return 5;
	}
	if (func_96())
	{
		return 5;
	}
	if (func_95())
	{
		return 5;
	}
	if (func_94())
	{
		return 5;
	}
	if (func_102())
	{
		return 5;
	}
	if (func_93() && !Global_105515)
	{
		return 8;
	}
	if (func_97())
	{
		return 5;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || func_92())
	{
		return 4;
	}
	if (func_58())
	{
		return 4;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_82(60);
			if (iVar0 != 0)
			{
				return iVar0;
			}
			if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1)
			{
				return 11;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || Global_105612)
			{
				return 10;
			}
		}
	}
	if (Global_26017)
	{
		return 8;
	}
	if (Global_71588)
	{
		return 4;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
		{
			return 6;
		}
		if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
		{
			return 8;
		}
		if (BRAIN::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()))
		{
			return 8;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 7;
	}
	if (func_81())
	{
		return 8;
	}
	if (Global_25767)
	{
		return 3;
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		return 4;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, 0, true, 0))
	{
		return 9;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		return 9;
	}
	if (bParam1)
	{
		if (!func_79(0))
		{
			return 8;
		}
	}
	if (PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return 9;
	}
	return 0;
}

int func_79(bool bParam0)//Position - 0x52D5
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if ((((((((((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || BRAIN::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
	{
		return 0;
	}
	if ((((((func_58() || Global_17272.f_4) || func_80()) || MISC::IS_MEMORY_CARD_IN_USE()) || MISC::IS_AUTO_SAVE_IN_PROGRESS()) || func_92()) || func_108())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
	}
	return 1;
}

int func_80()//Position - 0x53E5
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

bool func_81()//Position - 0x5401
{
	return Global_53675;
}

int func_82(int iParam0)//Position - 0x540C
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		return 5;
	}
	vVar0 = { func_91(PLAYER::PLAYER_ID()) };
	if (Global_105652[10 /*10*/].f_1)
	{
		if (SYSTEM::VDIST2(vVar0, 241.9889f, 360.4732f, 105.6166f) < 2f)
		{
			return 3;
		}
	}
	if (func_90(2) && !func_90(17))
	{
		if (SYSTEM::VDIST2(vVar0, -59.96629f, -1099.005f, 25.52088f) < 8f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0, -61.26628f, -1096.505f, 25.52088f, -58.43333f, -1101.147f, 29.24937f, 1.25f, 0, 1))
			{
				return 9;
			}
		}
	}
	if (SYSTEM::VDIST2(vVar0, -740.9346f, 5599.426f, 40.71515f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0, -746.1299f, 5599.226f, 40.47561f, -737.632f, 5599.364f, 44.1693f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(vVar0, -740.9346f, 5590.426f, 40.71515f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0, -746.1299f, 5590.667f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(vVar0, 446.3265f, 5566.35f, 780.2151f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0, 451.1661f, 5566.451f, 780.1703f, 442.5211f, 5566.374f, 783.9819f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(vVar0, 446.3265f, 5577.35f, 780.2151f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0, 451.1661f, 5577.867f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(vVar0, 128.83f, -1297.98f, 29.3f) < 2f || SYSTEM::VDIST2(vVar0, 95.07f, -1284.98f, 29.3f) < 2f)
	{
		return 9;
	}
	if (SYSTEM::VDIST2(vVar0, 1081.951f, -1976.762f, 30.47218f) < 6f && func_89(26))
	{
		return 9;
	}
	if (!iLocal_27)
	{
		func_83(iParam0);
	}
	iVar3 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
	if (iVar3 == 0)
	{
		return 0;
	}
	else if ((iVar3 == Global_105528 || iVar3 == Global_105529) || iVar3 == Global_105530)
	{
		return 9;
	}
	else if (iVar3 == Global_105519)
	{
		return 9;
	}
	else if (iVar3 == Global_105520)
	{
		return 9;
	}
	else if (iVar3 == Global_105523)
	{
		return 9;
	}
	else if (iVar3 == Global_105522)
	{
		return 9;
	}
	else if (iVar3 == Global_105524)
	{
		return 9;
	}
	else if (iVar3 == Global_105525)
	{
		return 9;
	}
	else if (iVar3 == Global_105526)
	{
		return 9;
	}
	else if (iVar3 == Global_105527)
	{
		return 9;
	}
	else if (iVar3 == Global_105531)
	{
		return 9;
	}
	else if (iVar3 == Global_105532)
	{
		return 9;
	}
	else if (iVar3 == Global_105533)
	{
		return 9;
	}
	else if (iVar3 == Global_105534)
	{
		return 9;
	}
	else if (iVar3 == Global_105535)
	{
		return 9;
	}
	else if ((iVar3 == Global_105536 || iVar3 == Global_105537) && func_90(67))
	{
		return 9;
	}
	iVar4 = 0;
	while (iVar4 <= (19 - 1))
	{
		if (iVar3 == Global_105538[iVar4])
		{
			return 9;
		}
		iVar4++;
	}
	return 0;
}

void func_83(var uParam0)//Position - 0x5834
{
	int iVar0;
	
	uParam0 = uParam0;
	func_86(24, &Global_105519);
	func_86(47, &Global_105520);
	func_86(10, &Global_105528);
	func_86(9, &Global_105529);
	func_86(8, &Global_105530);
	func_86(21, &Global_105531);
	func_86(11, &Global_105532);
	func_86(18, &Global_105536);
	func_86(19, &Global_105537);
	Global_105523 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-76.6618f, 6222.191f, 32.2412f, "V_factory1");
	Global_105522 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-98.2637f, 6210.022f, 31.924f, "V_factory2");
	Global_105524 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-115.8956f, 6179.749f, 32.4102f, "V_factory3");
	Global_105525 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-149.8199f, 6144.978f, 31.3353f, "V_factory4");
	Global_105526 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(16.3605f, -1100.259f, 28.797f, "v_gun");
	Global_105527 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(125.1948f, -1284.13f, 28.2847f, "v_strip3");
	Global_105533 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-545.5717f, 1987.145f, 126.0262f, "cs6_08_mine_int");
	Global_105534 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2330.598f, 2571.935f, 45.6802f, "ch3_01_trlr_int");
	Global_105535 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-54.7f, -1092.7f, 26.4f, "v_carshowroom");
	iVar0 = 0;
	while (iVar0 <= (19 - 1))
	{
		Global_105538[iVar0] = INTERIOR::GET_INTERIOR_AT_COORDS(func_84(iVar0));
		iVar0++;
	}
	iLocal_27 = 1;
}

Vector3 func_84(int iParam0)//Position - 0x59C0
{
	if (!func_85(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -711.8212f, -915.9057f, 18.2377f;
		
		case 1:
			return -52.7185f, -1756.175f, 28.4432f;
		
		case 2:
			return 1159.441f, -325.6666f, 68.2272f;
		
		case 3:
			return 1699.429f, 4928.642f, 41.0858f;
		
		case 4:
			return -1822.926f, 788.9531f, 137.212f;
		
		case 5:
			return 1166.427f, 2703.528f, 37.1574f;
		
		case 6:
			return -2973.414f, 390.6885f, 14.0433f;
		
		case 7:
			return -1225.86f, -903.5782f, 11.3263f;
		
		case 8:
			return 1140.659f, -981.0806f, 45.4158f;
		
		case 9:
			return -1490.275f, -382.8514f, 39.1634f;
		
		case 10:
			return -3240.719f, 1004.508f, 11.8468f;
		
		case 11:
			return -3039.249f, 589.3831f, 6.9251f;
		
		case 12:
			return 544.4275f, 2672.061f, 41.1726f;
		
		case 13:
			return 2558.754f, 385.599f, 107.6391f;
		
		case 14:
			return 2681.511f, 3282.763f, 54.2573f;
		
		case 15:
			return 1731.153f, 6411.633f, 34.0373f;
		
		case 16:
			return 1964.931f, 3741.207f, 31.3599f;
		
		case 17:
			return 29.0707f, -1348.773f, 28.5101f;
		
		case 18:
			return 376.8503f, 323.9777f, 102.5825f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_85(int iParam0)//Position - 0x5BAA
{
	if (iParam0 >= 19)
	{
		return 0;
	}
	else if (iParam0 <= -1)
	{
		return 0;
	}
	return 1;
}

var func_86(int iParam0, var uParam1)//Position - 0x5BCB
{
	struct<5> Var0;
	
	Var0 = { func_87(iParam0) };
	*uParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_87(int iParam0)//Position - 0x5BF0
{
	struct<5> Var0;
	vector3 vVar5;
	
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
			vVar5 = { func_88(1, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			vVar5 = { func_88(2, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			vVar5 = { func_88(3, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			vVar5 = { func_88(4, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			vVar5 = { func_88(5, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			vVar5 = { func_88(6, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			vVar5 = { func_88(7, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049815[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			vVar5 = { func_88(35, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			vVar5 = { func_88(36, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			vVar5 = { func_88(37, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			vVar5 = { func_88(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			vVar5 = { func_88(39, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			vVar5 = { func_88(40, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			vVar5 = { func_88(41, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			vVar5 = { func_88(42, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			vVar5 = { func_88(43, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
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
			vVar5 = { func_88(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			vVar5 = { func_88(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			vVar5 = { func_88(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			vVar5 = { func_88(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			vVar5 = { func_88(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			vVar5 = { func_88(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			vVar5 = { func_88(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			vVar5 = { func_88(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			vVar5 = { func_88(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			vVar5 = { func_88(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			vVar5 = { func_88(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			vVar5 = { func_88(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			vVar5 = { func_88(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			vVar5 = { func_88(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			vVar5 = { func_88(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			vVar5 = { func_88(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			vVar5 = { func_88(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			vVar5 = { func_88(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			vVar5 = { func_88(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			vVar5 = { func_88(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			vVar5 = { func_88(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			vVar5 = { func_88(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			vVar5 = { func_88(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			vVar5 = { func_88(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			vVar5 = { func_88(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			vVar5 = { func_88(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			vVar5 = { func_88(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			vVar5 = { func_88(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			vVar5 = { func_88(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			vVar5 = { func_88(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			vVar5 = { func_88(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			vVar5 = { func_88(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			vVar5 = { func_88(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			vVar5 = { func_88(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			vVar5 = { func_88(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			vVar5 = { func_88(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			vVar5 = { func_88(91, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			vVar5 = { func_88(97, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			vVar5 = { func_88(103, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			vVar5 = { func_88(104, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			vVar5 = { func_88(105, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			vVar5 = { func_88(106, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			vVar5 = { func_88(107, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			vVar5 = { func_88(108, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			vVar5 = { func_88(109, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			vVar5 = { func_88(110, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			vVar5 = { func_88(111, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			vVar5 = { func_88(112, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			vVar5 = { func_88(113, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			vVar5 = { func_88(114, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			vVar5 = { func_88(103, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			vVar5 = { func_88(106, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			vVar5 = { func_88(109, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			vVar5 = { func_88(112, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
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

struct<6> func_88(int iParam0, bool bParam1)//Position - 0x806F
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

int func_89(int iParam0)//Position - 0x8C25
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

int func_90(int iParam0)//Position - 0x8C8D
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_330[iParam0 /*6*/];
}

Vector3 func_91(int iParam0)//Position - 0x8CB9
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_92()//Position - 0x8CCC
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_93()//Position - 0x8CE6
{
	return MISC::GET_GAME_TIMER() <= Global_17411.f_5878 + 100;
}

bool func_94()//Position - 0x8CFB
{
	return MISC::IS_BIT_SET(Global_71838, 9);
}

bool func_95()//Position - 0x8D0D
{
	return MISC::IS_BIT_SET(Global_71838, 8);
}

int func_96()//Position - 0x8D1F
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (((((((((((((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_intro", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_base", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_enterchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_exitchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_a", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_b", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_c", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_d", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_intro", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_base", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_enterchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_exitchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_a", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_b", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_c", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_d", 3))
		{
			return 1;
		}
	}
	return 0;
}

int func_97()//Position - 0x8EB4
{
	int iVar0;
	
	if (func_103())
	{
		iVar0 = 0;
		while (iVar0 < 52)
		{
			if (func_98(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_98(int iParam0)//Position - 0x8EE4
{
	return func_99(iParam0, 20, 1);
}

int func_99(int iParam0, int iParam1, bool bParam2)//Position - 0x8EF5
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_93734.f_1350[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_101() == 0)
		{
			return MISC::IS_BIT_SET(func_111(func_100(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_106565.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_100(int iParam0)//Position - 0x8F5F
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 8917;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 10383;
}

int func_101()//Position - 0x9280
{
	return Global_25765;
}

bool func_102()//Position - 0x928B
{
	return Global_93734.f_340 > 0;
}

bool func_103()//Position - 0x929C
{
	return Global_93734.f_339 > 0;
}

bool func_104(var uParam0, int iParam1)//Position - 0x92AD
{
	return (uParam0 && iParam1) != 0;
}

bool func_105(bool bParam0)//Position - 0x92BC
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71838, 0);
}

bool func_106()//Position - 0x92E7
{
	return Global_93721.f_1;
}

bool func_107()//Position - 0x92F5
{
	return Global_71857;
}

int func_108()//Position - 0x9301
{
	if (Global_71850)
	{
		return 1;
	}
	else if (Global_56488 && !Global_56494)
	{
		return 1;
	}
	return 0;
}

int func_109()//Position - 0x932B
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	return 1;
}

int func_110(int iParam0)//Position - 0x9340
{
	if ((Global_16980 || Global_16979) || Global_16981)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 147)
	{
		if (Global_14553.f_1 == 10)
		{
			if (Global_1738 == iParam0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_111(int iParam0, int iParam1, int iParam2)//Position - 0x93A4
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_112(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_112(var uParam0)//Position - 0x93D6
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_113();
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

var func_113()//Position - 0x940A
{
	return Global_1312745;
}

void func_114()//Position - 0x9416
{
	if (Global_71590 == 0)
	{
		Global_2430[14 /*15*/].f_4 = -99;
		Global_2430[4 /*15*/].f_4 = -99;
		if (Global_2458608)
		{
			if (func_29(14))
			{
				func_115(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_115(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_115(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_115(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_115(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x94A4
{
	StringCopy(&(Global_2430[iParam0 /*15*/]), sParam1, 16);
	Global_2430[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_2430[iParam0 /*15*/].f_5), sParam3, 16);
	Global_2430[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_2430[iParam0 /*15*/].f_10 = iParam4;
	Global_2430[iParam0 /*15*/].f_11 = iParam5;
	Global_2430[iParam0 /*15*/].f_12 = iParam6;
	Global_2430[iParam0 /*15*/].f_13 = iParam7;
	Global_2430[iParam0 /*15*/].f_14 = iParam8;
	if (Global_2430[iParam0 /*15*/].f_12 == 0)
	{
		Global_2430[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_2430[iParam0 /*15*/].f_13 == 0)
	{
		Global_2430[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_2430[iParam0 /*15*/].f_14 == 0)
	{
		Global_2430[iParam0 /*15*/].f_14 = 0;
	}
}

void func_116()//Position - 0x955A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_2430[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_71590 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (Global_106565.f_28044[iVar2 /*29*/].f_19[Global_14553] == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_115(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_115(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_115(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_36425 == 15 && func_105(0) == 0) && Global_2428 == 0)
		{
			func_115(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14728 = 0;
			Global_2429 = 255;
		}
		else
		{
			func_115(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14728 = 1;
			Global_2429 = 42;
		}
		if (iVar1 == 1)
		{
			func_115(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_115(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_115(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_115(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_115(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_106565.f_14045.f_89 == 1)
		{
			func_115(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_106565.f_14045.f_88 == 1)
		{
			func_115(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_115(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_115(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_115(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_115(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_115(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_115(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_115(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_115(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_115(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_115(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_115(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_115(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_115(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_115(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_115(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_115(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_115(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (MISC::IS_BIT_SET(Global_4269308, 4) == 1)
		{
			func_115(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_115(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_115(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_115(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_115(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_115(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_115(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_115(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_115(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_115(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_115(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_115(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_115(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_115(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_115(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_115(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_115(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!MISC::IS_BIT_SET(Global_4269308, 4) == 1)
		{
			if (Global_1573916)
			{
				func_115(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_4269308, 20) == 1)
			{
				func_115(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_4269308, 22) == 1)
			{
				func_115(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_4269308, 26) == 1)
			{
				func_115(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((MISC::IS_BIT_SET(Global_4269308, 4) == 0 && Global_1573916 == 0) && MISC::IS_BIT_SET(Global_4269308, 20) == 0) && MISC::IS_BIT_SET(Global_4269308, 22) == 0) && MISC::IS_BIT_SET(Global_4269308, 26) == 0)
		{
			func_115(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

void func_117()//Position - 0x9AEE
{
}

