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
	struct<5> Local_43 = { 0, 0, 0, 0, 0 } ;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	char* sLocal_54 = NULL;
	struct<5> Local_55 = { 0, 0, 0, 0, 0 } ;
	vector3 vLocal_60 = { 0f, 0f, 0f };
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
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
	iLocal_48 = -1;
	iLocal_49 = -1;
	fLocal_52 = 1.7f;
	fLocal_53 = 0f;
	sLocal_54 = "";
	iLocal_63 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_164();
	}
	Local_43 = { ScriptParam_0 };
	func_163();
	func_162();
	func_157(iLocal_48, 0, 0);
	SYSTEM::SETTIMERA(0);
	func_156();
	func_152();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_151(iLocal_48);
		func_150();
		func_148();
		func_141();
		func_157(iLocal_48, 0, 0);
		func_163();
		func_9();
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_8())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0x106
{
	if (func_7() || func_6())
	{
		func_5();
		func_2();
	}
}

void func_2()//Position - 0x127
{
	if ((!func_4() && !func_3()) && Global_2449537)
	{
		Global_4456448.f_138474 = 0;
	}
}

bool func_3()//Position - 0x155
{
	return Global_2448756.f_579;
}

bool func_4()//Position - 0x164
{
	return Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_196 != 0;
}

void func_5()//Position - 0x17B
{
	Global_2448756.f_644 = 1;
}

var func_6()//Position - 0x18B
{
	return Global_2448756.f_623;
}

bool func_7()//Position - 0x19A
{
	return MISC::IS_BIT_SET(Global_2448756.f_2, 11);
}

bool func_8()//Position - 0x1AE
{
	return MISC::IS_BIT_SET(Global_2449538.f_1.f_2810, 3);
}

void func_9()//Position - 0x1C4
{
	bool bVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(Local_43.f_1, 0))
	{
		func_164();
	}
	if (bLocal_50)
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_164();
		}
	}
	func_140();
	bVar0 = true;
	switch (vLocal_60.x)
	{
		case 4:
			func_139();
			return;
		
		case 5:
			func_136();
			return;
		
		case 6:
			func_134();
			return;
		
		case 7:
			func_133();
			return;
		
		case 8:
			func_132();
			return;
		
		case 9:
			func_130();
			return;
		
		case 10:
			func_129();
			func_126();
			func_125();
			return;
		
		case 11:
			func_124();
			return;
		
		case 12:
			break;
		
		default:
			bVar0 = false;
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (!vLocal_60.x == 12)
	{
		return;
	}
	switch (vLocal_60.y)
	{
		case 1:
			if (!func_123())
			{
				func_112();
				func_126();
			}
			break;
		
		case 2:
			func_110();
			break;
		
		case 12:
			func_97();
			break;
		
		case 3:
			func_10();
			break;
		
		default:
			break;
	}
}

void func_10()//Position - 0x2DF
{
	var uVar0;
	char* sVar2;
	struct<53> Var3;
	int iVar61;
	
	if (!MISC::IS_BIT_SET(Global_1671295.f_3, 27))
	{
		PED::SET_PED_TO_RAGDOLL(Local_43.f_1, 3000, 3500, 0, 1, 1, 0);
	}
	Global_1666256 = 1;
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(2500);
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_96(&uVar0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), 0, 1);
		}
		while ((ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)) && NETWORK::_0x422F32CC7E56ABAD(PLAYER::PLAYER_PED_ID()))
		{
			SYSTEM::WAIT(0);
		}
		MISC::CLEAR_BIT(&(Global_1671295.f_3), 27);
		func_85(PLAYER::PLAYER_ID(), 0, 57344, 0);
		Global_2405071.f_2668 = 1;
		if (MISC::IS_BIT_SET(Global_1671295, 15))
		{
			MISC::CLEAR_BIT(&Global_1671295, 15);
		}
		if (MISC::IS_BIT_SET(Global_1671295.f_2, 6))
		{
			MISC::CLEAR_BIT(&(Global_1671295.f_2), 6);
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			Global_2405071.f_2669 = 1;
		}
		else
		{
			Global_2405071.f_2669 = 0;
		}
		if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
		{
			CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
		}
		if (func_81(1))
		{
			func_68(0);
		}
		func_66(1);
		func_164();
	}
	sVar2 = "";
	Var3.f_3 = 1064514355;
	Var3.f_30 = 1148829696;
	Var3.f_31 = 1148829696;
	Var3.f_52 = 1148829696;
	iVar61 = 7;
	switch (func_61())
	{
		case 0:
			if (func_59() != 2)
			{
				iVar61 = 0;
			}
			else
			{
				iVar61 = 1;
			}
			break;
		
		case 1:
			if (!func_58(126))
			{
				iVar61 = 2;
			}
			else
			{
				iVar61 = 3;
			}
			break;
		
		case 2:
			if (!func_57(4))
			{
				if (func_58(58))
				{
					iVar61 = 4;
				}
				if (func_58(59))
				{
					iVar61 = 5;
				}
				if (iVar61 == 7)
				{
					if (!func_56())
					{
						iVar61 = 4;
					}
					else
					{
						iVar61 = 5;
					}
				}
			}
			else
			{
				iVar61 = 6;
			}
			break;
	}
	switch (iVar61)
	{
		case 0:
			sVar2 = "DWC_MICHAEL_mansion";
			Var3 = "SAVEM_Default@";
			Var3.f_1 = "M_GetOut_R";
			Var3.f_2 = "M_GetOut_R_CAM";
			Var3.f_5 = { -814.181f, 181.1f, 75.74f };
			Var3.f_8 = { 0f, 0f, 21.1994f };
			Var3.f_4 = -1871534317;
			break;
		
		case 1:
			sVar2 = "DWC_MICHAEL_trailer";
			Var3 = "SAVECountryside@";
			Var3.f_1 = "M_GetOut_countryside";
			Var3.f_2 = "M_GetOut_countryside_CAM";
			Var3.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var3.f_8 = { 0f, 0f, 29.7938f };
			Var3.f_4 = -1871534317;
			break;
		
		case 2:
			sVar2 = "DWC_FRANKLIN_city";
			Var3 = "SWITCH@FRANKLIN@BED";
			Var3.f_1 = "Sleep_GetUp_RubEyes";
			Var3.f_2 = "Sleep_GetUp_RubEyes_CAM";
			Var3.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			Var3.f_8 = { 0f, 0f, -179.653f };
			Var3.f_4 = -1871534317;
			break;
		
		case 3:
			sVar2 = "DWC_FRANKLIN_hills";
			Var3 = "SAVEBighouse@";
			Var3.f_1 = "F_GetOut_r_bighouse";
			Var3.f_2 = "F_GetOut_r_bighouse_CAM";
			Var3.f_5 = { -1.049f, 524.283f, 170.064f };
			Var3.f_8 = { 0f, 0f, 24f };
			Var3.f_4 = -1871534317;
			break;
		
		case 4:
			sVar2 = "DWC_TREVOR_trailer";
			Var3 = "SAVECountryside@";
			Var3.f_1 = "T_GetOut_countryside";
			Var3.f_2 = "T_GetOut_countryside_CAM";
			Var3.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var3.f_8 = { 0f, 0f, 29.7938f };
			Var3.f_4 = -1871534317;
			break;
		
		case 5:
			sVar2 = "DWC_TREVOR_beach";
			Var3 = "SAVEVeniceB@";
			Var3.f_1 = "T_GetOut_r_veniceB";
			Var3.f_2 = "T_GetOut_r_veniceB_CAM";
			Var3.f_5 = { -1148.438f, -1512.246f, 9.689f };
			Var3.f_8 = { 0f, 0f, 36.25f };
			Var3.f_4 = -1871534317;
			break;
		
		case 6:
			sVar2 = "DWC_TREVOR_stripclub";
			Var3 = "SAVECouch@";
			Var3.f_1 = "T_GetOut_couch";
			Var3.f_2 = "T_GetOut_couch_CAM";
			Var3.f_5 = { 94.53f, -1289.86f, 28.27f };
			Var3.f_8 = { 0f, 0f, 29.7938f };
			Var3.f_4 = -1871534317;
			break;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_43.f_1, 0))
	{
		ENTITY::SET_ENTITY_COORDS(Local_43.f_1, Var3.f_5, 1, 0, 0, 1);
	}
	SYSTEM::WAIT(500);
	StringCopy(&(Var3.f_11), "", 16);
	Var3.f_15 = -1f;
	func_12(sVar2, &Var3, "");
	func_11(126, 1);
	func_164();
}

