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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	vector3 vVar0;
	vector3 vVar3;
	
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_85 = -1;
	iLocal_86 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		func_55();
	}
	if (!func_52())
	{
		func_55();
	}
	if (!func_51(iLocal_82))
	{
		func_55();
	}
	else
	{
		func_50();
		iLocal_83 = MISC::GET_GAME_TIMER();
		iLocal_85 = func_49();
		iLocal_84 = 0;
		func_48(1, &uLocal_88);
	}
	while (true)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_51(iLocal_82))
			{
				func_55();
			}
			vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			vVar3 = { ENTITY::GET_ENTITY_COORDS(iLocal_82, true) };
			if (SYSTEM::VDIST2(vVar0, vVar3) >= (100f * 100f))
			{
				func_55();
			}
			switch (iLocal_87)
			{
				case 0:
					func_43(vVar3, vVar0, 18000, 1101004800);
					if (func_25(&iLocal_82, 0))
					{
						func_24();
						func_16(0);
						func_12(vVar3, vVar0);
						STREAMING::REQUEST_ANIM_DICT(func_11());
						iLocal_87 = 1;
					}
					break;
				
				case 1:
					if (func_5(&iLocal_82, &iLocal_79, &iLocal_86))
					{
						iLocal_87 = 2;
					}
					break;
				
				case 2:
					if (!func_4(iLocal_82, 1805844857) && !PED::IS_PED_FLEEING(iLocal_82))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_82, func_11(), func_3(), 3))
						{
							func_1();
						}
					}
					else
					{
						func_55();
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1B3
{
	if (func_51(iLocal_82))
	{
		func_2(&iLocal_82);
		BRAIN::TASK_SMART_FLEE_PED(iLocal_82, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_82, true);
	}
}

void func_2(int iParam0)//Position - 0x1E3
{
	if (func_51(*iParam0))
	{
		PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 2, false);
		PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 64, false);
		PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 128, false);
		PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 8, false);
		PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1, false);
		PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 32, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, true);
		PED::SET_PED_CONFIG_FLAG(*iParam0, 118, true);
	}
}

char* func_3()//Position - 0x24C
{
	return "female_Flee_Table_Left_Maude";
}

int func_4(int iParam0, int iParam1)//Position - 0x256
{
	if (func_51(iParam0))
	{
		if (BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_5(int iParam0, int iParam1, int iParam2)//Position - 0x289
{
	int iVar0;
	
	if (func_51(*iParam0))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, func_10(), func_9(), 3))
		{
			if (!PED::IS_PED_RAGDOLL(*iParam0) || BRAIN::IS_PED_GETTING_UP(*iParam0))
			{
				STREAMING::REQUEST_ANIM_DICT(func_11());
				if (STREAMING::HAS_ANIM_DICT_LOADED(func_11()))
				{
					*iParam2 = PED::CREATE_SYNCHRONIZED_SCENE(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(*iParam2, false);
					PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(*iParam2, false);
					if (func_4(*iParam0, 1785177548))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -1000f, 1);
					}
					BRAIN::TASK_SYNCHRONIZED_SCENE(*iParam0, *iParam2, func_11(), func_3(), 1000f, -4f, 4626, 0, 1148846080, 0);
					PED::_0x2208438012482A1A(*iParam0, 0, 0);
					if (func_8(*iParam1))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam1, func_10(), func_7(), 3))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam1, -16f, 0);
						}
						iVar0 = 0;
						iVar0 += 16;
						iVar0 += 64;
						iVar0 += 512;
						iVar0 += 4096;
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(*iParam1, *iParam2, func_6(), func_11(), 16f, -4f, iVar0, 1148846080);
					}
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

char* func_6()//Position - 0x3D5
{
	return "Female_Flee_Table_Left_Maude_Chair";
}

char* func_7()//Position - 0x3E0
{
	return "base_chair";
}

int func_8(int iParam0)//Position - 0x3EB
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

