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
	bool bLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	float fLocal_57 = 0f;
	float fLocal_58 = 0f;
	vector3 vLocal_59 = { 0f, 0f, 0f };
	vector3 vLocal_62 = { 0f, 0f, 0f };
	int iLocal_65 = 0;
	struct<5> Local_66[31];
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	struct<5> Local_229[14];
	float fLocal_300 = 0f;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	vector3 vLocal_305 = { 0f, 0f, 0f };
	vector3 vLocal_308 = { 0f, 0f, 0f };
	vector3 vLocal_311 = { 0f, 0f, 0f };
	vector3 vLocal_314 = { 0f, 0f, 0f };
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	bool bLocal_343 = 0;
	bool bLocal_344 = 0;
	bool bLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	var uLocal_358 = 16;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	vector3 vLocal_523 = { 0f, 0f, 0f };
	vector3 vLocal_526 = { 0f, 0f, 0f };
	int iLocal_529 = 0;
	int iLocal_530 = 0;
	int iLocal_531 = 0;
	var uLocal_532 = 0;
	int iLocal_533 = 0;
	int iLocal_534 = 0;
	int iLocal_535 = 0;
	bool bLocal_536 = 0;
	struct<33> Local_537 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_570 = 1;
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
	iLocal_51 = -1;
	iLocal_54 = -1;
	fLocal_57 = 0.5f;
	fLocal_58 = 0f;
	iLocal_223 = 1;
	fLocal_300 = 160f;
	iLocal_304 = 55000;
	vLocal_311 = { 30f, 30f, 5f };
	iLocal_352 = -1;
	vLocal_523 = { -458.4085f, -984.6459f, 22.5892f };
	vLocal_526 = { -458.1934f, -995.4897f, 22.7427f };
	vLocal_305 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_174();
	}
	if (CLOCK::GET_CLOCK_HOURS() > 18 || CLOCK::GET_CLOCK_HOURS() < 5)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_132(vLocal_305, -1, 0, 0, 0))
	{
		func_129(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (TASK::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			if (!func_128())
			{
				if (func_127())
				{
					func_174();
				}
			}
			RECORDING::_0x208784099002BC30("RE_CA", 0);
			switch (iLocal_301)
			{
				case 0:
					if (func_115())
					{
						func_174();
					}
					func_109();
					func_106(&Local_537);
					break;
				
				case 1:
					func_22();
					func_106(&Local_537);
					func_13();
					break;
				
				case 2:
					if (((ENTITY::DOES_ENTITY_EXIST(iLocal_317) && PED::IS_PED_DEAD_OR_DYING(iLocal_317, 1)) && iLocal_348 < 5) && !bLocal_345)
					{
						func_12();
					}
					func_1();
					break;
			}
		}
		else
		{
			func_174();
		}
	}
}

void func_1()//Position - 0x1CF
{
	if (iLocal_534 && !iLocal_535)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("RE14A_FAIL");
		iLocal_347 = 0;
		while (iLocal_347 < 11)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_327[iLocal_347]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_327[iLocal_347], false);
			}
			iLocal_347++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_319, 0))
		{
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_319, 0f);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_319, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_339))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_339, false);
		}
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
		func_2(0, 1, 1, 0, 0, 0);
		iLocal_342 = 1;
		MISC::SET_TIME_SCALE(1f);
		STREAMING::REMOVE_ANIM_DICT("re@construction");
		if (CAM::DOES_CAM_EXIST(iLocal_529))
		{
			CAM::DESTROY_CAM(iLocal_529, 0);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_323))
		{
			HUD::REMOVE_BLIP(&iLocal_323);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_324))
		{
			HUD::REMOVE_BLIP(&iLocal_324);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_325))
		{
			HUD::REMOVE_BLIP(&iLocal_325);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_326))
		{
			HUD::REMOVE_BLIP(&iLocal_326);
		}
		iLocal_535 = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_327[0]) || ENTITY::DOES_ENTITY_EXIST(iLocal_327[1]))
	{
		if (!CAM::IS_SPHERE_VISIBLE(vLocal_308 + Vector(20f, 0f, 0f), 30f) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_308, 80f, 80f, 80f, false, true, 0))
		{
			func_174();
		}
	}
}

void func_2(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x371
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_11(1);
		HUD::_0xA8FDB297A8D25FBA();
		HUD::_0xFDB423997FA30340();
		if (Global_14553.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_10())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_9(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_11(0);
		HUD::_0xE1CD1E48E025E661();
		Global_56500 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_9(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_7(PLAYER::PLAYER_ID())) && !func_4(PLAYER::PLAYER_ID(), 0)) && !func_3()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_7(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_71588 = 0;
	}
}

bool func_3()//Position - 0x4AA
{
	return MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_39.f_18, 14);
}

bool func_4(int iParam0, int iParam1)//Position - 0x4C7
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_5(-1, 0) == 8;
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

int func_5(int iParam0, bool bParam1)//Position - 0x512
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_6();
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

int func_6()//Position - 0x553
{
	return Global_1312745;
}

int func_7(int iParam0)//Position - 0x55F
{
	if (func_4(iParam0, 0))
	{
		return 1;
	}
	if (func_8())
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

bool func_8()//Position - 0x5A1
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_9(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x5B2
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

int func_10()//Position - 0x5E5
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_11(int iParam0)//Position - 0x60C
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

void func_12()//Position - 0x62F
{
	if (iLocal_352 == -1)
	{
		iLocal_352 = MISC::GET_GAME_TIMER() + 5000;
	}
	if (MISC::GET_GAME_TIMER() > iLocal_352)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_319))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_319, false);
			ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_319, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_319, 0))
			{
				VEHICLE::EXPLODE_VEHICLE(iLocal_319, 1, 0);
			}
		}
	}
}

void func_13()//Position - 0x691
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_21();
		func_20();
		func_17();
		func_14();
	}
}

void func_14()//Position - 0x6B5
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	vVar1 = { 0f, 0f, 0f };
	if (iLocal_222 == 0)
	{
		if (FIRE::GET_CLOSEST_FIRE_POS(&vVar1, Local_229[0 /*5*/]))
		{
			fVar4 = 0f;
			fVar7 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_229)
			{
				if (iVar0 > 0)
				{
					fVar4 = (fVar4 + MISC::GET_DISTANCE_BETWEEN_COORDS(Local_229[(iVar0 - 1) /*5*/], Local_229[iVar0 /*5*/], true));
				}
				if (Local_229[iVar0 /*5*/].f_4)
				{
					if (FIRE::GET_CLOSEST_FIRE_POS(&vVar1, Local_229[iVar0 /*5*/]))
					{
						fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_229[iVar0 /*5*/], vVar1, true);
						if (fVar6 < fVar7)
						{
							fVar7 = fVar6;
							fVar8 = fVar4;
							iVar5 = iVar0;
						}
					}
				}
				iVar0++;
			}
			if (fVar7 < fLocal_57)
			{
				iVar5 = iVar5;
				iLocal_222 = 1;
				iLocal_224 = MISC::GET_GAME_TIMER();
				fVar8 = fVar8;
				vLocal_62 = { Local_229[iVar5 /*5*/] };
				iLocal_65 = iVar5;
				iLocal_225 = iVar5 * 2;
				iLocal_227 = iLocal_225;
				iLocal_228 = iLocal_225;
				if (iLocal_228 < 0)
				{
					iLocal_228 = 0;
				}
				if (iLocal_227 >= Local_229 * 2)
				{
					iLocal_227 = (Local_229 * 2 - 1);
				}
			}
		}
	}
	if (iLocal_222 == 1)
	{
		GRAPHICS::_0xD9454B5752C857DC();
		fVar9 = (SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_224)) / fLocal_300);
		iVar10 = (SYSTEM::FLOOR((fVar9 / (1f / 2f))) - 1);
		iVar11 = (iLocal_225 + iVar10);
		iVar12 = (iLocal_225 - iVar10);
		if (iVar11 >= 28)
		{
			iVar11 = 27;
		}
		if (iVar12 < 0)
		{
			iVar12 = 0;
		}
		if (iVar11 > iLocal_227)
		{
			iVar0 = iLocal_227 + 1;
			while (iVar0 <= iVar11)
			{
				iVar13 = (iVar0 / 2);
				if (iVar13 < Local_229)
				{
					if (Local_229[iVar13 /*5*/].f_4)
					{
						func_15(iVar0, 1);
					}
					else
					{
						iVar11 = (iVar0 - 1);
						iVar0 = iVar11 + 1;
					}
				}
				iVar0++;
			}
			iLocal_227 = iVar11;
		}
		if (iVar12 < iLocal_228)
		{
			iVar0 = (iLocal_228 - 1);
			while (iVar0 >= iVar12)
			{
				iVar13 = (iVar0 / 2);
				if (iVar13 < Local_229)
				{
					if (Local_229[iVar13 /*5*/].f_4)
					{
						func_15(iVar0, 1);
					}
					else
					{
						iVar12 = iVar0 + 1;
						iVar0 = (iVar12 - 1);
					}
				}
				iVar0 = (iVar0 + -1);
			}
			iLocal_228 = iVar12;
		}
		iVar0 = 0;
		while (iVar0 < Local_66)
		{
			if ((MISC::GET_GAME_TIMER() - Local_66[iVar0 /*5*/].f_4) > 1000)
			{
				GRAPHICS::FADE_DECALS_IN_RANGE(Local_66[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			if ((MISC::GET_GAME_TIMER() - Local_66[iVar0 /*5*/].f_4) > 6000)
			{
				FIRE::REMOVE_SCRIPT_FIRE(Local_66[iVar0 /*5*/]);
			}
			iVar0++;
		}
	}
}

void func_15(int iParam0, int iParam1)//Position - 0x8ED
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		if ((iParam0 % 2) == 1)
		{
			iVar0 = (iParam0 / 2);
			if (iVar0 + 1 < 14)
			{
				func_16(Local_229[(iParam0 / 2) /*5*/] + Local_229[(iParam0 / 2) + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_58, fLocal_58, fLocal_58), iParam1);
			}
		}
		else if ((iParam0 / 2) < 14)
		{
			func_16(Local_229[(iParam0 / 2) /*5*/] + Vector(fLocal_58, fLocal_58, fLocal_58), iParam1);
		}
	}
}

void func_16(vector3 vParam0, int iParam3)//Position - 0x956
{
	if (iLocal_223 == 0)
	{
		iParam3 = 0;
	}
	FIRE::REMOVE_SCRIPT_FIRE(Local_66[iLocal_226 /*5*/]);
	if (Local_66[iLocal_226 /*5*/].f_4 != 0)
	{
		GRAPHICS::FADE_DECALS_IN_RANGE(Local_66[iLocal_226 /*5*/].f_1, 0.4f, 1f);
	}
	Local_66[iLocal_226 /*5*/].f_4 = MISC::GET_GAME_TIMER();
	Local_66[iLocal_226 /*5*/].f_1 = { vParam0 };
	Local_66[iLocal_226 /*5*/] = FIRE::START_SCRIPT_FIRE(vParam0, iLocal_55, iParam3);
	iLocal_226++;
	if (iLocal_226 >= 31)
	{
		iLocal_226 = 0;
	}
}