void func_11(int iParam0, int iParam1)//Position - 0x749
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_52236[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_52236[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_12(char* sParam0, var uParam1, char* sParam2)//Position - 0x7A6
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	int iVar174;
	int iVar175;
	char* sVar176;
	char* sVar177;
	char* sVar178;
	int iVar179;
	float fVar180;
	float fVar181;
	int iVar182;
	int iVar183;
	int iVar184;
	float fVar185;
	vector3 vVar186;
	vector3 vVar189;
	float fVar192;
	float fVar193;
	float fVar194;
	vector3 vVar195;
	float fVar198;
	float fVar199;
	float fVar200;
	vector3 vVar201;
	vector3 vVar204;
	float fVar207;
	int iVar208;
	float fVar209;
	float fVar210;
	vector3 vVar211;
	float fVar214;
	float fVar215;
	float fVar216;
	vector3 vVar217;
	vector3 vVar220;
	float fVar223;
	int iVar224;
	bool bVar225;
	bool bVar226;
	int iVar227;
	
	fVar0 = 0f;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
	}
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_5, 4500f);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_5, 4500f);
	MISC::CLEAR_AREA(uParam1->f_5, 5f, 1, 0, 0, false);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam1->f_5, 1, 0, 0, 1);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
	SYSTEM::WAIT(0);
	MISC::SET_GAME_PAUSED(1);
	STREAMING::REQUEST_ANIM_DICT(*uParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
	{
	}
	else
	{
		STREAMING::REQUEST_ANIM_DICT(uParam1->f_16);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_51(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	iVar1 = MISC::GET_GAME_TIMER() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > MISC::GET_GAME_TIMER())
	{
		bVar2 = true;
		STREAMING::REQUEST_ANIM_DICT(*uParam1);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(*uParam1))
		{
			bVar2 = false;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
		{
			STREAMING::REQUEST_ANIM_DICT(uParam1->f_16);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
		SYSTEM::WAIT(0);
	}
	func_48();
	if (!func_47(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		PATHFIND::SET_ROADS_IN_AREA(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, false, 1);
		MISC::CLEAR_AREA_OF_VEHICLES(uParam1->f_5 + uParam1->f_19, (SYSTEM::VMAG(uParam1->f_22) + 25f), 0, 0, 0, 0, false, 0);
		MISC::CLEAR_AREA(uParam1->f_5 + uParam1->f_19, (SYSTEM::VMAG(uParam1->f_22) + 25f), 1, 0, 0, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
		BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	}
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	MISC::SET_GAME_PAUSED(0);
	MISC::CLEAR_AREA(uParam1->f_5, 15f, 1, 0, 0, false);
	PED::_0x4759CC730F947C81();
	VEHICLE::_0x48ADC8A773564670();
	func_45();
	while (func_44())
	{
		SYSTEM::WAIT(0);
	}
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(250);
	}
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(1);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar4 = PED::CREATE_SYNCHRONIZED_SCENE(uParam1->f_5, uParam1->f_8, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar4, 0);
		PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(iVar4, 0);
		iVar5 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != -1871534317)
		{
			iVar6 |= 2;
		}
		func_42(PLAYER::PLAYER_PED_ID(), uParam1->f_18);
		BRAIN::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		PED::_0x129466ED55140F8D(PLAYER::PLAYER_PED_ID(), 1);
		PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
		bVar3 = PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77, true);
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iVar5, iVar4, uParam1->f_2, *uParam1);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_17))
		{
			BRAIN::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_41(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_11)))
	{
		iVar174 = func_61();
		iVar175 = -1;
		sVar176 = "";
		switch (iVar174)
		{
			case 0:
				iVar175 = 0;
				sVar176 = "MICHAEL";
				break;
			
			case 1:
				iVar175 = 1;
				sVar176 = "FRANKLIN";
				break;
			
			case 2:
				iVar175 = 2;
				sVar176 = "TREVOR";
				break;
			
			default:
				break;
		}
		func_40(&uVar9, iVar175, PLAYER::PLAYER_PED_ID(), sVar176, 0, 1);
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4))
	{
		sVar177 = "WalkInterruptible";
		sVar178 = "ForceBlendout";
		while (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!bVar8)
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_26))
					{
						GRAPHICS::_START_SCREEN_EFFECT(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_27))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_28))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, uParam1->f_28, uParam1->f_27, 0);
							bVar8 = true;
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_29))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, uParam1->f_29, uParam1->f_27, 0);
							bVar8 = true;
						}
					}
				}
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			HUD::CLEAR_REMINDER_MESSAGE();
			func_35(0);
			iVar179 = MISC::GET_GAME_TIMER();
			if (iVar179 >= (Global_36976 - 500))
			{
				func_34(4000);
			}
			fVar180 = -1f;
			fVar181 = -1f;
			fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar4);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_11)))
			{
				if (!bVar7)
				{
					if (fVar0 >= uParam1->f_15)
					{
						if (func_22(&uVar9, "PRSAUD", &(uParam1->f_11), 3, 0, 0, 0))
						{
							bVar7 = true;
						}
					}
				}
			}
			iVar182 = 0;
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sVar177)))
			{
				iVar183 = (PAD::GET_CONTROL_VALUE(2, 195) - 128);
				iVar184 = (PAD::GET_CONTROL_VALUE(2, 196) - 128);
				if (((iVar183 < 64 && iVar183 > -64) && iVar184 < 64) && iVar184 > -64)
				{
				}
				else
				{
					iVar182 = 1;
				}
			}
			else
			{
				fVar180 = -1f;
				fVar181 = -1f;
				iVar182 = 0;
				uParam1->f_3 = uParam1->f_3;
				fVar180 = fVar180;
				fVar181 = fVar181;
			}
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar185 = 1.5f;
						vVar186 = { CAM::_GET_GAMEPLAY_CAM_COORDS() };
						vVar189 = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f) };
						fVar192 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar186, vVar189, true);
						fVar185 = func_21(fVar185, 0.001f, (fVar192 - 0.75f));
						if (fVar185 < 0f)
						{
							fVar185 = 0.001f;
						}
						func_20(&(uParam1->f_34), PLAYER::PLAYER_PED_ID(), func_61(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_19(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = MISC::GET_GAME_TIMER();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							vVar195 = { CAM::_GET_GAMEPLAY_CAM_ROT(2) };
							fVar198 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
							fVar199 = vVar195.z;
							fVar200 = fVar198;
							uParam1->f_57 = (fVar199 - fVar200);
							if (uParam1->f_57 < 360f)
							{
								uParam1->f_57 = (uParam1->f_57 + 360f);
							}
							if (uParam1->f_57 > 360f)
							{
								uParam1->f_57 = (uParam1->f_57 - 360f);
							}
						}
						fVar193 = uParam1->f_56;
						fVar194 = uParam1->f_57;
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar193, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar194);
						CAM::_SET_GAMEPLAY_CAM_RAW_PITCH(fVar193);
						CAM::_SET_GAMEPLAY_CAM_RAW_YAW(fVar194);
						vVar201 = { CAM::_GET_GAMEPLAY_CAM_COORDS() };
						vVar204 = { CAM::GET_GAMEPLAY_CAM_COORD() };
						fVar207 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar201, vVar204, true);
						iVar208 = SYSTEM::ROUND((fVar207 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						CAM::_0x59424BD75174C9B1();
						if (func_16(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sVar178)) || iVar182)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					BRAIN::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					switch (uParam1->f_4)
					{
						case -1871534317:
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 1, 0, 0);
							CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
							break;
						
						case -668482597:
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 1, 0, 0);
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 500, 0, 1, 0);
							if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									vVar211 = { CAM::_GET_GAMEPLAY_CAM_ROT(2) };
									fVar214 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
									fVar215 = vVar211.z;
									fVar216 = fVar214;
									uParam1->f_31 = (fVar215 - fVar216);
									if (uParam1->f_31 < 360f)
									{
										uParam1->f_31 = (uParam1->f_31 + 360f);
									}
									if (uParam1->f_31 > 360f)
									{
										uParam1->f_31 = (uParam1->f_31 - 360f);
									}
								}
								fVar209 = uParam1->f_30;
								fVar210 = uParam1->f_31;
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar209, 1065353216);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar210);
								vVar217 = { CAM::_GET_GAMEPLAY_CAM_COORDS() };
								vVar220 = { CAM::GET_GAMEPLAY_CAM_COORD() };
								fVar223 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar217, vVar220, true);
								iVar224 = SYSTEM::ROUND((fVar223 * 1000f));
								CAM::RENDER_SCRIPT_CAMS(false, true, iVar224, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4))
					{
						PED::DETACH_SYNCHRONIZED_SCENE(iVar4);
						iVar4 = -1;
					}
				}
			}
			SYSTEM::WAIT(0);
		}
	}
	if (!func_47(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		BRAIN::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	bVar225 = CAM::_0x3044240D2E0FA842();
	bVar226 = false;
	if (uParam1->f_32)
	{
		CAM::_0x59424BD75174C9B1();
		if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar226 = true;
		}
	}
	if (bVar225 || bVar226)
	{
		while ((bVar225 || bVar226) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (bVar225)
			{
			}
			if (bVar226)
			{
			}
			iVar227 = 2;
			func_15(1, 26, &iVar227);
			func_15(1, 79, &iVar227);
			func_15(1, 1, &iVar227);
			func_15(1, 2, &iVar227);
			func_15(0, 22, &iVar227);
			func_15(0, 36, &iVar227);
			func_15(0, 142, &iVar227);
			func_15(0, 141, &iVar227);
			func_15(0, 140, &iVar227);
			func_15(0, 263, &iVar227);
			func_15(0, 264, &iVar227);
			SYSTEM::WAIT(0);
			bVar225 = CAM::_0x3044240D2E0FA842();
			bVar226 = false;
			if (uParam1->f_32)
			{
				CAM::_0x59424BD75174C9B1();
				if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar226 = true;
				}
			}
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
	{
		STREAMING::REMOVE_ANIM_DICT(uParam1->f_16);
	}
	STREAMING::REMOVE_ANIM_DICT(*uParam1);
	CAM::DESTROY_CAM(iVar5, 0);
	func_13(&(uParam1->f_34));
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77, bVar3);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	}
	sParam0 = sParam0;
}

