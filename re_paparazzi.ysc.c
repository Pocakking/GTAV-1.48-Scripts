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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	vector3 vLocal_43 = { 0f, 0f, 0f };
	float fLocal_46 = 0f;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	vector3 vLocal_50 = { 0f, 0f, 0f };
	vector3 vLocal_53 = { 0f, 0f, 0f };
	vector3 vLocal_56 = { 0f, 0f, 0f };
	float fLocal_59 = 0f;
	vector3 vLocal_60 = { 0f, 0f, 0f };
	vector3 vLocal_63 = { 0f, 0f, 0f };
	vector3 vLocal_66 = { 0f, 0f, 0f };
	int iLocal_69 = 0;
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	struct<6> Local_75 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	vector3 vLocal_87 = { 0f, 0f, 0f };
	float fLocal_90 = 0f;
	int iLocal_91 = 0;
	vector3 vLocal_92 = { 0f, 0f, 0f };
	float fLocal_95 = 0f;
	int iLocal_96 = 0;
	var uLocal_97 = 15;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 1;
	struct<18> Local_131[4];
	struct<18> Local_204[8];
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	bool bLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	char* sLocal_371 = NULL;
	char[] cLocal_372[8] = 0;
	char* sLocal_373 = NULL;
	char* sLocal_374 = NULL;
	int iLocal_375[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_385 = 0;
	int iLocal_386[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<10> Local_395[16];
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	int iLocal_560[3] = { 0, 0, 0 };
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	float fLocal_569 = 0f;
	float fLocal_570 = 0f;
	int iLocal_571[2] = { 0, 0 };
	float fLocal_574 = 0f;
	vector3 vLocal_575 = { 0f, 0f, 0f };
	vector3 vLocal_578 = { 0f, 0f, 0f };
	vector3 vLocal_581 = { 0f, 0f, 0f };
	vector3 vLocal_584 = { 0f, 0f, 0f };
	vector3 vLocal_587 = { 0f, 0f, 0f };
	vector3 vLocal_590 = { 0f, 0f, 0f };
	vector3 vLocal_593 = { 0f, 0f, 0f };
	vector3 vLocal_596[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_609[4] = { 0f, 0f, 0f, 0f };
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	char* sLocal_626[3] = { NULL, NULL, NULL };
	int iLocal_630 = 0;
	char* sLocal_631 = NULL;
	vector3 vLocal_632 = { 0f, 0f, 0f };
	vector3 vLocal_635 = { 0f, 0f, 0f };
	float fLocal_638 = 0f;
	vector3 vLocal_639 = { 0f, 0f, 0f };
	vector3 vLocal_642 = { 0f, 0f, 0f };
	float fLocal_645 = 0f;
	vector3 vLocal_646 = { 0f, 0f, 0f };
	vector3 vLocal_649 = { 0f, 0f, 0f };
	float fLocal_652 = 0f;
	vector3 vLocal_653 = { 0f, 0f, 0f };
	vector3 vLocal_656 = { 0f, 0f, 0f };
	int iLocal_659 = 0;
	int iLocal_660 = 0;
	float fLocal_661 = 0f;
	int iLocal_662 = 0;
	int iLocal_663 = 0;
	bool bLocal_664 = 0;
	float fLocal_665 = 0f;
	int iLocal_666 = 0;
	int iLocal_667 = 0;
	bool bLocal_668 = 0;
	bool bLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_46 = -1f;
	vLocal_53 = { 226.6825f, 681.0297f, 188.4987f };
	vLocal_56 = { 231.8002f, 672.5261f, 188.9459f };
	fLocal_59 = 32.0905f;
	StringCopy(&Local_75, "", 24);
	vLocal_87 = { 259.4603f, 125.8718f, 100.9754f };
	fLocal_90 = 283.0367f;
	vLocal_92 = { 245.1998f, 76.8231f, 90.7069f };
	fLocal_95 = -18.4743f;
	cLocal_372 = "REPAPAU";
	sLocal_373 = "random@escape_paparazzi@standing@";
	sLocal_374 = "random@escape_paparazzi@incar@";
	iLocal_565 = 4000;
	fLocal_569 = 0f;
	fLocal_570 = 0f;
	fLocal_574 = 0f;
	vLocal_575 = { 272.6356f, 155.5618f, 103.3306f };
	vLocal_578 = { 247.5795f, 88.7094f, 92.9859f };
	vLocal_581 = { 259.0348f, 114.0369f, 98.9984f };
	vLocal_584 = { 255.4971f, 116.8744f, 99.8162f };
	vLocal_587 = { 266.8217f, 139.7698f, 103.2269f };
	vLocal_590 = { 270.0174f, 139.1181f, 103.2195f };
	vLocal_593 = { 265.4954f, 144.6143f, 103.3326f };
	sLocal_631 = "left_";
	vLocal_632 = { 261.9341f, 126.2429f, 95.15405f };
	vLocal_635 = { 270.6759f, 152.4763f, 109.2356f };
	fLocal_638 = 16f;
	vLocal_639 = { 261.9341f, 126.2429f, 107.6541f };
	vLocal_642 = { 248.354f, 87.01792f, 92.389f };
	fLocal_645 = 16f;
	vLocal_646 = { 256.6779f, 126.573f, 99.54784f };
	vLocal_649 = { 266.4471f, 123.412f, 105.6728f };
	fLocal_652 = 5.75f;
	vLocal_653 = { 260.242f, 127.423f, 101.65f };
	vLocal_656 = { 0f, 0f, -20f };
	vLocal_50 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_274();
	}
	func_273(&uLocal_97, 3);
	if (!Global_3)
	{
		if (func_231(vLocal_50, -1, 0, 0, 0))
		{
			func_228(-1);
		}
		else
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	iLocal_365 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(93.3633f, 82.5239f, 276.3459f) + Vector(10f, 10f, 10f), Vector(93.3633f, 82.5239f, 276.3459f) - Vector(10f, 10f, 10f), 0, 1, 1, 1);
	iLocal_366 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(188.5935f, 675.8706f, 227.8598f) + Vector(4f, 4f, 4f), Vector(188.5935f, 675.8706f, 227.8598f) - Vector(4f, 4f, 4f), 0, 1, 1, 1);
	iLocal_367 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1, 1, 1);
	if (Global_3)
	{
		MISC::CLEAR_AREA(246.1673f, 92.1704f, 93.8361f, 6f, 1, 0, 0, false);
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), false, 1);
	BRAIN::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_225(&uLocal_97);
		if (!func_224())
		{
			if (func_223())
			{
				func_274();
			}
		}
		RECORDING::_0x208784099002BC30("RE_EP", 0);
		iVar0 = 0;
		while (iVar0 < Local_131)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_131[iVar0 /*18*/]) && !ENTITY::IS_ENTITY_DEAD(Local_131[iVar0 /*18*/], 0))
			{
				Local_131[iVar0 /*18*/].f_8 = { ENTITY::GET_ENTITY_COORDS(Local_131[iVar0 /*18*/], true) };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_204)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]) && !ENTITY::IS_ENTITY_DEAD(Local_204[iVar0 /*18*/], 0))
			{
				Local_204[iVar0 /*18*/].f_6 = { ENTITY::GET_ENTITY_COORDS(Local_204[iVar0 /*18*/], true) };
			}
			iVar0++;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			vLocal_60 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		if (!PED::IS_PED_INJURED(iLocal_86))
		{
			vLocal_63 = { ENTITY::GET_ENTITY_COORDS(iLocal_86, true) };
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_91) && !ENTITY::IS_ENTITY_DEAD(iLocal_91, 0))
		{
			vLocal_66 = { ENTITY::GET_ENTITY_COORDS(iLocal_91, true) };
		}
		if (!func_224())
		{
			if (TASK::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				switch (iLocal_369)
				{
					case 0:
						if (func_214())
						{
							func_207();
							iLocal_369++;
						}
						else if (func_195())
						{
							func_274();
						}
						break;
					
					case 1:
						if ((func_194() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
						{
							if (!Global_3 && !bLocal_70)
							{
								func_193();
								func_274();
							}
						}
						else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 281.0074f, 192.4805f, 58.08817f, 228.8291f, 50.88667f, 111.6104f, 82.75f, 0, true, 0))
						{
							func_184(1);
							iLocal_360 = func_183(iLocal_86, 0, 145);
							func_182("MAG_2_ESCAPE_PAP_GET_CAR");
							func_181(0);
						}
						break;
				}
			}
			else
			{
				func_274();
			}
		}
		else
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			switch (iLocal_47)
			{
				case 0:
					func_178();
					break;
				
				case 1:
					func_175();
					break;
				
				case 2:
					func_153();
					break;
				
				case 3:
					func_141();
					break;
				
				case 4:
					func_105();
					break;
				
				case 10:
					func_274();
					break;
				
				case 5:
					func_104();
					break;
				
				case 6:
					func_101(sLocal_371);
					break;
				
				case 7:
					func_100();
					break;
				
				case 9:
					break;
				
				case 8:
					if (func_99())
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_86))
						{
							PED::DELETE_PED(&iLocal_86);
						}
						func_75();
					}
					break;
				
				case 11:
					func_71();
					break;
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_63, 210f, 210f, 210f, false, true, 0))
			{
				func_193();
				func_274();
			}
			if (((iLocal_47 != 5 && iLocal_47 != 6) && iLocal_47 != 10) && iLocal_47 != 7)
			{
				if (!Global_3 && !bLocal_70)
				{
					if (func_68(iLocal_86, 1, 1) || func_67())
					{
						if (iLocal_47 > 0)
						{
							func_181(5);
						}
						else
						{
							func_193();
							func_181(10);
						}
					}
					if (((iLocal_47 != 5 && iLocal_47 != 10) && iLocal_47 != 0) && iLocal_47 != 7)
					{
						if (func_63())
						{
							func_181(6);
						}
					}
				}
			}
		}
		func_25();
		if (iLocal_47 <= 0)
		{
			iVar1 = func_24();
			if (iVar1 != -1 && (iLocal_74 || func_19() != 0))
			{
				if ((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 243.6443f, 123.7193f, 97.59898f, 262.4353f, 116.8746f, 107.4762f, 32.25f, 0, true, 0) && (MISC::GET_GAME_TIMER() - iLocal_564) > 5000) && !PED::IS_PED_INJURED(Local_204[iVar1 /*18*/]))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_204[iVar1 /*18*/], true), vLocal_60) < (30.5f * 30.5f) && SYSTEM::VDIST2(vLocal_63, vLocal_60) > (22.5f * 22.5f))
					{
						if (func_224())
						{
							if (Local_395[4 /*10*/] != Local_204[iVar1 /*18*/])
							{
								func_18(&Local_395, 4);
								func_17(&Local_395, 4, Local_204[iVar1 /*18*/], "PAPARAZZO", 0, 1);
							}
							else if (!iLocal_663)
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_CALL1", 1, 0, 0, 0))
								{
									iLocal_564 = MISC::GET_GAME_TIMER();
									iLocal_663 = 1;
								}
							}
							else if (func_5(&Local_395, cLocal_372, "REPAP_CHAT", 1, 0, 0, 0))
							{
								iLocal_564 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							StringCopy(&vVar2, "REPAP_AZAA_0", 24);
							StringIntConCat(&vVar2, MISC::GET_RANDOM_INT_IN_RANGE(1, 13), 24);
							func_3(Local_204[iVar1 /*18*/], &vVar2, "PAPARAZZO", 24);
							iLocal_564 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
		if (iLocal_47 <= 1)
		{
			func_2();
		}
		func_1();
	}
}

void func_1()//Position - 0x85F
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						if (!PED::IS_PED_HEADTRACKING_ENTITY(iVar1, PLAYER::PLAYER_PED_ID()))
						{
							BRAIN::TASK_LOOK_AT_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_2()//Position - 0x8CC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]))
		{
			if (ENTITY::GET_ENTITY_HEALTH(Local_204[iVar0 /*18*/]) < Local_204[iVar0 /*18*/].f_17)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_204[iVar0 /*18*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					iLocal_386[iVar0] = (iLocal_386[iVar0] + (Local_204[iVar0 /*18*/].f_17 - ENTITY::GET_ENTITY_HEALTH(Local_204[iVar0 /*18*/])));
					iLocal_82 = (iLocal_82 + (Local_204[iVar0 /*18*/].f_17 - ENTITY::GET_ENTITY_HEALTH(Local_204[iVar0 /*18*/])));
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_204[iVar0 /*18*/]);
					if (iLocal_386[iVar0] > iLocal_385)
					{
						iLocal_385 = iLocal_386[iVar0];
					}
				}
			}
			Local_204[iVar0 /*18*/].f_17 = ENTITY::GET_ENTITY_HEALTH(Local_204[iVar0 /*18*/]);
		}
		iVar0++;
	}
}

