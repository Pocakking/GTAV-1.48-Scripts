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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
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
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	vector3 vLocal_64 = { 0f, 0f, 0f };
	float fLocal_67 = 0f;
	vector3 vLocal_68 = { 0f, 0f, 0f };
	vector3 vLocal_71 = { 0f, 0f, 0f };
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	vector3 vLocal_78[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	bool bLocal_85 = 0;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	bool bLocal_103 = 0;
	bool bLocal_104 = 0;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_44 = 1;
	iLocal_45 = 65;
	iLocal_46 = 49;
	iLocal_47 = 64;
	vLocal_64 = { -1124.392f, -514.7001f, 33.21493f };
	fLocal_67 = 200f;
	vLocal_68 = { 2490f, 3777f, 2402.879f };
	vLocal_71 = { -2052f, 3237f, 1450.078f };
	iLocal_74 = -1;
	iLocal_76 = -1;
	bLocal_85 = true;
	fLocal_86 = 10f;
	fLocal_87 = 90f;
	fLocal_88 = 35f;
	fLocal_89 = 60f;
	fLocal_90 = 275f;
	iLocal_91 = 1500;
	iLocal_92 = -1;
	iLocal_94 = 3000;
	iLocal_95 = 708;
	iLocal_96 = 377;
	iLocal_97 = 1000;
	iLocal_98 = 2093;
	iLocal_101 = -1;
	iLocal_102 = -1;
	bLocal_103 = true;
	bLocal_104 = true;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_12();
	}
	while (CAM::IS_SCREEN_FADED_OUT())
	{
		SYSTEM::WAIT(0);
	}
	if (!STREAMING::IS_IPL_ACTIVE("ufo"))
	{
		STREAMING::REQUEST_IPL("ufo");
	}
	vLocal_78[0 /*3*/] = { vLocal_68 };
	vLocal_78[1 /*3*/] = { vLocal_71 };
	while (true)
	{
		func_11(PLAYER::PLAYER_PED_ID());
		if (Global_25769 == 1)
		{
			func_12();
		}
		if (bLocal_85)
		{
			if (!func_10(PLAYER::PLAYER_PED_ID(), vLocal_78[0 /*3*/], (290f + 50f)))
			{
				if (!func_10(PLAYER::PLAYER_PED_ID(), vLocal_78[1 /*3*/], (290f + 50f)))
				{
					func_12();
				}
			}
			if (iLocal_77 != 0)
			{
				if (!func_10(PLAYER::PLAYER_PED_ID(), vLocal_78[0 /*3*/], (fLocal_90 + 50f)))
				{
					if (!func_10(PLAYER::PLAYER_PED_ID(), vLocal_78[1 /*3*/], (fLocal_90 + 50f)))
					{
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", 0, 1);
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", 0, 1);
						iLocal_77 = 0;
						iLocal_76 = -1;
					}
				}
			}
		}
		func_8();
		switch (iLocal_77)
		{
			case 0:
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < vLocal_78.x)
				{
					if (func_10(PLAYER::PLAYER_PED_ID(), vLocal_78[iVar0 /*3*/], fLocal_90))
					{
						iLocal_76 = iVar0;
						iLocal_77 = 1;
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", 1, 1);
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", 1, 1);
					}
					iVar0++;
				}
				break;
			
			case 1:
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < vLocal_78.x)
				{
					if (func_10(PLAYER::PLAYER_PED_ID(), vLocal_78[iVar0 /*3*/], fLocal_87))
					{
						iLocal_76 = iVar0;
						iLocal_77 = 2;
					}
					iVar0++;
				}
				break;
			
			case 2:
				if (iLocal_76 == -1)
				{
					iLocal_77 = 1;
				}
				else
				{
					iLocal_74 = MISC::GET_GAME_TIMER();
					iLocal_75 = 0;
					iLocal_77 = 3;
				}
				break;
			
			case 3:
				if (func_10(PLAYER::PLAYER_PED_ID(), vLocal_78[iLocal_76 /*3*/], fLocal_87))
				{
					iLocal_75 = (MISC::GET_GAME_TIMER() - iLocal_74);
					if (iLocal_75 >= iLocal_91)
					{
						iLocal_77 = 4;
						iLocal_92 = AUDIO::GET_SOUND_ID();
						iLocal_93 = MISC::GET_GAME_TIMER();
						if (iLocal_76 == 0)
						{
							AUDIO::PLAY_SOUND_FROM_COORD(iLocal_92, "SPECIAL_EVIL_UFO_DEATH_RAY", vLocal_78[iLocal_76 /*3*/], 0, 0, 0, 0);
						}
						else
						{
							AUDIO::PLAY_SOUND_FROM_COORD(iLocal_92, "SPECIAL_EVIL_UFO_DEATH_RAY_3", vLocal_78[iLocal_76 /*3*/], 0, 0, 0, 0);
						}
						func_7();
						func_6();
					}
				}
				else
				{
					iLocal_77 = 1;
				}
				break;
			
			case 4:
				func_5();
				func_7();
				func_6();
				if (MISC::GET_GAME_TIMER() > (iLocal_93 + iLocal_94))
				{
					func_4(&iLocal_92);
				}
				if (!func_10(PLAYER::PLAYER_PED_ID(), vLocal_78[iLocal_76 /*3*/], fLocal_90))
				{
					func_1();
					iLocal_76 = -1;
					iLocal_77 = 0;
					func_4(&iLocal_102);
					func_4(&iLocal_101);
					AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", 0, 1);
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x39B
{
	int iVar0;
	
	if (func_11(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (func_2(iVar0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 1, 0, 0);
			}
		}
	}
}

int func_2(int iParam0)//Position - 0x3D7
{
	if (func_3(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(int iParam0)//Position - 0x401
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

void func_4(int iParam0)//Position - 0x422
{
	if (*iParam0 != -1)
	{
		AUDIO::STOP_SOUND(*iParam0);
		AUDIO::RELEASE_SOUND_ID(*iParam0);
		*iParam0 = -1;
	}
}

void func_5()//Position - 0x443
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (func_2(iVar0))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 0, 0, 0);
			ENTITY::APPLY_FORCE_TO_ENTITY(iVar0, 2, 0f, 0f, -fLocal_86, 0f, 1f, 0f, 0, 0, 1, 1, 0, 1);
		}
	}
}