void func_13(var uParam0)//Position - 0x11E1
{
	func_14(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
}

void func_14(var uParam0)//Position - 0x11FC
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		CAM::DESTROY_CAM(uParam0->f_1, 0);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_2))
	{
		CAM::DESTROY_CAM(uParam0->f_2, 0);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_3))
	{
		CAM::DESTROY_CAM(uParam0->f_3, 0);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_4))
	{
		CAM::DESTROY_CAM(uParam0->f_4, 0);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)//Position - 0x1254
{
	PAD::DISABLE_CONTROL_ACTION(iParam0, iParam1, 1);
	*iParam2++;
}

int func_16(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x126D
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	float fVar21;
	
	switch (*uParam0)
	{
		case 0:
			func_17();
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5, 0))
			{
				func_14(uParam0);
				vVar0 = { CAM::_GET_GAMEPLAY_CAM_COORDS() };
				if (bParam1)
				{
					vVar0 = { vVar0 + ENTITY::GET_ENTITY_VELOCITY(uParam0->f_5) * FtoV(MISC::GET_FRAME_TIME()) };
				}
				vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_5, vVar0) };
				vVar6 = { CAM::_GET_GAMEPLAY_CAM_ROT(2) };
				vVar9 = { vVar6 + uParam0->f_9 };
				vVar12 = { vVar9 - ENTITY::GET_ENTITY_ROTATION(uParam0->f_5, 2) };
				vVar15 = { (-SYSTEM::SIN(vVar9.z) * SYSTEM::COS(vVar9.x)), (SYSTEM::COS(vVar9.z) * SYSTEM::COS(vVar9.x)), SYSTEM::SIN(vVar9.x) };
				vVar18 = { (-SYSTEM::SIN(vVar12.z) * SYSTEM::COS(vVar12.x)), (SYSTEM::COS(vVar12.z) * SYSTEM::COS(vVar12.x)), SYSTEM::SIN(vVar12.x) };
				fVar21 = CAM::_0x80EC114669DAEFF4();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = CAM::CREATE_CAMERA(1775630800, 0);
				}
				uParam0->f_1 = CAM::CREATE_CAMERA(26379945, 1);
				if (bParam1)
				{
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1, uParam0->f_5, vVar3, 1);
				}
				else
				{
					CAM::SET_CAM_COORD(uParam0->f_1, vVar0);
				}
				CAM::SET_CAM_ROT(uParam0->f_1, vVar6, 2);
				CAM::SET_CAM_FOV(uParam0->f_1, fVar21);
				uParam0->f_2 = CAM::CREATE_CAMERA(26379945, 1);
				if (bParam1 && !bParam4)
				{
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_2, uParam0->f_5, vVar3 + vVar18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					CAM::SET_CAM_COORD(uParam0->f_2, vVar0 + vVar15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				CAM::SET_CAM_ROT(uParam0->f_2, vVar6, 2);
				CAM::SET_CAM_FOV(uParam0->f_2, fVar21);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = CAM::CREATE_CAMERA(26379945, 1);
					if (bParam1 && !bParam4)
					{
						CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_4, uParam0->f_5, vVar3 + vVar18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						CAM::SET_CAM_COORD(uParam0->f_4, vVar0 + vVar15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					CAM::SET_CAM_ROT(uParam0->f_4, vVar6, 2);
					CAM::SET_CAM_FOV(uParam0->f_4, fVar21);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					CAM::_0x0FB82563989CF4FB(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						CAM::_0x0FB82563989CF4FB(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					CAM::_0x0FB82563989CF4FB(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					CAM::_0xD1B0F412F109EA5D(uParam0->f_3, iParam6);
					CAM::SET_CAM_ACTIVE(uParam0->f_3, true);
				}
				else
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				uParam0->f_7 = MISC::GET_GAME_TIMER();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			func_17();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (MISC::GET_GAME_TIMER() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									GRAPHICS::_START_SCREEN_EFFECT("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									GRAPHICS::_START_SCREEN_EFFECT("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									GRAPHICS::_START_SCREEN_EFFECT("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							GRAPHICS::_START_SCREEN_EFFECT("CamPushInNeutral", 0, 0);
						}
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (MISC::GET_GAME_TIMER() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_14(uParam0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
				}
				return 1;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_17()//Position - 0x1610
{
	RECORDING::_0xEB2D525B57F42B40();
	func_18();
}

void func_18()//Position - 0x1620
{
	Global_17272.f_134 = 1;
}

void func_19(var uParam0, vector3 vParam1)//Position - 0x162E
{
	uParam0->f_9 = { vParam1 };
}

void func_20(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1640
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
}

float func_21(float fParam0, float fParam1, float fParam2)//Position - 0x1678
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x169F
{
	func_33(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15873 = 0;
	Global_15875 = 0;
	Global_15880 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 0;
	Global_2621441 = 0;
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)//Position - 0x16ED
{
	Global_15867 = 0;
	if (Global_15866 == 0 || Global_15868 == 2)
	{
		if (Global_15866 != 0)
		{
			if (iParam1 > Global_15868)
			{
				if (Global_15873 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_14553.f_1 = 3;
					Global_15866 = 0;
					Global_15867 = 1;
					Global_15919 = 0;
					Global_15862 = 0;
					Global_15863 = 0;
					Global_15877 = 0;
					Global_15876 = 0;
					Global_14552 = 0;
				}
				else
				{
					func_32();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_31(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_30();
		Global_15155 = { Global_15320 };
		Global_15872 = Global_15873;
		Global_15879 = Global_15880;
		Global_2621442 = Global_2621441;
		Global_15881 = { Global_15897 };
		Global_15874 = Global_15875;
		Global_16856 = Global_16857;
		Global_16864 = { Global_16870 };
		Global_16858 = Global_16859;
		Global_16860 = Global_16861;
		Global_16862 = Global_16863;
		Global_15485.f_370 = Global_16855;
		Global_15485.f_368 = Global_16853;
		Global_15485.f_369 = Global_16854;
		Global_15862 = Global_15863;
		if (Global_15872)
		{
			MISC::CLEAR_BIT(&Global_2423, 20);
			MISC::CLEAR_BIT(&Global_2424, 17);
			MISC::CLEAR_BIT(&Global_2425, 0);
			if (bParam2)
			{
				func_28();
				if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14553.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14519 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_27())
				{
					return 0;
				}
				if (BRAIN::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_71590)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_26())
			{
				return 0;
			}
			else
			{
				switch (Global_14553.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_2423, 9))
				{
					return 0;
				}
			}
			func_25();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_24();
		return 1;
	}
	if (Global_15866 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15868 || iParam1 == Global_15868)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_32();
	}
	return 0;
}

void func_24()//Position - 0x19B9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14734[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_15866 = 1;
}

void func_25()//Position - 0x19E9
{
	Global_15919 = Global_15918;
	Global_15913 = Global_15914;
	Global_15960 = { Global_15948 };
	Global_15966 = { Global_15954 };
	Global_15921 = Global_15920;
	Global_15990 = { Global_15972 };
	Global_15996 = { Global_15978 };
	Global_16002 = { Global_15984 };
	Global_16008 = { Global_16014 };
	Global_1738 = Global_1739;
	Global_1740 = Global_1741;
	Global_15877 = Global_15878;
	Global_15879 = Global_15880;
	Global_15881 = { Global_15897 };
	Global_15870 = Global_15871;
	Global_16882 = 0;
	Global_15915 = 0;
	Global_15916 = 0;
	MISC::CLEAR_BIT(&Global_2424, 16);
}

int func_26()//Position - 0x1A7E
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_27()//Position - 0x1AA5
{
	int iVar0;
	int iVar1;
	
	if (Global_71590)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
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

void func_28()//Position - 0x1B3E
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
		Global_14553 = func_61();
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

bool func_29(int iParam0)//Position - 0x1BE0
{
	return Global_36425 == iParam0;
}

void func_30()//Position - 0x1BEE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15155[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15155[iVar0 /*10*/].f_1), "", 24);
		Global_15155[iVar0 /*10*/].f_7 = 0;
		Global_15155[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15155.f_161 = -99;
	Global_15155.f_162 = { 0f, 0f, 0f };
}

bool func_31(int iParam0, int iParam1)//Position - 0x1C44
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

void func_32()//Position - 0x1C7F
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16877 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14553.f_1 == 9) || Global_14552 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15866 = 6;
		Global_14553.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_15866 = 6;
		return;
	}
}

void func_33(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x1CD6
{
	Global_15320 = { *uParam0 };
	Global_1739 = iParam1;
	StringCopy(&Global_15936, sParam2, 24);
	Global_16855 = uParam5;
	if (iParam3 == 0)
	{
		Global_16853 = 1;
		Global_16851 = 0;
	}
	else
	{
		Global_16853 = 0;
		Global_16851 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16854 = 1;
		Global_16852 = 0;
	}
	else
	{
		Global_16854 = 0;
		Global_16852 = 1;
	}
}

void func_34(int iParam0)//Position - 0x1D2C
{
	Global_36976 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_35(int iParam0)//Position - 0x1D3E
{
	if (func_39())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_38(0))
		{
			func_36(iParam0);
		}
		MISC::SET_BIT(&Global_2424, 2);
	}
}

void func_36(int iParam0)//Position - 0x1D71
{
	if (func_39())
	{
		return;
	}
	if (Global_14725)
	{
		func_37(0, 0);
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
	if (!func_26())
	{
		Global_14553.f_1 = 3;
	}
}

void func_37(bool bParam0, bool bParam1)//Position - 0x1DEB
{
	if (bParam0)
	{
		if (func_38(0))
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

int func_38(int iParam0)//Position - 0x1E5F
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

bool func_39()//Position - 0x1EB9
{
	return MISC::IS_BIT_SET(Global_1681628, 19);
}

void func_40(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1ECB
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71590)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

void func_41(char* sParam0, int iParam1)//Position - 0x1F66
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_42(int iParam0, var uParam1)//Position - 0x1F7D
{
	if (func_43(uParam1, 1))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_43(uParam1, 2))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_43(uParam1, 4))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_43(uParam1, 8))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_43(uParam1, 16))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_43(uParam1, 32))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_43(uParam1, 64))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_43(uParam1, 128))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_43(uParam1, 256))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_43(uParam1, 512))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (func_43(uParam1, 0))
	{
	}
}

bool func_43(var uParam0, int iParam1)//Position - 0x2074
{
	return (uParam0 && iParam1) != 0;
}

int func_44()//Position - 0x2083
{
	if (((Global_93682 == 13 || Global_93682 == 10) || Global_93682 == 11) || Global_93682 == 12)
	{
		return 0;
	}
	return 1;
}

void func_45()//Position - 0x20C1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_90645[iVar0 /*17*/] && !Global_90645[iVar0 /*17*/].f_1)
		{
			if (Global_90645[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_90645[iVar0 /*17*/].f_5 != 88 && Global_90645[iVar0 /*17*/].f_5 != 89) && Global_90645[iVar0 /*17*/].f_5 != 92)
				{
					func_46(Global_90645[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_46(int iParam0, bool bParam1)//Position - 0x2148
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_87697[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_87697[iParam0 /*2*/] = 0;
	}
}

bool func_47(vector3 vParam0, vector3 vParam3, bool bParam6)//Position - 0x2186
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_48()//Position - 0x21CD
{
	func_49();
	func_66(1);
}

void func_49()//Position - 0x21DE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = Global_37371[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_157(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_37345[iVar2 /*5*/] == 0)
		{
			func_50(iVar2);
		}
		iVar2++;
	}
}

void func_50(int iParam0)//Position - 0x223E
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_37345[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_37345[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_37582 = 0;
		}
	}
	Global_37345[iParam0 /*5*/] = 13;
	Global_37345[iParam0 /*5*/].f_1 = 0;
	Global_37345[iParam0 /*5*/].f_2 = 0;
	Global_37345[iParam0 /*5*/].f_3 = 0;
	Global_37345[iParam0 /*5*/].f_4 = 0;
	Global_37343 = (Global_37343 - 1);
	if (Global_37343 < 0)
	{
		Global_37343 = 0;
	}
}

int func_51(vector3 vParam0, float fParam3, int iParam4, int iParam5)//Position - 0x22C1
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		func_55(0);
		MISC::CLEAR_AREA(vParam0, 5f, 1, 0, 0, false);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vParam0, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
		}
		STREAMING::NEW_LOAD_SCENE_START_SPHERE(vParam0, 4500f, 0);
		SYSTEM::WAIT(0);
		MISC::CLEAR_AREA(vParam0, 5000f, 1, 0, 0, false);
		MISC::CLEAR_AREA_OF_OBJECTS(vParam0, 5000f, 0);
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(vParam0, 5000f);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(vParam0, 5000f);
		func_54();
		func_53();
		SYSTEM::SETTIMERA(0);
		func_55(1);
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(vParam0, 4500f, 0))
			{
				SYSTEM::WAIT(0);
				if (SYSTEM::TIMERA() > 2000)
				{
					MISC::SET_GAME_PAUSED(0);
					return 0;
				}
			}
		}
		SYSTEM::SETTIMERA(0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
			if (SYSTEM::TIMERA() > 20000)
			{
				MISC::SET_GAME_PAUSED(0);
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				return 0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				MISC::SET_GAME_PAUSED(0);
				SYSTEM::SETTIMERA(0);
				PED::_0x4759CC730F947C81();
				if (iParam5 == 1)
				{
					VEHICLE::_0x48ADC8A773564670();
				}
				else
				{
					SYSTEM::SETTIMERA(5000);
				}
				MISC::POPULATE_NOW();
			}
		}
		while ((!VEHICLE::_0x91D6DD290888CBAB() && !func_52()) && SYSTEM::TIMERA() < 1500)
		{
			SYSTEM::WAIT(0);
		}
		if (SYSTEM::TIMERA() > 1500)
		{
			if (iParam5 == 1)
			{
			}
		}
		if (iParam4 == 1)
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0, &(vParam0.f_2), 0, 0);
			MISC::CLEAR_AREA(vParam0, 5f, 1, 0, 0, false);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vParam0, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
				}
			}
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		func_55(0);
		return 1;
	}
	func_55(0);
	return 0;
}