void func_3(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x988
{
	AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(iParam0, sParam1, sParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)//Position - 0x9A1
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

bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB93
{
	func_16(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)//Position - 0xBE1
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
					func_15();
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
		if (func_14(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_13();
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
				func_11();
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
				if (func_10())
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
			if (func_9())
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
			func_8();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_7();
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
		func_15();
	}
	return 0;
}

void func_7()//Position - 0xEAD
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

void func_8()//Position - 0xEDD
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

int func_9()//Position - 0xF72
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_10()//Position - 0xF99
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

void func_11()//Position - 0x1032
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
		Global_14553 = func_19();
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

bool func_12(int iParam0)//Position - 0x10D4
{
	return Global_36425 == iParam0;
}

void func_13()//Position - 0x10E2
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

bool func_14(int iParam0, int iParam1)//Position - 0x1138
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

void func_15()//Position - 0x1173
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

void func_16(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x11CA
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

void func_17(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1220
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

void func_18(var uParam0, int iParam1)//Position - 0x12BB
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_19()//Position - 0x12D8
{
	func_20();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_20()//Position - 0x12F1
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_23(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_22(PLAYER::PLAYER_PED_ID());
			if (func_21(iVar0) && (!func_12(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_21(Global_106565.f_2357.f_539.f_4321))
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

bool func_21(int iParam0)//Position - 0x13EE
{
	return iParam0 < 3;
}

int func_22(int iParam0)//Position - 0x13FA
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)//Position - 0x1437
{
	if (func_21(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_24()//Position - 0x1461
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_204[iVar0 /*18*/])) && !PED::IS_PED_INJURED(iLocal_86))
		{
			if (SYSTEM::VDIST2(vLocal_60, Local_204[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = SYSTEM::VDIST2(vLocal_63, Local_204[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_25()//Position - 0x14E1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	
	switch (iLocal_49)
	{
		case 0:
			iLocal_616 = 0;
			STREAMING::REQUEST_MODEL(joaat("a_m_y_genstreet_02"));
			STREAMING::REQUEST_MODEL(joaat("prop_pap_camera_01"));
			STREAMING::REQUEST_MODEL(joaat("cavalcade2"));
			STREAMING::REQUEST_MODEL(joaat("vader"));
			STREAMING::REQUEST_ANIM_DICT(sLocal_373);
			STREAMING::REQUEST_ANIM_DICT("random@paparazzi@pap_anims");
			if (((((STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_genstreet_02")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_pap_camera_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("cavalcade2"))) && STREAMING::HAS_MODEL_LOADED(joaat("vader"))) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_373)) && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@pap_anims"))
			{
				vLocal_596[0 /*3*/] = { 266.6049f, 157.7677f, 104.2417f };
				vLocal_596[1 /*3*/] = { 280.2455f, 152.1227f, 103.7096f };
				vLocal_596[2 /*3*/] = { 223.2588f, 50.6347f, 83.6598f };
				vLocal_596[3 /*3*/] = { 244.1302f, 37.4709f, 83.4804f };
				fLocal_609[0] = -111.1625f;
				fLocal_609[1] = 68.857f;
				fLocal_609[2] = -108.2056f;
				fLocal_609[3] = 50.8189f;
				iVar0 = 0;
				while (iVar0 < Local_131)
				{
					func_62(iVar0);
					func_60(func_61(iVar0));
					func_60(func_59(iVar0));
					iVar0++;
				}
				iLocal_614 = 0;
				func_58(func_61(1), 274.9306f, 147.164f, 103.3794f, 2.2109f);
				func_58(func_59(1), 275.6894f, 148.1107f, 103.3723f, 117.9416f);
				func_58(func_59(2), vLocal_596[1 /*3*/], fLocal_609[1]);
				func_58(func_59(3), vLocal_596[1 /*3*/], fLocal_609[1]);
				func_57(0, vLocal_596[0 /*3*/], fLocal_609[0], 1);
				func_57(1, vLocal_596[1 /*3*/], fLocal_609[1], 0);
				ENTITY::SET_ENTITY_COORDS(func_56(0, 1), 265.408f, 151.2875f, 103.5673f, 1, false, 0, 1);
				ENTITY::SET_ENTITY_HEADING(func_56(0, 1), 217.1033f);
				ENTITY::SET_ENTITY_COORDS(func_56(2, 1), 245.9477f, 72.661f, 89.1067f, 1, false, 0, 1);
				ENTITY::SET_ENTITY_HEADING(func_56(2, 1), 38.6283f);
				ENTITY::SET_ENTITY_COORDS(func_56(3, 1), 244.1872f, 73.3336f, 89.0917f, 1, false, 0, 1);
				ENTITY::SET_ENTITY_HEADING(func_56(3, 1), 272.9875f);
				BRAIN::TASK_PLAY_ANIM(func_56(0, 1), "random@paparazzi@pap_anims", "base_pap", 8f, -8f, -1, 1, 0, 0, 0, 0);
				BRAIN::TASK_PLAY_ANIM(func_56(1, 0), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				BRAIN::TASK_PLAY_ANIM(func_56(1, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				BRAIN::TASK_PLAY_ANIM(func_56(2, 1), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				BRAIN::TASK_PLAY_ANIM(func_56(3, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				iLocal_49 = 1;
			}
			break;
		
		case 1:
			func_54(func_59(0), 265.408f, 151.2875f, 103.5673f, 217.1033f, "random@paparazzi@pap_anims", "base_pap", 0);
			func_54(func_61(1), 274.9306f, 147.164f, 103.3794f, 2.2109f, "random@paparazzi@pap_anims", "pap_idle_a", "base_pap");
			func_54(func_59(1), 277.1364f, 148.4023f, 103.3493f, 104.6318f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_54(func_59(2), 245.9477f, 72.661f, 89.1067f, 38.6283f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_54(func_59(3), 244.1872f, 73.3336f, 89.0917f, 272.9875f, "random@paparazzi@pap_anims", "pap_idle_a", 0);
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_204[2 /*18*/].f_2))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(Local_204[2 /*18*/].f_2))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_204[2 /*18*/].f_2, true, 0);
				}
			}
			switch (iLocal_616)
			{
				case 0:
					if (!PED::IS_PED_INJURED(func_56(1, 0)))
					{
						BRAIN::CLEAR_PED_TASKS(func_56(1, 0));
					}
					if (!PED::IS_PED_INJURED(func_56(1, 1)))
					{
						BRAIN::CLEAR_PED_TASKS(func_56(1, 1));
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_131[2 /*18*/]))
					{
						func_57(2, vLocal_596[2 /*3*/], fLocal_609[2], 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[2 /*18*/], 0))
						{
							func_58(func_61(2), ENTITY::GET_ENTITY_COORDS(Local_131[2 /*18*/], true), 0f);
							PED::SET_PED_INTO_VEHICLE(func_56(2, 0), Local_131[2 /*18*/], -1);
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_131[3 /*18*/]))
					{
						func_57(3, vLocal_596[3 /*3*/], fLocal_609[3], 0);
					}
					if (!PED::IS_PED_INJURED(func_56(2, 1)))
					{
						BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(func_56(2, 1), vLocal_581, 2f, -1, 1048576000, 0, 1193033728);
					}
					if (!PED::IS_PED_INJURED(func_56(3, 1)))
					{
						BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(func_56(3, 1), vLocal_584, 2f, -1, 1048576000, 0, 1193033728);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(func_56(3, 0)))
					{
						func_58(func_61(3), 253.8376f, 85.4544f, 92.8933f, 85.1702f);
					}
					if (Global_3 || bLocal_70)
					{
						if (!PED::IS_PED_INJURED(func_56(1, 0)))
						{
							BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(func_56(1, 0), vLocal_587, 2f, 20000, 1048576000, 0, 1193033728);
						}
						if (!PED::IS_PED_INJURED(func_56(1, 1)))
						{
							BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(func_56(1, 1), vLocal_590, 2f, 20000, 1048576000, 0, 1193033728);
						}
						if (!PED::IS_PED_INJURED(func_56(0, 1)))
						{
							BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(func_56(0, 1), vLocal_593, 2f, 20000, 1048576000, 0, 1193033728);
						}
					}
					SYSTEM::SETTIMERB(0);
					iVar1 = 0;
					while (iVar1 < Local_204)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar1 /*18*/]))
						{
							AUDIO::_DYNAMIC_MIXER_RELATED_FN(Local_204[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < Local_131)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_131[iVar1 /*18*/]))
						{
							AUDIO::_DYNAMIC_MIXER_RELATED_FN(Local_131[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iLocal_616++;
					break;
				
				case 1:
					func_49();
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[0 /*18*/], 0) && !PED::IS_PED_INJURED(func_56(0, 0))) && !PED::IS_PED_INJURED(func_56(0, 1)))
					{
						if (!iLocal_571[1])
						{
							iLocal_571[1] = 1;
							BRAIN::TASK_VEHICLE_DRIVE_TO_COORD(func_56(0, 0), Local_131[0 /*18*/], vLocal_575, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
						}
					}
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[2 /*18*/], 0) && !PED::IS_PED_INJURED(func_56(2, 0))) && !PED::IS_PED_INJURED(func_56(2, 1)))
					{
						if (!iLocal_571[0])
						{
							BRAIN::TASK_VEHICLE_DRIVE_TO_COORD(func_56(2, 0), Local_131[2 /*18*/], vLocal_578, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
							iLocal_571[0] = 1;
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_86) && !PED::IS_PED_INJURED(iLocal_86))
					{
						func_46(iLocal_86, 6);
						if (Global_3 || bLocal_70)
						{
							if (!PED::IS_PED_INJURED(func_56(1, 0)))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(func_56(1, 0), vLocal_587, Global_22, false, true, 0))
								{
									func_45(iLocal_86, func_61(1));
								}
							}
							if (!PED::IS_PED_INJURED(func_56(1, 1)))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(func_56(1, 1), vLocal_590, Global_22, false, true, 0))
								{
									func_45(iLocal_86, func_59(1));
								}
							}
							if (!PED::IS_PED_INJURED(func_56(0, 1)))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(func_56(0, 1), vLocal_590, Global_22, false, true, 0))
								{
									func_45(iLocal_86, func_59(0));
								}
							}
						}
						else
						{
							func_46(iLocal_86, func_61(1));
							func_46(iLocal_86, func_59(1));
							if (SYSTEM::TIMERB() > 1000)
							{
								func_46(iLocal_86, func_61(1));
							}
						}
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_91, true), vLocal_87) < 9f)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(func_56(2, 1), vLocal_581, Global_22, false, true, 0))
						{
							func_45(iLocal_86, func_59(2));
						}
						if (ENTITY::IS_ENTITY_AT_COORD(func_56(3, 1), vLocal_584, Global_22, false, true, 0))
						{
							func_45(iLocal_86, func_59(3));
						}
						if (ENTITY::IS_ENTITY_AT_COORD(func_56(0, 1), vLocal_584, Global_22, false, true, 0))
						{
							func_45(iLocal_86, func_59(0));
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(iLocal_619, 3))
						{
							BRAIN::CLEAR_PED_TASKS(Local_204[func_59(3) /*18*/]);
							MISC::SET_BIT(&iLocal_619, 3);
						}
						if (!MISC::IS_BIT_SET(iLocal_619, 2))
						{
							BRAIN::CLEAR_PED_TASKS(Local_204[func_59(2) /*18*/]);
							MISC::SET_BIT(&iLocal_619, 2);
						}
						if (!MISC::IS_BIT_SET(iLocal_619, 0))
						{
							BRAIN::CLEAR_PED_TASKS(Local_204[func_59(0) /*18*/]);
							MISC::SET_BIT(&iLocal_619, 0);
						}
						if (Global_3 || bLocal_70)
						{
							func_45(iLocal_86, func_59(3));
						}
						else
						{
							func_46(iLocal_86, func_59(3));
						}
						func_46(iLocal_86, func_59(2));
						func_46(iLocal_86, func_59(0));
					}
					break;
			}
			func_44();
			break;
		
		case 3:
			func_49();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_91) < 1f)
				{
					fLocal_574 = (fLocal_574 + MISC::GET_FRAME_TIME());
				}
				else if (fLocal_574 > 0f)
				{
					fLocal_574 = 0f;
				}
			}
			iVar0 = 0;
			while (iVar0 < Local_131)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_131[iVar0 /*18*/]) && iLocal_47 != 6)
				{
					if ((iVar0 < 2 && ((iVar0 != iLocal_614 || !ENTITY::DOES_ENTITY_EXIST(Local_131[0 /*18*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_131[1 /*18*/]))) && (MISC::GET_GAME_TIMER() - iLocal_615) > 500)
					{
						if (SYSTEM::VDIST2(vLocal_60, vLocal_87) > 400f)
						{
							if (SYSTEM::VDIST2(vLocal_60, vLocal_87) < 62500f || (MISC::GET_GAME_TIMER() - iLocal_370) < 30000)
							{
								func_40(Local_131[iVar0 /*18*/], iLocal_91, &(Local_131[iVar0 /*18*/].f_5), &(Local_131[iVar0 /*18*/].f_15), &(Local_131[iVar0 /*18*/].f_11), &(Local_131[iVar0 /*18*/].f_14), &(Local_131[iVar0 /*18*/].f_16), Local_131[iVar0 /*18*/].f_2, 800, 50f);
								iLocal_614 = iVar0;
								iLocal_615 = MISC::GET_GAME_TIMER();
							}
						}
					}
					iVar2 = func_61(iVar0);
					if (!PED::IS_PED_INJURED(Local_204[iVar2 /*18*/]))
					{
						iVar3 = func_59(iVar0);
					}
					else
					{
						iVar3 = func_61(iVar0);
					}
					switch (Local_131[iVar0 /*18*/].f_17)
					{
						case 0:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[iVar0 /*18*/], 0))
							{
								if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_131[iVar0 /*18*/], 0))
								{
									if (!PED::IS_PED_INJURED(Local_204[iVar2 /*18*/]))
									{
										if (!PED::IS_PED_IN_VEHICLE(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0))
										{
											if (BRAIN::GET_SCRIPT_TASK_STATUS(Local_204[iVar2 /*18*/], -1794415470) != 1 && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_131[iVar0 /*18*/], -1, 0))
											{
												BRAIN::TASK_ENTER_VEHICLE(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], -1, -1, 1073741824, 1, 0);
											}
										}
									}
									if (iVar3 != -1)
									{
										if (!PED::IS_PED_INJURED(Local_204[iVar3 /*18*/]))
										{
											if (!PED::IS_PED_IN_VEHICLE(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))
											{
												if (BRAIN::GET_SCRIPT_TASK_STATUS(Local_204[iVar3 /*18*/], -1794415470) != 1 && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_131[iVar0 /*18*/], 0, 0))
												{
													BRAIN::TASK_ENTER_VEHICLE(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], -1, 0, 1073741824, 1, 0);
												}
											}
										}
										if (!PED::IS_PED_INJURED(Local_204[iVar2 /*18*/]) && (iVar3 != -1 && !PED::IS_PED_INJURED(Local_204[iVar3 /*18*/])))
										{
											if ((PED::IS_PED_IN_VEHICLE(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0) && (iVar3 != -1 && PED::IS_PED_IN_VEHICLE(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
											{
												if (BRAIN::GET_SCRIPT_TASK_STATUS(Local_204[iVar2 /*18*/], -1273030092) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(Local_204[iVar2 /*18*/], -1817882002) != 1)
												{
													PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iVar2 /*18*/], 3, false);
													PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iVar2 /*18*/], 1, true);
													PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iVar2 /*18*/], 2, false);
													if (iVar0 == 0)
													{
														BRAIN::TASK_VEHICLE_MISSION(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 1)
													{
														BRAIN::TASK_VEHICLE_MISSION(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, 50f, 786470, 4f, 10f, 1);
													}
													else if (iVar0 == 2)
													{
														BRAIN::TASK_VEHICLE_MISSION(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 3)
													{
														BRAIN::TASK_VEHICLE_MISSION(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, 50f, 786470, 4f, 10f, 1);
													}
												}
												BRAIN::SET_DRIVE_TASK_CRUISE_SPEED(Local_204[iVar2 /*18*/], func_39((3f * MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_66, Local_131[iVar0 /*18*/].f_8, true)), 50f, 120f));
											}
										}
									}
									if (fLocal_574 > 3f && SYSTEM::VDIST(Local_131[iVar0 /*18*/].f_8, vLocal_66) < 10f)
									{
										Local_131[iVar0 /*18*/].f_17 = 1;
									}
								}
							}
							else
							{
								if (!PED::IS_PED_INJURED(Local_204[iVar2 /*18*/]))
								{
									if (!PED::IS_PED_FLEEING(Local_204[iVar2 /*18*/]))
									{
										PED::SET_PED_FLEE_ATTRIBUTES(Local_204[iVar2 /*18*/], 2, false);
										BRAIN::TASK_SMART_FLEE_PED(Local_204[iVar2 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, 100000, 0, 0);
									}
								}
								if (iVar3 != -1)
								{
									if (!PED::IS_PED_INJURED(Local_204[iVar3 /*18*/]))
									{
										if (!PED::IS_PED_FLEEING(Local_204[iVar3 /*18*/]))
										{
											PED::SET_PED_FLEE_ATTRIBUTES(Local_204[iVar3 /*18*/], 2, false);
											BRAIN::TASK_SMART_FLEE_PED(Local_204[iVar3 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, 100000, 0, 0);
										}
									}
								}
							}
							break;
						
						case 1:
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_204[iVar2 /*18*/], 0))
							{
								BRAIN::TASK_LEAVE_ANY_VEHICLE(Local_204[iVar2 /*18*/], 1, 256);
							}
							else
							{
								func_46(iLocal_86, iVar2);
							}
							if (iVar3 != -1)
							{
								if (!PED::IS_PED_INJURED(Local_204[iVar3 /*18*/]))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(Local_204[iVar3 /*18*/], 0))
									{
										BRAIN::TASK_LEAVE_ANY_VEHICLE(Local_204[iVar3 /*18*/], 0, 256);
									}
									else
									{
										func_46(iLocal_86, iVar3);
									}
								}
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[iVar0 /*18*/], 0))
							{
								if (SYSTEM::VDIST(Local_131[iVar0 /*18*/].f_8, vLocal_66) > 15f)
								{
									Local_131[iVar0 /*18*/].f_17 = 0;
								}
							}
							break;
					}
					if ((!PED::IS_PED_INJURED(Local_204[iVar2 /*18*/]) && (iVar3 == -1 || !PED::IS_PED_INJURED(Local_204[iVar3 /*18*/]))) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[iVar0 /*18*/], 0))
					{
						iVar4 = 1;
						if (!ENTITY::IS_ENTITY_OCCLUDED(Local_204[iVar2 /*18*/]))
						{
							iVar4 = 0;
						}
						if (iVar3 != -1)
						{
							if (!ENTITY::IS_ENTITY_OCCLUDED(Local_204[iVar3 /*18*/]))
							{
								iVar4 = 0;
							}
						}
						if (!ENTITY::IS_ENTITY_OCCLUDED(Local_131[iVar0 /*18*/]))
						{
							iVar4 = 0;
						}
						if ((iVar4 && SYSTEM::VDIST(vLocal_60, Local_131[iVar0 /*18*/].f_8) > 25f) && SYSTEM::VDIST(vLocal_60, Local_204[iVar0 /*18*/].f_6) > 25f)
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0))
							{
								PED::SET_PED_INTO_VEHICLE(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], -1);
							}
							if (iVar3 != -1)
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))
								{
									PED::SET_PED_INTO_VEHICLE(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0);
								}
							}
						}
					}
					if (func_38(iVar0, 1125515264))
					{
						func_37(iVar0);
					}
				}
				func_44();
				func_29();
				iVar0++;
			}
			break;
		
		case 4:
			func_49();
			if (!iLocal_618)
			{
				iVar0 = 0;
				while (iVar0 < Local_131)
				{
					iVar5 = func_61(iVar0);
					if (!PED::IS_PED_INJURED(Local_204[iVar5 /*18*/]))
					{
						iVar6 = func_59(iVar0);
					}
					else
					{
						iVar6 = func_61(iVar0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[iVar0 /*18*/], 0))
					{
						if (!PED::IS_PED_INJURED(Local_204[iVar5 /*18*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], 0))
							{
								if (BRAIN::GET_SCRIPT_TASK_STATUS(Local_204[iVar5 /*18*/], -1794415470) != 1)
								{
									BRAIN::TASK_ENTER_VEHICLE(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], -1, -1, 1073741824, 1, 0);
								}
							}
						}
						if (iVar6 != -1)
						{
							if (!PED::IS_PED_INJURED(Local_204[iVar6 /*18*/]))
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], 0))
								{
									if (BRAIN::GET_SCRIPT_TASK_STATUS(Local_204[iVar6 /*18*/], -1794415470) != 1)
									{
										BRAIN::TASK_ENTER_VEHICLE(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], -1, 0, 1073741824, 1, 0);
									}
								}
							}
							if (!PED::IS_PED_INJURED(Local_204[iVar5 /*18*/]) && (iVar6 != -1 && !PED::IS_PED_INJURED(Local_204[iVar6 /*18*/])))
							{
								if ((PED::IS_PED_IN_VEHICLE(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], 0) && (iVar6 != -1 && PED::IS_PED_IN_VEHICLE(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], 0))) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
								{
									fVar7 = func_39((70f - (SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_85)) / 50f)), 0f, 70f);
									if (fVar7 <= 1f || (MISC::GET_GAME_TIMER() - iLocal_85) > 4000)
									{
										BRAIN::SET_DRIVE_TASK_MAX_CRUISE_SPEED(Local_204[iVar5 /*18*/], fVar7);
										iVar8 = 0;
										while (iVar8 < Local_131)
										{
											if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[iVar8 /*18*/], 0) && !PED::IS_PED_INJURED(func_56(iVar8, 0))) && PED::IS_PED_IN_VEHICLE(func_56(iVar8, 0), Local_131[iVar8 /*18*/], 0))
											{
												BRAIN::CLEAR_PED_TASKS(func_56(iVar8, 0));
												BRAIN::TASK_VEHICLE_MISSION(func_56(iVar8, 0), Local_131[iVar8 /*18*/], 0, 5, 10f, 786468, 10f, 10f, 1);
											}
											iVar8++;
										}
										iLocal_618 = 1;
									}
									else if (BRAIN::GET_SCRIPT_TASK_STATUS(Local_204[iVar5 /*18*/], -1273030092) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(Local_204[iVar5 /*18*/], -1817882002) != 1)
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iVar5 /*18*/], 3, false);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iVar5 /*18*/], 1, true);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iVar5 /*18*/], 2, false);
										if (iVar0 == 0)
										{
											BRAIN::TASK_VEHICLE_MISSION(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 1)
										{
											BRAIN::TASK_VEHICLE_MISSION(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, fVar7, 786470, 4f, 10f, 1);
										}
										else if (iVar0 == 2)
										{
											BRAIN::TASK_VEHICLE_MISSION(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 3)
										{
											BRAIN::TASK_VEHICLE_MISSION(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, fVar7, 786470, 4f, 10f, 1);
										}
									}
								}
							}
						}
					}
					else
					{
						if (!PED::IS_PED_INJURED(Local_204[iVar5 /*18*/]))
						{
							if (!PED::IS_PED_FLEEING(Local_204[iVar5 /*18*/]))
							{
								PED::SET_PED_FLEE_ATTRIBUTES(Local_204[iVar5 /*18*/], 2, false);
								BRAIN::TASK_SMART_FLEE_PED(Local_204[iVar5 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, 100000, 0, 0);
							}
						}
						if (iVar6 != -1)
						{
							if (!PED::IS_PED_INJURED(Local_204[iVar6 /*18*/]))
							{
								if (!PED::IS_PED_FLEEING(Local_204[iVar6 /*18*/]))
								{
									PED::SET_PED_FLEE_ATTRIBUTES(Local_204[iVar6 /*18*/], 2, false);
									BRAIN::TASK_SMART_FLEE_PED(Local_204[iVar6 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, 100000, 0, 0);
								}
							}
						}
					}
					iVar0++;
				}
			}
			else
			{
				if (func_38(iLocal_617, 10f))
				{
					func_37(iLocal_617);
				}
				iLocal_617++;
				if (iLocal_617 > 3)
				{
					iLocal_617 = 0;
				}
			}
			func_44();
			func_29();
			break;
		
		case 6:
			if (func_38(iLocal_617, 1125515264))
			{
				func_37(iLocal_617);
			}
			iLocal_617++;
			if (iLocal_617 > 3)
			{
				iLocal_617 = 0;
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
		{
			if (iLocal_49 > 1)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_373))
				{
					func_28(iVar0);
					if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/].f_2) && ENTITY::IS_ENTITY_ATTACHED(Local_204[iVar0 /*18*/].f_2))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_204[iVar0 /*18*/], 0))
						{
							if (ENTITY::IS_ENTITY_VISIBLE(Local_204[iVar0 /*18*/].f_2))
							{
								if (BRAIN::IS_PED_GETTING_UP(Local_204[iVar0 /*18*/]))
								{
									ENTITY::SET_ENTITY_VISIBLE(Local_204[iVar0 /*18*/].f_2, false, 0);
								}
							}
							else if (!BRAIN::IS_PED_GETTING_UP(Local_204[iVar0 /*18*/]))
							{
								ENTITY::SET_ENTITY_VISIBLE(Local_204[iVar0 /*18*/].f_2, true, 0);
							}
							if (!ENTITY::IS_ENTITY_OCCLUDED(Local_204[iVar0 /*18*/]))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_204[iVar0 /*18*/], sLocal_373, func_27(iVar0), 3))
								{
									if (!Local_204[iVar0 /*18*/].f_11)
									{
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_204[iVar0 /*18*/], sLocal_373, "grip", 3))
										{
											BRAIN::TASK_PLAY_ANIM(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
											Local_204[iVar0 /*18*/].f_11 = 1;
										}
									}
								}
								else if (Local_204[iVar0 /*18*/].f_11)
								{
									BRAIN::TASK_PLAY_ANIM(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
									Local_204[iVar0 /*18*/].f_11 = 0;
								}
							}
							if (!Local_204[iVar0 /*18*/].f_10)
							{
								STREAMING::REQUEST_ANIM_SET(sLocal_373);
								if (STREAMING::HAS_ANIM_SET_LOADED(sLocal_373))
								{
									PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_204[iVar0 /*18*/], sLocal_373);
									Local_204[iVar0 /*18*/].f_10 = 1;
								}
							}
						}
						else
						{
							if (Local_204[iVar0 /*18*/].f_11)
							{
								BRAIN::TASK_PLAY_ANIM(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
								Local_204[iVar0 /*18*/].f_11 = 0;
							}
							if (Local_204[iVar0 /*18*/].f_10)
							{
								PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_204[iVar0 /*18*/]);
								Local_204[iVar0 /*18*/].f_10 = 0;
							}
						}
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_204[iVar0 /*18*/]) && func_26(Local_204[iVar0 /*18*/], PED::GET_VEHICLE_PED_IS_IN(Local_204[iVar0 /*18*/], 0)) == -1)
						{
							if (ENTITY::IS_ENTITY_VISIBLE(Local_204[iVar0 /*18*/].f_2))
							{
								ENTITY::SET_ENTITY_VISIBLE(Local_204[iVar0 /*18*/].f_2, false, 0);
							}
						}
						else if (!ENTITY::IS_ENTITY_VISIBLE(Local_204[iVar0 /*18*/].f_2))
						{
							ENTITY::SET_ENTITY_VISIBLE(Local_204[iVar0 /*18*/].f_2, true, 0);
						}
					}
					else
					{
						if (Local_204[iVar0 /*18*/].f_11)
						{
							BRAIN::TASK_PLAY_ANIM(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
							Local_204[iVar0 /*18*/].f_11 = 0;
						}
						if (Local_204[iVar0 /*18*/].f_10)
						{
							PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_204[iVar0 /*18*/]);
							Local_204[iVar0 /*18*/].f_10 = 0;
						}
					}
				}
			}
			if (iLocal_47 != 7)
			{
				if (PED::IS_PED_BEING_JACKED(Local_204[iVar0 /*18*/]) && PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
				{
					func_181(7);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_47 != 7)
	{
		iVar0 = 0;
		while (iVar0 < Local_131)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_131[iVar0 /*18*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[iVar0 /*18*/], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_131[iVar0 /*18*/], 0))
					{
						func_181(7);
					}
				}
			}
			iVar0++;
		}
	}
}

int func_26(int iParam0, int iParam1)//Position - 0x2BCB
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

char* func_27(int iParam0)//Position - 0x2C3D
{
	switch (iParam0)
	{
		case 0:
		case 5:
			return "idle_a";
			break;
		
		case 1:
		case 6:
			return "idle_b";
			break;
		
		case 2:
		case 7:
			return "idle_c";
			break;
		
		case 3:
			return "idle_d";
			break;
		
		case 4:
			return "idle_e";
			break;
		
		default:
			break;
	}
	return "";
}

void func_28(int iParam0)//Position - 0x2CB3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET(Local_204[iParam0 /*18*/].f_15, iVar0))
		{
			iVar1 = 5;
			iVar2 = (iVar1 + iLocal_375);
			iVar3 = iVar0;
			if (iVar3 < iVar1)
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_204[iParam0 /*18*/], sLocal_373, func_27(iParam0), 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_204[iParam0 /*18*/], sLocal_373, func_27(iParam0)) > 0.9f)
					{
						MISC::CLEAR_BIT(&(Local_204[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (iVar3 < iVar2)
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[(iVar3 - iVar1)], 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[(iVar3 - iVar1)]) > 0.9f)
					{
						MISC::CLEAR_BIT(&(Local_204[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_204[iParam0 /*18*/], sLocal_373, "grip", 3))
			{
				MISC::CLEAR_BIT(&(Local_204[iParam0 /*18*/].f_15), iVar0);
			}
		}
		iVar0++;
	}
}

void func_29()//Position - 0x2DB0
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_86))
	{
		iVar0 = func_59(iLocal_568);
		if (((ENTITY::DOES_ENTITY_EXIST(Local_131[iLocal_568 /*18*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[iLocal_568 /*18*/], 0)) && ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/])) && !PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(Local_131[iLocal_568 /*18*/], joaat("cavalcade2")))
			{
				if (SYSTEM::VDIST2(Local_204[iVar0 /*18*/].f_6, vLocal_63) < SYSTEM::POW(30f, 2f) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_131[iLocal_568 /*18*/], 0, 0) == Local_204[iVar0 /*18*/])
				{
					if (!Local_204[iVar0 /*18*/].f_9)
					{
						if (!func_36(iVar0))
						{
							func_30(iVar0);
						}
					}
					else if (!func_36(iVar0) && (MISC::GET_GAME_TIMER() - Local_204[iVar0 /*18*/].f_13) > 1000)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_204[iVar0 /*18*/], sLocal_374, "base", 3))
						{
							BRAIN::TASK_PLAY_ANIM(Local_204[iVar0 /*18*/], sLocal_374, "base", 8f, 1000f, -1, 16, 0, 0, 0, 0);
						}
					}
				}
			}
			else if (!Local_204[iVar0 /*18*/].f_9)
			{
				if (SYSTEM::VDIST2(Local_204[iVar0 /*18*/].f_6, vLocal_63) < SYSTEM::POW(30f, 2f) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_131[iLocal_568 /*18*/], 0, 0) == Local_204[iVar0 /*18*/])
				{
					BRAIN::TASK_SWEEP_AIM_ENTITY(Local_204[iVar0 /*18*/], "random@paparazzi@pap_anims", "sweep_low", "sweep_med", "sweep_high", -1, iLocal_86, 1.57f, 0.25f);
					Local_204[iVar0 /*18*/].f_9 = 1;
					Local_204[iVar0 /*18*/].f_13 = MISC::GET_GAME_TIMER();
				}
			}
			else if (Local_204[iVar0 /*18*/].f_9)
			{
				if ((MISC::GET_GAME_TIMER() - Local_204[iVar0 /*18*/].f_13) > 2000)
				{
					Local_204[iVar0 /*18*/].f_9 = 0;
				}
			}
		}
		iLocal_568++;
		if (iLocal_568 >= Local_131)
		{
			iLocal_568 = 0;
		}
	}
}

