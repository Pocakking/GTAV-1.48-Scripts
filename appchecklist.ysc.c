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
	int iLocal_20[94] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120[5] = { 0, 0, 0, 0, 0 };
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	var uLocal_129 = 0;
	bool bLocal_130 = 0;
	struct<6> Local_131[5];
	int iLocal_162[5] = { 0, 0, 0, 0, 0 };
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
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_33(Global_14534, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_31();
	func_30();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_14553.f_1 != 9)
		{
			switch (Global_14553.f_1)
			{
				case 7:
					func_25();
					if (iLocal_119 == 0)
					{
						func_15();
					}
					break;
				
				case 8:
					if (iLocal_119 == 2)
					{
						func_25();
						if (bLocal_130)
						{
							func_10();
						}
					}
					if (iLocal_119 == 1)
					{
						func_25();
					}
					if (func_9(2, Global_14521, 0))
					{
						func_8();
						Global_14531 = 1;
						if (iLocal_119 == 2 || iLocal_119 == 1)
						{
							func_33(Global_14534, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_30();
							if (Global_14553.f_1 > 3)
							{
								Global_14553.f_1 = 7;
							}
						}
						if (iLocal_119 == 3)
						{
							func_33(Global_14534, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_4();
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
			{
				func_2();
			}
		}
		else
		{
			Global_14555 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()//Position - 0x16A
{
	if (((Global_14553.f_1 == 1 || Global_14553.f_1 == 3) || Global_14553.f_1 == 0) || Global_14497 == 1)
	{
		Global_14540 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x1AD
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_3()//Position - 0x1B9
{
	if (Global_3029 == 1 || Global_14553.f_1 < 7)
	{
		Global_14540 = 1;
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x1E2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	bLocal_130 = false;
	func_31();
	iLocal_115 = 0;
	func_33(Global_14534, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	iVar0 = 0;
	if (Global_14549 == 0)
	{
		while (iVar0 < 5)
		{
			func_7(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iLocal_115), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Local_131[iVar0 /*6*/]), 0, 0, 0, 0);
			iLocal_120[iLocal_115] = iVar0;
			iLocal_115++;
			iVar0++;
		}
	}
	if (Global_14549 == 1)
	{
		iVar1 = 0;
		iVar2 = 0;
		while (iVar2 < 5)
		{
			iLocal_162[iVar2] = 0;
			iVar2++;
		}
		iVar1 = (5 - 1);
		while (iVar0 < 5)
		{
			if (Local_131[iVar1 /*6*/].f_5 > 0)
			{
				if (iLocal_162[iVar1] == 0)
				{
					func_7(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iLocal_115), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Local_131[iVar1 /*6*/]), 0, 0, 0, 0);
					iLocal_120[iLocal_115] = iVar1;
					iLocal_115++;
					iLocal_162[iVar1] = 1;
				}
			}
			if (iVar1 > 0)
			{
				iVar1 = (iVar1 - 1);
			}
			iVar0++;
		}
	}
	if (iLocal_115 == 0)
	{
		func_7(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_3092", 0, 0, 0, 0);
	}
	else
	{
		bLocal_130 = true;
	}
	func_33(Global_14534, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_5(Global_14534, "SET_HEADER", "CELL_23", 0, 0, 0, 0);
	if (Global_14541)
	{
		func_7(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_7(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		func_7(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227", 0, 0, 0, 0);
		MISC::SET_BIT(&Global_2423, 17);
	}
	else
	{
		func_7(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::SET_BIT(&Global_2423, 17);
	}
	iLocal_119 = 2;
}

void func_5(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x400
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, sParam1);
	func_6(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_6(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_6(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_6(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_6(sParam6);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_6(char* sParam0)//Position - 0x45B
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_7(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x46D
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, sParam1);
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
		func_6(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_6(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_6(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_6(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_6(sParam11);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_8()//Position - 0x520
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_14542, 1);
	}
}

int func_9(int iParam0, int iParam1, int iParam2)//Position - 0x541
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

void func_10()//Position - 0x5B3
{
	int iVar0;
	
	if (Global_14531 == 0)
	{
		if (func_9(2, Global_14522, 0))
		{
			func_12();
			Global_14531 = 1;
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14534, "GET_CURRENT_SELECTION");
			uLocal_129 = GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION();
			while (!GRAPHICS::_0x768FF8961BA904D6(uLocal_129))
			{
				SYSTEM::WAIT(0);
			}
			iVar0 = GRAPHICS::_0x2DE7EFA66B906036(uLocal_129);
			iLocal_117 = iLocal_120[iVar0];
			if (Global_14553.f_1 > 3)
			{
				Global_14553.f_1 = 8;
			}
			func_33(Global_14534, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (iLocal_117 == 1)
			{
			}
			func_11();
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14534, "SET_DATA_SLOT");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(18);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_3206");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iLocal_126);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14534, "SET_DATA_SLOT");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(18);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_3101");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iLocal_127);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			func_33(Global_14534, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_5(Global_14534, "SET_HEADER", &(Local_131[iLocal_117 /*6*/]), 0, 0, 0, 0);
			func_7(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_7(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2423, 17);
			if (Global_14541)
			{
				func_7(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_7(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			iLocal_119 = 3;
		}
	}
}

void func_11()//Position - 0x743
{
	switch (iLocal_117)
	{
		case 0:
			iLocal_126 = Global_106284;
			iLocal_127 = Global_106301;
			break;
		
		case 1:
			iLocal_126 = (Global_106285 + Global_106286);
			iLocal_127 = (Global_106302 + Global_106303);
			break;
		
		case 2:
			iLocal_126 = Global_106287;
			iLocal_127 = Global_106304;
			break;
		
		case 3:
			iLocal_126 = Global_106288;
			iLocal_127 = Global_106305;
			break;
		
		case 4:
			iLocal_126 = (Global_106289 + Global_106290);
			iLocal_127 = (Global_106306 + Global_106307);
			break;
		
		default:
			iLocal_126 = 0;
			iLocal_127 = 0;
			break;
	}
}

void func_12()//Position - 0x7D8
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_14542, 1);
		func_13();
	}
}

void func_13()//Position - 0x7FD
{
	if (func_14())
	{
		MOBILE::_MOVE_FINGER(5);
	}
}

int func_14()//Position - 0x811
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71590)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4269586 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_15()//Position - 0x858
{
	if (Global_14531 == 0)
	{
		if (func_9(2, Global_14522, 0))
		{
			func_12();
			Global_14531 = 1;
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14534, "GET_CURRENT_SELECTION");
			uLocal_129 = GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION();
			while (!GRAPHICS::_0x768FF8961BA904D6(uLocal_129))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_128 = GRAPHICS::_0x2DE7EFA66B906036(uLocal_129);
			if (Global_14553.f_1 > 3)
			{
				Global_14553.f_1 = 8;
				if (iLocal_128 == 0)
				{
					iLocal_119 = 1;
					func_16();
				}
				else
				{
					iLocal_119 = 2;
					func_4();
				}
			}
		}
	}
}

void func_16()//Position - 0x8CD
{
	int iVar0;
	
	iLocal_115 = 0;
	func_20();
	iVar0 = 0;
	func_33(Global_14534, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_17(0))
	{
		func_7(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_229", 0, 0, 0, 0);
	}
	else
	{
		while (iVar0 < Global_88713)
		{
			func_7(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Global_88504[iVar0 /*4*/]), 0, 0, 0, 0);
			iLocal_115++;
			iLocal_20[iVar0] = iVar0;
			iVar0++;
		}
	}
	if (iLocal_20[1] == 99)
	{
	}
	func_33(Global_14534, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_5(Global_14534, "SET_HEADER", "CELL_3301", 0, 0, 0, 0);
	if (func_17(0) || Global_88713 == 0)
	{
		func_7(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_2423, 17);
		func_7(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_2423, 17);
		if (Global_14541)
		{
			func_7(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
	else if (Global_14541)
	{
		func_7(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_7(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		func_7(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227", 0, 0, 0, 0);
	}
	else
	{
		func_7(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	iLocal_119 = 1;
}

int func_17(int iParam0)//Position - 0xACD
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_18(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_18(int iParam0)//Position - 0xAEF
{
	return func_19(iParam0, Global_36425);
}

int func_19(int iParam0, int iParam1)//Position - 0xB00
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

void func_20()//Position - 0xCE1
{
	int iVar0;
	int iVar1;
	
	Global_88713 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_84464[iVar0 /*5*/] != -1)
		{
			if (Global_88713 < 52)
			{
				iVar1 = Global_71859.f_109[Global_84464[iVar0 /*5*/] /*4*/];
				MemCopy(&(Global_88504[Global_88713 /*4*/]), {func_24(iVar1)}, 4);
				Global_88713++;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		if ((MISC::IS_BIT_SET(Global_106565.f_18568[iVar0 /*6*/], 0) && MISC::IS_BIT_SET(Global_106565.f_18568[iVar0 /*6*/], 1)) && !MISC::IS_BIT_SET(Global_106565.f_18568[iVar0 /*6*/], 3))
		{
			if (Global_88713 < 52)
			{
				MemCopy(&(Global_88504[Global_88713 /*4*/]), {func_22(iVar0)}, 4);
				Global_88713++;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (MISC::IS_BIT_SET(Global_106565.f_9079.f_99.f_219[0], iVar0))
		{
			if (Global_88713 < 52)
			{
				StringCopy(&(Global_88504[Global_88713 /*4*/]), func_21(iVar0), 16);
				Global_88713++;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
}

char* func_21(int iParam0)//Position - 0xE1C
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
			break;
		
		case 1:
			return "MG_DART";
			break;
		
		case 2:
			return "MG_GOLF";
			break;
		
		case 3:
			return "MG_HUNT";
			break;
		
		case 4:
			return "MG_OFFR";
			break;
		
		case 5:
			return "MG_PILO";
			break;
		
		case 6:
			return "MG_RMPG";
			break;
		
		case 7:
			return "MG_SERA";
			break;
		
		case 8:
			return "MG_SRAC";
			break;
		
		case 9:
			return "MG_STRP";
			break;
		
		case 10:
			return "MG_STNT";
			break;
		
		case 11:
			return "MG_SHTR";
			break;
		
		case 12:
			return "MG_TAXI";
			break;
		
		case 13:
			return "MG_TENN";
			break;
		
		case 14:
			return "MG_TOWI";
			break;
		
		case 15:
			return "MG_TRFA";
			break;
		
		case 16:
			return "MG_TRFG";
			break;
		
		case 17:
			return "MG_TRIA";
			break;
		
		case 18:
			return "MG_YOGA";
			break;
		
		case 19:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_22(int iParam0)//Position - 0xF68
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_23(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_23(int iParam0)//Position - 0xFA0
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<2> func_24(int iParam0)//Position - 0x13ED
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_84500[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_106565.f_9079.f_99.f_205[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

void func_25()//Position - 0x1456
{
	if (iLocal_118)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_118 = 0;
		}
	}
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (func_9(2, 181, 0))
		{
			if (iLocal_116 > 0)
			{
				iLocal_116 = (iLocal_116 - 1);
			}
			func_28();
		}
		if (func_9(2, 180, 0))
		{
			iLocal_116++;
			if (iLocal_116 == iLocal_115)
			{
				iLocal_116 = 0;
			}
			func_26();
		}
	}
	if (iLocal_118 == 0)
	{
		if (func_9(2, Global_14529, 0))
		{
			if (iLocal_116 > 0)
			{
				iLocal_116 = (iLocal_116 - 1);
			}
			func_28();
			iLocal_118 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_9(2, Global_14530, 0))
		{
			iLocal_116++;
			if (iLocal_116 == iLocal_115)
			{
				iLocal_116 = 0;
			}
			func_26();
			iLocal_118 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_26()//Position - 0x1503
{
	func_33(Global_14534, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
	func_27();
}

void func_27()//Position - 0x1540
{
	if (func_14())
	{
		if (Global_14730 == 0)
		{
			MOBILE::_MOVE_FINGER(2);
		}
		else
		{
			MOBILE::_MOVE_FINGER(1);
		}
	}
}

void func_28()//Position - 0x1563
{
	func_33(Global_14534, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
	func_29();
}

void func_29()//Position - 0x15A0
{
	if (func_14())
	{
		if (Global_14730 == 0)
		{
			MOBILE::_MOVE_FINGER(1);
		}
		else
		{
			MOBILE::_MOVE_FINGER(2);
		}
	}
}

void func_30()//Position - 0x15C3
{
	func_33(Global_14534, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_7(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_3301", 0, 0, 0, 0);
	func_7(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_3302", 0, 0, 0, 0);
	iLocal_115 = 2;
	func_33(Global_14534, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_5(Global_14534, "SET_HEADER", "CELL_23", 0, 0, 0, 0);
	if (Global_14541)
	{
		func_7(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_7(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		func_7(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227", 0, 0, 0, 0);
	}
	else
	{
		func_7(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	iLocal_119 = 0;
}

void func_31()//Position - 0x16FD
{
	func_32(0, "CELL_3001", 1, Global_106301);
	func_32(1, "CELL_3008", 3, Global_106301);
	func_32(2, "CELL_3004", 7, Global_106304);
	func_32(3, "CELL_3005", 9, Global_106305);
	func_32(4, "CELL_3007", 11, Global_106306);
}

void func_32(int iParam0, char* sParam1, int iParam2, var uParam3)//Position - 0x174D
{
	StringCopy(&(Local_131[iParam0 /*6*/]), sParam1, 16);
	Local_131[iParam0 /*6*/].f_4 = iParam2;
	Local_131[iParam0 /*6*/].f_5 = uParam3;
	if (Local_131[0 /*6*/].f_4 == 1)
	{
	}
}

void func_33(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x177E
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, sParam1);
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