void func_17()//Position - 0x9CD
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (bLocal_50)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (iVar1 == joaat("weapon_petrolcan"))
		{
			if (PAD::IS_CONTROL_PRESSED(0, 24) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_56 == 0)
				{
					RECORDING::_0x293220DA1B46CEBC(2f, 8f, 4);
					iLocal_56 = MISC::GET_GAME_TIMER() + 250;
				}
				if (MISC::GET_GAME_TIMER() > iLocal_56)
				{
					if (!bLocal_46)
					{
						fVar4 = 9999.9f;
						vLocal_59 = { func_19() };
						iVar0 = 0;
						while (iVar0 < Local_229)
						{
							if (HUD::DOES_BLIP_EXIST(Local_229[iVar0 /*5*/].f_3))
							{
								fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_59, HUD::GET_BLIP_COORDS(Local_229[iVar0 /*5*/].f_3), true);
								fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_229[iVar0 /*5*/], HUD::GET_BLIP_COORDS(Local_229[iVar0 /*5*/].f_3), true);
								if (fVar3 == 0f || fVar2 < fVar3)
								{
									if (fVar2 < 2f)
									{
										Local_229[iVar0 /*5*/] = { vLocal_59 };
									}
								}
								if (fVar2 < fVar4)
								{
									fVar4 = fVar2;
									iVar5 = iVar0;
								}
							}
							iVar0++;
						}
						if (fVar4 < 2f)
						{
							if (iLocal_52 != -1)
							{
								if (MISC::ABSI((iLocal_53 - iVar5)) > 1)
								{
									iLocal_53 = -1;
								}
								if (iLocal_53 == -1)
								{
									iLocal_53 = iLocal_52;
								}
								if (MISC::ABSI((iLocal_53 - iVar5)) < 3 && MISC::ABSI((iLocal_53 - iVar5)) > 0)
								{
									if (iLocal_53 < iVar5)
									{
										iVar6 = iLocal_53;
										while (iVar6 <= (iVar5 - 1))
										{
											if (HUD::DOES_BLIP_EXIST(Local_229[iVar6 /*5*/].f_3))
											{
												if (HUD::GET_BLIP_ALPHA(Local_229[iVar6 /*5*/].f_3) > 0)
												{
													HUD::SET_BLIP_ALPHA(Local_229[iVar6 /*5*/].f_3, 0);
													Local_229[iVar6 /*5*/].f_4 = 1;
													iLocal_54 = (iLocal_54 - 1);
												}
											}
											iVar6++;
										}
									}
									else
									{
										iVar6 = iVar5 + 1;
										while (iVar6 <= iLocal_53)
										{
											if (HUD::DOES_BLIP_EXIST(Local_229[iVar6 /*5*/].f_3))
											{
												if (HUD::GET_BLIP_ALPHA(Local_229[iVar6 /*5*/].f_3) > 0)
												{
													HUD::SET_BLIP_ALPHA(Local_229[iVar6 /*5*/].f_3, 0);
													Local_229[iVar6 /*5*/].f_4 = 1;
													iLocal_54 = (iLocal_54 - 1);
												}
											}
											iVar6++;
										}
									}
									iLocal_53 = iLocal_52;
								}
								if (iVar5 == 0)
								{
									if (HUD::DOES_BLIP_EXIST(Local_229[iVar5 /*5*/].f_3))
									{
										if (HUD::GET_BLIP_ALPHA(Local_229[iVar5 /*5*/].f_3) > 0)
										{
											HUD::SET_BLIP_ALPHA(Local_229[iVar5 /*5*/].f_3, 0);
											Local_229[iVar5 /*5*/].f_4 = 1;
											iLocal_54 = (iLocal_54 - 1);
										}
									}
								}
								if (iVar5 == 13)
								{
									if (HUD::DOES_BLIP_EXIST(Local_229[iVar5 /*5*/].f_3))
									{
										if (HUD::GET_BLIP_ALPHA(Local_229[iVar5 /*5*/].f_3) > 0)
										{
											HUD::SET_BLIP_ALPHA(Local_229[iVar5 /*5*/].f_3, 0);
											Local_229[iVar5 /*5*/].f_4 = 1;
											iLocal_54 = (iLocal_54 - 1);
										}
									}
								}
								if (iVar5 < 13)
								{
									if (func_18(Local_229[iVar5 + 1 /*5*/]))
									{
										if (HUD::DOES_BLIP_EXIST(Local_229[iVar5 /*5*/].f_3))
										{
											if (HUD::GET_BLIP_ALPHA(Local_229[iVar5 /*5*/].f_3) > 0)
											{
												HUD::SET_BLIP_ALPHA(Local_229[iVar5 /*5*/].f_3, 0);
												Local_229[iVar5 /*5*/].f_4 = 1;
												iLocal_54 = (iLocal_54 - 1);
											}
										}
									}
								}
							}
							iLocal_52 = iVar5;
						}
					}
				}
			}
			else
			{
				iLocal_52 = -1;
				iLocal_53 = -1;
				iLocal_56 = 0;
			}
		}
	}
}

int func_18(vector3 vParam0)//Position - 0xCA2
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_19()//Position - 0xCCC
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	var uVar8;
	
	iVar0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PLAYER::PLAYER_PED_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Gun_Nuzzle");
		iVar1 = 1;
		vVar2 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iVar0, iVar1) };
		vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar2, ENTITY::GET_ENTITY_HEADING(iVar0), 0.35f, 0f, -0.15f) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(vVar2, &uVar8, 0, 0);
		vVar5 = { vVar2.x, vVar2.y, uVar8 };
	}
	return vVar5;
}

void func_20()//Position - 0xD3B
{
	int iVar0;
	
	if (iLocal_48)
	{
		if (iLocal_222)
		{
			iVar0 = 0;
			while (iVar0 < Local_66)
			{
				FIRE::REMOVE_SCRIPT_FIRE(Local_66[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_48 = 0;
		iLocal_222 = 1;
		iLocal_224 = MISC::GET_GAME_TIMER();
		iVar0 = 0;
		while (iVar0 < Local_229)
		{
			Local_229[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (iLocal_51 != -1)
		{
			iLocal_228 = iLocal_51;
			iLocal_227 = iLocal_51;
			iLocal_225 = iLocal_51;
		}
		else
		{
			iLocal_228 = -1;
			iLocal_227 = -1;
			iLocal_225 = iLocal_51;
		}
		iLocal_226 = 1;
	}
}

void func_21()//Position - 0xDB4
{
	if (!iLocal_49)
	{
		iLocal_49 = 1;
	}
}

void func_22()//Position - 0xDC5
{
	switch (iLocal_302)
	{
		case 0:
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CONSTRUCTION_ACCIDENT_1", false, -1);
			STREAMING::REQUEST_ANIM_DICT("re@construction");
			if (Local_537.f_32 <= 0)
			{
				Local_537.f_32 = MISC::GET_FRAME_COUNT();
			}
			func_105(&Local_537, joaat("s_m_m_dockwork_01"));
			func_105(&Local_537, -415509317);
			func_105(&Local_537, joaat("p_amb_phone_01"));
			func_102(&Local_537);
			if ((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CONSTRUCTION_ACCIDENT_1", false, -1) && STREAMING::HAS_ANIM_DICT_LOADED("re@construction")) && func_98(&Local_537))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_319, 0))
				{
					iLocal_317 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_319, 26, joaat("s_m_m_dockwork_01"), -1, 1, true);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_317, 0, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_317, 3, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_317, 4, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_317, 8, 0, 0, 0);
					BRAIN::TASK_PLAY_ANIM(iLocal_317, "re@construction", "idle_c", 1000f, -1000f, -1, 49, 0.4f, 0, 0, 0);
					iLocal_340 = OBJECT::CREATE_OBJECT(joaat("p_amb_phone_01"), -455.6561f, -985.8071f, 22.4868f, true, true, false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_amb_phone_01"));
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_340, iLocal_317, PED::GET_PED_BONE_INDEX(iLocal_317, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_317, 17, true);
					PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(iLocal_317, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_317, true);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_317, false);
					func_97(&uLocal_358, 3, iLocal_317, "RECONACWorker", 0, 1);
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_317, "S_M_Y_GENERICWORKER_01_WHITE_01");
					iLocal_318 = PED::CREATE_PED(26, joaat("s_m_m_dockwork_01"), -462.2982f, -978.3272f, 65f, 221.4041f, 1, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_318, true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_318, true, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_318, true);
					EVENT::SET_DECISION_MAKER(iLocal_317, -1143637011);
					EVENT::CLEAR_DECISION_MAKER_EVENT_RESPONSE(-1143637011, 24);
					EVENT::CLEAR_DECISION_MAKER_EVENT_RESPONSE(-1143637011, 46);
					EVENT::CLEAR_DECISION_MAKER_EVENT_RESPONSE(-1143637011, 61);
					EVENT::CLEAR_DECISION_MAKER_EVENT_RESPONSE(-1143637011, 136);
					EVENT::CLEAR_DECISION_MAKER_EVENT_RESPONSE(-1143637011, 55);
					iLocal_339 = OBJECT::CREATE_OBJECT(-415509317, vLocal_526.x, (vLocal_526.y + 0.5f), (vLocal_526.z - 0.25f), true, true, false);
					ENTITY::SET_ENTITY_HEADING(iLocal_339, 75f);
					ENTITY::SET_ENTITY_PROOFS(iLocal_339, false, true, true, false, false, false, 0, false);
					iLocal_533 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sparking_generator", iLocal_339, 0f, 0f, 0.2f, 0f, 0f, 0f, 1f, 0, 0, 0);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_339, true);
					func_96(&uLocal_358, "CONACAU", "CONAC_CHAT", 4, 0, 0, 0, 0);
					iLocal_351 = MISC::GET_GAME_TIMER();
					iLocal_302 = 1;
				}
			}
			break;
		
		case 1:
			if (iLocal_341)
			{
				func_91();
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!iLocal_342)
				{
					if (!PED::IS_PED_INJURED(iLocal_317))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -532.2208f, -849.2668f, 19.7038f, -531.6973f, -1065.341f, 60.7893f, 190.8125f, 0, true, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_319, 0))
							{
								if (!HUD::DOES_BLIP_EXIST(iLocal_324))
								{
									iLocal_324 = func_90(iLocal_319, 0, 0);
								}
							}
						}
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_317, PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_319, PLAYER::PLAYER_PED_ID(), 1))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_319, false);
							BRAIN::CLEAR_PED_TASKS(iLocal_317);
							BRAIN::OPEN_SEQUENCE_TASK(&iLocal_357);
							BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							BRAIN::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
							BRAIN::CLOSE_SEQUENCE_TASK(iLocal_357);
							BRAIN::TASK_PERFORM_SEQUENCE(iLocal_317, iLocal_357);
							BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_357);
							func_89();
						}
						STREAMING::REQUEST_MODEL(joaat("prop_ld_pipe_single_01"));
						if ((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -473.1686f, -984.6405f, 22.487f, 40f, 40f, 5f, false, true, 0) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && func_88(1, 0, 1)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_pipe_single_01")))
						{
							if (!func_128())
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
								{
									iLocal_322 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								}
								func_78(1);
							}
							iLocal_341 = 1;
						}
					}
					else
					{
						func_89();
					}
				}
				else
				{
					if (!PED::IS_PED_INJURED(iLocal_317))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_317, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_319, 0) && !HUD::DOES_BLIP_EXIST(iLocal_324))
							{
								iLocal_324 = func_90(iLocal_319, 0, 0);
							}
						}
						else if (!HUD::DOES_BLIP_EXIST(iLocal_323))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_324))
							{
								HUD::REMOVE_BLIP(&iLocal_324);
							}
							iLocal_323 = func_75(iLocal_317, 0, 145);
						}
					}
					func_46();
					func_43();
					if (!PED::IS_PED_INJURED(iLocal_317))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_317, vLocal_311, 0, 1, 0))
						{
							if (!bLocal_343)
							{
								func_42();
							}
						}
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_323))
						{
							HUD::REMOVE_BLIP(&iLocal_323);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_324))
						{
							HUD::REMOVE_BLIP(&iLocal_324);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_325))
						{
							HUD::REMOVE_BLIP(&iLocal_325);
						}
						if (PED::IS_PED_INJURED(iLocal_317) || ENTITY::IS_ENTITY_DEAD(iLocal_319, 0))
						{
							func_89();
						}
					}
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_320, 0))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_325))
						{
							HUD::REMOVE_BLIP(&iLocal_325);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_319, 0) && !HUD::DOES_BLIP_EXIST(iLocal_324))
							{
								iLocal_324 = func_90(iLocal_319, 0, 0);
							}
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_320, 0))
				{
					if (iLocal_353 >= 3)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("bulldozer")))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_325))
							{
								HUD::REMOVE_BLIP(&iLocal_325);
								if (!PED::IS_PED_INJURED(iLocal_317) && !ENTITY::IS_ENTITY_DEAD(iLocal_319, 0))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_317, 0) && !HUD::DOES_BLIP_EXIST(iLocal_324))
									{
										iLocal_324 = func_90(iLocal_319, 0, 0);
									}
								}
							}
						}
						else if (!PED::IS_PED_INJURED(iLocal_317) && !ENTITY::IS_ENTITY_DEAD(iLocal_319, 0))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_317, 0) && HUD::DOES_BLIP_EXIST(iLocal_324))
							{
								HUD::REMOVE_BLIP(&iLocal_324);
								if (!HUD::DOES_BLIP_EXIST(iLocal_325))
								{
									iLocal_325 = func_90(iLocal_320, 0, 0);
								}
							}
						}
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_317))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("bulldozer")))
						{
							iLocal_347 = 0;
							while (iLocal_347 < 11)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_327[iLocal_347]))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_327[iLocal_347], false);
								}
								iLocal_347++;
							}
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_319, 0))
				{
					if (FIRE::IS_ENTITY_ON_FIRE(iLocal_319))
					{
						iLocal_347 = 0;
						while (iLocal_347 < 11)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_327[iLocal_347]))
							{
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_327[iLocal_347], false);
							}
							iLocal_347++;
						}
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_319, false);
						if (!PED::IS_PED_INJURED(iLocal_317))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_317, 0))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_317, true);
								PED::SET_PED_CONFIG_FLAG(iLocal_317, 116, false);
								PED::SET_PED_CONFIG_FLAG(iLocal_317, 29, false);
								if (!bLocal_345)
								{
									func_40();
									SYSTEM::WAIT(0);
									func_24(&uLocal_358, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
									while (func_23())
									{
										SYSTEM::WAIT(0);
									}
									bLocal_345 = true;
								}
								if (!PED::IS_PED_INJURED(iLocal_317))
								{
									ENTITY::SET_ENTITY_HEALTH(iLocal_317, 99, 0);
								}
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_319, 0))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_319, false);
									ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_319, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
									VEHICLE::EXPLODE_VEHICLE(iLocal_319, 1, 0);
								}
								func_89();
							}
						}
					}
				}
			}
			break;
	}
}