void func_30(int iParam0)//Position - 0x2F8E
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	
	if (!PED::IS_PED_INJURED(Local_204[iParam0 /*18*/]) && !PED::IS_PED_INJURED(iLocal_86))
	{
		iVar0 = 15;
		vVar1 = { vLocal_63 - Local_204[iParam0 /*18*/].f_6 };
		vVar4 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_204[iParam0 /*18*/]) };
		fVar7 = func_34(vVar4, vVar1);
		if (MISC::ABSF(fVar7) < 10f)
		{
			iVar0 = 5;
		}
		else if (fVar7 >= 10f && fVar7 < 60f)
		{
			iVar0 = 7;
		}
		else if (fVar7 >= 60f && fVar7 < 100f)
		{
			iVar0 = 6;
		}
		else if (fVar7 <= -10f && fVar7 > -60f)
		{
			iVar0 = 10;
		}
		else if (fVar7 < -60f && fVar7 > -100f)
		{
			iVar0 = 9;
		}
		if (iVar0 != 15)
		{
			func_31(iParam0, iVar0);
		}
	}
}

void func_31(int iParam0, int iParam1)//Position - 0x307E
{
	if (iParam1 < 15)
	{
		if (!MISC::IS_BIT_SET(Local_204[iParam0 /*18*/].f_15, iParam1))
		{
			if (func_33(iParam1))
			{
				BRAIN::TASK_PLAY_ANIM(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[func_32(iParam1)], 4f, -4f, -1, 16, 0, 0, 0, 0);
			}
			else if (iParam1 < 5)
			{
				BRAIN::TASK_PLAY_ANIM(Local_204[iParam0 /*18*/], sLocal_373, func_27(iParam0), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				BRAIN::TASK_PLAY_ANIM(Local_204[iParam0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
			}
			Local_204[iParam0 /*18*/].f_15 = 0;
			MISC::SET_BIT(&(Local_204[iParam0 /*18*/].f_15), iParam1);
		}
	}
}

int func_32(int iParam0)//Position - 0x3135
{
	return (iParam0 - 5);
}

bool func_33(int iParam0)//Position - 0x3141
{
	int iVar0;
	
	iVar0 = iParam0;
	return (iVar0 >= 5 && iVar0 < (5 + iLocal_375));
}

float func_34(vector3 vParam0, vector3 vParam3)//Position - 0x315E
{
	float fVar0;
	
	vParam0 = { func_35(vParam0) };
	vParam3 = { func_35(vParam3) };
	fVar0 = (MISC::ATAN2(vParam3.y, vParam3.x) - MISC::ATAN2(vParam0.y, vParam0.x));
	if (fVar0 > 180f)
	{
		fVar0 = (fVar0 - 360f);
	}
	else if (fVar0 < -180f)
	{
		fVar0 = (fVar0 + 360f);
	}
	return fVar0;
}

Vector3 func_35(vector3 vParam0)//Position - 0x31C4
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

bool func_36(int iParam0)//Position - 0x3203
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_374))
	{
		iVar1 = 5;
		while (iVar1 <= 13)
		{
			if (!bVar0)
			{
				if (MISC::IS_BIT_SET(Local_204[iParam0 /*18*/].f_15, iVar1))
				{
					bVar0 = true;
				}
			}
			iVar1++;
		}
	}
	return bVar0;
}

void func_37(int iParam0)//Position - 0x3248
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_131[iParam0 /*18*/]) && ENTITY::IS_ENTITY_OCCLUDED(Local_131[iParam0 /*18*/]))
	{
		VEHICLE::DELETE_VEHICLE(&(Local_131[iParam0 /*18*/]));
	}
	if (HUD::DOES_BLIP_EXIST(Local_131[iParam0 /*18*/].f_1))
	{
		HUD::REMOVE_BLIP(&(Local_131[iParam0 /*18*/].f_1));
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 == 1)
		{
			iVar1 = func_59(iParam0);
		}
		else
		{
			iVar1 = func_61(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar1 /*18*/]) && ENTITY::IS_ENTITY_OCCLUDED(Local_204[iVar1 /*18*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar1 /*18*/]))
			{
				OBJECT::DELETE_OBJECT(&(Local_204[iVar1 /*18*/].f_2));
			}
			if (HUD::DOES_BLIP_EXIST(Local_204[iVar1 /*18*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_204[iVar1 /*18*/].f_1));
			}
			PED::DELETE_PED(&(Local_204[iVar1 /*18*/]));
		}
		iVar0++;
	}
}

int func_38(int iParam0, float fParam1)//Position - 0x3316
{
	int iVar0;
	
	iVar0 = 1;
	if (ENTITY::DOES_ENTITY_EXIST(Local_131[iParam0 /*18*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[iParam0 /*18*/], 0))
		{
			if (SYSTEM::VDIST2(vLocal_60, Local_131[iParam0 /*18*/].f_8) < (fParam1 * fParam1) || !ENTITY::IS_ENTITY_OCCLUDED(Local_131[iParam0 /*18*/]))
			{
				iVar0 = 0;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_56(iParam0, 0)))
	{
		if (!PED::IS_PED_INJURED(func_56(iParam0, 0)))
		{
			if (SYSTEM::VDIST2(vLocal_60, Local_204[func_61(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !ENTITY::IS_ENTITY_OCCLUDED(func_56(iParam0, 0)))
			{
				iVar0 = 0;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_56(iParam0, 1)))
	{
		if (!PED::IS_PED_INJURED(func_56(iParam0, 1)))
		{
			if (SYSTEM::VDIST2(vLocal_60, Local_204[func_59(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !ENTITY::IS_ENTITY_OCCLUDED(func_56(iParam0, 1)))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

float func_39(float fParam0, float fParam1, float fParam2)//Position - 0x340F
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

void func_40(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, vector3 vParam7, int iParam10, float fParam11)//Position - 0x3436
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (((((ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam0 != iParam1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam1)))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), *uParam4, true) > 20f)
			{
				if (func_43(iParam0, iParam1, iLocal_358, ENTITY::GET_ENTITY_COORDS(iParam1, true), ENTITY::GET_ENTITY_ROTATION(iParam1, 2)))
				{
					*uParam2 = { *uParam4 };
					*uParam3 = *uParam5;
					*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam2, *uParam3, vParam7) };
					*uParam4 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
					*uParam5 = ENTITY::GET_ENTITY_HEADING(iParam1);
				}
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				*uParam6 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - *uParam6) > iParam10)
			{
				if ((func_42(iParam0, iParam1, 1) > fParam11 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), *uParam2, true) > 20f) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), *uParam2) > 100f)
				{
					if (!func_41(*uParam2))
					{
						if (!CAM::IS_SPHERE_VISIBLE(*uParam2, 6f))
						{
							MISC::CLEAR_AREA_OF_PEDS(*uParam2, 6f, 0);
							MISC::CLEAR_AREA_OF_VEHICLES(*uParam2, 6f, 0, 0, 0, 0, false, 0);
							ENTITY::SET_ENTITY_COORDS(iParam0, *uParam2, 1, false, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iParam0, *uParam3);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 1084227584);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, func_39((ENTITY::GET_ENTITY_SPEED(iParam1) + 10f), 10f, 60f));
							VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, 0);
							*uParam6 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_41(vector3 vParam0)//Position - 0x3606
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_42(int iParam0, int iParam1, bool bParam2)//Position - 0x3630
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, bParam2);
}

int func_43(int iParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6)//Position - 0x368E
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	var uVar16;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	vector3 vVar24;
	int iVar27;
	var uVar28;
	var uVar31;
	var uVar34;
	int iVar35;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar7, &vVar10);
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam1), &vVar13, &uVar16);
		fVar19 = MISC::ABSF((vVar10.z - vVar7.z));
		fVar20 = MISC::ABSF((vVar10.x - vVar7.x));
		fVar21 = MISC::ABSF((vVar10.y - vVar7.y));
		if (fVar20 > fVar19)
		{
			fVar22 = (fVar20 / 2f);
			fVar23 = (fVar22 - MISC::ABSF(vVar7.z));
		}
		else
		{
			fVar22 = (fVar21 / 2f);
			fVar23 = (fVar22 - MISC::ABSF(vVar7.x));
		}
		vVar24.z = (vVar24.z + (vVar13.z - vVar7.z));
		ENTITY::SET_ENTITY_COORDS(iParam2, vParam3, 1, false, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(iParam2, vParam6, 2, 1);
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Vector((fVar23 * 1.25f), ((fVar21 / 2f) - (fVar22 * 0.75f)), 0f) + vVar24) };
		vVar4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Vector((fVar23 * 1.25f), ((-fVar21 / 2f) + (fVar22 * 0.75f)), 0f) + vVar24) };
		iVar35 = SHAPETEST::START_SHAPE_TEST_CAPSULE(vVar4, vVar1, fVar22, 19, PLAYER::PLAYER_PED_ID(), 4);
		if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar35, &iVar27, &uVar28, &uVar31, &uVar34) != 2)
		{
		}
		if (iVar27 != 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_44()//Position - 0x37C4
{
	bool bVar0;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_567) > 100)
	{
		if ((MISC::GET_GAME_TIMER() - Local_204[iLocal_566 /*18*/].f_12) > 500)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_204[iLocal_566 /*18*/]) && !PED::IS_PED_INJURED(Local_204[iLocal_566 /*18*/]))
			{
				bVar0 = true;
				if (!Local_204[iLocal_566 /*18*/].f_9 && PED::IS_PED_IN_ANY_VEHICLE(Local_204[iLocal_566 /*18*/], 0))
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					if (((ENTITY::IS_ENTITY_PLAYING_ANIM(Local_204[iLocal_566 /*18*/], sLocal_373, func_27(iLocal_566), 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_204[iLocal_566 /*18*/], sLocal_373, func_27(iLocal_566)) > 0.5f) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_204[iLocal_566 /*18*/], sLocal_373, func_27(iLocal_566)) < 0.75f) || Local_204[iLocal_566 /*18*/].f_9)
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_rcpap1_camera", Local_204[iLocal_566 /*18*/].f_2, 0.019f, -0.01f, 0.046f, 0f, 0f, -180f, 1065353216, 0, 0, 0);
						if ((iLocal_566 % 3) == 0)
						{
							AUDIO::PLAY_SOUND_FROM_COORD(-1, "SHUTTER_FLASH", ENTITY::GET_ENTITY_COORDS(Local_204[iLocal_566 /*18*/].f_2, true), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else if ((iLocal_566 % 3) == 1)
						{
							AUDIO::PLAY_SOUND_FROM_COORD(-1, "SHUTTER", ENTITY::GET_ENTITY_COORDS(Local_204[iLocal_566 /*18*/].f_2, true), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else
						{
							AUDIO::PLAY_SOUND_FROM_COORD(-1, "FLASH", ENTITY::GET_ENTITY_COORDS(Local_204[iLocal_566 /*18*/].f_2, true), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						Local_204[iLocal_566 /*18*/].f_12 = MISC::GET_GAME_TIMER();
					}
					iLocal_567 = MISC::GET_GAME_TIMER();
				}
			}
			iLocal_566++;
			if (iLocal_566 >= Local_204)
			{
				iLocal_566 = 0;
			}
		}
	}
}

void func_45(int iParam0, int iParam1)//Position - 0x3967
{
	if (!PED::IS_PED_INJURED(Local_204[iParam1 /*18*/]) && !PED::IS_PED_INJURED(iParam0))
	{
		if (!PED::IS_PED_FACING_PED(Local_204[iParam1 /*18*/], iParam0, 20f))
		{
			if (BRAIN::GET_SCRIPT_TASK_STATUS(Local_204[iParam1 /*18*/], -875674219) != 1)
			{
				BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(Local_204[iParam1 /*18*/], iParam0, 0);
			}
		}
		else if ((MISC::GET_GAME_TIMER() - Local_204[iParam1 /*18*/].f_13) > 2000)
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_204[iParam1 /*18*/], sLocal_373, func_27(iParam1), 3))
			{
				BRAIN::TASK_PLAY_ANIM(Local_204[iParam1 /*18*/], sLocal_373, func_27(iParam1), 4f, -4f, -1, 0, 0, 0, 0, 0);
				Local_204[iParam1 /*18*/].f_13 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_46(int iParam0, int iParam1)//Position - 0x3A17
{
	vector3 vVar0;
	
	if (!PED::IS_PED_INJURED(Local_204[iParam1 /*18*/]) && !PED::IS_PED_INJURED(iParam0))
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, func_48(iParam1)) };
		switch (Local_204[iParam1 /*18*/].f_16)
		{
			case 0:
				func_47(vVar0, iParam1, iParam0);
				Local_204[iParam1 /*18*/].f_16++;
				break;
			
			case 1:
				if (BRAIN::GET_SCRIPT_TASK_STATUS(Local_204[iParam1 /*18*/], 713668775) != 1 || SYSTEM::VDIST(vVar0, Local_204[iParam1 /*18*/].f_6) > 5f)
				{
					Local_204[iParam1 /*18*/].f_16++;
				}
				break;
			
			case 2:
				if (SYSTEM::VDIST(vVar0, Local_204[iParam1 /*18*/].f_6) > 10f)
				{
					func_47(vVar0, iParam1, iParam0);
					Local_204[iParam1 /*18*/].f_16++;
				}
				else
				{
					func_45(iParam0, iParam1);
				}
				break;
			
			case 3:
				if (SYSTEM::VDIST2(vVar0, Local_204[iParam1 /*18*/].f_3) > 25f)
				{
					func_47(vVar0, iParam1, iParam0);
				}
				if (BRAIN::GET_SCRIPT_TASK_STATUS(Local_204[iParam1 /*18*/], 713668775) != 1)
				{
					Local_204[iParam1 /*18*/].f_16 = (Local_204[iParam1 /*18*/].f_16 - 1);
				}
				break;
			}
	}
}

void func_47(vector3 vParam0, int iParam3, int iParam4)//Position - 0x3B68
{
	vector3 vVar0;
	float fVar3;
	
	vVar0 = { func_35(ENTITY::GET_ENTITY_COORDS(iParam4, true) - vParam0) };
	fVar3 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
	Local_204[iParam3 /*18*/].f_3 = { vParam0 };
	BRAIN::CLEAR_PED_TASKS(Local_204[iParam3 /*18*/]);
	if (SYSTEM::VDIST(vParam0, Local_204[iParam3 /*18*/].f_6) < 2f)
	{
		BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_204[iParam3 /*18*/], Local_204[iParam3 /*18*/].f_3, 1f, -1, 0.5f, 512, fVar3);
	}
	else
	{
		BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_204[iParam3 /*18*/], Local_204[iParam3 /*18*/].f_3, 2f, -1, 0.5f, 512, fVar3);
	}
}

Vector3 func_48(int iParam0)//Position - 0x3C02
{
	switch (iParam0)
	{
		case 0:
			return -0.6578f, 3.328f, 0.2129f;
			break;
		
		case 1:
			return 0.5781f, 3.1584f, 0.2203f;
			break;
		
		case 2:
			return 1.6953f, 2.4036f, 0.1413f;
			break;
		
		case 3:
			return 2.2778f, 1.3153f, 0.1534f;
			break;
		
		case 4:
			return 2.0457f, 0.0073f, 0.2707f;
			break;
		
		case 5:
			return 2.097f, -1.2978f, 0.23f;
			break;
		
		case 6:
			return 2.0693f, -3.2216f, 0.3726f;
			break;
		
		case 7:
			return 1.0275f, -3.6726f, 0.155f;
			break;
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_49()//Position - 0x3CEF
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (HUD::DOES_BLIP_EXIST(Local_204[iVar0 /*18*/].f_1))
		{
			if (PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
			{
				HUD::REMOVE_BLIP(&(Local_204[iVar0 /*18*/].f_1));
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(Local_204[iVar0 /*18*/], 0))
			{
				HUD::REMOVE_BLIP(&(Local_204[iVar0 /*18*/].f_1));
			}
		}
		else if (!PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]) && !PED::IS_PED_IN_ANY_VEHICLE(Local_204[iVar0 /*18*/], 0))
		{
			Local_204[iVar0 /*18*/].f_1 = func_183(Local_204[iVar0 /*18*/], 1, 145);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_204[iVar0 /*18*/].f_1, "EP_PAPBLIP");
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_131)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[iVar0 /*18*/], 0))
		{
			if (HUD::DOES_BLIP_EXIST(Local_131[iVar0 /*18*/].f_1))
			{
				vVar1 = { HUD::GET_BLIP_COORDS(Local_131[iVar0 /*18*/].f_1) };
				vVar4 = { Local_131[iVar0 /*18*/].f_8 };
				vVar1.x = (vVar1.x + ((vVar4.x - vVar1.x) / 10f));
				vVar1.y = (vVar1.y + ((vVar4.y - vVar1.y) / 10f));
				vVar1.z = (vVar1.z + ((vVar4.z - vVar1.z) / 10f));
				HUD::SET_BLIP_COORDS(Local_131[iVar0 /*18*/].f_1, vVar1);
				if (func_52(Local_131[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0, 1))
				{
					HUD::REMOVE_BLIP(&(Local_131[iVar0 /*18*/].f_1));
				}
			}
			else if (!func_52(Local_131[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0, 1))
			{
				Local_131[iVar0 /*18*/].f_1 = func_50(Local_131[iVar0 /*18*/].f_8, 0);
				HUD::SET_BLIP_COLOUR(Local_131[iVar0 /*18*/].f_1, 1);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_131[iVar0 /*18*/].f_1, "EP_PAPBLIP");
				HUD::SET_BLIP_PRIORITY(Local_131[iVar0 /*18*/].f_1, 9);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(Local_131[iVar0 /*18*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_131[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
}

int func_50(vector3 vParam0, bool bParam3)//Position - 0x3ECE
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_51(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_51(bool bParam0, float fParam1, float fParam2)//Position - 0x3EFA
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_52(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x3F11
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_53(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (iParam2 && PED::IS_PED_A_PLAYER(iVar2))
				{
					if (!PED::IS_PED_INJURED(iVar2) || iParam8)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)) == 0)
						{
							if (!bParam5)
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_53(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x3FD6
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, iParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (BRAIN::GET_SCRIPT_TASK_STATUS(iVar0, 451360105) == 1 || BRAIN::GET_SCRIPT_TASK_STATUS(iVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false), ENTITY::GET_ENTITY_COORDS(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_54(int iParam0, vector3 vParam1, float fParam4, char* sParam5, char* sParam6, int iParam7)//Position - 0x4075
{
	if (!PED::IS_PED_INJURED(Local_204[iParam0 /*18*/]))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_204[iParam0 /*18*/], true), vParam1) > 1.5f)
		{
			if (BRAIN::GET_SCRIPT_TASK_STATUS(Local_204[iParam0 /*18*/], 713668775) != 1)
			{
				BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_204[iParam0 /*18*/], vParam1, 2f, -1, 0.25f, 0, fParam4);
			}
		}
		else if (MISC::ABSF((func_55(ENTITY::GET_ENTITY_HEADING(Local_204[iParam0 /*18*/])) - func_55(fParam4))) > 10f)
		{
			if (BRAIN::GET_SCRIPT_TASK_STATUS(Local_204[iParam0 /*18*/], 1920390111) != 1)
			{
				BRAIN::TASK_ACHIEVE_HEADING(Local_204[iParam0 /*18*/], fParam4, 0);
			}
		}
		else
		{
			switch (Local_204[iParam0 /*18*/].f_16)
			{
				case 0:
					if (MISC::IS_STRING_NULL_OR_EMPTY(iParam7))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_204[iParam0 /*18*/], sParam5, sParam6, 3))
						{
							BRAIN::TASK_PLAY_ANIM(Local_204[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 1, 0, 0, 0, 0);
						}
					}
					else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_204[iParam0 /*18*/], sParam5, sParam6, 3))
					{
						BRAIN::TASK_PLAY_ANIM(Local_204[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_204[iParam0 /*18*/], sParam5, sParam6) > 0.99f)
					{
						BRAIN::TASK_PLAY_ANIM(Local_204[iParam0 /*18*/], sParam5, iParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_204[iParam0 /*18*/].f_16++;
					}
					break;
				
				case 1:
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_204[iParam0 /*18*/], sParam5, iParam7, 3))
					{
						BRAIN::TASK_PLAY_ANIM(Local_204[iParam0 /*18*/], sParam5, iParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_204[iParam0 /*18*/], sParam5, iParam7) > 0.99f)
					{
						BRAIN::TASK_PLAY_ANIM(Local_204[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_204[iParam0 /*18*/].f_16 = 0;
					}
					break;
				}
			}
	}
}

float func_55(float fParam0)//Position - 0x424F
{
	if (fParam0 >= 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	if (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

var func_56(int iParam0, int iParam1)//Position - 0x4283
{
	if (iParam1 == 0)
	{
		return Local_204[func_61(iParam0) /*18*/];
	}
	return Local_204[func_59(iParam0) /*18*/];
}

void func_57(int iParam0, vector3 vParam1, float fParam4, bool bParam5)//Position - 0x42AB
{
	if ((iParam0 % 2) == 1)
	{
		Local_131[iParam0 /*18*/] = VEHICLE::CREATE_VEHICLE(joaat("vader"), vParam1, fParam4, true, true, false);
	}
	else
	{
		Local_131[iParam0 /*18*/] = VEHICLE::CREATE_VEHICLE(joaat("cavalcade2"), vParam1, fParam4, true, true, false);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_131[iParam0 /*18*/], 0);
	}
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_131[iParam0 /*18*/], 1084227584);
	VEHICLE::SET_VEHICLE_STRONG(Local_131[iParam0 /*18*/], true);
	if (bParam5)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(func_56(iParam0, 0)))
		{
			func_58(func_61(iParam0), vParam1, fParam4);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(func_56(iParam0, 1)))
		{
			func_58(func_59(iParam0), vParam1, fParam4);
		}
		if (!PED::IS_PED_INJURED(func_56(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[iParam0 /*18*/], 0))
		{
			PED::SET_PED_INTO_VEHICLE(func_56(iParam0, 0), Local_131[iParam0 /*18*/], -1);
		}
		if (!PED::IS_PED_INJURED(func_56(iParam0, 1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[iParam0 /*18*/], 0))
		{
			PED::SET_PED_INTO_VEHICLE(func_56(iParam0, 1), Local_131[iParam0 /*18*/], 0);
		}
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_131[iParam0 /*18*/], true, true, 0);
	}
}

