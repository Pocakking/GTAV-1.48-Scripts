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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	var uLocal_60 = 0;
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
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
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98[54] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_96 = 4;
	iLocal_97 = 10;
	if (func_158() == 2)
	{
		while (true)
		{
			SYSTEM::WAIT(0);
		}
	}
	HUD::_LOG_DEBUG_INFO(1);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_1312435 = 1;
	iVar0 = 0;
	Global_1370419.f_281 = 1;
	Global_1367983.f_1 = 0;
	Global_1367983.f_3 = 0;
	Global_1367983.f_5 = 0;
	func_156(&Global_1370419);
	func_155(&Global_1370419);
	func_154(&Global_1370419);
	func_150();
	func_149(0, &Global_1370419);
	GRAPHICS::_SET_2D_LAYER(7);
	HUD::_ADD_FRONTEND_MENU_CONTEXT(337714004);
	HUD::_ADD_FRONTEND_MENU_CONTEXT(-1884422346);
	HUD::ENABLE_DEATHBLOOD_SEETHROUGH(0);
	func_148();
	iVar5 = 1;
	switch (iScriptParam_101)
	{
		case 3:
			while (iVar0 == 0)
			{
				SYSTEM::WAIT(0);
				if (iVar5 == 1)
				{
					if (iVar6 == 0)
					{
						if (HUD::_0x3BAB9A4E4F2FF5C7())
						{
							HUD::_0xEC9264727EEC0F28();
							iVar6 = 1;
						}
					}
				}
				if (func_147(201))
				{
					if (iVar5 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						Global_1367983.f_1 = 0;
						Global_1367983.f_3 = 0;
						iVar5 = 1;
						func_149(0, &Global_1370419);
						func_155(&Global_1370419);
						func_154(&Global_1370419);
						func_146(&Global_1370419, &Global_1367983);
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("MENU_SHIFT_DEPTH");
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
						GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					}
				}
				if (iVar5 == 0)
				{
					if (func_147(189) || func_147(190))
					{
						iVar0 = 1;
					}
				}
				if (func_147(202))
				{
					func_144();
					if (iVar5 == 1)
					{
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("MENU_SHIFT_DEPTH");
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
						GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						HUD::OBJECT_DECAL_TOGGLE(337714004);
						HUD::ENABLE_DEATHBLOOD_SEETHROUGH(0);
						func_155(&Global_1370419);
						func_154(&Global_1370419);
						func_149(-1, &Global_1370419);
						iVar5 = 0;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						iVar0 = 1;
						HUD::_0x14621BB1DF14E2B2();
					}
				}
				if (HUD::_0xF284AC67940C6812())
				{
					HUD::_0x36C1451A88A09630(&iVar2, &uVar3);
				}
				if (HUD::_0x2E22FEFA0100275E())
				{
					HUD::_0x7E17BE53E1AAABAF(&uVar1, &iVar2, &uVar3);
					iVar4 = iVar2 + 1000;
					if (iVar4 >= 0)
					{
						if (iVar4 >= 9)
						{
							iVar4 = 8;
						}
						Global_1367983.f_1 = (iVar4 % 3);
						Global_1367983.f_3 = (iVar4 / 3);
						func_149(iVar4, &Global_1370419);
						func_154(&Global_1370419);
					}
				}
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPWeaponsCommon", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPWeaponsGang0", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPWeaponsGang1", false);
				func_9(&Global_1370419, &Global_1367983);
				if (iVar5 == 1)
				{
					func_1(&Global_1370419, &Global_1367983, &uLocal_99);
				}
			}
			break;
		
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
	}
	HUD::_0x14621BB1DF14E2B2();
	HUD::_LOG_DEBUG_INFO(0);
	Global_1312435 = 0;
	GRAPHICS::_SET_2D_LAYER(4);
	while (true)
	{
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_8(uParam2) || (func_8(uParam2) && func_7(uParam2, 250, 0)))
	{
		iVar0 = 1;
	}
	if ((PAD::IS_CONTROL_PRESSED(2, 187) || func_6(187, &(Global_1371947.f_1060), 1)) && iVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_285), 0);
	}
	if ((PAD::IS_CONTROL_PRESSED(2, 188) || func_6(188, &(Global_1371947.f_1060), 1)) && iVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_285), 1);
	}
	if (((PAD::IS_CONTROL_PRESSED(2, 189) || PAD::IS_CONTROL_PRESSED(2, 241)) || func_6(189, &(Global_1371947.f_1060), 1)) && iVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_285), 2);
	}
	if (((PAD::IS_CONTROL_PRESSED(2, 190) || PAD::IS_CONTROL_PRESSED(2, 242)) || func_6(190, &(Global_1371947.f_1060), 1)) && iVar0)
	{
		MISC::SET_BIT(&(uParam0->f_285), 3);
		func_5(uParam2);
		func_4(uParam2, 0, 0);
	}
	if (MISC::IS_BIT_SET(uParam0->f_285, 1))
	{
		MISC::CLEAR_BIT(&(uParam0->f_285), 1);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		uParam1->f_3 = (uParam1->f_3 - 1);
		if (uParam1->f_3 < 0)
		{
			uParam1->f_3 = 2;
		}
		func_149(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 188), uParam0);
		func_155(uParam0);
		func_154(uParam0);
		func_146(uParam0, uParam1);
	}
	if (MISC::IS_BIT_SET(uParam0->f_285, 0))
	{
		MISC::CLEAR_BIT(&(uParam0->f_285), 0);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		uParam1->f_3++;
		if (uParam1->f_3 > 2)
		{
			uParam1->f_3 = 0;
		}
		func_149(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 187), uParam0);
		func_155(uParam0);
		func_154(uParam0);
		func_146(uParam0, uParam1);
	}
	if (MISC::IS_BIT_SET(uParam0->f_285, 2))
	{
		MISC::CLEAR_BIT(&(uParam0->f_285), 2);
		uParam1->f_1 = (uParam1->f_1 - 1);
		if (uParam1->f_1 < 0)
		{
			if (iLocal_96 > 1)
			{
				func_156(uParam0);
				*uParam0 = 0;
				func_2(uParam0);
			}
			if (uParam1->f_5 > 0)
			{
				uParam1->f_5 = (uParam1->f_5 - 1);
				uParam1->f_1 = 2;
			}
			else
			{
				uParam1->f_5 = iLocal_96;
				uParam1->f_1 = 2;
				iVar1 = (uParam1->f_1 + uParam1->f_3 * 3);
				if (iVar1 >= iLocal_97)
				{
					uParam1->f_1 = ((iLocal_97 - 1) % 3);
					uParam1->f_3 = ((iLocal_97 - 1) / 3);
				}
			}
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		func_149(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 189), uParam0);
		func_155(uParam0);
		func_154(uParam0);
		func_146(uParam0, uParam1);
	}
	if (MISC::IS_BIT_SET(uParam0->f_285, 3))
	{
		MISC::CLEAR_BIT(&(uParam0->f_285), 3);
		uParam1->f_1++;
		iVar2 = (uParam1->f_1 + uParam1->f_3 * 3);
		if (uParam1->f_1 > 2 || (uParam1->f_5 == iLocal_96 && iVar2 >= iLocal_97))
		{
			if (iLocal_96 > 1)
			{
				func_156(uParam0);
				*uParam0 = 0;
				func_2(uParam0);
			}
			uParam1->f_1 = 0;
			uParam1->f_5++;
			if (uParam1->f_5 > iLocal_96)
			{
				uParam1->f_5 = 0;
			}
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		func_149(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 190), uParam0);
		func_155(uParam0);
		func_154(uParam0);
		func_146(uParam0, uParam1);
	}
}

void func_2(var uParam0)
{
	uParam0->f_281 = 0;
}