int func_23()//Position - 0x152E
{
	if (Global_15866 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_24(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1550
{
	func_39(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_25(sParam2, iParam3, 0);
}

int func_25(char* sParam0, int iParam1, bool bParam2)//Position - 0x159E
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
					func_38();
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
		if (func_37(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_36();
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
				func_29();
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
				if (func_28())
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
			if (func_10())
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
			func_27();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_26();
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
		func_38();
	}
	return 0;
}

void func_26()//Position - 0x186A
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

void func_27()//Position - 0x189B
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

int func_28()//Position - 0x1930
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

void func_29()//Position - 0x19C9
{
	if (func_35(14))
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
		Global_14553 = func_30();
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

int func_30()//Position - 0x1A6B
{
	func_31();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_31()//Position - 0x1A84
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_34(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_33(PLAYER::PLAYER_PED_ID());
			if (func_32(iVar0) && (!func_35(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_32(Global_106565.f_2357.f_539.f_4321))
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

bool func_32(int iParam0)//Position - 0x1B81
{
	return iParam0 < 3;
}

int func_33(int iParam0)//Position - 0x1B8D
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_34(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_34(int iParam0)//Position - 0x1BCA
{
	if (func_32(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_35(int iParam0)//Position - 0x1BF4
{
	return Global_36425 == iParam0;
}

void func_36()//Position - 0x1C02
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

bool func_37(int iParam0, int iParam1)//Position - 0x1C59
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

void func_38()//Position - 0x1C94
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

void func_39(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x1CEB
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

void func_40()//Position - 0x1D41
{
	Global_14732 = 0;
	func_41();
}

void func_41()//Position - 0x1D51
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16877 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15866 = 6;
	}
}

void func_42()//Position - 0x1D72
{
	switch (iLocal_353)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_317))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_351) > 3000)
				{
					func_24(&uLocal_358, "CONACAU", "CONAC_HELP", 4, 0, 0, 0);
					iLocal_355 = MISC::GET_GAME_TIMER();
					iLocal_351 = MISC::GET_GAME_TIMER();
					iLocal_353 = 2;
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_317))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_351) > 3000)
				{
					iLocal_351 = MISC::GET_GAME_TIMER();
					iLocal_353++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_317))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_351) > 5000 && !func_23())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_356 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_317, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_320, 0))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (!PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("bulldozer")))
								{
									if (!HUD::DOES_BLIP_EXIST(iLocal_325))
									{
										iLocal_325 = func_90(iLocal_320, 0, 0);
										if (HUD::DOES_BLIP_EXIST(iLocal_324))
										{
											HUD::REMOVE_BLIP(&iLocal_324);
										}
									}
								}
							}
							else if (!HUD::DOES_BLIP_EXIST(iLocal_325))
							{
								iLocal_325 = func_90(iLocal_320, 0, 0);
								if (HUD::DOES_BLIP_EXIST(iLocal_324))
								{
									HUD::REMOVE_BLIP(&iLocal_324);
								}
							}
						}
					}
					if (iLocal_356 == joaat("bulldozer"))
					{
						func_24(&uLocal_358, "CONACAU", "CONAC_HELP2", 4, 0, 0, 0);
					}
					else
					{
						func_24(&uLocal_358, "CONACAU", "CONAC_HELP3", 4, 0, 0, 0);
					}
					iLocal_351 = MISC::GET_GAME_TIMER();
					iLocal_353++;
				}
			}
			break;
		
		case 3:
			if (MISC::GET_GAME_TIMER() - iLocal_351) > MISC::GET_RANDOM_INT_IN_RANGE(5000, 8000)
			{
				if (!func_23())
				{
					func_24(&uLocal_358, "CONACAU", "CONAC_HURRY", 4, 0, 0, 0);
					iLocal_351 = MISC::GET_GAME_TIMER();
				}
			}
			break;
	}
}

void func_43()//Position - 0x1F48
{
	switch (iLocal_349)
	{
		case 0:
			GRAPHICS::ADD_PETROL_DECAL(vLocal_526 + Vector(0f, 1f, 0f), 1f, 1f, 1f);
			SYSTEM::WAIT(0);
			GRAPHICS::_0x99AC7F0D8B9C893D(1f);
			GRAPHICS::_0x967278682CB6967A(vLocal_523, 1f);
			SYSTEM::WAIT(0);
			GRAPHICS::_0x967278682CB6967A(vLocal_523 - Vector(0f, 4f, 0f), 1f);
			SYSTEM::WAIT(0);
			GRAPHICS::_0x967278682CB6967A(vLocal_523 - Vector(0f, 8f, 0f), 1f);
			SYSTEM::WAIT(0);
			GRAPHICS::_0x967278682CB6967A(vLocal_526, 1f);
			GRAPHICS::_0x0A123435A26C36CD();
			iLocal_355 = MISC::GET_GAME_TIMER();
			iLocal_349 = 2;
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_355) > iLocal_304 || func_45())
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_533))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_533, 0);
				}
				func_44();
				if (!bLocal_345)
				{
					if (!PED::IS_PED_INJURED(iLocal_317) && !ENTITY::IS_ENTITY_DEAD(iLocal_319, 0))
					{
						if (!VEHICLE::_0x639431E895B9AA57(iLocal_317, iLocal_319, -1, 0, false) && !VEHICLE::_0x639431E895B9AA57(iLocal_317, iLocal_319, 0, 0, false))
						{
							func_40();
							SYSTEM::WAIT(0);
							func_24(&uLocal_358, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
							bLocal_345 = true;
						}
					}
				}
				MISC::ENABLE_DISPATCH_SERVICE(3, true);
				MISC::SET_DISPATCH_IDEAL_SPAWN_DISTANCE(80f);
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 0, true, 1);
				MISC::CREATE_INCIDENT(3, -539.4481f, -962.3162f, 22.4918f, 4, 0f, &uLocal_532, 0, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_349 = 3;
			}
			break;
		
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_319))
			{
				if (!FIRE::IS_ENTITY_ON_FIRE(iLocal_319))
				{
				}
			}
			if (iLocal_348 < 2)
			{
				if (SYSTEM::TIMERA() > 5000)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_319, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_319, false);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_319, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						VEHICLE::EXPLODE_VEHICLE(iLocal_319, 1, 0);
					}
				}
			}
			break;
	}
}

void func_44()//Position - 0x212B
{
	iLocal_48 = 1;
}

int func_45()//Position - 0x2136
{
	if (iLocal_222 == 1)
	{
		return 1;
	}
	return 0;
}

void func_46()//Position - 0x2149
{
	vector3 vVar0;
	
	switch (iLocal_348)
	{
		case 0:
			if (iLocal_353 >= 2)
			{
				if (!PED::IS_PED_INJURED(iLocal_317) && !ENTITY::IS_ENTITY_DEAD(iLocal_319, 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_317, 0))
					{
						iLocal_348++;
					}
					OBJECT::DELETE_OBJECT(&iLocal_340);
					if (VEHICLE::_0x639431E895B9AA57(iLocal_317, iLocal_319, -1, 0, false) || VEHICLE::_0x639431E895B9AA57(iLocal_317, iLocal_319, 0, 0, false))
					{
						if (VEHICLE::_0x639431E895B9AA57(iLocal_317, iLocal_319, -1, 0, false))
						{
							bLocal_344 = true;
							vLocal_314 = { ENTITY::GET_ENTITY_COORDS(iLocal_319, false) + Vector(0f, -1f, -3f) };
						}
						else
						{
							vLocal_314 = { ENTITY::GET_ENTITY_COORDS(iLocal_319, false) + Vector(0f, 1.5f, -3f) };
						}
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), vLocal_314, 4.2f, 4f, 5f, false, true, 0))
						{
							if (!bLocal_343)
							{
								func_40();
								SYSTEM::WAIT(0);
								func_24(&uLocal_358, "CONACAU", "CONAC_FREE", 4, 0, 0, 0);
								bLocal_343 = true;
							}
						}
						else
						{
							bLocal_343 = true;
							iLocal_348++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_317) && !ENTITY::IS_ENTITY_DEAD(iLocal_319, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_320, 0))
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_320, false, true, true, false, false, false, 0, false);
				}
				ENTITY::SET_ENTITY_PROOFS(iLocal_317, false, true, false, false, false, false, 0, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_319, false);
				BRAIN::OPEN_SEQUENCE_TASK(&iLocal_357);
				if (bLocal_344)
				{
					BRAIN::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
					BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -476.3904f, -986.836f, 22.5569f, 3f, -1, 1048576000, 0, 1193033728);
				}
				else
				{
					BRAIN::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
					BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -476.3904f, -986.836f, 22.5569f, 3f, -1, 1048576000, 0, 1193033728);
				}
				BRAIN::CLOSE_SEQUENCE_TASK(iLocal_357);
				BRAIN::TASK_PERFORM_SEQUENCE(iLocal_317, iLocal_357);
				BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_357);
				PED::SET_PED_KEEP_TASK(iLocal_317, true);
				iLocal_351 = MISC::GET_GAME_TIMER();
				iLocal_348++;
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_317))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_351) > 500 && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_317, 0))
				{
					iLocal_304 = 0;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_319, 0))
					{
					}
					func_40();
					SYSTEM::WAIT(0);
					func_24(&uLocal_358, "CONACAU", "CONAC_BOOM", 4, 0, 0, 0);
					iLocal_351 = MISC::GET_GAME_TIMER();
					iLocal_348++;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_317))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_317, -464.7217f, -989.7214f, 22.4867f, 3f, 10f, 3f, false, true, 0) || (MISC::GET_GAME_TIMER() - iLocal_351) > 10000)
				{
					func_24(&uLocal_358, "CONACAU", "CONAC_AAAH", 4, 0, 0, 0);
					iLocal_348++;
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_317))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_317, -472.7056f, -991.105f, 22.4867f, 3f, 30f, 3f, false, true, 0) || (MISC::GET_GAME_TIMER() - iLocal_351) > 10000)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_319, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_319, false);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_319, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						VEHICLE::EXPLODE_VEHICLE(iLocal_319, 1, 0);
					}
					iLocal_348++;
				}
			}
			break;
		
		case 5:
			if ((MISC::GET_GAME_TIMER() - iLocal_351) > 3000)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_319, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_319, false);
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_319, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
					VEHICLE::EXPLODE_VEHICLE(iLocal_319, 1, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_317))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RE14A_SAFE");
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_320, 0))
					{
						ENTITY::SET_ENTITY_PROOFS(iLocal_320, false, false, false, false, false, false, 0, false);
					}
					ENTITY::SET_ENTITY_PROOFS(iLocal_317, false, false, false, false, false, false, 0, false);
					PED::SET_PED_CAN_RAGDOLL(iLocal_317, 1);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_317, true);
					PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(iLocal_317, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_317, false);
					EVENT::SET_DECISION_MAKER(iLocal_317, -455129387);
					BRAIN::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					BRAIN::OPEN_SEQUENCE_TASK(&iLocal_357);
					BRAIN::TASK_PLAY_ANIM(0, "re@construction", "Out_Of_Breath", 2f, -2f, -1, 0, 0, 0, 0, 0);
					BRAIN::SET_SEQUENCE_TO_REPEAT(iLocal_357, 1);
					BRAIN::CLOSE_SEQUENCE_TASK(iLocal_357);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_317, iLocal_357);
					BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_357);
				}
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 0, true, 1);
				MISC::CREATE_INCIDENT(3, -539.4481f, -962.3162f, 22.4918f, 4, 0f, &uLocal_532, 0, 0);
				iLocal_351 = MISC::GET_GAME_TIMER();
				iLocal_348++;
			}
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_317))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_351) > 6400)
				{
					vVar0 = { -477.2774f, -990.0638f, 23.5497f };
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, false, true, 0))
						{
							vVar0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_322))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_322, -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, false, true, 0))
						{
							vVar0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_320))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_320, -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, false, true, 0))
						{
							vVar0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					BRAIN::OPEN_SEQUENCE_TASK(&iLocal_357);
					BRAIN::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 2052, 2);
					BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					BRAIN::TASK_START_SCENARIO_AT_POSITION(0, "WORLD_HUMAN_PICNIC", vVar0, 304.8172f, 0, 1, 0);
					BRAIN::CLOSE_SEQUENCE_TASK(iLocal_357);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_317, iLocal_357);
					BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_357);
					func_24(&uLocal_358, "CONACAU", "CONAC_THANK", 4, 0, 0, 0);
					func_47();
				}
			}
			else
			{
				func_89();
			}
			break;
	}
}