bool func_52()//Position - 0x24E0
{
	return !Global_70409.f_553;
}

void func_53()//Position - 0x24F0
{
	Global_70409.f_553 = 1;
	Global_70409.f_554 = 0;
}

void func_54()//Position - 0x2508
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_70409[iVar0] = 0;
		iVar0++;
	}
}

void func_55(int iParam0)//Position - 0x252C
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!MISC::IS_BIT_SET(Global_93682.f_20, 2))
			{
				MISC::SET_GAME_PAUSED(1);
				MISC::SET_BIT(&(Global_93682.f_20), 2);
			}
		}
		else if (MISC::IS_BIT_SET(Global_93682.f_20, 2))
		{
			MISC::SET_GAME_PAUSED(0);
			MISC::CLEAR_BIT(&(Global_93682.f_20), 2);
		}
	}
}

int func_56()//Position - 0x2583
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_57(int iParam0)//Position - 0x25A4
{
	return MISC::IS_BIT_SET(Global_106565.f_7223[iParam0], 0);
}

int func_58(int iParam0)//Position - 0x25BC
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_99.f_58[iParam0];
}

int func_59()//Position - 0x25E9
{
	if (Global_33790[11] == 1)
	{
		return 4;
	}
	if (!func_60(21))
	{
		return 0;
	}
	if (!func_58(130))
	{
		return 1;
	}
	if (!func_58(131))
	{
		return 2;
	}
	if (!func_60(22))
	{
		return 1;
	}
	if (!func_60(49))
	{
		return 3;
	}
	if (!func_60(28))
	{
		return 1;
	}
	return 3;
}

int func_60(int iParam0)//Position - 0x2667
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_330[iParam0 /*6*/];
}