void func_58(int iParam0, vector3 vParam1, float fParam4)//Position - 0x43C6
{
	Local_204[iParam0 /*18*/] = PED::CREATE_PED(26, joaat("a_m_y_genstreet_02"), vParam1, fParam4, 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iParam0 /*18*/], 1, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_204[iParam0 /*18*/], true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iParam0 /*18*/], 0, true);
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_204[iParam0 /*18*/], 3);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_204[iParam0 /*18*/], true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iParam0 /*18*/], 17, true);
	PED::SET_PED_FLEE_ATTRIBUTES(Local_204[iParam0 /*18*/], 2, false);
	ENTITY::_SET_ENTITY_SOMETHING(Local_204[iParam0 /*18*/], false);
	PED::SET_PED_KEEP_TASK(Local_204[iParam0 /*18*/], true);
	PED::SET_PED_SHOOT_RATE(Local_204[iParam0 /*18*/], 100);
	PED::SET_PED_FIRING_PATTERN(Local_204[iParam0 /*18*/], -957453492);
	PED::SET_PED_CONFIG_FLAG(Local_204[iParam0 /*18*/], 101, true);
	PED::SET_PED_CONFIG_FLAG(Local_204[iParam0 /*18*/], 185, false);
	ENTITY::SET_ENTITY_HEALTH(Local_204[iParam0 /*18*/], 300, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_204[iParam0 /*18*/], 3, (iParam0 % 2), SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 2f)), 0);
	if (Global_3 || bLocal_70)
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Local_204[iParam0 /*18*/], true);
		ENTITY::SET_ENTITY_HEALTH(Local_204[iParam0 /*18*/], 500, 0);
	}
	PED::SET_PED_TARGET_LOSS_RESPONSE(Local_204[iParam0 /*18*/], 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iParam0 /*18*/], 2, true);
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_204[iParam0 /*18*/], 2f);
	ENTITY::_SET_ENTITY_SOMETHING(Local_204[iParam0 /*18*/], false);
	PED::SET_PED_HELMET(Local_204[iParam0 /*18*/], 0);
	Local_204[iParam0 /*18*/].f_2 = OBJECT::CREATE_OBJECT(joaat("prop_pap_camera_01"), PED::GET_PED_BONE_COORDS(Local_204[iParam0 /*18*/], 28422, 0f, 0f, 0f), true, true, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_204[iParam0 /*18*/].f_2, Local_204[iParam0 /*18*/], PED::GET_PED_BONE_INDEX(Local_204[iParam0 /*18*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_204[0 /*18*/].f_2))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_204[0 /*18*/].f_2, false, 0);
	}
	Local_204[iParam0 /*18*/].f_17 = ENTITY::GET_ENTITY_HEALTH(Local_204[iParam0 /*18*/]);
}

int func_59(int iParam0)//Position - 0x4589
{
	return iParam0 * 2 + 1;
}

void func_60(int iParam0)//Position - 0x4597
{
	if ((iParam0 % 2) == 1)
	{
		Local_204[iParam0 /*18*/].f_14 = ((iParam0 - 1) / 2);
	}
	else
	{
		Local_204[iParam0 /*18*/].f_14 = (iParam0 / 2);
	}
}

int func_61(int iParam0)//Position - 0x45C4
{
	return iParam0 * 2;
}

void func_62(int iParam0)//Position - 0x45D0
{
	Local_131[iParam0 /*18*/].f_17 = 0;
}

int func_63()//Position - 0x45E1
{
	bool bVar0;
	bool bVar1;
	
	if (!PED::IS_PED_INJURED(iLocal_86))
	{
		bVar0 = false;
		if (func_66())
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_65()))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(func_65(), true), vLocal_63) < 5f && ENTITY::GET_ENTITY_SPEED(iLocal_91) < 1f)
				{
					bVar0 = true;
				}
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_91, 0) && PED::IS_PED_IN_VEHICLE(iLocal_86, iLocal_91, 0))
			{
				fLocal_570 = (fLocal_570 + MISC::GET_FRAME_TIME());
			}
			else if (fLocal_570 > 0f)
			{
				fLocal_570 = 0f;
			}
		}
		if (bVar0)
		{
			fLocal_569 = (fLocal_569 + MISC::GET_FRAME_TIME());
		}
		else if (fLocal_569 > 0f)
		{
			fLocal_569 = 0f;
		}
		if (fLocal_569 > 30f)
		{
			bVar1 = true;
		}
		if (iLocal_71)
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(iLocal_86, iLocal_91))
			{
				if (PED::IS_PED_RAGDOLL(iLocal_86))
				{
					bVar1 = true;
				}
				iLocal_71 = 0;
			}
		}
		if (!iLocal_71)
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_86, iLocal_91))
			{
				iLocal_71 = 1;
			}
		}
		if (fLocal_570 > 30f)
		{
			bVar1 = true;
		}
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0) && (!bLocal_368 || iLocal_47 == 1))
		{
			bVar1 = true;
		}
		if (SYSTEM::VDIST(vLocal_63, vLocal_60) > 30f)
		{
			bVar1 = true;
		}
		if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0) && func_64(iLocal_91)) && (!bLocal_368 || iLocal_47 == 1)) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_86, true), vLocal_56) > 15f)
		{
			bVar1 = true;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0) && ENTITY::IS_ENTITY_IN_WATER(iLocal_91))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
			{
				sLocal_371 = "REPAP_GUP";
			}
			else
			{
				sLocal_371 = "REPAP_GUP2";
			}
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)//Position - 0x479E
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
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

int func_65()//Position - 0x4803
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_204[iVar0 /*18*/])) && !PED::IS_PED_INJURED(iLocal_86))
		{
			if (SYSTEM::VDIST2(vLocal_63, Local_204[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = SYSTEM::VDIST2(vLocal_63, Local_204[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1)
	{
		return Local_204[iVar1 /*18*/];
	}
	return 0;
}

int func_66()//Position - 0x4891
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_86))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_86, iLocal_91, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_91, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_67()//Position - 0x48CE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (func_68(Local_204[iVar0 /*18*/], 0, 0))
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]))
		{
			if (PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]) || ENTITY::IS_ENTITY_DEAD(Local_204[iVar0 /*18*/], 0))
			{
				if (iLocal_386[iVar0] > 50)
				{
					iLocal_349++;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_68(int iParam0, int iParam1, bool bParam2)//Position - 0x4940
{
	vector3 vVar0;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, 1);
		}
		if (!bParam2)
		{
			if (MISC::IS_BULLET_IN_AREA(vVar0, 5f, 1))
			{
				return 1;
			}
		}
		if (SYSTEM::VDIST2(vVar0, vLocal_60) < 400f)
		{
			if (!bParam2)
			{
				if ((WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID())) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
			if ((iVar3 == joaat("weapon_petrolcan") && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) && SYSTEM::VDIST2(vLocal_60, vVar0) < 9f)
			{
				return 1;
			}
			if (((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0)) && (func_69(vLocal_60, iParam0) && SYSTEM::VDIST2(vLocal_60, ENTITY::GET_ENTITY_COORDS(iParam0, true)) < 100f)) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				return 1;
			}
			if (iLocal_385 > 150)
			{
				return 1;
			}
		}
		if (GRAPHICS::_0x2F09F7976C512404(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0) && iParam1)
	{
		return 1;
	}
	return 0;
}

int func_69(vector3 vParam0, int iParam3)//Position - 0x4A99
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam3, true) };
	vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam3, 0f, 1f, 0f) - vVar0 };
	vVar6 = { vParam0 - vVar0 };
	fVar9 = func_70(vVar3, vVar6);
	if (fVar9 > 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_70(vector3 vParam0, vector3 vParam3)//Position - 0x4AE9
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_71()//Position - 0x4B0A
{
	if (iLocal_47 != 11)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_362))
		{
			HUD::REMOVE_BLIP(&iLocal_362);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_363))
		{
			HUD::REMOVE_BLIP(&iLocal_363);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_360))
		{
			HUD::REMOVE_BLIP(&iLocal_360);
		}
		iLocal_48 = iLocal_47;
		iLocal_47 = 11;
	}
	else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 3)
		{
			if (!func_74())
			{
				func_72("REPAP_COP1");
			}
		}
		else
		{
			func_181(5);
		}
	}
	else if (func_5(&Local_395, cLocal_372, "REPAP_COP2", 4, 0, 0, 0))
	{
		iLocal_47 = iLocal_48;
	}
}

void func_72(char* sParam0)//Position - 0x4BA3
{
	if ((MISC::GET_GAME_TIMER() - iLocal_667) > 5000)
	{
		if (!func_73())
		{
			if (func_5(&Local_395, cLocal_372, sParam0, 4, 0, 0, 0))
			{
				iLocal_667 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

int func_73()//Position - 0x4BDB
{
	if (Global_15866 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_74()//Position - 0x4BFD
{
	if (!PED::IS_PED_INJURED(iLocal_86) && SYSTEM::VDIST2(vLocal_60, vLocal_63) < 400f)
	{
		if (!iLocal_350 && (MISC::GET_GAME_TIMER() - iLocal_352) > 5000)
		{
			if (iLocal_82 > 10)
			{
				iLocal_350 = 1;
				iLocal_82 = 0;
			}
		}
		if ((!iLocal_355 && !iLocal_350) && (MISC::GET_GAME_TIMER() - iLocal_356) > 4000)
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_357 > 2)
				{
					if (!Global_3 && !bLocal_70)
					{
						func_181(5);
					}
				}
				else
				{
					iLocal_355 = 1;
					iLocal_357++;
				}
			}
		}
		if (((!iLocal_353 && !iLocal_350) && !iLocal_355) && (MISC::GET_GAME_TIMER() - iLocal_354) > 15000)
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_353 = 1;
			}
		}
		if (iLocal_350)
		{
			if (iLocal_351)
			{
				if (func_5(&Local_395, cLocal_372, "REPAP_HIT", 4, 0, 0, 0))
				{
					iLocal_352 = MISC::GET_GAME_TIMER();
					iLocal_350 = 0;
				}
			}
			else if (func_5(&Local_395, cLocal_372, "REPAP_HUR", 4, 0, 0, 0))
			{
				iLocal_352 = MISC::GET_GAME_TIMER();
				iLocal_350 = 0;
				iLocal_351 = 1;
			}
		}
		if (iLocal_355)
		{
			if (func_5(&Local_395, cLocal_372, "REPAP_SHOOT", 4, 0, 0, 0))
			{
				iLocal_356 = MISC::GET_GAME_TIMER();
				iLocal_355 = 0;
			}
		}
		if (iLocal_353)
		{
			if (func_5(&Local_395, cLocal_372, "REPAP_GUN", 4, 0, 0, 0))
			{
				iLocal_354 = MISC::GET_GAME_TIMER();
				iLocal_353 = 0;
			}
		}
	}
	return ((iLocal_353 || iLocal_355) || iLocal_350);
}

void func_75()//Position - 0x4DAD
{
	if (!PED::IS_PED_INJURED(iLocal_86))
	{
		PED::SET_PED_KEEP_TASK(iLocal_86, true);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_69, 1862763509);
		if (!Global_3 && !bLocal_70)
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_86, 317, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_86, false);
		}
	}
	func_79(-1, 0);
	func_76();
	AUDIO::UNLOCK_MISSION_NEWS_STORY(62);
	func_274();
}

void func_76()//Position - 0x4E07
{
	func_77();
}

int func_77()//Position - 0x4E14
{
	if (func_78(0))
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

bool func_78(bool bParam0)//Position - 0x4E5F
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71838, 0);
}

void func_79(int iParam0, int iParam1)//Position - 0x4E8A
{
	if (iParam0 == -1)
	{
		iParam0 = func_97();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_96(iParam0))
	{
		func_95(iParam0, iParam1);
		if (!func_94(51))
		{
			func_90("RE_REWARD", 1, 0, 4000, 10000, func_93(), 0, 138, 0);
			func_89(51);
		}
		if (func_88(iParam0))
		{
			Global_106565.f_24989.f_2 = 3;
		}
		if (func_87(iParam0, iParam1) != 322)
		{
			func_81(func_87(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_106553 = iParam1;
		if (Global_106551 == 0)
		{
			if (((Global_106554 == 1 || Global_106554 == 5) || Global_106554 == 11) || Global_106554 == 25)
			{
				func_80(2);
			}
			else if ((Global_106554 == 26 || Global_106554 == 8) || Global_106554 == 17)
			{
				func_80(7);
			}
			else
			{
				func_80(1);
			}
		}
	}
}

void func_80(int iParam0)//Position - 0x4F8E
{
	Global_106551 = iParam0;
}

void func_81(int iParam0, var uParam1, var uParam2)//Position - 0x4F9C
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_85((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_106565.f_10188[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_106565.f_10188[iParam0 /*12*/].f_6 == 11 || Global_106565.f_10188[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_106565.f_10188[iParam0 /*12*/].f_5 = 1;
		Global_106565.f_10188[iParam0 /*12*/].f_10 = uParam1;
		Global_106565.f_10188[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_82();
	}
}

void func_82()//Position - 0x5084
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_106301 = 0;
	Global_106302 = 0;
	Global_106303 = 0;
	Global_106304 = 0;
	Global_106305 = 0;
	Global_106306 = 0;
	Global_106307 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_106565.f_10188.f_3853;
	Global_106565.f_10188.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_106565.f_10188[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_106565.f_10188[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_106301++;
					fVar1 = (fVar1 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_106302++;
					fVar2 = (fVar2 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_106303++;
					fVar3 = (fVar3 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_106304++;
					fVar4 = (fVar4 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_106305++;
					fVar5 = (fVar5 + (Global_106565.f_10188[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_106306++;
					fVar6 = (fVar6 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_106307++;
					fVar7 = (fVar7 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_106284 > 0)
	{
		if (Global_106301 == Global_106284)
		{
			fVar1 = 55f;
		}
	}
	if (Global_106285 > 0)
	{
		if (Global_106302 == Global_106285)
		{
			fVar2 = 10f;
		}
	}
	if (Global_106286 > 0)
	{
		if (Global_106303 == Global_106286)
		{
			fVar3 = 0f;
		}
	}
	if (Global_106287 > 0)
	{
		if (Global_106304 == Global_106287)
		{
			fVar4 = 10f;
		}
	}
	if (Global_106288 > 0)
	{
		if (((Global_106305 == Global_106288 || (Global_106288 * 10 / Global_106305) < 41) || Global_106305 > Global_106291) || Global_106305 == Global_106291)
		{
			if (!MISC::IS_BIT_SET(Global_106565.f_10188.f_3856, 14))
			{
				if (Global_106305 == Global_106288)
				{
					STATS::_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_106288, 0);
					MISC::SET_BIT(&(Global_106565.f_10188.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_106289 > 0)
	{
		if (Global_106306 == Global_106289)
		{
			fVar6 = 15f;
		}
	}
	if (Global_106290 > 0)
	{
		if (Global_106307 == Global_106290)
		{
			fVar7 = 5f;
		}
	}
	Global_106565.f_10188.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_106305 > Global_106291 || Global_106305 == Global_106291)
	{
		iVar9 = Global_106291;
	}
	else
	{
		iVar9 = Global_106305;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_106301, 1);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_106284, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_106302, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_106285, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_106303, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_106286, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_106304, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_106287, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_106291, 1);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_106307 + Global_106306), 1);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_106290 + Global_106289), 1);
	Global_106308 = (Global_106301 * 100 / Global_106284);
	Global_106310 = ((Global_106303 + Global_106302) * 100 / (Global_106286 + Global_106285));
	Global_106309 = ((Global_106304 + iVar9) * 100 / (Global_106287 + Global_106291));
	Global_106311 = ((Global_106306 + Global_106307) * 100 / (Global_106289 + Global_106290));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_106565.f_10188.f_3853, 1);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_106308, 1);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_106309, 1);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_106310, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_106565.f_10188.f_3853))
	{
		func_84(13, SYSTEM::FLOOR(Global_106565.f_10188.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_71590)
		{
			if (func_83() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_77();
				}
			}
		}
	}
}

int func_83()//Position - 0x5545
{
	return Global_25765;
}

int func_84(int iParam0, int iParam1)//Position - 0x5550
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

int func_85(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x55A1
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	if (iParam2 == -1)
	{
		iParam2 = func_86();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar20, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_86()//Position - 0x5B57
{
	return Global_1312745;
}

int func_87(int iParam0, int iParam1)//Position - 0x5B63
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_88(int iParam0)//Position - 0x5ED7
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_89(int iParam0)//Position - 0x5F06
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_106565.f_20404.f_150[iVar1]), iVar0);
	}
}

void func_90(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x5F48
{
	func_91(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_91(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x5F68
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
		func_92();
	}
}

void func_92()//Position - 0x613A
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

int func_93()//Position - 0x625A
{
	func_20();
	switch (Global_106565.f_2357.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_94(int iParam0)//Position - 0x62A0
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return MISC::IS_BIT_SET(Global_106565.f_20404.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_95(int iParam0, int iParam1)//Position - 0x62E3
{
	MISC::SET_BIT(&(Global_106565.f_24989.f_8[iParam0]), iParam1);
}

int func_96(int iParam0)//Position - 0x62FE
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_97()//Position - 0x63AF
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_98(Var0);
	return uVar16;
}

int func_98(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x63CC
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_99()//Position - 0x65A6
{
	if (Global_26001)
	{
		func_80(4);
		return 1;
	}
	return 0;
}

void func_100()//Position - 0x65BE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_49 != 5)
	{
		iLocal_49 = 5;
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_360))
	{
		HUD::REMOVE_BLIP(&iLocal_360);
	}
	switch (iLocal_369)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_86))
			{
				BRAIN::TASK_SMART_FLEE_PED(iLocal_86, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_204)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(Local_204[iVar0 /*18*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_204[iVar0 /*18*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 900f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/].f_2))
						{
							OBJECT::DELETE_OBJECT(&(Local_204[iVar0 /*18*/].f_2));
						}
						PED::DELETE_PED(&(Local_204[iVar0 /*18*/]));
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_204[iVar0 /*18*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_204[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_131)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_131[iVar0 /*18*/]))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(Local_131[iVar0 /*18*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_131[iVar0 /*18*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 900f)
					{
						VEHICLE::DELETE_VEHICLE(&(Local_131[iVar0 /*18*/]));
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_131[iVar0 /*18*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_131[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			SYSTEM::SETTIMERA(0);
			iLocal_673 = 0;
			iLocal_369++;
			break;
		
		case 1:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_204)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_204[iVar0 /*18*/])) && !ENTITY::IS_ENTITY_DEAD(Local_204[iVar0 /*18*/], 0))
				{
					iVar1++;
					func_46(PLAYER::PLAYER_PED_ID(), iVar0);
					if (ENTITY::IS_ENTITY_OCCLUDED(Local_204[iVar0 /*18*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_204[iVar0 /*18*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 2500f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/].f_2))
						{
							OBJECT::DELETE_OBJECT(&(Local_204[iVar0 /*18*/].f_2));
						}
						PED::DELETE_PED(&(Local_204[iVar0 /*18*/]));
					}
				}
				iVar0++;
			}
			if (!iLocal_673)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(func_65(), true)) < 100f)
				{
					iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					if (func_19() == 1)
					{
						func_18(&Local_395, 6);
						func_18(&Local_395, 7);
						func_18(&Local_395, 8);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_395, 6, func_65(), "PAP1ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[6 /*10*/]) && !PED::IS_PED_INJURED(Local_395[6 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_PAP1", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_395, 7, func_65(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[7 /*10*/]) && !PED::IS_PED_INJURED(Local_395[7 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_PAP2", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_395, 8, func_65(), "PAP3ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[8 /*10*/]) && !PED::IS_PED_INJURED(Local_395[8 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_PAP3", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
						}
					}
					else if (func_19() == 2)
					{
						func_18(&Local_395, 6);
						func_18(&Local_395, 5);
						iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_395, 6, func_65(), "PAP1ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE1T", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_395, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_395, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
						}
					}
					else
					{
						func_18(&Local_395, 6);
						func_18(&Local_395, 5);
						iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_395, 6, func_65(), "PAP1ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE1M", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_395, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_395, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							}
						}
					}
			}
			if (func_67())
			{
				func_193();
				func_274();
			}
			if (iVar1 == 0)
			{
				func_274();
			}
			break;
	}
}

void func_101(char* sParam0)//Position - 0x6B78
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_49 != 5)
	{
		iLocal_49 = 5;
	}
	if (!iLocal_672)
	{
		iVar0 = 0;
		while (iVar0 < Local_204)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
			{
				BRAIN::CLEAR_PED_TASKS(Local_204[iVar0 /*18*/]);
				Local_204[iVar0 /*18*/].f_16 = 2;
			}
			iVar0++;
		}
		iLocal_672 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (HUD::DOES_BLIP_EXIST(Local_204[iVar0 /*18*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_204[iVar0 /*18*/].f_1));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]))
		{
			if (!PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
			{
				iVar1++;
				if (!PED::IS_PED_INJURED(iLocal_86))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_204[iVar0 /*18*/], 0))
					{
						BRAIN::TASK_LEAVE_ANY_VEHICLE(Local_204[iVar0 /*18*/], 0, 0);
					}
					else
					{
						func_46(iLocal_86, iVar0);
					}
				}
				else if (BRAIN::GET_SCRIPT_TASK_STATUS(Local_204[iVar0 /*18*/], -1146898486) != 1)
				{
					BRAIN::TASK_WANDER_STANDARD(Local_204[iVar0 /*18*/], 1193033728, 0);
				}
			}
			if ((ENTITY::IS_ENTITY_OCCLUDED(Local_204[iVar0 /*18*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_204[iVar0 /*18*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 400f) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_204[iVar0 /*18*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 400f)
			{
				PED::DELETE_PED(&(Local_204[iVar0 /*18*/]));
				if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/].f_2))
				{
					OBJECT::DELETE_OBJECT(&(Local_204[iVar0 /*18*/].f_2));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_131)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_131[iVar0 /*18*/]))
		{
			if ((ENTITY::IS_ENTITY_OCCLUDED(Local_131[iVar0 /*18*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_131[iVar0 /*18*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 2500f) && func_52(Local_131[iVar0 /*18*/], 0, 0, 0, 0, 0, 1, 0, 1))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_131[iVar0 /*18*/]));
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_131[iVar0 /*18*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_131[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_86))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_86) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vLocal_63) > 2500f)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_86);
			func_274();
		}
	}
	if (func_67() || func_68(iLocal_86, 1, 1))
	{
		func_181(5);
	}
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]))
		{
			if (!PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	switch (iLocal_369)
	{
		case 0:
			if (HUD::DOES_BLIP_EXIST(iLocal_360))
			{
				HUD::REMOVE_BLIP(&iLocal_360);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_361))
			{
				HUD::REMOVE_BLIP(&iLocal_361);
			}
			if (!PED::IS_PED_INJURED(iLocal_86))
			{
				BRAIN::CLEAR_PED_TASKS(iLocal_86);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_86, 3f);
			}
			func_102();
			if (SYSTEM::VDIST(vLocal_60, vLocal_63) < 30f)
			{
				if (func_5(&Local_395, cLocal_372, sParam0, 4, 0, 0, 0))
				{
					iVar0 = 0;
					while (iVar0 < Local_204)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]))
						{
							if (!PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
							{
								BRAIN::CLEAR_PED_TASKS(Local_204[iVar0 /*18*/]);
							}
						}
						iVar0++;
					}
					iLocal_369++;
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_204)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]))
					{
						if (!PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
						{
							BRAIN::CLEAR_PED_TASKS(Local_204[iVar0 /*18*/]);
						}
					}
					iVar0++;
				}
				iLocal_369++;
			}
			break;
		
		case 1:
			if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0) && PED::IS_PED_IN_VEHICLE(iLocal_86, iLocal_91, 0)) && !bLocal_368) && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_91, -1, 0))
			{
				if (SYSTEM::VDIST(vLocal_63, vLocal_53) < 100f)
				{
					BRAIN::OPEN_SEQUENCE_TASK(&iVar2);
					BRAIN::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(0, iLocal_91, 0);
					BRAIN::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_91, vLocal_53, 20f, 0, joaat("serrano"), 786599, 10f, 10f);
					BRAIN::TASK_VEHICLE_PARK(0, iLocal_91, vLocal_53, 288.7089f, 1, 50f, 0);
					BRAIN::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_91, ENTITY::GET_ENTITY_COORDS(iLocal_91, true), 5, 10f, 262144, 2f, 2f, 1);
					BRAIN::TASK_LEAVE_VEHICLE(0, iLocal_91, 0);
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_56, 1f, -1, 0.25f, 512, fLocal_59);
					BRAIN::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
					BRAIN::CLOSE_SEQUENCE_TASK(iVar2);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_86, iVar2);
					BRAIN::CLEAR_SEQUENCE_TASK(&iVar2);
				}
				else
				{
					BRAIN::OPEN_SEQUENCE_TASK(&iVar3);
					BRAIN::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(0, iLocal_91, 0);
					BRAIN::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_91, 15f, 786468);
					BRAIN::CLOSE_SEQUENCE_TASK(iVar3);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_86, iVar3);
					BRAIN::CLEAR_SEQUENCE_TASK(&iVar3);
				}
				iLocal_369 = 1000;
			}
			else
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_86, 0))
				{
					BRAIN::TASK_LEAVE_ANY_VEHICLE(iLocal_86, 0, 0);
				}
				iLocal_369++;
			}
			break;
		
		case 2:
			if (iVar1 > 0)
			{
				BRAIN::TASK_SMART_FLEE_PED(iLocal_86, PLAYER::PLAYER_PED_ID(), 3000f, -1, 1, 0);
				iLocal_369 = 1000;
			}
			else
			{
				if (SYSTEM::VDIST(vLocal_63, vLocal_53) < 100f)
				{
					BRAIN::OPEN_SEQUENCE_TASK(&iVar4);
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_56, 1f, -1, 0.25f, 512, fLocal_59);
					BRAIN::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
					BRAIN::CLOSE_SEQUENCE_TASK(iVar4);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_86, iVar4);
					BRAIN::CLEAR_SEQUENCE_TASK(&iVar4);
				}
				else
				{
					BRAIN::TASK_WANDER_STANDARD(iLocal_86, 1193033728, 0);
				}
				iLocal_369 = 1000;
			}
			break;
		
		case 1000:
			if (iVar1 == 0)
			{
				func_274();
			}
			break;
	}
}

