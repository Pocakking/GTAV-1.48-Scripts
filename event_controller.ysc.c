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
	float fLocal_47 = 0f;
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
	var uLocal_61 = 0;
	var uLocal_62 = 10;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 2;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 8;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
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
	sLocal_18 = "NULL";
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
	fLocal_47 = ((0.05f + 0.275f) - 0.01f);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_134();
		func_1();
	}
}

void func_1()//Position - 0xA5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		iVar2 = 0;
		while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
		{
			iVar7 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar2);
			switch (iVar7)
			{
				case 189:
					func_131();
					break;
				
				case 190:
					func_130();
					break;
				
				case 191:
					func_124(iVar2);
					break;
				
				case 192:
					func_123(iVar2);
					break;
				
				case 193:
					func_113(iVar2);
					break;
				
				case 211:
					func_3(iVar2);
					break;
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
	{
		iVar0 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar2);
		iLocal_96 = 1;
		switch (iVar0)
		{
			case 139:
				SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
					{
						if (func_2(iVar3))
						{
							Global_48745.f_1[iVar3] = iVar1;
							iVar3++;
						}
					}
					else if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (func_2(iVar5))
						{
							Global_48745.f_25[iVar5] = iVar1;
							iVar5++;
						}
					}
				}
				break;
			
			case 140:
				SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
					{
						if (func_2(iVar4))
						{
							Global_48745.f_13[iVar4] = iVar1;
							iVar4++;
						}
					}
					else if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (func_2(iVar6))
						{
							Global_48745.f_37[iVar6] = iVar1;
							iVar6++;
						}
					}
				}
				break;
		}
		iVar2++;
	}
	Global_48745 = iVar3;
	Global_48745.f_12 = iVar4;
	Global_48745.f_24 = iVar5;
	Global_48745.f_36 = iVar6;
}

bool func_2(int iParam0)//Position - 0x24E
{
	return iParam0 < 10;
}

void func_3(int iParam0)//Position - 0x25B
{
	struct<39> Var0;
	int iVar39;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 39))
	{
		iVar39 = NETWORK::_0x742B58F723233ED9(Var0.f_38);
		if (iVar39 >= 0 && iVar39 < NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
		{
			if (NETWORK::_0x3DBF2DF0AEB7D289(iVar39) || NETWORK::_0x8806CEBFABD3CE05(iVar39))
			{
				if (NETWORK::_0x8806CEBFABD3CE05(iVar39))
				{
					func_55(iVar39);
				}
				else
				{
					NETWORK::NETWORK_ACCEPT_PRESENCE_INVITE(iVar39);
				}
				func_54(Var0.f_37, -1);
			}
			else if (func_47())
			{
				func_4(Var0.f_29, Var0, Var0.f_38, Var0.f_16, Var0.f_35, Var0.f_36);
			}
		}
	}
}

