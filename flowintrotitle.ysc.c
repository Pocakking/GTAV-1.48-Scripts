#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_10();
	}
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
	MISC::CLEAR_BIT(&(Global_106565.f_10010.f_25), 1);
	func_7();
	SCRIPT::SET_NO_LOADING_SCREEN(true);
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	iLocal_0 = unk_0x67D02A194A2FC2BD("OPENING_CREDITS");
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_0))
	{
		func_7();
		SYSTEM::WAIT(0);
	}
	while (!CAM::IS_SCREEN_FADED_OUT())
	{
		func_7();
		SYSTEM::WAIT(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (MISC::GET_GAME_TIMER() + 8000 + SYSTEM::ROUND((2f * 1000f)));
	while (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		func_7();
		if (!MISC::IS_BIT_SET(Global_106565.f_10010.f_25, 1))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (MISC::GET_GAME_TIMER() + SYSTEM::ROUND((2f * 1000f)));
				}
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_1)
			{
				MISC::SET_BIT(&(Global_106565.f_10010.f_25), 1);
				if (MISC::_0x6FDDF453C0C756EC() || MISC::IS_PC_VERSION())
				{
					func_4(1, 1);
					func_2();
				}
				else
				{
					func_1();
				}
			}
		}
		SYSTEM::WAIT(0);
	}
	func_10();
}

void func_1()//Position - 0x13E
{
	Global_93721 = 1;
}

int func_2()//Position - 0x14B
{
	if (func_3(0))
	{
		return 0;
	}
	if (Global_93721.f_8)
	{
		if (Global_93721.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_93721.f_10 > 1)
	{
		return 0;
	}
	Global_93721.f_10++;
	return 1;
}

bool func_3(bool bParam0)//Position - 0x196
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71838, 0);
}

void func_4(int iParam0, int iParam1)//Position - 0x1C1
{
	Global_93721.f_7 = iParam0;
	Global_93721.f_8 = iParam1;
}

void func_5(int iParam0)//Position - 0x1D9
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_0, "HIDE_LOGO");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(iParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_6(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)//Position - 0x200
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_0, "SHOW_LOGO");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(iParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fParam2);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fParam3);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fParam4);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fParam5);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fParam6);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fParam7);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_7()//Position - 0x251
{
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
	GRAPHICS::_SET_2D_LAYER(7);
	func_8();
}

void func_8()//Position - 0x26E
{
	RECORDING::_0xEB2D525B57F42B40();
	func_9();
}

void func_9()//Position - 0x27E
{
	Global_17272.f_134 = 1;
}

void func_10()//Position - 0x28C
{
	MISC::SET_BIT(&(Global_106565.f_10010.f_25), 1);
	if (iLocal_0 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_0);
	}
	GRAPHICS::_SET_2D_LAYER(4);
	SCRIPT::SET_NO_LOADING_SCREEN(false);
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