void func_102()//Position - 0x70E3
{
	Global_14732 = 0;
	func_103();
}

void func_103()//Position - 0x70F3
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16877 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15866 = 6;
	}
}

void func_104()//Position - 0x7114
{
	func_102();
	if (!PED::IS_PED_INJURED(iLocal_86) && SYSTEM::VDIST2(vLocal_60, vLocal_63) < 900f)
	{
		BRAIN::CLEAR_PED_TASKS(iLocal_86);
		if (func_5(&Local_395, cLocal_372, "REPAP_CRZY", 4, 0, 0, 0))
		{
			func_193();
			func_181(10);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_86, -2065892691);
	}
	else
	{
		func_193();
		func_181(10);
	}
}

void func_105()//Position - 0x717E
{
	int iVar0;
	
	switch (iLocal_369)
	{
		case 0:
			func_140();
			if (!PED::IS_PED_INJURED(iLocal_86))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_360))
				{
					iLocal_360 = func_183(iLocal_86, 0, 145);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_363))
				{
					HUD::REMOVE_BLIP(&iLocal_363);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_362))
				{
					HUD::REMOVE_BLIP(&iLocal_362);
				}
				BRAIN::CLEAR_PED_TASKS(iLocal_86);
				BRAIN::OPEN_SEQUENCE_TASK(&iVar0);
				BRAIN::TASK_LEAVE_VEHICLE(0, iLocal_91, 0);
				BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_56, 1f, 30000, 0.25f, 512, fLocal_59);
				BRAIN::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
				BRAIN::CLOSE_SEQUENCE_TASK(iVar0);
				BRAIN::TASK_PERFORM_SEQUENCE(iLocal_86, iVar0);
				BRAIN::CLEAR_SEQUENCE_TASK(&iVar0);
				if (PED::IS_PED_IN_GROUP(iLocal_86))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_86);
				}
				func_102();
				iLocal_369++;
			}
			break;
		
		case 1:
			if (!func_73() && !PED::IS_PED_INJURED(iLocal_86))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_86, vLocal_56, 3f, 3f, 3f, false, true, 0) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_56, 5f, 5f, 5f, false, true, 0))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_86))
			{
				func_139(0);
				if (func_5(&Local_395, cLocal_372, "REPAP_THK", 4, 0, 0, 0))
				{
					func_107(func_19(), 1, 150, 0, 1);
					iLocal_369++;
				}
			}
			break;
		
		case 3:
			if (!func_73() && !PED::IS_PED_INJURED(iLocal_86))
			{
				SYSTEM::SETTIMERA(0);
				iLocal_369++;
			}
			break;
		
		case 4:
			if (SYSTEM::TIMERA() > 2000)
			{
				if (func_106())
				{
					func_75();
				}
			}
			break;
	}
}

int func_106()//Position - 0x731C
{
	return 1;
}

void func_107(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x7325
{
	int iVar0;
	int iVar1;
	
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_108(Global_106565.f_28044[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_108(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x740C
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_138();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_137(99, 1);
					func_136(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_136(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_136(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_122(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_117(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_136(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_136(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_136(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_117(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_136(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_136(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_136(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_136(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_136(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_136(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_136(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_136(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_136(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_136(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_136(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_136(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_136(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_136(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_136(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_117(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_136(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_136(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_136(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_136(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_136(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_136(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_116(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_137(95, iParam3);
					break;
				
				case 1:
					func_137(97, iParam3);
					break;
				
				case 2:
					func_137(96, iParam3);
					break;
			}
			func_137(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_111(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_111(iVar1);
	}
	iVar5 = (Global_53668[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53668[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53668[iVar2] = 2147483647;
				}
				else
				{
					Global_53668[iVar2] = (Global_53668[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_136(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_136(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_136(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53668[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53668[iVar2];
			Global_53668[iVar2] = (Global_53668[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_106565.f_20558.f_233[iVar2 /*69*/]++;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_1++;
		if (Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_110(iParam0);
	if (Global_36425 == 15)
	{
		func_109(0);
	}
	return 1;
}

void func_109(bool bParam0)//Position - 0x7A0B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53676[iVar0 /*3*/][0] = Global_106565.f_20558[iVar0];
		Global_53676.f_31[iVar0 /*3*/][0] = Global_106565.f_20558.f_11[iVar0];
		Global_53676.f_62[iVar0 /*3*/][0] = Global_106565.f_20558.f_22[iVar0];
		Global_53676.f_93[iVar0 /*3*/][0] = Global_106565.f_20558.f_33[iVar0];
		Global_53676.f_124[iVar0 /*3*/][0] = Global_106565.f_20558.f_44[iVar0];
		Global_53676.f_155[iVar0 /*3*/][0] = Global_106565.f_20558.f_55[iVar0];
		Global_53676.f_186[iVar0 /*3*/][0] = Global_106565.f_20558.f_66[iVar0];
		Global_53676.f_217[iVar0 /*3*/][0] = Global_106565.f_20558.f_77[iVar0];
		Global_53676.f_248[iVar0 /*3*/][0] = Global_106565.f_20558.f_88[iVar0];
		if (!bParam0)
		{
			Global_53676[iVar0 /*3*/][1] = Global_106565.f_20558[iVar0];
			Global_53676.f_31[iVar0 /*3*/][1] = Global_106565.f_20558.f_11[iVar0];
			Global_53676.f_62[iVar0 /*3*/][1] = Global_106565.f_20558.f_22[iVar0];
			Global_53676.f_93[iVar0 /*3*/][1] = Global_106565.f_20558.f_33[iVar0];
			Global_53676.f_124[iVar0 /*3*/][1] = Global_106565.f_20558.f_44[iVar0];
			Global_53676.f_155[iVar0 /*3*/][1] = Global_106565.f_20558.f_55[iVar0];
			Global_53676.f_186[iVar0 /*3*/][1] = Global_106565.f_20558.f_66[iVar0];
			Global_53676.f_217[iVar0 /*3*/][1] = Global_106565.f_20558.f_77[iVar0];
			Global_53676.f_248[iVar0 /*3*/][1] = Global_106565.f_20558.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_110(int iParam0)//Position - 0x7C8D
{
	int iVar0;
	
	iVar0 = Global_53668[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_111(int iParam0)//Position - 0x7CE7
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_85(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_85(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_85(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_85(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_114(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_114(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_114(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_114(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_114(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_114(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_106565.f_20558.f_471, iParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_106565.f_20558.f_471), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_106565.f_20558.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_113() /*10778*/].f_6165.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_106565.f_20558.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_113() /*10778*/].f_6165.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_112(iParam0));
		HUD::_SET_NOTIFICATION_MESSAGE_2(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_112(int iParam0)//Position - 0x7E76
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_113()//Position - 0x7F71
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_114(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x7F7E
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_115(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_115(var uParam0)//Position - 0x7FAE
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_86();
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

void func_116(int iParam0)//Position - 0x7FE2
{
	func_137(93, iParam0);
	func_137(29, iParam0);
	func_137(30, iParam0);
}

bool func_117(int iParam0)//Position - 0x8003
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
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_119(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_119(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_119(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_119(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::_GET_POSIX_TIME();
		iVar1 = func_118(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::_GET_POSIX_TIME();
		iVar3 = func_118(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::_GET_POSIX_TIME();
		iVar5 = func_118(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::_GET_POSIX_TIME();
		iVar7 = func_118(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::_GET_POSIX_TIME();
		iVar9 = func_118(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::_GET_POSIX_TIME();
		iVar11 = func_118(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_106565.f_20558.f_471, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2097152[func_113() /*10778*/].f_6165.f_10, iParam0);
}

int func_118(int iParam0, int iParam1, int iParam2)//Position - 0x81B3
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_115(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_119(int iParam0, int iParam1, int iParam2)//Position - 0x81E5
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_86();
	}
	iVar1 = func_121(iParam0, iParam1);
	uVar2 = func_120(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_120(int iParam0)//Position - 0x8222
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

int func_121(int iParam0, int iParam1)//Position - 0x8566
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_86();
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

int func_122(bool bParam0)//Position - 0x8889
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_84(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_123(27, 1);
	return 1;
}

int func_123(int iParam0, int iParam1)//Position - 0x8940
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_124(iParam0, iParam1);
}

int func_124(int iParam0, int iParam1)//Position - 0x895B
{
	if (func_12(14) && !func_135(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_26012 != 0 && !Global_71590)
	{
		return 0;
	}
	if (func_134(&Global_4269608))
	{
		if (func_132(&Global_4269608, iParam0))
		{
			return 0;
		}
		if (func_125(&Global_4269608, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_125(var uParam0, int iParam1)//Position - 0x89F8
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_12(14) && !func_135(iParam1))
	{
		return 0;
	}
	if (func_132(uParam0, iParam1))
	{
		return 0;
	}
	if (func_131(uParam0) < 0f)
	{
		func_130(uParam0, 0);
	}
	func_128(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_126(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_126(var uParam0, int iParam1)//Position - 0x8AA9
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_12(14) && !func_135(iParam1))
	{
		return 0;
	}
	if (func_132(uParam0, iParam1))
	{
		return 0;
	}
	if (func_131(uParam0) < 0f)
	{
		func_130(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_127(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_127(var uParam0, int iParam1)//Position - 0x8B24
{
	return (*uParam0)[iParam1] == 78;
}

void func_128(var uParam0)//Position - 0x8B35
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_129(uParam0, iVar0);
		iVar0++;
	}
	func_130(uParam0, (Global_4269607 - 0.5f));
}

void func_129(var uParam0, int iParam1)//Position - 0x8B69
{
	(*uParam0)[iParam1] = 78;
}

void func_130(var uParam0, float fParam1)//Position - 0x8B79
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_131(var uParam0)//Position - 0x8B96
{
	return uParam0->f_80;
}

bool func_132(var uParam0, int iParam1)//Position - 0x8BA2
{
	return func_133(uParam0, iParam1) != -1;
}

int func_133(var uParam0, int iParam1)//Position - 0x8BB4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_134(var uParam0)//Position - 0x8BE1
{
	return uParam0->f_79 == 1;
}

int func_135(int iParam0)//Position - 0x8BEF
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

void func_136(int iParam0, int iParam1)//Position - 0x8C3F
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_137(int iParam0, int iParam1)//Position - 0x8C62
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

void func_138()//Position - 0x8CBF
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53668[0] == iVar0)
		{
			Global_53668[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53668[1] == iVar0)
		{
			Global_53668[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53668[2] == iVar0)
		{
			Global_53668[2] = iVar0;
		}
	}
}

void func_139(bool bParam0)//Position - 0x8D34
{
	if (!PED::IS_PED_INJURED(iLocal_86))
	{
		if (iLocal_621 > 1)
		{
			if (!PED::IS_PED_FACING_PED(iLocal_86, PLAYER::PLAYER_PED_ID(), 60f))
			{
				iLocal_621 = 0;
				iLocal_622 = 0;
			}
		}
		switch (iLocal_621)
		{
			case 0:
				BRAIN::CLEAR_PED_TASKS(iLocal_86);
				BRAIN::TASK_LOOK_AT_ENTITY(iLocal_86, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
				BRAIN::OPEN_SEQUENCE_TASK(&iLocal_620);
				BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				BRAIN::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
				BRAIN::CLOSE_SEQUENCE_TASK(iLocal_620);
				BRAIN::TASK_PERFORM_SEQUENCE(iLocal_86, iLocal_620);
				BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_620);
				iLocal_621++;
				break;
			
			case 1:
				if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_86, 242628503) != 1)
				{
					iLocal_621++;
				}
				break;
			
			case 2:
				if (bParam0)
				{
					switch (iLocal_622)
					{
						case 0:
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_86, "random@paparazzi@wait", "wait_a", 3))
							{
								BRAIN::TASK_PLAY_ANIM(iLocal_86, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_86, "random@paparazzi@wait", "wait_a") > 0.95f)
							{
								BRAIN::TASK_PLAY_ANIM(iLocal_86, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_622++;
							}
							break;
						
						case 1:
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_86, "random@paparazzi@wait", "wait_b", 3))
							{
								BRAIN::TASK_PLAY_ANIM(iLocal_86, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_86, "random@paparazzi@wait", "wait_b") > 0.95f)
							{
								BRAIN::TASK_PLAY_ANIM(iLocal_86, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_622++;
							}
							break;
						
						case 2:
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_86, "random@paparazzi@wait", "wait_c", 3))
							{
								BRAIN::TASK_PLAY_ANIM(iLocal_86, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_86, "random@paparazzi@wait", "wait_c") > 0.95f)
							{
								BRAIN::TASK_PLAY_ANIM(iLocal_86, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_622 = 0;
							}
							break;
						}
				}
				break;
			}
	}
}

void func_140()//Position - 0x8F52
{
	if (HUD::DOES_BLIP_EXIST(iLocal_364))
	{
		HUD::REMOVE_BLIP(&iLocal_364);
	}
}

void func_141()//Position - 0x8F6B
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
	{
		switch (iLocal_369)
		{
			case 0:
				if (!PED::IS_PED_INJURED(iLocal_86) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
				{
					func_140();
					func_145(1, 1, 0, 0, 0, 0);
					if (HUD::DOES_BLIP_EXIST(iLocal_362))
					{
						HUD::REMOVE_BLIP(&iLocal_362);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_360))
					{
						HUD::REMOVE_BLIP(&iLocal_360);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_361))
					{
						HUD::REMOVE_BLIP(&iLocal_361);
					}
					if (PED::IS_PED_IN_GROUP(iLocal_86))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_86);
					}
					func_143();
					if (!PED::IS_PED_INJURED(iLocal_86))
					{
						BRAIN::TASK_LOOK_AT_COORD(iLocal_86, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_91, -10f, 5f, 0f), -1, 16, 4);
					}
					BRAIN::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_91, 10f, 5f, 0f), 15000, 16, 4);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 1280);
					if ((bLocal_368 || Global_3) || bLocal_70)
					{
						while (!func_142(&Local_395, cLocal_372, "REPAP_THK", "REPAP_THK_1", 4, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
					}
					else
					{
						while (!func_5(&Local_395, cLocal_372, "REPAP_THK", 4, 0, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
					}
					func_107(func_19(), 1, 750, 0, 1);
					if (!PED::IS_PED_INJURED(iLocal_86))
					{
						BRAIN::TASK_LOOK_AT_COORD(iLocal_86, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_91, -10f, 5f, 0f), -1, 16, 4);
						PED::_0x2208438012482A1A(iLocal_86, 0, 0);
					}
					BRAIN::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_91, 10f, 5f, 0f), 15000, 16, 4);
					iLocal_369++;
				}
				break;
			
			case 1:
				if (!func_73() && !PED::IS_PED_INJURED(iLocal_86))
				{
					BRAIN::OPEN_SEQUENCE_TASK(&iVar0);
					BRAIN::TASK_LEAVE_VEHICLE(0, iLocal_91, 0);
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_56, 1f, 30000, 0.25f, 512, fLocal_59);
					BRAIN::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
					BRAIN::CLOSE_SEQUENCE_TASK(iVar0);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_86, iVar0);
					BRAIN::CLEAR_SEQUENCE_TASK(&iVar0);
					iLocal_369++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(iLocal_86) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_86, iLocal_91, 0))
					{
						SYSTEM::SETTIMERA(0);
						if (bLocal_368)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							func_145(0, 1, 0, 0, 0, 0);
							iLocal_369 = 5;
						}
						else
						{
							iLocal_369++;
						}
					}
				}
				break;
			
			case 3:
				if ((!PED::IS_PED_INJURED(iLocal_86) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0)) && SYSTEM::TIMERA() > 1000)
				{
					BRAIN::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_91, 0);
					BRAIN::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91, 10000, 0, 3);
					iLocal_369++;
				}
				break;
			
			case 4:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_91, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					func_145(0, 1, 0, 0, 0, 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_91, 2);
					SYSTEM::SETTIMERA(0);
					iLocal_369++;
				}
				break;
			
			case 5:
				if (SYSTEM::TIMERA() > 1000)
				{
					if (func_106())
					{
						if (!bLocal_368)
						{
							if (!func_94(19))
							{
								func_90("AM_H_CALLTX", 1, 0, -1, 10000, 7, 0, 0, 0);
								func_89(19);
							}
						}
						func_75();
					}
				}
				break;
			}
	}
}

bool func_142(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x929C
{
	func_16(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15873 = 0;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 1;
	Global_16859 = 0;
	Global_16863 = 0;
	StringCopy(&Global_16870, sParam3, 24);
	Global_2621441 = 0;
	return func_6(sParam2, iParam4, 0);
}

void func_143()//Position - 0x92F0
{
	Global_14732 = 0;
	func_144();
}

void func_144()//Position - 0x9300
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

void func_145(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x9324
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_152(1);
		HUD::_0xA8FDB297A8D25FBA();
		HUD::_0xFDB423997FA30340();
		if (Global_14553.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_9())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_151(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_152(0);
		HUD::_0xE1CD1E48E025E661();
		Global_56500 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_151(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_149(PLAYER::PLAYER_ID())) && !func_147(PLAYER::PLAYER_ID(), 0)) && !func_146()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_149(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_71588 = 0;
	}
}

bool func_146()//Position - 0x945D
{
	return MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_39.f_18, 14);
}

bool func_147(int iParam0, int iParam1)//Position - 0x947A
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_148(-1, 0) == 8;
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

int func_148(int iParam0, bool bParam1)//Position - 0x94C5
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_86();
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

int func_149(int iParam0)//Position - 0x9506
{
	if (func_147(iParam0, 0))
	{
		return 1;
	}
	if (func_150())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_150()//Position - 0x9548
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_151(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x9559
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_152(int iParam0)//Position - 0x958C
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2423, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2423, 13);
	}
}

void func_153()//Position - 0x95AF
{
	if (Global_3 || bLocal_70)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.7f);
	}
	if (bLocal_368 && !PED::IS_PED_INJURED(iLocal_86))
	{
		if (!func_174(iLocal_86))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_360))
			{
				iLocal_360 = func_183(iLocal_86, 0, 145);
			}
		}
		else
		{
			if (func_66())
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_362))
				{
					iLocal_362 = func_50(vLocal_53, 1);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_363))
				{
					HUD::REMOVE_BLIP(&iLocal_363);
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_363))
				{
					iLocal_363 = func_50(vLocal_56, 1);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_362))
				{
					HUD::REMOVE_BLIP(&iLocal_362);
				}
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_360))
			{
				HUD::REMOVE_BLIP(&iLocal_360);
			}
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_91, 0))
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && func_173(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				iLocal_91 = 0;
				iLocal_91 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_91, true, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_91, 1);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_91, false, 0);
			}
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_363) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_86, 0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_56, 15f, 15f, 15f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 231.7982f, 672.7683f, 189.2f, 1f, 1f, 2.5f, true, true, 0))
			{
				func_181(4);
			}
		}
		else if (iLocal_369 != 100)
		{
			if (func_66() && func_172(1, 1, 1))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_91, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, true, true, 0))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_369 = 100;
				}
			}
			else if (!PED::IS_PED_IN_VEHICLE(iLocal_86, iLocal_91, 0))
			{
				if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_86, -1794415470) != 1)
				{
					BRAIN::TASK_ENTER_VEHICLE(iLocal_86, iLocal_91, -1, func_171(iLocal_91), 2f, 8388608, 0);
				}
			}
		}
	}
	else
	{
		if (iLocal_369 != 100)
		{
			if (func_66() && func_172(1, 1, 1))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_91, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, true, true, 0))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_369 = 100;
				}
			}
		}
		func_168(1);
	}
	switch (iLocal_369)
	{
		case 0:
			if (func_66())
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3))
				{
					BRAIN::CLEAR_PED_TASKS(iLocal_86);
				}
				if (func_5(&Local_395, cLocal_372, "REPAP_HM", 4, 0, 0, 0))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
					iLocal_369++;
				}
				if (!func_167())
				{
					func_162();
				}
			}
			break;
		
		case 1:
			if (!func_74())
			{
				if (func_66())
				{
					if (!func_73())
					{
						if (func_19() == 0)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_LIFTM", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
						}
						else if (func_19() == 1)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_LIFTF", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
						}
						else if (func_5(&Local_395, cLocal_372, "REPAP_LIFTT", 4, 0, 0, 0))
						{
							iLocal_369++;
						}
					}
				}
			}
			break;
		
		case 2:
			if (!func_74())
			{
				if (func_66())
				{
					if (func_5(&Local_395, cLocal_372, "REPAP_PLEAD", 4, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						if (Global_3 || bLocal_70)
						{
							iLocal_369 = 99;
						}
						else
						{
							iLocal_369++;
						}
					}
				}
			}
			break;
		
		case 3:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_158("REPAP_HOME1", (func_161() && !func_74())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 4:
			if (func_19() == 0)
			{
				if (func_158("REPAP_HOME1M", (func_161() && !func_74())))
				{
					iLocal_369++;
				}
			}
			else if (func_19() == 1)
			{
				if (func_158("REPAP_HOME1F", (func_161() && !func_74())))
				{
					iLocal_369++;
				}
			}
			else if (func_158("REPAP_HOME1T", (func_161() && !func_74())))
			{
				iLocal_369++;
			}
			break;
		
		case 5:
			if (func_158("REPAP_HOME1L", (func_161() && !func_74())))
			{
				SYSTEM::SETTIMERA(0);
				iLocal_369++;
			}
			break;
		
		case 6:
			if (!func_74())
			{
				if (SYSTEM::TIMERA() > 7000)
				{
					if (func_161())
					{
						if (func_5(&Local_395, cLocal_372, "REPAP_HOME2", 4, 0, 0, 0))
						{
							iLocal_369++;
						}
					}
				}
			}
			break;
		
		case 7:
			if (!func_74())
			{
				if (func_161() && !func_73())
				{
					if (func_157("REPAP_HOME2"))
					{
						iLocal_369++;
					}
				}
			}
			break;
		
		case 8:
			if (func_158("REPAP_HOME2L", (func_161() && !func_74())))
			{
				iLocal_369++;
			}
			break;
		
		case 9:
			if (!func_74())
			{
				if (func_161() && !func_73())
				{
					if (func_157("REPAP_RESP2"))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_369++;
					}
				}
			}
			break;
		
		case 10:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_158("REPAP_HOME3", (func_161() && !func_74())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 11:
			if (!func_74())
			{
				if (func_161() && !func_73())
				{
					if (func_157("REPAP_HOME3"))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_369++;
					}
				}
			}
			break;
		
		case 12:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_158("REPAP_HOME4", (func_161() && !func_74())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 13:
			if (!func_74())
			{
				if (func_161() && !func_73())
				{
					if (func_157("REPAP_HOME4"))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_369++;
					}
				}
			}
			break;
		
		case 14:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_158("REPAP_NOBAN", (func_161() && !func_74())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 15:
			if (!func_74())
			{
				if (func_161() && !func_73())
				{
					if (func_157("REPAP_NOBAN"))
					{
						iLocal_369++;
					}
				}
			}
			break;
		
		case 16:
			if (!func_74())
			{
				if (func_161() && !func_73())
				{
					if (func_5(&Local_395, cLocal_372, "REPAP_NOBANL", 4, 0, 0, 0))
					{
						iLocal_369++;
					}
				}
			}
			break;
		
		case 17:
			func_74();
			break;
		
		case 100:
			if (func_155(iLocal_91, 5f, 5, 1056964608, 0, 1, 0))
			{
				func_182("");
				func_181(3);
			}
			break;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		func_71();
	}
	if (func_19() == 2)
	{
		if ((func_154() && !func_167()) && iLocal_47 != 8)
		{
			if (!PED::IS_PED_INJURED(iLocal_86))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_86, -1034.6f, 4918.6f, 205.9f, 5f, 5f, 5f, false, true, 0))
				{
					if (!PED::IS_PED_GROUP_MEMBER(iLocal_86, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
					{
						PED::SET_PED_AS_GROUP_MEMBER(iLocal_86, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
					}
					func_102();
					iLocal_47 = 8;
				}
			}
		}
	}
}

var func_154()//Position - 0x9DBB
{
	return Global_26000;
}

int func_155(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x9DC6
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 116, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 117, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 118, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 119, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 131, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 132, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 123, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 126, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 129, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 130, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 133, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 134, 1);
	CAM::_0x17FCA7199A530203();
	func_156(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_29) > 500)
	{
		VEHICLE::_SET_VEHICLE_HALT(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_156(int iParam0)//Position - 0x9F55
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (VEHICLE::_HAS_VEHICLE_ROCKET_BOOST(iParam0))
		{
			if (VEHICLE::_IS_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0))
			{
				VEHICLE::_SET_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0, 0);
			}
		}
	}
}

int func_157(char* sParam0)//Position - 0x9F81
{
	vector3 vVar0;
	
	StringConCat(&vVar0, sParam0, 24);
	if (func_19() == 0)
	{
		StringConCat(&vVar0, "M", 24);
	}
	else if (func_19() == 1)
	{
		StringConCat(&vVar0, "F", 24);
	}
	else
	{
		StringConCat(&vVar0, "T", 24);
	}
	if (func_5(&Local_395, cLocal_372, &vVar0, 4, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_158(char* sParam0, bool bParam1)//Position - 0x9FD5
{
	if (bParam1)
	{
		if (!iLocal_72)
		{
			if (func_5(&Local_395, cLocal_372, sParam0, 4, 0, 0, 0))
			{
				iLocal_72 = 1;
				iLocal_73 = 0;
			}
		}
		else if (iLocal_73)
		{
			if (func_160(&Local_395, cLocal_372, sParam0, &Local_75, 4, 0, 0))
			{
				iLocal_73 = 0;
			}
		}
		if ((iLocal_72 && !iLocal_73) && bParam1)
		{
			if (iLocal_81 == -1)
			{
				if (!func_73())
				{
					iLocal_81 = MISC::GET_GAME_TIMER();
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_81) > 500)
			{
				iLocal_81 = -1;
				iLocal_72 = 0;
				iLocal_73 = 0;
				return 1;
			}
		}
	}
	else if (iLocal_72 && !iLocal_73)
	{
		Local_75 = { func_159() };
		func_143();
		iLocal_73 = 1;
	}
	return 0;
}

struct<6> func_159()//Position - 0xA085
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15866 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_16876);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_14734[iVar7 /*6*/])))
			{
				return Global_14734[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_14734[iVar8 /*6*/])))
					{
						return Global_14734[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14734[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_160(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA131
{
	func_16(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15873 = 0;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 1;
	StringCopy(&Global_16870, sParam3, 24);
	Global_2621441 = 0;
	return func_6(sParam2, iParam4, 0);
}

int func_161()//Position - 0xA185
{
	if (bLocal_368)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
		{
			if (func_66())
			{
				return 1;
			}
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_86, 0))
		{
			if (SYSTEM::VDIST2(vLocal_60, vLocal_63) < 400f)
			{
				return 1;
			}
		}
	}
	else
	{
		return func_66();
	}
	return 0;
}

void func_162()//Position - 0xA1E6
{
	if (func_19() == 2)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_364))
		{
			func_165();
			iLocal_364 = func_164(-1034.6f, 4918.6f, 205.9f, 0);
			HUD::SET_BLIP_SPRITE(iLocal_364, 269);
			func_163();
		}
	}
}

void func_163()//Position - 0xA22A
{
	if (!func_167())
	{
		if (func_19() == 2)
		{
			Global_26000 = 1;
		}
	}
}

int func_164(vector3 vParam0, bool bParam3)//Position - 0xA246
{
	return func_50(vParam0, bParam3);
}

void func_165()//Position - 0xA258
{
	if (func_19() == 2)
	{
		if (!Global_26002)
		{
			func_166("CULT_BLIP_HELP", -1);
			Global_26002 = 1;
		}
	}
}

void func_166(char* sParam0, int iParam1)//Position - 0xA27C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

int func_167()//Position - 0xA293
{
	if (Global_106565.f_24989.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_168(bool bParam0)//Position - 0xA2AF
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0) && !PED::IS_PED_INJURED(iLocal_86))
	{
		if (func_66())
		{
			if (bParam0)
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_362))
				{
					iLocal_362 = func_50(vLocal_53, 1);
				}
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_360))
			{
				HUD::REMOVE_BLIP(&iLocal_360);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_361))
			{
				HUD::REMOVE_BLIP(&iLocal_361);
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_362))
			{
				HUD::REMOVE_BLIP(&iLocal_362);
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_91, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_361))
				{
					iLocal_361 = func_169(iLocal_91, 0, 0);
				}
			}
			if (!PED::IS_PED_IN_VEHICLE(iLocal_86, iLocal_91, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_360))
				{
					iLocal_360 = func_183(iLocal_86, 0, 145);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_360))
			{
				HUD::REMOVE_BLIP(&iLocal_360);
			}
		}
	}
}

int func_169(int iParam0, bool bParam1, bool bParam2)//Position - 0xA383
{
	return func_170(iParam0, !bParam1, bParam2);
}

int func_170(int iParam0, bool bParam1, bool bParam2)//Position - 0xA396
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_51(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_51(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_51(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_171(int iParam0)//Position - 0xA43A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar1 = 0;
		while (iVar1 <= (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) - 1))
		{
			if (iVar0 == -1)
			{
				iVar2 = iVar1;
				if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iVar2, 0))
				{
					iVar0 = iVar2;
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_172(bool bParam0, bool bParam1, bool bParam2)//Position - 0xA484
{
	int iVar0;
	
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_173(int iParam0)//Position - 0xA569
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, 0))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0, 0))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1, 0))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_174(int iParam0)//Position - 0xA5B9
{
	if (PED::IS_PED_GROUP_MEMBER(iParam0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 25f, 25f, 25f, 0, 1, 0))
		{
			PED::REMOVE_PED_FROM_GROUP(iParam0);
		}
		return 1;
	}
	else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, Global_19, 0, 1, 0))
	{
		PED::SET_PED_AS_GROUP_MEMBER(iParam0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
	}
	return 0;
}