char* func_9()//Position - 0x40C
{
	return "base";
}

char* func_10()//Position - 0x417
{
	return "special_ped@maude@base";
}

char* func_11()//Position - 0x422
{
	return "special_ped@maude@exit_flee";
}

void func_12(vector3 vParam0, vector3 vParam3)//Position - 0x42D
{
	if (func_51(iLocal_82))
	{
		if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_82))
		{
			if (SYSTEM::VDIST2(vParam3, vParam0) < (35f * 35f))
			{
				func_13(&iLocal_82, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
			}
		}
	}
}

void func_13(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x473
{
	bool bVar0;
	
	if (func_51(*iParam0))
	{
		bVar0 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(*iParam0);
		if (bVar0)
		{
			AUDIO::STOP_PED_SPEAKING(*iParam0, false);
		}
		func_14(*iParam0, sParam1, sParam2, iParam3);
		if (bVar0)
		{
			AUDIO::STOP_PED_SPEAKING(*iParam0, true);
		}
	}
}

void func_14(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x4B5
{
	AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(iParam0, sParam1, sParam2, func_15(iParam3), 0);
}

int func_15(int iParam0)//Position - 0x4CE
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

void func_16(bool bParam0)//Position - 0x6BE
{
	struct<6> Var0;
	char* sVar6;
	
	if (func_23())
	{
		Var0 = { func_22() };
		sVar6 = func_21();
		if (MISC::ARE_STRINGS_EQUAL(&Var0, sVar6))
		{
			if (bParam0)
			{
				func_19();
			}
			else
			{
				func_17();
			}
		}
	}
}

void func_17()//Position - 0x6F6
{
	Global_14732 = 0;
	func_18();
}

void func_18()//Position - 0x706
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16877 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15866 = 6;
	}
}

void func_19()//Position - 0x727
{
	Global_14732 = 0;
	func_20();
}

void func_20()//Position - 0x737
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_16877 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_15866 = 6;
		return;
	}
}

char* func_21()//Position - 0x75B
{
	if (MISC::IS_BIT_SET(Global_106565.f_24980, 3))
	{
		return "BB4_loiter";
	}
	else if (MISC::IS_BIT_SET(Global_106565.f_24980, 2))
	{
		return "BB3_loiter";
	}
	else if (MISC::IS_BIT_SET(Global_106565.f_24980, 1))
	{
		return "BB2_loiter";
	}
	else if (MISC::IS_BIT_SET(Global_106565.f_24980, 0))
	{
		return "BB1_loiter";
	}
	return "MAUDE_loiter";
}

struct<6> func_22()//Position - 0x7C8
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15866 == 4)
	{
		return Global_15485;
	}
	return Var0;
}

int func_23()//Position - 0x7EC
{
	if (Global_15866 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_24()//Position - 0x80E
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_81))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_81, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_80))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_80, false);
	}
}

