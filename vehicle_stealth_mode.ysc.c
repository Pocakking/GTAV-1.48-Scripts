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
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (func_88(&iLocal_46))
	{
		while (!func_76())
		{
			func_64(&iLocal_46);
			if (func_54(&iLocal_46))
			{
			}
			else
			{
				func_14(&iLocal_46);
				SYSTEM::WAIT(0);
			}
		}
	}
	func_1();
}

void func_1()//Position - 0xA6
{
	func_13();
	if (func_10())
	{
		HUD::CLEAR_HELP(1);
	}
	if (func_8(&iLocal_46))
	{
		func_4(&iLocal_46);
	}
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_3();
	PLAYER::_0xEE4EBDD2593BA844(PLAYER::PLAYER_ID(), 0);
	func_2();
}

void func_2()//Position - 0xE3
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3()//Position - 0xEF
{
	MISC::CLEAR_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_794), 3);
}

void func_4(int iParam0)//Position - 0x10A
{
	func_7(0, 1);
	func_6(0, -1, 1);
	func_5(&(iParam0->f_6), 5);
}

void func_5(int iParam0, int iParam1)//Position - 0x128
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_6(bool bParam0, int iParam1, bool bParam2)//Position - 0x138
{
	if ((!SCRIPT::IS_THREAD_ACTIVE(Global_2416063.f_1475) || Global_2416063.f_1475 == SCRIPT::GET_ID_OF_THIS_THREAD()) || bParam2)
	{
		if (bParam0)
		{
			Global_2416063.f_1475 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_2416063.f_1476 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			Global_2416063.f_1475 = -1;
		}
		Global_2416063.f_1478 = iParam1;
		Global_2416063.f_1480 = bParam0;
	}
	else if (!bParam2)
	{
	}
}

void func_7(bool bParam0, bool bParam1)//Position - 0x1AA
{
	if ((!SCRIPT::IS_THREAD_ACTIVE(Global_2416063.f_1491) || Global_2416063.f_1491 == SCRIPT::GET_ID_OF_THIS_THREAD()) || bParam1)
	{
		if (bParam0)
		{
			Global_2416063.f_1491 = SCRIPT::GET_ID_OF_THIS_THREAD();
			MISC::SET_BIT(&(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_68.f_2), 23);
		}
		else
		{
			Global_2416063.f_1491 = -1;
			MISC::CLEAR_BIT(&(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_68.f_2), 23);
		}
	}
	else if (!bParam1)
	{
	}
}

bool func_8(int iParam0)//Position - 0x229
{
	return func_9(&(iParam0->f_6), 5);
}

bool func_9(int iParam0, int iParam1)//Position - 0x23A
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_10()//Position - 0x24B
{
	return ((((func_12("STEALTH_ON") || func_12("STEALTH_OFF")) || func_12(func_11())) || func_12("STEALTH_ON_P")) || func_12("STEALTH_OFF_P"));
}

char* func_11()//Position - 0x28E
{
	return "STEALTH_WARN";
}

int func_12(char* sParam0)//Position - 0x299
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_13()//Position - 0x2AC
{
	MISC::CLEAR_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_794), 1);
}

void func_14(int iParam0)//Position - 0x2C7
{
	func_51(iParam0);
	func_50(iParam0);
	if (func_49(iParam0))
	{
		if (((func_48(iParam0) && !func_47(iParam0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0->f_1)) && !func_46())
		{
			func_45(iParam0, 1, 0);
			func_44(iParam0);
		}
		else if (func_9(&(iParam0->f_6), 6) && func_47(iParam0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0->f_1) && !func_46())
			{
				func_45(iParam0, 0, 0);
				func_5(&(iParam0->f_6), 6);
				func_5(&(iParam0->f_6), 2);
			}
		}
	}
	if (func_43(iParam0))
	{
		PLAYER::_0xEE4EBDD2593BA844(PLAYER::PLAYER_ID(), 1);
		func_42();
		func_41(iParam0);
	}
	else if (func_40(iParam0))
	{
		PLAYER::_0xEE4EBDD2593BA844(PLAYER::PLAYER_ID(), 0);
		func_13();
		func_41(iParam0);
		func_39(iParam0, 5);
	}
	if (func_47(iParam0) && !func_48(iParam0))
	{
		func_37(iParam0);
		func_36();
		func_39(iParam0, 2);
		if (func_33(iParam0))
		{
			func_32();
		}
	}
	else
	{
		func_15(iParam0);
	}
	func_3();
	MISC::CLEAR_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_794), 4);
}