void func_175()//Position - 0xA623
{
	if (!PED::IS_PED_INJURED(iLocal_86) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(iLocal_86, iLocal_91, 1))
		{
			if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_86, -1794415470) != 1)
			{
				BRAIN::TASK_ENTER_VEHICLE(iLocal_86, iLocal_91, -1, func_171(iLocal_91), 2f, 8388608, 0);
			}
		}
		if ((ENTITY::DOES_ENTITY_EXIST(func_65()) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_86, true), ENTITY::GET_ENTITY_COORDS(func_65(), true)) < 100f) && (ENTITY::GET_ENTITY_SPEED(iLocal_91) < 5f || !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_91))))
		{
			if (bLocal_368)
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_86, iLocal_91))
				{
					BRAIN::TASK_PLAY_ANIM(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
				}
			}
			else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_86, iLocal_91))
			{
				BRAIN::TASK_PLAY_ANIM(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
			}
		}
		else if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3)) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_86, iLocal_91))
		{
			BRAIN::CLEAR_PED_TASKS(iLocal_86);
		}
		switch (iLocal_369)
		{
			case 0:
				if (SYSTEM::TIMERA() > 2000)
				{
					if (ENTITY::DOES_ENTITY_EXIST(func_65()) && !PED::IS_PED_INJURED(func_65()))
					{
						func_18(&Local_395, 4);
						func_17(&Local_395, 4, func_65(), "PAPARAZZO", 0, 1);
					}
					iLocal_49 = 2;
					func_102();
					if (func_5(&Local_395, cLocal_372, "REPAP_GO", 4, 0, 0, 0))
					{
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_86, true);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_69, 1862763509);
						iLocal_358 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), vLocal_87, true, true, false);
						ENTITY::SET_ENTITY_COLLISION(iLocal_358, false, 0);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_358, false, 0);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_358, true);
						iLocal_369++;
					}
				}
				break;
			
			case 1:
				func_177();
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_86, 243.5571f, 77.51265f, 90.08002f, 268.2083f, 144.2189f, 109.853f, 23.25f, 0, true, 0))
				{
					iLocal_369++;
					iLocal_370 = MISC::GET_GAME_TIMER();
					iLocal_49 = 3;
				}
				break;
			
			case 2:
				if (!bLocal_668)
				{
					if (((((iLocal_670 != 1 && iLocal_670 != 3) && iLocal_670 != 6) && iLocal_670 != 9) && iLocal_670 != 11) && iLocal_670 != 13)
					{
						bLocal_669 = false;
						if (ENTITY::DOES_ENTITY_EXIST(func_65()) && ENTITY::IS_ENTITY_AT_ENTITY(func_65(), iLocal_91, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_668 = true;
						}
					}
				}
				else
				{
					if (!func_73())
					{
						bLocal_669 = true;
					}
					if (ENTITY::DOES_ENTITY_EXIST(func_65()))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(func_65(), iLocal_91, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_668 = false;
						}
					}
				}
				if (bLocal_669)
				{
					if (!func_74())
					{
						if (!func_176())
						{
							func_177();
						}
					}
				}
				else
				{
					switch (iLocal_670)
					{
						case 0:
							if (((!bLocal_668 && func_161()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_CHT", 4, 0, 0, 0))
								{
									iLocal_670++;
								}
							}
							break;
						
						case 1:
							if (((!bLocal_668 && func_161()) && !func_74()) && !func_73())
							{
								if (func_157("REPAP_RES1"))
								{
									iLocal_671 = MISC::GET_GAME_TIMER();
									iLocal_670++;
								}
							}
							break;
						
						case 2:
							if ((MISC::GET_GAME_TIMER() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_161()) && !func_74()) && !func_73())
								{
									if (func_157("REPAP_CHT2"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 3:
							if (((!bLocal_668 && func_161()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP2L", 4, 0, 0, 0))
								{
									iLocal_671 = MISC::GET_GAME_TIMER();
									iLocal_670++;
								}
							}
							break;
						
						case 4:
							if ((MISC::GET_GAME_TIMER() - iLocal_671) > 6000)
							{
								if (func_19() == 0)
								{
									if (func_158("REPAP_CHT3M", ((func_161() && !func_74()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_158("REPAP_CHT3F", ((func_161() && !func_74()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_158("REPAP_CHT3T", ((func_161() && !func_74()) && !bLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 4)
								{
									iLocal_671 = MISC::GET_GAME_TIMER();
								}
							}
							break;
						
						case 5:
							if ((MISC::GET_GAME_TIMER() - iLocal_671) > 8000)
							{
								if (func_19() == 0)
								{
									if (func_158("REPAP_CHT4M", ((func_161() && !func_74()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_158("REPAP_CHT4F", ((func_161() && !func_74()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_158("REPAP_CHT4T", ((func_161() && !func_74()) && !bLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 5)
								{
									iLocal_671 = MISC::GET_GAME_TIMER();
								}
							}
							break;
						
						case 6:
							if ((MISC::GET_GAME_TIMER() - iLocal_671) > 8000)
							{
								if (func_19() == 0)
								{
									if (func_158("REPAP_CHT5M", ((func_161() && !func_74()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_158("REPAP_CHT5F", ((func_161() && !func_74()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_158("REPAP_CHT5T", ((func_161() && !func_74()) && !bLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 6)
								{
									iLocal_671 = MISC::GET_GAME_TIMER();
								}
							}
							break;
						
						case 7:
							if ((MISC::GET_GAME_TIMER() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_161()) && !func_74()) && !func_73())
								{
									if (func_157("REPAP_CHT6"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 8:
							if (((!bLocal_668 && func_161()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP6L", 4, 0, 0, 0))
								{
									iLocal_671 = MISC::GET_GAME_TIMER();
									iLocal_670++;
								}
							}
							break;
						
						case 9:
							if ((MISC::GET_GAME_TIMER() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_161()) && !func_74()) && !func_73())
								{
									if (func_157("REPAP_CHT7"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 10:
							if (((!bLocal_668 && func_161()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP7L", 4, 0, 0, 0))
								{
									iLocal_671 = MISC::GET_GAME_TIMER();
									iLocal_670++;
								}
							}
							break;
						
						case 11:
							if ((MISC::GET_GAME_TIMER() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_161()) && !func_74()) && !func_73())
								{
									if (func_157("REPAP_CHT8"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 12:
							if (((!bLocal_668 && func_161()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP8L", 4, 0, 0, 0))
								{
									iLocal_670++;
								}
							}
							break;
						}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(func_65()))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_369++;
					func_143();
					if (!Global_3 && !bLocal_70)
					{
						iLocal_49 = 6;
					}
				}
				if (Global_3 || bLocal_70)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 244.2175f, 441.0128f, 126.2767f, 33.5f, 40f, 14.75f, false, true, 0) && func_66())
					{
						iLocal_49 = 4;
						iLocal_85 = MISC::GET_GAME_TIMER();
					}
				}
				break;
			
			case 3:
				if (SYSTEM::TIMERA() > 3000 && func_66())
				{
					func_182("MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME");
					if (func_5(&Local_395, cLocal_372, "REPAP_LOS", 4, 0, 0, 0))
					{
						func_181(2);
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
		}
		func_168(0);
	}
}

int func_176()//Position - 0xAF4D
{
	int iVar0;
	
	iVar0 = func_24();
	if ((MISC::GET_GAME_TIMER() - iLocal_666) > 5000)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_91) && PED::IS_PED_IN_VEHICLE(iLocal_86, iLocal_91, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_91, 1))
			{
				if (iVar0 != -1 && (MISC::GET_GAME_TIMER() - Local_204[iVar0 /*18*/].f_12) < 3000)
				{
					if (func_5(&Local_395, cLocal_372, "REPAP_WHINE", 4, 0, 0, 0))
					{
						iLocal_666 = MISC::GET_GAME_TIMER();
						return 1;
					}
				}
			}
			else if (func_5(&Local_395, cLocal_372, "REPAP_EXIT", 4, 0, 0, 0))
			{
				iLocal_666 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

void func_177()//Position - 0xAFEF
{
	int iVar0;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_564) > iLocal_565)
	{
		if ((!PED::IS_PED_INJURED(iLocal_86) && ENTITY::DOES_ENTITY_EXIST(func_65())) && !PED::IS_PED_INJURED(func_65()))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_63, ENTITY::GET_ENTITY_COORDS(func_65(), true), true) < 8f)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
				func_18(&Local_395, 4);
				func_18(&Local_395, 5);
				func_18(&Local_395, 6);
				func_18(&Local_395, 7);
				switch (iVar0)
				{
					case 0:
						func_17(&Local_395, 4, func_65(), "PAPARAZZO", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_395[4 /*10*/]) && !PED::IS_PED_INJURED(Local_395[4 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_PP", 4, 0, 0, 0))
							{
								iLocal_564 = MISC::GET_GAME_TIMER();
								iLocal_565 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
							}
						}
						break;
					
					case 1:
						func_17(&Local_395, 4, func_65(), "PAPARAZZO", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_395[4 /*10*/]) && !PED::IS_PED_INJURED(Local_395[4 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL1", 4, 0, 0, 0))
							{
								iLocal_564 = MISC::GET_GAME_TIMER();
								iLocal_565 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
							}
						}
						break;
					
					case 2:
						func_17(&Local_395, 5, func_65(), "PAP2", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_395[5 /*10*/]) && !PED::IS_PED_INJURED(Local_395[5 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL2", 4, 0, 0, 0))
							{
								iLocal_564 = MISC::GET_GAME_TIMER();
								iLocal_565 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
							}
						}
						break;
					
					case 3:
						func_17(&Local_395, 6, func_65(), "PAP3", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_395[6 /*10*/]) && !PED::IS_PED_INJURED(Local_395[6 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL3", 4, 0, 0, 0))
							{
								iLocal_564 = MISC::GET_GAME_TIMER();
								iLocal_565 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
							}
						}
						break;
					
					case 4:
						func_17(&Local_395, 7, func_65(), "PAP4", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_395[7 /*10*/]) && !PED::IS_PED_INJURED(Local_395[7 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL4", 4, 0, 0, 0))
							{
								iLocal_564 = MISC::GET_GAME_TIMER();
								iLocal_565 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
							}
						}
						break;
					}
				}
			}
	}
}

void func_178()//Position - 0xB256
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3[24];
	char* sVar9;
	vector3 vVar10[24];
	int iVar16;
	
	if (!PED::IS_PED_INJURED(iLocal_86))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_360))
		{
			HUD::_0x75A16C3DA34F1245(iLocal_360, iLocal_664);
		}
		switch (iLocal_369)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("random@paparazzi@peek");
				STREAMING::REQUEST_ANIM_DICT("random@paparazzi@trans");
				STREAMING::REQUEST_ANIM_DICT("random@paparazzi@wait");
				if ((STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@peek") && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@trans")) && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@wait"))
				{
					iLocal_625 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_653, vLocal_656, 2);
					BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_86, iLocal_625, "random@paparazzi@peek", "left_peek_a", 1000f, -8f, 1, 0, 1148846080, 0);
					BRAIN::TASK_LOOK_AT_ENTITY(iLocal_86, PLAYER::PLAYER_PED_ID(), -1, 4, 4);
					sLocal_626[0] = "peek_a";
					sLocal_626[1] = "peek_b";
					sLocal_626[2] = "peek_c";
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
					iLocal_623 = 0;
					iLocal_659 = 0;
					bLocal_664 = false;
					iLocal_74 = 1;
					iLocal_660 = 0;
					iLocal_71 = 0;
					fLocal_661 = 0f;
					iLocal_369++;
				}
				break;
			
			case 1:
				if (MISC::IS_BIT_SET(iLocal_660, 0))
				{
					if (!MISC::IS_BIT_SET(iLocal_660, 1))
					{
						MISC::SET_BIT(&iLocal_660, 1);
					}
					else
					{
						iLocal_660 = 0;
					}
				}
				iVar2 = 0;
				bVar0 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vLocal_639, vLocal_642, fLocal_645, 0, true, 0);
				bVar1 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vLocal_632, vLocal_635, fLocal_638, 0, true, 0);
				if (MISC::ARE_STRINGS_EQUAL(sLocal_631, "right_"))
				{
					if (bVar1)
					{
						sLocal_631 = "left_";
						iVar2 = 1;
					}
				}
				else if (bVar0)
				{
					sLocal_631 = "right_";
					iVar2 = 1;
				}
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_625) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_625) > 0.9f) || iVar2)
				{
					if (iLocal_660 == 0)
					{
						BRAIN::CLEAR_PED_TASKS(iLocal_86);
						iLocal_630++;
						if (iLocal_630 >= 3)
						{
							iLocal_630 = 0;
						}
						StringCopy(&cVar3, sLocal_631, 24);
						StringConCat(&cVar3, sLocal_626[iLocal_630], 24);
						iLocal_625 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_653, vLocal_656, 2);
						BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_86, iLocal_625, "random@paparazzi@peek", &cVar3, 4f, -4f, 1, 0, 1148846080, 0);
						MISC::SET_BIT(&iLocal_660, 0);
					}
				}
				if (bVar0 || bVar1)
				{
					if (fLocal_661 <= 20f)
					{
						fLocal_661 = (fLocal_661 + MISC::GET_FRAME_TIME());
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_624) > 5000 && iLocal_660 == 0)
					{
						if (SYSTEM::VDIST2(vLocal_60, vLocal_63) < (22.2f * 22.2f))
						{
							if (fLocal_661 < 10f)
							{
								if (iLocal_662)
								{
									sVar9 = "REPAP_SHT1";
								}
								else
								{
									sVar9 = "REPAP_SHT2";
								}
							}
							else
							{
								sVar9 = "REPAP_PRT";
							}
							if (func_19() == 1)
							{
								func_17(&Local_395, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
							}
							else if (func_19() == 0)
							{
								func_17(&Local_395, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
							}
							else
							{
								func_17(&Local_395, 1, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
							}
							if (func_5(&Local_395, cLocal_372, sVar9, 4, 0, 0, 0))
							{
								iLocal_662 = 1;
								if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_86, 7f, 7f, 7f, 0, 1, 0))
								{
									BRAIN::CLEAR_PED_TASKS(iLocal_86);
									StringCopy(&cVar10, sLocal_631, 24);
									StringConCat(&cVar10, "come_here", 24);
									iLocal_625 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_653, vLocal_656, 2);
									BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_86, iLocal_625, "random@paparazzi@peek", &cVar10, 4f, -4f, 1, 0, 1148846080, 0);
									MISC::SET_BIT(&iLocal_660, 0);
								}
								iLocal_624 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vLocal_646, vLocal_649, fLocal_652, 0, true, 0) && iLocal_660 == 0)
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_359))
					{
						HUD::REMOVE_BLIP(&iLocal_359);
						if (!HUD::DOES_BLIP_EXIST(iLocal_360))
						{
							iLocal_360 = func_183(iLocal_86, 0, 145);
						}
					}
					BRAIN::CLEAR_PED_TASKS(iLocal_86);
					iLocal_625 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_653, vLocal_656, 2);
					if (bVar1)
					{
						BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_86, iLocal_625, "random@paparazzi@trans", "trans_left_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					else
					{
						BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_86, iLocal_625, "random@paparazzi@trans", "trans_right_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					MISC::SET_BIT(&iLocal_660, 0);
					iLocal_369++;
				}
				break;
			
			case 2:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_625) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_625) > 0.9f)
				{
					if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_86, 242628503) != 1)
					{
						BRAIN::CLEAR_PED_TASKS(iLocal_86);
						BRAIN::TASK_PLAY_ANIM(iLocal_86, "random@paparazzi@wait", "wait_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
						iLocal_621 = 2;
						SYSTEM::SETTIMERA(0);
					}
					iLocal_369++;
				}
				break;
			
			case 3:
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (func_180())
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_91);
						iLocal_91 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_91, true, 1);
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_91, false, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_91, 1);
						bLocal_368 = true;
					}
				}
				if (!bLocal_368)
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_91, 1);
					if (func_142(&Local_395, cLocal_372, "REPAP_EXP", "REPAP_EXP_2", 4, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						bLocal_664 = true;
						iLocal_369 = 100;
					}
				}
				else if (func_142(&Local_395, cLocal_372, "REPAP_EXPB", "REPAP_EXPB_2", 4, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					bLocal_664 = true;
					iLocal_369++;
				}
				if (SYSTEM::TIMERA() > 2000)
				{
					func_179(vLocal_87, 1);
				}
				break;
			
			case 4:
				func_49();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_91, iLocal_86, Global_19 + Vector(2f, 12f, 12f), 0, 1, 0) && !bLocal_368)
					{
						if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_86, 242628503) != 1 && !iLocal_659)
						{
							BRAIN::OPEN_SEQUENCE_TASK(&iVar16);
							BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 259.2552f, 122.2986f, 100.441f, 1f, 20000, 1048576000, 0, 1193033728);
							BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							BRAIN::CLOSE_SEQUENCE_TASK(iVar16);
							BRAIN::TASK_PERFORM_SEQUENCE(iLocal_86, iVar16);
							PED::_0x2208438012482A1A(iLocal_86, 0, 0);
							BRAIN::CLEAR_SEQUENCE_TASK(&iVar16);
							iLocal_659 = 1;
						}
						else
						{
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_86, 1f);
							func_179(259.2552f, 122.2986f, 100.441f, 0);
						}
					}
					else
					{
						func_179(vLocal_87, 1);
					}
					if (!bLocal_368)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_91, 0))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_361))
							{
								HUD::REMOVE_BLIP(&iLocal_361);
							}
							if (!HUD::DOES_BLIP_EXIST(iLocal_360))
							{
								iLocal_360 = func_183(iLocal_86, 0, 145);
							}
						}
					}
					if ((ENTITY::IS_ENTITY_AT_ENTITY(iLocal_91, iLocal_86, Global_19, 0, 1, 0) && func_173(iLocal_91)) && (SYSTEM::TIMERA() > 6000 || !bLocal_368))
					{
						if (!iLocal_623)
						{
							func_102();
							if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
							{
								if (func_19() == 1)
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_ONF", 4, 0, 0, 0))
									{
										iLocal_623 = 1;
									}
								}
								else if (func_19() == 0)
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_ONM", 4, 0, 0, 0))
									{
										iLocal_623 = 1;
									}
								}
								else if (func_5(&Local_395, cLocal_372, "REPAP_ONT", 4, 0, 0, 0))
								{
									iLocal_623 = 1;
								}
							}
							else if (func_19() == 1)
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_INF", 4, 0, 0, 0))
								{
									iLocal_623 = 1;
								}
							}
							else if (func_19() == 0)
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_INM", 4, 0, 0, 0))
								{
									iLocal_623 = 1;
								}
							}
							else if (func_5(&Local_395, cLocal_372, "REPAP_INT", 4, 0, 0, 0))
							{
								iLocal_623 = 1;
							}
						}
						else
						{
							if (!bLocal_368)
							{
								iLocal_369 = -5;
							}
							else
							{
								iLocal_369++;
							}
							BRAIN::CLEAR_PED_TASKS(iLocal_86);
							BRAIN::TASK_ENTER_VEHICLE(iLocal_86, iLocal_91, -1, func_171(iLocal_91), 1f, 8388608, 0);
						}
					}
				}
				break;
			
			case -5:
				if (bLocal_368)
				{
					func_179(vLocal_87, 1);
				}
				else
				{
					func_179(259.2552f, 122.2986f, 100.441f, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
				{
					if (func_155(iLocal_91, 1093140480, 1, 1056964608, 0, 1, 0))
					{
						iLocal_369 = 5;
					}
				}
				break;
			
			case 5:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_86) && PED::IS_PED_IN_VEHICLE(iLocal_86, iLocal_91, 0))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_360))
						{
							HUD::REMOVE_BLIP(&iLocal_360);
						}
						BRAIN::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						func_181(1);
					}
					else
					{
						if (!Global_3 && !bLocal_70)
						{
							if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_91, 0) && !PED::IS_PED_IN_VEHICLE(iLocal_86, iLocal_91, 1)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_91, 225.1779f, 125.6632f, 113.6647f, 262.3032f, 111.8771f, 97.16339f, 37f, 0, true, 0))
							{
								if (bLocal_368)
								{
									PED::SET_PED_FLEE_ATTRIBUTES(iLocal_86, 2, true);
									sLocal_371 = "REPAP_GUP";
									func_181(6);
								}
								else
								{
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
									PED::SET_PED_FLEE_ATTRIBUTES(iLocal_86, 2, true);
									sLocal_371 = "REPAP_CP";
									func_181(6);
								}
							}
						}
						if (!PED::IS_PED_IN_VEHICLE(iLocal_86, iLocal_91, 0))
						{
							if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_86, -1794415470) != 1)
							{
								BRAIN::CLEAR_PED_TASKS(iLocal_86);
								BRAIN::TASK_ENTER_VEHICLE(iLocal_86, iLocal_91, -1, func_171(iLocal_91), 1f, 8388608, 0);
							}
							else if (SYSTEM::VDIST(vLocal_63, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_91, 1f, 0f, 0f)) < 1f)
							{
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_86, 1f);
							}
						}
					}
				}
				break;
			
			case 100:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
				{
					if (!func_73())
					{
						func_102();
						if (func_19() == 1)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_YSF", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
						}
						else if (func_19() == 0)
						{
							func_102();
							if (func_5(&Local_395, cLocal_372, "REPAP_YSM", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
							iLocal_74 = 0;
						}
						else if (func_5(&Local_395, cLocal_372, "REPAP_YST", 4, 0, 0, 0))
						{
							iLocal_369++;
						}
					}
				}
				if (iLocal_369 == 101)
				{
					fLocal_665 = 0f;
				}
				func_179(vLocal_87, 1);
				break;
			
			case 101:
				if (SYSTEM::VDIST2(vLocal_60, vLocal_63) < 49f && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 3f)
					{
						fLocal_665 = (fLocal_665 + MISC::GET_FRAME_TIME());
					}
					else
					{
						fLocal_665 = (fLocal_665 - (MISC::GET_FRAME_TIME() * 2f));
					}
					if (fLocal_665 > 10f)
					{
						if (func_5(&Local_395, cLocal_372, "REPAP_PRT", 4, 0, 0, 0))
						{
							fLocal_665 = 0f;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_91, 0) && func_180())
					{
						bLocal_368 = true;
						iLocal_74 = 1;
						iLocal_91 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_91, true, 1);
					}
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_91, 0))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_361))
						{
							HUD::REMOVE_BLIP(&iLocal_361);
						}
						if (!HUD::DOES_BLIP_EXIST(iLocal_360))
						{
							iLocal_360 = func_183(iLocal_86, 0, 145);
						}
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_360))
						{
							HUD::REMOVE_BLIP(&iLocal_360);
						}
						if (!HUD::DOES_BLIP_EXIST(iLocal_361))
						{
							iLocal_361 = func_169(iLocal_91, 0, 0);
						}
					}
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_91))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_361))
						{
							HUD::REMOVE_BLIP(&iLocal_361);
						}
						if (!HUD::DOES_BLIP_EXIST(iLocal_360))
						{
							iLocal_360 = func_183(iLocal_86, 0, 145);
						}
						func_182("MAG_2_ESCAPE_PAP_CHASE");
						iLocal_369 = 4;
					}
					if (!iLocal_74)
					{
						if (SYSTEM::VDIST2(vLocal_60, vLocal_66) < 9f && func_19() == 0)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_MIKE", 4, 0, 0, 0))
							{
								iLocal_74 = 1;
							}
						}
					}
				}
				func_179(vLocal_87, 1);
				break;
		}
		if (!Global_3 && !bLocal_70)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
			{
				if (SYSTEM::VDIST(vLocal_60, vLocal_87) > 75f)
				{
					func_181(6);
				}
				if (func_194())
				{
					func_181(5);
				}
			}
		}
		if (!bLocal_368)
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
			{
				if (!Global_3 && !bLocal_70)
				{
					func_181(5);
				}
			}
			else
			{
				if (!bLocal_368)
				{
					if (!Global_3 && !bLocal_70)
					{
						if (ENTITY::GET_ENTITY_HEALTH(iLocal_91) < iLocal_83)
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_91, PLAYER::PLAYER_PED_ID(), 1))
							{
								iLocal_84 = (iLocal_84 + (iLocal_83 - ENTITY::GET_ENTITY_HEALTH(iLocal_91)));
							}
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_91);
						}
						if (iLocal_84 > 250)
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_86, iLocal_91) && SYSTEM::VDIST(vLocal_63, vLocal_66) < 25f)
							{
								func_181(5);
							}
						}
					}
				}
				iLocal_83 = ENTITY::GET_ENTITY_HEALTH(iLocal_91);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_86))
		{
			if (PED::IS_PED_FLEEING(iLocal_86))
			{
				if (!Global_3 && !bLocal_70)
				{
					func_181(5);
				}
			}
		}
	}
}