int func_3(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (*uParam0 + *uParam1 * 3);
	switch (iParam3)
	{
		case 188:
			if (iParam2 == iLocal_96)
			{
				if (iVar0 > (iLocal_97 - 1))
				{
					*uParam1 = 0;
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
		
		case 187:
			if (iParam2 == iLocal_96)
			{
				if (iVar0 > (iLocal_97 - 1))
				{
					if (*uParam1 > 0)
					{
						*uParam1 = (*uParam1 - 1);
					}
					else
					{
						*uParam1 = 0;
					}
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
		
		case 189:
			break;
		
		case 190:
			if (iParam2 == iLocal_96)
			{
				if (*uParam0 == 0)
				{
					iVar1 = 0;
					while (iVar1 <= 3)
					{
						if (iVar0 > (iLocal_97 - 1))
						{
							*uParam1 = (*uParam1 - 1);
							iVar0 = (*uParam0 + *uParam1 * 3);
						}
						else
						{
							iVar1 = 3;
						}
						iVar1++;
					}
				}
				else if (iVar0 > (iLocal_97 - 1))
				{
					if (*uParam0 > 0)
					{
						*uParam0 = (*uParam0 - 1);
					}
					else
					{
						*uParam0 = 0;
					}
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
	}
	return iVar0;
}

void func_4(var uParam0, bool bParam1, bool bParam2)
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

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_6(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (PAD::GET_CONTROL_VALUE(2, 195) - 127);
	iVar1 = (PAD::GET_CONTROL_VALUE(2, 196) - 127);
	iVar2 = (PAD::GET_CONTROL_VALUE(2, 197) - 127);
	switch (iParam0)
	{
		case 189:
			if (iVar0 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 190:
			if (iVar0 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 188:
			if (iVar1 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 187:
			if (iVar1 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 194:
			if (iVar2 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 193:
			if (iVar2 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_7(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
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

bool func_8(var uParam0)
{
	return uParam0->f_1;
}

void func_9(var uParam0, var uParam1)
{
	if ((GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPWeaponsCommon") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPWeaponsGang0")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPWeaponsGang1"))
	{
		if (func_143(8, -1) == 0)
		{
			*uParam1 = func_142();
		}
		func_148();
		switch (uParam1->f_5)
		{
			case 0:
				if (!uParam0->f_1[0])
				{
					func_106(joaat("weapon_pistol"), uParam0, *uParam1, 0);
					func_106(joaat("weapon_combatpistol"), uParam0, *uParam1, 0);
					func_106(joaat("weapon_appistol"), uParam0, *uParam1, 0);
					func_106(joaat("weapon_microsmg"), uParam0, *uParam1, 0);
					func_106(joaat("weapon_smg"), uParam0, *uParam1, 0);
					func_106(joaat("weapon_assaultrifle"), uParam0, *uParam1, 0);
					func_106(joaat("weapon_carbinerifle"), uParam0, *uParam1, 0);
					func_106(joaat("weapon_advancedrifle"), uParam0, *uParam1, 0);
					func_106(joaat("weapon_mg"), uParam0, *uParam1, 0);
				}
				break;
			
			case 1:
				if (!uParam0->f_1[0])
				{
					func_106(joaat("weapon_combatmg"), uParam0, *uParam1, 0);
					func_106(joaat("weapon_assaultsmg"), uParam0, *uParam1, 0);
					func_106(joaat("weapon_pumpshotgun"), uParam0, *uParam1, 0);
					func_106(joaat("weapon_assaultshotgun"), uParam0, *uParam1, 0);
					func_106(joaat("weapon_sniperrifle"), uParam0, *uParam1, 0);
					func_106(joaat("weapon_heavysniper"), uParam0, *uParam1, 0);
					func_106(joaat("weapon_grenadelauncher"), uParam0, *uParam1, 0);
					func_106(joaat("weapon_minigun"), uParam0, *uParam1, 0);
					func_106(joaat("weapon_rpg"), uParam0, *uParam1, 0);
				}
				break;
			
			case 2:
				if (!uParam0->f_1[0])
				{
					func_106(joaat("weapon_knife"), uParam0, *uParam1, 0);
					func_106(joaat("weapon_nightstick"), uParam0, *uParam1, 0);
					func_106(joaat("weapon_bat"), uParam0, *uParam1, 0);
					func_106(joaat("weapon_crowbar"), uParam0, *uParam1, 0);
					func_106(joaat("weapon_golfclub"), uParam0, *uParam1, 0);
					func_106(joaat("weapon_molotov"), uParam0, *uParam1, 0);
					func_106(joaat("weapon_grenade"), uParam0, *uParam1, 0);
					func_106(joaat("weapon_smokegrenade"), uParam0, *uParam1, 0);
					func_106(joaat("weapon_stickybomb"), uParam0, *uParam1, 0);
				}
				break;
			
			default:
				if (!uParam0->f_1[0])
				{
					func_98(uParam0, uParam1);
				}
				break;
		}
		func_10(uParam0, func_97(uParam0));
	}
}

void func_10(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_2(uParam0);
	}
	if (*uParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			iVar5 = 0;
			iVar6 = 0;
			iVar7 = 0;
			if (uParam0->f_1[iVar0] == 1)
			{
				if (uParam0->f_85[iVar0] != 0)
				{
					if (func_96(uParam0->f_85[iVar0]))
					{
						if (func_94(1623028892, func_95(uParam0->f_85[iVar0]), -1))
						{
							bVar2 = true;
						}
						else
						{
							bVar2 = false;
						}
					}
					else if (func_90(uParam0->f_85[iVar0], uParam0->f_276, 0))
					{
						bVar2 = true;
					}
					else
					{
						bVar2 = false;
					}
				}
				bVar3 = func_87(uParam0->f_85[iVar0], uParam0->f_276, 0);
				iVar1 = 0;
				while (iVar1 <= 35)
				{
					iVar4 = func_85(uParam0->f_85[iVar0], iVar1);
					if (!bVar3)
					{
						func_69(iVar4, uParam0->f_85[iVar0], 0, 0, 0);
						func_65(iVar4, uParam0->f_85[iVar0], 0);
						func_59(iVar4, uParam0->f_85[iVar0], 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(func_58(iVar4, uParam0->f_85[iVar0]), "WCT_CLIP1"))
					{
						func_69(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						if (!bVar3)
						{
							func_65(iVar4, uParam0->f_85[iVar0], 1);
							func_59(iVar4, uParam0->f_85[iVar0], 1);
						}
					}
					if (MISC::ARE_STRINGS_EQUAL(func_58(iVar4, uParam0->f_85[iVar0]), "WCT_SCOPE_LRG"))
					{
						func_69(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						if (!bVar3)
						{
							func_65(iVar4, uParam0->f_85[iVar0], 1);
							func_59(iVar4, uParam0->f_85[iVar0], 1);
						}
					}
					if ((uParam0->f_85[iVar0] == joaat("weapon_bullpupshotgun") || uParam0->f_85[iVar0] == joaat("weapon_pistol50")) || uParam0->f_85[iVar0] == joaat("weapon_snspistol"))
					{
						func_69(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						func_65(iVar4, uParam0->f_85[iVar0], 1);
						func_59(iVar4, uParam0->f_85[iVar0], 1);
					}
					if (bVar3 && func_53(iVar4, uParam0->f_85[iVar0], uParam0->f_276))
					{
						if (bVar2 && func_94(iVar4, uParam0->f_85[iVar0], uParam0->f_276))
						{
							iVar5 = (iVar5 + func_51(iVar4, uParam0->f_85[iVar0], 8));
							iVar6 = (iVar6 + func_49(iVar4, uParam0->f_85[iVar0], 8));
							iVar7 = (iVar7 + func_47(iVar4, uParam0->f_85[iVar0], 8));
						}
					}
					else if (iVar4 != 0)
					{
						iVar5 = (iVar5 + func_51(iVar4, uParam0->f_85[iVar0], 4));
						iVar6 = (iVar6 + func_49(iVar4, uParam0->f_85[iVar0], 4));
						iVar7 = (iVar7 + func_47(iVar4, uParam0->f_85[iVar0], 4));
					}
					iVar1++;
				}
			}
			iVar8 = 0;
			if (uParam0->f_85[iVar0] != 0)
			{
				if (bVar3)
				{
					if (func_96(uParam0->f_85[iVar0]))
					{
						if (func_94(1623028892, func_95(uParam0->f_85[iVar0]), -1))
						{
							bVar2 = true;
						}
						else
						{
							bVar2 = false;
						}
					}
					else if (func_90(uParam0->f_85[iVar0], uParam0->f_276, 0))
					{
						bVar2 = true;
					}
					else
					{
						bVar2 = false;
					}
					if (((bVar2 || (uParam0->f_85[iVar0] == joaat("weapon_pistol") && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 0))) || func_45(uParam0->f_85[iVar0])) || func_29(uParam0->f_85[iVar0], uParam0->f_276))
					{
						if (func_96(uParam0->f_85[iVar0]))
						{
							if (bVar2)
							{
								iVar8++;
							}
							else
							{
								iVar8 += 2;
							}
						}
						else
						{
							iVar8++;
						}
					}
					else
					{
						iVar8 += 2;
					}
				}
				else
				{
					iVar8 += 4;
				}
			}
			if (uParam0->f_1[iVar0] == 0 || MISC::ARE_STRINGS_EQUAL(func_26(uParam0->f_85[iVar0], 0), func_26(0, 0)))
			{
				iVar8 = 0;
			}
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_DATA_SLOT");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_85[iVar0]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar5);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar8);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar6);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar7);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			iVar0++;
		}
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("DISPLAY_DATA_SLOT");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		*uParam0 = 1;
	}
	func_23(uParam0, func_25(uParam0));
	func_14(uParam0, func_22(uParam0));
	func_11(uParam0, func_13(uParam0));
}

void func_11(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		uParam0->f_279 = 0;
		func_12(uParam0);
	}
	if (uParam0->f_279 == 0)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_COLUMN_HIGHLIGHT");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_277);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(false);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		uParam0->f_279 = 1;
	}
}

void func_12(var uParam0)
{
	uParam0->f_283 = 0;
}

int func_13(var uParam0)
{
	return uParam0->f_283;
}

void func_14(var uParam0, int iParam1)
{
	struct<2> Var0;
	int iVar1;
	
	StringCopy(&Var0, " ", 16);
	if (iParam1 == 1)
	{
		uParam0->f_280 = 0;
		func_21(uParam0);
	}
	if (uParam0->f_280 == 0)
	{
		if (uParam0->f_277 > -1)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_DESCRIPTION");
			iVar1 = (uParam0->f_215[uParam0->f_277] - uParam0->f_165[uParam0->f_277]);
			if (iVar1 < 0)
			{
				iVar1 = 0;
			}
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			func_20(&(uParam0->f_11[uParam0->f_277 /*4*/]));
			func_20(&(uParam0->f_48[uParam0->f_277 /*4*/]));
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_95[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_105[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(uParam0->f_135[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(uParam0->f_115[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_145[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_155[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_165[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_185[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_195[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_205[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_225[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar1);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_125[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_175[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_235[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(func_16(uParam0->f_85[uParam0->f_277]));
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			if (func_15(uParam0->f_85[uParam0->f_277]))
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_COLUMN_TITLE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				func_20(&Var0);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_COLUMN_TITLE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				func_20(&Var0);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(3);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_COLUMN_TITLE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				func_20(&Var0);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_COLUMN_TITLE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				func_20(&Var0);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(8);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_COLUMN_TITLE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				func_20(&Var0);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(9);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
			else
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_COLUMN_TITLE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				func_20("PM_ACCURACY");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_COLUMN_TITLE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				func_20("PM_RANGE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(3);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_COLUMN_TITLE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				func_20("PM_CLIPSIZE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_COLUMN_TITLE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				func_20("PM_KD_RATIO");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(7);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_COLUMN_TITLE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				func_20("PM_HEADSHOTS");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(8);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_COLUMN_TITLE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				func_20("PM_MY_ACCURACY");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(9);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
		}
		uParam0->f_280 = 1;
	}
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_bat"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_grenade"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_molotov"):
		case joaat("weapon_bottle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_proxmine"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_machete"):
		case joaat("weapon_flashlight"):
		case joaat("weapon_switchblade"):
		case -853065399:
		case -1169823560:
		case -1810795771:
		case 419712736:
		case 940833800:
			return 1;
			break;
	}
	return 0;
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return 0;
			break;
		
		case joaat("weapon_knife"):
			return 0;
			break;
		
		case joaat("weapon_microsmg"):
			return 5;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 29;
			break;
		
		case joaat("weapon_nightstick"):
			return 3;
			break;
		
		case joaat("weapon_combatpistol"):
			return 9;
			break;
		
		case joaat("weapon_smg"):
			return 11;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 24;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 21;
			break;
		
		case joaat("weapon_stickybomb"):
			return 19;
			break;
		
		case joaat("weapon_petrolcan"):
			return 20;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 17;
			break;
		
		case joaat("weapon_appistol"):
			return 33;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 13;
			break;
		
		case joaat("weapon_grenade"):
			return 15;
			break;
		
		case joaat("weapon_carbinerifle"):
			if (func_17(3741, -1, -1))
			{
				return 0;
			}
			else
			{
				return 42;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 37;
			break;
		
		case joaat("weapon_molotov"):
			if (func_17(3741, -1, -1))
			{
				return 0;
			}
			else
			{
				return 31;
			}
			break;
		
		case joaat("weapon_mg"):
			return 50;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 70;
			break;
		
		case joaat("weapon_combatmg"):
			return 80;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 60;
			break;
		
		case joaat("weapon_heavysniper"):
			return 90;
			break;
		
		case joaat("weapon_rpg"):
			return 100;
			break;
		
		case joaat("weapon_minigun"):
			return 120;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 0;
			break;
		
		case joaat("weapon_golfclub"):
			return 0;
			break;
		
		case joaat("weapon_crowbar"):
			return 0;
			break;
		
		case joaat("weapon_bat"):
			return 0;
			break;
	}
	return 0;
}

int func_17(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_142();
	}
	iVar1 = func_19(iParam0, iParam1);
	uVar2 = func_18(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_18(int iParam0)
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

int func_19(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_142();
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

void func_20(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_21(var uParam0)
{
	uParam0->f_284 = 0;
}

int func_22(var uParam0)
{
	return uParam0->f_284;
}

void func_23(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		uParam0->f_278 = 0;
		func_24(uParam0);
	}
	if (uParam0->f_278 == 0)
	{
		if (uParam0->f_275 != 9999)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_INPUT_EVENT");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_275);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			uParam0->f_275 = 9999;
			uParam0->f_278 = 1;
		}
	}
}

void func_24(var uParam0)
{
	uParam0->f_282 = 0;
}

int func_25(var uParam0)
{
	return uParam0->f_282;
}

char* func_26(int iParam0, bool bParam1)
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
			if (func_28(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_27(&(Var0.f_31));
				}
				else
				{
					return func_27(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_27(var uParam0)
{
	return uParam0;
}

int func_28(int iParam0, var uParam1)
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

bool func_29(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_42() == 0)
	{
		return 0;
	}
	if (func_41())
	{
		return 0;
	}
	iVar0 = func_40(iParam0);
	if (iVar0 != 388 && func_39(iVar0, -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	iVar1 = func_33(iParam0, iParam1);
	iVar2 = func_31(iParam0);
	return MISC::IS_BIT_SET(iVar1, func_30(iVar2));
}

int func_30(int iParam0)
{
	return (iParam0 % 32);
}

int func_31(int iParam0)
{
	return func_32(iParam0);
}

int func_32(int iParam0)
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

int func_33(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_34(func_36(iParam0), iParam1, 0);
	return iVar0;
}

int func_34(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_35(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_142();
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

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_31(iParam0);
	iVar1 = func_38(iVar0);
	if ((func_158() == 0 || func_37() == 0) || (func_158() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 685;
				break;
			
			case 1:
				return 686;
				break;
			
			case 2:
				return 2419;
				break;
			}
	}
	return 10383;
}

int func_37()
{
	return Global_25766;
}

int func_38(int iParam0)
{
	return (iParam0 / 32);
}

int func_39(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2571340[iParam0 /*3*/][func_35(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return 17;
			break;
		
		case joaat("weapon_combatpistol"):
			return 19;
			break;
		
		case joaat("weapon_appistol"):
			return 23;
			break;
		
		case joaat("weapon_pistol50"):
			return 21;
			break;
		
		case joaat("weapon_smg"):
			return 27;
			break;
		
		case joaat("weapon_microsmg"):
			return 25;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 31;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 33;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 35;
			break;
		
		case joaat("weapon_mg"):
			return 37;
			break;
		
		case joaat("weapon_combatmg"):
			return 39;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 43;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 45;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 49;
			break;
		
		case joaat("weapon_heavysniper"):
			return 55;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 53;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 59;
			break;
		
		case joaat("weapon_rpg"):
			return 61;
			break;
		
		case joaat("weapon_minigun"):
			return 63;
			break;
		
		case joaat("weapon_grenade"):
			return 65;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 67;
			break;
		
		case joaat("weapon_stickybomb"):
			return 69;
			break;
		
		case joaat("weapon_molotov"):
			return 71;
			break;
		
		case joaat("weapon_petrolcan"):
			return 74;
			break;
		
		case joaat("gadget_parachute"):
			return 73;
			break;
		
		case joaat("weapon_knife"):
			return 1;
			break;
		
		case joaat("weapon_nightstick"):
			return 3;
			break;
		
		case joaat("weapon_hammer"):
			return 11;
			break;
		
		case joaat("weapon_bat"):
			return 13;
			break;
		
		case joaat("weapon_crowbar"):
			return 5;
			break;
		
		case joaat("weapon_golfclub"):
			return 15;
			break;
		
		case -572349828:
			return 41;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 29;
			break;
		
		case 392730790:
			return 57;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 47;
			break;
		
		case joaat("weapon_bottle"):
			return 142;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 262;
			break;
		
		case joaat("weapon_snspistol"):
			return 144;
			break;
		
		case joaat("weapon_heavypistol"):
			return 260;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 264;
			break;
		
		case joaat("weapon_gusenberg"):
			return 266;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 289;
			break;
		
		case joaat("weapon_dagger"):
			return 287;
			break;
		
		case joaat("weapon_musket"):
			return 293;
			break;
		
		case joaat("weapon_firework"):
			return 291;
			break;
		
		case joaat("weapon_flaregun"):
			return 281;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 305;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 307;
			break;
		
		case joaat("weapon_proxmine"):
			return 311;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 313;
			break;
		
		case joaat("weapon_hatchet"):
			return 309;
			break;
		
		case joaat("weapon_combatpdw"):
			return 315;
			break;
		
		case joaat("weapon_knuckle"):
			return 317;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 319;
			break;
		
		case joaat("weapon_machete"):
			return 321;
			break;
		
		case joaat("weapon_machinepistol"):
			return 323;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 328;
			break;
		
		case joaat("weapon_compactrifle"):
			return 326;
			break;
		
		case joaat("weapon_flashlight"):
			return 330;
			break;
		
		case joaat("weapon_revolver"):
			return 333;
			break;
		
		case joaat("weapon_switchblade"):
			return 335;
			break;
		
		case 317205821:
			return 340;
			break;
		
		case -1121678507:
			return 346;
			break;
		
		case 125959754:
			return 344;
			break;
		
		case -853065399:
			return 342;
			break;
		
		case -1169823560:
			return 348;
			break;
		
		case -1810795771:
			return 350;
			break;
		
		case 419712736:
			return 9;
			break;
		
		case 961495388:
			return 31;
			break;
		
		case -86904375:
			return 33;
			break;
		
		case -608341376:
			return 39;
			break;
		
		case 177293209:
			return 55;
			break;
		
		case -1075685676:
			return 17;
			break;
		
		case 2024373456:
			return 27;
			break;
		
		case -2066285827:
			return 47;
			break;
		
		case 1785463520:
			return 307;
			break;
		
		case 1432025498:
			return 43;
			break;
		
		case -879347409:
			return 333;
			break;
		
		case -2009644972:
			return 144;
			break;
		
		case -1768145561:
			return 262;
			break;
		
		case -1746263880:
			return 374;
			break;
		
		case -1355376991:
			return 382;
			break;
		
		case 1198256469:
			return 384;
			break;
		
		case -1238556825:
			return 386;
			break;
	}
	return 388;
}

bool func_41()
{
	return Global_1312846;
}

int func_42()
{
	if (func_44() && func_43(0))
	{
		return 1;
	}
	return 0;
}

var func_43(int iParam0)
{
	return Global_1312373[iParam0];
}

var func_44()
{
	return func_43(func_142() + 1);
}

int func_45(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case joaat("weapon_molotov"):
			bVar0 = true;
			iVar3 = 493;
			break;
		
		case joaat("weapon_golfclub"):
			bVar0 = true;
			iVar3 = 247;
			break;
		
		case joaat("weapon_bat"):
			bVar0 = true;
			iVar3 = 240;
			break;
		
		case joaat("weapon_crowbar"):
			bVar0 = true;
			iVar3 = 212;
			break;
	}
	if (bVar0)
	{
		iVar1 = func_46(PLAYER::PLAYER_ID());
		iVar2 = func_16(iParam0);
		if (iVar1 >= iVar2)
		{
			if (func_34(iVar3, -1, 0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_46(int iParam0)
{
	return Global_1589819[iParam0 /*818*/].f_211.f_6;
}

int func_47(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_48(iParam0, iParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 4;
					break;
			}
			break;
		
		case 4:
			switch (iParam2)
			{
				case 4:
					return 16;
					break;
				
				case 1:
					return 8;
					break;
				
				case 8:
					return 32;
					break;
			}
			break;
		
		case 8:
			switch (iParam2)
			{
				case 4:
					return 128;
					break;
				
				case 1:
					return 64;
					break;
				
				case 8:
					return 256;
					break;
			}
			break;
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2024373456:
			switch (iParam0)
			{
				case -452809877:
					return 1;
					break;
				
				case 1038927834:
					return 2;
					break;
				
				case -653246751:
					return 4;
					break;
				
				case -1520117877:
					return 8;
					break;
			}
			break;
		
		case 177293209:
			switch (iParam0)
			{
				case -2101279869:
					return 2;
					break;
				
				case -1869205321:
					return 4;
					break;
				
				case 277524638:
					return 8;
					break;
			}
			break;
		
		case -608341376:
			switch (iParam0)
			{
				case 1060929921:
					return 1;
					break;
				
				case -966040254:
					return 2;
					break;
				
				case -1018236364:
					return 4;
					break;
				
				case -1243457701:
					return 8;
					break;
			}
			break;
		
		case 961495388:
			switch (iParam0)
			{
				case 77277509:
					return 1;
					break;
				
				case -966040254:
					return 2;
					break;
				
				case 1134861606:
					return 4;
					break;
				
				case 1447477866:
					return 8;
					break;
			}
			break;
		
		case -86904375:
			switch (iParam0)
			{
				case 77277509:
					return 1;
					break;
				
				case -966040254:
					return 2;
					break;
				
				case -2093598721:
					return 4;
					break;
				
				case -1958983669:
					return 8;
					break;
			}
			break;
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_50(iParam0, iParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 4:
					return 16;
					break;
				
				case 1:
					return 8;
					break;
				
				case 8:
					return 32;
					break;
			}
			break;
		
		case 4:
			switch (iParam2)
			{
				case 4:
					return 128;
					break;
				
				case 1:
					return 64;
					break;
				
				case 8:
					return 256;
					break;
			}
			break;
		
		case 7:
			switch (iParam2)
			{
				case 4:
					return 1024;
					break;
				
				case 1:
					return 512;
					break;
				
				case 8:
					return 2048;
					break;
			}
			break;
		
		case 16:
			switch (iParam2)
			{
				case 4:
					return 8192;
					break;
				
				case 1:
					return 4096;
					break;
				
				case 8:
					return 16384;
					break;
			}
			break;
		
		case 32:
			switch (iParam2)
			{
				case 4:
					return 65536;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 131072;
					break;
			}
			break;
		
		case 64:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 1048576;
					break;
			}
			break;
	}
	return 0;
}

int func_50(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2024373456:
		case 177293209:
		case -86904375:
		case 961495388:
		case -608341376:
			switch (iParam0)
			{
				case -1181482284:
					return 1;
					break;
				
				case -932732805:
					return 2;
					break;
				
				case -569259057:
					return 4;
					break;
				
				case -326080308:
					return 7;
					break;
				
				case 48731514:
					return 16;
					break;
				
				case 880736428:
					return 32;
					break;
				
				case 1303784126:
					return 64;
					break;
				
				case 1602080333:
					return 1;
					break;
				
				case 1764221345:
					return 2;
					break;
			}
			break;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_52(iParam0, iParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 4:
					return 16;
					break;
				
				case 1:
					return 8;
					break;
				
				case 8:
					return 32;
					break;
			}
			break;
		
		case 4:
			switch (iParam2)
			{
				case 4:
					return 128;
					break;
				
				case 1:
					return 64;
					break;
				
				case 8:
					return 256;
					break;
			}
			break;
		
		case 8:
			switch (iParam2)
			{
				case 4:
					return 1024;
					break;
				
				case 1:
					return 512;
					break;
				
				case 8:
					return 2048;
					break;
			}
			break;
		
		case 16:
			switch (iParam2)
			{
				case 4:
					return 8192;
					break;
				
				case 1:
					return 4096;
					break;
				
				case 8:
					return 16384;
					break;
			}
			break;
		
		case 32:
			switch (iParam2)
			{
				case 4:
					return 65536;
					break;
				
				case 1:
					return 32768;
					break;
				
				case 8:
					return 131072;
					break;
			}
			break;
		
		case 256:
			switch (iParam2)
			{
				case 4:
					return 33554432;
					break;
				
				case 1:
					return 16777216;
					break;
				
				case 8:
					return 67108864;
					break;
			}
			break;
		
		case 64:
			switch (iParam2)
			{
				case 4:
					return 524288;
					break;
				
				case 1:
					return 262144;
					break;
				
				case 8:
					return 1048576;
					break;
			}
			break;
		
		case 128:
			switch (iParam2)
			{
				case 4:
					return 4194304;
					break;
				
				case 1:
					return 2097152;
					break;
				
				case 8:
					return 8388608;
					break;
			}
			break;
	}
	return 0;
}

int func_52(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam0)
			{
				case joaat("component_pistol_clip_01"):
					return 16;
				
				case joaat("component_pistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_pi_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam0)
			{
				case joaat("component_pistol50_clip_01"):
					return 16;
				
				case joaat("component_pistol50_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam0)
			{
				case joaat("component_combatpistol_clip_01"):
					return 16;
				
				case joaat("component_combatpistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_pi_supp"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam0)
			{
				case joaat("component_appistol_clip_01"):
					return 16;
				
				case joaat("component_appistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_pi_supp"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam0)
			{
				case joaat("component_microsmg_clip_01"):
					return 16;
				
				case joaat("component_microsmg_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_scope_macro"):
					return 64;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam0)
			{
				case joaat("component_assaultsmg_clip_01"):
					return 16;
				
				case joaat("component_assaultsmg_clip_02"):
					return 32;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
				
				case joaat("component_at_scope_macro"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam0)
			{
				case joaat("component_smg_clip_01"):
					return 16;
				
				case joaat("component_smg_clip_02"):
					return 32;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_pi_supp"):
					return 1;
				
				case joaat("component_at_scope_macro_02"):
					return 64;
				
				case joaat("component_smg_clip_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_clip_01"):
					return 16;
				
				case joaat("component_assaultrifle_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_macro"):
					return 64;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
				
				case joaat("component_assaultrifle_clip_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_clip_01"):
					return 16;
				
				case joaat("component_carbinerifle_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_medium"):
					return 64;
				
				case joaat("component_at_ar_supp"):
					return 1;
				
				case joaat("component_carbinerifle_clip_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_clip_01"):
					return 16;
				
				case joaat("component_specialcarbine_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_medium"):
					return 64;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
				
				case joaat("component_specialcarbine_clip_03"):
					return 256;
				
				default:
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_clip_01"):
					return 16;
				
				case joaat("component_bullpuprifle_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_small"):
					return 64;
				
				case joaat("component_at_ar_supp"):
					return 1;
				
				default:
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam0)
			{
				case joaat("component_heavypistol_clip_01"):
					return 16;
				
				case joaat("component_heavypistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_pi_supp"):
					return 1;
				
				default:
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam0)
			{
				case joaat("component_snspistol_clip_01"):
					return 16;
				
				case joaat("component_snspistol_clip_02"):
					return 32;
				
				default:
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam0)
			{
				case joaat("component_advancedrifle_clip_01"):
					return 16;
				
				case joaat("component_advancedrifle_clip_02"):
					return 32;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_small"):
					return 64;
				
				case joaat("component_at_ar_supp"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam0)
			{
				case joaat("component_mg_clip_01"):
					return 16;
				
				case joaat("component_mg_clip_02"):
					return 32;
				
				case joaat("component_at_scope_small_02"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam0)
			{
				case joaat("component_combatmg_clip_01"):
					return 16;
				
				case joaat("component_combatmg_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_scope_medium"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_sr_supp"):
					return 1;
				
				case joaat("component_at_ar_flsh"):
					return 2;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam0)
			{
				case joaat("component_assaultshotgun_clip_01"):
					return 16;
				
				case joaat("component_assaultshotgun_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam0)
			{
				case joaat("component_at_scope_max"):
					return 4;
				
				case joaat("component_at_scope_large"):
					return 64;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam0)
			{
				case joaat("component_at_scope_max"):
					return 4;
				
				case joaat("component_at_scope_large"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_small"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam0)
			{
				case joaat("component_vintagepistol_clip_01"):
					return 16;
				
				case joaat("component_vintagepistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_supp"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam0)
			{
				case joaat("component_gusenberg_clip_01"):
					return 16;
				
				case joaat("component_gusenberg_clip_02"):
					return 32;
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam0)
			{
				case joaat("component_heavyshotgun_clip_01"):
					return 16;
				
				case joaat("component_heavyshotgun_clip_02"):
					return 32;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_heavyshotgun_clip_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_clip_01"):
					return 16;
				
				case joaat("component_marksmanrifle_clip_02"):
					return 32;
				
				case joaat("component_at_scope_large_fixed_zoom"):
					return 64;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp"):
					return 1;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
					break;
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			switch (iParam0)
			{
				case joaat("component_marksmanpistol_clip_01"):
					return 16;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam0)
			{
				case joaat("component_combatpdw_clip_01"):
					return 16;
				
				case joaat("component_combatpdw_clip_02"):
					return 32;
				
				case joaat("component_at_scope_small"):
					return 64;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_combatpdw_clip_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam0)
			{
				case joaat("component_machinepistol_clip_01"):
					return 16;
				
				case joaat("component_machinepistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_supp"):
					return 1;
				
				case joaat("component_machinepistol_clip_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("weapon_compactrifle"):
			switch (iParam0)
			{
				case joaat("component_compactrifle_clip_01"):
					return 16;
				
				case joaat("component_compactrifle_clip_02"):
					return 32;
				
				case joaat("component_compactrifle_clip_03"):
					return 256;
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam0)
			{
				case -2067221805:
					return 16;
				
				case -1820405577:
					return 32;
					break;
			}
			break;
		
		case -1075685676:
			switch (iParam0)
			{
				case -1795936926:
					return 16;
					break;
				
				case 1591132456:
					return 32;
					break;
				
				case 1329061674:
					return 256;
					break;
				
				case -2046910199:
					return 256;
					break;
				
				case 733837882:
					return 256;
					break;
				
				case 634039983:
					return 256;
					break;
				
				case 1140676955:
					return 2;
					break;
				
				case -1898661008:
					return 128;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 1;
					break;
				
				case 568543123:
					return 128;
					break;
			}
			break;
		
		case 2024373456:
			switch (iParam0)
			{
				case 1277460590:
					return 16;
					break;
				
				case -1182573778:
					return 32;
					break;
				
				case 190476639:
					return 256;
					break;
				
				case 974903034:
					return 256;
					break;
				
				case -644734235:
					return 256;
					break;
				
				case 2146055916:
					return 256;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 2;
					break;
				
				case -1613015470:
					return 64;
					break;
				
				case -452809877:
					return 4;
					break;
				
				case 1038927834:
					return 64;
					break;
				
				case joaat("component_at_pi_supp"):
					return 8;
					break;
			}
			break;
		
		case 177293209:
			switch (iParam0)
			{
				case -98690520:
					return 16;
					break;
				
				case 752418717:
					return 32;
					break;
				
				case -130689324:
					return 256;
					break;
				
				case -1981031769:
					return 256;
					break;
				
				case 1005144310:
					return 256;
					break;
				
				case 247526935:
					return 256;
					break;
				
				case joaat("component_at_scope_large"):
					return 4;
					break;
				
				case joaat("component_at_scope_max"):
					return 64;
					break;
				
				case -1233121104:
					return 8;
					break;
				
				case 776198721:
					return 8;
					break;
			}
			break;
		
		case -608341376:
			switch (iParam0)
			{
				case 1227564412:
					return 16;
					break;
				
				case 400507625:
					return 32;
					break;
				
				case 696788003:
					return 256;
					break;
				
				case 1475288264:
					return 256;
					break;
				
				case -1020871238:
					return 256;
					break;
				
				case -161179835:
					return 256;
					break;
				
				case -1654288262:
					return 128;
					break;
				
				case 1108334355:
					return 64;
					break;
			}
			break;
		
		case 961495388:
			switch (iParam0)
			{
				case -2045758401:
					return 16;
					break;
				
				case -785724817:
					return 32;
					break;
				
				case -1478681000:
					return 256;
					break;
				
				case 1675665560:
					return 256;
					break;
				
				case -76490669:
					return 256;
					break;
				
				case -282298175:
					return 256;
					break;
				
				case -1654288262:
					return 128;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 2;
					break;
				
				case 1108334355:
					return 64;
					break;
				
				case 77277509:
					return 4;
					break;
				
				case -966040254:
					return 8;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
					break;
			}
			break;
		
		case -86904375:
			switch (iParam0)
			{
				case 1283078430:
					return 16;
					break;
				
				case 1574296533:
					return 32;
					break;
				
				case 626875735:
					return 256;
					break;
				
				case 1141059345:
					return 256;
					break;
				
				case 1025884839:
					return 256;
					break;
				
				case 391640422:
					return 256;
					break;
				
				case -1654288262:
					return 128;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 2;
					break;
				
				case 1108334355:
					return 64;
					break;
				
				case 77277509:
					return 4;
					break;
				
				case -966040254:
					return 8;
					break;
				
				case joaat("component_at_ar_supp"):
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_53(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_41())
	{
		return 0;
	}
	iVar0 = func_56(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return MISC::IS_BIT_SET(iVar0, func_30(iVar1));
}

int func_54(int iParam0, int iParam1)
{
	return func_55(iParam0, iParam1);
}

int func_55(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam0)
			{
				case joaat("component_pistol_clip_01"):
					return 1;
					break;
				
				case joaat("component_pistol_clip_02"):
					return 2;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 3;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 4;
					break;
				
				case joaat("component_pistol_varmod_luxe"):
					return 175;
					break;
				
				case 1623028892:
					return 211;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam0)
			{
				case joaat("component_combatpistol_clip_01"):
					return 5;
					break;
				
				case joaat("component_combatpistol_clip_02"):
					return 6;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 7;
					break;
				
				case joaat("component_at_pi_supp"):
					return 8;
					break;
				
				case joaat("component_combatpistol_varmod_lowrider"):
					return 186;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam0)
			{
				case joaat("component_appistol_clip_01"):
					return 11;
					break;
				
				case joaat("component_appistol_clip_02"):
					return 12;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 13;
					break;
				
				case joaat("component_at_pi_supp"):
					return 14;
					break;
				
				case joaat("component_appistol_varmod_luxe"):
					return 164;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam0)
			{
				case joaat("component_microsmg_clip_01"):
					return 15;
					break;
				
				case joaat("component_microsmg_clip_02"):
					return 16;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 17;
					break;
				
				case joaat("component_at_scope_macro"):
					return 18;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 19;
					break;
				
				case joaat("component_microsmg_varmod_luxe"):
					return 174;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam0)
			{
				case joaat("component_smg_clip_01"):
					return 22;
					break;
				
				case joaat("component_smg_clip_02"):
					return 23;
					break;
				
				case joaat("component_smg_clip_03"):
					return 207;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 24;
					break;
				
				case joaat("component_at_scope_macro_02"):
					return 25;
					break;
				
				case joaat("component_at_pi_supp"):
					return 26;
					break;
				
				case joaat("component_smg_varmod_luxe"):
					return 179;
					break;
				
				case 1623028892:
					return 212;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_clip_01"):
					return 27;
					break;
				
				case joaat("component_assaultrifle_clip_02"):
					return 28;
					break;
				
				case joaat("component_assaultrifle_clip_03"):
					return 201;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 29;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 30;
					break;
				
				case joaat("component_at_scope_macro"):
					return 31;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 32;
					break;
				
				case joaat("component_assaultrifle_varmod_luxe"):
					return 165;
					break;
				
				case 1623028892:
					return 213;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_clip_01"):
					return 33;
					break;
				
				case joaat("component_carbinerifle_clip_02"):
					return 34;
					break;
				
				case joaat("component_carbinerifle_clip_03"):
					return 202;
					break;
				
				case joaat("component_at_railcover_01"):
					return 35;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 36;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 37;
					break;
				
				case joaat("component_at_scope_medium"):
					return 38;
					break;
				
				case joaat("component_at_ar_supp"):
					return 39;
					break;
				
				case joaat("component_carbinerifle_varmod_luxe"):
					return 168;
					break;
				
				case 1623028892:
					return 214;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam0)
			{
				case joaat("component_advancedrifle_clip_01"):
					return 44;
					break;
				
				case joaat("component_advancedrifle_clip_02"):
					return 45;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 47;
					break;
				
				case joaat("component_at_scope_small"):
					return 48;
					break;
				
				case joaat("component_at_ar_supp"):
					return 49;
					break;
				
				case joaat("component_advancedrifle_varmod_luxe"):
					return 163;
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam0)
			{
				case joaat("component_mg_clip_01"):
					return 50;
					break;
				
				case joaat("component_mg_clip_02"):
					return 51;
					break;
				
				case joaat("component_at_scope_small_02"):
					return 52;
					break;
				
				case joaat("component_mg_varmod_lowrider"):
					return 187;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam0)
			{
				case joaat("component_combatmg_clip_01"):
					return 53;
					break;
				
				case joaat("component_combatmg_clip_02"):
					return 54;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 55;
					break;
				
				case joaat("component_at_scope_medium"):
					return 56;
					break;
				
				case joaat("component_combatmg_varmod_lowrider"):
					return 188;
					break;
				
				case 1623028892:
					return 215;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_sr_supp"):
					return 59;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 60;
					break;
				
				case joaat("component_pumpshotgun_varmod_lowrider"):
					return 193;
					break;
				
				case 1623028892:
					return 389;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam0)
			{
				case joaat("component_assaultshotgun_clip_01"):
					return 64;
					break;
				
				case joaat("component_assaultshotgun_clip_02"):
					return 65;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 66;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 67;
					break;
				
				case joaat("component_at_ar_supp"):
					return 68;
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam0)
			{
				case joaat("component_sniperrifle_clip_01"):
					return 69;
					break;
				
				case joaat("component_at_scope_large"):
					return 70;
					break;
				
				case joaat("component_at_scope_max"):
					return 71;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 72;
					break;
				
				case joaat("component_sniperrifle_varmod_luxe"):
					return 180;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam0)
			{
				case joaat("component_heavysniper_clip_01"):
					return 76;
					break;
				
				case joaat("component_at_scope_max"):
					return 77;
					break;
				
				case joaat("component_at_scope_large"):
					return 82;
					break;
				
				case 1623028892:
					return 216;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 78;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 79;
					break;
				
				case joaat("component_at_scope_small"):
					return 80;
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam0)
			{
				case joaat("component_minigun_clip_01"):
					return 81;
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam0)
			{
				case joaat("component_assaultsmg_clip_01"):
					return 83;
					break;
				
				case joaat("component_assaultsmg_clip_02"):
					return 84;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 85;
					break;
				
				case joaat("component_at_scope_macro"):
					return 86;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 87;
					break;
				
				case joaat("component_assaultsmg_varmod_lowrider"):
					return 189;
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 88;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 89;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 90;
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam0)
			{
				case joaat("component_pistol50_clip_01"):
					return 91;
					break;
				
				case joaat("component_pistol50_clip_02"):
					return 92;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 93;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 94;
					break;
				
				case joaat("component_pistol50_varmod_luxe"):
					return 176;
					break;
			}
			break;
		
		case 392730790:
			switch (iParam0)
			{
				case 195735895:
					return 95;
					break;
				
				case joaat("component_at_scope_large"):
					return 96;
					break;
				
				case joaat("component_at_scope_max"):
					return 97;
					break;
				
				case joaat("component_at_ar_supp"):
					return 98;
					break;
			}
			break;
		
		case -947031628:
			switch (iParam0)
			{
				case 1525977990:
					return 99;
					break;
				
				case 1824470811:
					return 100;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 101;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 102;
					break;
				
				case joaat("component_at_scope_medium"):
					return 103;
					break;
				
				case joaat("component_at_ar_supp"):
					return 104;
					break;
			}
			break;
		
		case -572349828:
			switch (iParam0)
			{
				case -890514874:
					return 105;
					break;
				
				case -507117574:
					return 106;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 107;
					break;
				
				case joaat("component_at_scope_medium"):
					return 108;
					break;
			}
			break;
		
		case -1887867191:
			switch (iParam0)
			{
				case -124428919:
					return 109;
					break;
				
				case 1048471894:
					return 110;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_clip_01"):
					return 111;
					break;
				
				case joaat("component_specialcarbine_clip_02"):
					return 112;
					break;
				
				case joaat("component_specialcarbine_clip_03"):
					return 208;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 113;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 114;
					break;
				
				case joaat("component_at_scope_medium"):
					return 115;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 116;
					break;
				
				case joaat("component_specialcarbine_varmod_lowrider"):
					return 190;
					break;
				
				case 1623028892:
					return 390;
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam0)
			{
				case joaat("component_snspistol_clip_01"):
					return 117;
					break;
				
				case joaat("component_snspistol_clip_02"):
					return 118;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 119;
					break;
				
				case joaat("component_at_pi_supp"):
					return 120;
					break;
				
				case joaat("component_snspistol_varmod_lowrider"):
					return 191;
					break;
				
				case 1623028892:
					return 391;
					break;
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam0)
			{
				case joaat("component_heavypistol_clip_01"):
					return 121;
					break;
				
				case joaat("component_heavypistol_clip_02"):
					return 122;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 123;
					break;
				
				case joaat("component_at_pi_supp"):
					return 124;
					break;
				
				case joaat("component_heavypistol_varmod_luxe"):
					return 171;
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_clip_01"):
					return 131;
					break;
				
				case joaat("component_bullpuprifle_clip_02"):
					return 132;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 127;
					break;
				
				case joaat("component_at_ar_supp"):
					return 128;
					break;
				
				case joaat("component_at_scope_small"):
					return 129;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 130;
					break;
				
				case joaat("component_bullpuprifle_varmod_low"):
					return 192;
					break;
				
				case 1623028892:
					return 394;
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam0)
			{
				case joaat("component_gusenberg_clip_01"):
					return 125;
					break;
				
				case joaat("component_gusenberg_clip_02"):
					return 126;
					break;
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam0)
			{
				case joaat("component_vintagepistol_clip_01"):
					return 133;
					break;
				
				case joaat("component_vintagepistol_clip_02"):
					return 134;
					break;
				
				case joaat("component_at_pi_supp"):
					return 136;
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam0)
			{
				case joaat("component_heavyshotgun_clip_01"):
					return 137;
					break;
				
				case joaat("component_heavyshotgun_clip_02"):
					return 140;
					break;
				
				case joaat("component_heavyshotgun_clip_03"):
					return 205;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 145;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 146;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 147;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_clip_01"):
					return 138;
					break;
				
				case joaat("component_marksmanrifle_clip_02"):
					return 139;
					break;
				
				case joaat("component_at_scope_large_fixed_zoom"):
					return 141;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 142;
					break;
				
				case joaat("component_at_ar_supp"):
					return 143;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 144;
					break;
				
				case joaat("component_marksmanrifle_varmod_luxe"):
					return 172;
					break;
				
				case 1623028892:
					return 392;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam0)
			{
				case joaat("component_combatpdw_clip_01"):
					return 149;
					break;
				
				case joaat("component_combatpdw_clip_02"):
					return 150;
					break;
				
				case joaat("component_combatpdw_clip_03"):
					return 203;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 151;
					break;
				
				case joaat("component_at_scope_small"):
					return 152;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 153;
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam0)
			{
				case joaat("component_sawnoffshotgun_varmod_luxe"):
					return 178;
					break;
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			switch (iParam0)
			{
				case joaat("component_marksmanpistol_clip_01"):
					return 148;
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam0)
			{
				case joaat("component_knuckle_varmod_pimp"):
					return 154;
					break;
				
				case joaat("component_knuckle_varmod_ballas"):
					return 155;
					break;
				
				case joaat("component_knuckle_varmod_dollar"):
					return 156;
					break;
				
				case joaat("component_knuckle_varmod_diamond"):
					return 157;
					break;
				
				case joaat("component_knuckle_varmod_hate"):
					return 158;
					break;
				
				case joaat("component_knuckle_varmod_love"):
					return 159;
					break;
				
				case joaat("component_knuckle_varmod_player"):
					return 160;
					break;
				
				case joaat("component_knuckle_varmod_king"):
					return 161;
					break;
				
				case joaat("component_knuckle_varmod_vagos"):
					return 162;
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam0)
			{
				case joaat("component_machinepistol_clip_01"):
					return 184;
					break;
				
				case joaat("component_machinepistol_clip_02"):
					return 185;
					break;
				
				case joaat("component_machinepistol_clip_03"):
					return 206;
					break;
				
				case joaat("component_at_pi_supp"):
					return 183;
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam0)
			{
				case joaat("component_switchblade_varmod_var1"):
					return 194;
					break;
				
				case joaat("component_switchblade_varmod_var2"):
					return 195;
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam0)
			{
				case joaat("component_revolver_clip_01"):
					return 196;
					break;
				
				case joaat("component_revolver_varmod_boss"):
					return 197;
					break;
				
				case joaat("component_revolver_varmod_goon"):
					return 198;
					break;
				
				case 1623028892:
					return 393;
					break;
			}
			break;
		
		case joaat("weapon_compactrifle"):
			switch (iParam0)
			{
				case joaat("component_compactrifle_clip_01"):
					return 199;
					break;
				
				case joaat("component_compactrifle_clip_02"):
					return 200;
					break;
				
				case joaat("component_compactrifle_clip_03"):
					return 204;
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam0)
			{
				case -2067221805:
					return 209;
					break;
				
				case -1820405577:
					return 210;
					break;
			}
			break;
		
		case -1075685676:
			switch (iParam0)
			{
				case -1795936926:
					return 217;
					break;
				
				case 1591132456:
					return 218;
					break;
				
				case 1329061674:
					return 219;
					break;
				
				case -2046910199:
					return 220;
					break;
				
				case 733837882:
					return 221;
					break;
				
				case 634039983:
					return 222;
					break;
				
				case 1140676955:
					return 223;
					break;
				
				case -1898661008:
					return 224;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 225;
					break;
				
				case 568543123:
					return 226;
					break;
				
				case 1550611612:
					return 367;
					break;
				
				case 368550800:
					return 368;
					break;
				
				case -1769069349:
					return 369;
					break;
				
				case 24902297:
					return 370;
					break;
				
				case -228041614:
					return 371;
					break;
				
				case -584961562:
					return 372;
					break;
				
				case -1153175946:
					return 373;
					break;
				
				case 1301287696:
					return 374;
					break;
				
				case 1597093459:
					return 375;
					break;
				
				case 1769871776:
					return 376;
					break;
				
				case -1827882671:
					return 377;
					break;
			}
			break;
		
		case 2024373456:
			switch (iParam0)
			{
				case 1277460590:
					return 227;
					break;
				
				case -1182573778:
					return 228;
					break;
				
				case 190476639:
					return 229;
					break;
				
				case 974903034:
					return 230;
					break;
				
				case -644734235:
					return 231;
					break;
				
				case 2146055916:
					return 232;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 233;
					break;
				
				case -1613015470:
					return 234;
					break;
				
				case -452809877:
					return 235;
					break;
				
				case 1038927834:
					return 236;
					break;
				
				case joaat("component_at_pi_supp"):
					return 237;
					break;
				
				case -1181482284:
					return 238;
					break;
				
				case -932732805:
					return 239;
					break;
				
				case -569259057:
					return 240;
					break;
				
				case -326080308:
					return 241;
					break;
				
				case 48731514:
					return 242;
					break;
				
				case 880736428:
					return 243;
					break;
				
				case 1303784126:
					return 244;
					break;
				
				case -653246751:
					return 245;
					break;
				
				case -1520117877:
					return 246;
					break;
				
				case -996700057:
					return 378;
					break;
				
				case 940943685:
					return 379;
					break;
				
				case 1263226800:
					return 380;
					break;
				
				case -328035840:
					return 381;
					break;
				
				case 1224100642:
					return 382;
					break;
				
				case 899228776:
					return 383;
					break;
				
				case 616006309:
					return 384;
					break;
				
				case -1561952511:
					return 385;
					break;
				
				case 572063080:
					return 386;
					break;
				
				case 1170588613:
					return 387;
					break;
				
				case 966612367:
					return 388;
					break;
			}
			break;
		
		case 177293209:
			switch (iParam0)
			{
				case -98690520:
					return 247;
					break;
				
				case 752418717:
					return 248;
					break;
				
				case -130689324:
					return 249;
					break;
				
				case -1981031769:
					return 250;
					break;
				
				case 1005144310:
					return 251;
					break;
				
				case 247526935:
					return 252;
					break;
				
				case -2101279869:
					return 253;
					break;
				
				case joaat("component_at_scope_max"):
					return 254;
					break;
				
				case -1233121104:
					return 255;
					break;
				
				case 776198721:
					return 256;
					break;
				
				case -1404903567:
					return 257;
					break;
				
				case 1602080333:
					return 258;
					break;
				
				case 1764221345:
					return 259;
					break;
				
				case -1869205321:
					return 260;
					break;
				
				case 277524638:
					return 261;
					break;
				
				case -130843390:
					return 356;
					break;
				
				case -977347227:
					return 357;
					break;
				
				case -378461067:
					return 358;
					break;
				
				case 329939175:
					return 359;
					break;
				
				case 643374672:
					return 360;
					break;
				
				case 807875052:
					return 361;
					break;
				
				case -1401804168:
					return 362;
					break;
				
				case -1096495395:
					return 363;
					break;
				
				case -847811454:
					return 364;
					break;
				
				case -1413108537:
					return 365;
					break;
				
				case 1815270123:
					return 366;
					break;
			}
			break;
		
		case -608341376:
			switch (iParam0)
			{
				case 1227564412:
					return 262;
					break;
				
				case 400507625:
					return 263;
					break;
				
				case 696788003:
					return 264;
					break;
				
				case 1475288264:
					return 265;
					break;
				
				case -1020871238:
					return 266;
					break;
				
				case -161179835:
					return 267;
					break;
				
				case -1654288262:
					return 268;
					break;
				
				case 1108334355:
					return 269;
					break;
				
				case 1060929921:
					return 270;
					break;
				
				case -966040254:
					return 271;
					break;
				
				case -1181482284:
					return 272;
					break;
				
				case -932732805:
					return 273;
					break;
				
				case -569259057:
					return 274;
					break;
				
				case -326080308:
					return 275;
					break;
				
				case 48731514:
					return 276;
					break;
				
				case 880736428:
					return 277;
					break;
				
				case 1303784126:
					return 278;
					break;
				
				case -1018236364:
					return 279;
					break;
				
				case -1243457701:
					return 280;
					break;
				
				case 1249283253:
					return 345;
					break;
				
				case -857707587:
					return 346;
					break;
				
				case -1097543898:
					return 347;
					break;
				
				case 1980349969:
					return 348;
					break;
				
				case 1219453777:
					return 349;
					break;
				
				case -1853459190:
					return 350;
					break;
				
				case -2074781016:
					return 351;
					break;
				
				case 457967755:
					return 352;
					break;
				
				case 235171324:
					return 353;
					break;
				
				case 42685294:
					return 354;
					break;
				
				case -687617715:
					return 355;
					break;
			}
			break;
		
		case 961495388:
			switch (iParam0)
			{
				case -2045758401:
					return 281;
					break;
				
				case -785724817:
					return 282;
					break;
				
				case -1478681000:
					return 283;
					break;
				
				case 1675665560:
					return 284;
					break;
				
				case -76490669:
					return 285;
					break;
				
				case -282298175:
					return 286;
					break;
				
				case -1654288262:
					return 287;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 288;
					break;
				
				case 1108334355:
					return 289;
					break;
				
				case 77277509:
					return 290;
					break;
				
				case -966040254:
					return 291;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 292;
					break;
				
				case -1181482284:
					return 293;
					break;
				
				case -932732805:
					return 294;
					break;
				
				case -569259057:
					return 295;
					break;
				
				case -326080308:
					return 296;
					break;
				
				case 48731514:
					return 297;
					break;
				
				case 880736428:
					return 298;
					break;
				
				case 1303784126:
					return 299;
					break;
				
				case 1134861606:
					return 300;
					break;
				
				case 1447477866:
					return 301;
					break;
				
				case -1860492113:
					return 323;
					break;
				
				case 937772107:
					return 324;
					break;
				
				case 1401650071:
					return 325;
					break;
				
				case 628662130:
					return 326;
					break;
				
				case -985047251:
					return 327;
					break;
				
				case -812944463:
					return 328;
					break;
				
				case -1447352303:
					return 329;
					break;
				
				case -60338860:
					return 330;
					break;
				
				case 2088750491:
					return 331;
					break;
				
				case -1513913454:
					return 332;
					break;
				
				case -1179558480:
					return 333;
					break;
			}
			break;
		
		case -86904375:
			switch (iParam0)
			{
				case 1283078430:
					return 302;
					break;
				
				case 1574296533:
					return 303;
					break;
				
				case 626875735:
					return 304;
					break;
				
				case 1141059345:
					return 305;
					break;
				
				case 1025884839:
					return 306;
					break;
				
				case 391640422:
					return 307;
					break;
				
				case -1654288262:
					return 308;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 309;
					break;
				
				case 1108334355:
					return 310;
					break;
				
				case 77277509:
					return 311;
					break;
				
				case -966040254:
					return 312;
					break;
				
				case joaat("component_at_ar_supp"):
					return 313;
					break;
				
				case -1181482284:
					return 314;
					break;
				
				case -932732805:
					return 315;
					break;
				
				case -569259057:
					return 316;
					break;
				
				case -326080308:
					return 317;
					break;
				
				case 48731514:
					return 318;
					break;
				
				case 880736428:
					return 319;
					break;
				
				case 1303784126:
					return 320;
					break;
				
				case -2093598721:
					return 321;
					break;
				
				case -1958983669:
					return 322;
					break;
				
				case 1272803094:
					return 334;
					break;
				
				case 1080719624:
					return 335;
					break;
				
				case 792221348:
					return 336;
					break;
				
				case -452181427:
					return 337;
					break;
				
				case -746774737:
					return 338;
					break;
				
				case -2044296061:
					return 339;
					break;
				
				case -199171978:
					return 340;
					break;
				
				case -1428075016:
					return 341;
					break;
				
				case -1735153315:
					return 342;
					break;
				
				case 1796459838:
					return 343;
					break;
				
				case -631911105:
					return 344;
					break;
			}
			break;
		
		case 1432025498:
			switch (iParam0)
			{
				case -845938367:
					return 395;
					break;
				
				case 1315288101:
					return 396;
					break;
				
				case 1004815965:
					return 397;
					break;
				
				case -380098265:
					return 398;
					break;
				
				case -1618338827:
					return 399;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 400;
					break;
				
				case 1108334355:
					return 401;
					break;
				
				case 77277509:
					return 402;
					break;
				
				case 1060929921:
					return 403;
					break;
				
				case -1404903567:
					return 404;
					break;
				
				case 1602080333:
					return 405;
					break;
				
				case -474112444:
					return 488;
					break;
				
				case 387223451:
					return 489;
					break;
				
				case 617753366:
					return 490;
					break;
				
				case -222378256:
					return 491;
					break;
				
				case 8741501:
					return 492;
					break;
				
				case -601286203:
					return 493;
					break;
				
				case -511433605:
					return 494;
					break;
				
				case -655387818:
					return 495;
					break;
				
				case -282476598:
					return 496;
					break;
				
				case 1739501925:
					return 497;
					break;
				
				case 1178671645:
					return 498;
					break;
			}
			break;
		
		case -1768145561:
			switch (iParam0)
			{
				case 382112385:
					return 406;
					break;
				
				case -568352468:
					return 407;
					break;
				
				case 1362433589:
					return 408;
					break;
				
				case 1346235024:
					return 409;
					break;
				
				case -570355066:
					return 410;
					break;
				
				case -2023373174:
					return 411;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 412;
					break;
				
				case 1108334355:
					return 413;
					break;
				
				case 77277509:
					return 414;
					break;
				
				case -966040254:
					return 415;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 416;
					break;
				
				case -1181482284:
					return 417;
					break;
				
				case -932732805:
					return 418;
					break;
				
				case -569259057:
					return 419;
					break;
				
				case -326080308:
					return 420;
					break;
				
				case 48731514:
					return 421;
					break;
				
				case 880736428:
					return 422;
					break;
				
				case 1303784126:
					return 423;
					break;
				
				case -1654288262:
					return 424;
					break;
				
				case -415870039:
					return 425;
					break;
				
				case -109086661:
					return 426;
					break;
				
				case -737430213:
					return 532;
					break;
				
				case 1125852043:
					return 533;
					break;
				
				case 886015732:
					return 534;
					break;
				
				case -1262287139:
					return 535;
					break;
				
				case -295208411:
					return 536;
					break;
				
				case -544154504:
					return 537;
					break;
				
				case 172765678:
					return 538;
					break;
				
				case -1982877449:
					return 539;
					break;
				
				case 2072122460:
					return 540;
					break;
				
				case -1986220171:
					return 541;
					break;
				
				case 1377355801:
					return 542;
					break;
			}
			break;
		
		case -2009644972:
			switch (iParam0)
			{
				case 21392614:
					return 427;
					break;
				
				case -829683854:
					return 428;
					break;
				
				case -1055790298:
					return 429;
					break;
				
				case -1928301566:
					return 430;
					break;
				
				case -424845447:
					return 431;
					break;
				
				case -1876057490:
					return 432;
					break;
				
				case 1246324211:
					return 433;
					break;
				
				case 1205768792:
					return 434;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 435;
					break;
				
				case -1434287169:
					return 436;
					break;
				
				case 259780317:
					return 510;
					break;
				
				case -1973342474:
					return 511;
					break;
				
				case 1996130345:
					return 512;
					break;
				
				case -1455657812:
					return 513;
					break;
				
				case -1668263084:
					return 514;
					break;
				
				case 1308243489:
					return 515;
					break;
				
				case 1122574335:
					return 516;
					break;
				
				case 1420313469:
					return 517;
					break;
				
				case 109848390:
					return 518;
					break;
				
				case 593945703:
					return 519;
					break;
				
				case 1142457062:
					return 520;
					break;
			}
			break;
		
		case 1785463520:
			switch (iParam0)
			{
				case -1797182002:
					return 437;
					break;
				
				case -422587990:
					return 438;
					break;
				
				case -193998727:
					return 439;
					break;
				
				case -515203373:
					return 440;
					break;
				
				case 1842849902:
					return 441;
					break;
				
				case -679861550:
					return 442;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 443;
					break;
				
				case 1108334355:
					return 444;
					break;
				
				case -966040254:
					return 445;
					break;
				
				case 1528590652:
					return 446;
					break;
				
				case joaat("component_at_ar_supp"):
					return 447;
					break;
				
				case -1181482284:
					return 448;
					break;
				
				case -932732805:
					return 449;
					break;
				
				case -569259057:
					return 450;
					break;
				
				case -326080308:
					return 451;
					break;
				
				case 48731514:
					return 452;
					break;
				
				case 880736428:
					return 453;
					break;
				
				case 1303784126:
					return 454;
					break;
				
				case -1654288262:
					return 455;
					break;
				
				case 941317513:
					return 456;
					break;
				
				case 1748450780:
					return 457;
					break;
				
				case -1869284448:
					return 521;
					break;
				
				case 1931539634:
					return 522;
					break;
				
				case 1624199183:
					return 523;
					break;
				
				case -26834113:
					return 524;
					break;
				
				case -210406055:
					return 525;
					break;
				
				case 423313640:
					return 526;
					break;
				
				case 276639596:
					return 527;
					break;
				
				case -991356863:
					return 528;
					break;
				
				case -1682848301:
					return 529;
					break;
				
				case 996213771:
					return 530;
					break;
				
				case -1214048550:
					return 531;
					break;
			}
			break;
		
		case -879347409:
			switch (iParam0)
			{
				case -1172055874:
					return 458;
					break;
				
				case 231258687:
					return 459;
					break;
				
				case 284438159:
					return 460;
					break;
				
				case 15712037:
					return 461;
					break;
				
				case -958864266:
					return 462;
					break;
				
				case 1108334355:
					return 463;
					break;
				
				case 77277509:
					return 464;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 465;
					break;
				
				case 654802123:
					return 466;
					break;
				
				case -1069552225:
					return 499;
					break;
				
				case 11918884:
					return 500;
					break;
				
				case 176157112:
					return 501;
					break;
				
				case -220052855:
					return 502;
					break;
				
				case 288456487:
					return 503;
					break;
				
				case 398658626:
					return 504;
					break;
				
				case 628697006:
					return 505;
					break;
				
				case 925911836:
					return 506;
					break;
				
				case 1222307441:
					return 507;
					break;
				
				case 552442715:
					return 508;
					break;
				
				case -648943513:
					return 509;
					break;
			}
			break;
		
		case -2066285827:
			switch (iParam0)
			{
				case 25766362:
					return 467;
					break;
				
				case -273676760:
					return 468;
					break;
				
				case -89655827:
					return 469;
					break;
				
				case 1130501904:
					return 470;
					break;
				
				case -1449330342:
					return 471;
					break;
				
				case -2111807319:
					return 472;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 473;
					break;
				
				case 1108334355:
					return 474;
					break;
				
				case -944910075:
					return 475;
					break;
				
				case 1060929921:
					return 476;
					break;
				
				case 1704640795:
					return 477;
					break;
				
				case 1005743559:
					return 478;
					break;
				
				case joaat("component_at_ar_supp"):
					return 479;
					break;
				
				case -1181482284:
					return 480;
					break;
				
				case -932732805:
					return 481;
					break;
				
				case -569259057:
					return 482;
					break;
				
				case -326080308:
					return 483;
					break;
				
				case 48731514:
					return 484;
					break;
				
				case 880736428:
					return 485;
					break;
				
				case 1303784126:
					return 486;
					break;
				
				case -1654288262:
					return 487;
					break;
				
				case -1371515465:
					return 543;
					break;
				
				case -1190793877:
					return 544;
					break;
				
				case -1497085720:
					return 545;
					break;
				
				case -1803148180:
					return 546;
					break;
				
				case -1975971886:
					return 547;
					break;
				
				case 36929477:
					return 548;
					break;
				
				case -268444834:
					return 549;
					break;
				
				case -574769446:
					return 550;
					break;
				
				case -882699739:
					return 551;
					break;
				
				case -1468181474:
					return 552;
					break;
				
				case -974541230:
					return 553;
					break;
			}
			break;
		
		case -1355376991:
			switch (iParam0)
			{
				case -673450233:
					return 554;
					break;
			}
			break;
	}
	return 0;
}

var func_56(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_34(func_57(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

int func_57(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_158() == 0 || func_37() == 0) || (func_158() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 681;
				break;
			
			case 1:
				return 682;
				break;
			
			case 2:
				return 683;
				break;
			
			case 3:
				return 684;
				break;
			
			case 4:
				return 1750;
				break;
			
			case 5:
				return 2432;
				break;
			
			case 6:
				return 2824;
				break;
			
			case 7:
				return 5498;
				break;
			
			case 8:
				return 5502;
				break;
			
			case 9:
				return 5506;
			
			case 10:
				return 5619;
			
			case 11:
				return 5623;
				break;
			
			case 12:
				return 5627;
				break;
			
			case 13:
				return 5631;
				break;
			
			case 14:
				return 6370;
				break;
			
			case 15:
				return 6493;
				break;
			
			case 16:
				return 6513;
				break;
			
			case 17:
				return 6519;
				break;
			}
	}
	return 1750;
}

char* func_58(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<7> Var3;
	
	if (iParam1 == joaat("weapon_knuckle"))
	{
		switch (iParam0)
		{
			case joaat("component_knuckle_varmod_base"):
				return "WT_KNUCKLE";
				break;
			
			case joaat("component_knuckle_varmod_pimp"):
				return "WCT_KNUCK_02";
				break;
			
			case joaat("component_knuckle_varmod_ballas"):
				return "WCT_KNUCK_BG";
				break;
			
			case joaat("component_knuckle_varmod_dollar"):
				return "WCT_KNUCK_DLR";
				break;
			
			case joaat("component_knuckle_varmod_diamond"):
				return "WCT_KNUCK_DMD";
				break;
			
			case joaat("component_knuckle_varmod_hate"):
				return "WCT_KNUCK_HT";
				break;
			
			case joaat("component_knuckle_varmod_love"):
				return "WCT_KNUCK_LV";
				break;
			
			case joaat("component_knuckle_varmod_player"):
				return "WCT_KNUCK_PC";
				break;
			
			case joaat("component_knuckle_varmod_king"):
				return "WCT_KNUCK_SLG";
				break;
			
			case joaat("component_knuckle_varmod_vagos"):
				return "WCT_KNUCK_VG";
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "WCT_NONE";
			break;
		
		case joaat("component_at_railcover_01"):
			return "WCT_RAIL";
			break;
		
		case joaat("component_at_ar_afgrip"):
			return "WCT_GRIP";
			break;
		
		case joaat("component_at_pi_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_ar_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_scope_macro"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_macro_02"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_small"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_small_02"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_medium"):
			return "WCT_SCOPE_MED";
			break;
		
		case joaat("component_at_scope_large"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_scope_max"):
			return "WCT_SCOPE_MAX";
			break;
		
		case joaat("component_at_pi_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_sr_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_pistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_appistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_appistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_microsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_microsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_smg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_smg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_carbinerifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_advancedrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_mg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_mg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_sniperrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavysniper_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_minigun_clip_01"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_pistol50_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol50_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case 195735895:
			return "WCT_CLIP1";
			break;
		
		case 1525977990:
			return "WCT_CLIP1";
			break;
		
		case 1824470811:
			return "WCT_CLIP2";
			break;
		
		case -890514874:
			return "WCT_CLIP1";
			break;
		
		case -507117574:
			return "WCT_CLIP2";
			break;
		
		case -124428919:
			return "WCT_CLIP1";
			break;
		
		case 1048471894:
			return "WCT_CLIP2";
			break;
		
		case joaat("component_snspistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_snspistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_vintagepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_vintagepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_heavyshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_marksmanrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavyshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_at_scope_large_fixed_zoom"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_pi_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_combatpdw_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpdw_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_advancedrifle_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_carbinerifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_appistol_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_pistol_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pistol50_varmod_luxe"):
			return "WCT_VAR_SIL";
			break;
		
		case joaat("component_heavypistol_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_smg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_microsmg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_sawnoffshotgun_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_sniperrifle_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_marksmanrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_assaultsmg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_bullpuprifle_varmod_low"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_combatmg_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_combatpistol_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_mg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pumpshotgun_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_snspistol_varmod_lowrider"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_specialcarbine_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_switchblade_varmod_base"):
			return "WCT_SB_BASE";
			break;
		
		case joaat("component_switchblade_varmod_var1"):
			return "WCT_SB_VAR1";
			break;
		
		case joaat("component_switchblade_varmod_var2"):
			return "WCT_SB_VAR2";
			break;
		
		case joaat("component_revolver_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_revolver_varmod_boss"):
			return "WCT_REV_VARB";
			break;
		
		case joaat("component_revolver_varmod_goon"):
			return "WCT_REV_VARG";
			break;
		
		case joaat("component_smg_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_carbinerifle_clip_03"):
			return "WCT_CLIP_BOX";
			break;
		
		case joaat("component_assaultrifle_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_heavyshotgun_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case 1623028892:
			return "WCT_VAR_GUN";
			break;
		
		case -1214048550:
			return "WCT_CAMO_IND";
			break;
		
		case 1142457062:
			return "WCT_CAMO_IND";
			break;
		
		case -829683854:
			return "WCT_CLIP2";
			break;
		
		case -944910075:
			return "WCT_SCOPE_MAC2";
			break;
		
		case 1060929921:
			return "WCT_SCOPE_SML2";
			break;
		
		case -673450233:
			return "WCT_VAR_RAY18";
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_28(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar0))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar0, iVar1, &Var3))
						{
							if (Var3.f_3 == iParam0)
							{
								return func_27(&(Var3.f_6));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

void func_59(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_64(iParam0, iParam1, -1))
		{
			func_60(iParam0, iParam1, 1);
		}
	}
	else if (func_64(iParam0, iParam1, -1))
	{
		func_60(iParam0, iParam1, 0);
	}
}

void func_60(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_63(iParam0, iParam1, -1);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, func_30(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_30(iVar1));
		}
		func_61(func_62(iParam0, iParam1), iVar0, -1, 1, 0);
	}
}

void func_61(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_35(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_62(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_158() == 0 || func_37() == 0) || (func_158() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 687;
				break;
			
			case 1:
				return 688;
				break;
			
			case 2:
				return 689;
				break;
			
			case 3:
				return 690;
				break;
			
			case 4:
				return 1753;
				break;
			
			case 5:
				return 2435;
				break;
			
			case 6:
				return 2827;
				break;
			
			case 7:
				return 5501;
				break;
			
			case 8:
				return 5505;
				break;
			
			case 9:
				return 5509;
				break;
			
			case 10:
				return 5622;
				break;
			
			case 11:
				return 5626;
				break;
			
			case 12:
				return 5630;
				break;
			
			case 13:
				return 5634;
				break;
			
			case 14:
				return 6373;
				break;
			
			case 15:
				return 6496;
				break;
			
			case 16:
				return 6516;
				break;
			
			case 17:
				return 6522;
				break;
			}
	}
	return 1753;
}

var func_63(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_34(func_62(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

bool func_64(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_41())
	{
		return 0;
	}
	iVar0 = func_63(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return MISC::IS_BIT_SET(iVar0, func_30(iVar1));
}

void func_65(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_94(iParam0, iParam1, -1))
		{
			func_66(iParam0, iParam1, 1);
		}
	}
	else if (func_94(iParam0, iParam1, -1))
	{
		func_66(iParam0, iParam1, 0);
	}
}

void func_66(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_68(iParam0, iParam1, -1);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, func_30(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_30(iVar1));
		}
		func_61(func_67(iParam0, iParam1), iVar0, -1, 1, 0);
	}
}

int func_67(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_158() == 0 || func_37() == 0) || (func_158() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 810;
				break;
			
			case 1:
				return 811;
				break;
			
			case 2:
				return 812;
				break;
			
			case 3:
				return 813;
				break;
			
			case 4:
				return 1751;
				break;
			
			case 5:
				return 2433;
				break;
			
			case 6:
				return 2825;
				break;
			
			case 7:
				return 5499;
				break;
			
			case 8:
				return 5503;
				break;
			
			case 9:
				return 5507;
				break;
			
			case 10:
				return 5620;
				break;
			
			case 11:
				return 5624;
				break;
			
			case 12:
				return 5628;
				break;
			
			case 13:
				return 5632;
				break;
			
			case 14:
				return 6371;
				break;
			
			case 15:
				return 6494;
				break;
			
			case 16:
				return 6514;
				break;
			
			case 17:
				return 6520;
				break;
			}
	}
	return 10383;
}

var func_68(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_34(func_67(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

void func_69(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_53(iParam0, iParam1, -1))
		{
			func_84(iParam0, iParam1, 1);
		}
		if (bParam3)
		{
			if (func_82(iParam0, iParam1) == 0)
			{
				func_77(16, func_58(iParam0, 0), func_81(iParam0, 0), func_80(iParam1), func_79(iParam1), -1, 0, 0, 0, -1, 0);
				func_75(iParam0, iParam1, 1);
			}
		}
		if (bParam4)
		{
			func_70(iParam0, iParam1, 1);
		}
	}
	else if (func_53(iParam0, iParam1, -1))
	{
		func_84(iParam0, iParam1, 0);
	}
}

void func_70(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_74(iParam0, iParam1, -1))
		{
			func_71(iParam0, iParam1, 1);
		}
	}
	else if (func_74(iParam0, iParam1, -1))
	{
		func_71(iParam0, iParam1, 0);
	}
}

void func_71(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_73(iParam0, iParam1, -1);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, func_30(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_30(iVar1));
		}
		func_61(func_72(iParam0, iParam1), iVar0, -1, 1, 0);
	}
}

int func_72(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_158() == 0 || func_37() == 0) || (func_158() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 654;
				break;
			
			case 1:
				return 655;
				break;
			
			case 2:
				return 656;
				break;
			
			case 3:
				return 657;
				break;
			
			case 4:
				return 1752;
				break;
			
			case 5:
				return 2434;
				break;
			
			case 6:
				return 2826;
				break;
			
			case 7:
				return 5500;
				break;
			
			case 8:
				return 5504;
				break;
			
			case 9:
				return 5508;
				break;
			
			case 10:
				return 5621;
				break;
			
			case 11:
				return 5625;
				break;
			
			case 12:
				return 5629;
				break;
			
			case 13:
				return 5633;
				break;
			
			case 14:
				return 6372;
				break;
			
			case 15:
				return 6495;
				break;
			
			case 16:
				return 6515;
				break;
			
			case 17:
				return 6521;
				break;
			}
	}
	return 10383;
}

var func_73(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_34(func_72(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

bool func_74(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_41())
	{
		return 0;
	}
	iVar0 = func_73(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return MISC::IS_BIT_SET(iVar0, func_30(iVar1));
}

void func_75(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_54(iParam0, iParam1);
	if (iVar0 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&(Global_2538129.f_991[func_76(iParam0, iParam1)]), func_30(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2538129.f_991[func_76(iParam0, iParam1)]), func_30(iVar0));
		}
	}
}

int func_76(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_54(iParam0, iParam1);
	switch (func_38(iVar0))
	{
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
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
			break;
		
		case 12:
			return 12;
			break;
		
		case 13:
			return 13;
			break;
		
		case 14:
			return 14;
			break;
	}
	return 0;
}

void func_77(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = func_78(&Global_1379695);
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

int func_78(var uParam0)
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

char* func_79(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
			return "MPWeaponsUnusedForNow";
			break;
		
		case joaat("weapon_stungun"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_pistol"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_appistol"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("gadget_parachute"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_smg"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_sniperrifle"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_carbinerifle"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_specialcarbine"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_snspistol"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_pumpshotgun"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_grenade"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_stickybomb"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_grenadelauncher"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_combatmg"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_assaultshotgun"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_rpg"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_heavysniper"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_advancedrifle"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_microsmg"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_assaultrifle"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_mg"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_minigun"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_combatpistol"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_smokegrenade"):
			return "MPWeaponsCommon_small";
			break;
		
		case 527765612:
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_molotov"):
			return "MPWeaponsUnusedForNow";
			break;
		
		case joaat("weapon_petrolcan"):
			return "MPWeaponsUnusedForNow";
			break;
	}
	return "";
}

char* func_80(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
			return "W_ME_KNIFE_01";
			break;
		
		case joaat("weapon_stungun"):
			return "W_PI_Stungun";
			break;
		
		case joaat("weapon_pistol"):
			return "W_PI_Pistol";
			break;
		
		case joaat("gadget_parachute"):
			return "Parachute_Main";
			break;
		
		case joaat("weapon_smg"):
			return "W_SB_SMG";
			break;
		
		case joaat("weapon_sniperrifle"):
			return "W_SR_SniperRifle";
			break;
		
		case joaat("weapon_carbinerifle"):
			return "W_AR_CarbineRifle";
			break;
		
		case joaat("weapon_specialcarbine"):
			return "W_AR_DLC_SpecialCarbine";
			break;
		
		case joaat("weapon_snspistol"):
			return "W_AR_DLC_SNSPISTOL";
			break;
		
		case joaat("weapon_pumpshotgun"):
			return "W_SG_PumpShotgun";
			break;
		
		case joaat("weapon_grenade"):
			return "W_Ex_GrenadeFrag";
			break;
		
		case joaat("weapon_stickybomb"):
			return "W_Ex_PE";
			break;
		
		case joaat("weapon_grenadelauncher"):
			return "W_R_GrenadeLauncher";
			break;
		
		case joaat("weapon_combatmg"):
			return "W_MG_CombatMG";
			break;
		
		case joaat("weapon_assaultshotgun"):
			return "W_SG_AssaultShotgun";
			break;
		
		case joaat("weapon_appistol"):
			return "W_PI_AppPistol";
			break;
		
		case joaat("weapon_rpg"):
			return "W_LR_RPG";
			break;
		
		case joaat("weapon_heavysniper"):
			return "W_SR_HeavySniper";
			break;
		
		case joaat("weapon_advancedrifle"):
			return "W_AR_AdvancedRifle";
			break;
		
		case joaat("weapon_microsmg"):
			return "W_SB_MicroSMG";
			break;
		
		case joaat("weapon_assaultrifle"):
			return "W_AR_AssaultRifle";
			break;
		
		case joaat("weapon_mg"):
			return "W_MG_MG";
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return "W_SG_SAWNOFF";
			break;
		
		case joaat("weapon_minigun"):
			return "W_MG_Minigun";
			break;
		
		case joaat("weapon_combatpistol"):
			return "W_PI_CombatPistol";
			break;
		
		case joaat("weapon_smokegrenade"):
			return "W_Ex_GrenadeSmoke";
			break;
		
		case joaat("weapon_petrolcan"):
			return "W_AM_Jerrycan";
			break;
		
		case joaat("weapon_molotov"):
			return "W_EX_Molotov";
			break;
		
		case 527765612:
			return "rocket";
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			return "rocket";
			break;
	}
	return "";
}

char* func_81(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<15> Var3;
	
	switch (iParam0)
	{
		case 0:
			return "WCD_NONE";
			break;
		
		case joaat("component_at_railcover_01"):
			return "WCD_AT_RAIL";
			break;
		
		case joaat("component_at_ar_afgrip"):
			return "WCD_GRIP";
			break;
		
		case joaat("component_at_pi_flsh"):
			return "WCD_FLASH";
			break;
		
		case joaat("component_at_ar_flsh"):
			return "WCD_FLASH";
			break;
		
		case joaat("component_at_scope_macro"):
			return "WCD_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_macro_02"):
			return "WCD_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_small"):
			return "WCD_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_small_02"):
			return "WCD_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_medium"):
			return "WCD_SCOPE_MED";
			break;
		
		case joaat("component_at_scope_large"):
			return "WCD_SCOPE_LRG";
			break;
		
		case joaat("component_at_scope_max"):
			return "WCD_SCOPE_MAX";
			break;
		
		case joaat("component_at_pi_supp"):
			return "WCD_PI_SUPP";
			break;
		
		case joaat("component_at_pi_supp_02"):
			return "WCD_PI_SUPP";
			break;
		
		case joaat("component_at_ar_supp"):
			return "WCD_AR_SUPP";
			break;
		
		case joaat("component_at_ar_supp_02"):
			return "WCD_AR_SUPP2";
			break;
		
		case joaat("component_at_sr_supp"):
			return "WCD_SR_SUPP";
			break;
		
		case joaat("component_pistol_clip_01"):
			return "WCD_P_CLIP1";
			break;
		
		case joaat("component_pistol_clip_02"):
			return "WCD_P_CLIP2";
			break;
		
		case joaat("component_combatpistol_clip_01"):
			return "WCD_CP_CLIP1";
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return "WCD_CP_CLIP2";
			break;
		
		case joaat("component_appistol_clip_01"):
			return "WCD_AP_CLIP1";
			break;
		
		case joaat("component_appistol_clip_02"):
			return "WCD_AP_CLIP2";
			break;
		
		case joaat("component_microsmg_clip_01"):
			return "WCDMSMG_CLIP1";
			break;
		
		case joaat("component_microsmg_clip_02"):
			return "WCDMSMG_CLIP2";
			break;
		
		case joaat("component_smg_clip_01"):
			return "WCD_SMG_CLIP1";
			break;
		
		case joaat("component_smg_clip_02"):
			return "WCD_SMG_CLIP2";
			break;
		
		case joaat("component_assaultrifle_clip_01"):
			return "WCD_AR_CLIP1";
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return "WCD_AR_CLIP2";
			break;
		
		case joaat("component_carbinerifle_clip_01"):
			return "WCD_CR_CLIP1";
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return "WCD_CR_CLIP2";
			break;
		
		case joaat("component_advancedrifle_clip_01"):
			return "WCD_ADR_CLIP1";
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return "WCD_ADR_CLIP2";
			break;
		
		case joaat("component_mg_clip_01"):
			return "WCD_MG_CLIP1";
			break;
		
		case joaat("component_mg_clip_02"):
			return "WCD_MG_CLIP2";
			break;
		
		case joaat("component_combatmg_clip_01"):
			return "WCDCMG_CLIP1";
			break;
		
		case joaat("component_combatmg_clip_02"):
			return "WCDCMG_CLIP2";
			break;
		
		case joaat("component_assaultshotgun_clip_01"):
			return "WCD_AS_CLIP1";
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return "WCD_AS_CLIP2";
			break;
		
		case joaat("component_sniperrifle_clip_01"):
			return "WCD_SR_CLIP1";
			break;
		
		case joaat("component_heavysniper_clip_01"):
			return "WCD_HS_CLIP1";
			break;
		
		case joaat("component_minigun_clip_01"):
			return "WCD_MIG_CLIP2";
			break;
		
		case joaat("component_assaultsmg_clip_01"):
			return "WCD_ASMG_CLIP1";
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return "WCD_ASMG_CLIP2";
			break;
		
		case joaat("component_pistol50_clip_01"):
			return "WCD_P50_CLIP1";
			break;
		
		case joaat("component_pistol50_clip_02"):
			return "WCD_P50_CLIP2";
			break;
		
		case joaat("component_assaultrifle_varmod_luxe"):
			return "WCD_VAR_AR";
			break;
		
		case joaat("component_advancedrifle_varmod_luxe"):
			return "WCD_VAR_ADR";
			break;
		
		case joaat("component_carbinerifle_varmod_luxe"):
			return "WCD_VAR_CR";
			break;
		
		case joaat("component_appistol_varmod_luxe"):
			return "WCD_VAR_AP";
			break;
		
		case joaat("component_pistol_varmod_luxe"):
			return "WCD_VAR_P";
			break;
		
		case joaat("component_pistol50_varmod_luxe"):
			return "WCD_VAR_P50";
			break;
		
		case joaat("component_heavypistol_varmod_luxe"):
			return "WCD_VAR_HPST";
			break;
		
		case joaat("component_smg_varmod_luxe"):
			return "WCD_VAR_SMG";
			break;
		
		case joaat("component_microsmg_varmod_luxe"):
			return "WCD_VAR_MSMG";
			break;
		
		case joaat("component_sawnoffshotgun_varmod_luxe"):
			return "WCD_VAR_SOF";
			break;
		
		case joaat("component_sniperrifle_varmod_luxe"):
			return "WCD_VAR_SNP";
			break;
		
		case joaat("component_marksmanrifle_varmod_luxe"):
			return "WCD_VAR_MKRF";
			break;
		
		case joaat("component_knuckle_varmod_pimp"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_ballas"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_dollar"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_diamond"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_hate"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_love"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_player"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_king"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_vagos"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_assaultsmg_varmod_lowrider"):
			return "WCD_VAR_ASMG";
			break;
		
		case joaat("component_bullpuprifle_varmod_low"):
			return "WCD_VAR_BPR";
			break;
		
		case joaat("component_combatmg_varmod_lowrider"):
			return "WCD_VAR_CBMG";
			break;
		
		case joaat("component_combatpistol_varmod_lowrider"):
			return "WCD_VAR_CBP";
			break;
		
		case joaat("component_mg_varmod_lowrider"):
			return "WCD_VAR_MG";
			break;
		
		case joaat("component_pumpshotgun_varmod_lowrider"):
			return "WCD_VAR_PSHT";
			break;
		
		case joaat("component_snspistol_varmod_lowrider"):
			return "WCD_VAR_SNS";
			break;
		
		case joaat("component_specialcarbine_varmod_lowrider"):
			return "WCD_VAR_SCAR";
			break;
		
		case joaat("component_switchblade_varmod_var1"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_switchblade_varmod_var2"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_revolver_clip_01"):
			return "WCD_P_CLIP1";
			break;
		
		case joaat("component_revolver_varmod_boss"):
			return "WCD_REV_VARB";
			break;
		
		case joaat("component_revolver_varmod_goon"):
			return "WCD_REV_VARG";
			break;
		
		case joaat("component_smg_clip_03"):
			return "WCD_CLIP3";
			break;
		
		case joaat("component_carbinerifle_clip_03"):
			return "WCD_CLIP3";
			break;
		
		case joaat("component_assaultrifle_clip_03"):
			return "WCD_CLIP3";
			break;
		
		case 1623028892:
			return "WCD_VAR_GUN";
			break;
		
		case -829683854:
			return "WCD_CLIP2";
			break;
		
		case -944910075:
			return "WCD_SCOPE_MAC";
			break;
		
		case 1060929921:
			return "WCD_SCOPE_SML";
			break;
		
		case -673450233:
			return "WCD_VAR_RAY18";
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_28(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar0))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar0, iVar1, &Var3))
						{
							if (Var3.f_3 == iParam0)
							{
								return func_27(&(Var3.f_14));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCD_INVALID";
}

bool func_82(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_83(iParam0, iParam1);
	iVar1 = func_54(iParam0, iParam1);
	return MISC::IS_BIT_SET(iVar0, func_30(iVar1));
}

var func_83(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_2538129.f_991[func_76(iParam0, iParam1)];
	return uVar0;
}

void func_84(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_56(iParam0, iParam1, -1);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, func_30(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_30(iVar1));
		}
		func_61(func_57(iParam0, iParam1), iVar0, -1, 1, 0);
	}
}

int func_85(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2067221805;
					break;
				
				case 1:
					iVar0 = -1820405577;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_28(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var5))
						{
							if (!func_86(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_86(int iParam0)
{
	switch (iParam0)
	{
		case -1258515792:
		case 438243936:
		case -455079056:
		case 740920107:
		case -541616347:
		case 1809261196:
		case -1646538868:
		case -1290164948:
		case -964465134:
		case 1135718771:
		case 1253942266:
		case -403805974:
		case 691432737:
		case 987648331:
		case -431680535:
		case -847582310:
		case -92592218:
		case -494548326:
		case 730876697:
		case 583159708:
		case -1928503603:
		case 520557834:
			return 1;
			break;
	}
	return 0;
}

bool func_87(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (func_41())
	{
		return 0;
	}
	iVar0 = func_88(iParam0, iParam1);
	iVar1 = func_31(iParam0);
	return MISC::IS_BIT_SET(iVar0, func_30(iVar1));
}

var func_88(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_34(func_89(iParam0), iParam1, 0);
	return uVar0;
}

int func_89(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_31(iParam0);
	iVar1 = func_38(iVar0);
	if ((func_158() == 0 || func_37() == 0) || (func_158() == 999 && func_37() == 999))
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

bool func_90(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (func_41())
	{
		return 0;
	}
	if (func_42() == 0)
	{
		return 0;
	}
	if (iParam0 != joaat("gadget_parachute") && iParam0 != joaat("weapon_railgun"))
	{
		if (func_39(func_93(iParam0), -1))
		{
			return 0;
		}
	}
	iVar0 = func_91(iParam0, iParam1);
	iVar1 = func_31(iParam0);
	return MISC::IS_BIT_SET(iVar0, func_30(iVar1));
}

var func_91(int iParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_34(func_92(iParam0), uParam1, 0);
	return uVar0;
}

int func_92(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_31(iParam0);
	iVar1 = func_38(iVar0);
	if ((func_158() == 0 || func_37() == 0) || (func_158() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 799;
				break;
			
			case 1:
				return 800;
				break;
			
			case 2:
				return 2418;
				break;
			}
	}
	return 10383;
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 18;
			break;
		
		case joaat("weapon_grenade"):
			return 66;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 68;
			break;
		
		case joaat("weapon_stickybomb"):
			return 70;
			break;
		
		case joaat("weapon_molotov"):
			return 72;
			break;
		
		case joaat("weapon_pistol"):
			return 18;
			break;
		
		case joaat("weapon_combatpistol"):
			return 40;
			break;
		
		case joaat("weapon_pistol50"):
			return 22;
			break;
		
		case joaat("weapon_appistol"):
			return 24;
			break;
		
		case joaat("weapon_microsmg"):
			return 26;
			break;
		
		case joaat("weapon_smg"):
			return 28;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 30;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 32;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 34;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 36;
			break;
		
		case joaat("weapon_mg"):
			return 38;
			break;
		
		case -572349828:
			return 42;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 44;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 46;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 48;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 50;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 54;
			break;
		
		case joaat("weapon_heavysniper"):
			return 56;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 60;
			break;
		
		case joaat("weapon_rpg"):
			return 62;
			break;
		
		case joaat("weapon_minigun"):
			return 64;
			break;
		
		case joaat("weapon_stungun"):
			return 52;
			break;
		
		case joaat("weapon_petrolcan"):
			return 75;
			break;
		
		case joaat("weapon_knife"):
			return 2;
			break;
		
		case joaat("weapon_nightstick"):
			return 4;
			break;
		
		case joaat("weapon_hammer"):
			return 12;
			break;
		
		case joaat("weapon_bat"):
			return 14;
			break;
		
		case joaat("weapon_crowbar"):
			return 6;
			break;
		
		case joaat("weapon_golfclub"):
			return 16;
			break;
		
		case 392730790:
			return 58;
			break;
		
		case joaat("weapon_combatmg"):
			return 40;
			break;
		
		case joaat("weapon_bottle"):
			return 143;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 263;
			break;
		
		case joaat("weapon_snspistol"):
			return 145;
			break;
		
		case joaat("weapon_heavypistol"):
			return 261;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 265;
			break;
		
		case joaat("weapon_gusenberg"):
			return 267;
			break;
		
		case joaat("weapon_dagger"):
			return 288;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 290;
			break;
		
		case joaat("weapon_firework"):
			return 292;
			break;
		
		case joaat("weapon_musket"):
			return 294;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 306;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 308;
			break;
		
		case joaat("weapon_proxmine"):
			return 312;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 314;
			break;
		
		case joaat("weapon_combatpdw"):
			return 316;
			break;
		
		case joaat("weapon_knuckle"):
			return 318;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 320;
			break;
		
		case joaat("weapon_hatchet"):
			return 310;
			break;
		
		case joaat("weapon_machete"):
			return 322;
			break;
		
		case joaat("weapon_machinepistol"):
			return 324;
			break;
		
		case joaat("weapon_compactrifle"):
			return 327;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 329;
			break;
		
		case joaat("weapon_flashlight"):
			return 331;
			break;
		
		case joaat("weapon_revolver"):
			return 334;
			break;
		
		case joaat("weapon_switchblade"):
			return 336;
			break;
		
		case 317205821:
			return 341;
			break;
		
		case -1121678507:
			return 347;
			break;
		
		case 125959754:
			return 345;
			break;
		
		case -853065399:
			return 343;
			break;
		
		case -1169823560:
			return 349;
			break;
		
		case -1810795771:
			return 351;
			break;
		
		case 419712736:
			return 10;
			break;
		
		case 961495388:
			return 32;
			break;
		
		case -86904375:
			return 34;
			break;
		
		case -608341376:
			return 40;
			break;
		
		case 177293209:
			return 56;
			break;
		
		case -1075685676:
			return 18;
			break;
		
		case 2024373456:
			return 28;
			break;
		
		case -2066285827:
			return 48;
			break;
		
		case 1785463520:
			return 308;
			break;
		
		case 1432025498:
			return 44;
			break;
		
		case -879347409:
			return 334;
			break;
		
		case -2009644972:
			return 145;
			break;
		
		case -1768145561:
			return 263;
			break;
		
		case -1746263880:
			return 375;
			break;
		
		case 940833800:
			return 381;
			break;
		
		case -1355376991:
			return 383;
			break;
		
		case 1198256469:
			return 383;
			break;
		
		case -1238556825:
			return 383;
			break;
	}
	return 2;
}

bool func_94(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_41())
	{
		return 0;
	}
	iVar0 = func_68(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return MISC::IS_BIT_SET(iVar0, func_30(iVar1));
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case -1075685676:
			return joaat("weapon_pistol");
		
		case 2024373456:
			return joaat("weapon_smg");
		
		case 961495388:
			return joaat("weapon_assaultrifle");
		
		case -86904375:
			return joaat("weapon_carbinerifle");
		
		case -608341376:
			return joaat("weapon_combatmg");
		
		case 177293209:
			return joaat("weapon_heavysniper");
		
		case -2066285827:
			return joaat("weapon_bullpuprifle");
		
		case 1785463520:
			return joaat("weapon_marksmanrifle");
		
		case 1432025498:
			return joaat("weapon_pumpshotgun");
		
		case -879347409:
			return joaat("weapon_revolver");
		
		case -2009644972:
			return joaat("weapon_snspistol");
		
		case -1768145561:
			return joaat("weapon_specialcarbine");
		
		default:
	}
	return 0;
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case -1075685676:
		case 2024373456:
		case 177293209:
		case -608341376:
		case 961495388:
		case -86904375:
		case -2009644972:
		case -879347409:
		case -2066285827:
		case -1768145561:
		case 1432025498:
		case 1785463520:
			return 1;
			break;
	}
	return 0;
}

int func_97(var uParam0)
{
	return uParam0->f_281;
}

void func_98(var uParam0, var uParam1)
{
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_hammer")) && iLocal_98[10] == uParam1->f_5)
	{
		func_106(joaat("weapon_hammer"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_pistol50")) && iLocal_98[0] == uParam1->f_5)
	{
		func_106(joaat("weapon_pistol50"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_bullpupshotgun")) && iLocal_98[1] == uParam1->f_5)
	{
		func_106(joaat("weapon_bullpupshotgun"), uParam0, *uParam1, 0);
	}
	if (func_105(1, 0))
	{
		if (WEAPON::IS_WEAPON_VALID(joaat("weapon_sawnoffshotgun")) && iLocal_98[2] == uParam1->f_5)
		{
			func_106(joaat("weapon_sawnoffshotgun"), uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_bottle")) && iLocal_98[3] == uParam1->f_5)
	{
		func_106(joaat("weapon_bottle"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_snspistol")) && iLocal_98[4] == uParam1->f_5)
	{
		func_106(joaat("weapon_snspistol"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_gusenberg")) && iLocal_98[11] == uParam1->f_5)
	{
		func_106(joaat("weapon_gusenberg"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_heavypistol")) && iLocal_98[7] == uParam1->f_5)
	{
		func_106(joaat("weapon_heavypistol"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_specialcarbine")) && iLocal_98[5] == uParam1->f_5)
	{
		func_106(joaat("weapon_specialcarbine"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_bullpuprifle")) && iLocal_98[6] == uParam1->f_5)
	{
		func_106(joaat("weapon_bullpuprifle"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_dagger")) && iLocal_98[8] == uParam1->f_5)
	{
		func_106(joaat("weapon_dagger"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_vintagepistol")) && iLocal_98[9] == uParam1->f_5)
	{
		func_106(joaat("weapon_vintagepistol"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_firework")) && iLocal_98[14] == uParam1->f_5)
	{
		func_106(joaat("weapon_firework"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_musket")) && iLocal_98[13] == uParam1->f_5)
	{
		func_106(joaat("weapon_musket"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_flaregun")) && iLocal_98[12] == uParam1->f_5)
	{
		func_106(joaat("weapon_flaregun"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_heavyshotgun")) && iLocal_98[15] == uParam1->f_5)
	{
		func_106(joaat("weapon_heavyshotgun"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_marksmanrifle")) && iLocal_98[16] == uParam1->f_5)
	{
		func_106(joaat("weapon_marksmanrifle"), uParam0, *uParam1, 0);
	}
	if (func_104() || Global_262145.f_19626)
	{
		if (WEAPON::IS_WEAPON_VALID(joaat("weapon_hatchet")) && iLocal_98[22] == uParam1->f_5)
		{
			func_106(joaat("weapon_hatchet"), uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_proxmine")) && iLocal_98[17] == uParam1->f_5)
	{
		func_106(joaat("weapon_proxmine"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_hominglauncher")) && iLocal_98[18] == uParam1->f_5)
	{
		func_106(joaat("weapon_hominglauncher"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_combatpdw")) && iLocal_98[19] == uParam1->f_5)
	{
		func_106(joaat("weapon_combatpdw"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_marksmanpistol")) && iLocal_98[20] == uParam1->f_5)
	{
		func_106(joaat("weapon_marksmanpistol"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_knuckle")) && iLocal_98[21] == uParam1->f_5)
	{
		func_106(joaat("weapon_knuckle"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_machete")) && iLocal_98[23] == uParam1->f_5)
	{
		func_106(joaat("weapon_machete"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_machinepistol")) && iLocal_98[24] == uParam1->f_5)
	{
		func_106(joaat("weapon_machinepistol"), uParam0, *uParam1, 0);
	}
	if ((Global_262145.f_11468 && WEAPON::IS_WEAPON_VALID(joaat("weapon_flashlight"))) && iLocal_98[25] == uParam1->f_5)
	{
		func_106(joaat("weapon_flashlight"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_revolver")) && iLocal_98[26] == uParam1->f_5)
	{
		func_106(joaat("weapon_revolver"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_switchblade")) && iLocal_98[27] == uParam1->f_5)
	{
		func_106(joaat("weapon_switchblade"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_dbshotgun")) && iLocal_98[28] == uParam1->f_5)
	{
		func_106(joaat("weapon_dbshotgun"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_compactrifle")) && iLocal_98[29] == uParam1->f_5)
	{
		func_106(joaat("weapon_compactrifle"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(317205821) && iLocal_98[30] == uParam1->f_5)
	{
		func_106(317205821, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-853065399) && iLocal_98[31] == uParam1->f_5)
	{
		func_106(-853065399, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(125959754) && iLocal_98[32] == uParam1->f_5)
	{
		func_106(125959754, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-1121678507) && iLocal_98[33] == uParam1->f_5)
	{
		func_106(-1121678507, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-1169823560) && iLocal_98[34] == uParam1->f_5)
	{
		func_106(-1169823560, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-1810795771) && iLocal_98[35] == uParam1->f_5)
	{
		func_106(-1810795771, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(419712736) && iLocal_98[36] == uParam1->f_5)
	{
		func_106(419712736, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(961495388) && iLocal_98[37] == uParam1->f_5)
	{
		func_106(961495388, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-86904375) && iLocal_98[38] == uParam1->f_5)
	{
		func_106(-86904375, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-608341376) && iLocal_98[39] == uParam1->f_5)
	{
		func_106(-608341376, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(177293209) && iLocal_98[40] == uParam1->f_5)
	{
		func_106(177293209, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-1075685676) && iLocal_98[41] == uParam1->f_5)
	{
		func_106(-1075685676, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(2024373456) && iLocal_98[42] == uParam1->f_5)
	{
		func_106(2024373456, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-2066285827) && iLocal_98[43] == uParam1->f_5)
	{
		func_106(-2066285827, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(1785463520) && iLocal_98[44] == uParam1->f_5)
	{
		func_106(1785463520, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(1432025498) && iLocal_98[45] == uParam1->f_5)
	{
		func_106(1432025498, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-879347409) && iLocal_98[46] == uParam1->f_5)
	{
		func_106(-879347409, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-2009644972) && iLocal_98[47] == uParam1->f_5)
	{
		func_106(-2009644972, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-1768145561) && iLocal_98[48] == uParam1->f_5)
	{
		func_106(-1768145561, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-1746263880) && iLocal_98[49] == uParam1->f_5)
	{
		if (Global_262145.f_22802 && (func_103() || Global_1688018))
		{
			func_106(-1746263880, uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(940833800) && iLocal_98[50] == uParam1->f_5)
	{
		if (Global_262145.f_23501 && func_99())
		{
			func_106(940833800, uParam0, *uParam1, 0);
		}
	}
	if ((WEAPON::IS_WEAPON_VALID(1198256469) && iLocal_98[51] == uParam1->f_5) && Global_262145.f_25731)
	{
		func_106(1198256469, uParam0, *uParam1, 0);
	}
	if ((WEAPON::IS_WEAPON_VALID(-1238556825) && iLocal_98[52] == uParam1->f_5) && Global_262145.f_25730)
	{
		func_106(-1238556825, uParam0, *uParam1, 0);
	}
	if ((WEAPON::IS_WEAPON_VALID(-1355376991) && (((func_17(25007, -1, -1) || func_17(25002, -1, -1)) || func_90(-1355376991, -1, 0)) || Global_262145.f_24740)) && iLocal_98[53] == uParam1->f_5)
	{
		func_106(-1355376991, uParam0, *uParam1, 0);
	}
}

int func_99()
{
	if (func_100(7315, -1, -1) >= 6)
	{
		return 1;
	}
	return 0;
}

int func_100(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_142();
	}
	iVar0 = 0;
	iVar1 = func_102(iParam0, iParam1);
	iVar2 = func_101(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_101(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - STATS::_0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	return iVar0;
}

int func_102(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_142();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	return iVar0;
}

int func_103()
{
	if (func_100(18981, -1, -1) >= 4)
	{
		return 1;
	}
	return 0;
}

int func_104()
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

int func_105(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (MISC::IS_BIT_SET(Global_106565.f_668.f_1311, 2))
		{
			return 1;
		}
	}
	if (NETWORK::_0x67A5589628E0CFF6())
	{
		if (!bParam1 || NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			if (!MISC::IS_PS3_VERSION() && !MISC::IS_ORBIS_VERSION())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (NETWORK::_0x1353F87E89946207())
		{
			return 0;
		}
	}
	if (NETWORK::_0x67A5589628E0CFF6())
	{
		return 1;
	}
	return 0;
}

void func_106(int iParam0, var uParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	char cVar1[16];
	float fVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	struct<5> Var7;
	struct<5> Var8;
	struct<5> Var9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	
	iParam3 = iParam3;
	StringCopy(&Var0, func_26(iParam0, 0), 16);
	if (((iParam0 == -1746263880 || iParam0 == joaat("weapon_compactrifle")) || iParam0 == 125959754) || iParam0 == joaat("weapon_marksmanrifle"))
	{
		StringCopy(&cVar1, func_136(iParam0, 1), 16);
	}
	else
	{
		StringCopy(&cVar1, func_136(iParam0, 0), 16);
	}
	fVar2 = func_133(iParam0);
	uVar3 = func_132(iParam0, iParam2);
	uVar4 = func_131(iParam0, iParam2);
	iVar5 = func_130(iParam0, iParam2);
	uVar6 = func_129(iParam0, iParam2);
	WEAPON::GET_WEAPON_HUD_STATS(iParam0, &Var7);
	Var7.f_2 = WEAPON::GET_WEAPON_CLIP_SIZE(iParam0);
	bVar13 = false;
	iVar12 = 0;
	while (iVar12 <= 8)
	{
		if (uParam1->f_1[iVar12] == 0 && WEAPON::IS_WEAPON_VALID(iParam0))
		{
			if (func_96(iParam0))
			{
				if (func_94(1623028892, func_95(iParam0), -1))
				{
					bVar13 = true;
				}
				else
				{
					bVar13 = false;
				}
			}
			else if (func_90(iParam0, iParam2, 0))
			{
				bVar13 = true;
				if (bVar13)
				{
				}
			}
			else
			{
				bVar13 = false;
			}
			iVar11 = 0;
			while (iVar11 <= 35)
			{
				iVar10 = func_85(iParam0, iVar11);
				if (iVar10 != 0)
				{
					if (func_53(iVar10, iParam0, iParam2) && bVar13)
					{
						if (WEAPON::GET_WEAPON_COMPONENT_HUD_STATS(iVar10, &Var8))
						{
							Var9 = (Var9 + Var8);
							Var9.f_1 = (Var9.f_1 + Var8.f_1);
							Var9.f_3 = (Var9.f_3 + Var8.f_3);
							Var9.f_4 = (Var9.f_4 + Var8.f_4);
						}
					}
					if (func_64(iVar10, iParam0, iParam2))
					{
						if (func_128(iVar10))
						{
							Var9.f_2 = func_127(iParam0);
						}
						else if (func_126(iVar10))
						{
							Var9.f_2 = func_125(iParam0);
						}
					}
					if (func_94(iVar10, iParam0, iParam2))
					{
					}
				}
				iVar11++;
			}
			if (Var9.f_2 == 0)
			{
				Var9.f_2 = Var7.f_2;
			}
			func_124(iVar12, &Var0, &cVar1, uParam1);
			func_123(iVar12, Var7, uParam1);
			func_122(iVar12, Var9, uParam1);
			if (func_15(iParam0))
			{
				func_121(iVar12, -1, uParam1);
				func_120(iVar12, Var9.f_3, uParam1);
				func_119(iVar12, -1, uParam1);
				func_118(iVar12, Var9.f_4, uParam1);
				func_117(iVar12, -1, uParam1);
				func_116(iVar12, Var9.f_2, uParam1);
			}
			else
			{
				func_121(iVar12, Var7.f_3, uParam1);
				func_120(iVar12, Var9.f_3, uParam1);
				func_119(iVar12, Var7.f_4, uParam1);
				func_118(iVar12, Var9.f_4, uParam1);
				func_117(iVar12, Var7.f_2, uParam1);
				func_116(iVar12, Var9.f_2, uParam1);
			}
			func_115(iVar12, uVar4, uParam1);
			func_114(iVar12, uVar3, uParam1);
			if (func_15(iParam0))
			{
				func_113(iVar12, -1f, uParam1);
				func_112(iVar12, -1, uParam1);
			}
			else
			{
				func_113(iVar12, fVar2, uParam1);
				func_112(iVar12, iVar5, uParam1);
			}
			func_111(iVar12, uVar6, uParam1);
			func_110(iVar12, Var7.f_1, uParam1);
			func_109(iVar12, Var9.f_1, uParam1);
			func_108(iVar12, iParam0, uParam1);
			func_107(iParam2, uParam1);
			uParam1->f_1[iVar12] = 1;
			iVar12 = 9;
		}
		iVar12++;
	}
}

void func_107(int iParam0, var uParam1)
{
	uParam1->f_276 = iParam0;
}

void func_108(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_85[iParam0] = iParam1;
}

void func_109(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_205[iParam0] = uParam1;
}

void func_110(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_155[iParam0] = uParam1;
}

void func_111(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_135[iParam0] = uParam1;
}

void func_112(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_125[iParam0] = iParam1;
}

void func_113(int iParam0, float fParam1, var uParam2)
{
	uParam2->f_115[iParam0] = fParam1;
}

void func_114(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_95[iParam0] = uParam1;
}

void func_115(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_105[iParam0] = uParam1;
}

void func_116(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_215[iParam0] = uParam1;
}

void func_117(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_165[iParam0] = iParam1;
}

void func_118(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_235[iParam0] = uParam1;
}

void func_119(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_175[iParam0] = iParam1;
}

void func_120(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_225[iParam0] = uParam1;
}

void func_121(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_185[iParam0] = iParam1;
}

void func_122(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_195[iParam0] = uParam1;
}

void func_123(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_145[iParam0] = uParam1;
}

void func_124(int iParam0, char* sParam1, char* sParam2, var uParam3)
{
	StringCopy(&(uParam3->f_11[iParam0 /*4*/]), sParam1, 16);
	StringCopy(&(uParam3->f_48[iParam0 /*4*/]), sParam2, 16);
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return 16;
		
		case joaat("weapon_combatpistol"):
			return 16;
		
		case joaat("weapon_appistol"):
			return 36;
		
		case -1075685676:
			return 16;
		
		case joaat("weapon_microsmg"):
			return 30;
		
		case joaat("weapon_smg"):
			return 60;
		
		case 2024373456:
			return 60;
		
		case joaat("weapon_assaultrifle"):
			return 60;
		
		case joaat("weapon_carbinerifle"):
			return 60;
		
		case joaat("weapon_advancedrifle"):
			return 60;
		
		case 961495388:
			return 60;
		
		case -86904375:
			return 60;
		
		case joaat("weapon_mg"):
			return 100;
		
		case joaat("weapon_combatmg"):
			return 200;
		
		case -608341376:
			return 200;
		
		case joaat("weapon_assaultshotgun"):
			return 32;
		
		case joaat("weapon_pistol50"):
			return 12;
		
		case joaat("weapon_assaultsmg"):
			return 60;
		
		case joaat("weapon_snspistol"):
			return 12;
		
		case joaat("weapon_specialcarbine"):
			return 60;
		
		case joaat("weapon_bullpuprifle"):
			return 60;
		
		case joaat("weapon_heavypistol"):
			return 36;
		
		case joaat("weapon_vintagepistol"):
			return 14;
		
		case joaat("weapon_gusenberg"):
			return 50;
		
		case joaat("weapon_marksmanrifle"):
			return 16;
		
		case joaat("weapon_heavyshotgun"):
			return 12;
		
		case joaat("weapon_combatpdw"):
			return 60;
		
		case joaat("weapon_compactrifle"):
			return 60;
		
		case joaat("weapon_machinepistol"):
			return 20;
		
		case -1121678507:
			return 30;
		
		default:
	}
	return 0;
	return 0;
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case joaat("component_pistol_clip_02"):
			return 1;
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return 1;
			break;
		
		case joaat("component_appistol_clip_02"):
			return 1;
			break;
		
		case joaat("component_microsmg_clip_02"):
			return 1;
			break;
		
		case joaat("component_smg_clip_02"):
			return 1;
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return 1;
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return 1;
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return 1;
			break;
		
		case joaat("component_mg_clip_02"):
			return 1;
			break;
		
		case joaat("component_combatmg_clip_02"):
			return 1;
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return 1;
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return 1;
			break;
		
		case joaat("component_pistol50_clip_02"):
			return 1;
			break;
		
		case -507117574:
			return 1;
			break;
		
		case 1048471894:
			return 1;
			break;
		
		case 1824470811:
			return 1;
			break;
		
		case joaat("component_specialcarbine_clip_02"):
			return 1;
			break;
		
		case joaat("component_bullpuprifle_clip_02"):
			return 1;
			break;
		
		case joaat("component_heavypistol_clip_02"):
			return 1;
			break;
		
		case joaat("component_snspistol_clip_02"):
			return 1;
			break;
		
		case joaat("component_vintagepistol_clip_02"):
			return 1;
			break;
		
		case joaat("component_gusenberg_clip_02"):
			return 1;
			break;
		
		case joaat("component_heavyshotgun_clip_02"):
			return 1;
			break;
		
		case joaat("component_marksmanrifle_clip_02"):
			return 1;
			break;
		
		case joaat("component_combatpdw_clip_02"):
			return 1;
			break;
		
		case joaat("component_compactrifle_clip_02"):
			return 1;
			break;
		
		case joaat("component_machinepistol_clip_02"):
			return 1;
			break;
		
		case -785724817:
			return 1;
			break;
		
		case 1574296533:
			return 1;
			break;
		
		case 400507625:
			return 1;
			break;
		
		case 752418717:
			return 1;
			break;
		
		case 1591132456:
			return 1;
			break;
		
		case -1182573778:
			return 1;
			break;
		
		case -1820405577:
			return 1;
			break;
	}
	return 0;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_smg"):
			return 100;
		
		case joaat("weapon_assaultrifle"):
			return 100;
		
		case joaat("weapon_carbinerifle"):
			return 100;
		
		case 2024373456:
			return 100;
		
		case 961495388:
			return 100;
		
		case -86904375:
			return 100;
		
		case joaat("weapon_specialcarbine"):
			return 100;
		
		case joaat("weapon_heavyshotgun"):
			return 30;
		
		case joaat("weapon_combatpdw"):
			return 100;
		
		case joaat("weapon_compactrifle"):
			return 100;
		
		case joaat("weapon_machinepistol"):
			return 30;
		
		default:
	}
	return 0;
	return 0;
}

int func_128(int iParam0)
{
	switch (iParam0)
	{
		case joaat("component_assaultrifle_clip_03"):
			return 1;
			break;
		
		case joaat("component_carbinerifle_clip_03"):
			return 1;
			break;
		
		case joaat("component_combatpdw_clip_03"):
			return 1;
			break;
		
		case joaat("component_compactrifle_clip_03"):
			return 1;
			break;
		
		case joaat("component_heavyshotgun_clip_03"):
			return 1;
			break;
		
		case joaat("component_machinepistol_clip_03"):
			return 1;
			break;
		
		case joaat("component_smg_clip_03"):
			return 1;
			break;
		
		case joaat("component_specialcarbine_clip_03"):
			return 1;
			break;
	}
	return 0;
}

float func_129(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
		case -1075685676:
			return (SYSTEM::TO_FLOAT(func_34(250, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(251, iParam1, 0)));
		
		case joaat("weapon_combatpistol"):
			return (SYSTEM::TO_FLOAT(func_34(260, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(261, iParam1, 0)));
		
		case joaat("weapon_appistol"):
			return (SYSTEM::TO_FLOAT(func_34(280, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(281, iParam1, 0)));
		
		case joaat("weapon_microsmg"):
			return (SYSTEM::TO_FLOAT(func_34(290, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(291, iParam1, 0)));
		
		case joaat("weapon_smg"):
		case 2024373456:
			return (SYSTEM::TO_FLOAT(func_34(300, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(301, iParam1, 0)));
		
		case joaat("weapon_assaultrifle"):
		case 961495388:
			return (SYSTEM::TO_FLOAT(func_34(320, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(321, iParam1, 0)));
		
		case joaat("weapon_carbinerifle"):
		case -86904375:
			return (SYSTEM::TO_FLOAT(func_34(329, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(330, iParam1, 0)));
		
		case joaat("weapon_advancedrifle"):
			return (SYSTEM::TO_FLOAT(func_34(338, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(339, iParam1, 0)));
		
		case joaat("weapon_mg"):
			return (SYSTEM::TO_FLOAT(func_34(347, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(348, iParam1, 0)));
		
		case joaat("weapon_combatmg"):
		case -608341376:
			return (SYSTEM::TO_FLOAT(func_34(356, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(357, iParam1, 0)));
		
		case joaat("weapon_pumpshotgun"):
			return (SYSTEM::TO_FLOAT(func_34(374, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(375, iParam1, 0)));
		
		case joaat("weapon_sawnoffshotgun"):
			return (SYSTEM::TO_FLOAT(func_34(383, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(384, iParam1, 0)));
		
		case joaat("weapon_assaultshotgun"):
			return (SYSTEM::TO_FLOAT(func_34(402, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(403, iParam1, 0)));
		
		case joaat("weapon_sniperrifle"):
		case 177293209:
			return (SYSTEM::TO_FLOAT(func_34(421, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(422, iParam1, 0)));
		
		case joaat("weapon_heavysniper"):
			return (SYSTEM::TO_FLOAT(func_34(430, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(431, iParam1, 0)));
		
		case joaat("weapon_grenadelauncher"):
			return (SYSTEM::TO_FLOAT(func_34(441, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(442, iParam1, 0)));
		
		case joaat("weapon_rpg"):
			return (SYSTEM::TO_FLOAT(func_34(448, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(449, iParam1, 0)));
		
		case joaat("weapon_minigun"):
			return (SYSTEM::TO_FLOAT(func_34(455, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(456, iParam1, 0)));
		
		case joaat("weapon_grenade"):
			return (SYSTEM::TO_FLOAT(func_34(464, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(465, iParam1, 0)));
		
		case joaat("weapon_smokegrenade"):
			return (SYSTEM::TO_FLOAT(func_34(472, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(473, iParam1, 0)));
		
		case joaat("weapon_stickybomb"):
			return (SYSTEM::TO_FLOAT(func_34(481, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(482, iParam1, 0)));
		
		case joaat("weapon_molotov"):
			return (SYSTEM::TO_FLOAT(func_34(489, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(490, iParam1, 0)));
		
		case joaat("weapon_stungun"):
			return (SYSTEM::TO_FLOAT(func_34(411, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(412, iParam1, 0)));
		
		case joaat("weapon_knife"):
			return (SYSTEM::TO_FLOAT(func_34(193, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(195, iParam1, 0)));
		
		case joaat("weapon_nightstick"):
			return (SYSTEM::TO_FLOAT(func_34(201, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(203, iParam1, 0)));
		
		case joaat("weapon_hammer"):
			return (SYSTEM::TO_FLOAT(func_34(229, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(231, iParam1, 0)));
		
		case joaat("weapon_bat"):
			return (SYSTEM::TO_FLOAT(func_34(236, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(238, iParam1, 0)));
		
		case joaat("weapon_crowbar"):
			return (SYSTEM::TO_FLOAT(func_34(208, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(210, iParam1, 0)));
		
		case joaat("weapon_golfclub"):
			return (SYSTEM::TO_FLOAT(func_34(243, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(245, iParam1, 0)));
		
		case joaat("weapon_pistol50"):
			return (SYSTEM::TO_FLOAT(func_34(270, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(271, iParam1, 0)));
		
		case joaat("weapon_assaultsmg"):
			return (SYSTEM::TO_FLOAT(func_34(310, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(311, iParam1, 0)));
		
		case joaat("weapon_bullpupshotgun"):
			return (SYSTEM::TO_FLOAT(func_34(393, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(394, iParam1, 0)));
		
		case -572349828:
			return (SYSTEM::TO_FLOAT(func_34(365, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(366, iParam1, 0)));
		
		case 392730790:
			return (SYSTEM::TO_FLOAT(func_34(320, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(321, iParam1, 0)));
		
		case -947031628:
			return (SYSTEM::TO_FLOAT(func_34(430, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(431, iParam1, 0)));
		
		case -1887867191:
			return (SYSTEM::TO_FLOAT(func_34(320, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(321, iParam1, 0)));
		
		case joaat("weapon_bottle"):
			return (SYSTEM::TO_FLOAT(func_34(1729, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(1730, iParam1, 0)));
		
		case joaat("weapon_snspistol"):
			return (SYSTEM::TO_FLOAT(func_34(1739, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(1740, iParam1, 0)));
		
		case joaat("weapon_specialcarbine"):
			return (SYSTEM::TO_FLOAT(func_34(8427, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8428, iParam1, 0)));
		
		case joaat("weapon_bullpuprifle"):
			return (SYSTEM::TO_FLOAT(func_34(8437, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8438, iParam1, 0)));
		
		case joaat("weapon_heavypistol"):
			return (SYSTEM::TO_FLOAT(func_34(8417, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8418, iParam1, 0)));
		
		case joaat("weapon_dagger"):
			return (SYSTEM::TO_FLOAT(func_34(8720, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8721, iParam1, 0)));
		
		case joaat("weapon_vintagepistol"):
			return (SYSTEM::TO_FLOAT(func_34(8730, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8731, iParam1, 0)));
		
		case joaat("weapon_gusenberg"):
			return (SYSTEM::TO_FLOAT(func_34(8447, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8448, iParam1, 0)));
		
		case joaat("weapon_musket"):
			return (SYSTEM::TO_FLOAT(func_34(8750, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8751, iParam1, 0)));
		
		case joaat("weapon_firework"):
			return (SYSTEM::TO_FLOAT(func_34(8740, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8741, iParam1, 0)));
		
		case joaat("weapon_heavyshotgun"):
			return (SYSTEM::TO_FLOAT(func_34(8828, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8829, iParam1, 0)));
		
		case joaat("weapon_marksmanrifle"):
			return (SYSTEM::TO_FLOAT(func_34(8838, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8839, iParam1, 0)));
		
		case joaat("weapon_hominglauncher"):
			return (SYSTEM::TO_FLOAT(func_34(8864, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8865, iParam1, 0)));
		
		case joaat("weapon_proxmine"):
			return (SYSTEM::TO_FLOAT(func_34(8856, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8857, iParam1, 0)));
		
		case joaat("weapon_combatpdw"):
			return (SYSTEM::TO_FLOAT(func_34(8872, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8873, iParam1, 0)));
		
		case joaat("weapon_marksmanpistol"):
			return (SYSTEM::TO_FLOAT(func_34(8889, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8890, iParam1, 0)));
		
		case joaat("weapon_knuckle"):
			return (SYSTEM::TO_FLOAT(func_34(8882, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8883, iParam1, 0)));
		
		case joaat("weapon_machete"):
			return (SYSTEM::TO_FLOAT(func_34(8899, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8900, iParam1, 0)));
		
		case joaat("weapon_machinepistol"):
			return (SYSTEM::TO_FLOAT(func_34(8907, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8908, iParam1, 0)));
		
		case joaat("weapon_flashlight"):
			return (SYSTEM::TO_FLOAT(func_34(8945, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8946, iParam1, 0)));
		
		case joaat("weapon_switchblade"):
			return (SYSTEM::TO_FLOAT(func_34(8973, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8974, iParam1, 0)));
		
		case joaat("weapon_revolver"):
			return (SYSTEM::TO_FLOAT(func_34(8963, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8964, iParam1, 0)));
		
		case joaat("weapon_dbshotgun"):
			return (SYSTEM::TO_FLOAT(func_34(8935, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8936, iParam1, 0)));
		
		case joaat("weapon_compactrifle"):
			return (SYSTEM::TO_FLOAT(func_34(8925, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8926, iParam1, 0)));
		
		case joaat("weapon_hatchet"):
			return (SYSTEM::TO_FLOAT(func_34(8848, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(8849, iParam1, 0)));
		
		case 317205821:
			return (SYSTEM::TO_FLOAT(func_34(9014, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9015, iParam1, 0)));
		
		case -853065399:
			return (SYSTEM::TO_FLOAT(func_34(9024, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9025, iParam1, 0)));
		
		case 125959754:
			return (SYSTEM::TO_FLOAT(func_34(9030, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9031, iParam1, 0)));
		
		case -1121678507:
			return (SYSTEM::TO_FLOAT(func_34(9040, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9041, iParam1, 0)));
		
		case -1169823560:
			return (SYSTEM::TO_FLOAT(func_34(9050, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9051, iParam1, 0)));
		
		case -1810795771:
			return (SYSTEM::TO_FLOAT(func_34(9058, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9059, iParam1, 0)));
		
		case 419712736:
			return (SYSTEM::TO_FLOAT(func_34(222, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(224, iParam1, 0)));
		
		case -2066285827:
			return (SYSTEM::TO_FLOAT(func_34(9522, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9523, iParam1, 0)));
		
		case 1785463520:
			return (SYSTEM::TO_FLOAT(func_34(9542, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9543, iParam1, 0)));
		
		case 1432025498:
			return (SYSTEM::TO_FLOAT(func_34(9532, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9533, iParam1, 0)));
		
		case -879347409:
			return (SYSTEM::TO_FLOAT(func_34(9552, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9553, iParam1, 0)));
		
		case -2009644972:
			return (SYSTEM::TO_FLOAT(func_34(9572, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9573, iParam1, 0)));
		
		case -1768145561:
			return (SYSTEM::TO_FLOAT(func_34(9582, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9583, iParam1, 0)));
		
		case -1746263880:
			return (SYSTEM::TO_FLOAT(func_34(9562, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9563, iParam1, 0)));
		
		case 940833800:
			return (SYSTEM::TO_FLOAT(func_34(9785, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9786, iParam1, 0)));
		
		case -1355376991:
			return (SYSTEM::TO_FLOAT(func_34(9942, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9943, iParam1, 0)));
		
		case 1198256469:
			return (SYSTEM::TO_FLOAT(func_34(9952, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9953, iParam1, 0)));
		
		case -1238556825:
			return (SYSTEM::TO_FLOAT(func_34(9962, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9963, iParam1, 0)));
		
		default:
	}
	return 0f;
}

int func_130(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return func_34(254, iParam1, 0);
		
		case joaat("weapon_combatpistol"):
			return func_34(264, iParam1, 0);
		
		case joaat("weapon_appistol"):
			return func_34(284, iParam1, 0);
		
		case joaat("weapon_microsmg"):
			return func_34(294, iParam1, 0);
		
		case joaat("weapon_smg"):
			return func_34(304, iParam1, 0);
		
		case joaat("weapon_assaultrifle"):
			return func_34(324, iParam1, 0);
		
		case joaat("weapon_carbinerifle"):
			return func_34(333, iParam1, 0);
		
		case joaat("weapon_advancedrifle"):
			return func_34(342, iParam1, 0);
		
		case joaat("weapon_mg"):
			return func_34(351, iParam1, 0);
		
		case joaat("weapon_combatmg"):
			return func_34(360, iParam1, 0);
		
		case joaat("weapon_pumpshotgun"):
			return func_34(378, iParam1, 0);
		
		case joaat("weapon_sawnoffshotgun"):
			return func_34(387, iParam1, 0);
		
		case joaat("weapon_assaultshotgun"):
			return func_34(406, iParam1, 0);
		
		case joaat("weapon_sniperrifle"):
			return func_34(425, iParam1, 0);
		
		case joaat("weapon_heavysniper"):
			return func_34(434, iParam1, 0);
		
		case joaat("weapon_minigun"):
			return func_34(459, iParam1, 0);
		
		case joaat("weapon_pistol50"):
			return func_34(274, iParam1, 0);
		
		case joaat("weapon_assaultsmg"):
			return func_34(314, iParam1, 0);
		
		case -947031628:
			return func_34(434, iParam1, 0);
		
		case joaat("weapon_bullpupshotgun"):
			return func_34(397, iParam1, 0);
		
		case -572349828:
			return func_34(369, iParam1, 0);
		
		case 392730790:
			return func_34(324, iParam1, 0);
		
		case -1887867191:
			return func_34(324, iParam1, 0);
		
		case -837150131:
			return func_34(324, iParam1, 0);
		
		case joaat("weapon_snspistol"):
			return func_34(1743, iParam1, 0);
		
		case joaat("weapon_specialcarbine"):
			return func_34(8431, iParam1, 0);
		
		case joaat("weapon_bullpuprifle"):
			return func_34(8441, iParam1, 0);
		
		case joaat("weapon_heavypistol"):
			return func_34(8421, iParam1, 0);
		
		case joaat("weapon_vintagepistol"):
			return func_34(8734, iParam1, 0);
		
		case joaat("weapon_gusenberg"):
			return func_34(8451, iParam1, 0);
		
		case joaat("weapon_musket"):
			return func_34(8754, iParam1, 0);
		
		case joaat("weapon_firework"):
			return func_34(8744, iParam1, 0);
		
		case joaat("weapon_heavyshotgun"):
			return func_34(8832, iParam1, 0);
		
		case joaat("weapon_marksmanrifle"):
			return func_34(8842, iParam1, 0);
		
		case joaat("weapon_combatpdw"):
			return func_34(8876, iParam1, 0);
		
		case joaat("weapon_marksmanpistol"):
			return func_34(8893, iParam1, 0);
		
		case joaat("weapon_machinepistol"):
			return func_34(8911, iParam1, 0);
		
		case joaat("weapon_revolver"):
			return func_34(8967, iParam1, 0);
		
		case joaat("weapon_dbshotgun"):
			return func_34(8939, iParam1, 0);
		
		case joaat("weapon_compactrifle"):
			return func_34(8929, iParam1, 0);
		
		case 317205821:
			return func_34(9018, iParam1, 0);
		
		case -1121678507:
			return func_34(9044, iParam1, 0);
		
		case -1075685676:
			return func_34(254, iParam1, 0);
		
		case 2024373456:
			return func_34(304, iParam1, 0);
		
		case 177293209:
			return func_34(434, iParam1, 0);
		
		case -608341376:
			return func_34(360, iParam1, 0);
		
		case 961495388:
			return func_34(324, iParam1, 0);
		
		case -86904375:
			return func_34(333, iParam1, 0);
		
		case -2066285827:
			return func_34(9526, iParam1, 0);
		
		case 1785463520:
			return func_34(9546, iParam1, 0);
		
		case 1432025498:
			return func_34(9536, iParam1, 0);
		
		case -879347409:
			return func_34(9556, iParam1, 0);
		
		case -2009644972:
			return func_34(9576, iParam1, 0);
		
		case -1768145561:
			return func_34(9586, iParam1, 0);
		
		case -1746263880:
			return func_34(9566, iParam1, 0);
		
		case -1355376991:
			return func_34(9946, iParam1, 0);
		
		case 1198256469:
			return func_34(9956, iParam1, 0);
		
		case -1238556825:
			return func_34(9966, iParam1, 0);
		
		default:
	}
	return 0;
}

int func_131(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return func_34(251, iParam1, 0);
		
		case joaat("weapon_combatpistol"):
			return func_34(261, iParam1, 0);
		
		case joaat("weapon_appistol"):
			return func_34(281, iParam1, 0);
		
		case joaat("weapon_microsmg"):
			return func_34(291, iParam1, 0);
		
		case joaat("weapon_smg"):
			return func_34(301, iParam1, 0);
		
		case joaat("weapon_assaultrifle"):
			return func_34(321, iParam1, 0);
		
		case joaat("weapon_carbinerifle"):
			return func_34(330, iParam1, 0);
		
		case joaat("weapon_advancedrifle"):
			return func_34(339, iParam1, 0);
		
		case joaat("weapon_mg"):
			return func_34(348, iParam1, 0);
		
		case joaat("weapon_combatmg"):
			return func_34(357, iParam1, 0);
		
		case joaat("weapon_pumpshotgun"):
			return func_34(375, iParam1, 0);
		
		case joaat("weapon_sawnoffshotgun"):
			return func_34(384, iParam1, 0);
		
		case joaat("weapon_assaultshotgun"):
			return func_34(403, iParam1, 0);
		
		case joaat("weapon_sniperrifle"):
			return func_34(422, iParam1, 0);
		
		case joaat("weapon_heavysniper"):
			return func_34(431, iParam1, 0);
		
		case joaat("weapon_grenadelauncher"):
			return func_34(442, iParam1, 0);
		
		case joaat("weapon_rpg"):
			return func_34(449, iParam1, 0);
		
		case joaat("weapon_minigun"):
			return func_34(456, iParam1, 0);
		
		case joaat("weapon_grenade"):
			return func_34(465, iParam1, 0);
		
		case joaat("weapon_smokegrenade"):
			return func_34(473, iParam1, 0);
		
		case joaat("weapon_stickybomb"):
			return func_34(482, iParam1, 0);
		
		case joaat("weapon_molotov"):
			return func_34(490, iParam1, 0);
		
		case joaat("weapon_stungun"):
			return func_34(412, iParam1, 0);
		
		case joaat("weapon_knife"):
			return func_34(195, iParam1, 0);
		
		case joaat("weapon_nightstick"):
			return func_34(203, iParam1, 0);
		
		case joaat("weapon_hammer"):
			return func_34(231, iParam1, 0);
		
		case joaat("weapon_bat"):
			return func_34(238, iParam1, 0);
		
		case joaat("weapon_crowbar"):
			return func_34(210, iParam1, 0);
		
		case joaat("weapon_golfclub"):
			return func_34(245, iParam1, 0);
		
		case joaat("weapon_pistol50"):
			return func_34(271, iParam1, 0);
		
		case joaat("weapon_assaultsmg"):
			return func_34(311, iParam1, 0);
		
		case -947031628:
			return func_34(431, iParam1, 0);
		
		case joaat("weapon_bullpupshotgun"):
			return func_34(394, iParam1, 0);
		
		case -572349828:
			return func_34(366, iParam1, 0);
		
		case 392730790:
			return func_34(321, iParam1, 0);
		
		case -1887867191:
			return func_34(321, iParam1, 0);
		
		case -837150131:
			return func_34(321, iParam1, 0);
		
		case joaat("weapon_bottle"):
			return func_34(1730, iParam1, 0);
		
		case joaat("weapon_snspistol"):
			return func_34(1740, iParam1, 0);
		
		case joaat("weapon_specialcarbine"):
			return func_34(8428, iParam1, 0);
		
		case joaat("weapon_bullpuprifle"):
			return func_34(8438, iParam1, 0);
		
		case joaat("weapon_heavypistol"):
			return func_34(8418, iParam1, 0);
		
		case joaat("weapon_dagger"):
			return func_34(8721, iParam1, 0);
		
		case joaat("weapon_vintagepistol"):
			return func_34(8731, iParam1, 0);
		
		case joaat("weapon_gusenberg"):
			return func_34(8448, iParam1, 0);
		
		case joaat("weapon_musket"):
			return func_34(8751, iParam1, 0);
		
		case joaat("weapon_firework"):
			return func_34(8741, iParam1, 0);
		
		case joaat("weapon_heavyshotgun"):
			return func_34(8829, iParam1, 0);
		
		case joaat("weapon_marksmanrifle"):
			return func_34(8839, iParam1, 0);
		
		case joaat("weapon_proxmine"):
			return func_34(8857, iParam1, 0);
		
		case joaat("weapon_hominglauncher"):
			return func_34(8865, iParam1, 0);
		
		case joaat("weapon_combatpdw"):
			return func_34(8873, iParam1, 0);
		
		case joaat("weapon_marksmanpistol"):
			return func_34(8890, iParam1, 0);
		
		case joaat("weapon_knuckle"):
			return func_34(8883, iParam1, 0);
		
		case joaat("weapon_machete"):
			return func_34(8900, iParam1, 0);
		
		case joaat("weapon_machinepistol"):
			return func_34(8908, iParam1, 0);
		
		case joaat("weapon_flashlight"):
			return func_34(8946, iParam1, 0);
		
		case joaat("weapon_switchblade"):
			return func_34(8974, iParam1, 0);
		
		case joaat("weapon_revolver"):
			return func_34(8964, iParam1, 0);
		
		case joaat("weapon_dbshotgun"):
			return func_34(8936, iParam1, 0);
		
		case joaat("weapon_compactrifle"):
			return func_34(8926, iParam1, 0);
		
		case joaat("weapon_hatchet"):
			return func_34(8849, iParam1, 0);
		
		case 317205821:
			return func_34(9015, iParam1, 0);
		
		case -853065399:
			return func_34(9025, iParam1, 0);
		
		case 125959754:
			return func_34(9031, iParam1, 0);
		
		case -1121678507:
			return func_34(9041, iParam1, 0);
		
		case -1169823560:
			return func_34(9051, iParam1, 0);
		
		case -1810795771:
			return func_34(9059, iParam1, 0);
		
		case 419712736:
			return func_34(224, iParam1, 0);
		
		case -1075685676:
			return func_34(251, iParam1, 0);
		
		case 2024373456:
			return func_34(301, iParam1, 0);
		
		case 177293209:
			return func_34(431, iParam1, 0);
		
		case -608341376:
			return func_34(357, iParam1, 0);
		
		case 961495388:
			return func_34(321, iParam1, 0);
		
		case -86904375:
			return func_34(330, iParam1, 0);
		
		case -2066285827:
			return func_34(9523, iParam1, 0);
		
		case 1785463520:
			return func_34(9543, iParam1, 0);
		
		case 1432025498:
			return func_34(9533, iParam1, 0);
		
		case -879347409:
			return func_34(9553, iParam1, 0);
		
		case -2009644972:
			return func_34(9573, iParam1, 0);
		
		case -1768145561:
			return func_34(9583, iParam1, 0);
		
		case -1746263880:
			return func_34(9563, iParam1, 0);
		
		case 940833800:
			return func_34(9786, iParam1, 0);
		
		case -1355376991:
			return func_34(9943, iParam1, 0);
		
		case 1198256469:
			return func_34(9953, iParam1, 0);
		
		case -1238556825:
			return func_34(9963, iParam1, 0);
		
		default:
	}
	return 0;
}

int func_132(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return func_34(250, iParam1, 0);
		
		case joaat("weapon_combatpistol"):
			return func_34(260, iParam1, 0);
		
		case joaat("weapon_appistol"):
			return func_34(280, iParam1, 0);
		
		case joaat("weapon_microsmg"):
			return func_34(290, iParam1, 0);
		
		case joaat("weapon_smg"):
			return func_34(300, iParam1, 0);
		
		case joaat("weapon_assaultrifle"):
			return func_34(320, iParam1, 0);
		
		case joaat("weapon_carbinerifle"):
			return func_34(329, iParam1, 0);
		
		case joaat("weapon_advancedrifle"):
			return func_34(338, iParam1, 0);
		
		case joaat("weapon_mg"):
			return func_34(347, iParam1, 0);
		
		case joaat("weapon_combatmg"):
			return func_34(356, iParam1, 0);
		
		case joaat("weapon_pumpshotgun"):
			return func_34(374, iParam1, 0);
		
		case joaat("weapon_sawnoffshotgun"):
			return func_34(383, iParam1, 0);
		
		case joaat("weapon_assaultshotgun"):
			return func_34(402, iParam1, 0);
		
		case joaat("weapon_sniperrifle"):
			return func_34(421, iParam1, 0);
		
		case joaat("weapon_heavysniper"):
			return func_34(430, iParam1, 0);
		
		case joaat("weapon_grenadelauncher"):
			return func_34(441, iParam1, 0);
		
		case joaat("weapon_rpg"):
			return func_34(448, iParam1, 0);
		
		case joaat("weapon_minigun"):
			return func_34(455, iParam1, 0);
		
		case joaat("weapon_grenade"):
			return func_34(464, iParam1, 0);
		
		case joaat("weapon_smokegrenade"):
			return func_34(472, iParam1, 0);
		
		case joaat("weapon_stickybomb"):
			return func_34(481, iParam1, 0);
		
		case joaat("weapon_molotov"):
			return func_34(489, iParam1, 0);
		
		case joaat("weapon_stungun"):
			return func_34(411, iParam1, 0);
		
		case joaat("weapon_knife"):
			return func_34(193, iParam1, 0);
		
		case joaat("weapon_nightstick"):
			return func_34(201, iParam1, 0);
		
		case joaat("weapon_hammer"):
			return func_34(229, iParam1, 0);
		
		case joaat("weapon_bat"):
			return func_34(236, iParam1, 0);
		
		case joaat("weapon_crowbar"):
			return func_34(208, iParam1, 0);
		
		case joaat("weapon_golfclub"):
			return func_34(243, iParam1, 0);
		
		case joaat("weapon_pistol50"):
			return func_34(270, iParam1, 0);
		
		case joaat("weapon_assaultsmg"):
			return func_34(310, iParam1, 0);
		
		case -947031628:
			return func_34(430, iParam1, 0);
		
		case joaat("weapon_bullpupshotgun"):
			return func_34(393, iParam1, 0);
		
		case -572349828:
			return func_34(365, iParam1, 0);
		
		case 392730790:
			return func_34(320, iParam1, 0);
		
		case -1887867191:
			return func_34(320, iParam1, 0);
		
		case -837150131:
			return func_34(320, iParam1, 0);
		
		case joaat("weapon_bottle"):
			return func_34(1729, iParam1, 0);
		
		case joaat("weapon_snspistol"):
			return func_34(1739, iParam1, 0);
		
		case joaat("weapon_specialcarbine"):
			return func_34(8427, iParam1, 0);
		
		case joaat("weapon_bullpuprifle"):
			return func_34(8437, iParam1, 0);
		
		case joaat("weapon_heavypistol"):
			return func_34(8417, iParam1, 0);
		
		case joaat("weapon_dagger"):
			return func_34(8720, iParam1, 0);
		
		case joaat("weapon_vintagepistol"):
			return func_34(8730, iParam1, 0);
		
		case joaat("weapon_gusenberg"):
			return func_34(8447, iParam1, 0);
		
		case joaat("weapon_musket"):
			return func_34(8750, iParam1, 0);
		
		case joaat("weapon_firework"):
			return func_34(8740, iParam1, 0);
		
		case joaat("weapon_heavyshotgun"):
			return func_34(8828, iParam1, 0);
		
		case joaat("weapon_marksmanrifle"):
			return func_34(8838, iParam1, 0);
		
		case joaat("weapon_proxmine"):
			return func_34(8856, iParam1, 0);
		
		case joaat("weapon_hominglauncher"):
			return func_34(8864, iParam1, 0);
		
		case joaat("weapon_combatpdw"):
			return func_34(8872, iParam1, 0);
		
		case joaat("weapon_marksmanpistol"):
			return func_34(8889, iParam1, 0);
		
		case joaat("weapon_knuckle"):
			return func_34(8882, iParam1, 0);
		
		case joaat("weapon_machete"):
			return func_34(8899, iParam1, 0);
		
		case joaat("weapon_machinepistol"):
			return func_34(8907, iParam1, 0);
		
		case joaat("weapon_flashlight"):
			return func_34(8945, iParam1, 0);
		
		case joaat("weapon_switchblade"):
			return func_34(8973, iParam1, 0);
		
		case joaat("weapon_revolver"):
			return func_34(8963, iParam1, 0);
		
		case joaat("weapon_dbshotgun"):
			return func_34(8935, iParam1, 0);
		
		case joaat("weapon_compactrifle"):
			return func_34(8925, iParam1, 0);
		
		case joaat("weapon_hatchet"):
			return func_34(8848, iParam1, 0);
		
		case 317205821:
			return func_34(9014, iParam1, 0);
		
		case -853065399:
			return func_34(9024, iParam1, 0);
		
		case 125959754:
			return func_34(9030, iParam1, 0);
		
		case -1121678507:
			return func_34(9040, iParam1, 0);
		
		case -1169823560:
			return func_34(9050, iParam1, 0);
		
		case -1810795771:
			return func_34(9058, iParam1, 0);
		
		case 419712736:
			return func_34(222, iParam1, 0);
		
		case -1075685676:
			return func_34(250, iParam1, 0);
		
		case 2024373456:
			return func_34(300, iParam1, 0);
		
		case 177293209:
			return func_34(430, iParam1, 0);
		
		case -608341376:
			return func_34(356, iParam1, 0);
		
		case 961495388:
			return func_34(320, iParam1, 0);
		
		case -86904375:
			return func_34(329, iParam1, 0);
		
		case -2066285827:
			return func_34(9522, iParam1, 0);
		
		case 1785463520:
			return func_34(9542, iParam1, 0);
		
		case 1432025498:
			return func_34(9532, iParam1, 0);
		
		case -879347409:
			return func_34(9552, iParam1, 0);
		
		case -2009644972:
			return func_34(9572, iParam1, 0);
		
		case -1768145561:
			return func_34(9582, iParam1, 0);
		
		case -1746263880:
			return func_34(9562, iParam1, 0);
		
		case 940833800:
			return func_34(9785, iParam1, 0);
		
		case -1355376991:
			return func_34(9942, iParam1, 0);
		
		case 1198256469:
			return func_34(9952, iParam1, 0);
		
		case -1238556825:
			return func_34(9962, iParam1, 0);
		
		default:
	}
	return 0;
}

float func_133(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			iVar0 = 252;
			iVar1 = 253;
			break;
		
		case -1075685676:
			iVar0 = 252;
			iVar1 = 253;
			break;
		
		case joaat("weapon_combatpistol"):
			iVar0 = 262;
			iVar1 = 263;
			break;
		
		case joaat("weapon_appistol"):
			iVar0 = 282;
			iVar1 = 283;
			break;
		
		case joaat("weapon_microsmg"):
			iVar0 = 292;
			iVar1 = 293;
			break;
		
		case joaat("weapon_smg"):
			iVar0 = 302;
			iVar1 = 303;
			break;
		
		case 2024373456:
			iVar0 = 302;
			iVar1 = 303;
			break;
		
		case joaat("weapon_assaultrifle"):
		case 961495388:
			iVar0 = 322;
			iVar1 = 323;
			break;
		
		case joaat("weapon_carbinerifle"):
		case -86904375:
			iVar0 = 331;
			iVar1 = 332;
			break;
		
		case joaat("weapon_specialcarbine"):
			iVar0 = 8429;
			iVar1 = 8430;
			break;
		
		case joaat("weapon_snspistol"):
			iVar0 = 1741;
			iVar1 = 1742;
			break;
		
		case joaat("weapon_advancedrifle"):
			iVar0 = 340;
			iVar1 = 341;
			break;
		
		case joaat("weapon_mg"):
			iVar0 = 349;
			iVar1 = 350;
			break;
		
		case joaat("weapon_combatmg"):
		case -608341376:
			iVar0 = 358;
			iVar1 = 359;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			iVar0 = 385;
			iVar1 = 386;
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar0 = 376;
			iVar1 = 377;
			break;
		
		case joaat("weapon_assaultshotgun"):
			iVar0 = 404;
			iVar1 = 405;
			break;
		
		case joaat("weapon_sniperrifle"):
			iVar0 = 423;
			iVar1 = 424;
			break;
		
		case joaat("weapon_heavysniper"):
		case 177293209:
			iVar0 = 432;
			iVar1 = 433;
			break;
		
		case joaat("weapon_grenadelauncher"):
			iVar0 = 443;
			iVar1 = 441;
			break;
		
		case joaat("weapon_minigun"):
			iVar0 = 457;
			iVar1 = 458;
			break;
		
		case joaat("weapon_rpg"):
			iVar0 = 450;
			iVar1 = 448;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			iVar0 = 395;
			iVar1 = 396;
			break;
		
		case joaat("weapon_assaultsmg"):
			iVar0 = 312;
			iVar1 = 313;
			break;
		
		case joaat("weapon_pistol50"):
			iVar0 = 272;
			iVar1 = 273;
			break;
		
		case joaat("weapon_heavypistol"):
			iVar0 = 8419;
			iVar1 = 8420;
			break;
		
		case joaat("weapon_bullpuprifle"):
			iVar0 = 8439;
			iVar1 = 8440;
			break;
		
		case joaat("weapon_gusenberg"):
			iVar0 = 8449;
			iVar1 = 8450;
			break;
		
		case joaat("weapon_vintagepistol"):
			iVar0 = 8732;
			iVar1 = 8733;
			break;
		
		case joaat("weapon_musket"):
			iVar0 = 8752;
			iVar1 = 8753;
			break;
		
		case joaat("weapon_firework"):
			iVar0 = 8742;
			iVar1 = 8743;
			break;
		
		case joaat("weapon_flaregun"):
			iVar0 = 8485;
			iVar1 = 8486;
			break;
		
		case joaat("weapon_heavyshotgun"):
			iVar0 = 8830;
			iVar1 = 8831;
			break;
		
		case joaat("weapon_marksmanrifle"):
			iVar0 = 8840;
			iVar1 = 8841;
			break;
		
		case joaat("weapon_hominglauncher"):
			iVar0 = 8866;
			iVar1 = 8864;
			break;
		
		case joaat("weapon_proxmine"):
			iVar0 = 8858;
			iVar1 = 8856;
			break;
		
		case joaat("weapon_combatpdw"):
			iVar0 = 8874;
			iVar1 = 8875;
			break;
		
		case joaat("weapon_marksmanpistol"):
			iVar0 = 8891;
			iVar1 = 8892;
			break;
		
		case joaat("weapon_machinepistol"):
			iVar0 = 8909;
			iVar1 = 8910;
			break;
		
		case joaat("weapon_compactrifle"):
			iVar0 = 8927;
			iVar1 = 8928;
			break;
		
		case joaat("weapon_dbshotgun"):
			iVar0 = 8937;
			iVar1 = 8938;
			break;
		
		case joaat("weapon_revolver"):
			iVar0 = 8965;
			iVar1 = 8966;
			break;
		
		case 317205821:
			iVar0 = 9016;
			iVar1 = 9017;
			break;
		
		case -1121678507:
			iVar0 = 9042;
			iVar1 = 9043;
			break;
		
		case 125959754:
			iVar0 = 9032;
			iVar1 = 9030;
			break;
		
		case -1746263880:
			iVar0 = 9564;
			iVar1 = 9565;
			break;
		
		case -2066285827:
			iVar1 = 9522;
			iVar0 = 9524;
			break;
		
		case 1785463520:
			iVar1 = 9542;
			iVar0 = 9544;
			break;
		
		case 1432025498:
			iVar1 = 9532;
			iVar0 = 9534;
			break;
		
		case -879347409:
			iVar1 = 9552;
			iVar0 = 9554;
			break;
		
		case -2009644972:
			iVar1 = 9572;
			iVar0 = 9574;
			break;
		
		case -1768145561:
			iVar1 = 9582;
			iVar0 = 9584;
			break;
		
		case 1198256469:
			iVar0 = 9954;
			iVar1 = 9955;
			break;
		
		case -1238556825:
			iVar0 = 9964;
			iVar1 = 9965;
			break;
		
		case -1355376991:
			iVar0 = 9944;
			iVar1 = 9945;
			break;
	}
	if ((func_135(iParam0) || iParam0 == joaat("weapon_flashlight")) || func_134(iParam0))
	{
	}
	else
	{
		fVar2 = SYSTEM::TO_FLOAT(func_34(iVar0, -1, 0));
		fVar3 = SYSTEM::TO_FLOAT(func_34(iVar1, -1, 0));
		if (fVar2 > 0f)
		{
			fVar4 = (fVar3 / fVar2);
			if (fVar4 > 1f)
			{
				fVar4 = 1f;
			}
			fVar4 = (fVar4 * 100f);
			iVar5 = SYSTEM::ROUND(fVar4);
			fVar4 = SYSTEM::TO_FLOAT(iVar5);
			return fVar4;
		}
	}
	return 0f;
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_molotov"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_grenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_proxmine"):
			return 1;
			break;
		
		case -1169823560:
			return 1;
			break;
	}
	return 0;
}

int func_135(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
		case joaat("weapon_bat"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_bottle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_hatchet"):
		case joaat("weapon_machete"):
		case joaat("weapon_switchblade"):
			return 1;
			break;
		
		case -853065399:
		case -1810795771:
		case 419712736:
			return 1;
			break;
		
		case 940833800:
			return 1;
	}
	return 0;
}

char* func_136(int iParam0, bool bParam1)
{
	struct<16> Var0;
	struct<16> Var1;
	struct<16> Var2;
	struct<16> Var3;
	
	if (func_138(iParam0) && !bParam1)
	{
		switch (iParam0)
		{
			case joaat("weapon_marksmanrifle"):
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), 1785463520, 0))
					{
						return "WCD_MK1_LOCK";
					}
				}
				return "WTDE2_MKRIFLE";
				break;
			
			case joaat("weapon_compactrifle"):
				return "WTDE2_CMPRIFLE";
				break;
			
			case 125959754:
				return "WTDE2_CMPGL";
				break;
			
			default:
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "";
			break;
		
		case joaat("weapon_unarmed"):
			return "";
			break;
		
		case joaat("weapon_pistol"):
			return "WT_PIST_DESC";
			break;
		
		case joaat("weapon_combatpistol"):
			return "WTD_PIST_CBT";
			break;
		
		case joaat("weapon_appistol"):
			return "WTD_PIST_AP";
			break;
		
		case joaat("weapon_smg"):
			return "WTD_SMG";
			break;
		
		case joaat("weapon_microsmg"):
			return "WTD_SMG_MCR";
			break;
		
		case joaat("weapon_assaultrifle"):
			return "WTD_RIFLE_ASL";
			break;
		
		case joaat("weapon_carbinerifle"):
			return "WTD_RIFLE_CBN";
			break;
		
		case joaat("weapon_advancedrifle"):
			return "WTD_RIFLE_ADV";
			break;
		
		case joaat("weapon_mg"):
			return "WTD_MG";
			break;
		
		case joaat("weapon_combatmg"):
			return "WTD_MG_CBT";
			break;
		
		case joaat("weapon_pumpshotgun"):
			return "WTD_SG_PMP";
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return "WTD_SG_SOF";
			break;
		
		case joaat("weapon_assaultshotgun"):
			return "WTD_SG_ASL";
			break;
		
		case joaat("weapon_heavysniper"):
			return "WTD_SNIP_HVY";
			break;
		
		case joaat("weapon_remotesniper"):
			return "WTD_SNIP_RMT";
			break;
		
		case joaat("weapon_sniperrifle"):
			return "WTD_SNIP_RIF";
			break;
		
		case joaat("weapon_grenadelauncher"):
			return "WTD_GL";
			break;
		
		case joaat("weapon_rpg"):
			return "WTD_RPG";
			break;
		
		case joaat("weapon_minigun"):
			return "WTD_MINIGUN";
			break;
		
		case joaat("weapon_grenade"):
			return "WTD_GNADE";
			break;
		
		case joaat("weapon_smokegrenade"):
			return "WTD_GNADE_SMK";
			break;
		
		case joaat("weapon_stickybomb"):
			return "WTD_GNADE_STK";
			break;
		
		case joaat("weapon_molotov"):
			return "WTD_MOLOTOV";
			break;
		
		case joaat("weapon_stungun"):
			return "WTD_STUN";
			break;
		
		case joaat("weapon_petrolcan"):
			return "WTD_PETROL";
			break;
		
		case joaat("weapon_digiscanner"):
			return "WTD_DIGI";
			break;
		
		case joaat("weapon_electric_fence"):
			return "WTD_ELCFEN";
			break;
		
		case joaat("vehicle_weapon_tank"):
			return "";
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			return "";
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			return "";
			break;
		
		case joaat("object"):
			return "";
			break;
		
		case joaat("gadget_parachute"):
			return "WTD_PARA";
			break;
		
		case 1742569970:
			return "";
			break;
		
		case -1474608608:
			return "";
			break;
		
		case 527765612:
			return "";
			break;
		
		case -165357558:
			return "";
			break;
		
		case -1372674932:
			return "";
			break;
		
		case joaat("weapon_knife"):
			return "WTD_KNIFE";
			break;
		
		case joaat("weapon_nightstick"):
			return "WTD_NGTSTK";
			break;
		
		case joaat("weapon_hammer"):
			return "WTD_HAMMER";
			break;
		
		case joaat("weapon_bat"):
			return "WTD_BAT";
			break;
		
		case joaat("weapon_crowbar"):
			return "WTD_CROWBAR";
			break;
		
		case joaat("weapon_golfclub"):
			return "WTD_GOLFCLUB";
			break;
		
		case joaat("weapon_hatchet"):
			return "WTD_DLC_HATCHET";
			break;
		
		case joaat("weapon_rammed_by_car"):
			return "";
			break;
		
		case joaat("weapon_run_over_by_car"):
			return "";
			break;
		
		case joaat("weapon_assaultsmg"):
			return "WTD_SMG_ASL";
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return "WTD_SG_BLP";
			break;
		
		case joaat("weapon_pistol50"):
			return "WTD_PIST_50";
			break;
		
		case joaat("weapon_vintagepistol"):
			return "WTD_VPISTOL";
			break;
		
		case joaat("weapon_dagger"):
			return "WTD_DAGGER";
			break;
		
		case joaat("weapon_proxmine"):
			return "WTD_PRXMINE";
			break;
		
		case joaat("weapon_hominglauncher"):
			return "WTD_HOMLNCH";
			break;
		
		case joaat("weapon_machete"):
			return "WTD_MACHETE";
			break;
		
		case joaat("weapon_machinepistol"):
			return "WTD_MCHPIST";
			break;
		
		case joaat("weapon_flashlight"):
			return "WTD_FLASHLIGHT";
			break;
		
		case joaat("weapon_dbshotgun"):
			return "WTD_DBSHGN";
			break;
		
		case joaat("weapon_compactrifle"):
			return "WTD_CMPRIFLE";
			break;
		
		case joaat("weapon_switchblade"):
			return "WTD_SWBLADE";
			break;
		
		case joaat("weapon_revolver"):
			return "WTD_REVOLVER";
			break;
		
		case -1746263880:
			if (func_137(2052114177) || bParam1)
			{
				return "WTD_REV_DA";
			}
			else if (NETWORK::_0x67A5589628E0CFF6())
			{
				return "WTD_REV_DA_2";
			}
			else
			{
				return "WTD_REV_DA_3";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), -1768145561, 0))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_28(iParam0, &Var0) != -1)
			{
				return func_27(&(Var0.f_15));
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), 1785463520, 0))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_28(iParam0, &Var1) != -1)
			{
				return func_27(&(Var1.f_15));
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), -2066285827, 0))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_28(iParam0, &Var2) != -1)
			{
				return func_27(&(Var2.f_15));
			}
			break;
		
		case -1355376991:
			return "WTD_RAYPISTOL";
			break;
		
		case 1198256469:
			return "WTD_RAYCARBINE";
			break;
		
		case -1238556825:
			return "WTD_RAYMINIGUN";
			break;
		
		default:
			if (func_28(iParam0, &Var3) != -1)
			{
				return func_27(&(Var3.f_15));
			}
			break;
	}
	return "WT_INVALID";
}

int func_137(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_138(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_139())
		{
			if ((iParam0 == joaat("weapon_marksmanrifle") || iParam0 == joaat("weapon_compactrifle")) || iParam0 == 125959754)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_139()
{
	return (func_141() || func_140());
}

int func_140()
{
	switch (unk_0x155467ACA0F55705())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_141()
{
	switch (unk_0x754615490A029508())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_142()
{
	return Global_1312745;
}

bool func_143(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1371947.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1371947.f_1048, iParam0);
}

void func_144()
{
	func_145(0, -1, -1, 0, 0);
}

void func_145(int iParam0, int iParam1, int iParam2, char* sParam3, bool bParam4)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_COLUMN_SCROLL");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam0);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		func_20("");
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(bParam4);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_146(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_148();
	iVar0 = 9;
	iVar1 = uParam0->f_277;
	if (uParam1->f_5 < iLocal_96)
	{
		iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
	}
	else
	{
		iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
	}
	iVar2 = uParam1->f_5 + 1;
	iVar3 = iLocal_96 + 1;
	func_145(0, iVar2, iVar3, "HUD_PAGE", 0);
}

int func_147(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = func_38(iVar0);
	iVar2 = func_30(iVar0);
	if ((PAD::IS_CONTROL_JUST_RELEASED(2, iParam0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, iParam0)) || func_6(iParam0, &(Global_1371947.f_1060), 1))
	{
		if (!MISC::IS_BIT_SET(Global_1371947.f_1049[iVar1], iVar2))
		{
			MISC::SET_BIT(&(Global_1371947.f_1049[iVar1]), iVar2);
			return 1;
		}
	}
	else if (MISC::IS_BIT_SET(Global_1371947.f_1049[iVar1], iVar2))
	{
		MISC::CLEAR_BIT(&(Global_1371947.f_1049[iVar1]), iVar2);
	}
	return 0;
}

void func_148()
{
	iLocal_97 = 0;
	iLocal_96 = 3;
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_hammer")))
	{
		iLocal_98[10] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[10] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_pistol50")))
	{
		iLocal_98[0] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[0] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_bullpupshotgun")))
	{
		iLocal_98[1] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[1] = -1;
	}
	if (func_105(1, 0))
	{
		if (WEAPON::IS_WEAPON_VALID(joaat("weapon_sawnoffshotgun")))
		{
			iLocal_98[2] = ((iLocal_97 / 9) + iLocal_96);
			iLocal_97++;
		}
		else
		{
			iLocal_98[2] = -1;
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_bottle")))
	{
		iLocal_98[3] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[3] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_snspistol")))
	{
		iLocal_98[4] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[4] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_gusenberg")))
	{
		iLocal_98[11] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[11] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_heavypistol")))
	{
		iLocal_98[7] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[7] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_specialcarbine")))
	{
		iLocal_98[5] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[5] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_bullpuprifle")))
	{
		iLocal_98[6] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[6] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_dagger")))
	{
		iLocal_98[8] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[8] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_vintagepistol")))
	{
		iLocal_98[9] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[9] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_firework")))
	{
		iLocal_98[14] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[14] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_musket")))
	{
		iLocal_98[13] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[13] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_heavyshotgun")))
	{
		iLocal_98[15] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[15] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_marksmanrifle")))
	{
		iLocal_98[16] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[16] = -1;
	}
	if (func_104() || Global_262145.f_19626)
	{
		if (WEAPON::IS_WEAPON_VALID(joaat("weapon_hatchet")))
		{
			iLocal_98[22] = ((iLocal_97 / 9) + iLocal_96);
			iLocal_97++;
		}
		else
		{
			iLocal_98[22] = -1;
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_hominglauncher")))
	{
		iLocal_98[18] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[18] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_proxmine")))
	{
		iLocal_98[17] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[17] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_flaregun")))
	{
		iLocal_98[12] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[12] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_combatpdw")))
	{
		iLocal_98[19] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[19] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_marksmanpistol")))
	{
		iLocal_98[20] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[20] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_knuckle")))
	{
		iLocal_98[21] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[21] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_machete")))
	{
		iLocal_98[23] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[23] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_machinepistol")))
	{
		iLocal_98[24] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[24] = -1;
	}
	if (Global_262145.f_11468 && WEAPON::IS_WEAPON_VALID(joaat("weapon_flashlight")))
	{
		iLocal_98[25] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[25] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_revolver")))
	{
		iLocal_98[26] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[26] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_switchblade")))
	{
		iLocal_98[27] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[27] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_dbshotgun")))
	{
		iLocal_98[28] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[28] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_compactrifle")))
	{
		iLocal_98[29] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[29] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(317205821))
	{
		iLocal_98[30] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[30] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-853065399))
	{
		iLocal_98[31] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[31] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(125959754))
	{
		iLocal_98[32] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[32] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-1121678507))
	{
		iLocal_98[33] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[33] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-1169823560))
	{
		iLocal_98[34] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[34] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-1810795771))
	{
		iLocal_98[35] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[35] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(419712736))
	{
		iLocal_98[36] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[36] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(961495388))
	{
		iLocal_98[37] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[37] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-86904375))
	{
		iLocal_98[38] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[38] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-608341376))
	{
		iLocal_98[39] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[39] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(177293209))
	{
		iLocal_98[40] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[40] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-1075685676))
	{
		iLocal_98[41] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[41] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(2024373456))
	{
		iLocal_98[42] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[42] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-2066285827))
	{
		iLocal_98[43] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[43] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(1785463520))
	{
		iLocal_98[44] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[44] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(1432025498))
	{
		iLocal_98[45] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[45] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-879347409))
	{
		iLocal_98[46] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[46] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-2009644972))
	{
		iLocal_98[47] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[47] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-1768145561))
	{
		iLocal_98[48] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[48] = -1;
	}
	if ((Global_262145.f_22802 && WEAPON::IS_WEAPON_VALID(-1746263880)) && (func_103() || Global_1688018))
	{
		iLocal_98[49] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[49] = -1;
	}
	if ((Global_262145.f_23501 && WEAPON::IS_WEAPON_VALID(940833800)) && func_99())
	{
		iLocal_98[50] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[50] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(1198256469) && Global_262145.f_25731)
	{
		iLocal_98[51] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[51] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-1238556825) && Global_262145.f_25730)
	{
		iLocal_98[52] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[52] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-1355376991) && (((func_17(25007, -1, -1) || func_17(25002, -1, -1)) || func_90(-1355376991, -1, 0)) || Global_262145.f_24740))
	{
		iLocal_98[53] = ((iLocal_97 / 9) + iLocal_96);
		iLocal_97++;
	}
	else
	{
		iLocal_98[53] = -1;
	}
	if (iLocal_97 == 0)
	{
		iLocal_96 = 2;
		iLocal_97 = 9;
	}
	else
	{
		iLocal_96 = (iLocal_96 + (iLocal_97 / 9));
		iLocal_97 = (iLocal_97 - (9 * (iLocal_97 / 9)));
		if (iLocal_97 == 0)
		{
			iLocal_96 = (iLocal_96 - 1);
			iLocal_97 = 9;
		}
	}
}

void func_149(int iParam0, var uParam1)
{
	uParam1->f_277 = iParam0;
}

void func_150()
{
	func_148();
	func_151();
	func_145(0, 1, iLocal_96 + 1, "HUD_PAGE", 0);
}

void func_151()
{
	func_152(1);
}

void func_152(bool bParam0)
{
	if (bParam0)
	{
		func_153(0, 3, 0, 2, 0, 0);
	}
	else
	{
		func_153(0, 2, 0, 2, 1, 0);
	}
}

void func_153(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("INIT_COLUMN_SCROLL");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam0);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(false);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam4);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(bParam5);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_154(var uParam0)
{
	uParam0->f_284 = 1;
}

void func_155(var uParam0)
{
	uParam0->f_283 = 1;
}

void func_156(var uParam0)
{
	func_157(uParam0);
	uParam0->f_281 = 1;
}

void func_157(var uParam0)
{
	*uParam0 = { Global_1370133 };
}

int func_158()
{
	return Global_25765;
}