int func_61()//Position - 0x2693
{
	func_62();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_62()//Position - 0x26AC
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_65(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_64(PLAYER::PLAYER_PED_ID());
			if (func_63(iVar0) && (!func_29(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_63(Global_106565.f_2357.f_539.f_4321))
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

bool func_63(int iParam0)//Position - 0x27A9
{
	return iParam0 < 3;
}

int func_64(int iParam0)//Position - 0x27B5
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_65(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_65(int iParam0)//Position - 0x27F2
{
	if (func_63(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_66(bool bParam0)//Position - 0x281C
{
	CAM::CUSTOM_MENU_COORDINATES(0f);
	CAM::_0x0225778816FDC28C(0f);
	CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
	CAM::SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_CINEMATIC_CAM_SHAKING(1);
	AUDIO::_0x12561FCBB62D5B9C(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
	{
		AUDIO::STOP_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_37562))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Global_37562))
		{
			AUDIO::STOP_AUDIO_SCENE(&Global_37562);
		}
	}
	if (CAM::DOES_CAM_EXIST(Global_37551))
	{
		if (CAM::IS_CAM_SHAKING(Global_37551))
		{
			CAM::SET_CAM_SHAKE_AMPLITUDE(Global_37551, 0f);
			CAM::STOP_CAM_SHAKING(Global_37551, 1);
		}
	}
	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
	{
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
	}
	if (bParam0)
	{
		if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1 || GRAPHICS::_0x459FD2C8D0AB78BC() != -1)
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
	Global_37557 = 0f;
	StringCopy(&Global_37558, "", 16);
	StringCopy(&Global_37562, "", 64);
	StringCopy(&Global_37578, "", 16);
	func_67();
}

void func_67()//Position - 0x28F5
{
	Global_37550 = 0;
	Global_37551 = 0;
	Global_37552 = 0;
	Global_37553 = 30000;
	Global_37554 = 0f;
	Global_37556 = 0f;
	Global_37555 = 0f;
	Global_37557 = 0f;
	StringCopy(&Global_37558, "", 16);
}

void func_68(int iParam0)//Position - 0x2926
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_17567;
			break;
		
		case 1:
			iVar0 = Global_262145.f_17557;
			break;
		
		case 2:
			iVar0 = Global_262145.f_17568;
			break;
		
		case 3:
			iVar0 = Global_262145.f_17560;
			break;
		
		case 4:
			iVar0 = Global_262145.f_17556;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_17571;
			break;
		
		case 8:
			iVar0 = Global_262145.f_17572;
			break;
		
		case 9:
			iVar0 = Global_262145.f_17575;
			break;
		
		case 22:
			iVar0 = Global_262145.f_17576;
			break;
		
		case 23:
			iVar0 = Global_262145.f_17569;
			break;
		
		case 25:
			iVar0 = Global_262145.f_18457;
			break;
		
		case 26:
			iVar0 = Global_262145.f_18456;
			break;
	}
	if (iVar0 != 0)
	{
		STATS::_0x501478855A6074CE(func_79(func_80()), func_77(func_80()), func_76(), func_75(), iParam0, iVar0);
	}
	func_74(iVar0);
	func_69(iVar0);
}

void func_69(int iParam0)//Position - 0x2A4B
{
	int iVar0;
	
	iVar0 = func_73(3968, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_487 = iVar0;
	func_70(3968, iVar0, -1, 1, 0);
}

void func_70(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2A99
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_71(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_71(var uParam0)//Position - 0x2AC9
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_72();
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

int func_72()//Position - 0x2AFD
{
	return Global_1312745;
}

int func_73(int iParam0, int iParam1, int iParam2)//Position - 0x2B09
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_71(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_74(int iParam0)//Position - 0x2B3B
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	Global_1626536[iVar0 /*603*/].f_11.f_486 = (Global_1626536[iVar0 /*603*/].f_11.f_486 + iParam0);
	if (Global_1626536[iVar0 /*603*/].f_11.f_486 < -9999)
	{
		Global_1626536[iVar0 /*603*/].f_11.f_486 = 9999;
	}
	else if (Global_1626536[iVar0 /*603*/].f_11.f_486 > 9999)
	{
		Global_1626536[iVar0 /*603*/].f_11.f_486 = 9999;
	}
}

int func_75()//Position - 0x2BB5
{
	if (Global_1669366.f_3 != 0)
	{
		return Global_1669366.f_3;
	}
	return -1;
}

int func_76()//Position - 0x2BD1
{
	if (Global_1669366.f_2 != 0)
	{
		return Global_1669366.f_2;
	}
	return -1;
}

int func_77(int iParam0)//Position - 0x2BED
{
	if (iParam0 == func_78())
	{
		return -1;
	}
	return Global_1626536[iParam0 /*603*/].f_11.f_8[1];
}

int func_78()//Position - 0x2C12
{
	return -1;
}

int func_79(int iParam0)//Position - 0x2C1B
{
	if (iParam0 == func_78())
	{
		return -1;
	}
	return Global_1626536[iParam0 /*603*/].f_11.f_8[0];
}

int func_80()//Position - 0x2C40
{
	return Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11;
}

bool func_81(bool bParam0)//Position - 0x2C55
{
	return func_82(PLAYER::PLAYER_ID(), bParam0);
}

int func_82(int iParam0, bool bParam1)//Position - 0x2C67
{
	return func_83(iParam0, bParam1, 1);
}

int func_83(int iParam0, bool bParam1, int iParam2)//Position - 0x2C78
{
	int iVar0;
	
	if (iParam0 == func_78())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_84(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1626536[iParam0 /*603*/].f_11;
	if (iVar0 != func_78() && Global_1626536[iVar0 /*603*/].f_11.f_447 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_84(int iParam0, int iParam1)//Position - 0x2CD4
{
	if (iParam0 != func_78())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_78())
		{
			if (Global_1626536[iParam0 /*603*/].f_11 == iParam0 && Global_1626536[iParam0 /*603*/].f_11.f_447 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_85(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x2D23
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
	if (func_95())
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
		if (!func_93())
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
				else if (bVar13 || (!func_91(PLAYER::PLAYER_ID(), 0) && !func_90()))
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
				if (!func_89(iVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar25))
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
					func_88();
					func_87();
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
				if (!func_89(iVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar25))
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
					if (func_86(Global_4456448.f_161209))
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

bool func_86(int iParam0)//Position - 0x3173
{
	return iParam0 == 17;
}

void func_87()//Position - 0x3180
{
	vector3 vVar0;
	
	Global_2437364.f_1232 = 0;
	Global_2437364.f_1233 = 0;
	Global_2437364.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437364.f_1239 = -1;
	Global_2437364.f_1240 = 0;
	Global_2405071.f_2679 = { vVar0 };
}

void func_88()//Position - 0x31CD
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2722 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_207 = 0;
	Global_2405071.f_2677 = 0;
}

int func_89(int iParam0)//Position - 0x320B
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

bool func_90()//Position - 0x323C
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_91(int iParam0, int iParam1)//Position - 0x324D
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_92(-1, 0) == 8;
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

int func_92(int iParam0, bool bParam1)//Position - 0x3298
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_72();
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

int func_93()//Position - 0x32D9
{
	if (func_94() == 0)
	{
		return 1;
	}
	return 0;
}

int func_94()//Position - 0x32EE
{
	return Global_1312467.f_18;
}

int func_95()//Position - 0x32FC
{
	if (Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_35 && !Global_2449538.f_2846.f_214 == -1)
	{
		return 1;
	}
	return 0;
}

void func_96(var uParam0, bool bParam1, bool bParam2)//Position - 0x332A
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

void func_97()//Position - 0x336F
{
	int iVar0;
	
	if (bLocal_50)
	{
		return;
	}
	Local_43.f_4 = 0;
	if (!func_98(Global_37371[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(500, 3000);
	vLocal_60.x = 5;
	Local_55.f_2 = (SYSTEM::TIMERA() + iVar0);
}

int func_98(int iParam0)//Position - 0x33B2
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_109();
	if (iVar0 == -2)
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(Local_43.f_1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0) || PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_43.f_1))
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Local_43.f_1))
		{
			return 0;
		}
		if (func_105(Local_43.f_1))
		{
			return 0;
		}
	}
	if ((Global_37371[iLocal_64 /*5*/].f_3 < 3 && Global_37371[iLocal_64 /*5*/].f_3 != 0) && Global_37371[iLocal_64 /*5*/].f_3 > Global_37371[iLocal_64 /*5*/].f_4)
	{
		return 0;
	}
	if ((Global_37371[iLocal_64 /*5*/].f_4 < 9 && Global_37371[iLocal_64 /*5*/].f_4 != 0) && Global_37371[iLocal_64 /*5*/].f_4 > Global_37371[iLocal_64 /*5*/].f_3)
	{
		return 0;
	}
	iVar1 = func_104(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(iVar1))
	{
		return 0;
	}
	if (func_105(Local_43.f_1))
	{
		return 0;
	}
	STREAMING::REQUEST_CLIP_SET(iVar1);
	if (func_101(Local_43.f_1))
	{
		sVar2 = "MOVE_M@DRUNK@TRANSITIONS";
		sVar3 = "";
		switch (iParam0)
		{
			case 0:
				sVar3 = "";
				break;
			
			case 2:
				sVar3 = "VERY_TO_MODERATE";
				break;
			
			case 1:
				sVar3 = "MODERATE_TO_SLIGHTLY";
				break;
			
			default:
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
		{
			STREAMING::REQUEST_ANIM_DICT(sVar2);
			while (!STREAMING::HAS_ANIM_DICT_LOADED(sVar2))
			{
				SYSTEM::WAIT(0);
			}
			if (!PED::IS_PED_INJURED(Local_43.f_1))
			{
				BRAIN::TASK_PLAY_ANIM(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_54 = sVar3;
			}
		}
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(Local_43.f_1))
	{
		return 0;
	}
	PED::SET_PED_MOVEMENT_CLIPSET(Local_43.f_1, iVar1, 0.75f);
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		PED::SET_PED_STRAFE_CLIPSET(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(Local_43.f_1, 0, iVar1, "idle", 2f, 1);
	vLocal_60.z = iVar1;
	bLocal_51 = true;
	iVar4 = 0;
	switch (func_64(Local_43.f_1))
	{
		case 0:
			iVar4 = "FACIALS@P_M_ZERO@BASE";
			break;
		
		case 1:
			iVar4 = "FACIALS@P_M_ONE@BASE";
			break;
		
		case 2:
			iVar4 = "FACIALS@P_M_TWO@BASE";
			break;
		
		default:
			if (PED::IS_PED_A_PLAYER(Local_43.f_1))
			{
				if (!func_99())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (PED::IS_PED_MALE(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Local_43.f_1, "mood_drunk_1", iVar4);
	PED::SET_PED_RESET_FLAG(Local_43.f_1, 200, true);
	PED::SET_PED_RESET_FLAG(Local_43.f_1, 46, true);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_43.f_1, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(Local_43.f_1, 262144, true);
	AUDIO::SET_PED_IS_DRUNK(Local_43.f_1, 1);
	return 1;
}

bool func_99()//Position - 0x3674
{
	return func_100(PLAYER::PLAYER_ID());
}

int func_100(int iParam0)//Position - 0x3684
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0)//Position - 0x36A3
{
	vector3 vVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1) || PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (PED::IS_PED_SHOOTING(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_AIR(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_CLIMBING(iParam0))
	{
		return 0;
	}
	if (Global_68807)
	{
		return 0;
	}
	if (func_103())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		if (!PLAYER::IS_PLAYER_FREE_FOR_AMBIENT_TASK(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (func_102())
		{
			return 0;
		}
	}
	vVar0 = { ENTITY::GET_ENTITY_VELOCITY(iParam0) };
	if (SYSTEM::VMAG2(vVar0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_102()//Position - 0x37A4
{
	return Global_93734.f_340 > 0;
}

bool func_103()//Position - 0x37B5
{
	return MISC::GET_GAME_TIMER() <= Global_17411.f_5878 + 100;
}

char* func_104(int iParam0)//Position - 0x37CA
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@verydrunk";
			break;
		
		case 1:
			return "move_m@drunk@slightlydrunk";
			break;
		
		case 2:
			return "move_m@drunk@moderatedrunk";
			break;
	}
	return "";
}

bool func_105(int iParam0)//Position - 0x380B
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_106(iParam0);
	iVar1 = func_104(iVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(vLocal_60.z))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(iVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return MISC::ARE_STRINGS_EQUAL(vLocal_60.z, iVar1);
}

int func_106(int iParam0)//Position - 0x384C
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = func_108(iParam0);
	iVar1 = func_107(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_37371[iVar1 /*5*/].f_2;
}

int func_107(int iParam0)//Position - 0x388F
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_37371[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_108(int iParam0)//Position - 0x38BF
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_37371[iVar0 /*5*/].f_1)
		{
			return Global_37371[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_109()//Position - 0x3900
{
	int iVar0;
	
	if (Local_55 == -2)
	{
		return -2;
	}
	if (Local_55 == -1)
	{
		return -1;
	}
	iVar0 = (Local_55 - SYSTEM::TIMERA());
	if (iVar0 < 0)
	{
		return -2;
	}
	if (iVar0 > 65534)
	{
		iVar0 = 65534;
	}
	return iVar0;
}

void func_110()//Position - 0x3946
{
	if (bLocal_50)
	{
		return;
	}
	if (!func_111())
	{
		vLocal_60.x = 5;
		Local_55.f_2 = SYSTEM::TIMERA() + 5000;
		return;
	}
	vLocal_60.x = 6;
}

bool func_111()//Position - 0x3972
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	if (Local_43.f_4 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_43.f_4, 0))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_43.f_1, true) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(Local_43.f_4, true) };
	fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, true);
	return fVar6 < 7f;
}

void func_112()//Position - 0x39C3
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == PLAYER::PLAYER_PED_ID())
	{
		PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
		if (PED::GET_PED_STEALTH_MOVEMENT(Local_43.f_1))
		{
			if (Global_37371[iLocal_64 /*5*/].f_2 == 0 || Global_37371[iLocal_64 /*5*/].f_2 == 2)
			{
				PED::SET_PED_STEALTH_MOVEMENT(Local_43.f_1, 0, 0);
			}
		}
		if (PED::IS_PED_DUCKING(Local_43.f_1))
		{
			PED::SET_PED_DUCKING(Local_43.f_1, 0);
		}
	}
	if (Local_55 != -2)
	{
		if (Local_55 == -1)
		{
			if (Global_37371[iLocal_64 /*5*/].f_2 != 0)
			{
				Global_37371[iLocal_64 /*5*/].f_2 = 0;
			}
		}
		else
		{
			iVar0 = (Local_55 - SYSTEM::TIMERA());
			if (iVar0 <= 0)
			{
				iVar0 = 0;
			}
			iVar0 = (iVar0 / 1000) + 1;
			if (Global_37371[iLocal_64 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_37371[iLocal_64 /*5*/].f_2 = 2;
					if (!func_98(2))
					{
						Global_37371[iLocal_64 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_37371[iLocal_64 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_37371[iLocal_64 /*5*/].f_2 = 1;
					if (!func_98(2))
					{
						Global_37371[iLocal_64 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_37371[iLocal_64 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_54))
	{
		if (!func_101(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_43.f_1, sVar1, sLocal_54, 3))
			{
				BRAIN::STOP_ANIM_TASK(Local_43.f_1, sVar1, sLocal_54, -4f);
			}
			sLocal_54 = "";
			return;
		}
	}
	if (Global_37371[iLocal_64 /*5*/].f_3 >= 10 || Global_37371[iLocal_64 /*5*/].f_4 >= 15)
	{
		if (BRAIN::GET_SCRIPT_TASK_STATUS(Local_43.f_1, 1785177548) == 1 && !MISC::IS_BIT_SET(Global_1671295.f_3, 27))
		{
			return;
		}
		if (AUDIO::IS_ANY_SPEECH_PLAYING(Local_43.f_1))
		{
			return;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 1))
		{
			if (Global_37371[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_37371[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_37371[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_37371[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER::PLAYER_PED_ID()) && func_122(PLAYER::PLAYER_ID())) && Global_262145.f_23709)
		{
			if (Global_37371[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_37371[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_37371[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_37371[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER::PLAYER_PED_ID()) && func_121())
		{
			if (Global_37371[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_37371[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_37371[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_37371[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER::PLAYER_PED_ID()) && func_120(PLAYER::PLAYER_ID())) && Global_262145.f_26005)
		{
			if (Global_37371[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_37371[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_37371[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_37371[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER::PLAYER_PED_ID()) && func_117(PLAYER::PLAYER_ID())) && Global_262145.f_26038)
		{
			if (Global_37371[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_37371[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_37371[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_37371[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER::PLAYER_PED_ID()) && func_113(PLAYER::PLAYER_ID()) == 15)
		{
			if (Global_37371[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_37371[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_37371[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_37371[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER::PLAYER_PED_ID()) && Global_68807) && !Global_37344)
		{
			if (Global_37371[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_37371[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_37371[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_37371[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		vLocal_60.y = 3;
		return;
	}
	if (!bLocal_51)
	{
		return;
	}
	if (!func_105(Local_43.f_1))
	{
		return;
	}
}

int func_113(int iParam0)//Position - 0x3E15
{
	if (func_116(iParam0) == 243)
	{
		return func_114(iParam0);
	}
	return -1;
}

int func_114(int iParam0)//Position - 0x3E32
{
	if (func_115(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_181;
	}
	return -1;
}

int func_115(int iParam0, int iParam1)//Position - 0x3E55
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_116(int iParam0)//Position - 0x3E90
{
	if (func_115(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_117(int iParam0)//Position - 0x3EB3
{
	if (iParam0 != func_78())
	{
		if (func_119(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_118(Global_2424047[iParam0 /*416*/].f_309.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_118(int iParam0)//Position - 0x3EFA
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
	}
	return -1;
}

int func_119(int iParam0, bool bParam1, bool bParam2)//Position - 0x4389
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

int func_120(int iParam0)//Position - 0x43D3
{
	if (iParam0 != func_78())
	{
		if (func_119(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_118(Global_2424047[iParam0 /*416*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

var func_121()//Position - 0x441A
{
	return Global_2506066;
}

int func_122(int iParam0)//Position - 0x4426
{
	if (iParam0 != func_78())
	{
		if (func_119(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_118(Global_2424047[iParam0 /*416*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_123()//Position - 0x446D
{
	int iVar0;
	
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		return 0;
	}
	if (!VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) == Local_43.f_1)
	{
		return 0;
	}
	Local_43.f_4 = iVar0;
	vLocal_60.x = 7;
	return 1;
}

void func_124()//Position - 0x44C1
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		vLocal_60.x = 4;
		return;
	}
}

void func_125()//Position - 0x44DC
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	
	if (!bLocal_50)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	vVar2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	vVar5 = { vVar2 - Vector(3f, 30f, 30f) };
	vVar8 = { vVar2 + Vector(3f, 30f, 30f) };
	if (!VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(vVar5, vVar8) && !PED::IS_COP_PED_IN_AREA_3D(vVar5, vVar8))
	{
		return;
	}
	PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	func_11(73, 1);
}

void func_126()//Position - 0x45AB
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_43.f_1;
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, 0);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!PLAYER::PLAYER_PED_ID() == Local_43.f_1)
	{
		return;
	}
	else if (!CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		fLocal_53 = 0f;
		func_128(iVar0, 0f);
		return;
	}
	if (SYSTEM::TIMERA() < Local_55.f_4)
	{
		func_128(iVar0, fLocal_53);
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		Local_55.f_4 = SYSTEM::TIMERA() + 2000;
	}
	else
	{
		Local_55.f_4 = SYSTEM::TIMERA() + 1000;
	}
	fVar3 = ENTITY::GET_ENTITY_SPEED(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_53 = 0f;
		func_128(iVar0, 0f);
		return;
	}
	if (Local_55.f_1 == -1)
	{
		fLocal_53 = func_127(iVar0, 0.13f, 0.06f);
	}
	else
	{
		iVar4 = (Local_55.f_1 - SYSTEM::TIMERA());
		if (iVar4 < 5000)
		{
			fLocal_53 = 0f;
		}
		else if (iVar4 < 15000)
		{
			fLocal_53 = func_127(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_53 = func_127(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_53 = func_127(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_53 = func_127(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_53 = func_127(iVar0, 0.13f, 0.06f);
		}
	}
	func_128(iVar0, fLocal_53);
}

float func_127(int iParam0, float fParam1, float fParam2)//Position - 0x474D
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1);
	fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		if (BRAIN::IS_PED_SPRINTING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			fVar0 = (fVar0 * 4.5f);
		}
		else
		{
			fVar0 = (fVar0 * 3f);
		}
	}
	else
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar2))
		{
			fVar0 = (fVar0 * 1.5f);
		}
		else
		{
			fVar0 = (fVar0 * 0.5f);
		}
	}
	fVar0 = func_21(fVar0, -1f, 1f);
	return fVar0;
}

void func_128(int iParam0, float fParam1)//Position - 0x47E1
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		PED::_0x288DF530C92DAD6F(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), fParam1);
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		VEHICLE::SET_VEHICLE_STEER_BIAS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), fParam1);
	}
}

void func_129()//Position - 0x482C
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		vLocal_60.x = 4;
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_37371[iLocal_64 /*5*/].f_3 >= 10 || Global_37371[iLocal_64 /*5*/].f_4 >= 15)
		{
			if (Global_37371[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_37371[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_37371[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_37371[iLocal_64 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_50)
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		BRAIN::TASK_LEAVE_ANY_VEHICLE(Local_43.f_1, 0, 0);
		vLocal_60.x = 11;
		return;
	}
}

void func_130()//Position - 0x48D0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (SYSTEM::TIMERA() <= Local_55.f_3)
	{
		return;
	}
	iVar0 = BRAIN::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 355471868);
	if (!iVar0 == 7)
	{
		Local_55.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		vLocal_60.x = 4;
		Local_55.f_3 = -2;
		return;
	}
	iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
	iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, 0);
	if (iVar2 == Local_43.f_1)
	{
		func_131();
		Local_55.f_3 = -2;
		return;
	}
	BRAIN::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_43.f_1, iVar1, 0);
	vLocal_60.x = 9;
	Local_55.f_3 = SYSTEM::TIMERA() + 1000;
}

void func_131()//Position - 0x496B
{
	if (vLocal_60.x == 10)
	{
		return;
	}
	vLocal_60.x = 10;
	if (iLocal_48 == -1)
	{
		return;
	}
	func_157(iLocal_48, 2, 5);
	Local_55.f_4 = SYSTEM::TIMERA();
	fLocal_53 = 0f;
}

void func_132()//Position - 0x499D
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
	{
		vLocal_60.x = 10;
		return;
	}
	if (SYSTEM::TIMERA() < Local_55.f_3)
	{
		return;
	}
	vLocal_60.x = 4;
	Local_55.f_3 = -2;
}

void func_133()//Position - 0x49CF
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (!bLocal_50)
	{
	}
	iVar0 = 0;
	bVar1 = false;
	if (bVar1 || PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
	{
		if (!bLocal_50)
		{
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
		if (!iVar0 == Local_43.f_4)
		{
			if (!bLocal_50)
			{
			}
			if (!bLocal_50)
			{
				if (!bLocal_50)
				{
				}
				BRAIN::TASK_LEAVE_ANY_VEHICLE(Local_43.f_1, 0, 0);
				vLocal_60.x = 11;
				return;
			}
			Local_43.f_4 = iVar0;
		}
		if (bVar1)
		{
			if (!bLocal_50)
			{
			}
			func_131();
			return;
		}
		if (!bLocal_50)
		{
			if (!bLocal_50)
			{
			}
			func_131();
			return;
		}
		if (!bLocal_50)
		{
		}
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_43.f_4, -1, 0);
		if (iVar2 == Local_43.f_1)
		{
			func_131();
			return;
		}
		BRAIN::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_43.f_1, iVar0, 0);
		vLocal_60.x = 9;
		Local_55.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}
	if (!func_111())
	{
		BRAIN::CLEAR_PED_TASKS(Local_43.f_1);
		vLocal_60.x = 4;
		return;
	}
	if (!bLocal_50)
	{
		iVar3 = BRAIN::GET_SCRIPT_TASK_STATUS(Local_43.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
			{
				BRAIN::CLEAR_PED_TASKS(Local_43.f_1);
				vLocal_60.x = 4;
				return;
			}
		}
	}
}

void func_134()//Position - 0x4AEB
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	
	if (bLocal_50)
	{
		return;
	}
	if (Local_43.f_4 == 0)
	{
		vLocal_60.x = 4;
		return;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_43.f_4, 0))
	{
		Local_43.f_4 = 0;
		vLocal_60.x = 4;
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_43.f_1, true) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(Local_43.f_4, true) };
	fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, true);
	if (fVar6 > 3f)
	{
		if (!func_98(Global_37371[iLocal_64 /*5*/].f_2))
		{
			vLocal_60.x = 12;
			return;
		}
		vLocal_60.x = 5;
		Local_55.f_2 = SYSTEM::TIMERA() + 2000;
		return;
	}
	iVar7 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Local_43.f_4);
	iVar8 = 0;
	bVar9 = true;
	iVar8 = 1;
	while (bVar9)
	{
		if (iVar8 < iVar7)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_43.f_4, iVar8, 0))
			{
				bVar9 = false;
			}
			else
			{
				iVar8++;
			}
		}
		else
		{
			bVar9 = false;
			iVar8 = -1;
		}
	}
	if (iVar8 == -1)
	{
		if (iVar8 == -1)
		{
			vLocal_60.x = 4;
			return;
		}
	}
	func_135();
	BRAIN::TASK_ENTER_VEHICLE(Local_43.f_1, Local_43.f_4, -1, iVar8, 1073741824, 1, 0);
	vLocal_60.x = 7;
}

void func_135()//Position - 0x4BEE
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_43.f_1))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(Local_43.f_1))
	{
		PED::RESET_PED_MOVEMENT_CLIPSET(Local_43.f_1, 1048576000);
		PED::RESET_PED_STRAFE_CLIPSET(Local_43.f_1);
		PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(Local_43.f_1, 0, -8f);
		vLocal_60.z = "";
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Local_43.f_1);
		PED::SET_PED_RESET_FLAG(Local_43.f_1, 200, false);
		PED::SET_PED_RESET_FLAG(Local_43.f_1, 46, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_43.f_1, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_43.f_1, 262144, false);
		AUDIO::SET_PED_IS_DRUNK(Local_43.f_1, 0);
	}
	if (!bLocal_51)
	{
		return;
	}
	bLocal_51 = false;
}

void func_136()//Position - 0x4C83
{
	if (SYSTEM::TIMERA() < Local_55.f_2)
	{
		func_112();
		return;
	}
	func_137();
	Local_55.f_2 = -2;
	vLocal_60.x = 12;
}

int func_137()//Position - 0x4CAD
{
	if (!func_105(Local_43.f_1))
	{
		return 0;
	}
	if (!bLocal_51)
	{
		return 0;
	}
	func_138(Local_43.f_1);
	vLocal_60.z = "";
	Global_2528542.f_4531 = 1;
	return 1;
}

void func_138(int iParam0)//Position - 0x4CE6
{
	PED::RESET_PED_MOVEMENT_CLIPSET(iParam0, 1048576000);
	PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iParam0, 0, -8f);
	PED::SET_PED_RESET_FLAG(iParam0, 200, false);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 262144, false);
	AUDIO::SET_PED_IS_DRUNK(iParam0, 0);
}

void func_139()//Position - 0x4D27
{
	int iVar0;
	
	if (Local_55 == -1)
	{
		Global_37371[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_37371[iLocal_64 /*5*/].f_3 < 3 && Global_37371[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_37371[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_37371[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_37371[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_37371[iLocal_64 /*5*/].f_2 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		vLocal_60.x = 10;
		return;
	}
	if (func_105(Local_43.f_1))
	{
		vLocal_60.x = 12;
		return;
	}
	if (Local_55 == -2)
	{
		return;
	}
	if (!func_98(Global_37371[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	vLocal_60.x = 12;
}

void func_140()//Position - 0x4DFD
{
}

void func_141()//Position - 0x4E05
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_37452[iVar1 /*6*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_37452[iVar1 /*6*/].f_1 == iLocal_48)
			{
				func_143(iVar1);
				func_142(iVar1);
			}
			else if (Global_37452[iVar1 /*6*/].f_1 == 2)
			{
				if (!iLocal_49 == -1)
				{
					if (iLocal_49 == Global_37452[iVar1 /*6*/])
					{
						func_143(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_142(int iParam0)//Position - 0x4E7D
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_37452[iParam0 /*6*/] = -1;
	Global_37452[iParam0 /*6*/].f_1 = -1;
	Global_37452[iParam0 /*6*/].f_2 = 6;
	Global_37452[iParam0 /*6*/].f_3 = 0;
	Global_37452[iParam0 /*6*/].f_4 = 0;
}

void func_143(int iParam0)//Position - 0x4ECA
{
	int iVar0;
	
	iVar0 = Global_37452[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_164();
			break;
		
		case 2:
			func_147(Global_37452[iParam0 /*6*/].f_4);
			break;
		
		case 3:
			func_146(Global_37452[iParam0 /*6*/].f_5);
			break;
		
		case 4:
			func_145();
			break;
		
		case 5:
			func_144();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_144()//Position - 0x4F4C
{
	vLocal_60.y = 2;
}

void func_145()//Position - 0x4F59
{
	int iVar0;
	
	Global_37371[iLocal_64 /*5*/].f_4++;
	if (Local_55 == -1)
	{
		Global_37371[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_37371[iLocal_64 /*5*/].f_4 < 9 && Global_37371[iLocal_64 /*5*/].f_4 != 0)
	{
		Global_37371[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_37371[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_37371[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_37371[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_105(Local_43.f_1))
		{
			func_98(Global_37371[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_146(int iParam0)//Position - 0x5019
{
	int iVar0;
	
	Global_37371[iLocal_64 /*5*/].f_3 = (Global_37371[iLocal_64 /*5*/].f_3 + iParam0);
	if (Local_55 == -1)
	{
		Global_37371[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_37371[iLocal_64 /*5*/].f_3 < 3 && Global_37371[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_37371[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_37371[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_37371[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_37371[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_105(Local_43.f_1))
		{
			func_98(Global_37371[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_147(int iParam0)//Position - 0x50D9
{
	Local_43.f_3 = (Local_43.f_3 + iParam0);
	Local_43.f_2 = (Local_43.f_2 + iParam0);
	Local_55.f_1 = (Local_55.f_1 + iParam0);
	Local_55 = (Local_55 + iParam0);
}

void func_148()//Position - 0x5109
{
	int iVar0;
	
	if (!bLocal_50)
	{
		iLocal_63 = -1;
		return;
	}
	if (iLocal_63 < 0)
	{
		iLocal_63 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	if (iVar0 != iLocal_63)
	{
		if (iVar0 > iLocal_63)
		{
			func_149();
		}
		iLocal_63 = iVar0;
		return;
	}
}

void func_149()//Position - 0x5153
{
}

void func_150()//Position - 0x515B
{
	if (!Local_55 == -1)
	{
		if (!Local_55 == -2)
		{
			if (SYSTEM::TIMERA() >= Local_55)
			{
				func_135();
				Local_55 = -2;
				vLocal_60.x = 12;
			}
		}
		if (SYSTEM::TIMERA() > Local_55.f_1)
		{
			func_164();
		}
	}
}

void func_151(int iParam0)//Position - 0x519A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_37452[iVar0 /*6*/])
		{
			func_142(iVar0);
		}
		iVar0++;
	}
}

void func_152()//Position - 0x51CA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vLocal_60.x = 4;
	if (!ENTITY::IS_ENTITY_DEAD(Local_43.f_1, 0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
		{
			vLocal_60.x = 10;
		}
	}
	if (bLocal_50)
	{
		func_155();
		func_11(71, 1);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = func_73(2057, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_153(iVar1);
			}
			func_70(2057, iVar0 + 1, -1, 1, 0);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			STATS::STAT_GET_INT(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			STATS::STAT_GET_INT(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			STATS::STAT_GET_INT(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_153(iVar6);
			}
			switch (func_61())
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		vLocal_60.y = 1;
		return;
	}
	vLocal_60.y = 12;
	if (Local_55 == -1)
	{
		Global_37371[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_37371[iLocal_64 /*5*/].f_3 < 3 && Global_37371[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_37371[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_55 - SYSTEM::TIMERA());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_37371[iLocal_64 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_37371[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_37371[iLocal_64 /*5*/].f_2 = 1;
		}
	}
}

void func_153(int iParam0)//Position - 0x5377
{
	int iVar0;
	
	iVar0 = func_154(81);
	Global_2414402[iVar0 /*83*/] = 81;
	Global_2414402[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2414402[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_154(int iParam0)//Position - 0x53AE
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2414402[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2414402[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_155()//Position - 0x53FB
{
}

void func_156()//Position - 0x5403
{
	Local_55 = Local_43.f_2;
	Local_55.f_1 = Local_43.f_3;
	Local_55.f_2 = -2;
	Local_55.f_3 = -2;
}

void func_157(int iParam0, int iParam1, int iParam2)//Position - 0x5427
{
	func_158(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_158(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x543C
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_160(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_159();
	if (iVar0 == -1)
	{
		return;
	}
	Global_37452[iVar0 /*6*/] = iParam0;
	Global_37452[iVar0 /*6*/].f_1 = iParam1;
	Global_37452[iVar0 /*6*/].f_2 = iParam2;
	Global_37452[iVar0 /*6*/].f_3 = iParam3;
	Global_37452[iVar0 /*6*/].f_4 = iParam4;
	Global_37452[iVar0 /*6*/].f_5 = iParam5;
}

int func_159()//Position - 0x54BE
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_37452[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_160(int iParam0, int iParam1, int iParam2)//Position - 0x54EF
{
	if (func_161(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_161(int iParam0, int iParam1, int iParam2)//Position - 0x550A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_37452[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_37452[iVar0 /*6*/])
			{
				if (iParam1 == Global_37452[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_162()//Position - 0x5556
{
	int iVar0;
	
	bLocal_50 = false;
	if (Local_43.f_1 == PLAYER::PLAYER_PED_ID())
	{
		bLocal_50 = true;
		Global_37583 = 1;
		Global_37585++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_43.f_1, 0))
	{
		iVar0 = func_64(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_163()//Position - 0x55C3
{
	if (!iLocal_48 == -1)
	{
		return;
	}
	iLocal_48 = func_108(Local_43.f_1);
	if (iLocal_48 == -1)
	{
		return;
	}
	iLocal_64 = func_107(iLocal_48);
}

void func_164()//Position - 0x55F1
{
	int iVar0;
	
	if (!func_29(0) && !func_29(3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_43.f_1, 0))
		{
			iVar0 = func_64(Local_43.f_1);
			if (Global_37371[iLocal_64 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_166(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_166(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_166(Local_43.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_135();
	if (bLocal_50)
	{
		Global_37583 = 0;
	}
	func_165();
	STREAMING::REMOVE_ANIM_DICT(func_104(0));
	STREAMING::REMOVE_ANIM_DICT(func_104(2));
	STREAMING::REMOVE_ANIM_DICT(func_104(1));
	Global_1666256 = 0;
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) > 0)
	{
		func_36(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_165()//Position - 0x56F5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::IS_ENTITY_DEAD(Local_43.f_1, 0))
	{
		return;
	}
	iVar0 = Local_43.f_1;
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, 0);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 || !PLAYER::PLAYER_PED_ID() == Local_43.f_1)
	{
		return;
	}
	fLocal_53 = 0f;
	func_128(iVar0, 0f);
}

void func_166(int iParam0, char* sParam1, int iParam2)//Position - 0x576F
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_167(iParam2), 1);
}

int func_167(int iParam0)//Position - 0x5786
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