void func_179(vector3 vParam0, bool bParam3)//Position - 0xBEE1
{
	if (SYSTEM::VDIST(vLocal_63, vParam0) > 2.5f)
	{
		if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_86, 713668775) != 1)
		{
			BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_86, vParam0, 1f, -1, 0.25f, 0, 1193033728);
		}
	}
	else if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_86, 713668775) != 1)
	{
		func_139(bParam3);
		BRAIN::TASK_LOOK_AT_ENTITY(iLocal_86, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
	}
}

bool func_180()//Position - 0xBF4A
{
	return (((((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))))) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) > 0) && func_173(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) && !Global_105612);
}

void func_181(int iParam0)//Position - 0xBFCB
{
	iLocal_47 = iParam0;
	iLocal_369 = 0;
}

void func_182(char* sParam0)//Position - 0xBFDB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_560)
	{
		if (!MISC::ARE_STRINGS_EQUAL(iLocal_560[iVar0], sParam0))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(iLocal_560[iVar0]))
			{
				AUDIO::STOP_AUDIO_SCENE(iLocal_560[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_560)
	{
		if (MISC::ARE_STRINGS_EQUAL(iLocal_560[iVar0], sParam0))
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(iLocal_560[iVar0]))
			{
				AUDIO::START_AUDIO_SCENE(iLocal_560[iVar0]);
			}
		}
		iVar0++;
	}
}