void func_15(int iParam0)//Position - 0x3FC
{
	int iVar0;
	
	if (((((((!func_9(&(iParam0->f_6), 0) && !func_9(&(iParam0->f_6), 2)) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && func_31(iParam0)) && !func_30(0)) && !func_29()) && func_27()) && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_1, -1, 0)))
	{
		func_21(iParam0, 1);
		func_20(&(iParam0->f_6), 3);
		iVar0 = func_19(iParam0->f_6.f_2, 3333, 10000);
		iParam0->f_6.f_2 = 0;
		func_17(func_18(iParam0), iVar0);
		func_16(iParam0);
		func_20(&(iParam0->f_6), 0);
	}
}

void func_16(int iParam0)//Position - 0x4AA
{
	func_20(&(iParam0->f_6), 2);
}

void func_17(char* sParam0, int iParam1)//Position - 0x4BB
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

char* func_18(int iParam0)//Position - 0x4D2
{
	if (func_49(iParam0))
	{
		return "STEALTH_OFF";
	}
	return "STEALTH_OFF_P";
}

int func_19(bool bParam0, int iParam1, int iParam2)//Position - 0x4EF
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_20(int iParam0, int iParam1)//Position - 0x506
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_21(int iParam0, int iParam1)//Position - 0x516
{
	int iVar0;
	
	if (func_49(iParam0))
	{
		switch (iParam0->f_2)
		{
			case 1181327175:
				iVar0 = (func_24(19004, -1, -1) + iParam1);
				if (iVar0 >= 0)
				{
					func_22(19004, iVar0, -1, 1);
				}
				break;
			}
	}
}

var func_22(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x559
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_23();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - STATS::_0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_23()//Position - 0xACC
{
	return Global_1312745;
}

int func_24(int iParam0, int iParam1, int iParam2)//Position - 0xAD8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_23();
	}
	iVar0 = 0;
	iVar1 = func_26(iParam0, iParam1);
	iVar2 = func_25(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_25(int iParam0)//Position - 0xB1E
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

int func_26(int iParam0, int iParam1)//Position - 0xEF1
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_23();
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

bool func_27()//Position - 0x1267
{
	return (!MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_794, 4) && !func_28());
}

bool func_28()//Position - 0x128D
{
	return ((Global_4456448.f_55685 == 6 || Global_4456448.f_55685 == 7) && Global_4456448.f_2 == 20);
}

bool func_29()//Position - 0x12C1
{
	return Global_68807;
}

int func_30(int iParam0)//Position - 0x12CD
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

int func_31(int iParam0)//Position - 0x1327
{
	if (func_49(iParam0))
	{
		switch (iParam0->f_2)
		{
			case 1181327175:
				return func_24(19004, -1, -1) < 3;
			}
		
		default:
	}
	return 1;
}

void func_32()//Position - 0x1356
{
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		func_17("STEALTH_WARN", 3000);
	}
}

int func_33(int iParam0)//Position - 0x1370
{
	int iVar0;
	
	if (func_30(0) || func_29())
	{
		return 0;
	}
	iVar0 = func_34(iParam0);
	switch (iVar0)
	{
		case 1:
			if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 114) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 99)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 100))
			{
				return 1;
			}
			break;
		
		case 0:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 114))
			{
				return 1;
			}
			break;
		
		case 2:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 92))
			{
				return 1;
			}
			break;
		
		case 3:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 68))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_34(int iParam0)//Position - 0x1414
{
	if (!func_35(iParam0))
	{
		return 4;
	}
	switch (iParam0->f_2)
	{
		case 1181327175:
			switch (iParam0->f_4)
			{
				case -1:
					return 1;
				
				case 0:
					return 2;
				
				default:
			}
			return 4;
		
		default:
	}
	return 4;
}

bool func_35(int iParam0)//Position - 0x145E
{
	return (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0));
}

void func_36()//Position - 0x147D
{
	PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 66, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 67, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 91, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 92, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
}

void func_37(int iParam0)//Position - 0x14E5
{
	int iVar0;
	
	if (((((((!func_9(&(iParam0->f_6), 0) && !func_9(&(iParam0->f_6), 1)) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && func_9(&(iParam0->f_6), 3)) && !func_30(0)) && !func_29()) && func_27()) && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_1, -1, 0)))
	{
		iVar0 = func_19(iParam0->f_6.f_2, 3333, 10000);
		iParam0->f_6.f_2 = 0;
		func_17(func_38(iParam0), iVar0);
		func_44(iParam0);
		func_20(&(iParam0->f_6), 0);
	}
}

char* func_38(int iParam0)//Position - 0x1586
{
	if (func_49(iParam0))
	{
		return "STEALTH_ON";
	}
	return "STEALTH_ON_P";
}

void func_39(int iParam0, int iParam1)//Position - 0x15A2
{
	if (func_48(iParam0))
	{
		return;
	}
	if (PLAYER::GET_MAX_WANTED_LEVEL() != iParam1)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(iParam1);
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > iParam1)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iParam1, 0);
	}
}