void func_47()//Position - 0x2751
{
	while (!func_74())
	{
		SYSTEM::WAIT(0);
	}
	func_70(func_30(), 4, 2);
	func_51(-1, 0);
	func_48();
	iLocal_301 = 2;
}

void func_48()//Position - 0x2781
{
	func_49();
}

int func_49()//Position - 0x278E
{
	if (func_50(0))
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

bool func_50(bool bParam0)//Position - 0x27D9
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71838, 0);
}

void func_51(int iParam0, int iParam1)//Position - 0x2804
{
	if (iParam0 == -1)
	{
		iParam0 = func_68();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_67(iParam0))
	{
		func_66(iParam0, iParam1);
		if (!func_65(51))
		{
			func_61("RE_REWARD", 1, 0, 4000, 10000, func_64(), 0, 138, 0);
			func_60(51);
		}
		if (func_59(iParam0))
		{
			Global_106565.f_24989.f_2 = 3;
		}
		if (func_58(iParam0, iParam1) != 322)
		{
			func_53(func_58(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_106553 = iParam1;
		if (Global_106551 == 0)
		{
			if (((Global_106554 == 1 || Global_106554 == 5) || Global_106554 == 11) || Global_106554 == 25)
			{
				func_52(2);
			}
			else if ((Global_106554 == 26 || Global_106554 == 8) || Global_106554 == 17)
			{
				func_52(7);
			}
			else
			{
				func_52(1);
			}
		}
	}
}

void func_52(int iParam0)//Position - 0x2908
{
	Global_106551 = iParam0;
}

void func_53(int iParam0, var uParam1, var uParam2)//Position - 0x2916
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
		func_57((891 + iParam0), 1, -1, 1);
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
		func_54();
	}
}

void func_54()//Position - 0x29FE
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
		func_56(13, SYSTEM::FLOOR(Global_106565.f_10188.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_71590)
		{
			if (func_55() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_49();
				}
			}
		}
	}
}

int func_55()//Position - 0x2EBF
{
	return Global_25765;
}

int func_56(int iParam0, int iParam1)//Position - 0x2ECA
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

int func_57(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x2F1B
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
		iParam2 = func_6();
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

int func_58(int iParam0, int iParam1)//Position - 0x34D1
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

int func_59(int iParam0)//Position - 0x3845
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

void func_60(int iParam0)//Position - 0x3874
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

void func_61(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x38B6
{
	func_62(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_62(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x38D7
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
		func_63();
	}
}

void func_63()//Position - 0x3AAA
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

int func_64()//Position - 0x3BCA
{
	func_31();
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

int func_65(int iParam0)//Position - 0x3C10
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

void func_66(int iParam0, int iParam1)//Position - 0x3C53
{
	MISC::SET_BIT(&(Global_106565.f_24989.f_8[iParam0]), iParam1);
}

int func_67(int iParam0)//Position - 0x3C6E
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

int func_68()//Position - 0x3D1F
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_69(Var0);
	return uVar16;
}

int func_69(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x3D3C
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

void func_70(int iParam0, int iParam1, int iParam2)//Position - 0x3F16
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_106565.f_2357.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_106565.f_2357.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 10383;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 10383)
			{
				iVar0 = func_73(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_71(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x4006
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_72(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_72(var uParam0)//Position - 0x4036
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
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

int func_73(int iParam0, int iParam1, int iParam2)//Position - 0x406A
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_72(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_74()//Position - 0x409C
{
	return 1;
}

int func_75(int iParam0, bool bParam1, int iParam2)//Position - 0x40A5
{
	int iVar0;
	
	iVar0 = func_76(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_106565.f_28044[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_106565.f_28044[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_76(int iParam0, bool bParam1, bool bParam2)//Position - 0x40F7
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_77(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_77(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_77(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_77(bool bParam0, float fParam1, float fParam2)//Position - 0x419B
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_78(int iParam0)//Position - 0x41B2
{
	if (func_82())
	{
		Global_106555 = 1;
		Global_106552 = MISC::GET_GAME_TIMER();
		if (func_59(Global_106554))
		{
			func_79(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_59(Global_106554))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_79(int iParam0)//Position - 0x4205
{
	switch (iParam0)
	{
		case 0:
			if (Global_106565.f_24989.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_80(func_81(iParam0), -1);
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
					func_80(func_81(iParam0), -1);
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
					func_80(func_81(iParam0), -1);
					Global_106565.f_24989.f_4++;
					MISC::SET_BIT(&Global_106561, 2);
				}
			}
			break;
	}
}

void func_80(char* sParam0, int iParam1)//Position - 0x42E6
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

char* func_81(int iParam0)//Position - 0x42FD
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

int func_82()//Position - 0x4340
{
	switch (func_83(&Global_25824, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_83(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x4376
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
		if (func_87(0))
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
		if (!func_85(iParam2))
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
			func_84(uParam0, iParam4);
		}
	}
	return 2;
}

void func_84(var uParam0, int iParam1)//Position - 0x44AD
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

bool func_85(int iParam0)//Position - 0x44FC
{
	return func_86(iParam0, Global_36425);
}

int func_86(int iParam0, int iParam1)//Position - 0x450D
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

int func_87(int iParam0)//Position - 0x46EE
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_85(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_88(bool bParam0, bool bParam1, bool bParam2)//Position - 0x4710
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

void func_89()//Position - 0x47F5
{
	AUDIO::TRIGGER_MUSIC_EVENT("RE14A_FAIL");
	iLocal_301 = 2;
}

int func_90(int iParam0, bool bParam1, bool bParam2)//Position - 0x4809
{
	return func_76(iParam0, !bParam1, bParam2);
}

void func_91()//Position - 0x481C
{
	if (func_94(1000))
	{
		func_40();
		CAM::DO_SCREEN_FADE_OUT(800);
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_319, 0))
		{
			VEHICLE::SET_VEHICLE_DAMAGE(iLocal_319, 0f, 1f, 1f, 200f, 800f, 1);
		}
		bLocal_536 = true;
		iLocal_303 = 8;
	}
	switch (iLocal_303)
	{
		case 0:
			func_2(1, 1, 1, 0, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			HUD::CLEAR_ALL_HELP_MESSAGES();
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true, 0);
			}
			MISC::CLEAR_AREA_OF_PEDS(vLocal_308, 50f, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(vLocal_308, 30f, 0, 0, 0, 0, false, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(vLocal_308, 100f, 0);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), vLocal_308, 8f, 8f, 8f, false, true, 0))
				{
					iLocal_321 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_321, true, 0);
					VEHICLE::DELETE_VEHICLE(&iLocal_321);
				}
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -473.1686f, -984.6405f, 22.487f, 15f, 15f, 5f, false, true, 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -477.3538f, -972.67f, 22.5494f, 1, false, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 237.4839f);
			}
			iLocal_530 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -462.711f, -992.5728f, 23.8729f, -0.1371f, -0.0346f, -29.6605f, 28f, 1, 2);
			iLocal_531 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -462.711f, -992.5728f, 23.8729f, 69.4831f, -0.0346f, -40.8884f, 28f, 1, 2);
			CAM::SHAKE_CAM(iLocal_530, "HAND_SHAKE", 0.3f);
			CAM::SHAKE_CAM(iLocal_531, "HAND_SHAKE", 0.3f);
			func_93();
			CAM::SET_CAM_ACTIVE(iLocal_530, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
			SYSTEM::WAIT(500);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_531, iLocal_530, 3500, 1, 1);
			AUDIO::TRIGGER_MUSIC_EVENT("RE14A_START");
			iLocal_354 = MISC::GET_GAME_TIMER();
			iLocal_303 = 1;
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - iLocal_354) > 3500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAKEN", "CONSTRUCTION_ACCIDENT_1_SOUNDS", true);
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_350, "WIND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", true);
				OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(iLocal_327[0], 1);
				func_92(iLocal_530);
				func_92(iLocal_531);
				iLocal_530 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -455.4617f, -990.631f, 61.6885f, -89.0761f, -0.0146f, -49.881f, 80.5355f, 1, 2);
				iLocal_531 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -455.4543f, -990.6208f, 61.012f, -89.0759f, -0.0146f, -47.8226f, 80.5355f, 1, 2);
				CAM::SHAKE_CAM(iLocal_530, "HAND_SHAKE", 0.3f);
				CAM::SHAKE_CAM(iLocal_531, "HAND_SHAKE", 0.3f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_531, iLocal_530, 4000, 1, 0);
				if (!PED::IS_PED_INJURED(iLocal_317))
				{
					BRAIN::CLEAR_PED_TASKS(iLocal_317);
					BRAIN::TASK_LOOK_AT_COORD(iLocal_317, -461.4785f, -984.8583f, 28.0809f, 30000, 2080, 2);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_340))
				{
					ENTITY::DETACH_ENTITY(iLocal_340, 1, true);
					OBJECT::DELETE_OBJECT(&iLocal_340);
				}
				iLocal_354 = MISC::GET_GAME_TIMER();
				iLocal_303 = 2;
			}
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_354) > 1500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CABLE_SNAPS", "CONSTRUCTION_ACCIDENT_1_SOUNDS", true);
				iLocal_354 = MISC::GET_GAME_TIMER();
				iLocal_303 = 3;
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_354) > 500)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_327[0]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_327[0], false);
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_327[0], 0, 0f, 0f, 5f, 0f, -2f, 2f, 0, 1, 1, 1, 0, 1);
					OBJECT::_0xE7E4C198B0185900(iLocal_327[0], 11, 0);
					OBJECT::_0xE7E4C198B0185900(iLocal_327[0], 18, 0);
					OBJECT::_0xE7E4C198B0185900(iLocal_327[0], 19, 0);
					OBJECT::_0xE7E4C198B0185900(iLocal_327[0], 23, 0);
					OBJECT::_0xE7E4C198B0185900(iLocal_327[0], 9, 0);
					OBJECT::_0xE7E4C198B0185900(iLocal_327[0], 12, 0);
					OBJECT::_0xE7E4C198B0185900(iLocal_327[0], 17, 0);
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_reconstruct_pipefall_debris", iLocal_327[0], 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				}
				iLocal_354 = MISC::GET_GAME_TIMER();
				iLocal_303 = 4;
			}
			break;
		
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_354) > 2000)
			{
				func_92(iLocal_530);
				func_92(iLocal_531);
				iLocal_530 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -470.5648f, -976.951f, 24.2657f, 25.437f, -0.0087f, -118.3831f, 34f, 1, 2);
				iLocal_531 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -470.5648f, -976.951f, 24.2657f, 2.0695f, -0.0087f, -120.2811f, 34f, 1, 2);
				CAM::SHAKE_CAM(iLocal_530, "HAND_SHAKE", 0.3f);
				CAM::SHAKE_CAM(iLocal_531, "HAND_SHAKE", 0.3f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_531, iLocal_530, 1000, 3, 3);
				AUDIO::STOP_SOUND(iLocal_350);
				iLocal_354 = MISC::GET_GAME_TIMER();
				iLocal_303 = 5;
			}
			break;
		
		case 5:
			if ((MISC::GET_GAME_TIMER() - iLocal_354) > 500)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_319, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_319, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "PIPES_LAND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", true);
					VEHICLE::SET_VEHICLE_DAMAGE(iLocal_319, 0f, 1f, 1f, 200f, 800f, 1);
					if (!PED::IS_PED_INJURED(iLocal_317))
					{
						BRAIN::TASK_CLEAR_LOOK_AT(iLocal_317);
					}
					BRAIN::TASK_PLAY_ANIM(iLocal_317, "re@construction", "idle_panic", 8f, -8f, -1, 16, 0, 0, 0, 0);
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_reconstruct_pipe_impact", iLocal_319, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					func_24(&uLocal_358, "CONACAU", "CONAC_SCREAM", 4, 0, 0, 0);
					if (CAM::DOES_CAM_EXIST(iLocal_530) && CAM::DOES_CAM_EXIST(iLocal_531))
					{
						CAM::SHAKE_CAM(iLocal_530, "HAND_SHAKE", 1.5f);
						CAM::SHAKE_CAM(iLocal_531, "HAND_SHAKE", 1.5f);
					}
					iLocal_354 = MISC::GET_GAME_TIMER();
					iLocal_303 = 6;
				}
			}
			break;
		
		case 6:
			if ((MISC::GET_GAME_TIMER() - iLocal_354) > 500)
			{
				func_92(iLocal_530);
				func_92(iLocal_531);
				iLocal_530 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -459.2609f, -987.5602f, 24.2611f, 0.583f, 0.2617f, -32.7532f, 49.9914f, 1, 2);
				iLocal_531 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -459.0622f, -987.2584f, 24.2661f, 5.0301f, 0.2617f, -36.7308f, 49.9914f, 1, 2);
				CAM::SHAKE_CAM(iLocal_530, "HAND_SHAKE", 0.5f);
				CAM::SHAKE_CAM(iLocal_531, "HAND_SHAKE", 0.5f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_531, iLocal_530, 2500, 3, 3);
				if (!PED::IS_PED_INJURED(iLocal_317))
				{
					BRAIN::TASK_LOOK_AT_COORD(iLocal_317, ENTITY::GET_ENTITY_COORDS(iLocal_317, true) - Vector(10f, 0f, 2f), 30000, 2080, 2);
				}
				iLocal_354 = MISC::GET_GAME_TIMER();
				iLocal_303 = 7;
			}
			break;
		
		case 7:
			if ((MISC::GET_GAME_TIMER() - iLocal_354) > 2200 && !iLocal_346)
			{
				if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4))
				{
					GRAPHICS::_START_SCREEN_EFFECT("CamPushInNeutral", 0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					iLocal_346 = 1;
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_354) > 2500)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_319, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_319, true);
				}
				iLocal_303 = 8;
			}
			break;
		
		case 8:
			AUDIO::TRIGGER_MUSIC_EVENT("RE14A_PIPES");
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_327[0]))
			{
				OBJECT::DELETE_OBJECT(&(iLocal_327[0]));
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_319, 0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_319, 250f);
				ENTITY::SET_ENTITY_COORDS(iLocal_319, vLocal_308, 1, false, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_319, 80f);
				MISC::CLEAR_AREA_OF_OBJECTS(vLocal_308, 50f, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_317))
			{
				BRAIN::CLEAR_PED_TASKS(iLocal_317);
				BRAIN::TASK_CLEAR_LOOK_AT(iLocal_317);
				BRAIN::TASK_PLAY_ANIM(iLocal_317, "re@construction", "idle_panic", 8f, -8f, -1, 1, 0, 0, 0, 0);
			}
			CAM::SET_CAM_ACTIVE(iLocal_530, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
			CAM::DESTROY_CAM(iLocal_530, 0);
			CAM::DESTROY_CAM(iLocal_531, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			HUD::DISPLAY_RADAR(true);
			HUD::DISPLAY_HUD(true);
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
			func_2(0, 1, 1, 0, 0, 0);
			iLocal_351 = MISC::GET_GAME_TIMER();
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(1668676931);
			iLocal_327[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -457.8815f, -988.9059f, 22.9554f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_327[1], -0.1939f, 105.0058f, 77.3964f, 2, 1);
			iLocal_327[2] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -451.5131f, -986.8079f, 24.6947f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_327[2], 24.3941f, 32.5423f, 80.6862f, 2, 1);
			iLocal_327[3] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -450.8099f, -985.9972f, 24.7104f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_327[3], 24.1841f, 110.287f, 78.4357f, 2, 1);
			iLocal_327[4] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -456.6558f, -987.3979f, 22.9537f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_327[4], -0.0264f, 29.5754f, 79.1811f, 2, 1);
			iLocal_327[5] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -456.1279f, -988.4162f, 22.9889f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_327[5], -0.6337f, 108.4339f, 77.9539f, 2, 1);
			iLocal_327[6] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -457.0807f, -987.3059f, 23.7564f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_327[6], 0.0929f, 74.2657f, 79.3839f, 2, 1);
			iLocal_327[7] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -456.6558f, -983.7804f, 22.9712f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_327[7], -0.0264f, 29.5754f, 80.9061f, 2, 1);
			iLocal_327[8] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -455.3279f, -983.1712f, 22.9564f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_327[8], -0.1087f, 109.7339f, 80.9789f, 2, 1);
			iLocal_327[9] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -456.1632f, -983.9359f, 23.7964f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_327[9], -0.3321f, 74.1907f, 81.6089f, 2, 1);
			iLocal_327[10] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -454.644f, -994.1709f, 23.3329f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_327[10], 5.7811f, 104.6058f, 104.6964f, 2, 1);
			iLocal_347 = 0;
			while (iLocal_347 < 11)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_327[iLocal_347]))
				{
					ENTITY::SET_ENTITY_DYNAMIC(iLocal_327[iLocal_347], 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_327[iLocal_347], true);
				}
				iLocal_347++;
			}
			if (bLocal_536)
			{
				CAM::DO_SCREEN_FADE_IN(800);
				while (CAM::IS_SCREEN_FADING_IN())
				{
					SYSTEM::WAIT(0);
				}
			}
			iLocal_342 = 1;
			iLocal_341 = 0;
			break;
	}
}