int func_4(struct<6> Param0, struct<16> Param6, var uParam22, struct<13> Param23, var uParam36, int iParam37)//Position - 0x2F8
{
	bool bVar0;
	bool bVar1;
	struct<16> Var2;
	int iVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	struct<10> Var22;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	struct<16> Var36;
	struct<16> Var52;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	var uVar74;
	var uVar75;
	bool bVar76;
	bool bVar77;
	bool bVar78;
	bool bVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	
	bVar0 = false;
	if (iParam37 >= 1000000)
	{
		iParam37 = (iParam37 - 1000000);
		bVar0 = true;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_46())
		{
			func_45(uParam22);
			return 0;
		}
		if (func_44())
		{
			func_45(uParam22);
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bVar0)
		{
		}
		else if (!NETWORK::NETWORK_IS_FRIEND(&Param23))
		{
			func_45(uParam22);
			return 0;
		}
		if (Global_14496)
		{
			func_45(uParam22);
			return 0;
		}
		bVar1 = true;
		if (!func_43())
		{
			if (!func_42(0))
			{
				if (bVar1)
				{
					func_45(uParam22);
					return 0;
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_41(PLAYER::PLAYER_ID()))
		{
			func_45(uParam22);
			return 0;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param6))
	{
		func_45(uParam22);
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param0))
	{
		func_45(uParam22);
		return 0;
	}
	Var2 = { Param6 };
	iVar18 = func_40(Var2);
	if (iVar18 != -1)
	{
		func_37(iVar18);
	}
	uVar19 = NETWORK::_0x742B58F723233ED9(uParam22);
	iVar20 = NETWORK::NETWORK_GET_PRESENCE_INVITE_SESSION_ID(uVar19);
	iVar21 = 0;
	iVar21 = 0;
	while (iVar21 <= 11)
	{
		if (iVar20 == Global_2395292[iVar21 /*4*/].f_3 && MISC::GET_GAME_TIMER() < Global_2395292[iVar21 /*4*/].f_2)
		{
			Global_2395292[iVar21 /*4*/].f_2 = MISC::GET_GAME_TIMER() + 30000;
			iVar21 = 12;
			func_45(uParam22);
			return 0;
		}
		iVar21++;
	}
	Var22.f_1 = -1;
	Var22.f_2 = -1;
	Var22.f_9 = -1;
	func_36(&Var22);
	iVar32 = 0;
	iVar33 = 0;
	iVar34 = 63;
	iVar35 = 0;
	StringCopy(&Var36, "", 64);
	StringCopy(&Var52, "", 64);
	iVar68 = 0;
	iVar69 = 0;
	iVar70 = 0;
	iVar71 = 1;
	iVar72 = 0;
	iVar73 = 0;
	if (func_35(&Param0, &iVar32, &iVar35))
	{
		iVar34 = 40;
		iVar69 = 0;
		iVar35 = iVar35;
	}
	else if (func_33(&Param0, &Var22, 0))
	{
		iVar34 = Var22.f_2;
		iVar32 = func_32(iVar34, Var22.f_1);
		iVar33 = func_31(&Var22);
		Var36 = { func_30(&Var22, 0) };
		Var52 = { func_29(&Var22) };
		iVar69 = 1;
		iVar68 = func_28(&Var22, 0);
		iVar73 = func_27(&Var22);
		uVar74 = func_25(&Var22);
		uVar75 = func_24(&Var22);
		bVar76 = func_19(&Var22);
		if (!bVar76)
		{
			iVar72 = 1;
		}
	}
	else
	{
		bVar77 = false;
		if (func_17(PLAYER::PLAYER_ID(), Param23))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				bVar77 = true;
			}
			else
			{
				func_45(uParam22);
				func_15(0);
				return 0;
			}
		}
		if (!MISC::IS_DURANGO_VERSION())
		{
			if (!bVar77)
			{
				if (func_13(PLAYER::PLAYER_ID(), Param23))
				{
					func_45(uParam22);
					func_15(0);
					return 0;
				}
			}
		}
		if (!func_12())
		{
			func_45(uParam22);
			bVar78 = true;
			func_15(bVar78);
			return 0;
		}
		bVar79 = false;
		if (!bVar77)
		{
			if (func_7(Param23, &bVar79, 1))
			{
				func_45(uParam22);
				func_15(bVar79);
				return 0;
			}
		}
		iVar70 = 1;
		iVar71 = 0;
		iVar69 = 1;
	}
	iVar80 = Global_1382405;
	if (iVar80 >= 12)
	{
		iVar80 = (iVar80 - 1);
	}
	iVar81 = (iVar80 - 1);
	while (iVar81 >= 0)
	{
		Global_2392991[iVar80 /*99*/] = { Global_2392991[iVar81 /*99*/] };
		iVar80 = (iVar80 - 1);
		iVar81 = (iVar81 - 1);
	}
	Global_1382405++;
	if (Global_1382405 > 12)
	{
		Global_1382405 = 12;
	}
	iVar82 = 0;
	Global_2392991[iVar82 /*99*/] = 0;
	Global_2392991[iVar82 /*99*/].f_1 = 0;
	Global_2392991[iVar82 /*99*/].f_5 = 0;
	Global_2392991[iVar82 /*99*/].f_2 = iVar70;
	Global_2392991[iVar82 /*99*/].f_3 = 0;
	Global_2392991[iVar82 /*99*/].f_4 = iVar71;
	Global_2392991[iVar82 /*99*/].f_6 = { Param0 };
	Global_2392991[iVar82 /*99*/].f_12 = uVar74;
	Global_2392991[iVar82 /*99*/].f_13 = uVar75;
	Global_2392991[iVar82 /*99*/].f_15 = { Param6 };
	StringCopy(&(Global_2392991[iVar82 /*99*/].f_31), "", 64);
	Global_2392991[iVar82 /*99*/].f_49 = iVar34;
	Global_2392991[iVar82 /*99*/].f_50 = iVar32;
	Global_2392991[iVar82 /*99*/].f_51 = iVar33;
	Global_2392991[iVar82 /*99*/].f_91 = uParam22;
	Global_2392991[iVar82 /*99*/].f_57 = { Var36 };
	Global_2392991[iVar82 /*99*/].f_73 = { Var52 };
	Global_2392991[iVar82 /*99*/].f_52 = iVar68;
	Global_2392991[iVar82 /*99*/].f_53 = 0;
	Global_2392991[iVar82 /*99*/].f_53.f_1 = 0;
	Global_2392991[iVar82 /*99*/].f_53.f_2 = 0;
	Global_2392991[iVar82 /*99*/].f_56 = iVar69;
	Global_2392991[iVar82 /*99*/].f_90 = uParam36;
	Global_2392991[iVar82 /*99*/].f_92 = -1;
	Global_2392991[iVar82 /*99*/].f_93 = iVar72;
	Global_2392991[iVar82 /*99*/].f_94 = Global_2395344;
	Global_2392991[iVar82 /*99*/].f_95 = iVar73;
	Global_2392991[iVar82 /*99*/].f_98 = NETWORK::NETWORK_IS_FRIEND(&Param23);
	if (Global_2392991[iVar82 /*99*/].f_50 == 0)
	{
		if (Global_2392991[iVar82 /*99*/].f_51 == 1)
		{
			Global_2392991[iVar82 /*99*/].f_56 = 0;
		}
	}
	Global_2392991[iVar82 /*99*/].f_96 = func_6(Param23, iVar82);
	Global_2392991[iVar82 /*99*/].f_97 = 0;
	Global_2392991[iVar82 /*99*/].f_89 = iParam37;
	Global_2395344++;
	Global_2392991[iVar82 /*99*/].f_47 = func_5(Param23);
	if (Global_2392991[iVar82 /*99*/].f_47 != -1)
	{
		Global_2392991[iVar82 /*99*/].f_48 = MISC::GET_GAME_TIMER() + 15000;
	}
	return 1;
}

int func_5(struct<13> Param0)//Position - 0x845
{
	struct<13> Var0[1];
	int iVar14;
	
	if (!MISC::IS_DURANGO_VERSION())
	{
		return -1;
	}
	Var0[0 /*13*/] = { Param0 };
	iVar14 = NETWORK::_0xD66C9E72B3CC4982(&Var0, 1);
	if (iVar14 < 0)
	{
		return -1;
	}
	return iVar14;
}

int func_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x880
{
	if (!NETWORK::NETWORK_IS_FRIEND(&uParam0))
	{
		return 0;
	}
	if (Global_2392991[iParam13 /*99*/].f_90 > 0)
	{
		return 0;
	}
	return 1;
}