bool func_40(int iParam0)//Position - 0x15DD
{
	return (!func_9(iParam0, 0) && func_9(iParam0, 1));
}

void func_41(int iParam0)//Position - 0x15F9
{
	func_5(&(iParam0->f_6), 0);
	if (func_10())
	{
		HUD::CLEAR_HELP(1);
	}
	if (!func_49(iParam0))
	{
		if (func_47(iParam0))
		{
			func_5(&(iParam0->f_6), 1);
		}
		else
		{
			func_5(&(iParam0->f_6), 2);
		}
	}
}

void func_42()//Position - 0x163E
{
	MISC::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_794), 1);
}

bool func_43(int iParam0)//Position - 0x1659
{
	return (func_9(iParam0, 0) && !func_9(iParam0, 1));
}

void func_44(int iParam0)//Position - 0x1675
{
	func_20(&(iParam0->f_6), 1);
}

void func_45(int iParam0, bool bParam1, int iParam2)//Position - 0x1686
{
	switch (iParam0->f_2)
	{
		case 1181327175:
			unk_0xB251E0B33E58B424(iParam0->f_1, !bParam1, iParam2);
			break;
	}
}

bool func_46()//Position - 0x16AD
{
	return MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_794, 3);
}

bool func_47(int iParam0)//Position - 0x16C8
{
	return func_9(iParam0, 0);
}

bool func_48(int iParam0)//Position - 0x16D7
{
	return func_9(iParam0, 2);
}

bool func_49(int iParam0)//Position - 0x16E6
{
	return ((func_35(iParam0) && iParam0->f_3 == PLAYER::PLAYER_PED_ID()) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_1, -1, 0) == PLAYER::PLAYER_PED_ID());
}

void func_50(int iParam0)//Position - 0x1717
{
	if (func_10() && (func_30(0) || func_29()))
	{
		iParam0->f_6.f_2 = 1;
		HUD::CLEAR_HELP(1);
		func_5(&(iParam0->f_6), 0);
		if (func_47(iParam0))
		{
			func_5(&(iParam0->f_6), 1);
		}
		else
		{
			func_5(&(iParam0->f_6), 2);
			if (func_49(iParam0))
			{
				func_21(iParam0, -1);
			}
		}
	}
}

void func_51(int iParam0)//Position - 0x177D
{
	if (func_47(iParam0))
	{
		if (func_8(iParam0))
		{
			if (func_53())
			{
				func_4(iParam0);
			}
		}
		else if (!func_53())
		{
			func_52(iParam0);
		}
	}
	else if (func_8(iParam0))
	{
		func_4(iParam0);
	}
	MISC::CLEAR_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_794), 2);
}

void func_52(int iParam0)//Position - 0x17DA
{
	func_7(1, 1);
	func_6(1, -1, 1);
	func_20(&(iParam0->f_6), 5);
}

bool func_53()//Position - 0x17F8
{
	return MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_794, 2);
}

int func_54(int iParam0)//Position - 0x1813
{
	if (!func_35(iParam0))
	{
		return 1;
	}
	if (!func_63(iParam0))
	{
		return 1;
	}
	if (!func_62(iParam0->f_2))
	{
		return 1;
	}
	if (func_61(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 1;
	}
	if (func_60(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_57(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_55(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_55(int iParam0)//Position - 0x1886
{
	if (iParam0 > -1)
	{
		if (Global_2424047[iParam0 /*416*/].f_236 > -1)
		{
			if (func_56(Global_2424047[iParam0 /*416*/].f_236) == 4)
			{
				return 1;
			}
		}
		if (MISC::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_195, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_56(int iParam0)//Position - 0x18D2
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
	}
	return 6;
}

int func_57(int iParam0)//Position - 0x1B93
{
	if (iParam0 != func_59() && func_58(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_309, 3);
	}
	return 0;
}

int func_58(int iParam0, bool bParam1, bool bParam2)//Position - 0x1BC7
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

int func_59()//Position - 0x1C11
{
	return -1;
}

int func_60(int iParam0)//Position - 0x1C1A
{
	if (MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_23, 14))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_23, 11))
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0, bool bParam1, bool bParam2)//Position - 0x1C59
{
	if (iParam0 == func_59())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_23, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_23, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_62(int iParam0)//Position - 0x1CC3
{
	switch (iParam0)
	{
		case 1181327175:
			return 1;
		
		default:
	}
	return 0;
}

bool func_63(int iParam0)//Position - 0x1CDD
{
	return (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_1, 0));
}

void func_64(int iParam0)//Position - 0x1CFB
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = func_9(iParam0, 4);
	bVar1 = func_9(iParam0, 0);
	func_75(iParam0);
	if (bVar0)
	{
		func_20(iParam0, 3);
	}
	else
	{
		func_5(iParam0, 3);
	}
	if (bVar1)
	{
		func_20(iParam0, 1);
	}
	else
	{
		func_5(iParam0, 1);
	}
	if (func_35(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iParam0->f_1 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if (func_63(iParam0))
			{
				iParam0->f_2 = ENTITY::GET_ENTITY_MODEL(iParam0->f_1);
				if (BRAIN::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					func_20(iParam0, 2);
				}
			}
		}
	}
	if (func_63(iParam0))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0->f_1, -1, 0))
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_1, -1, 0);
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2, 0)) && PED::IS_PED_A_PLAYER(iVar2))
			{
				iParam0->f_3 = iVar2;
				if (iVar2 == PLAYER::PLAYER_PED_ID())
				{
					func_20(iParam0, 4);
					if (!func_9(iParam0, 3))
					{
						func_20(&(iParam0->f_6), 6);
					}
				}
			}
		}
		if (func_35(iParam0))
		{
			iParam0->f_4 = func_74(PLAYER::PLAYER_PED_ID(), 0);
		}
		if (func_49(iParam0))
		{
			if (func_73() && func_67(iParam0))
			{
				func_20(iParam0, 0);
			}
		}
		else
		{
			func_65(iParam0);
		}
	}
	if (func_43(iParam0))
	{
		iParam0->f_6.f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_65(int iParam0)//Position - 0x1E52
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_3) && func_66(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0->f_3)))
	{
		func_20(iParam0, 0);
	}
	else
	{
		func_5(iParam0, 0);
	}
}