void func_92(int iParam0)//Position - 0x5365
{
	if (CAM::DOES_CAM_EXIST(iParam0))
	{
		CAM::DESTROY_CAM(iParam0, 0);
	}
}

void func_93()//Position - 0x537D
{
	AUDIO::START_PRELOADED_CONVERSATION();
	Global_16858 = 0;
}

int func_94(int iParam0)//Position - 0x538D
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((MISC::GET_GAME_TIMER() - Global_28) > iParam0)
		{
			Global_27 = MISC::GET_GAME_TIMER();
		}
		Global_28 = MISC::GET_GAME_TIMER();
		if ((MISC::GET_GAME_TIMER() - Global_27) > iParam0)
		{
			if (func_95())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_95()//Position - 0x53D7
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_96(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x5409
{
	func_39(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_16859 = 1;
	Global_16863 = 0;
	Global_16861 = iParam7;
	Global_2621441 = 0;
	return func_25(sParam2, iParam3, 0);
}

void func_97(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x545C
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

int func_98(var uParam0)//Position - 0x54F7
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
			if (!func_99(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_99(var uParam0)//Position - 0x5559
{
	return func_100(*uParam0, "NULL", uParam0->f_1);
}

int func_100(int iParam0, char* sParam1, int iParam2)//Position - 0x556E
{
	if (MISC::IS_BIT_SET(iParam0, 30))
	{
		if (MISC::IS_BIT_SET(iParam0, 29))
		{
			switch (func_101(iParam0))
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

int func_101(int iParam0)//Position - 0x5662
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

void func_102(var uParam0)//Position - 0x568E
{
	func_103(uParam0, 9, -1, 0);
}

void func_103(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x56A0
{
	int iVar0;
	
	if (!func_104(iParam1))
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

int func_104(int iParam0)//Position - 0x5763
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

void func_105(var uParam0, int iParam1)//Position - 0x5802
{
	func_103(uParam0, 0, iParam1, 0);
}

void func_106(var uParam0)//Position - 0x5814
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
						func_107(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_107(int iParam0)//Position - 0x589E
{
	func_108(iParam0, "NULL", iParam0->f_1);
}

void func_108(int iParam0, char* sParam1, int iParam2)//Position - 0x58B2
{
	if (MISC::IS_BIT_SET(*iParam0, 30))
	{
		switch (func_101(*iParam0))
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

void func_109()//Position - 0x598C
{
	int iVar0;
	
	func_105(&Local_537, joaat("bulldozer"));
	func_105(&Local_537, joaat("utillitruck2"));
	func_105(&Local_537, 1668676931);
	if (func_98(&Local_537))
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("utillitruck2"), true);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		PED::ADD_SCENARIO_BLOCKING_AREA(vLocal_305 + Vector(50f, 50f, 50f), vLocal_305 - Vector(50f, 50f, 50f), 0, 1, 1, 1);
		vLocal_308 = { -455.6561f, -985.8071f, 22.4868f };
		iLocal_319 = VEHICLE::CREATE_VEHICLE(joaat("utillitruck2"), vLocal_308, 80f, true, true, false);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_319, false, true, 0);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_319, 3);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_319, 1, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_319, 2, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_319, 3, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_319, 4, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_319, 5, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_319, 6, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_319, 7, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_319, true);
		ENTITY::SET_ENTITY_PROOFS(iLocal_319, false, false, false, true, false, false, 0, false);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_319, 10000);
		VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_319, 5f);
		iLocal_320 = VEHICLE::CREATE_VEHICLE(joaat("bulldozer"), -472.9444f, -966.671f, 22.5534f, 181.8365f, true, true, false);
		MISC::CLEAR_AREA(vLocal_308, 10f, 1, 0, 0, false);
		iLocal_327[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(1668676931, -453.2f, -986.1f, 59.45f, true, true, false);
		ENTITY::SET_ENTITY_HEADING(iLocal_327[0], 90f);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_327[0], true);
		ENTITY::SET_ENTITY_PROOFS(iLocal_327[0], true, true, true, true, false, false, 0, false);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_327[0], 10000000);
		Local_229[0 /*5*/] = { vLocal_526 };
		Local_229[1 /*5*/] = { vLocal_526 + Vector(0f, 0.5f, 0f) };
		Local_229[2 /*5*/] = { vLocal_526 + Vector(0f, 1f, 0f) };
		Local_229[3 /*5*/] = { vLocal_526 + Vector(0f, 2.5f, 0f) };
		Local_229[4 /*5*/] = { vLocal_526 + Vector(0f, 3f, 0f) };
		Local_229[5 /*5*/] = { vLocal_526 + Vector(0f, 3.5f, 0f) };
		Local_229[6 /*5*/] = { vLocal_526 + Vector(0f, 4f, 0f) };
		Local_229[7 /*5*/] = { vLocal_526 + Vector(0f, 4.5f, 0f) };
		Local_229[8 /*5*/] = { vLocal_526 + Vector(0f, 5f, 0f) };
		Local_229[9 /*5*/] = { vLocal_526 + Vector(0f, 5.5f, 0f) };
		Local_229[10 /*5*/] = { vLocal_526 + Vector(0f, 6f, 0f) };
		Local_229[11 /*5*/] = { vLocal_526 + Vector(0f, 6.5f, 0f) };
		Local_229[12 /*5*/] = { vLocal_526 + Vector(0f, 7f, 0f) };
		Local_229[13 /*5*/] = { vLocal_523 };
		iVar0 = 0;
		while (iVar0 < Local_229)
		{
			Local_229[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_326))
		{
		}
		func_110(&Local_537, 0);
		iLocal_534 = 1;
		iLocal_301 = 1;
	}
}

void func_110(var uParam0, bool bParam1)//Position - 0x5C72
{
	int iVar0;
	
	if (!bParam1)
	{
		func_112(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_111(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_111(var uParam0)//Position - 0x5CB2
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_112(var uParam0)//Position - 0x5CC3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			func_113(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_113(var uParam0)//Position - 0x5CFC
{
	func_114(*uParam0, "NULL", uParam0->f_1);
}

void func_114(int iParam0, char* sParam1, int iParam2)//Position - 0x5D11
{
	if (MISC::IS_BIT_SET(iParam0, 30))
	{
		switch (func_101(iParam0))
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

int func_115()//Position - 0x5DD1
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_126())
		{
			return 0;
		}
	}
	if (func_122())
	{
		return 1;
	}
	if (func_116(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_116(float fParam0, bool bParam1)//Position - 0x5E57
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
		if (func_32(func_30()))
		{
			iVar36 = func_64();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (MISC::IS_BIT_SET(Global_106565.f_18568[iVar32 /*6*/], 2) && !MISC::IS_BIT_SET(Global_106565.f_18568[iVar32 /*6*/], 3))
				{
					func_117(iVar32, &Var0);
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

void func_117(int iParam0, var uParam1)//Position - 0x5F0E
{
	switch (iParam0)
	{
		case 0:
			func_118(uParam1, "Abigail1", func_120(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 1:
			func_118(uParam1, "Abigail2", func_120(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 2:
			func_118(uParam1, "Barry1", func_120(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 3:
			func_118(uParam1, "Barry2", func_120(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 4:
			func_118(uParam1, "Barry3", func_120(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 5:
			func_118(uParam1, "Barry3A", func_120(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 6:
			func_118(uParam1, "Barry3C", func_120(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 7:
			func_118(uParam1, "Barry4", func_120(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_119(iParam0), 0, 0);
			break;
		
		case 8:
			func_118(uParam1, "Dreyfuss1", func_120(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 9:
			func_118(uParam1, "Epsilon1", func_120(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 10:
			func_118(uParam1, "Epsilon2", func_120(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 11:
			func_118(uParam1, "Epsilon3", func_120(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 12:
			func_118(uParam1, "Epsilon4", func_120(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 13:
			func_118(uParam1, "Epsilon5", func_120(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 14:
			func_118(uParam1, "Epsilon6", func_120(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 15:
			func_118(uParam1, "Epsilon7", func_120(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 16:
			func_118(uParam1, "Epsilon8", func_120(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 17:
			func_118(uParam1, "Extreme1", func_120(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 18:
			func_118(uParam1, "Extreme2", func_120(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 19:
			func_118(uParam1, "Extreme3", func_120(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 20:
			func_118(uParam1, "Extreme4", func_120(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 21:
			func_118(uParam1, "Fanatic1", func_120(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_119(iParam0), 1, 0);
			break;
		
		case 22:
			func_118(uParam1, "Fanatic2", func_120(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_119(iParam0), 1, 0);
			break;
		
		case 23:
			func_118(uParam1, "Fanatic3", func_120(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_119(iParam0), 0, 1);
			break;
		
		case 24:
			func_118(uParam1, "Hao1", func_120(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_119(iParam0), 0, 1);
			break;
		
		case 25:
			func_118(uParam1, "Hunting1", func_120(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 26:
			func_118(uParam1, "Hunting2", func_120(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 27:
			func_118(uParam1, "Josh1", func_120(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 28:
			func_118(uParam1, "Josh2", func_120(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 29:
			func_118(uParam1, "Josh3", func_120(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 30:
			func_118(uParam1, "Josh4", func_120(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 31:
			func_118(uParam1, "Maude1", func_120(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 32:
			func_118(uParam1, "Minute1", func_120(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 33:
			func_118(uParam1, "Minute2", func_120(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 34:
			func_118(uParam1, "Minute3", func_120(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 35:
			func_118(uParam1, "MrsPhilips1", func_120(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 36:
			func_118(uParam1, "MrsPhilips2", func_120(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 37:
			func_118(uParam1, "Nigel1", func_120(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 38:
			func_118(uParam1, "Nigel1A", func_120(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 39:
			func_118(uParam1, "Nigel1B", func_120(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_119(iParam0), 1, 1);
			break;
		
		case 40:
			func_118(uParam1, "Nigel1C", func_120(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_119(iParam0), 1, 1);
			break;
		
		case 41:
			func_118(uParam1, "Nigel1D", func_120(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_119(iParam0), 1, 1);
			break;
		
		case 42:
			func_118(uParam1, "Nigel2", func_120(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 43:
			func_118(uParam1, "Nigel3", func_120(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 44:
			func_118(uParam1, "Omega1", func_120(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 45:
			func_118(uParam1, "Omega2", func_120(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 46:
			func_118(uParam1, "Paparazzo1", func_120(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 47:
			func_118(uParam1, "Paparazzo2", func_120(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 48:
			func_118(uParam1, "Paparazzo3", func_120(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 49:
			func_118(uParam1, "Paparazzo3A", func_120(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 50:
			func_118(uParam1, "Paparazzo3B", func_120(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 51:
			func_118(uParam1, "Paparazzo4", func_120(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 52:
			func_118(uParam1, "Rampage1", func_120(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 54:
			func_118(uParam1, "Rampage3", func_120(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 55:
			func_118(uParam1, "Rampage4", func_120(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 56:
			func_118(uParam1, "Rampage5", func_120(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 53:
			func_118(uParam1, "Rampage2", func_120(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 57:
			func_118(uParam1, "TheLastOne", func_120(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 58:
			func_118(uParam1, "Tonya1", func_120(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 59:
			func_118(uParam1, "Tonya2", func_120(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 60:
			func_118(uParam1, "Tonya3", func_120(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 61:
			func_118(uParam1, "Tonya4", func_120(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 62:
			func_118(uParam1, "Tonya5", func_120(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_118(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0x70C3
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

int func_119(int iParam0)//Position - 0x7154
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

struct<2> func_120(int iParam0)//Position - 0x749A
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_121(iParam0) };
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

struct<2> func_121(int iParam0)//Position - 0x74D1
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

int func_122()//Position - 0x791D
{
	if (func_125() && !func_126())
	{
		return 1;
	}
	if (func_124() && func_123())
	{
		return 1;
	}
	return 0;
}

bool func_123()//Position - 0x794F
{
	return Global_106283 > 0;
}

int func_124()//Position - 0x795D
{
	if (Global_90634 != -1)
	{
		return 1;
	}
	return 0;
}

int func_125()//Position - 0x7972
{
	if (Global_90634 != -1)
	{
		return MISC::IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 20);
	}
	return 0;
}

int func_126()//Position - 0x7998
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

int func_127()//Position - 0x79B5
{
	if (!func_85(5))
	{
		return 1;
	}
	if (func_122())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_126())
		{
			return 0;
		}
	}
	if (func_116(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_128()//Position - 0x7A17
{
	if ((Global_106554 == func_68() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_106555)
	{
		return 1;
	}
	return 0;
}

void func_129(int iParam0)//Position - 0x7A42
{
	if (iParam0 == -1)
	{
		iParam0 = func_68();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_131(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_106551 = 0;
	func_130();
}

void func_130()//Position - 0x7A78
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

void func_131(int iParam0)//Position - 0x7AB5
{
	Global_106554 = iParam0;
}

int func_132(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x7AC3
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
		iParam3 = func_68();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_173())
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
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_126())
			{
				return 0;
			}
		}
		if (!Global_106565.f_9079)
		{
			return 0;
		}
		if (func_50(0))
		{
			return 0;
		}
		if (func_122())
		{
			return 0;
		}
		if (func_172())
		{
			return 0;
		}
		if (Global_106554 != -1)
		{
			return 0;
		}
		if (func_32(func_30()))
		{
			if (func_116(100f, 1) != -1)
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
		if (!func_171(iParam3))
		{
			return 0;
		}
		if (func_32(func_30()))
		{
			if (func_170(func_30()) == 4 || func_170(func_30()) == 5)
			{
				return 0;
			}
		}
		if (func_32(func_30()))
		{
			if (!func_169(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_168(Global_106565.f_24989.f_43[iParam3]))
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
		if (func_167())
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
		if (!func_158(4))
		{
			return 0;
		}
		if (!func_85(5))
		{
			return 0;
		}
		if (func_157(iParam3, iParam4) && !bParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_157(0, 0))
		{
			return 0;
		}
		if (Global_25911)
		{
			return 0;
		}
		if (func_171(30) && !func_157(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_32(func_30()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_106565.f_2357.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_106565.f_2357.f_539.f_2296[iVar4];
				if (func_156(iVar8))
				{
					if (func_134(iVar4))
					{
						if (!func_133(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vVar5) < (210f * 210f))
							{
								if (func_30() != iVar4)
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

bool func_133(vector3 vParam0, vector3 vParam3, bool bParam6)//Position - 0x7E5D
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_134(int iParam0)//Position - 0x7EA4
{
	int iVar0;
	
	iVar0 = Global_106565.f_2357.f_539.f_2296[iParam0];
	return func_135(iVar0);
}

int func_135(int iParam0)//Position - 0x7EC5
{
	return func_136(iParam0, 1);
}

int func_136(int iParam0, int iParam1)//Position - 0x7ED4
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_156(iParam0))
	{
		return 0;
	}
	func_137(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_137(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x7F27
{
	func_138(func_149(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_138(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x7F45
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_148(iParam0, iParam1))
	{
		iVar0 = func_147(iParam1);
		iVar1 = func_145(iParam0);
		iVar2 = (func_145(iParam0) - func_145(iParam1));
		iVar3 = (func_147(iParam0) - func_147(iParam1));
		iVar4 = (func_144(iParam0) - func_144(iParam1));
		iVar5 = (func_143(iParam0) - func_143(iParam1));
		iVar6 = (func_142(iParam0) - func_142(iParam1));
		iVar7 = (func_141(iParam0) - func_141(iParam1));
	}
	else
	{
		iVar0 = func_147(iParam0);
		iVar1 = func_145(iParam1);
		iVar2 = (func_145(iParam1) - func_145(iParam0));
		iVar3 = (func_147(iParam1) - func_147(iParam0));
		iVar4 = (func_144(iParam1) - func_144(iParam0));
		iVar5 = (func_143(iParam1) - func_143(iParam0));
		iVar6 = (func_142(iParam1) - func_142(iParam0));
		iVar7 = (func_141(iParam1) - func_141(iParam0));
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
		iVar4 = (iVar4 + func_140(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_139(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_139(float fParam0, float fParam1, float fParam2)//Position - 0x8147
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

int func_140(int iParam0, int iParam1)//Position - 0x8189
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

int func_141(int iParam0)//Position - 0x822B
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_142(int iParam0)//Position - 0x823E
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_143(int iParam0)//Position - 0x8251
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_144(int iParam0)//Position - 0x8264
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_145(int iParam0)//Position - 0x8276
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_146(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_146(bool bParam0, int iParam1, int iParam2)//Position - 0x829B
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_147(int iParam0)//Position - 0x82B2
{
	return iParam0 & 15;
}

int func_148(int iParam0, int iParam1)//Position - 0x82BF
{
	int iVar0;
	int iVar1;
	
	if (!func_156(iParam1) || !func_156(iParam0))
	{
		return 1;
	}
	iVar0 = func_145(iParam0);
	iVar1 = func_145(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_147(iParam0);
	iVar1 = func_147(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	iVar1 = func_144(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_143(iParam0);
	iVar1 = func_143(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_142(iParam0);
	iVar1 = func_142(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_141(iParam0);
	iVar1 = func_141(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_149()//Position - 0x83CB
{
	var uVar0;
	
	func_155(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_154(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_153(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_152(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_151(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_150(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_150(var uParam0, int iParam1)//Position - 0x8411
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

void func_151(var uParam0, int iParam1)//Position - 0x8497
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_152(var uParam0, int iParam1)//Position - 0x84CA
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_147(*uParam0);
	iVar1 = func_145(*uParam0);
	if (iParam1 < 1 || iParam1 > func_140(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_153(var uParam0, int iParam1)//Position - 0x851B
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_154(var uParam0, int iParam1)//Position - 0x8555
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_155(var uParam0, int iParam1)//Position - 0x8590
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_156(int iParam0)//Position - 0x85CC
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
	iVar0 = func_141(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_142(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_143(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_145(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_147(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_144(iParam0);
	if (iVar5 < 1 || iVar5 > func_140(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_157(int iParam0, int iParam1)//Position - 0x86A8
{
	if (MISC::IS_BIT_SET(Global_106565.f_24989.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_158(int iParam0)//Position - 0x86CB
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_30();
				if (!func_32(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_166()) || Global_105612) || Global_25767) || func_165()) || func_37(8, -1)) || func_164()) || func_163()) || func_162()) || func_161()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_166()) || Global_25767) || func_165()) || func_37(8, -1)) || func_162()) || func_164()) || func_163()) || func_161()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_166()) || Global_105612) || Global_25767) || func_165()) || func_37(8, -1)) || func_162()) || func_164()) || func_163()) || func_161()) || Global_106565.f_7682.f_919[iVar0] == 5) || Global_36972 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_166()) || Global_105612) || Global_25767) || func_165()) || func_37(8, -1)) || func_164()) || func_163()) || func_161()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_166() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_37(8, -1)) || func_161()) || func_160()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_37(8, -1) || func_164()) || func_163()) || func_160()) || func_159())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_166()) || Global_25767) || func_165()) || func_37(8, -1)) || func_163()) || func_162()) || func_161()) || Global_106565.f_7682.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_166()) || func_163()) || Global_105612) || Global_25767) || func_165()) || Global_37584) || func_37(8, -1)) || func_162()) || func_160()) || func_161()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_166()) || Global_105612) || Global_25767) || func_165()) || func_37(8, -1)) || func_162()) || func_160()) || func_164()) || func_163()) || func_161())
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

var func_159()//Position - 0x8DE8
{
	return Global_93721.f_1;
}

int func_160()//Position - 0x8DF6
{
	if (Global_90634 != -1)
	{
		return MISC::IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 13);
	}
	return 0;
}

int func_161()//Position - 0x8E1C
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_162()//Position - 0x8E36
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

bool func_163()//Position - 0x8E60
{
	return Global_93734.f_340 > 0;
}

bool func_164()//Position - 0x8E71
{
	return Global_93734.f_339 > 0;
}

var func_165()//Position - 0x8E82
{
	return Global_1312867;
}

int func_166()//Position - 0x8E8E
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

int func_167()//Position - 0x8EAA
{
	func_29();
	if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_168(int iParam0)//Position - 0x8ED2
{
	return func_148(func_149(), iParam0);
}

int func_169(int iParam0, int iParam1, int iParam2)//Position - 0x8EE4
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_30();
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

int func_170(int iParam0)//Position - 0x8FC8
{
	if (!func_32(iParam0))
	{
		return 7;
	}
	return Global_106565.f_7682.f_919[iParam0];
}

bool func_171(int iParam0)//Position - 0x8FEC
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_173())
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

int func_172()//Position - 0x904A
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

int func_173()//Position - 0x908E
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

void func_174()//Position - 0x9149
{
	if (iLocal_534)
	{
		if (!iLocal_535)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("RE14A_FAIL");
			func_210();
			if (!PED::IS_PED_INJURED(iLocal_317))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_317, 317, true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_322, 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_322, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_322, 50f, 50f, 50f, 0, 1, 0))
				{
					func_186(iLocal_322, 0, 145);
				}
			}
			iLocal_347 = 0;
			while (iLocal_347 < 11)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_327[iLocal_347]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_327[iLocal_347], false);
				}
				iLocal_347++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_319, 0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_319, 0f);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_319, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_339))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_339, false);
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			HUD::DISPLAY_RADAR(true);
			HUD::DISPLAY_HUD(true);
			func_2(0, 1, 1, 0, 0, 0);
			iLocal_342 = 1;
			MISC::SET_TIME_SCALE(1f);
			STREAMING::REMOVE_ANIM_DICT("re@construction");
			if (CAM::DOES_CAM_EXIST(iLocal_529))
			{
				CAM::DESTROY_CAM(iLocal_529, 0);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_323))
			{
				HUD::REMOVE_BLIP(&iLocal_323);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_324))
			{
				HUD::REMOVE_BLIP(&iLocal_324);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_325))
			{
				HUD::REMOVE_BLIP(&iLocal_325);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_326))
			{
				HUD::REMOVE_BLIP(&iLocal_326);
			}
		}
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::RESET_DISPATCH_IDEAL_SPAWN_DISTANCE();
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	}
	func_110(&Local_537, 0);
	func_175(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_175(int iParam0)//Position - 0x9335
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_68();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_128())
	{
		func_179(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_106556 = MISC::GET_GAME_TIMER();
		func_178(30000);
		StringCopy(&cVar0, func_177(Global_106554, 1), 64);
		if (func_67(Global_106554) > 0)
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
	func_176(&Global_25824);
	Global_106555 = 0;
	func_131(-1);
}

void func_176(var uParam0)//Position - 0x93EA
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

char* func_177(int iParam0, bool bParam1)//Position - 0x9427
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

void func_178(int iParam0)//Position - 0x9670
{
	Global_36976 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_179(int iParam0)//Position - 0x9682
{
	func_180(iParam0, 0, func_185(iParam0));
}

void func_180(int iParam0, int iParam1, int iParam2)//Position - 0x9697
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_149();
	func_183(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_182(iParam0, &uVar0);
	Var1 = { func_181(&uVar0) };
}

struct<16> func_181(var uParam0)//Position - 0x96C6
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_143(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_142(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_141(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_144(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_147(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_145(*uParam0), 64);
	return Var0;
}

void func_182(int iParam0, var uParam1)//Position - 0x9796
{
	Global_106565.f_24989.f_43[iParam0] = *uParam1;
}

void func_183(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x97AE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_145(*uParam0);
	iVar1 = func_147(*uParam0);
	iVar2 = func_144(*uParam0);
	iVar3 = func_143(*uParam0);
	iVar4 = func_142(*uParam0);
	iVar5 = func_141(*uParam0);
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
	iVar6 = func_140(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_140(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_184(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_184(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9930
{
	func_155(uParam0, iParam1);
	func_154(uParam0, iParam2);
	func_153(uParam0, iParam3);
	func_151(uParam0, iParam5);
	func_152(uParam0, iParam4);
	func_150(uParam0, iParam6);
}

int func_185(int iParam0)//Position - 0x9968
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

int func_186(int iParam0, int iParam1, int iParam2)//Position - 0x9B0B
{
	var uVar0;
	int iVar1;
	
	if (iParam1 == 0)
	{
		iVar1 = ENTITY::GET_ENTITY_SCRIPT(iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(iVar1))
		{
			if (MISC::GET_HASH_KEY(iVar1) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_187(iParam0, iParam2);
	return 1;
}

void func_187(int iParam0, int iParam1)//Position - 0x9B4B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_193(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_106565.f_2357.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_106565.f_32743.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_106565.f_32743.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_106565.f_32743.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_106565.f_32743.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_106565.f_32743.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_106565.f_32743.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_106565.f_32743.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_106565.f_32743.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_106565.f_32743.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_106565.f_32743.f_5590 = iParam1;
	Global_71314 = iParam0;
	Global_106565.f_32743.f_5588 = 1;
	func_188(iParam0, &(Global_106565.f_32743.f_5510));
}

void func_188(int iParam0, var uParam1)//Position - 0x9D4D
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_192(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_191(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::_VEHICLE_HAS_LANDING_GEAR(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		func_190(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_189(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::_DOES_VEHICLE_HAVE_DECAL(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_189(int iParam0)//Position - 0x9FF8
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_190(int iParam0, var uParam1, var uParam2)//Position - 0xA0A8
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (unk_0x3DFF319A831E0CDB(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_191(int iParam0)//Position - 0xA29B
{
	switch (iParam0)
	{
		case joaat("granger"):
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_192(var uParam0)//Position - 0xA2BB
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_193(int iParam0)//Position - 0xA36B
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_208(iParam0, 0, 0)) || func_208(iParam0, 1, 0)) || func_208(iParam0, 2, 0)) || func_207(iParam0) != 145) || func_206(iParam0)) || func_205(iParam0)) || func_204(iParam0)) || func_203(iParam0)) || !func_194(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_205(iParam0))
		{
		}
		if (func_205(iParam0))
		{
		}
		if (func_208(iParam0, 0, 0))
		{
		}
		if (func_208(iParam0, 1, 0))
		{
		}
		if (func_208(iParam0, 2, 0))
		{
		}
		if (func_207(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_194(int iParam0)//Position - 0xA448
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_195(iParam0, 0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_195(int iParam0, bool bParam1)//Position - 0xA5F9
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_173())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::_IS_DLC_DATA_EMPTY(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_202() && !func_201()) && !func_200()) && !func_199()) && !func_173())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_200())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_198(iParam0))
		{
			return 0;
		}
	}
	if (!func_196(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_196(int iParam0)//Position - 0xA779
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_197())
	{
		return 1;
	}
	NETSHOP::_0x897433D292B44130(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_197()//Position - 0xA845
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

int func_198(int iParam0)//Position - 0xA85C
{
	int iVar0;
	int iVar1;
	
	if (Global_2505720)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::_GET_POSIX_TIME();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6490 && !Global_262145.f_12801) && iVar1 < Global_262145.f_12802)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14099 && iVar1 < Global_262145.f_14111)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14095 && iVar1 < Global_262145.f_14107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14096 && iVar1 < Global_262145.f_14108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14097 && iVar1 < Global_262145.f_14109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14098 && iVar1 < Global_262145.f_14110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14100 && iVar1 < Global_262145.f_14112)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14101 && iVar1 < Global_262145.f_14104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14102 && iVar1 < Global_262145.f_14105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14103 && iVar1 < Global_262145.f_14106)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16730 && iVar1 < Global_262145.f_16695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16725 && iVar1 < Global_262145.f_16690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16729 && iVar1 < Global_262145.f_16694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16728 && iVar1 < Global_262145.f_16693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16722 && iVar1 < Global_262145.f_16687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16723 && iVar1 < Global_262145.f_16688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16726 && iVar1 < Global_262145.f_16691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16727 && iVar1 < Global_262145.f_16692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16724 && iVar1 < Global_262145.f_16689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16732 && iVar1 < Global_262145.f_16697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16733 && iVar1 < Global_262145.f_16698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16721 && iVar1 < Global_262145.f_16686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16720 && iVar1 < Global_262145.f_16685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16719 && iVar1 < Global_262145.f_16684)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16731 && iVar1 < Global_262145.f_16696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16734 && iVar1 < Global_262145.f_16699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16735 && iVar1 < Global_262145.f_16700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16736 && iVar1 < Global_262145.f_16701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16737 && iVar1 < Global_262145.f_16702)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16882 && iVar1 < Global_262145.f_16904)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16883 && iVar1 < Global_262145.f_16905)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16884 && iVar1 < Global_262145.f_16906)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16885 && iVar1 < Global_262145.f_16907)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16886 && iVar1 < Global_262145.f_16908)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16887 && iVar1 < Global_262145.f_16909)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16889 && iVar1 < Global_262145.f_16910)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16890 && iVar1 < Global_262145.f_16911)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16891 && iVar1 < Global_262145.f_16912)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16892 && iVar1 < Global_262145.f_16913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16893 && iVar1 < Global_262145.f_16914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16894 && iVar1 < Global_262145.f_16915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16895 && iVar1 < Global_262145.f_16916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16901 && iVar1 < Global_262145.f_16923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16898 && iVar1 < Global_262145.f_16919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16899 && iVar1 < Global_262145.f_16920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16900 && iVar1 < Global_262145.f_16921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16888 && iVar1 < Global_262145.f_16922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16902 && iVar1 < Global_262145.f_16924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16896 && iVar1 < Global_262145.f_16917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16897 && iVar1 < Global_262145.f_16918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16903 && iVar1 < Global_262145.f_16925)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18533 && iVar1 < Global_262145.f_18630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18534 && iVar1 < Global_262145.f_18631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18535 && iVar1 < Global_262145.f_18632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18536 && iVar1 < Global_262145.f_18633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18537 && iVar1 < Global_262145.f_18634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18538 && iVar1 < Global_262145.f_18635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18539 && iVar1 < Global_262145.f_18636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18540 && iVar1 < Global_262145.f_18637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18541 && iVar1 < Global_262145.f_18638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18542 && iVar1 < Global_262145.f_18639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18543 && iVar1 < Global_262145.f_18640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18544 && iVar1 < Global_262145.f_18641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18545 && iVar1 < Global_262145.f_18642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18546 && iVar1 < Global_262145.f_18643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18547 && iVar1 < Global_262145.f_18644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18548 && iVar1 < Global_262145.f_18645)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18549 && iVar1 < Global_262145.f_18646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18550 && iVar1 < Global_262145.f_18647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18551 && iVar1 < Global_262145.f_18648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18552 && iVar1 < Global_262145.f_18649)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18553 && iVar1 < Global_262145.f_18650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18554 && iVar1 < Global_262145.f_18651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18555 && iVar1 < Global_262145.f_18652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18556 && iVar1 < Global_262145.f_18653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18557 && iVar1 < Global_262145.f_18654)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19614 && iVar1 < Global_262145.f_19610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19615 && iVar1 < Global_262145.f_19611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19616 && iVar1 < Global_262145.f_19612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19617 && iVar1 < Global_262145.f_19613)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_20493 && iVar1 < Global_262145.f_20501)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_20494 && iVar1 < Global_262145.f_20502)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_20495 && iVar1 < Global_262145.f_20503)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_20496 && iVar1 < Global_262145.f_20504)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_20497 && iVar1 < Global_262145.f_20505)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_20498 && iVar1 < Global_262145.f_20506)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_21270 && iVar1 < Global_262145.f_21290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_21282 && iVar1 < Global_262145.f_21302)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_21273 && iVar1 < Global_262145.f_21293)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_21283 && iVar1 < Global_262145.f_21303)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_21271 && iVar1 < Global_262145.f_21291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_21287 && iVar1 < Global_262145.f_21307)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_21285 && iVar1 < Global_262145.f_21305)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_21286 && iVar1 < Global_262145.f_21306)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_21281 && iVar1 < Global_262145.f_21301)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_21288 && iVar1 < Global_262145.f_21308)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_21284 && iVar1 < Global_262145.f_21304)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_21280 && iVar1 < Global_262145.f_21300)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_21272 && iVar1 < Global_262145.f_21292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_21274 && iVar1 < Global_262145.f_21294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_21275 && iVar1 < Global_262145.f_21295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_21276 && iVar1 < Global_262145.f_21296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_21277 && iVar1 < Global_262145.f_21297)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_21278 && iVar1 < Global_262145.f_21298)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_21279 && iVar1 < Global_262145.f_21299)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_22231 && iVar1 < Global_262145.f_22259)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_22232 && iVar1 < Global_262145.f_22260)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_22233 && iVar1 < Global_262145.f_22261)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_22234 && iVar1 < Global_262145.f_22262)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_22235 && iVar1 < Global_262145.f_22263)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_22236 && iVar1 < Global_262145.f_22264)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_22237 && iVar1 < Global_262145.f_22265)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_22238 && iVar1 < Global_262145.f_22266)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_22239 && iVar1 < Global_262145.f_22267)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_22240 && iVar1 < Global_262145.f_22268)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_22241 && iVar1 < Global_262145.f_22269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_22242 && iVar1 < Global_262145.f_22270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_22243 && iVar1 < Global_262145.f_22271)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_22244 && iVar1 < Global_262145.f_22272)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_22245 && iVar1 < Global_262145.f_22273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_22246 && iVar1 < Global_262145.f_22274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_22247 && iVar1 < Global_262145.f_22275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_22248 && iVar1 < Global_262145.f_22276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_22249 && iVar1 < Global_262145.f_22277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_22250 && iVar1 < Global_262145.f_22278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_22251 && iVar1 < Global_262145.f_22279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_22252 && iVar1 < Global_262145.f_22280)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_22253 && iVar1 < Global_262145.f_22281)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_22254 && iVar1 < Global_262145.f_22282)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_22255 && iVar1 < Global_262145.f_22283)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_22256 && iVar1 < Global_262145.f_22284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_22257 && iVar1 < Global_262145.f_22285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_22258 && iVar1 < Global_262145.f_22286)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_23439 && iVar1 < Global_262145.f_23455)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_23440 && iVar1 < Global_262145.f_23456)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_23444 && iVar1 < Global_262145.f_23460)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_23447 && iVar1 < Global_262145.f_23463)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_23452 && iVar1 < Global_262145.f_23468)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_23446 && iVar1 < Global_262145.f_23462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_23438 && iVar1 < Global_262145.f_23454)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_23445 && iVar1 < Global_262145.f_23461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_23451 && iVar1 < Global_262145.f_23467)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_23450 && iVar1 < Global_262145.f_23466)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_23441 && iVar1 < Global_262145.f_23457)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_23443 && iVar1 < Global_262145.f_23459)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_23453 && iVar1 < Global_262145.f_23469)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_23449 && iVar1 < Global_262145.f_23465)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_23442 && iVar1 < Global_262145.f_23458)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_23448 && iVar1 < Global_262145.f_23464)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_262145.f_23529 && iVar1 < Global_262145.f_23516)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_262145.f_23530 && iVar1 < Global_262145.f_23517)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_262145.f_23535 && iVar1 < Global_262145.f_23522)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_262145.f_23534 && iVar1 < Global_262145.f_23521)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_262145.f_23532 && iVar1 < Global_262145.f_23519)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_262145.f_23538 && iVar1 < Global_262145.f_23525)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_262145.f_23540 && iVar1 < Global_262145.f_23527)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_262145.f_23541 && iVar1 < Global_262145.f_23528)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_262145.f_23539 && iVar1 < Global_262145.f_23526)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_262145.f_23531 && iVar1 < Global_262145.f_23518)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_262145.f_23533 && iVar1 < Global_262145.f_23520)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_262145.f_23537 && iVar1 < Global_262145.f_23524)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_262145.f_23536 && iVar1 < Global_262145.f_23523)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1721676810)
	{
	}
	else if (iParam0 == -801550069)
	{
	}
	else if (iParam0 == 679453769)
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == 2139203625)
	{
	}
	else if (iParam0 == -1890996696)
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == -1146969353)
	{
	}
	else if (iParam0 == 1542143200)
	{
	}
	else if (iParam0 == -579747861)
	{
	}
	else if (iParam0 == 444994115)
	{
	}
	else if (iParam0 == 1637620610)
	{
	}
	else if (iParam0 == -755532233)
	{
	}
	else if (iParam0 == 540101442)
	{
	}
	else if (iParam0 == -1106120762)
	{
	}
	else if (iParam0 == -1478704292)
	{
	}
	else if (iParam0 == -2096690334)
	{
	}
	else if (iParam0 == 1591739866)
	{
		if (!Global_262145.f_25739 && iVar1 < Global_262145.f_25741)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1168952148)
	{
		if (!Global_262145.f_24753 && iVar1 < Global_262145.f_24746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1566607184)
	{
		if (!Global_262145.f_24754 && iVar1 < Global_262145.f_24747)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -331467772)
	{
		if (!Global_262145.f_24755 && iVar1 < Global_262145.f_24748)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1279262537)
	{
		if (!Global_262145.f_24756 && iVar1 < Global_262145.f_24749)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -49115651)
	{
		if (!Global_262145.f_25740 && iVar1 < Global_262145.f_25742)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456744817)
	{
		if (!Global_262145.f_24757 && iVar1 < Global_262145.f_24750)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -507495760)
	{
		if (!Global_262145.f_24758 && iVar1 < Global_262145.f_24751)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -286046740)
	{
		if (!Global_262145.f_24759 && iVar1 < Global_262145.f_24752)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1044193113)
	{
		if (!Global_262145.f_24763 && iVar1 < Global_262145.f_24784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 686471183)
	{
		if (!Global_262145.f_24764 && iVar1 < Global_262145.f_24785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -941272559)
	{
		if (!Global_262145.f_24765 && iVar1 < Global_262145.f_24786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829436850)
	{
		if (!Global_262145.f_24766 && iVar1 < Global_262145.f_24787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -682108547)
	{
		if (!Global_262145.f_24767 && iVar1 < Global_262145.f_24788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 722226637)
	{
		if (!Global_262145.f_24768 && iVar1 < Global_262145.f_24789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1854776567)
	{
		if (!Global_262145.f_24769 && iVar1 < Global_262145.f_24790)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1862507111)
	{
		if (!Global_262145.f_24770 && iVar1 < Global_262145.f_24791)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -882629065)
	{
		if (!Global_262145.f_24771 && iVar1 < Global_262145.f_24792)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -362150785)
	{
		if (!Global_262145.f_24772 && iVar1 < Global_262145.f_24793)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 310284501)
	{
		if (!Global_262145.f_24773 && iVar1 < Global_262145.f_24794)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 916547552)
	{
		if (!Global_262145.f_24774 && iVar1 < Global_262145.f_24795)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1804415708)
	{
		if (!Global_262145.f_24775 && iVar1 < Global_262145.f_24796)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1934384720)
	{
		if (!Global_262145.f_24776 && iVar1 < Global_262145.f_24797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1349095620)
	{
		if (!Global_262145.f_24777 && iVar1 < Global_262145.f_24798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -208911803)
	{
		if (!Global_262145.f_24778 && iVar1 < Global_262145.f_24799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -324618589)
	{
		if (!Global_262145.f_24779 && iVar1 < Global_262145.f_24800)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -664141241)
	{
		if (!Global_262145.f_24780 && iVar1 < Global_262145.f_24801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1323778901)
	{
		if (!Global_262145.f_24781 && iVar1 < Global_262145.f_24802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1620126302)
	{
		if (!Global_262145.f_24782 && iVar1 < Global_262145.f_24803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -447711397)
	{
		if (!Global_262145.f_24783 && iVar1 < Global_262145.f_24804)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_199()//Position - 0xC8CB
{
	return 0;
}

int func_200()//Position - 0xC8D4
{
	return 1;
}

int func_201()//Position - 0xC8DD
{
	return 1;
}

int func_202()//Position - 0xC8E6
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_203(int iParam0)//Position - 0xC8FF
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_195(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_204(int iParam0)//Position - 0xC945
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_91073[iVar0]))
		{
			if (Global_91073[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_205(int iParam0)//Position - 0xC980
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_91043[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_91043[iVar0], 0))
			{
				if (Global_91043[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_91043[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_206(int iParam0)//Position - 0xC9FC
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_70409.f_484[24]))
	{
		if (iParam0 == Global_70409.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_70409.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_70409.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_207(int iParam0)//Position - 0xCAE4
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_91043[iVar0]))
		{
			if (Global_91043[iVar0] == iParam0)
			{
				return Global_91053[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_208(int iParam0, int iParam1, bool bParam2)//Position - 0xCB47
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_209(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || MISC::IS_BIT_SET(Global_106565.f_7223[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_209(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0xCBB8
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_210()//Position - 0xCC90
{
	Global_14732 = 0;
	func_211();
}

void func_211()//Position - 0xCCA0
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