int func_25(int iParam0, bool bParam1)//Position - 0x836
{
	if (func_51(*iParam0))
	{
		if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(*iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(*iParam0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(*iParam0))
		{
			return 1;
		}
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *iParam0))
			{
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_79))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_79))
				{
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_80))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_80))
				{
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_81))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_81))
				{
					return 1;
				}
			}
		}
		if (PED::HAS_PED_RECEIVED_EVENT(*iParam0, 60))
		{
			return 1;
		}
		if (PED::IS_PED_RAGDOLL(*iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
		if (PED::HAS_PED_RECEIVED_EVENT(*iParam0, 50))
		{
			return 1;
		}
		if (func_33(*iParam0, 1126825984))
		{
			return 1;
		}
		if (func_26(*iParam0, 1, 0, 0, 0))
		{
			return 1;
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(*iParam0, true), 15f))
		{
			return 1;
		}
		if (PED::HAS_PED_RECEIVED_EVENT(*iParam0, 72))
		{
			return 1;
		}
		if (bParam1)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_26(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x988
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_8(PLAYER::PLAYER_PED_ID()) && func_8(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_32(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_27(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_32(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_27(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_27(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0xA83
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	vVar3 = { vVar0 };
	vVar0.x = (vVar0.x - fParam1);
	vVar0.y = (vVar0.y - fParam1);
	vVar0.z = (vVar0.z - fParam1);
	vVar3.x = (vVar3.x + fParam1);
	vVar3.y = (vVar3.y + fParam1);
	vVar3.z = (vVar3.z + fParam1);
	if (bParam2)
	{
		if (((MISC::_0x34318593248C8FB2(ENTITY::GET_ENTITY_COORDS(iParam0, true), joaat("weapon_grenade"), fParam1, 1) || MISC::_0x34318593248C8FB2(ENTITY::GET_ENTITY_COORDS(iParam0, true), joaat("weapon_molotov"), fParam1, 1)) || MISC::_0x34318593248C8FB2(ENTITY::GET_ENTITY_COORDS(iParam0, true), joaat("weapon_smokegrenade"), fParam1, 1)) || MISC::_0x34318593248C8FB2(ENTITY::GET_ENTITY_COORDS(iParam0, true), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_28(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_28(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (MISC::IS_PROJECTILE_IN_AREA(vVar0, vVar3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_28(int iParam0, float fParam1)//Position - 0xB8F
{
	var uVar0;
	vector3 vVar1;
	
	if ((((MISC::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) || MISC::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0)) || MISC::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0)) || MISC::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0)) || MISC::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_29(iParam0, vVar1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0, vector3 vParam1, float fParam4, int iParam5)//Position - 0xC24
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	vVar0 = { func_31(vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, true)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		vVar3 = { func_31(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_30(vVar3, vVar0);
	if (fVar6 <= SYSTEM::COS((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_30(vector3 vParam0, vector3 vParam3)//Position - 0xCB2
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_31(vector3 vParam0)//Position - 0xCD3
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

int func_32(int iParam0, bool bParam1, float fParam2, float fParam3)//Position - 0xD12
{
	if (bParam1)
	{
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0, float fParam1)//Position - 0xD5A
{
	float fVar0;
	
	if (func_8(PLAYER::PLAYER_PED_ID()) && func_8(iParam0))
	{
		if (func_42(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_34(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_34(int iParam0, float fParam1)//Position - 0xDD0
{
	return func_35(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_35(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xDE8
{
	var uVar0;
	vector3 vVar1;
	int iVar4;
	
	iVar4 = func_41(iParam0, iParam1);
	if (!func_8(iParam0) || !func_8(iParam1))
	{
		if (iVar4 != -1)
		{
			func_40(&(Local_37[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_39(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_38();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_37[iVar4 /*4*/].f_1 = iParam0;
		Local_37[iVar4 /*4*/].f_2 = iParam1;
	}
	vVar1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_36(&(Local_37[iVar4 /*4*/]), vVar1, iParam1, &(Local_37[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_37[iVar4 /*4*/].f_3) < iParam4);
}

int func_36(var uParam0, vector3 vParam1, int iParam4, var uParam5, int iParam6, int iParam7)//Position - 0xEA9
{
	var uVar0;
	vector3 vVar1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_8(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_37(iParam4, iParam7) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vVar1 + vVar1 - vParam1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &uVar0, &vVar1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (ENTITY::IS_ENTITY_A_PED(iVar7))
	{
		func_8(iVar7);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7) == iParam4)
		{
			if (bLocal_78)
			{
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(vParam1, ENTITY::GET_ENTITY_COORDS(iParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = MISC::GET_GAME_TIMER();
			return 1;
		}
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar7))
	{
		func_8(iVar7);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam4, 0))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7) == PED::GET_VEHICLE_PED_IS_IN(iParam4, 0))
			{
				if (bLocal_78)
				{
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(vParam1, ENTITY::GET_ENTITY_COORDS(iParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_37(int iParam0, int iParam1)//Position - 0xFD5
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return ENTITY::GET_ENTITY_COORDS(iParam0, true);
	}
	else if (iParam1 == 1)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 36864, 0f, 0f, 0f);
	}
	return ENTITY::GET_ENTITY_COORDS(iParam0, true);
}

int func_38()//Position - 0x109A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if ((Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0) && Local_37[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_39(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x10E4
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	vVar0 = { func_31(ENTITY::GET_ENTITY_COORDS(iParam1, true) - ENTITY::GET_ENTITY_COORDS(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		vVar3 = { func_31(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_30(vVar3, vVar0);
	if (fVar6 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

void func_40(var uParam0)//Position - 0x1175
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_41(int iParam0, int iParam1)//Position - 0x1190
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_42(int iParam0)//Position - 0x11CF
{
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
	{
		return 1;
	}
	return 0;
}

int func_43(vector3 vParam0, vector3 vParam3, int iParam6, float fParam7)//Position - 0x11F7
{
	var uVar0;
	char[] cVar165[8];
	char* sVar166;
	
	if (iLocal_84 < iLocal_85)
	{
		if (!func_23())
		{
			if (SYSTEM::VDIST2(vParam3, vParam0) < (fParam7 * fParam7))
			{
				if (MISC::GET_GAME_TIMER() - iLocal_83) > (iParam6 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000))
				{
					uVar0 = 16;
					func_47(&uVar0, 3, iLocal_82, "MAUDE", 0, 1);
					cVar165 = func_46();
					sVar166 = func_21();
					func_44(&uVar0, cVar165, sVar166, 7, 0, 0);
					iLocal_83 = MISC::GET_GAME_TIMER();
					iLocal_84++;
					return 1;
				}
			}
		}
		else
		{
			iLocal_83 = MISC::GET_GAME_TIMER();
		}
	}
	return 0;
}

void func_44(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1281
{
	func_45(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	MISC::SET_BIT(&Global_14732, 0);
	Global_15869 = iParam3;
	StringCopy(&Global_15856, sParam2, 24);
}

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x12BC
{
	Global_15320 = { *uParam0 };
	Global_1739 = iParam1;
	StringCopy(&Global_15936, sParam2, 24);
	Global_16855 = iParam5;
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

char* func_46()//Position - 0x1312
{
	if (MISC::IS_BIT_SET(Global_106565.f_24980, 3))
	{
		return "BB4AUD";
	}
	else if (MISC::IS_BIT_SET(Global_106565.f_24980, 2))
	{
		return "BB3AUD";
	}
	else if (MISC::IS_BIT_SET(Global_106565.f_24980, 1))
	{
		return "BB2AUD";
	}
	else if (MISC::IS_BIT_SET(Global_106565.f_24980, 0))
	{
		return "BB1AUD";
	}
	return "MAUDEAU";
}

void func_47(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x137F
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

void func_48(bool bParam0, var uParam1)//Position - 0x141A
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { 2711.198f, 4134.425f, 32.90168f };
	vVar3 = { 2739.981f, 4155.221f, 50.28859f };
	if (bParam0)
	{
		*uParam1 = PED::ADD_SCENARIO_BLOCKING_AREA(vVar0, vVar3, 0, 1, 1, 1);
		PED::SET_PED_NON_CREATION_AREA(vVar0, vVar3);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vVar0, vVar3, false, 1);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(vVar0, vVar3, 0);
		PATHFIND::SET_ROADS_IN_AREA(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, false, 1);
		MISC::CLEAR_AREA(2728.333f, 4144.778f, 43.29292f, 7.5f, 1, 0, 0, false);
	}
	else
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam1, 0);
		PED::CLEAR_PED_NON_CREATION_AREA();
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vVar0, vVar3, true, 1);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, true);
	}
}

int func_49()//Position - 0x1507
{
	if (MISC::IS_BIT_SET(Global_106565.f_24980, 3))
	{
		return 4;
	}
	else if (MISC::IS_BIT_SET(Global_106565.f_24980, 2))
	{
		return 4;
	}
	else if (MISC::IS_BIT_SET(Global_106565.f_24980, 1))
	{
		return 4;
	}
	else if (MISC::IS_BIT_SET(Global_106565.f_24980, 0))
	{
		return 3;
	}
	return 4;
}

void func_50()//Position - 0x1565
{
	vector3 vVar0;
	
	if (func_51(iLocal_82))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_82))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_82, true, 0);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_82, true);
		PED::SET_PED_MONEY(iLocal_82, 0);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_82, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_82, 1862763509);
		BRAIN::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_82, 0);
		BRAIN::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(iLocal_82, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_82, 118, false);
		vVar0 = { 2728.33f, 4145.6f, 43.89f };
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(vVar0, 10f, -380698483, 0))
		{
			iLocal_80 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(vVar0, 10f, -380698483, 1, 0, 1);
			if (func_8(iLocal_80))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_80, 2727.4f, 4145.56f, 43.68f, 1, false, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_80, -92.17f);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_80, true);
			}
		}
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(vVar0, 10f, 1385417869, 0))
		{
			iLocal_81 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(vVar0, 10f, 1385417869, 0, 0, 1);
			if (func_8(iLocal_81))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_81))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_81, true, 0);
				}
				ENTITY::SET_ENTITY_COORDS(iLocal_81, 2727.686f, 4145.715f, 44.08f, 1, false, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_81, 71f);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_81, true);
			}
		}
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(vVar0, 10f, -741944541, 0))
		{
			iLocal_79 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(vVar0, 10f, -741944541, 0, 0, 1);
			if (func_8(iLocal_79))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_79))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_79, true, 0);
				}
				ENTITY::SET_ENTITY_COORDS(iLocal_79, 2728.35f, 4145.59f, 43.3f, 1, false, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_79, -91.28f);
			}
		}
	}
}

int func_51(int iParam0)//Position - 0x1712
{
	if (func_8(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_52()//Position - 0x1732
{
	int iVar0;
	int iVar1;
	var uVar2[32];
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar2, -1);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (func_51(uVar2[iVar1]))
			{
				if (ENTITY::GET_ENTITY_MODEL(uVar2[iVar1]) == func_53(62))
				{
					iLocal_82 = uVar2[iVar1];
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_53(int iParam0)//Position - 0x1799
{
	if (!func_54(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_54(int iParam0)//Position - 0x17C4
{
	return iParam0 < 3;
}

void func_55()//Position - 0x17D0
{
	func_48(0, &uLocal_88);
	if (func_8(iLocal_81))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_81, false);
	}
	func_57(&iLocal_81, 0);
	if (func_8(iLocal_80))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_80, false);
	}
	func_57(&iLocal_80, 0);
	if (func_8(iLocal_79))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_79, false);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_79, "special_ped@maude@base", "base_chair", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(iLocal_79, "base_chair", "special_ped@maude@base", -1000f);
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_79, -1000f, 1);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_79, func_11(), "Female_Flee_Table_Left_Maude_Chair", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(iLocal_79, "Female_Flee_Table_Left_Maude_Chair", func_11(), -1000f);
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_79, -1000f, 1);
		}
	}
	func_57(&iLocal_79, 0);
	if (func_51(iLocal_82))
	{
		PED::SET_PED_KEEP_TASK(iLocal_82, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_82, 118, true);
	}
	func_56(&iLocal_82, 1, 0, 1);
	STREAMING::REMOVE_ANIM_DICT(func_11());
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_56(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x18B5
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				BRAIN::CLEAR_PED_SECONDARY_TASK(*iParam0);
			}
			PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
			}
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
	}
}

void func_57(int iParam0, bool bParam1)//Position - 0x1905
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, 1, true);
		}
		if (!bParam1)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			OBJECT::_MARK_OBJECT_FOR_DELETION(*iParam0);
		}
	}
}