bool func_66(int iParam0)//Position - 0x1E87
{
	return (iParam0 != -1 && MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_794, 1));
}

bool func_67(int iParam0)//Position - 0x1EA9
{
	bool bVar0;
	
	bVar0 = func_72();
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0->f_1))
	{
		func_71(iParam0);
		switch (iParam0->f_2)
		{
			case 1181327175:
				bVar0 = !unk_0xAEF12960FA943792(iParam0->f_1);
				break;
		}
	}
	else if (func_70(iParam0))
	{
		if (func_69(iParam0))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0->f_1);
		}
	}
	else
	{
		func_68(iParam0);
	}
	return bVar0;
}

void func_68(var uParam0)//Position - 0x1F0E
{
	func_20(&(uParam0->f_6), 4);
	uParam0->f_6.f_1 = MISC::GET_GAME_TIMER();
}

bool func_69(var uParam0)//Position - 0x1F29
{
	return (MISC::GET_GAME_TIMER() - uParam0->f_6.f_1) >= 200;
}

bool func_70(var uParam0)//Position - 0x1F3F
{
	return func_9(&(uParam0->f_6), 4);
}

void func_71(var uParam0)//Position - 0x1F50
{
	func_5(&(uParam0->f_6), 4);
}

bool func_72()//Position - 0x1F61
{
	return MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_794, 1);
}

bool func_73()//Position - 0x1F7C
{
	return !func_28();
}

int func_74(int iParam0, int iParam1)//Position - 0x1F89
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, 0))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_75(var uParam0)//Position - 0x200E
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_76()//Position - 0x202E
{
	if (func_77())
	{
		return 1;
	}
	return 0;
}

int func_77()//Position - 0x2042
{
	var uVar0;
	
	func_85(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_84())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_83())
	{
		return 1;
	}
	if (func_82(157))
	{
		if (!func_81())
		{
			return 1;
		}
	}
	if (func_82(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_78() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_78()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_78()//Position - 0x20CC
{
	switch (func_80())
	{
		case 0:
			return func_79();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_79()//Position - 0x20FF
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_80()//Position - 0x2123
{
	return Global_25765;
}

bool func_81()//Position - 0x212E
{
	return Global_2448756.f_586;
}

int func_82(int iParam0)//Position - 0x213D
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_83()//Position - 0x2154
{
	return Global_2458613;
}

bool func_84()//Position - 0x2160
{
	return Global_2448756.f_581;
}

void func_85(var uParam0)//Position - 0x216F
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
					func_86(iVar0);
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

void func_86(int iParam0)//Position - 0x21E2
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_58(vVar0.y, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_87(iVar4, &bVar5))
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

int func_87(int iParam0, var uParam1)//Position - 0x2263
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, 1);
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

int func_88(int iParam0)//Position - 0x22C2
{
	func_64(iParam0);
	if (func_63(iParam0))
	{
		if (func_49(iParam0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0->f_1))
			{
				if (!func_46())
				{
					func_45(iParam0, 0, 0);
				}
				else
				{
					func_20(&(iParam0->f_6), 3);
				}
			}
		}
		else
		{
			func_20(&(iParam0->f_6), 3);
		}
	}
	return 1;
}

