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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
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
	uLocal_46 = HUD::_0x4A9923385BDB9DAD();
	iLocal_47 = HUD::_GET_BLIP_INFO_ID_ITERATOR();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_10();
	}
	while (!func_9(18))
	{
		func_1();
		SYSTEM::WAIT(0);
	}
	func_10();
}

void func_1()//Position - 0xA4
{
	switch (iLocal_48)
	{
		case 0:
			if (((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !MISC::IS_AUTO_SAVE_IN_PROGRESS()) && !func_8()) && !func_7())
			{
				SCRIPT::REQUEST_SCRIPT("taxiService");
				iLocal_48 = 1;
			}
			break;
		
		case 1:
			if (SCRIPT::HAS_SCRIPT_LOADED("taxiService"))
			{
				SYSTEM::START_NEW_SCRIPT("taxiService", 1828);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("taxiService");
				iLocal_48 = 2;
			}
			break;
		
		case 2:
			switch (func_5("AM_H_TAXI1"))
			{
				case 2:
					func_2("AM_H_TAXI1", 2, 0, 1000, 10000, 1, 0, 0, 0);
					break;
				
				case 1:
					iLocal_48 = 3;
					break;
			}
			break;
		
		case 3:
			switch (func_5("AM_H_TAXI2"))
			{
				case 2:
					func_2("AM_H_TAXI2", 2, 0, 1000, 10000, 1, 0, 0, 0);
					break;
				
				case 1:
					iLocal_48 = 4;
					break;
			}
			break;
		
		case 4:
			func_10();
			break;
	}
}

void func_2(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x19C
{
	func_3(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_3(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1BD
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_106565.f_20404.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_106565.f_20404[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_106565.f_20404.f_145 < 9)
	{
		StringCopy(&(Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_4), sParam1, 16);
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_9 = iParam5;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_11 = iParam6;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_12 = uParam2;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_13 = iParam7;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_14 = iParam8;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_10 = -1;
		}
		Global_106565.f_20404.f_145++;
		func_4();
	}
}

void func_4()//Position - 0x390
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_106565.f_20404.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_106565.f_20404.f_145)
	{
		if (MISC::IS_BIT_SET(Global_106565.f_20404[iVar0 /*16*/].f_11, 0))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[0])
			{
				Global_106565.f_20404.f_146[0] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_106565.f_20404[iVar0 /*16*/].f_11, 1))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[1])
			{
				Global_106565.f_20404.f_146[1] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_106565.f_20404[iVar0 /*16*/].f_11, 2))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[2])
			{
				Global_106565.f_20404.f_146[2] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_5(char* sParam0)//Position - 0x4B0
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_105208))
	{
		return 1;
	}
	if (func_6(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_6(char* sParam0)//Position - 0x4D7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_106565.f_20404.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_106565.f_20404[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_7()//Position - 0x512
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

bool func_8()//Position - 0x53C
{
	return Global_93721.f_1;
}

int func_9(int iParam0)//Position - 0x54A
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_330[iParam0 /*6*/];
}

void func_10()//Position - 0x576
{
	if (func_6("AM_H_TAXI1"))
	{
		func_11("AM_H_TAXI1", 1);
	}
	if (func_6("AM_H_TAXI2"))
	{
		func_11("AM_H_TAXI2", 1);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_11(char* sParam0, int iParam1)//Position - 0x5A6
{
	int iVar0;
	int iVar1;
	
	if (Global_105205 && iParam1)
	{
		if (func_14(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
		{
			HUD::CLEAR_HELP(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_106565.f_20404.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_106565.f_20404[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_106565.f_20404.f_145 - 2))
			{
				func_13(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_12((Global_106565.f_20404.f_145 - 1));
			Global_106565.f_20404.f_145 = (Global_106565.f_20404.f_145 - 1);
			func_4();
			return;
		}
		iVar0++;
	}
}

void func_12(int iParam0)//Position - 0x653
{
	StringCopy(&(Global_106565.f_20404[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_106565.f_20404[iParam0 /*16*/].f_4), "", 16);
	Global_106565.f_20404[iParam0 /*16*/].f_8 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_9 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_11 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_10 = -1;
	Global_106565.f_20404[iParam0 /*16*/].f_12 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_13 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_14 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_15 = 0;
}

void func_13(int iParam0, int iParam1)//Position - 0x6ED
{
	Global_106565.f_20404[iParam0 /*16*/] = { Global_106565.f_20404[iParam1 /*16*/] };
	Global_106565.f_20404[iParam0 /*16*/].f_4 = { Global_106565.f_20404[iParam1 /*16*/].f_4 };
	Global_106565.f_20404[iParam0 /*16*/].f_8 = Global_106565.f_20404[iParam1 /*16*/].f_8;
	Global_106565.f_20404[iParam0 /*16*/].f_10 = Global_106565.f_20404[iParam1 /*16*/].f_10;
	Global_106565.f_20404[iParam0 /*16*/].f_9 = Global_106565.f_20404[iParam1 /*16*/].f_9;
	Global_106565.f_20404[iParam0 /*16*/].f_11 = Global_106565.f_20404[iParam1 /*16*/].f_11;
	Global_106565.f_20404[iParam0 /*16*/].f_12 = Global_106565.f_20404[iParam1 /*16*/].f_12;
	Global_106565.f_20404[iParam0 /*16*/].f_13 = Global_106565.f_20404[iParam1 /*16*/].f_13;
	Global_106565.f_20404[iParam0 /*16*/].f_14 = Global_106565.f_20404[iParam1 /*16*/].f_14;
	Global_106565.f_20404[iParam0 /*16*/].f_15 = Global_106565.f_20404[iParam1 /*16*/].f_15;
}

int func_14(char* sParam0)//Position - 0x7FD
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

