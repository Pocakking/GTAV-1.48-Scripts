void __EntryFunction__()//Position - 0x0
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_1();
	}
}

void func_1()//Position - 0x1C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_105217)
	{
		if (Global_105217[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (MISC::GET_GAME_TIMER() > Global_105217[iVar0 /*28*/].f_21 && Global_105217[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					HUD::CLEAR_FLOATING_HELP(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_105217[iVar0 /*28*/].f_21 != -1)
				{
					if (!MISC::IS_BIT_SET(Global_105217[iVar0 /*28*/].f_27, 0))
					{
						Global_105217[iVar0 /*28*/].f_21 = (Global_105217[iVar0 /*28*/].f_21 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
						if (HUD::_0x2432784ACA090DA4(iVar1))
						{
							MISC::SET_BIT(&(Global_105217[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_105217[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_105217[iVar0 /*28*/].f_23 != 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_105217[iVar0 /*28*/].f_23, 0))
						{
							if (!MISC::IS_BIT_SET(Global_105217[iVar0 /*28*/].f_27, 3))
							{
								HUD::_0x784BA7E0ECEB4178(iVar1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_105217[iVar0 /*28*/].f_23, Global_105217[iVar0 /*28*/].f_24));
							}
							else
							{
								HUD::_0xB094BC1DB4018240(iVar1, Global_105217[iVar0 /*28*/].f_23, Global_105217[iVar0 /*28*/].f_24, Global_105217[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_105217[iVar0 /*28*/].f_24 != 0f || Global_105217[iVar0 /*28*/].f_24.f_1 != 0f) || Global_105217[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						HUD::_0x784BA7E0ECEB4178(iVar1, Global_105217[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					HUD::_0x7679CC1BCEBE3D4C(iVar1, Global_105217[iVar0 /*28*/].f_24, Global_105217[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((MISC::GET_GAME_TIMER() - Global_105217[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)//Position - 0x20A
{
	Global_105217[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_105217[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_105217[iParam0 /*28*/].f_4), "", 64);
	Global_105217[iParam0 /*28*/].f_23 = 0;
	Global_105217[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_105217[iParam0 /*28*/].f_27 = 0;
	Global_105217[iParam0 /*28*/].f_20 = 0;
	Global_105217[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)//Position - 0x272
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!MISC::ARE_STRINGS_EQUAL(&(Global_105217[iParam0 /*28*/]), "") && !MISC::IS_STRING_NULL(&(Global_105217[iParam0 /*28*/])))
	{
		if (MISC::IS_BIT_SET(Global_105217[iParam0 /*28*/].f_27, 1))
		{
			if (MISC::IS_BIT_SET(Global_105217[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_105217[iParam0 /*28*/]), &(Global_105217[iParam0 /*28*/].f_4), Global_105217[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_105217[iParam0 /*28*/]), &(Global_105217[iParam0 /*28*/].f_4));
			}
		}
		else if (MISC::IS_BIT_SET(Global_105217[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_105217[iParam0 /*28*/]), Global_105217[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_105217[iParam0 /*28*/]));
		}
	}
	return 0;
}

int func_4(int iParam0, char* sParam1)//Position - 0x34E
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}

int func_5(int iParam0, char* sParam1, int iParam2)//Position - 0x364
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}

int func_6(int iParam0, char* sParam1, int iParam2)//Position - 0x380
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}

int func_7(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x39C
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}

