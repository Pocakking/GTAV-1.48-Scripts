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
	int iLocal_19[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	struct<6> Local_84[165];
	struct<6> Local_1075[165];
	struct<8> Local_2066[19];
	int iLocal_2219 = 0;
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
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
	{
		func_47();
	}
	func_41();
	Global_16932 = 0;
	Global_106565.f_14045[Global_14553 /*20*/].f_18 = 0;
	Global_14724 = 0;
	func_40(Global_14534, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_38();
	func_37();
	if (Global_14553.f_1 > 3)
	{
		Global_14553.f_1 = 7;
	}
	iLocal_65 = MISC::GET_GAME_TIMER();
	Global_14557 = 1;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_64 == 0)
		{
			iLocal_66 = MISC::GET_GAME_TIMER();
			if ((iLocal_66 - iLocal_65) > 500)
			{
				iLocal_64 = 1;
			}
		}
		if (Global_14553.f_1 != 9)
		{
			switch (Global_14553.f_1)
			{
				case 7:
					if (Global_16932 == 0)
					{
						if (Global_2538128 == 0)
						{
							func_32();
							func_28();
						}
					}
					break;
				
				case 8:
					if (Global_16932 == 1)
					{
						func_5();
						func_32();
					}
					break;
				
				default:
					break;
			}
			if (Global_16932 == 0)
			{
				if (func_4())
				{
					func_47();
				}
			}
			else if (func_3(2, Global_14521, 0) || MISC::IS_BIT_SET(Global_2424, 12))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_106565.f_14135[iLocal_58 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					SYSTEM::WAIT(0);
					MISC::CLEAR_BIT(&Global_2424, 12);
					func_2();
					Global_14531 = 1;
					Global_16932 = 0;
					if (Global_14553.f_1 > 3)
					{
						Global_14553.f_1 = 7;
					}
					if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
					{
						func_47();
					}
					func_40(Global_14534, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_38();
					func_37();
					if (Global_106565.f_14135[iLocal_58 /*104*/].f_29 > 0)
					{
						if (Global_106565.f_14135[iLocal_58 /*104*/].f_31 == 1)
						{
							Global_106565.f_14135[iLocal_58 /*104*/].f_29 = 4;
							Global_106565.f_14135[iLocal_58 /*104*/].f_24 = 1;
						}
						else
						{
							Global_106565.f_14135[iLocal_58 /*104*/].f_29 = 4;
							Global_106565.f_14135[iLocal_58 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_47();
		}
		if (func_1())
		{
			func_47();
		}
	}
}

int func_1()//Position - 0x23A
{
	if (((Global_14553.f_1 == 1 || Global_14553.f_1 == 3) || Global_14553.f_1 == 0) || Global_14497 == 1)
	{
		Global_14540 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x27D
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_14542, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)//Position - 0x29E
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

int func_4()//Position - 0x310
{
	if (Global_3029 == 1 || Global_14553.f_1 < 7)
	{
		Global_14540 = 1;
		return 1;
	}
	return 0;
}

void func_5()//Position - 0x339
{
	func_6();
}

void func_6()//Position - 0x345
{
	if (Global_106565.f_14135[iLocal_58 /*104*/].f_24 == 1)
	{
		if (Global_14531 == 0)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, Global_14524))
			{
				func_2();
				Global_14531 = 1;
				func_22();
				if (Global_106565.f_14135[iLocal_58 /*104*/].f_27 == 1)
				{
					Global_106565.f_14135[iLocal_58 /*104*/].f_99[0] = 0;
					Global_106565.f_14135[iLocal_58 /*104*/].f_99[1] = 0;
					Global_106565.f_14135[iLocal_58 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_106565.f_14135[iLocal_58 /*104*/].f_99[Global_14553] = 0;
				}
				if (func_21(iLocal_58))
				{
				}
				else
				{
					Global_106565.f_14135[iLocal_58 /*104*/].f_24 = 0;
					Global_106565.f_14135[iLocal_58 /*104*/].f_28 = 0;
				}
				HUD::_REMOVE_NOTIFICATION(Global_106565.f_14135[iLocal_58 /*104*/].f_16);
				func_40(Global_14534, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				if (iLocal_56 > 0)
				{
					iLocal_56 = (iLocal_56 - 1);
				}
				func_37();
				if (Global_14553.f_1 > 3)
				{
					Global_14553.f_1 = 7;
					Global_16932 = 0;
				}
			}
		}
	}
	else if (Global_14531 == 0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, Global_14525))
		{
			if (iLocal_60 == 1)
			{
				if (Global_14553.f_1 > 3)
				{
					StringCopy(&Global_68791, HUD::_GET_LABEL_TEXT(&Global_16907), 64);
					Global_68920 = 7;
					MISC::SET_BIT(&Global_2424, 10);
					Global_14553.f_1 = 6;
				}
				func_47();
			}
		}
	}
	if (Global_106565.f_14135[iLocal_58 /*104*/].f_31 == 1)
	{
		if (Global_14531 == 0)
		{
			if (func_3(2, Global_14525, 0))
			{
				func_18();
				Global_14531 = 1;
				Global_106565.f_14135[iLocal_58 /*104*/].f_29 = 2;
				Global_106565.f_14135[iLocal_58 /*104*/].f_24 = 1;
				Global_106565.f_14135[iLocal_58 /*104*/].f_31 = 0;
				MISC::CLEAR_BIT(&Global_2423, 17);
				Global_16932 = 0;
				if (Global_14553.f_1 > 3)
				{
					Global_14553.f_1 = 7;
				}
				func_40(Global_14534, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				func_37();
			}
		}
	}
	if (Global_14531 == 0 && iLocal_64 == 1)
	{
		if (func_3(2, Global_14522, 0))
		{
			Global_14531 = 1;
			if (Global_106565.f_14135[iLocal_58 /*104*/].f_29 > 0)
			{
				func_18();
				Global_106565.f_14135[iLocal_58 /*104*/].f_29 = 3;
				Global_106565.f_14135[iLocal_58 /*104*/].f_24 = 1;
				Global_16932 = 0;
				if (Global_14553.f_1 > 3)
				{
					Global_14553.f_1 = 7;
				}
				func_40(Global_14534, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				func_37();
			}
			else if (Global_106565.f_14135[iLocal_58 /*104*/].f_30 == 1)
			{
				func_18();
				Global_1738 = 144;
				if (Global_14553.f_1 > 3)
				{
					Global_14553.f_1 = 10;
					if (func_17() == 0)
					{
						func_15();
					}
				}
				func_14("appContacts");
				Global_14551 = SYSTEM::START_NEW_SCRIPT("appContacts", 4000);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appContacts");
				Global_1738 = Global_106565.f_14135[iLocal_58 /*104*/].f_17;
				if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
				{
					func_13(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_1738 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_13(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_7), "CELL_211", &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
				}
				func_7();
				func_47();
			}
		}
	}
}

void func_7()//Position - 0x6BE
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
			func_40(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_3028);
			if (Global_3028 == 1)
			{
				func_40(Global_14534, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14557), -1082130432, -1082130432, -1082130432);
				Global_14533 = Global_14557;
			}
			else
			{
				func_40(Global_14534, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14558), -1082130432, -1082130432, -1082130432);
				Global_14533 = Global_14558;
			}
			if (Global_14541)
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14727 == 0)
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_2423, 17);
			}
			else if (Global_71590)
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_2423, 17);
			}
			else
			{
				if (Global_14726 == 1)
				{
					if (Global_14541)
					{
						func_13(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14541)
				{
					func_13(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_13(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_2423, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_40(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_13(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2423, 17);
			if (MISC::IS_BIT_SET(Global_2423, 20))
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14496)
				{
					func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14552 == 1)
			{
				func_10();
				func_40(Global_14534, "SET_THEME", SYSTEM::TO_FLOAT(Global_106565.f_14045[Global_14553 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15879)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14534, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15881);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				else if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
				{
					func_13(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_1738 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_13(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_7), "CELL_217", &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
				}
				func_40(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15866 == 4 || Global_15866 == 3)
			{
				func_40(Global_14534, "SET_THEME", SYSTEM::TO_FLOAT(Global_106565.f_14045[Global_14553 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_15879)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14534, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15881);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
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
						func_40(Global_14534, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_1738 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_40(Global_14534, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_7), &cVar0, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
					}
				}
				func_40(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_8();
			break;
		
		default:
			break;
	}
}

void func_8()//Position - 0xC6B
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14534))
	{
		if (Global_14552 == 1)
		{
			if (Global_14541)
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15913)
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_2423, 20))
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2423, 17);
		}
		else
		{
			func_13(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2423, 17);
			if (MISC::IS_BIT_SET(Global_2423, 20))
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14496)
				{
					func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_9(char* sParam0)//Position - 0xDEB
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_10()//Position - 0xDFD
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

void func_11(int iParam0)//Position - 0x1074
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
		if (func_12(14))
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
								func_9(&(Global_2430[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar2);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							if (Global_2458608)
							{
								if (iVar1 == 14)
								{
									func_13(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_13(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16934), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_13(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_13(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_13(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14534, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2430[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_9(&(Global_2430[iVar1 /*15*/]));
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
								func_9(&(Global_2430[iVar1 /*15*/]));
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
								func_9(&(Global_2430[iVar1 /*15*/]));
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
								func_9(&(Global_2430[iVar1 /*15*/]));
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
								func_9(&(Global_2430[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (Global_2430[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1625180.f_1;
								func_13(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_13(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_12(int iParam0)//Position - 0x160C
{
	return Global_36425 == iParam0;
}

void func_13(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x161A
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
		func_9(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_9(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_9(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_9(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_9(sParam11);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_14(char* sParam0)//Position - 0x16CD
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_15()//Position - 0x16ED
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_16() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_71590)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0);
			if (Global_71590)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = 1;
				}
			}
			else if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 1;
			}
			if (!Global_14496)
			{
				if (Global_1738 != 128)
				{
					if (iVar0 == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
							}
							else
							{
								if (Global_71590)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
								}
								MISC::SET_BIT(&Global_2423, 11);
								BRAIN::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_16()//Position - 0x1810
{
	int iVar0;
	int iVar1;
	
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

int func_17()//Position - 0x1834
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
		if (func_12(14))
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

void func_18()//Position - 0x1A5B
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_14542, 1);
		func_19();
	}
}

void func_19()//Position - 0x1A80
{
	if (func_20())
	{
		MOBILE::_MOVE_FINGER(5);
	}
}

int func_20()//Position - 0x1A94
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

int func_21(int iParam0)//Position - 0x1ADB
{
	if ((Global_106565.f_14135[iParam0 /*104*/].f_99[0] == 1 || Global_106565.f_14135[iParam0 /*104*/].f_99[1] == 1) || Global_106565.f_14135[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_22()//Position - 0x1B30
{
	if (func_12(14))
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
		Global_14553 = func_23();
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

var func_23()//Position - 0x1BD2
{
	func_24();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_24()//Position - 0x1BEB
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_27(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_26(PLAYER::PLAYER_PED_ID());
			if (func_25(iVar0) && (!func_12(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_25(Global_106565.f_2357.f_539.f_4321))
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

bool func_25(int iParam0)//Position - 0x1CE8
{
	return iParam0 < 3;
}

int func_26(int iParam0)//Position - 0x1CF4
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_27(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_27(int iParam0)//Position - 0x1D31
{
	if (func_25(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_28()//Position - 0x1D5B
{
	struct<16> Var0;
	char* sVar16;
	int iVar17;
	
	if (Global_14531 == 0)
	{
		if ((func_3(2, Global_14522, 0) || Global_106565.f_14045[Global_14553 /*20*/].f_17 == 1) || Global_16926 == 1)
		{
			if (Global_106565.f_14045[Global_14553 /*20*/].f_17 == 0 && Global_16926 == 0)
			{
				func_18();
			}
			Global_14531 = 1;
			iLocal_64 = 0;
			iLocal_58 = iLocal_19[iLocal_56];
			if (Global_106565.f_14135[iLocal_58 /*104*/].f_24 != 0)
			{
				if (Global_14553.f_1 > 3)
				{
					func_13(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::CLEAR_BIT(&Global_2423, 17);
					Global_14553.f_1 = 8;
				}
				if (Global_106565.f_14045[Global_14553 /*20*/].f_17 == 1 || Global_16926 == 1)
				{
					iLocal_58 = iLocal_19[0];
					iLocal_57 = 0;
					if (Global_106565.f_14045[Global_14553 /*20*/].f_17 == 1)
					{
					}
					Global_16926 = 0;
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					iLocal_62 = 0;
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14534, "GET_CURRENT_SELECTION");
					iLocal_67 = GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION();
					while (!GRAPHICS::_0x768FF8961BA904D6(iLocal_67) && iLocal_62 == 0)
					{
						SYSTEM::WAIT(0);
						if (SYSTEM::TIMERB() > 2000)
						{
							iLocal_62 = 1;
						}
					}
					if (iLocal_62 == 1)
					{
						iLocal_63 = 0;
					}
					else
					{
						iLocal_63 = GRAPHICS::_0x2DE7EFA66B906036(iLocal_67);
					}
					if (iLocal_63 < 0)
					{
						iLocal_63 = 0;
					}
					iLocal_58 = iLocal_19[iLocal_63];
					iLocal_57 = iLocal_63;
				}
				Global_106565.f_14135[iLocal_58 /*104*/].f_28 = 1;
				iLocal_60 = 0;
				StringCopy(&Global_16907, "NO_HYPERLINK", 64);
				Var0 = { Global_106565.f_14135[iLocal_58 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (HUD::DOES_TEXT_LABEL_EXIST(&Var0))
				{
					Global_16907 = { Var0 };
					iLocal_60 = 1;
					if (Global_14541)
					{
						func_13(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					MISC::SET_BIT(&Global_2423, 17);
					Global_106565.f_14135[iLocal_58 /*104*/].f_26 = 1;
					Global_106565.f_14135[iLocal_58 /*104*/].f_24 = 2;
				}
				if (Global_106565.f_14135[iLocal_58 /*104*/].f_26 == 0)
				{
					Global_106565.f_14135[iLocal_58 /*104*/].f_24 = 1;
				}
				func_31();
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14534, "SET_DATA_SLOT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(7);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				if (Global_106565.f_14135[iLocal_58 /*104*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106565.f_14135[iLocal_58 /*104*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					func_9(&(Global_106565.f_28044[Global_106565.f_14135[iLocal_58 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_106565.f_14135[iLocal_58 /*104*/].f_32)
				{
					case 0:
						func_9(&(Global_106565.f_14135[iLocal_58 /*104*/]));
						break;
					
					case 1:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_106565.f_14135[iLocal_58 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106565.f_14135[iLocal_58 /*104*/].f_33));
						if (Global_106565.f_14135[iLocal_58 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_106565.f_14135[iLocal_58 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106565.f_14135[iLocal_58 /*104*/].f_67));
						}
						if ((Global_106565.f_14135[iLocal_58 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_106565.f_14135[iLocal_58 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_106565.f_14135[iLocal_58 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_106565.f_14135[iLocal_58 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_106565.f_14135[iLocal_58 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106565.f_14135[iLocal_58 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_106565.f_14135[iLocal_58 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_106565.f_14135[iLocal_58 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106565.f_14135[iLocal_58 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 2:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_106565.f_14135[iLocal_58 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_106565.f_14135[iLocal_58 /*104*/].f_49);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 3:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_106565.f_14135[iLocal_58 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106565.f_14135[iLocal_58 /*104*/].f_33));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_106565.f_14135[iLocal_58 /*104*/].f_49);
						if (Global_106565.f_14135[iLocal_58 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_106565.f_14135[iLocal_58 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106565.f_14135[iLocal_58 /*104*/].f_67));
						}
						if ((Global_106565.f_14135[iLocal_58 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_106565.f_14135[iLocal_58 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_106565.f_14135[iLocal_58 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_106565.f_14135[iLocal_58 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_106565.f_14135[iLocal_58 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106565.f_14135[iLocal_58 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_106565.f_14135[iLocal_58 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_106565.f_14135[iLocal_58 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106565.f_14135[iLocal_58 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 4:
						func_30(iLocal_58);
						break;
					
					case 5:
						func_30(iLocal_58);
						break;
					
					case 6:
						func_30(iLocal_58);
						break;
					
					case 7:
						func_30(iLocal_58);
						break;
					
					case 8:
						func_30(iLocal_58);
						break;
					
					case 9:
						func_30(iLocal_58);
						break;
					
					case 10:
						func_30(iLocal_58);
						break;
					
					case 11:
						func_30(iLocal_58);
						break;
				}
				if (Global_16935[iLocal_58] == 0)
				{
					if (Global_106565.f_14135[iLocal_58 /*104*/].f_17 == 159)
					{
						func_9("CELL_COMIC_P");
					}
					else
					{
						func_9(&(Global_106565.f_28044[Global_106565.f_14135[iLocal_58 /*104*/].f_17 /*29*/].f_7));
					}
				}
				else
				{
					if (PED::IS_PEDHEADSHOT_VALID(Global_16935[iLocal_58]))
					{
						if (PED::IS_PEDHEADSHOT_READY(Global_16935[iLocal_58]))
						{
							sVar16 = PED::GET_PEDHEADSHOT_TXD_STRING(Global_16935[iLocal_58]);
						}
						else
						{
							sVar16 = "CHAR_DEFAULT";
						}
					}
					else
					{
						sVar16 = "CHAR_DEFAULT";
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sVar16);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				Global_16932 = 1;
				func_40(Global_14534, "DISPLAY_VIEW", 7f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_29(Global_14534, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
				HUD::_REMOVE_NOTIFICATION(Global_106565.f_14135[iLocal_58 /*104*/].f_16);
				if (Global_106565.f_14135[iLocal_58 /*104*/].f_29 > 0)
				{
					if (Global_14541)
					{
						func_13(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_106565.f_14135[iLocal_58 /*104*/].f_30 == 1)
				{
					if (Global_14541)
					{
						func_13(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_13(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_106565.f_14135[iLocal_58 /*104*/].f_29 > 0)
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_106565.f_14135[iLocal_58 /*104*/]), "CELL_FINV"))
					{
						if (Global_14541)
						{
							func_13(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_13(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_14541)
					{
						func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14541)
				{
					func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_106565.f_14135[iLocal_58 /*104*/].f_24 == 2)
				{
					if (Global_106565.f_14135[iLocal_58 /*104*/].f_31 == 1)
					{
						iLocal_60 = 0;
						if (Global_14541)
						{
							func_13(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_13(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						MISC::SET_BIT(&Global_2423, 17);
					}
					else if (iLocal_60 == 0)
					{
						func_13(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&Global_2423, 17);
					}
				}
				else if (Global_14541)
				{
					func_13(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					MISC::SET_BIT(&Global_2423, 17);
				}
				else
				{
					func_13(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::SET_BIT(&Global_2423, 17);
				}
				Global_106565.f_14045[Global_14553 /*20*/].f_18 = 0;
				Global_106565.f_14045[Global_14553 /*20*/].f_17 = 0;
			}
			else
			{
				iVar17 = 0;
				if (Global_106565.f_14045[Global_14553 /*20*/].f_17 == 1 || Global_16926 == 1)
				{
					if (Global_16926)
					{
					}
					iVar17 = 1;
				}
				Global_106565.f_14045[Global_14553 /*20*/].f_18 = 0;
				Global_106565.f_14045[Global_14553 /*20*/].f_17 = 0;
				if (iVar17 == 1)
				{
					iVar17 = 0;
					Global_14553.f_1 = 3;
				}
			}
		}
		if (Global_2538128 == 0)
		{
			if (Global_71590)
			{
				PAD::SET_INPUT_EXCLUSIVE(0, Global_14525);
				if (func_3(2, Global_14525, 0))
				{
					Global_14531 = 1;
					Global_2538128 = 1;
				}
			}
		}
	}
}

void func_29(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x26F8
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, sParam1);
	func_9(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_9(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_9(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_9(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_9(sParam6);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_30(int iParam0)//Position - 0x2753
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_106565.f_14135[iParam0 /*104*/].f_49)
	{
		case 1:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL01");
			break;
		
		case 2:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL02");
			break;
		
		case 3:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL03");
			break;
		
		case 4:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL04");
			break;
		
		case 5:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL05");
			break;
		
		case 6:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL06");
			break;
		
		case 7:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL07");
			break;
		
		case 8:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL08");
			break;
		
		case 9:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL09");
			break;
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_106565.f_14135[iParam0 /*104*/]));
	while (iVar0 < Global_106565.f_14135[iParam0 /*104*/].f_49)
	{
		switch (Global_106565.f_14135[iParam0 /*104*/].f_32)
		{
			case 4:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2528542.f_1653[iVar0 /*4*/]));
				break;
			
			case 5:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657086[iVar0 /*4*/]));
				break;
			
			case 6:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657127[iVar0 /*4*/]));
				break;
			
			case 7:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657148[iVar0 /*4*/]));
				break;
			
			case 8:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657165[iVar0 /*4*/]));
				break;
			
			case 9:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657178[iVar0 /*4*/]));
				break;
			
			case 10:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657191[iVar0 /*4*/]));
				break;
			
			case 11:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657204[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_31()//Position - 0x28F4
{
	int iVar0;
	
	if (iLocal_2219)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&uLocal_68);
	}
	iLocal_2219 = 0;
	if (Global_106565.f_14135[iLocal_58 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 165)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_106565.f_14135[iLocal_58 /*104*/]), &(Local_84[iVar0 /*6*/])))
			{
				if (iVar0 < 19)
				{
					MemCopy(&uLocal_68, {Local_2066[iVar0 /*8*/]}, 16);
				}
				else
				{
					MemCopy(&uLocal_68, {Local_1075[iVar0 /*6*/]}, 16);
				}
				iLocal_2219 = 1;
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&uLocal_68, 0);
				while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&uLocal_68))
				{
					SYSTEM::WAIT(100);
				}
			}
			iVar0++;
		}
	}
}

void func_32()//Position - 0x298F
{
	if (iLocal_61)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_61 = 0;
		}
	}
	if (iLocal_61 == 0)
	{
		if (func_3(2, Global_14529, 0) || PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			if (iLocal_56 > 0)
			{
				iLocal_56 = (iLocal_56 - 1);
			}
			func_35();
			iLocal_61 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_3(2, Global_14530, 0) || PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			iLocal_56++;
			if (iLocal_56 == iLocal_55)
			{
				iLocal_56 = 0;
			}
			func_33();
			iLocal_61 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_33()//Position - 0x2A14
{
	func_40(Global_14534, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
	func_34();
}

void func_34()//Position - 0x2A51
{
	if (func_20())
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

void func_35()//Position - 0x2A74
{
	func_40(Global_14534, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
	func_36();
}

void func_36()//Position - 0x2AB1
{
	if (func_20())
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

void func_37()//Position - 0x2AD4
{
	if (Global_106565.f_14045[Global_14553 /*20*/].f_17 == 0)
	{
		if (iLocal_57 < 0)
		{
			iLocal_57 = 0;
		}
		func_40(Global_14534, "DISPLAY_VIEW", 6f, SYSTEM::TO_FLOAT(iLocal_57), -1082130432, -1082130432, -1082130432);
		func_29(Global_14534, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
		if (Global_14541)
		{
			if (iLocal_55 > 0)
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_55 > 0)
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_71590)
		{
			func_13(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2423, 17);
		}
		else
		{
			func_13(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2423, 17);
		}
	}
	else
	{
		iLocal_57 = 0;
	}
}

void func_38()//Position - 0x2C10
{
	int iVar0[35];
	int iVar36;
	int iVar37;
	int iVar38;
	
	iLocal_55 = 0;
	func_22();
	iVar36 = 0;
	while (iVar36 < 34)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_47();
		}
		iVar37 = 0;
		iVar38 = 34;
		Global_106565.f_14135[iVar38 /*104*/].f_18 = -1;
		Global_106565.f_14135[iVar38 /*104*/].f_18.f_1 = 0;
		Global_106565.f_14135[iVar38 /*104*/].f_18.f_2 = 0;
		Global_106565.f_14135[iVar38 /*104*/].f_18.f_3 = 0;
		Global_106565.f_14135[iVar38 /*104*/].f_18.f_5 = 0;
		while (iVar37 < 35)
		{
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
			{
				func_47();
			}
			if (iVar0[iVar37] == 0)
			{
				if (Global_106565.f_14135[iVar37 /*104*/].f_24 != 0)
				{
					if (Global_106565.f_14135[iVar37 /*104*/].f_99[Global_14553] == 1)
					{
						if (func_39(Global_106565.f_14135[iVar37 /*104*/].f_18, Global_106565.f_14135[iVar38 /*104*/].f_18))
						{
							iVar38 = iVar37;
							if (Global_106565.f_14135[iVar38 /*104*/].f_28 == 0)
							{
								iLocal_59 = 33;
							}
							else
							{
								iLocal_59 = 34;
							}
						}
					}
				}
			}
			iVar37++;
		}
		iLocal_19[iVar36] = iVar38;
		iVar0[iVar38] = 1;
		if (Global_106565.f_14135[iVar38 /*104*/].f_24 != 0)
		{
			if (Global_106565.f_14135[iVar38 /*104*/].f_99[Global_14553] == 1)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14534, "SET_DATA_SLOT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(6);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar36);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_106565.f_14135[iVar38 /*104*/].f_18.f_2);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_106565.f_14135[iVar38 /*104*/].f_18.f_1);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iLocal_59);
				if (Global_106565.f_14135[iVar38 /*104*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFNH");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106565.f_14135[iVar38 /*104*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					func_9(&(Global_106565.f_28044[Global_106565.f_14135[iVar38 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_106565.f_14135[iVar38 /*104*/].f_32)
				{
					case 0:
						func_9(&(Global_106565.f_14135[iVar38 /*104*/]));
						break;
					
					case 1:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_106565.f_14135[iVar38 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106565.f_14135[iVar38 /*104*/].f_33));
						if (Global_106565.f_14135[iVar38 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_106565.f_14135[iVar38 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106565.f_14135[iVar38 /*104*/].f_67));
						}
						if ((Global_106565.f_14135[iVar38 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_106565.f_14135[iVar38 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_106565.f_14135[iVar38 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_106565.f_14135[iVar38 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_106565.f_14135[iVar38 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106565.f_14135[iVar38 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_106565.f_14135[iVar38 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_106565.f_14135[iVar38 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106565.f_14135[iVar38 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 2:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_106565.f_14135[iVar38 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_106565.f_14135[iVar38 /*104*/].f_49);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 3:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_106565.f_14135[iVar38 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106565.f_14135[iVar38 /*104*/].f_33));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_106565.f_14135[iVar38 /*104*/].f_49);
						if (Global_106565.f_14135[iVar38 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_106565.f_14135[iVar38 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106565.f_14135[iVar38 /*104*/].f_67));
						}
						if ((Global_106565.f_14135[iVar38 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_106565.f_14135[iVar38 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_106565.f_14135[iVar38 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_106565.f_14135[iVar38 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_106565.f_14135[iVar38 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106565.f_14135[iVar38 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_106565.f_14135[iVar38 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_106565.f_14135[iVar38 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106565.f_14135[iVar38 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 4:
						func_30(iVar38);
						break;
					
					case 5:
						func_30(iVar38);
						break;
					
					case 6:
						func_30(iVar38);
						break;
					
					case 7:
						func_30(iVar38);
						break;
					
					case 8:
						func_30(iVar38);
						break;
					
					case 9:
						func_30(iVar38);
						break;
					
					case 10:
						func_30(iVar38);
						break;
					
					case 11:
						func_30(iVar38);
						break;
				}
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
		}
		if (Global_106565.f_14135[iVar36 /*104*/].f_24 != 0)
		{
			if (Global_106565.f_14135[iVar36 /*104*/].f_99[Global_14553] == 1)
			{
				iLocal_55++;
			}
		}
		iVar36++;
	}
}

int func_39(struct<6> Param0, struct<6> Param6)//Position - 0x3156
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

void func_40(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x3241
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

void func_41()//Position - 0x32A4
{
	StringCopy(&(Local_84[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_2066[0 /*8*/]), "05_a_sext_stripperJuliet", 32);
	StringCopy(&(Local_84[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_2066[1 /*8*/]), "05_b_sext_stripperJuliet", 32);
	StringCopy(&(Local_84[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_2066[2 /*8*/]), "05_c_sext_stripperJuliet", 32);
	StringCopy(&(Local_84[3 /*6*/]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_2066[3 /*8*/]), "06_a_sext_stripperNikki", 32);
	StringCopy(&(Local_84[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_2066[4 /*8*/]), "06_b_sext_stripperNikki", 32);
	StringCopy(&(Local_84[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_2066[5 /*8*/]), "06_c_sext_stripperNikki", 32);
	StringCopy(&(Local_84[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_2066[6 /*8*/]), "08_a_sext_stripperSapphire", 32);
	StringCopy(&(Local_84[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_2066[7 /*8*/]), "08_b_sext_stripperSapphire", 32);
	StringCopy(&(Local_84[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_2066[8 /*8*/]), "08_c_sext_stripperSapphire", 32);
	StringCopy(&(Local_84[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_2066[9 /*8*/]), "04_a_sext_stripperInfernus", 32);
	StringCopy(&(Local_84[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_2066[10 /*8*/]), "04_b_sext_stripperInfernus", 32);
	StringCopy(&(Local_84[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_2066[11 /*8*/]), "04_c_sext_stripperInfernus", 32);
	StringCopy(&(Local_84[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_2066[12 /*8*/]), "11_a_sext_taxiLiz", 32);
	StringCopy(&(Local_84[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_2066[13 /*8*/]), "11_b_sext_taxiLiz", 32);
	StringCopy(&(Local_84[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_2066[14 /*8*/]), "11_c_sext_taxiLiz", 32);
	StringCopy(&(Local_84[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_2066[15 /*8*/]), "10_a_sext_hitcherGirl", 32);
	StringCopy(&(Local_84[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_2066[16 /*8*/]), "10_b_sext_hitcherGirl", 32);
	StringCopy(&(Local_84[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_2066[17 /*8*/]), "10_c_sext_hitcherGirl", 32);
	StringCopy(&(Local_84[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_2066[18 /*8*/]), "executiveproducer", 32);
	StringCopy(&(Local_84[19 /*6*/]), "LR_PIC_TXT1", 24);
	StringCopy(&(Local_1075[19 /*6*/]), "mt_phone_image_1", 24);
	StringCopy(&(Local_84[20 /*6*/]), "LR_PIC_TXT2", 24);
	StringCopy(&(Local_1075[20 /*6*/]), "mt_phone_image_2", 24);
	StringCopy(&(Local_84[21 /*6*/]), "LR_PIC_TXT3", 24);
	StringCopy(&(Local_1075[21 /*6*/]), "mt_phone_image_3", 24);
	StringCopy(&(Local_84[22 /*6*/]), "LR_PIC_TXT4", 24);
	StringCopy(&(Local_1075[22 /*6*/]), "mt_phone_image_4", 24);
	StringCopy(&(Local_84[23 /*6*/]), "LR_PIC_TXT5", 24);
	StringCopy(&(Local_1075[23 /*6*/]), "mt_phone_image_5", 24);
	StringCopy(&(Local_84[24 /*6*/]), "SAD_SMS_0", 24);
	StringCopy(&(Local_1075[24 /*6*/]), "MP_SND_TARGET_01", 24);
	StringCopy(&(Local_84[25 /*6*/]), "SAD_SMS_1", 24);
	StringCopy(&(Local_1075[25 /*6*/]), "MP_SND_TARGET_02", 24);
	StringCopy(&(Local_84[26 /*6*/]), "SAD_SMS_2", 24);
	StringCopy(&(Local_1075[26 /*6*/]), "MP_SND_TARGET_03", 24);
	StringCopy(&(Local_84[27 /*6*/]), "SAD_SMS_3", 24);
	StringCopy(&(Local_1075[27 /*6*/]), "MP_SND_TARGET_04", 24);
	StringCopy(&(Local_84[28 /*6*/]), "SAD_SMS_4", 24);
	StringCopy(&(Local_1075[28 /*6*/]), "MP_SND_TARGET_05", 24);
	StringCopy(&(Local_84[29 /*6*/]), "SAD_SMS_5", 24);
	StringCopy(&(Local_1075[29 /*6*/]), "MP_SND_TARGET_06", 24);
	StringCopy(&(Local_84[30 /*6*/]), "SAD_SMS_6", 24);
	StringCopy(&(Local_1075[30 /*6*/]), "MP_SND_TARGET_07", 24);
	StringCopy(&(Local_84[31 /*6*/]), "SAD_SMS_7", 24);
	StringCopy(&(Local_1075[31 /*6*/]), "MP_SND_TARGET_08", 24);
	StringCopy(&(Local_84[32 /*6*/]), "SAD_SMS_8", 24);
	StringCopy(&(Local_1075[32 /*6*/]), "MP_SND_TARGET_09", 24);
	StringCopy(&(Local_84[33 /*6*/]), "SAD_SMS_9", 24);
	StringCopy(&(Local_1075[33 /*6*/]), "MP_SND_TARGET_10", 24);
	StringCopy(&(Local_84[34 /*6*/]), "SAD_SMS_10", 24);
	StringCopy(&(Local_1075[34 /*6*/]), "MP_SND_TARGET_11", 24);
	StringCopy(&(Local_84[35 /*6*/]), "SAD_SMS_11", 24);
	StringCopy(&(Local_1075[35 /*6*/]), "MP_SND_TARGET_12", 24);
	StringCopy(&(Local_84[36 /*6*/]), "SAD_SMS_12", 24);
	StringCopy(&(Local_1075[36 /*6*/]), "MP_SND_TARGET_13", 24);
	StringCopy(&(Local_84[37 /*6*/]), "SAD_SMS_13", 24);
	StringCopy(&(Local_1075[37 /*6*/]), "MP_SND_TARGET_14", 24);
	StringCopy(&(Local_84[38 /*6*/]), "SAD_SMS_14", 24);
	StringCopy(&(Local_1075[38 /*6*/]), "MP_SND_TARGET_15", 24);
	StringCopy(&(Local_84[39 /*6*/]), "SAD_SMS_15", 24);
	StringCopy(&(Local_1075[39 /*6*/]), "MP_SND_TARGET_16", 24);
	StringCopy(&(Local_84[40 /*6*/]), "SAD_SMS_16", 24);
	StringCopy(&(Local_1075[40 /*6*/]), "MP_SND_TARGET_17", 24);
	StringCopy(&(Local_84[41 /*6*/]), "SAD_SMS_17", 24);
	StringCopy(&(Local_1075[41 /*6*/]), "MP_SND_TARGET_18", 24);
	StringCopy(&(Local_84[42 /*6*/]), "SAD_SMS_18", 24);
	StringCopy(&(Local_1075[42 /*6*/]), "MP_SND_TARGET_19", 24);
	StringCopy(&(Local_84[43 /*6*/]), "SAD_SMS_19", 24);
	StringCopy(&(Local_1075[43 /*6*/]), "MP_SND_TARGET_20", 24);
	StringCopy(&(Local_84[44 /*6*/]), "VEX_PM_PHOTO0", 24);
	StringCopy(&(Local_1075[44 /*6*/]), "MP_EX_LOCATION_01", 24);
	StringCopy(&(Local_84[45 /*6*/]), "VEX_PM_PHOTO1", 24);
	StringCopy(&(Local_1075[45 /*6*/]), "MP_EX_LOCATION_02", 24);
	StringCopy(&(Local_84[46 /*6*/]), "VEX_PM_PHOTO2", 24);
	StringCopy(&(Local_1075[46 /*6*/]), "MP_EX_LOCATION_03", 24);
	StringCopy(&(Local_84[47 /*6*/]), "VEX_PM_PHOTO3", 24);
	StringCopy(&(Local_1075[47 /*6*/]), "MP_EX_LOCATION_04", 24);
	StringCopy(&(Local_84[48 /*6*/]), "VEX_PM_PHOTO4", 24);
	StringCopy(&(Local_1075[48 /*6*/]), "MP_EX_LOCATION_05", 24);
	StringCopy(&(Local_84[49 /*6*/]), "VEX_PM_PHOTO5", 24);
	StringCopy(&(Local_1075[49 /*6*/]), "MP_EX_LOCATION_06", 24);
	StringCopy(&(Local_84[50 /*6*/]), "VEX_PM_PHOTO6", 24);
	StringCopy(&(Local_1075[50 /*6*/]), "MP_EX_LOCATION_07", 24);
	StringCopy(&(Local_84[51 /*6*/]), "VEX_PM_PHOTO7", 24);
	StringCopy(&(Local_1075[51 /*6*/]), "MP_EX_LOCATION_08", 24);
	StringCopy(&(Local_84[52 /*6*/]), "VEX_PM_PHOTO8", 24);
	StringCopy(&(Local_1075[52 /*6*/]), "MP_EX_LOCATION_09", 24);
	StringCopy(&(Local_84[53 /*6*/]), "VEX_PM_PHOTO9", 24);
	StringCopy(&(Local_1075[53 /*6*/]), "MP_EX_LOCATION_10", 24);
	StringCopy(&(Local_84[54 /*6*/]), "VEX_PM_PHOTO10", 24);
	StringCopy(&(Local_1075[54 /*6*/]), "MP_EX_LOCATION_11", 24);
	StringCopy(&(Local_84[55 /*6*/]), "VEX_PM_PHOTO11", 24);
	StringCopy(&(Local_1075[55 /*6*/]), "MP_EX_LOCATION_12", 24);
	StringCopy(&(Local_84[56 /*6*/]), "VEX_PM_PHOTO12", 24);
	StringCopy(&(Local_1075[56 /*6*/]), "MP_EX_LOCATION_13", 24);
	StringCopy(&(Local_84[57 /*6*/]), "VEX_PM_PHOTO13", 24);
	StringCopy(&(Local_1075[57 /*6*/]), "MP_EX_LOCATION_14", 24);
	StringCopy(&(Local_84[58 /*6*/]), "VEX_1_PROTO", 24);
	StringCopy(&(Local_1075[58 /*6*/]), "IE_TEXTVECH_01", 24);
	StringCopy(&(Local_84[59 /*6*/]), "VEX_2_PROTO", 24);
	StringCopy(&(Local_1075[59 /*6*/]), "IE_TEXTVECH_02", 24);
	StringCopy(&(Local_84[60 /*6*/]), "VEX_3_PROTO", 24);
	StringCopy(&(Local_1075[60 /*6*/]), "IE_TEXTVECH_03", 24);
	StringCopy(&(Local_84[61 /*6*/]), "VEX_4_TYRUS", 24);
	StringCopy(&(Local_1075[61 /*6*/]), "IE_TEXTVECH_04", 24);
	StringCopy(&(Local_84[62 /*6*/]), "VEX_5_TYRUS", 24);
	StringCopy(&(Local_1075[62 /*6*/]), "IE_TEXTVECH_05", 24);
	StringCopy(&(Local_84[63 /*6*/]), "VEX_6_TYRUS", 24);
	StringCopy(&(Local_1075[63 /*6*/]), "IE_TEXTVECH_06", 24);
	StringCopy(&(Local_84[64 /*6*/]), "VEX_7_BESTIA", 24);
	StringCopy(&(Local_1075[64 /*6*/]), "IE_TEXTVECH_07", 24);
	StringCopy(&(Local_84[65 /*6*/]), "VEX_8_BESTIA", 24);
	StringCopy(&(Local_1075[65 /*6*/]), "IE_TEXTVECH_08", 24);
	StringCopy(&(Local_84[66 /*6*/]), "VEX_9_BESTIA", 24);
	StringCopy(&(Local_1075[66 /*6*/]), "IE_TEXTVECH_09", 24);
	StringCopy(&(Local_84[67 /*6*/]), "VEX_10_T20", 24);
	StringCopy(&(Local_1075[67 /*6*/]), "IE_TEXTVECH_10", 24);
	StringCopy(&(Local_84[68 /*6*/]), "VEX_11_T20", 24);
	StringCopy(&(Local_1075[68 /*6*/]), "IE_TEXTVECH_11", 24);
	StringCopy(&(Local_84[69 /*6*/]), "VEX_12_T20", 24);
	StringCopy(&(Local_1075[69 /*6*/]), "IE_TEXTVECH_12", 24);
	StringCopy(&(Local_84[70 /*6*/]), "VEX_13_SHEAVA", 24);
	StringCopy(&(Local_1075[70 /*6*/]), "IE_TEXTVECH_13", 24);
	StringCopy(&(Local_84[71 /*6*/]), "VEX_14_SHEAVA", 24);
	StringCopy(&(Local_1075[71 /*6*/]), "IE_TEXTVECH_14", 24);
	StringCopy(&(Local_84[72 /*6*/]), "VEX_15_SHEAVA", 24);
	StringCopy(&(Local_1075[72 /*6*/]), "IE_TEXTVECH_15", 24);
	StringCopy(&(Local_84[73 /*6*/]), "VEX_16_OSIRIS", 24);
	StringCopy(&(Local_1075[73 /*6*/]), "IE_TEXTVECH_16", 24);
	StringCopy(&(Local_84[74 /*6*/]), "VEX_17_OSIRIS", 24);
	StringCopy(&(Local_1075[74 /*6*/]), "IE_TEXTVECH_17", 24);
	StringCopy(&(Local_84[75 /*6*/]), "VEX_18_OSIRIS", 24);
	StringCopy(&(Local_1075[75 /*6*/]), "IE_TEXTVECH_18", 24);
	StringCopy(&(Local_84[76 /*6*/]), "VEX_19_FMJ", 24);
	StringCopy(&(Local_1075[76 /*6*/]), "IE_TEXTVECH_19", 24);
	StringCopy(&(Local_84[77 /*6*/]), "VEX_20_FMJ", 24);
	StringCopy(&(Local_1075[77 /*6*/]), "IE_TEXTVECH_20", 24);
	StringCopy(&(Local_84[78 /*6*/]), "VEX_21_FMJ", 24);
	StringCopy(&(Local_1075[78 /*6*/]), "IE_TEXTVECH_21", 24);
	StringCopy(&(Local_84[79 /*6*/]), "VEX_22_REAPER", 24);
	StringCopy(&(Local_1075[79 /*6*/]), "IE_TEXTVECH_22", 24);
	StringCopy(&(Local_84[80 /*6*/]), "VEX_23_REAPER", 24);
	StringCopy(&(Local_1075[80 /*6*/]), "IE_TEXTVECH_23", 24);
	StringCopy(&(Local_84[81 /*6*/]), "VEX_24_REAPER", 24);
	StringCopy(&(Local_1075[81 /*6*/]), "IE_TEXTVECH_24", 24);
	StringCopy(&(Local_84[82 /*6*/]), "VEX_25_PFISTER", 24);
	StringCopy(&(Local_1075[82 /*6*/]), "IE_TEXTVECH_25", 24);
	StringCopy(&(Local_84[83 /*6*/]), "VEX_26_PFISTER", 24);
	StringCopy(&(Local_1075[83 /*6*/]), "IE_TEXTVECH_26", 24);
	StringCopy(&(Local_84[84 /*6*/]), "VEX_27_PFISTER", 24);
	StringCopy(&(Local_1075[84 /*6*/]), "IE_TEXTVECH_27", 24);
	StringCopy(&(Local_84[85 /*6*/]), "VEX_28_ALPHA", 24);
	StringCopy(&(Local_1075[85 /*6*/]), "IE_TEXTVECH_28", 24);
	StringCopy(&(Local_84[86 /*6*/]), "VEX_29_ALPHA", 24);
	StringCopy(&(Local_1075[86 /*6*/]), "IE_TEXTVECH_29", 24);
	StringCopy(&(Local_84[87 /*6*/]), "VEX_30_ALPHA", 24);
	StringCopy(&(Local_1075[87 /*6*/]), "IE_TEXTVECH_30", 24);
	StringCopy(&(Local_84[88 /*6*/]), "VEX_31_MAMBA", 24);
	StringCopy(&(Local_1075[88 /*6*/]), "IE_TEXTVECH_31", 24);
	StringCopy(&(Local_84[89 /*6*/]), "VEX_32_MAMBA", 24);
	StringCopy(&(Local_1075[89 /*6*/]), "IE_TEXTVECH_32", 24);
	StringCopy(&(Local_84[90 /*6*/]), "VEX_33_MAMBA", 24);
	StringCopy(&(Local_1075[90 /*6*/]), "IE_TEXTVECH_33", 24);
	StringCopy(&(Local_84[91 /*6*/]), "VEX_34_TAMPA", 24);
	StringCopy(&(Local_1075[91 /*6*/]), "IE_TEXTVECH_34", 24);
	StringCopy(&(Local_84[92 /*6*/]), "VEX_35_TAMPA", 24);
	StringCopy(&(Local_1075[92 /*6*/]), "IE_TEXTVECH_35", 24);
	StringCopy(&(Local_84[93 /*6*/]), "VEX_36_TAMPA", 24);
	StringCopy(&(Local_1075[93 /*6*/]), "IE_TEXTVECH_36", 24);
	StringCopy(&(Local_84[94 /*6*/]), "VEX_37_BTYPE", 24);
	StringCopy(&(Local_1075[94 /*6*/]), "IE_TEXTVECH_37", 24);
	StringCopy(&(Local_84[95 /*6*/]), "VEX_38_BTYPE", 24);
	StringCopy(&(Local_1075[95 /*6*/]), "IE_TEXTVECH_38", 24);
	StringCopy(&(Local_84[96 /*6*/]), "VEX_39_BTYPE", 24);
	StringCopy(&(Local_1075[96 /*6*/]), "IE_TEXTVECH_39", 24);
	StringCopy(&(Local_84[97 /*6*/]), "VEX_40_FELTZ3", 24);
	StringCopy(&(Local_1075[97 /*6*/]), "IE_TEXTVECH_40", 24);
	StringCopy(&(Local_84[98 /*6*/]), "VEX_41_FELTZ3", 24);
	StringCopy(&(Local_1075[98 /*6*/]), "IE_TEXTVECH_41", 24);
	StringCopy(&(Local_84[99 /*6*/]), "VEX_42_FELTZ3", 24);
	StringCopy(&(Local_1075[99 /*6*/]), "IE_TEXTVECH_42", 24);
	StringCopy(&(Local_84[100 /*6*/]), "VEX_43_ZTYPE", 24);
	StringCopy(&(Local_1075[100 /*6*/]), "IE_TEXTVECH_43", 24);
	StringCopy(&(Local_84[101 /*6*/]), "VEX_44_ZTYPE", 24);
	StringCopy(&(Local_1075[101 /*6*/]), "IE_TEXTVECH_44", 24);
	StringCopy(&(Local_84[102 /*6*/]), "VEX_45_ZTYPE", 24);
	StringCopy(&(Local_1075[102 /*6*/]), "IE_TEXTVECH_45", 24);
	StringCopy(&(Local_84[103 /*6*/]), "VEX_46_TROPOS", 24);
	StringCopy(&(Local_1075[103 /*6*/]), "IE_TEXTVECH_46", 24);
	StringCopy(&(Local_84[104 /*6*/]), "VEX_47_TROPOS", 24);
	StringCopy(&(Local_1075[104 /*6*/]), "IE_TEXTVECH_47", 24);
	StringCopy(&(Local_84[105 /*6*/]), "VEX_48_TROPOS", 24);
	StringCopy(&(Local_1075[105 /*6*/]), "IE_TEXTVECH_48", 24);
	StringCopy(&(Local_84[106 /*6*/]), "VEX_49_ENTITYXF", 24);
	StringCopy(&(Local_1075[106 /*6*/]), "IE_TEXTVECH_49", 24);
	StringCopy(&(Local_84[107 /*6*/]), "VEX_50_ENTITYXF", 24);
	StringCopy(&(Local_1075[107 /*6*/]), "IE_TEXTVECH_50", 24);
	StringCopy(&(Local_84[108 /*6*/]), "VEX_51_ENTITYXF", 24);
	StringCopy(&(Local_1075[108 /*6*/]), "IE_TEXTVECH_51", 24);
	StringCopy(&(Local_84[109 /*6*/]), "VEX_52_SULTANRS", 24);
	StringCopy(&(Local_1075[109 /*6*/]), "IE_TEXTVECH_52", 24);
	StringCopy(&(Local_84[110 /*6*/]), "VEX_53_SULTANRS", 24);
	StringCopy(&(Local_1075[110 /*6*/]), "IE_TEXTVECH_53", 24);
	StringCopy(&(Local_84[111 /*6*/]), "VEX_54_SULTANRS", 24);
	StringCopy(&(Local_1075[111 /*6*/]), "IE_TEXTVECH_54", 24);
	StringCopy(&(Local_84[112 /*6*/]), "VEX_55_ZENTORNO", 24);
	StringCopy(&(Local_1075[112 /*6*/]), "IE_TEXTVECH_55", 24);
	StringCopy(&(Local_84[113 /*6*/]), "VEX_56_ZENTORNO", 24);
	StringCopy(&(Local_1075[113 /*6*/]), "IE_TEXTVECH_56", 24);
	StringCopy(&(Local_84[114 /*6*/]), "VEX_57_ZENTORNO", 24);
	StringCopy(&(Local_1075[114 /*6*/]), "IE_TEXTVECH_57", 24);
	StringCopy(&(Local_84[115 /*6*/]), "VEX_58_OMNIS", 24);
	StringCopy(&(Local_1075[115 /*6*/]), "IE_TEXTVECH_58", 24);
	StringCopy(&(Local_84[116 /*6*/]), "VEX_59_OMNIS", 24);
	StringCopy(&(Local_1075[116 /*6*/]), "IE_TEXTVECH_59", 24);
	StringCopy(&(Local_84[117 /*6*/]), "VEX_60_OMNIS", 24);
	StringCopy(&(Local_1075[117 /*6*/]), "IE_TEXTVECH_60", 24);
	StringCopy(&(Local_84[118 /*6*/]), "VEX_61_COQUET3", 24);
	StringCopy(&(Local_1075[118 /*6*/]), "IE_TEXTVECH_61", 24);
	StringCopy(&(Local_84[119 /*6*/]), "VEX_62_COQUET3", 24);
	StringCopy(&(Local_1075[119 /*6*/]), "IE_TEXTVECH_62", 24);
	StringCopy(&(Local_84[120 /*6*/]), "VEX_63_COQUET3", 24);
	StringCopy(&(Local_1075[120 /*6*/]), "IE_TEXTVECH_63", 24);
	StringCopy(&(Local_84[121 /*6*/]), "VEX_64_SEVEN70", 24);
	StringCopy(&(Local_1075[121 /*6*/]), "IE_TEXTVECH_64", 24);
	StringCopy(&(Local_84[122 /*6*/]), "VEX_65_SEVEN70", 24);
	StringCopy(&(Local_1075[122 /*6*/]), "IE_TEXTVECH_65", 24);
	StringCopy(&(Local_84[123 /*6*/]), "VEX_66_SEVEN70", 24);
	StringCopy(&(Local_1075[123 /*6*/]), "IE_TEXTVECH_66", 24);
	StringCopy(&(Local_84[124 /*6*/]), "VEX_67_VERLI", 24);
	StringCopy(&(Local_1075[124 /*6*/]), "IE_TEXTVECH_67", 24);
	StringCopy(&(Local_84[125 /*6*/]), "VEX_68_VERLI", 24);
	StringCopy(&(Local_1075[125 /*6*/]), "IE_TEXTVECH_68", 24);
	StringCopy(&(Local_84[126 /*6*/]), "VEX_69_VERLI", 24);
	StringCopy(&(Local_1075[126 /*6*/]), "IE_TEXTVECH_69", 24);
	StringCopy(&(Local_84[127 /*6*/]), "VEX_70_FELTZ2", 24);
	StringCopy(&(Local_1075[127 /*6*/]), "IE_TEXTVECH_70", 24);
	StringCopy(&(Local_84[128 /*6*/]), "VEX_71_FELTZ2", 24);
	StringCopy(&(Local_1075[128 /*6*/]), "IE_TEXTVECH_71", 24);
	StringCopy(&(Local_84[129 /*6*/]), "VEX_72_FELTZ2", 24);
	StringCopy(&(Local_1075[129 /*6*/]), "IE_TEXTVECH_72", 24);
	StringCopy(&(Local_84[130 /*6*/]), "VEX_73_COQUET2", 24);
	StringCopy(&(Local_1075[130 /*6*/]), "IE_TEXTVECH_73", 24);
	StringCopy(&(Local_84[131 /*6*/]), "VEX_74_COQUET2", 24);
	StringCopy(&(Local_1075[131 /*6*/]), "IE_TEXTVECH_74", 24);
	StringCopy(&(Local_84[132 /*6*/]), "VEX_75_COQUET2", 24);
	StringCopy(&(Local_1075[132 /*6*/]), "IE_TEXTVECH_75", 24);
	StringCopy(&(Local_84[133 /*6*/]), "VEX_76_CHEETAH", 24);
	StringCopy(&(Local_1075[133 /*6*/]), "IE_TEXTVECH_76", 24);
	StringCopy(&(Local_84[134 /*6*/]), "VEX_77_CHEETAH", 24);
	StringCopy(&(Local_1075[134 /*6*/]), "IE_TEXTVECH_77", 24);
	StringCopy(&(Local_84[135 /*6*/]), "VEX_78_CHEETAH", 24);
	StringCopy(&(Local_1075[135 /*6*/]), "IE_TEXTVECH_78", 24);
	StringCopy(&(Local_84[136 /*6*/]), "VEX_79_NSHADE", 24);
	StringCopy(&(Local_1075[136 /*6*/]), "IE_TEXTVECH_79", 24);
	StringCopy(&(Local_84[137 /*6*/]), "VEX_80_NSHADE", 24);
	StringCopy(&(Local_1075[137 /*6*/]), "IE_TEXTVECH_80", 24);
	StringCopy(&(Local_84[138 /*6*/]), "VEX_81_NSHADE", 24);
	StringCopy(&(Local_1075[138 /*6*/]), "IE_TEXTVECH_81", 24);
	StringCopy(&(Local_84[139 /*6*/]), "VEX_82_BANSH2", 24);
	StringCopy(&(Local_1075[139 /*6*/]), "IE_TEXTVECH_82", 24);
	StringCopy(&(Local_84[140 /*6*/]), "VEX_83_BANSH2", 24);
	StringCopy(&(Local_1075[140 /*6*/]), "IE_TEXTVECH_84", 24);
	StringCopy(&(Local_84[141 /*6*/]), "VEX_84_BANSH2", 24);
	StringCopy(&(Local_1075[141 /*6*/]), "IE_TEXTVECH_85", 24);
	StringCopy(&(Local_84[142 /*6*/]), "VEX_82_TURIS", 24);
	StringCopy(&(Local_1075[142 /*6*/]), "IE_TEXTVECH_83", 24);
	StringCopy(&(Local_84[143 /*6*/]), "VEX_86_TURIS", 24);
	StringCopy(&(Local_1075[143 /*6*/]), "IE_TEXTVECH_86", 24);
	StringCopy(&(Local_84[144 /*6*/]), "VEX_87_TURIS", 24);
	StringCopy(&(Local_1075[144 /*6*/]), "IE_TEXTVECH_87", 24);
	StringCopy(&(Local_84[145 /*6*/]), "VEX_88_MASS", 24);
	StringCopy(&(Local_1075[145 /*6*/]), "IE_TEXTVECH_88", 24);
	StringCopy(&(Local_84[146 /*6*/]), "VEX_89_MASS", 24);
	StringCopy(&(Local_1075[146 /*6*/]), "IE_TEXTVECH_89", 24);
	StringCopy(&(Local_84[147 /*6*/]), "VEX_90_MASS", 24);
	StringCopy(&(Local_1075[147 /*6*/]), "IE_TEXTVECH_90", 24);
	StringCopy(&(Local_84[148 /*6*/]), "VEX_91_SABRE2", 24);
	StringCopy(&(Local_1075[148 /*6*/]), "IE_TEXTVECH_91", 24);
	StringCopy(&(Local_84[149 /*6*/]), "VEX_92_SABRE2", 24);
	StringCopy(&(Local_1075[149 /*6*/]), "IE_TEXTVECH_92", 24);
	StringCopy(&(Local_84[150 /*6*/]), "VEX_93_SABRE2", 24);
	StringCopy(&(Local_1075[150 /*6*/]), "IE_TEXTVECH_93", 24);
	StringCopy(&(Local_84[151 /*6*/]), "VEX_94_JESTER", 24);
	StringCopy(&(Local_1075[151 /*6*/]), "IE_TEXTVECH_94", 24);
	StringCopy(&(Local_84[152 /*6*/]), "VEX_95_JESTER", 24);
	StringCopy(&(Local_1075[152 /*6*/]), "IE_TEXTVECH_95", 24);
	StringCopy(&(Local_84[153 /*6*/]), "VEX_96_JESTER", 24);
	StringCopy(&(Local_1075[153 /*6*/]), "IE_TEXTVECH_96", 24);
	StringCopy(&(Local_84[154 /*6*/]), "GO_AS_PICM", 24);
	StringCopy(&(Local_1075[154 /*6*/]), "NHP_prep_autosalvage", 24);
	StringCopy(&(Local_84[155 /*6*/]), "GO_DR_PICM", 24);
	StringCopy(&(Local_1075[155 /*6*/]), "nhp_prep_daylightrob", 24);
	StringCopy(&(Local_84[156 /*6*/]), "FHTXT_DDR00M", 24);
	StringCopy(&(Local_1075[156 /*6*/]), "NHP_prep_deaddrop", 24);
	StringCopy(&(Local_84[157 /*6*/]), "BBTXT_CPS00M", 24);
	StringCopy(&(Local_1075[157 /*6*/]), "BAT_carpark_1", 24);
	StringCopy(&(Local_84[158 /*6*/]), "BBTXT_CPS10M", 24);
	StringCopy(&(Local_1075[158 /*6*/]), "BAT_carpark_2", 24);
	StringCopy(&(Local_84[159 /*6*/]), "BBTXT_CPS20M", 24);
	StringCopy(&(Local_1075[159 /*6*/]), "BAT_carpark_3", 24);
	if (func_46(PLAYER::PLAYER_ID()) == 19)
	{
		StringCopy(&(Local_84[44 /*6*/]), "SNP_IMG_0_0", 24);
		StringCopy(&(Local_1075[44 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[45 /*6*/]), "SNP_IMG_0_1", 24);
		StringCopy(&(Local_1075[45 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[46 /*6*/]), "SNP_IMG_0_2", 24);
		StringCopy(&(Local_1075[46 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[47 /*6*/]), "SNP_IMG_0_3", 24);
		StringCopy(&(Local_1075[47 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[48 /*6*/]), "SNP_IMG_0_4", 24);
		StringCopy(&(Local_1075[48 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[49 /*6*/]), "SNP_IMG_0_5", 24);
		StringCopy(&(Local_1075[49 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[50 /*6*/]), "SNP_IMG_0_6", 24);
		StringCopy(&(Local_1075[50 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[51 /*6*/]), "SNP_IMG_0_7", 24);
		StringCopy(&(Local_1075[51 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[52 /*6*/]), "SNP_IMG_0_8", 24);
		StringCopy(&(Local_1075[52 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[53 /*6*/]), "SNP_IMG_0_9", 24);
		StringCopy(&(Local_1075[53 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[54 /*6*/]), "SNP_IMG_1_0", 24);
		StringCopy(&(Local_1075[54 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[55 /*6*/]), "SNP_IMG_1_1", 24);
		StringCopy(&(Local_1075[55 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[56 /*6*/]), "SNP_IMG_1_2", 24);
		StringCopy(&(Local_1075[56 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[57 /*6*/]), "SNP_IMG_1_3", 24);
		StringCopy(&(Local_1075[57 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[58 /*6*/]), "SNP_IMG_1_4", 24);
		StringCopy(&(Local_1075[58 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[59 /*6*/]), "SNP_IMG_1_5", 24);
		StringCopy(&(Local_1075[59 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[60 /*6*/]), "SNP_IMG_1_6", 24);
		StringCopy(&(Local_1075[60 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[61 /*6*/]), "SNP_IMG_1_7", 24);
		StringCopy(&(Local_1075[61 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[62 /*6*/]), "SNP_IMG_1_8", 24);
		StringCopy(&(Local_1075[62 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[64 /*6*/]), "SNP_IMG_1_9", 24);
		StringCopy(&(Local_1075[64 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[65 /*6*/]), "SNP_IMG_2_0", 24);
		StringCopy(&(Local_1075[65 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[66 /*6*/]), "SNP_IMG_2_1", 24);
		StringCopy(&(Local_1075[66 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[67 /*6*/]), "SNP_IMG_2_2", 24);
		StringCopy(&(Local_1075[67 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[68 /*6*/]), "SNP_IMG_2_3", 24);
		StringCopy(&(Local_1075[68 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[69 /*6*/]), "SNP_IMG_2_4", 24);
		StringCopy(&(Local_1075[69 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[70 /*6*/]), "SNP_IMG_2_5", 24);
		StringCopy(&(Local_1075[70 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[71 /*6*/]), "SNP_IMG_2_6", 24);
		StringCopy(&(Local_1075[71 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[72 /*6*/]), "SNP_IMG_2_7", 24);
		StringCopy(&(Local_1075[72 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[73 /*6*/]), "SNP_IMG_2_8", 24);
		StringCopy(&(Local_1075[73 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[74 /*6*/]), "SNP_IMG_2_9", 24);
		StringCopy(&(Local_1075[74 /*6*/]), "SCLUB_3", 24);
	}
	else if (func_42(PLAYER::PLAYER_ID()) == 14)
	{
		StringCopy(&(Local_84[44 /*6*/]), "GBC_TM_TC100", 24);
		StringCopy(&(Local_1075[44 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[45 /*6*/]), "GBC_TM_TC101", 24);
		StringCopy(&(Local_1075[45 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[46 /*6*/]), "GBC_TM_TC102", 24);
		StringCopy(&(Local_1075[46 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[47 /*6*/]), "GBC_TM_TC103", 24);
		StringCopy(&(Local_1075[47 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[48 /*6*/]), "GBC_TM_TC104", 24);
		StringCopy(&(Local_1075[48 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[49 /*6*/]), "GBC_TM_TC105", 24);
		StringCopy(&(Local_1075[49 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[50 /*6*/]), "GBC_TM_TC110", 24);
		StringCopy(&(Local_1075[50 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_84[51 /*6*/]), "GBC_TM_TC111", 24);
		StringCopy(&(Local_1075[51 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[52 /*6*/]), "GBC_TM_TC120", 24);
		StringCopy(&(Local_1075[52 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_84[53 /*6*/]), "GBC_TM_TC121", 24);
		StringCopy(&(Local_1075[53 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[54 /*6*/]), "GBC_TM_TC130", 24);
		StringCopy(&(Local_1075[54 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[55 /*6*/]), "GBC_TM_TC140", 24);
		StringCopy(&(Local_1075[55 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[56 /*6*/]), "GBC_TM_TC200", 24);
		StringCopy(&(Local_1075[56 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[57 /*6*/]), "GBC_TM_TC201", 24);
		StringCopy(&(Local_1075[57 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[58 /*6*/]), "GBC_TM_TC202", 24);
		StringCopy(&(Local_1075[58 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[59 /*6*/]), "GBC_TM_TC203", 24);
		StringCopy(&(Local_1075[59 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[60 /*6*/]), "GBC_TM_TC204", 24);
		StringCopy(&(Local_1075[60 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[61 /*6*/]), "GBC_TM_TC205", 24);
		StringCopy(&(Local_1075[61 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[62 /*6*/]), "GBC_TM_TC210", 24);
		StringCopy(&(Local_1075[62 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_84[63 /*6*/]), "GBC_TM_TC211", 24);
		StringCopy(&(Local_1075[63 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[64 /*6*/]), "GBC_TM_TC220", 24);
		StringCopy(&(Local_1075[64 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_84[65 /*6*/]), "GBC_TM_TC221", 24);
		StringCopy(&(Local_1075[65 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[66 /*6*/]), "GBC_TM_TC230", 24);
		StringCopy(&(Local_1075[66 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[67 /*6*/]), "GBC_TM_TC240", 24);
		StringCopy(&(Local_1075[67 /*6*/]), "VC_TC_CASINOCCTV", 24);
	}
}

int func_42(int iParam0)//Position - 0x47A1
{
	if (func_45(iParam0) == 243)
	{
		return func_43(iParam0);
	}
	return -1;
}

int func_43(int iParam0)//Position - 0x47BE
{
	if (func_44(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_181;
	}
	return -1;
}

int func_44(int iParam0, int iParam1)//Position - 0x47E1
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_45(int iParam0)//Position - 0x481C
{
	if (func_44(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_46(int iParam0)//Position - 0x483F
{
	if (func_45(iParam0) == 237 || func_45(iParam0) == 250)
	{
		return func_43(iParam0);
	}
	return -1;
}

void func_47()//Position - 0x486C
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
	{
		func_48(0);
	}
	if (iLocal_2219)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&uLocal_68);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_48(int iParam0)//Position - 0x4896
{
	if (func_52())
	{
		return;
	}
	if (Global_14725)
	{
		func_50(0, 0);
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
	if (!func_49())
	{
		Global_14553.f_1 = 3;
	}
}

int func_49()//Position - 0x4910
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_50(bool bParam0, bool bParam1)//Position - 0x4937
{
	if (bParam0)
	{
		if (func_51(0))
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

int func_51(int iParam0)//Position - 0x49AB
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

bool func_52()//Position - 0x4A05
{
	return MISC::IS_BIT_SET(Global_1681628, 19);
}