int func_183(int iParam0, bool bParam1, int iParam2)//Position - 0xC062
{
	int iVar0;
	
	iVar0 = func_170(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_106565.f_28044[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_106565.f_28044[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_184(int iParam0)//Position - 0xC0B4
{
	if (func_187())
	{
		Global_106555 = 1;
		Global_106552 = MISC::GET_GAME_TIMER();
		if (func_88(Global_106554))
		{
			func_185(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_88(Global_106554))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_185(int iParam0)//Position - 0xC107
{
	switch (iParam0)
	{
		case 0:
			if (Global_106565.f_24989.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_166(func_186(iParam0), -1);
					Global_106565.f_24989.f_2++;
					MISC::SET_BIT(&Global_106561, 0);
				}
			}
			break;
		
		case 1:
			if (!MISC::IS_BIT_SET(Global_106561, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_166(func_186(iParam0), -1);
					Global_106565.f_24989.f_3++;
					MISC::SET_BIT(&Global_106561, 1);
				}
			}
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(Global_106561, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_166(func_186(iParam0), -1);
					Global_106565.f_24989.f_4++;
					MISC::SET_BIT(&Global_106561, 2);
				}
			}
			break;
	}
}

char* func_186(int iParam0)//Position - 0xC1E8
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_187()//Position - 0xC22A
{
	switch (func_188(&Global_25824, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_188(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xC260
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_91190.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_192(0))
		{
			return 0;
		}
		Global_36389++;
		*uParam0 = Global_36389;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_17272.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_36425 = iParam2;
		Global_36387 = *uParam0;
		Global_36388 = iParam4;
		Global_36386 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_36386 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_36386)
			{
				if (Global_36392[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_36387 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_190(iParam2))
		{
			return 0;
		}
		if (Global_36386 == 8)
		{
			return 0;
		}
		Global_36389++;
		*uParam0 = Global_36389;
		Global_36392[Global_36386 /*4*/] = Global_36389;
		Global_36392[Global_36386 /*4*/].f_1 = iParam1;
		Global_36392[Global_36386 /*4*/].f_2 = iParam2;
		Global_36392[Global_36386 /*4*/].f_3 = 0;
		Global_36386++;
		if (iParam4 != 0)
		{
			func_189(uParam0, iParam4);
		}
	}
	return 2;
}

void func_189(var uParam0, int iParam1)//Position - 0xC397
{
	int iVar0;
	
	if (Global_36386 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_36386)
	{
		if (Global_36392[iVar0 /*4*/] == *uParam0)
		{
			Global_36392[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_190(int iParam0)//Position - 0xC3E6
{
	return func_191(iParam0, Global_36425);
}

int func_191(int iParam0, int iParam1)//Position - 0xC3F7
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_192(int iParam0)//Position - 0xC5D8
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_190(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_193()//Position - 0xC5FA
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_86))
	{
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_86, 2, false);
		BRAIN::TASK_SMART_FLEE_PED(iLocal_86, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (!PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
		{
			BRAIN::TASK_SMART_FLEE_PED(Local_204[iVar0 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_204[iVar0 /*18*/], -2065892691);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_204[iVar0 /*18*/], false);
		}
		iVar0++;
	}
}

int func_194()//Position - 0xC677
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Local_204)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar1 /*18*/]) && !PED::IS_PED_INJURED(Local_204[iVar1 /*18*/]))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_204[iVar1 /*18*/]))
			{
				if (((MISC::IS_BULLET_IN_AREA(Local_204[iVar1 /*18*/].f_6, 5f, 1) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_204[iVar1 /*18*/].f_6, 10f)) || PED::IS_PED_FLEEING(Local_204[iVar1 /*18*/])) || (iLocal_386[iVar1] > 10 && iLocal_47 == 0))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	if (iLocal_349 > 1)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 < Local_131)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_131[iVar1 /*18*/]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[iVar1 /*18*/], 0) && ENTITY::IS_ENTITY_VISIBLE(Local_131[iVar1 /*18*/]))
			{
				if (FIRE::IS_ENTITY_ON_FIRE(Local_131[iVar1 /*18*/]))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_195()//Position - 0xC771
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_206())
		{
			return 0;
		}
	}
	if (func_202())
	{
		return 1;
	}
	if (func_196(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_196(float fParam0, bool bParam1)//Position - 0xC7F7
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_21(func_19()))
		{
			iVar36 = func_93();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (MISC::IS_BIT_SET(Global_106565.f_18568[iVar32 /*6*/], 2) && !MISC::IS_BIT_SET(Global_106565.f_18568[iVar32 /*6*/], 3))
				{
					func_197(iVar32, &Var0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_197(int iParam0, var uParam1)//Position - 0xC8AE
{
	switch (iParam0)
	{
		case 0:
			func_198(uParam1, "Abigail1", func_200(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 1:
			func_198(uParam1, "Abigail2", func_200(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 2:
			func_198(uParam1, "Barry1", func_200(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 3:
			func_198(uParam1, "Barry2", func_200(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_199(iParam0), 1, 1);
			break;
		
		case 4:
			func_198(uParam1, "Barry3", func_200(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 5:
			func_198(uParam1, "Barry3A", func_200(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 6:
			func_198(uParam1, "Barry3C", func_200(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 7:
			func_198(uParam1, "Barry4", func_200(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_199(iParam0), 0, 0);
			break;
		
		case 8:
			func_198(uParam1, "Dreyfuss1", func_200(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 9:
			func_198(uParam1, "Epsilon1", func_200(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 10:
			func_198(uParam1, "Epsilon2", func_200(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 11:
			func_198(uParam1, "Epsilon3", func_200(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 12:
			func_198(uParam1, "Epsilon4", func_200(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 13:
			func_198(uParam1, "Epsilon5", func_200(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 14:
			func_198(uParam1, "Epsilon6", func_200(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 15:
			func_198(uParam1, "Epsilon7", func_200(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 16:
			func_198(uParam1, "Epsilon8", func_200(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 17:
			func_198(uParam1, "Extreme1", func_200(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 18:
			func_198(uParam1, "Extreme2", func_200(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 19:
			func_198(uParam1, "Extreme3", func_200(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 20:
			func_198(uParam1, "Extreme4", func_200(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 21:
			func_198(uParam1, "Fanatic1", func_200(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_199(iParam0), 1, 0);
			break;
		
		case 22:
			func_198(uParam1, "Fanatic2", func_200(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_199(iParam0), 1, 0);
			break;
		
		case 23:
			func_198(uParam1, "Fanatic3", func_200(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_199(iParam0), 0, 1);
			break;
		
		case 24:
			func_198(uParam1, "Hao1", func_200(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_199(iParam0), 0, 1);
			break;
		
		case 25:
			func_198(uParam1, "Hunting1", func_200(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 26:
			func_198(uParam1, "Hunting2", func_200(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 27:
			func_198(uParam1, "Josh1", func_200(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 28:
			func_198(uParam1, "Josh2", func_200(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_199(iParam0), 1, 1);
			break;
		
		case 29:
			func_198(uParam1, "Josh3", func_200(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_199(iParam0), 1, 1);
			break;
		
		case 30:
			func_198(uParam1, "Josh4", func_200(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 31:
			func_198(uParam1, "Maude1", func_200(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 32:
			func_198(uParam1, "Minute1", func_200(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 33:
			func_198(uParam1, "Minute2", func_200(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 34:
			func_198(uParam1, "Minute3", func_200(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 35:
			func_198(uParam1, "MrsPhilips1", func_200(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 36:
			func_198(uParam1, "MrsPhilips2", func_200(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 37:
			func_198(uParam1, "Nigel1", func_200(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 38:
			func_198(uParam1, "Nigel1A", func_200(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_199(iParam0), 1, 1);
			break;
		
		case 39:
			func_198(uParam1, "Nigel1B", func_200(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_199(iParam0), 1, 1);
			break;
		
		case 40:
			func_198(uParam1, "Nigel1C", func_200(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_199(iParam0), 1, 1);
			break;
		
		case 41:
			func_198(uParam1, "Nigel1D", func_200(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_199(iParam0), 1, 1);
			break;
		
		case 42:
			func_198(uParam1, "Nigel2", func_200(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_199(iParam0), 1, 1);
			break;
		
		case 43:
			func_198(uParam1, "Nigel3", func_200(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_199(iParam0), 1, 1);
			break;
		
		case 44:
			func_198(uParam1, "Omega1", func_200(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 45:
			func_198(uParam1, "Omega2", func_200(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 46:
			func_198(uParam1, "Paparazzo1", func_200(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 47:
			func_198(uParam1, "Paparazzo2", func_200(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 48:
			func_198(uParam1, "Paparazzo3", func_200(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 49:
			func_198(uParam1, "Paparazzo3A", func_200(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 50:
			func_198(uParam1, "Paparazzo3B", func_200(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 51:
			func_198(uParam1, "Paparazzo4", func_200(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 52:
			func_198(uParam1, "Rampage1", func_200(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 54:
			func_198(uParam1, "Rampage3", func_200(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 55:
			func_198(uParam1, "Rampage4", func_200(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 56:
			func_198(uParam1, "Rampage5", func_200(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 53:
			func_198(uParam1, "Rampage2", func_200(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 57:
			func_198(uParam1, "TheLastOne", func_200(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 58:
			func_198(uParam1, "Tonya1", func_200(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 59:
			func_198(uParam1, "Tonya2", func_200(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 60:
			func_198(uParam1, "Tonya3", func_200(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 61:
			func_198(uParam1, "Tonya4", func_200(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 62:
			func_198(uParam1, "Tonya5", func_200(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_198(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0xDA23
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { vParam7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_199(int iParam0)//Position - 0xDAB4
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
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
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_200(int iParam0)//Position - 0xDDFA
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_201(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_201(int iParam0)//Position - 0xDE30
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_202()//Position - 0xE27B
{
	if (func_205() && !func_206())
	{
		return 1;
	}
	if (func_204() && func_203())
	{
		return 1;
	}
	return 0;
}

bool func_203()//Position - 0xE2AD
{
	return Global_106283 > 0;
}

int func_204()//Position - 0xE2BB
{
	if (Global_90634 != -1)
	{
		return 1;
	}
	return 0;
}

int func_205()//Position - 0xE2D0
{
	if (Global_90634 != -1)
	{
		return MISC::IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 20);
	}
	return 0;
}

int func_206()//Position - 0xE2F6
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_207()//Position - 0xE313
{
	func_209(39, 1);
	func_209(40, 1);
	func_209(41, 1);
	func_209(42, 1);
	func_209(43, 1);
	func_209(44, 1);
	iLocal_359 = func_208(vLocal_87);
	iLocal_86 = PED::CREATE_PED(26, joaat("a_f_y_bevhills_03"), vLocal_87, fLocal_90, 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_86, 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_86, 17, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_86, 128, true);
	PED::SET_PED_KEEP_TASK(iLocal_86, true);
	PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_86, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_86, 0, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_86, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_86, 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_86, 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_86, 7, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_86, 8, 0, 0, 0);
	PED::SET_PED_DIES_INSTANTLY_IN_WATER(iLocal_86, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_86, true);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_86, false);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_86, "LACEY");
	if (Global_3 || bLocal_70)
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_86, true);
	}
	if (PED::ADD_RELATIONSHIP_GROUP("CELEBRITY", &iLocal_69))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_86, iLocal_69);
	}
	iLocal_91 = VEHICLE::CREATE_VEHICLE(joaat("surano"), vLocal_92, fLocal_95, true, true, false);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_91, vLocal_92, 0, 0, 1);
	ENTITY::SET_ENTITY_QUATERNION(iLocal_91, 0.1293f, -0.0323f, -0.1606f, 0.978f);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_91, false, 0);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_91, 10);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_91, 1084227584);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_91, 3);
	VEHICLE::_0x2B6747FAA9DB9D6B(iLocal_91, 1);
	AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_91, 1);
	AUDIO::SET_VEH_RADIO_STATION(iLocal_91, AUDIO::GET_RADIO_STATION_NAME(1));
	if (func_19() == 1)
	{
		func_17(&Local_395, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (func_19() == 0)
	{
		func_17(&Local_395, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else
	{
		func_17(&Local_395, 1, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	func_17(&Local_395, 3, iLocal_86, "LACEY", 0, 1);
	iLocal_375[0] = "idle_a";
	iLocal_375[1] = "idle_b";
	iLocal_375[2] = "idle_c";
	iLocal_375[3] = "idle_d";
	iLocal_375[4] = "idle_e";
	iLocal_375[5] = "idle_f";
	iLocal_375[6] = "idle_g";
	iLocal_375[7] = "idle_h";
	iLocal_375[8] = "idle_i";
	iLocal_560[0] = "MAG_2_ESCAPE_PAP_GET_CAR";
	iLocal_560[1] = "MAG_2_ESCAPE_PAP_CHASE";
	iLocal_560[2] = "MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME";
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("vader"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("surano"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cavalcade2"), true);
}

int func_208(vector3 vParam0)//Position - 0xE57D
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_ALPHA(iVar0, 0);
	HUD::SET_BLIP_DISPLAY(iVar0, 0);
	return iVar0;
}

void func_209(int iParam0, bool bParam1)//Position - 0xE59F
{
	if (bParam1)
	{
		if (!func_213(iParam0, 2, 1))
		{
			func_212(iParam0, 2, 1);
		}
	}
	else if (func_213(iParam0, 2, 1))
	{
		func_210(iParam0, 2, 1);
	}
}

void func_210(int iParam0, int iParam1, bool bParam2)//Position - 0xE5D6
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_93734.f_1350[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_83() == 0)
		{
			iVar0 = func_118(func_211(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_114(func_211(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_106565.f_668[iParam0]), iParam1);
	}
}

int func_211(int iParam0)//Position - 0xE648
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 8917;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 10383;
}

void func_212(int iParam0, int iParam1, bool bParam2)//Position - 0xE969
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_93734.f_1350[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_83() == 0)
		{
			iVar0 = func_118(func_211(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_114(func_211(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_106565.f_668[iParam0]), iParam1);
	}
}

int func_213(int iParam0, int iParam1, bool bParam2)//Position - 0xE9DB
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_93734.f_1350[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_83() == 0)
		{
			return MISC::IS_BIT_SET(func_118(func_211(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_106565.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_214()//Position - 0xEA45
{
	if (!iLocal_96)
	{
		func_222(&uLocal_97, joaat("surano"));
		func_222(&uLocal_97, joaat("prop_ld_test_01"));
		func_222(&uLocal_97, joaat("a_f_y_bevhills_03"));
		func_222(&uLocal_97, joaat("a_m_y_genstreet_02"));
		func_222(&uLocal_97, joaat("vader"));
		func_222(&uLocal_97, joaat("cavalcade2"));
		func_222(&uLocal_97, joaat("prop_pap_camera_01"));
		func_219(&uLocal_97);
		iLocal_96 = 1;
	}
	if (!func_215(&uLocal_97))
	{
		return 0;
	}
	STREAMING::REQUEST_ANIM_DICT("random@escape_paparazzi@standing@");
	STREAMING::REQUEST_ANIM_DICT("random@paparazzi@pap_anims");
	STREAMING::REQUEST_ANIM_DICT("random@paparazzi@peek");
	STREAMING::REQUEST_ANIM_DICT("random@paparazzi@trans");
	STREAMING::REQUEST_ANIM_DICT("random@paparazzi@wait");
	STREAMING::REQUEST_ANIM_DICT("veh@std@ps@idle_panic");
	STREAMING::REQUEST_ANIM_DICT("veh@low@front_ps@idle_panic");
	STREAMING::REQUEST_ANIM_DICT(sLocal_374);
	HUD::REQUEST_ADDITIONAL_TEXT("ESCPAP", 0);
	if (((((((((STREAMING::HAS_ANIM_DICT_LOADED("random@escape_paparazzi@standing@") && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@pap_anims")) && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@peek")) && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@trans")) && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@wait")) && STREAMING::HAS_ANIM_DICT_LOADED("veh@std@ps@idle_panic")) && STREAMING::HAS_ANIM_DICT_LOADED("veh@low@front_ps@idle_panic")) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_374)) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Distant_Camera_Flash", false, -1))
	{
		return 1;
	}
	return 0;
}

int func_215(var uParam0)//Position - 0xEB80
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_216(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_216(var uParam0)//Position - 0xEBE2
{
	return func_217(*uParam0, "NULL", uParam0->f_1);
}

int func_217(int iParam0, char* sParam1, int iParam2)//Position - 0xEBF7
{
	if (MISC::IS_BIT_SET(iParam0, 30))
	{
		if (MISC::IS_BIT_SET(iParam0, 29))
		{
			switch (func_218(iParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(iParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam1);
					break;
				
				case 5:
					return BRAIN::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(iParam0, 27), -1);
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam2);
					break;
				
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam2);
					break;
				
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_218(int iParam0)//Position - 0xECEB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (MISC::IS_BIT_SET(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_219(var uParam0)//Position - 0xED17
{
	func_220(uParam0, 9, -1, 0);
}

void func_220(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xED29
{
	int iVar0;
	
	if (!func_221(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			MISC::SET_BIT(uParam0[iVar0 /*2*/], iParam1);
			MISC::SET_BIT(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_221(int iParam0)//Position - 0xEDEC
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
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
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_222(var uParam0, int iParam1)//Position - 0xEE8B
{
	func_220(uParam0, 0, iParam1, 0);
}

int func_223()//Position - 0xEE9D
{
	if (!func_190(5))
	{
		return 1;
	}
	if (func_202())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_206())
		{
			return 0;
		}
	}
	if (func_196(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_224()//Position - 0xEEFF
{
	if ((Global_106554 == func_97() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_106555)
	{
		return 1;
	}
	return 0;
}

void func_225(var uParam0)//Position - 0xEF2A
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_32 + uParam0->f_33) || MISC::IS_BIT_SET(Global_93682.f_20, 2)) || MISC::IS_BIT_SET(Global_93682.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 29))
					{
						func_226(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_226(int iParam0)//Position - 0xEFB4
{
	func_227(iParam0, "NULL", iParam0->f_1);
}

void func_227(int iParam0, char* sParam1, int iParam2)//Position - 0xEFC8
{
	if (MISC::IS_BIT_SET(*iParam0, 30))
	{
		switch (func_218(*iParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(iParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REQUEST_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, MISC::IS_BIT_SET(*iParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				BRAIN::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(*iParam0, 27), -1);
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam2);
				break;
			
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
				break;
			
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
			
			default:
				break;
		}
		MISC::SET_BIT(iParam0, 29);
	}
}

void func_228(int iParam0)//Position - 0xF0A2
{
	if (iParam0 == -1)
	{
		iParam0 = func_97();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_230(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_106551 = 0;
	func_229();
}

void func_229()//Position - 0xF0D8
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), true);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
}

void func_230(int iParam0)//Position - 0xF115
{
	Global_106554 = iParam0;
}

int func_231(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xF123
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	
	if (!Global_145143)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_97();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_272())
		{
			return 0;
		}
	}
	vLocal_43 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_206())
			{
				return 0;
			}
		}
		if (!Global_106565.f_9079)
		{
			return 0;
		}
		if (func_78(0))
		{
			return 0;
		}
		if (func_202())
		{
			return 0;
		}
		if (func_271())
		{
			return 0;
		}
		if (Global_106554 != -1)
		{
			return 0;
		}
		if (func_21(func_19()))
		{
			if (func_196(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((vVar1.z - vLocal_43.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_270(iParam3))
		{
			return 0;
		}
		if (func_21(func_19()))
		{
			if (func_269(func_19()) == 4 || func_269(func_19()) == 5)
			{
				return 0;
			}
		}
		if (func_21(func_19()))
		{
			if (!func_268(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_267(Global_106565.f_24989.f_43[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_106556) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_266())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_257(4))
		{
			return 0;
		}
		if (!func_190(5))
		{
			return 0;
		}
		if (func_256(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_256(0, 0))
		{
			return 0;
		}
		if (Global_25911)
		{
			return 0;
		}
		if (func_270(30) && !func_256(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_21(func_19()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_106565.f_2357.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_106565.f_2357.f_539.f_2296[iVar4];
				if (func_255(iVar8))
				{
					if (func_233(iVar4))
					{
						if (!func_232(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vVar5) < (210f * 210f))
							{
								if (func_19() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_232(vector3 vParam0, vector3 vParam3, bool bParam6)//Position - 0xF4BD
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_233(int iParam0)//Position - 0xF504
{
	int iVar0;
	
	iVar0 = Global_106565.f_2357.f_539.f_2296[iParam0];
	return func_234(iVar0);
}

int func_234(int iParam0)//Position - 0xF525
{
	return func_235(iParam0, 1);
}

int func_235(int iParam0, int iParam1)//Position - 0xF534
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_255(iParam0))
	{
		return 0;
	}
	func_236(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_236(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xF587
{
	func_237(func_248(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_237(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xF5A5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_247(iParam0, iParam1))
	{
		iVar0 = func_246(iParam1);
		iVar1 = func_244(iParam0);
		iVar2 = (func_244(iParam0) - func_244(iParam1));
		iVar3 = (func_246(iParam0) - func_246(iParam1));
		iVar4 = (func_243(iParam0) - func_243(iParam1));
		iVar5 = (func_242(iParam0) - func_242(iParam1));
		iVar6 = (func_241(iParam0) - func_241(iParam1));
		iVar7 = (func_240(iParam0) - func_240(iParam1));
	}
	else
	{
		iVar0 = func_246(iParam0);
		iVar1 = func_244(iParam1);
		iVar2 = (func_244(iParam1) - func_244(iParam0));
		iVar3 = (func_246(iParam1) - func_246(iParam0));
		iVar4 = (func_243(iParam1) - func_243(iParam0));
		iVar5 = (func_242(iParam1) - func_242(iParam0));
		iVar6 = (func_241(iParam1) - func_241(iParam0));
		iVar7 = (func_240(iParam1) - func_240(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_239(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_238(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_238(float fParam0, float fParam1, float fParam2)//Position - 0xF7A6
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_239(int iParam0, int iParam1)//Position - 0xF7E8
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_240(int iParam0)//Position - 0xF88A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_241(int iParam0)//Position - 0xF89D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_242(int iParam0)//Position - 0xF8B0
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_243(int iParam0)//Position - 0xF8C3
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_244(int iParam0)//Position - 0xF8D5
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_245(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_245(bool bParam0, int iParam1, int iParam2)//Position - 0xF8FA
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_246(int iParam0)//Position - 0xF911
{
	return iParam0 & 15;
}

int func_247(int iParam0, int iParam1)//Position - 0xF91E
{
	int iVar0;
	int iVar1;
	
	if (!func_255(iParam1) || !func_255(iParam0))
	{
		return 1;
	}
	iVar0 = func_244(iParam0);
	iVar1 = func_244(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_246(iParam0);
	iVar1 = func_246(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_243(iParam0);
	iVar1 = func_243(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_242(iParam0);
	iVar1 = func_242(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_241(iParam0);
	iVar1 = func_241(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_240(iParam0);
	iVar1 = func_240(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_248()//Position - 0xFA2A
{
	var uVar0;
	
	func_254(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_253(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_252(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_251(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_250(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_249(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_249(var uParam0, int iParam1)//Position - 0xFA70
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_250(var uParam0, int iParam1)//Position - 0xFAF6
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_251(var uParam0, int iParam1)//Position - 0xFB29
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_246(*uParam0);
	iVar1 = func_244(*uParam0);
	if (iParam1 < 1 || iParam1 > func_239(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_252(var uParam0, int iParam1)//Position - 0xFB7A
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_253(var uParam0, int iParam1)//Position - 0xFBB4
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_254(var uParam0, int iParam1)//Position - 0xFBEF
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_255(int iParam0)//Position - 0xFC2B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_240(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_241(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_242(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_244(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_246(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_243(iParam0);
	if (iVar5 < 1 || iVar5 > func_239(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_256(int iParam0, int iParam1)//Position - 0xFD07
{
	if (MISC::IS_BIT_SET(Global_106565.f_24989.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_257(int iParam0)//Position - 0xFD2A
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_19();
				if (!func_21(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_265()) || Global_105612) || Global_25767) || func_264()) || func_14(8, -1)) || func_263()) || func_262()) || func_261()) || func_260()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_265()) || Global_25767) || func_264()) || func_14(8, -1)) || func_261()) || func_263()) || func_262()) || func_260()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_265()) || Global_105612) || Global_25767) || func_264()) || func_14(8, -1)) || func_261()) || func_263()) || func_262()) || func_260()) || Global_106565.f_7682.f_919[iVar0] == 5) || Global_36972 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_265()) || Global_105612) || Global_25767) || func_264()) || func_14(8, -1)) || func_263()) || func_262()) || func_260()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_265() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_14(8, -1)) || func_260()) || func_259()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_14(8, -1) || func_263()) || func_262()) || func_259()) || func_258())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_265()) || Global_25767) || func_264()) || func_14(8, -1)) || func_262()) || func_261()) || func_260()) || Global_106565.f_7682.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_265()) || func_262()) || Global_105612) || Global_25767) || func_264()) || Global_37584) || func_14(8, -1)) || func_261()) || func_259()) || func_260()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_265()) || Global_105612) || Global_25767) || func_264()) || func_14(8, -1)) || func_261()) || func_259()) || func_263()) || func_262()) || func_260())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_258()//Position - 0x10447
{
	return Global_93721.f_1;
}

int func_259()//Position - 0x10455
{
	if (Global_90634 != -1)
	{
		return MISC::IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 13);
	}
	return 0;
}

int func_260()//Position - 0x1047B
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_261()//Position - 0x10495
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

bool func_262()//Position - 0x104BF
{
	return Global_93734.f_340 > 0;
}

bool func_263()//Position - 0x104D0
{
	return Global_93734.f_339 > 0;
}

var func_264()//Position - 0x104E1
{
	return Global_1312867;
}

int func_265()//Position - 0x104ED
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

int func_266()//Position - 0x10509
{
	func_11();
	if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_267(int iParam0)//Position - 0x10531
{
	return func_247(func_248(), iParam0);
}

int func_268(int iParam0, int iParam1, int iParam2)//Position - 0x10543
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_19();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_269(int iParam0)//Position - 0x10627
{
	if (!func_21(iParam0))
	{
		return 7;
	}
	return Global_106565.f_7682.f_919[iParam0];
}

bool func_270(int iParam0)//Position - 0x1064B
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_272())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = MISC::IS_BIT_SET(Global_106565.f_24989, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = MISC::IS_BIT_SET(Global_106565.f_24989.f_1, iVar0);
	}
	return bVar1;
}

int func_271()//Position - 0x106A9
{
	int iVar0;
	
	if (Global_25915)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_272()//Position - 0x106ED
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

void func_273(var uParam0, int iParam1)//Position - 0x107A8
{
	if (iParam1 > 0)
	{
		uParam0->f_33 = iParam1;
	}
}

void func_274()//Position - 0x107BF
{
	func_292(0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-90f, -1488f, -50f, 55f, -1470f, 50f, true);
	BRAIN::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", true);
	func_287(&uLocal_97, 0);
	STREAMING::REMOVE_ANIM_DICT("random@escape_paparazzi@standing@");
	STREAMING::REMOVE_ANIM_DICT("random@paparazzi@pap_anims");
	STREAMING::REMOVE_ANIM_DICT("random@paparazzi@peek");
	STREAMING::REMOVE_ANIM_DICT("random@paparazzi@trans");
	STREAMING::REMOVE_ANIM_DICT("random@paparazzi@wait");
	STREAMING::REMOVE_ANIM_DICT("veh@std@ps@idle_panic");
	STREAMING::REMOVE_ANIM_DICT("veh@low@front_ps@idle_panic");
	STREAMING::REMOVE_ANIM_DICT(sLocal_374);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (func_224())
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_86) && !PED::IS_PED_INJURED(iLocal_86))
	{
		if (PED::IS_PED_IN_GROUP(iLocal_86))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_86);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_86, 1))
		{
			if (!PED::IS_PED_FLEEING(iLocal_86))
			{
				BRAIN::TASK_LEAVE_ANY_VEHICLE(iLocal_86, 0, 0);
			}
		}
	}
	func_276(-1);
	HUD::_0x67EEDEA1B9BAFD94();
	HUD::_0x3DDA37128DD1ACA8(0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("vader"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("surano"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cavalcade2"), false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_365, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_366, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_367, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), true, 1);
	if (Global_26004)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
	}
	func_275();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_275()//Position - 0x10913
{
	Global_26000 = 0;
	Global_26001 = 0;
	Global_26003 = 0;
	Global_26004 = 0;
	Global_26005 = 0;
}

void func_276(int iParam0)//Position - 0x1092F
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_97();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_224())
	{
		func_280(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_106556 = MISC::GET_GAME_TIMER();
		func_279(30000);
		StringCopy(&cVar0, func_278(Global_106554, 1), 64);
		if (func_96(Global_106554) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_106553, 64);
		}
		STATS::_0x71862B1D855F32E1(&cVar0, Global_106551, (MISC::GET_GAME_TIMER() - Global_106552), 0);
	}
	else if (MISC::IS_BIT_SET(Global_106561, 0) && Global_106565.f_24989.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_106561, 0);
	}
	func_277(&Global_25824);
	Global_106555 = 0;
	func_230(-1);
}

void func_277(var uParam0)//Position - 0x109E4
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_36387)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_36386 = 0;
	Global_36388 = 0;
	Global_36425 = 15;
	Global_56491 = 0;
	Global_56492 = 0;
}

char* func_278(int iParam0, bool bParam1)//Position - 0x10A21
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_279(int iParam0)//Position - 0x10C6A
{
	Global_36976 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_280(int iParam0)//Position - 0x10C7C
{
	func_281(iParam0, 0, func_286(iParam0));
}

void func_281(int iParam0, int iParam1, int iParam2)//Position - 0x10C91
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_248();
	func_284(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_283(iParam0, &uVar0);
	Var1 = { func_282(&uVar0) };
}

struct<16> func_282(var uParam0)//Position - 0x10CC0
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_242(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_241(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_240(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_243(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_246(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_244(*uParam0), 64);
	return Var0;
}

void func_283(int iParam0, var uParam1)//Position - 0x10D8F
{
	Global_106565.f_24989.f_43[iParam0] = *uParam1;
}

void func_284(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x10DA7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_244(*uParam0);
	iVar1 = func_246(*uParam0);
	iVar2 = func_243(*uParam0);
	iVar3 = func_242(*uParam0);
	iVar4 = func_241(*uParam0);
	iVar5 = func_240(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_239(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_239(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_285(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_285(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x10F29
{
	func_254(uParam0, iParam1);
	func_253(uParam0, iParam2);
	func_252(uParam0, iParam3);
	func_250(uParam0, iParam5);
	func_251(uParam0, iParam4);
	func_249(uParam0, iParam6);
}

int func_286(int iParam0)//Position - 0x10F61
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_287(var uParam0, bool bParam1)//Position - 0x11104
{
	int iVar0;
	
	if (!bParam1)
	{
		func_289(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_288(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_288(var uParam0)//Position - 0x11144
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_289(var uParam0)//Position - 0x11155
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			func_290(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_290(var uParam0)//Position - 0x1118E
{
	func_291(*uParam0, "NULL", uParam0->f_1);
}

void func_291(int iParam0, char* sParam1, int iParam2)//Position - 0x111A3
{
	if (MISC::IS_BIT_SET(iParam0, 30))
	{
		switch (func_218(iParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
				break;
			
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				BRAIN::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(iParam2, MISC::IS_BIT_SET(iParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

void func_292(bool bParam0)//Position - 0x11263
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		func_209(iVar0, bParam0);
		iVar0++;
	}
}

