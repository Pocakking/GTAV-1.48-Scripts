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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	struct<68> ScriptParam_0 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_18();
	}
	while (true)
	{
		switch (iLocal_45)
		{
			case 0:
				iLocal_46 = unk_0x67D02A194A2FC2BD("mission_complete");
				iLocal_45 = 1;
				break;
			
			case 1:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_46))
				{
					iLocal_45 = 2;
				}
				break;
			
			case 2:
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_STRING_PARAMS(iLocal_46, "SET_MISSION_TITLE", ScriptParam_0, ScriptParam_0.f_1, 0, 0, 0);
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_46, "SET_MISSION_TITLE_COLOUR", ScriptParam_0.f_2, ScriptParam_0.f_2, ScriptParam_0.f_2, -1082130432, -1082130432);
				if (ScriptParam_0.f_5.f_1 != -1f && !MISC::IS_STRING_NULL(ScriptParam_0.f_5.f_2))
				{
					GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(iLocal_46, "SET_TOTAL", SYSTEM::TO_FLOAT(ScriptParam_0.f_5), ScriptParam_0.f_5.f_1, -1f, -1f, -1f, ScriptParam_0.f_5.f_2, 0, 0, 0, 0);
				}
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_46, "SET_MEDAL", SYSTEM::TO_FLOAT(ScriptParam_0.f_5), -1082130432, -1082130432, -1082130432, -1082130432);
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_46, "SET_SOCIAL_CLUB_INFO", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				iVar0 = 0;
				while (iVar0 < ScriptParam_0.f_66 + 1)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_46, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(ScriptParam_0.f_9[iVar0 /*7*/]);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(ScriptParam_0.f_9[iVar0 /*7*/].f_1);
					if (ScriptParam_0.f_9[iVar0 /*7*/].f_2 == 4)
					{
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(SYSTEM::FLOOR((ScriptParam_0.f_9[iVar0 /*7*/].f_3 * 1000f)), 6);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						if (!MISC::IS_STRING_NULL(ScriptParam_0.f_9[iVar0 /*7*/].f_5))
						{
							func_17(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
						}
					}
					else if (ScriptParam_0.f_9[iVar0 /*7*/].f_2 == 8)
					{
						if (!MISC::IS_STRING_NULL(ScriptParam_0.f_9[iVar0 /*7*/].f_5) && !MISC::IS_STRING_NULL(ScriptParam_0.f_9[iVar0 /*7*/].f_6))
						{
							GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(ScriptParam_0.f_9[iVar0 /*7*/].f_6);
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
							GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						}
					}
					else
					{
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(ScriptParam_0.f_9[iVar0 /*7*/].f_2);
						if ((ScriptParam_0.f_9[iVar0 /*7*/].f_3 % 1f) == 0f)
						{
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(ScriptParam_0.f_9[iVar0 /*7*/].f_3);
						}
						else
						{
							GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
							HUD::ADD_TEXT_COMPONENT_FLOAT(ScriptParam_0.f_9[iVar0 /*7*/].f_3, 2);
							GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						}
						if ((ScriptParam_0.f_9[iVar0 /*7*/].f_4 % 1f) == 0f)
						{
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(ScriptParam_0.f_9[iVar0 /*7*/].f_4);
						}
						else
						{
							GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
							HUD::ADD_TEXT_COMPONENT_FLOAT(ScriptParam_0.f_9[iVar0 /*7*/].f_4, 2);
							GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						}
						if (!MISC::IS_STRING_NULL(ScriptParam_0.f_9[iVar0 /*7*/].f_5))
						{
							func_17(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
						}
						if (!MISC::IS_STRING_NULL(ScriptParam_0.f_9[iVar0 /*7*/].f_6))
						{
							func_17(ScriptParam_0.f_9[iVar0 /*7*/].f_6);
						}
					}
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					iVar0++;
				}
				if (ScriptParam_0.f_5 != 0 && !MISC::IS_STRING_NULL(ScriptParam_0.f_5.f_2))
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_46, "SET_TOTAL");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(ScriptParam_0.f_5);
					if (!MISC::IS_STRING_NULL(ScriptParam_0.f_5.f_3))
					{
						func_17(ScriptParam_0.f_5.f_3);
					}
					else
					{
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(ScriptParam_0.f_5.f_1);
					}
					func_17(ScriptParam_0.f_5.f_2);
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_46, "DRAW_MENU_LIST");
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				func_12(1);
				func_9(&iLocal_47);
				if (!func_8(Global_106565.f_19091, 4096))
				{
					func_6(&(Global_106565.f_19091), 4096);
				}
				iLocal_45 = 3;
				break;
			
			case 3:
				if (((func_2(&iLocal_47) > ScriptParam_0.f_67 && ScriptParam_0.f_67 != -1f) || CAM::IS_SCREEN_FADED_OUT()) || Global_25909)
				{
					func_18();
				}
				else
				{
					func_1(1);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_46, 0.1495f, 0.3159f, 0.2021f, 0.5111f, 255, 255, 255, 0, 0);
					if (HUD::IS_HUD_COMPONENT_ACTIVE(10))
					{
						HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
					}
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
	func_18();
}

void func_1(int iParam0)//Position - 0x447
{
	Global_71850 = iParam0;
	Global_71851 = iParam0;
}

float func_2(int iParam0)//Position - 0x45B
{
	if (func_5(iParam0))
	{
		if (func_4(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_3(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_3(bool bParam0)//Position - 0x49A
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_4(var uParam0)//Position - 0x4F2
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

bool func_5(var uParam0)//Position - 0x502
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

void func_6(var uParam0, int iParam1)//Position - 0x512
{
	func_7(uParam0, iParam1);
}

void func_7(var uParam0, var uParam1)//Position - 0x522
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_8(var uParam0, int iParam1)//Position - 0x533
{
	return (uParam0 && iParam1) != 0;
}

void func_9(int iParam0)//Position - 0x542
{
	if (!func_5(iParam0))
	{
		func_10(iParam0);
	}
}

void func_10(int iParam0)//Position - 0x55A
{
	func_11(iParam0, 0f);
}

void func_11(int iParam0, float fParam1)//Position - 0x569
{
	iParam0->f_1 = (func_3(MISC::IS_BIT_SET(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_12(int iParam0)//Position - 0x597
{
	if (func_16())
	{
		return;
	}
	if (Global_14725)
	{
		func_14(0, 0);
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
	if (!func_13())
	{
		Global_14553.f_1 = 3;
	}
}

int func_13()//Position - 0x611
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)//Position - 0x638
{
	if (bParam0)
	{
		if (func_15(0))
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

int func_15(int iParam0)//Position - 0x6AC
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

bool func_16()//Position - 0x706
{
	return MISC::IS_BIT_SET(Global_1681628, 19);
}

void func_17(char* sParam0)//Position - 0x718
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_18()//Position - 0x72A
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_46);
	Global_25909 = 0;
	func_1(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