int func_7(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13, bool bParam14)//Position - 0x8A9
{
	struct<13> Var0;
	
	*iParam13 = 0;
	if (func_11(0))
	{
		return 0;
	}
	if (MISC::IS_DURANGO_VERSION())
	{
		if (!func_10())
		{
			*iParam13 = 1;
			return 1;
		}
	}
	if (!func_9(1) && !bParam14)
	{
		return 1;
	}
	Var0 = { func_8(PLAYER::PLAYER_ID()) };
	if (!bParam14 && !NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var0, &uParam0))
	{
		if (!NETWORK::NETWORK_IS_FRIEND(&uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_8(int iParam0)//Position - 0x91D
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_9(int iParam0)//Position - 0x934
{
	if (MISC::IS_PS3_VERSION() || (MISC::IS_ORBIS_VERSION() && iParam0 == 0))
	{
		if (NETWORK::_0x72D918C99BCACC54(1) == 0 || NETWORK::_0xAEEF48CDF5B6CE7C(1, -1) == 0)
		{
			return 0;
		}
	}
	else if (NETWORK::_0x72D918C99BCACC54(1) == 0)
	{
		return 0;
	}
	if (func_10() == 0)
	{
		return 0;
	}
	return 1;
}

int func_10()//Position - 0x98F
{
	if (MISC::IS_PS3_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if (MISC::IS_XBOX360_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if ((MISC::IS_ORBIS_VERSION() && NETWORK::_0x1353F87E89946207() == 0) && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if (MISC::IS_DURANGO_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	return 0;
}

int func_11(int iParam0)//Position - 0xA07
{
	if (MISC::IS_PS3_VERSION() || (MISC::IS_ORBIS_VERSION() && iParam0 == 0))
	{
		if (NETWORK::_0x72D918C99BCACC54(0) == 0 || NETWORK::_0xAEEF48CDF5B6CE7C(0, -1) == 0)
		{
			return 0;
		}
	}
	else if (NETWORK::_0x72D918C99BCACC54(0) == 0)
	{
		return 0;
	}
	if (func_10() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_12()//Position - 0xA62
{
	if (!MISC::IS_XBOX360_VERSION())
	{
		return 1;
	}
	return NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES();
}

int func_13(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)//Position - 0xA7A
{
	if (!func_14(iParam0))
	{
		if (MISC::IS_DURANGO_VERSION())
		{
			if (NETWORK::_0xB57A49545BA53CE7(&uParam1))
			{
				return 0;
			}
		}
		if (!NETWORK::_0x72D918C99BCACC54(0))
		{
			if (!NETWORK::_0x72D918C99BCACC54(1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)//Position - 0xAB7
{
	switch (iParam0)
	{
		case 63:
		case 62:
		case 61:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

void func_15(bool bParam0)//Position - 0xAE3
{
	int iVar0;
	
	if (bParam0)
	{
		if (!MISC::IS_XBOX360_VERSION())
		{
			return;
		}
	}
	if (MISC::IS_DURANGO_VERSION())
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	if (iVar0 < Global_2395341)
	{
		return;
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return;
	}
	if (bParam0)
	{
		func_16("INV_NO_XBOXLIVE", -1);
	}
	else
	{
		func_16("INV_RESTRICT", -1);
	}
	Global_2395341 = (iVar0 + 1800000);
}

void func_16(char* sParam0, int iParam1)//Position - 0xB43
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

int func_17(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)//Position - 0xB5A
{
	if (!func_14(iParam0))
	{
		if (MISC::IS_DURANGO_VERSION())
		{
			if (NETWORK::_0xB57A49545BA53CE7(&uParam1))
			{
				return 0;
			}
		}
		if (!func_18())
		{
			return 1;
		}
	}
	return 0;
}

int func_18()//Position - 0xB8D
{
	if (NETWORK::_0x66B59CFFD78467AF() == 0)
	{
		return 0;
	}
	if (MISC::IS_PS3_VERSION())
	{
		if (NETWORK::_0xAEEF48CDF5B6CE7C(1, -1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (MISC::IS_ORBIS_VERSION())
	{
		if (NETWORK::_0x72D918C99BCACC54(1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		if (NETWORK::_0x595F028698072DD9(0, -3, 1))
		{
			return 1;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::_0xAEEF48CDF5B6CE7C(0, -1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_19(var uParam0)//Position - 0xC13
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_23(uParam0))
	{
		return MISC::IS_BIT_SET(Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_63, 14);
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return MISC::IS_BIT_SET(Global_2398103.f_1.f_63, 14);
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return MISC::IS_BIT_SET(Global_794709.f_4[iVar1 /*88*/].f_76, 14);
		
		case 62:
			return MISC::IS_BIT_SET(Global_917806.f_604[iVar1 /*88*/].f_76, 14);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_20(var uParam0)//Position - 0xCEF
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (MISC::IS_BIT_SET(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!MISC::IS_BIT_SET(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (MISC::IS_BIT_SET(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (MISC::IS_BIT_SET(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_917806.f_604[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!MISC::IS_BIT_SET(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (MISC::IS_BIT_SET(Global_917806.f_604[iVar0 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_917806.f_604[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		if (MISC::IS_BIT_SET(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_939452.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (MISC::IS_BIT_SET(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (MISC::IS_BIT_SET(Global_939452.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_939452.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_21(var uParam0)//Position - 0xF5F
{
	if (Global_2398103)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_22(int iParam0)//Position - 0xF84
{
	return iParam0 == 9999;
}

int func_23(var uParam0)//Position - 0xF92
{
	int iVar0;
	
	iVar0 = uParam0->f_9;
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!Global_2395346.f_356[iVar0 /*75*/])
	{
		return 0;
	}
	if (!MISC::ARE_STRINGS_EQUAL(&(Global_2395346.f_356[iVar0 /*75*/].f_10), &(uParam0->f_3)))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(Global_2395346.f_356[iVar0 /*75*/].f_5, 3))
	{
		return 0;
	}
	return 1;
}

int func_24(var uParam0)//Position - 0xFF5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_80;
		
		case 62:
			return iVar0;
		
		default:
	}
	return iVar0;
}

int func_25(var uParam0)//Position - 0x103E
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_20(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_26(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_26(var uParam0)//Position - 0x10A5
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_20(uParam0);
	if (iVar13 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar13 /*13*/];
		
		case 62:
			return Global_917806.f_9405[iVar13 /*13*/];
		
		default:
	}
	return Var0;
}

int func_27(var uParam0)//Position - 0x111C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_23(uParam0))
	{
		return MISC::IS_BIT_SET(Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_63, 17);
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return MISC::IS_BIT_SET(Global_2398103.f_1.f_63, 17);
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return MISC::IS_BIT_SET(Global_794709.f_4[iVar1 /*88*/].f_76, 17);
		
		case 62:
			return MISC::IS_BIT_SET(Global_917806.f_604[iVar1 /*88*/].f_76, 17);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_28(var uParam0, bool bParam1)//Position - 0x11F8
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!bParam1)
	{
		if (func_23(uParam0))
		{
			if (MISC::IS_BIT_SET(Global_1311772.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2398237.f_513[uParam0->f_9];
			}
		}
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_54;
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_54;
		
		case 62:
			return Global_917806.f_604[iVar1 /*88*/].f_54;
		
		case 40:
			return 0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return Global_939452.f_5[iVar1 /*88*/].f_54;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

struct<16> func_29(var uParam0)//Position - 0x12DA
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "NO DESCRIPTION", 64);
	if (func_23(uParam0))
	{
		return Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_28;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_28;
		}
		return Var0;
	}
	iVar16 = func_20(uParam0);
	if (iVar16 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar16 /*88*/].f_38;
		
		case 62:
			return Global_917806.f_604[iVar16 /*88*/].f_38;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return Global_939452.f_5[iVar16 /*88*/].f_38;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

struct<16> func_30(var uParam0, bool bParam1)//Position - 0x13CA
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "UNKNOWN", 64);
	if (bParam1)
	{
		StringCopy(&Var0, "", 64);
	}
	if (!bParam1)
	{
		if (func_23(uParam0))
		{
			if (MISC::IS_BIT_SET(Global_1311772.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2398237[uParam0->f_9 /*16*/];
			}
			return Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_12;
		}
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_12;
		}
		return Var0;
	}
	iVar16 = func_20(uParam0);
	if (iVar16 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar16 /*88*/].f_22;
		
		case 62:
			return Global_917806.f_604[iVar16 /*88*/].f_22;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return Global_939452.f_5[iVar16 /*88*/].f_22;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

int func_31(var uParam0)//Position - 0x14EF
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	if (func_23(uParam0))
	{
		return Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_55;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_55;
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_68;
		
		case 62:
			return Global_917806.f_604[iVar1 /*88*/].f_68;
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return Global_939452.f_5[iVar1 /*88*/].f_68;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_32(int iParam0, int iParam1)//Position - 0x15BD
{
	if (func_22(iParam1))
	{
		if (Global_2398103)
		{
			return Global_2398103.f_1.f_53;
		}
		return 256;
	}
	switch (iParam0)
	{
		case 63:
			return Global_794709.f_4[iParam1 /*88*/].f_65;
		
		case 62:
			return Global_917806.f_604[iParam1 /*88*/].f_65;
		
		default:
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_939452.f_5[iParam1 /*88*/].f_65;
	}
	else if (iParam0 < 32)
	{
		return 256;
	}
	return 256;
}

int func_33(int iParam0, var uParam1, bool bParam2)//Position - 0x1646
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = 1218;
	if (!bParam2)
	{
		iVar2 = 1200;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (MISC::IS_BIT_SET(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar0 /*88*/]), iParam0))
			{
				iVar1 = Global_794709.f_4[iVar0 /*88*/].f_65;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 63;
				uParam1->f_3 = { Global_794709.f_4[iVar0 /*88*/] };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 100)
	{
		if (MISC::IS_BIT_SET(Global_917806.f_604[iVar0 /*88*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_917806.f_604[iVar0 /*88*/]), iParam0))
			{
				iVar1 = Global_917806.f_604[iVar0 /*88*/].f_65;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 62;
				uParam1->f_3 = { *iParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 62)
	{
		if (MISC::IS_BIT_SET(Global_939452.f_5[iVar0 /*88*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_939452.f_5[iVar0 /*88*/]), iParam0))
			{
				iVar1 = Global_939452.f_5[iVar0 /*88*/].f_65;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = PLAYER::PLAYER_ID();
				uParam1->f_3 = { *iParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0)//Position - 0x17DE
{
	switch (iParam0)
	{
		case 15:
			return 143;
		
		case 14:
			return 144;
		
		case 122:
			return 148;
		
		case 11:
			return 145;
		
		case 13:
			return 146;
		
		case 12:
			return 147;
		
		case 8:
			return 150;
		
		case 1:
			return 151;
		
		case 5:
			return 149;
		
		case 6:
			return 152;
		
		case 3:
			return 155;
		
		case 0:
			return 153;
		
		case 2:
			return 154;
		
		case 148:
			return 49;
		
		case 151:
			return 52;
		
		case 152:
			return 53;
		
		case 157:
			return 54;
		
		case 153:
			return 55;
		
		case 154:
			return 56;
		
		case 155:
			return 57;
		
		case 159:
			return 58;
		
		case 162:
			return 51;
		
		case 142:
			return 60;
		
		case 160:
			return 62;
		
		case 164:
			return 63;
		
		case 163:
			return 64;
		
		case 166:
			return 65;
		
		case 167:
			return 66;
		
		case 168:
			return 67;
		
		case 169:
			return 68;
		
		case 170:
			return 69;
		
		case 171:
			return 70;
		
		case 172:
			return 71;
		
		case 173:
			return 72;
		
		case 178:
			return 73;
		
		case 188:
			return 74;
		
		case 214:
			return 75;
		
		case 215:
			return 76;
		
		case 216:
			return 77;
		
		case 217:
			return 78;
		
		case 218:
			return 79;
		
		case 219:
			return 80;
		
		case 220:
			return 81;
		
		case 221:
			return 82;
		
		case 179:
			return 84;
		
		case 189:
			return 83;
		
		case 180:
			return 85;
		
		case 182:
			return 86;
		
		case 183:
			return 87;
		
		case 185:
			return 88;
		
		case 186:
			return 89;
		
		case 190:
			return 90;
		
		case 191:
			return 91;
		
		case 192:
			return 92;
		
		case 193:
			return 93;
		
		case 205:
			return 101;
		
		case 194:
			return 94;
		
		case 197:
			return 95;
		
		case 198:
			return 96;
		
		case 195:
			return 97;
		
		case 199:
			return 98;
		
		case 200:
			return 99;
		
		case 201:
			return 100;
		
		case 207:
			return 102;
		
		case 208:
			return 103;
		
		case 209:
			return 104;
		
		case 210:
			return 105;
		
		case 225:
			return 106;
		
		case 226:
			return 107;
		
		case 227:
			return 108;
		
		case 229:
			return 109;
		
		case 230:
			return 110;
		
		case 233:
			return 112;
		
		case 237:
			return 114;
		
		case 238:
			return 115;
		
		case 249:
			return 122;
		
		case 239:
			return 116;
		
		case 240:
			return 117;
		
		case 241:
			return 118;
		
		case 242:
			return 119;
		
		case 244:
			return 120;
		
		case 248:
			return 121;
		
		case 250:
			return 123;
		
		case 243:
			return 124;
		
		default:
	}
	return 0;
}

int func_35(int iParam0, int iParam1, int iParam2)//Position - 0x1B8A
{
	int iVar0;
	char[] cVar1[8];
	char cVar3[16];
	char[] cVar7[8];
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::_GET_LENGTH_OF_STRING(iParam0);
	if (!iVar0 > 12)
	{
		return 0;
	}
	StringCopy(&cVar1, HUD::_GET_TEXT_SUBSTRING_SLICE(iParam0, 0, 5), 8);
	if (!MISC::ARE_STRINGS_EQUAL(&cVar1, "FAKE_"))
	{
		return 0;
	}
	StringCopy(&cVar3, HUD::_GET_TEXT_SUBSTRING_SLICE(iParam0, 5, 12), 16);
	if (MISC::ARE_STRINGS_EQUAL(&cVar3, "GOLF___"))
	{
		*iParam1 = 11;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar3, "TENNIS_"))
	{
		*iParam1 = 12;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar3, "PILOTS_"))
	{
		*iParam1 = 122;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar3, "SHOOTR_"))
	{
		*iParam1 = 13;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar3, "DARTS__"))
	{
		*iParam1 = 14;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar3, "ARMWRS_"))
	{
		*iParam1 = 15;
	}
	else
	{
		return 0;
	}
	StringCopy(&cVar7, HUD::_GET_TEXT_SUBSTRING_SLICE(iParam0, 12, iVar0), 8);
	if (!MISC::STRING_TO_INT(&cVar7, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_36(var uParam0)//Position - 0x1C79
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	StringCopy(&(uParam0->f_3), "", 24);
	uParam0->f_9 = -1;
}

void func_37(int iParam0)//Position - 0x1C9C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 >= Global_1382405)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (MISC::GET_GAME_TIMER() > Global_2395292[iVar0 /*4*/].f_2 || Global_2395292[iVar0 /*4*/].f_2 == 0)
		{
			if (NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES() > 0 && Global_2392991[iParam0 /*99*/].f_91 < NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
			{
				Global_2395292[iVar0 /*4*/].f_3 = NETWORK::NETWORK_GET_PRESENCE_INVITE_SESSION_ID(Global_2392991[iParam0 /*99*/].f_91);
				Global_2395292[iVar0 /*4*/].f_2 = MISC::GET_GAME_TIMER() + 30000;
				iVar0 = 12;
			}
		}
		iVar0++;
	}
	if (Global_2392991[iParam0 /*99*/].f_92 != -1)
	{
		HUD::_REMOVE_NOTIFICATION(Global_2392991[iParam0 /*99*/].f_92);
	}
	if (!Global_2392991[iParam0 /*99*/].f_56)
	{
		if (Global_2392991[iParam0 /*99*/].f_52 != 0)
		{
			NETWORK::_0x5A34CD9C3C5BEC44(Global_2392991[iParam0 /*99*/].f_52);
		}
	}
	func_45(Global_2392991[iParam0 /*99*/].f_91);
	iVar1 = iParam0;
	iVar2 = iVar1 + 1;
	while (iVar2 < Global_1382405)
	{
		Global_2392991[iVar1 /*99*/] = { Global_2392991[iVar2 /*99*/] };
		iVar1++;
		iVar2++;
	}
	func_39(iVar1);
	Global_1382405 = (Global_1382405 - 1);
	if (Global_1382378)
	{
		if (Global_1382376 > 0)
		{
			func_38();
		}
	}
}

void func_38()//Position - 0x1DE4
{
	Global_1382378 = 0;
}

void func_39(int iParam0)//Position - 0x1DF1
{
	Global_2392991[iParam0 /*99*/] = 0;
	Global_2392991[iParam0 /*99*/].f_1 = 0;
	Global_2392991[iParam0 /*99*/].f_5 = 0;
	StringCopy(&(Global_2392991[iParam0 /*99*/].f_15), "", 64);
	StringCopy(&(Global_2392991[iParam0 /*99*/].f_31), "", 64);
	Global_2392991[iParam0 /*99*/].f_47 = -1;
	Global_2392991[iParam0 /*99*/].f_48 = MISC::GET_GAME_TIMER();
	Global_2392991[iParam0 /*99*/].f_49 = -1;
	Global_2392991[iParam0 /*99*/].f_50 = -1;
	Global_2392991[iParam0 /*99*/].f_51 = -1;
	Global_2392991[iParam0 /*99*/].f_52 = 0;
	Global_2392991[iParam0 /*99*/].f_53 = 0;
	Global_2392991[iParam0 /*99*/].f_53.f_1 = 0;
	Global_2392991[iParam0 /*99*/].f_53.f_2 = 0;
	Global_2392991[iParam0 /*99*/].f_56 = 0;
	StringCopy(&(Global_2392991[iParam0 /*99*/].f_57), "", 64);
	StringCopy(&(Global_2392991[iParam0 /*99*/].f_73), "", 64);
	Global_2392991[iParam0 /*99*/].f_89 = 0;
	Global_2392991[iParam0 /*99*/].f_90 = 0;
	Global_2392991[iParam0 /*99*/].f_91 = -1;
	Global_2392991[iParam0 /*99*/].f_92 = -1;
	Global_2392991[iParam0 /*99*/].f_93 = 0;
	Global_2392991[iParam0 /*99*/].f_94 = -1;
	Global_2392991[iParam0 /*99*/].f_95 = 0;
	Global_2392991[iParam0 /*99*/].f_96 = 0;
	Global_2392991[iParam0 /*99*/].f_97 = 0;
	Global_2392991[iParam0 /*99*/].f_98 = 0;
}

int func_40(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)//Position - 0x1F33
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1382405)
	{
		if (MISC::ARE_STRINGS_EQUAL(&uParam0, &(Global_2392991[iVar0 /*99*/].f_15)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_41(int iParam0)//Position - 0x1F6C
{
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_142, 22);
}

bool func_42(bool bParam0)//Position - 0x1F85
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71838, 0);
}

int func_43()//Position - 0x1FB0
{
	if (Global_106565.f_9079.f_330[0 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_44()//Position - 0x1FCD
{
	return MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_142, 2);
}

void func_45(var uParam0)//Position - 0x1FE7
{
	int iVar0;
	
	iVar0 = NETWORK::_0x742B58F723233ED9(uParam0);
	if (iVar0 < 0 || iVar0 >= NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
	{
		return;
	}
	if (NETWORK::NETWORK_REMOVE_PRESENCE_INVITE(iVar0))
	{
		return;
	}
}

bool func_46()//Position - 0x201A
{
	return Global_1312827 == 10;
}

int func_47()//Position - 0x2029
{
	if (!Global_71590)
	{
		return 1;
	}
	else if (func_48())
	{
		return 1;
	}
	return 0;
}

int func_48()//Position - 0x204C
{
	if (Global_1312447)
	{
		return 1;
	}
	if (func_53())
	{
		return 1;
	}
	if (func_52())
	{
		return 1;
	}
	return func_49(120, -1);
}

int func_49(int iParam0, int iParam1)//Position - 0x207C
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2571340[iParam0 /*3*/][func_50(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_50(var uParam0)//Position - 0x20A8
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_51();
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

int func_51()//Position - 0x20DC
{
	return Global_1312745;
}

bool func_52()//Position - 0x20E8
{
	return Global_1312855;
}

bool func_53()//Position - 0x20F4
{
	return Global_1312857;
}

void func_54(var uParam0, int iParam1)//Position - 0x2100
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 == -1)
	{
		iVar0 = func_51();
	}
	Global_1312847[iVar0] = uParam0;
}

void func_55(int iParam0)//Position - 0x2122
{
	func_106();
	if (func_105(1))
	{
		if (!func_96())
		{
			if (!func_85(1))
			{
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					func_84();
				}
				func_58(1, 0);
				NETWORK::NETWORK_ACCEPT_PRESENCE_INVITE(iParam0);
				func_57();
				func_56();
			}
		}
	}
}

void func_56()//Position - 0x2167
{
	Global_1657223.f_7 = 1;
}

void func_57()//Position - 0x2176
{
	Global_1657223.f_6 = 1;
}

void func_58(int iParam0, bool bParam1)//Position - 0x2185
{
	if (func_105(iParam0))
	{
		Global_1657223.f_16[iParam0 /*44*/].f_5 = 1;
		func_60(iParam0, 0);
		func_59();
		if (bParam1)
		{
			Global_1657223 = 1;
		}
	}
}

void func_59()//Position - 0x21B8
{
	Global_1657223.f_2 = 1;
}

void func_60(int iParam0, bool bParam1)//Position - 0x21C7
{
	struct<6> Var0;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (bParam1)
		{
			func_83();
			func_72(PLAYER::PLAYER_ID(), 0, 81920, 0);
			Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_98 = 8;
			func_71();
			func_70();
		}
		func_69(iParam0);
		func_68(iParam0);
		func_66();
		func_65();
		func_59();
	}
	Var0 = { func_64(iParam0) };
	func_63(iParam0);
	func_61(&Var0);
}

void func_61(char* sParam0)//Position - 0x2233
{
	StringCopy(&(Global_2448756.f_747), sParam0, 24);
	if (func_62())
	{
		StringCopy(&(Global_959568.f_42), sParam0, 24);
	}
}

bool func_62()//Position - 0x2257
{
	return MISC::IS_BIT_SET(Global_2449538.f_1.f_2809, 5);
}

void func_63(int iParam0)//Position - 0x226D
{
	Global_1657223.f_16[iParam0 /*44*/].f_3 = 1;
}

struct<6> func_64(int iParam0)//Position - 0x2282
{
	return Global_1657223.f_16[iParam0 /*44*/].f_6;
}

void func_65()//Position - 0x2298
{
	Global_2448756.f_6 = 100;
}

void func_66()//Position - 0x22A8
{
	MISC::SET_BIT(&Global_2448756, 5);
	func_67();
}

void func_67()//Position - 0x22BD
{
	MISC::SET_BIT(&Global_2448756, 8);
}

void func_68(var uParam0)//Position - 0x22CF
{
	Global_1657223.f_8 = uParam0;
}

void func_69(var uParam0)//Position - 0x22DF
{
	Global_1657223.f_9 = uParam0;
}

void func_70()//Position - 0x22EF
{
	Global_2456885.f_1 = 0;
}

void func_71()//Position - 0x22FE
{
	char* sVar0;
	
	StringCopy(&(Global_2448756.f_747), sVar0, 24);
}

void func_72(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x2311
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (SCRIPT::_GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_82())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_80())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0))
			{
				return;
			}
			iVar25 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else if (bVar13 || (!func_78(PLAYER::PLAYER_ID(), 0) && !func_77()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar18)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_2424047[iParam0 /*416*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_76(iVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar25))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar25, true, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar25))
				{
					if (!bVar20)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar25, false);
					}
					ENTITY::_SET_ENTITY_SOMETHING(iVar25, 1);
				}
				else if (!bVar20)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar25, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar25, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				PLAYER::_0x6BC97F4F4BB3C04B(iParam0, 0);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar25) && PED::_0x7350823473013C02(iVar25))
				{
					PED::_0x4668D80430D6C299(iVar25);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar25, 1);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_75();
					func_74();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar22)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2424047[iParam0 /*416*/].f_245 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
				if (Global_2405071.f_2668)
				{
					Global_2405071.f_2668 = 0;
				}
			}
			else
			{
				if (!func_76(iVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar25))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar25, !bVar14, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar25))
					{
						if (!bVar20)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar25, bVar15);
						}
						if (!bVar15)
						{
							ENTITY::_SET_ENTITY_SOMETHING(iVar25, 1);
						}
					}
					if (func_73(Global_4456448.f_161209))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar25, true);
					}
				}
				if (Global_1312844)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar25, bVar16);
				if (bVar2)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar25) && !PED::IS_PED_IN_ANY_VEHICLE(iVar25, 0))
					{
						BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar26);
		}
	}
}

bool func_73(int iParam0)//Position - 0x2761
{
	return iParam0 == 17;
}

void func_74()//Position - 0x276E
{
	vector3 vVar0;
	
	Global_2437364.f_1232 = 0;
	Global_2437364.f_1233 = 0;
	Global_2437364.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437364.f_1239 = -1;
	Global_2437364.f_1240 = 0;
	Global_2405071.f_2679 = { vVar0 };
}

void func_75()//Position - 0x27BB
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2722 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_207 = 0;
	Global_2405071.f_2677 = 0;
}

int func_76(int iParam0)//Position - 0x27F9
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_77()//Position - 0x282A
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_78(int iParam0, int iParam1)//Position - 0x283B
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_79(-1, 0) == 8;
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

int func_79(int iParam0, bool bParam1)//Position - 0x2886
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_51();
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

int func_80()//Position - 0x28C7
{
	if (func_81() == 0)
	{
		return 1;
	}
	return 0;
}

int func_81()//Position - 0x28DC
{
	return Global_1312467.f_18;
}

int func_82()//Position - 0x28EA
{
	if (Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_35 && !Global_2449538.f_2846.f_214 == -1)
	{
		return 1;
	}
	return 0;
}

void func_83()//Position - 0x2918
{
	MISC::SET_BIT(&Global_2448756, 7);
}

void func_84()//Position - 0x2929
{
	MISC::SET_BIT(&(Global_2448756.f_2), 15);
}

int func_85(int iParam0)//Position - 0x293D
{
	if (iParam0 || func_95())
	{
		if (!func_87(1))
		{
			return 1;
		}
		if (!func_86())
		{
			return 1;
		}
		if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
		{
			return 1;
		}
	}
	return 0;
}

bool func_86()//Position - 0x2979
{
	return Global_1657223.f_4;
}

int func_87(bool bParam0)//Position - 0x2987
{
	if (!func_92())
	{
		return 0;
	}
	if ((func_90(func_91(-1), 0) >= 1 || func_49(123, -1)) && func_49(133, -1))
	{
		func_89();
		return 1;
	}
	else if (bParam0)
	{
		func_88();
	}
	return 0;
}

void func_88()//Position - 0x29D8
{
	Global_1657223.f_5 = 1;
}

void func_89()//Position - 0x29E7
{
	Global_1657223.f_4 = 1;
}

int func_90(int iParam0, int iParam1)//Position - 0x29F6
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

int func_91(int iParam0)//Position - 0x2AB5
{
	return Global_1382702[func_50(iParam0)];
}

int func_92()//Position - 0x2AC9
{
	if (func_94() && func_93(0))
	{
		return 1;
	}
	return 0;
}

var func_93(int iParam0)//Position - 0x2AE7
{
	return Global_1312373[iParam0];
}

var func_94()//Position - 0x2AF7
{
	return func_93(func_51() + 1);
}

var func_95()//Position - 0x2B09
{
	return Global_1657223.f_2;
}

int func_96()//Position - 0x2B17
{
	if (((((func_104() || !func_102(-1)) || !func_100()) || !func_99()) || !func_98()) || func_97())
	{
		return 1;
	}
	return 0;
}

var func_97()//Position - 0x2B62
{
	return Global_2458626;
}

int func_98()//Position - 0x2B6E
{
	if (MISC::GET_PROFILE_SETTING(903) == 1)
	{
		return 1;
	}
	return 0;
}

int func_99()//Position - 0x2B89
{
	int iVar0;
	
	if (NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(&iVar0) == 0)
	{
		if (iVar0 == 1)
		{
			return 0;
		}
	}
	return 1;
}

int func_100()//Position - 0x2BA6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_101(iVar0) == 1)
		{
			iVar0 = 2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_101(int iParam0)//Position - 0x2BD2
{
	if (func_49(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0)//Position - 0x2BEE
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_103(iParam0);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	if (MISC::IS_BIT_SET(iVar1, 1))
	{
		return 1;
	}
	return 0;
}

int func_103(int iParam0)//Position - 0x2C15
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_51();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

var func_104()//Position - 0x2C78
{
	return Global_2448756.f_631;
}

bool func_105(int iParam0)//Position - 0x2C87
{
	return Global_1657223.f_16[iParam0 /*44*/].f_4;
}

void func_106()//Position - 0x2C9B
{
	int iVar0;
	int iVar1;
	
	func_112();
	if (SOCIALCLUB::_0xFF8F3A92B75ED67A() && !func_109())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = SOCIALCLUB::_0x4A7D6E727F941747(func_108(iVar0));
			if (iVar1 > 0)
			{
				Global_1657223.f_16[iVar0 /*44*/] = iVar1;
				func_107(iVar0, iVar1);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1657223.f_16[iVar0 /*44*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_107(int iParam0, int iParam1)//Position - 0x2D12
{
	bool bVar0;
	struct<16> Var1;
	var uVar17;
	
	bVar0 = true;
	if (SOCIALCLUB::_0x699E4A5C8C893A18(iParam1, "contentId", &Var1))
	{
		MemCopy(&(Global_1657223.f_16[iParam0 /*44*/].f_6), {Var1}, 6);
	}
	else
	{
		bVar0 = false;
	}
	if (SOCIALCLUB::_0x699E4A5C8C893A18(iParam1, "playlist", &Var1))
	{
		Global_1657223.f_16[iParam0 /*44*/].f_12 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (SOCIALCLUB::_0x19853B5B17D77BCA(iParam1, &Var1))
	{
		Global_1657223.f_16[iParam0 /*44*/].f_28 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (iParam0 == 1)
	{
		if (SOCIALCLUB::_0x8CC469AB4D349B7C(iParam1, "coronaCountdown", &uVar17))
		{
			Global_1657223.f_16[iParam0 /*44*/].f_1 = uVar17;
		}
		else
		{
			Global_1657223.f_16[iParam0 /*44*/].f_1 = 120000;
		}
		Global_1657223.f_16[iParam0 /*44*/].f_2 = 0;
		if (SOCIALCLUB::_0x8CC469AB4D349B7C(iParam1, "eventSubType", &uVar17))
		{
			Global_1657223.f_16[iParam0 /*44*/].f_2 = uVar17;
		}
	}
	if (bVar0)
	{
		if (iParam0 != 1)
		{
			Global_1657223.f_1 = 1;
		}
		Global_1657223.f_16[iParam0 /*44*/].f_4 = 1;
	}
	else
	{
		Global_1657223.f_16[iParam0 /*44*/].f_4 = 0;
	}
}

char* func_108(int iParam0)//Position - 0x2E20
{
	switch (iParam0)
	{
		case 0:
			return "TournamentQualifying";
		
		case 1:
			return "Tournament";
		
		case 2:
			return "LiveStreaming";
		
		case 3:
			return "Sweepstakes";
		
		case 4:
			return "FeaturedPlaylist";
		
		default:
	}
	return "";
}

int func_109()//Position - 0x2E6D
{
	if (!func_110())
	{
		return 1;
	}
	return 0;
}

int func_110()//Position - 0x2E82
{
	if (func_111())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_111()//Position - 0x2EA2
{
	return Global_2459114;
}

void func_112()//Position - 0x2EAE
{
	struct<281> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = 6;
	Global_1657223 = { Var0 };
}

void func_113(int iParam0)//Position - 0x2ED9
{
	var uVar0;
	
	if (Global_71590)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_14542, 1);
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 21))
	{
		func_115();
	}
	Global_2534821.f_1 = 0;
	Global_2534821.f_33 = -1;
	Global_2534821.f_34 = -1;
	StringCopy(&(Global_2534821.f_4), "", 64);
	func_114(&(Global_2534821.f_20));
}

void func_114(var uParam0)//Position - 0x2F41
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

void func_115()//Position - 0x2F89
{
	Global_2534821.f_2 = 1;
	Global_2534821.f_38 = 1;
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::_0x855BC38818F6F684())
		{
			while (NETWORK::_0xEF0912DDF7C4CB4B())
			{
				SYSTEM::WAIT(0);
			}
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2534821 = 0;
			Global_2534821.f_2 = 0;
		}
		else if (func_122(Global_2534821.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2534821.f_20)))
			{
				if (!NETWORK::_NETWORK_IS_FRIEND_ONLINE_2(&(Global_2534821.f_20)))
				{
					func_121();
				}
			}
		}
		else
		{
			func_121();
		}
	}
	else
	{
		func_121();
	}
	if (Global_2534821.f_37)
	{
		func_116(0);
	}
	Global_2534821.f_37 = 0;
	Global_2534821.f_3 = 0;
}

void func_116(int iParam0)//Position - 0x3029
{
	if (func_120())
	{
		return;
	}
	if (Global_14725)
	{
		func_118(0, 0);
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
	if (!func_117())
	{
		Global_14553.f_1 = 3;
	}
}

int func_117()//Position - 0x30A3
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_118(bool bParam0, bool bParam1)//Position - 0x30CA
{
	if (bParam0)
	{
		if (func_119(0))
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

int func_119(int iParam0)//Position - 0x313E
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

bool func_120()//Position - 0x3198
{
	return MISC::IS_BIT_SET(Global_1681628, 19);
}

void func_121()//Position - 0x31AA
{
	Global_2534821.f_1 = 0;
	Global_2534821 = 0;
	Global_2534821.f_2 = 0;
	Global_2534821.f_33 = -1;
	Global_2534821.f_34 = -1;
	StringCopy(&(Global_2534821.f_4), "", 64);
	StringCopy(&(Global_2534821.f_39[0 /*16*/]), "", 64);
	Global_2534821.f_38 = 0;
	Global_2534821.f_56 = 0;
	Global_2534821.f_57 = 0;
	Global_2534821.f_58 = -2;
	Global_2534821.f_3 = 0;
	func_114(&(Global_2534821.f_20));
}

bool func_122(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x3219
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_123(int iParam0)//Position - 0x3229
{
	struct<2> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 15))
	{
		Global_2534821.f_33 = Var0.f_1;
		Global_2534821.f_34 = Var0;
	}
}

void func_124(int iParam0)//Position - 0x3254
{
	struct<9> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 21))
	{
		if (Global_2534821.f_3 == 0)
		{
			if (!func_125(&(Var0.f_8)))
			{
				NETWORK::NETWORK_SET_KEEP_FOCUSPOINT(0, 2);
			}
			else
			{
				Global_2534821.f_3 = 1;
				MemCopy(&(Global_2534821.f_4), {Var0}, 16);
				Global_2534821.f_20 = { Var0.f_8 };
				StringCopy(&(Global_2534821.f_39[0 /*16*/]), "", 64);
				Global_2534821.f_58 = -2;
				Global_2534821.f_56 = 0;
				Global_2534821.f_57 = 0;
			}
		}
		else if (!func_125(&(Var0.f_8)))
		{
			NETWORK::NETWORK_SET_KEEP_FOCUSPOINT(0, 2);
		}
		else
		{
			Global_2534821.f_3 = 1;
			MemCopy(&(Global_2534821.f_4), {Var0}, 16);
			Global_2534821.f_20 = { Var0.f_8 };
			StringCopy(&(Global_2534821.f_39[0 /*16*/]), "", 64);
			Global_2534821.f_58 = -2;
			Global_2534821.f_56 = 0;
			Global_2534821.f_57 = 0;
		}
	}
}

int func_125(var uParam0)//Position - 0x3338
{
	if (Global_71590)
	{
		if (func_48() == 0)
		{
			return 0;
		}
		if (func_129(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) >= 1f)
				{
					return 0;
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	if (Global_2534821.f_1)
	{
	}
	if (Global_14733 == 1)
	{
		return 0;
	}
	if (Global_1574422)
	{
		return 0;
	}
	if (Global_2534821.f_36)
	{
		return 0;
	}
	if (func_117())
	{
		return 0;
	}
	if (((Global_36425 != 6 && Global_36425 != 8) && Global_36425 != 12) && Global_36425 != 15)
	{
		return 0;
	}
	if (func_128() && !func_127(12))
	{
		return 0;
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		return 0;
	}
	if (!func_126(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (Global_71850)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		if (!NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(uParam0) || NETWORK::NETWORK_IS_GAMER_BLOCKED_BY_ME(uParam0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_AM_I_MUTED_BY_GAMER(uParam0) || NETWORK::NETWORK_AM_I_BLOCKED_BY_GAMER(uParam0))
	{
		return 0;
	}
	if (NETWORK::_0x2FC5650B0271CB57())
	{
		if (MISC::IS_DURANGO_VERSION())
		{
			if (NETWORK::_0xFD8B834A8BA05048())
			{
				return 0;
			}
		}
		else if (MISC::IS_ORBIS_VERSION())
		{
			return 0;
		}
	}
	return 1;
}

int func_126(int iParam0)//Position - 0x34BC
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
			Var1 = { func_8(iParam0) };
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

bool func_127(int iParam0)//Position - 0x3595
{
	return Global_36425 == iParam0;
}

int func_128()//Position - 0x35A3
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	return 1;
}

int func_129(int iParam0, bool bParam1, bool bParam2)//Position - 0x35B8
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

void func_130()//Position - 0x3602
{
	func_121();
}

void func_131()//Position - 0x360E
{
	Global_2534821.f_1 = 1;
	Global_2534821.f_33 = -1;
	Global_2534821.f_34 = -1;
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14534) == 1)
	{
		if (Global_14541)
		{
			func_132(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
			if (Global_14496)
			{
				func_132(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			func_132(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
}

void func_132(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x3687
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
		func_133(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_133(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_133(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_133(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_133(sParam11);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_133(char* sParam0)//Position - 0x373A
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_134()//Position - 0x374C
{
	int iVar0;
	
	if (iLocal_96)
	{
		Global_48745 = 0;
		Global_48745.f_12 = 0;
		Global_48745.f_24 = 0;
		Global_48745.f_36 = 0;
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_48745.f_1[iVar0] = 0;
			Global_48745.f_13[iVar0] = 0;
			Global_48745.f_25[iVar0] = 0;
			Global_48745.f_37[iVar0] = 0;
			iVar0++;
		}
		iLocal_96 = 0;
	}
}