void func_6()//Position - 0x489
{
	if (bLocal_104)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_99)
		{
			if (iLocal_101 != -1)
			{
				func_4(&iLocal_101);
				iLocal_99 = (MISC::GET_GAME_TIMER() + iLocal_98);
			}
			else
			{
				iLocal_101 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND(iLocal_101, "ent_amb_elec_crackle", 0, 0, 0, 1);
				iLocal_99 = (MISC::GET_GAME_TIMER() + iLocal_96);
			}
		}
	}
}

void func_7()//Position - 0x4D3
{
	if (bLocal_103)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_100)
		{
			if (iLocal_102 != -1)
			{
				func_4(&iLocal_102);
				iLocal_100 = (MISC::GET_GAME_TIMER() + iLocal_97);
			}
			else
			{
				iLocal_102 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND(iLocal_102, "spl_stun_npc_master", 0, 0, 0, 1);
				iLocal_100 = (MISC::GET_GAME_TIMER() + iLocal_95);
			}
		}
	}
}

void func_8()//Position - 0x51D
{
	vector3 vVar0;
	
	if (iLocal_76 == -1)
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return;
	}
	if (!func_10(PLAYER::PLAYER_PED_ID(), vLocal_78[iLocal_76 /*3*/], fLocal_88))
	{
		return;
	}
	vVar0 = { func_9(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - vLocal_78[iLocal_76 /*3*/]) * Vector(fLocal_89, fLocal_89, fLocal_89) };
	ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 2, vVar0, 0f, 0f, 0f, 0, 0, 1, 1, 0, 1);
}

Vector3 func_9(vector3 vParam0)//Position - 0x58A
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

bool func_10(int iParam0, vector3 vParam1, float fParam4)//Position - 0x5C9
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), vParam1) <= (fParam4 * fParam4);
}

bool func_11(int iParam0)//Position - 0x5E6
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, 0);
}

void func_12()//Position - 0x604
{
	if (STREAMING::IS_IPL_ACTIVE("ufo"))
	{
		STREAMING::REMOVE_IPL("ufo");
	}
	func_4(&iLocal_102);
	func_4(&iLocal_101);
	func_4(&iLocal_92);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", 0, 1);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", 0, 1);
	func_1();
	SCRIPT::TERMINATE_THIS_THREAD();
}

