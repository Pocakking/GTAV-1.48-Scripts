#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	vector3 vLocal_49 = { 0f, 0f, 0f };
	vector3 vLocal_52[9] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_80[9] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_90 = { 0f, 0f, 0f };
	vector3 vLocal_93 = { 0f, 0f, 0f };
	vector3 vLocal_96 = { 0f, 0f, 0f };
	vector3 vLocal_99 = { 0f, 0f, 0f };
	vector3 vLocal_102 = { 0f, 0f, 0f };
	vector3 vLocal_105 = { 0f, 0f, 0f };
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	float fLocal_112 = 0f;
	vector3 vLocal_113 = { 0f, 0f, 0f };
	var uLocal_116 = 0;
	vector3 vLocal_117 = { 0f, 0f, 0f };
	float fLocal_120 = 0f;
	float fLocal_121 = 0f;
	float fLocal_122 = 0f;
	float fLocal_123 = 0f;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_147[2] = { 0, 0 };
	int iLocal_150[4] = { 0, 0, 0, 0 };
	int iLocal_155[4] = { 0, 0, 0, 0 };
	int iLocal_160[5] = { 0, 0, 0, 0, 0 };
	int iLocal_166[4] = { 0, 0, 0, 0 };
	int iLocal_171[4] = { 0, 0, 0, 0 };
	int iLocal_176[4] = { 0, 0, 0, 0 };
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_194[4] = { 0, 0, 0, 0 };
	int iLocal_199[4] = { 0, 0, 0, 0 };
	var uLocal_204[4] = { 0, 0, 0, 0 };
	var uLocal_209[4] = { 0, 0, 0, 0 };
	int iLocal_214 = 0;
	int iLocal_215[5] = { 0, 0, 0, 0, 0 };
	int iLocal_221[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_234 = { 0f, 0f, 0f };
	vector3 vLocal_237 = { 0f, 0f, 0f };
	vector3 vLocal_240 = { 0f, 0f, 0f };
	vector3 vLocal_243 = { 0f, 0f, 0f };
	vector3 vLocal_246[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_262 = 0;
	bool bLocal_263 = 0;
	bool bLocal_264 = 0;
	bool bLocal_265 = 0;
	bool bLocal_266 = 0;
	bool bLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	var uLocal_271 = 16;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
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
	vector3 vLocal_436 = { 0f, 0f, 0f };
	vector3 vLocal_439[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_452 = { 0f, 0f, 0f };
	int iLocal_455 = 0;
	bool bLocal_456 = 0;
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
	
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
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
	vLocal_234 = { -1635.648f, 4737.801f, 52.4304f };
	vLocal_237 = { -1640.745f, 4696.386f, 39.279f };
	vLocal_49 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_173();
	}
	if (func_131(vLocal_49, -1, 0, 0, 0))
	{
		func_128(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if ((TASK::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1503.54f, 4934.923f, 114.2284f, 100f, 100f, 100f, false, true, 0)) || iLocal_47 == 2)
		{
			if (!func_127())
			{
				if (func_126())
				{
					func_173();
				}
			}
			RECORDING::_0x208784099002BC30("RE_DGW", 0);
			switch (iLocal_47)
			{
				case 0:
					if (iLocal_455)
					{
						iLocal_47 = 1;
					}
					else
					{
						if (func_114())
						{
							func_173();
						}
						func_111();
					}
					break;
				
				case 1:
					func_110();
					func_99();
					break;
				
				case 2:
					switch (iLocal_46)
					{
						case 0:
							func_110();
							iLocal_46 = 1;
							break;
						
						case 1:
							func_110();
							func_79();
							if (iLocal_48 >= 6)
							{
								if (!func_78())
								{
									iVar0 = 0;
									while (iVar0 < 4)
									{
										if (bLocal_267)
										{
											func_77(&(iLocal_150[iVar0]), &(iLocal_194[iVar0]), &(iLocal_176[iVar0]), &(uLocal_204[iVar0]));
											func_72(iLocal_176[0], PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_108, &uLocal_111, &vLocal_113, &fLocal_112, &uLocal_116, 0f, 0f, 0f, 1000, 0f);
											func_72(iLocal_176[1], PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_108, &uLocal_111, &vLocal_113, &fLocal_112, &uLocal_116, 0f, 2f, 0f, 1000, 0f);
											func_67(&(iLocal_150[iVar0]), &(iLocal_194[iVar0]), &(iLocal_176[iVar0]), &(uLocal_204[iVar0]));
										}
										else if (bLocal_264)
										{
											func_77(&(iLocal_150[iVar0]), &(iLocal_194[iVar0]), &(iLocal_166[iVar0]), &(uLocal_204[iVar0]));
											func_72(iLocal_166[0], PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_108, &uLocal_111, &vLocal_113, &fLocal_112, &uLocal_116, 0f, 0f, 0f, 1000, 0f);
											func_72(iLocal_166[1], PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_108, &uLocal_111, &vLocal_113, &fLocal_112, &uLocal_116, 0f, 5f, 0f, 1000, 0f);
											func_67(&(iLocal_150[iVar0]), &(iLocal_194[iVar0]), &(iLocal_166[iVar0]), &(uLocal_204[iVar0]));
										}
										else if (bLocal_265)
										{
											func_77(&(iLocal_155[iVar0]), &(iLocal_199[iVar0]), &(iLocal_171[iVar0]), &(uLocal_209[iVar0]));
											func_72(iLocal_171[0], PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_108, &uLocal_111, &vLocal_113, &fLocal_112, &uLocal_116, 0f, 0f, 0f, 1000, 0f);
											func_72(iLocal_171[1], PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_108, &uLocal_111, &vLocal_113, &fLocal_112, &uLocal_116, 0f, 5f, 0f, 1000, 0f);
											func_67(&(iLocal_155[iVar0]), &(iLocal_199[iVar0]), &(iLocal_171[iVar0]), &(uLocal_209[iVar0]));
										}
										iVar0++;
									}
								}
								else
								{
									func_44();
								}
							}
							if (((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_234, 100f, 100f, 100f, false, true, 0)) && iLocal_48 < 2)
							{
								func_44();
							}
							break;
					}
					break;
				
				case 3:
					func_1();
					break;
			}
		}
		else
		{
			func_173();
		}
	}
}

void func_1()//Position - 0x3B1
{
	int iVar0;
	
	if (iLocal_455 && !iLocal_262)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		if (HUD::DOES_BLIP_EXIST(iLocal_181))
		{
			HUD::REMOVE_BLIP(&iLocal_181);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_182))
		{
			HUD::REMOVE_BLIP(&iLocal_182);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_194[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_194[iVar0]));
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_204[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_204[iVar0]));
			}
			if (iLocal_48 >= 6)
			{
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(iLocal_150[iVar0]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_150[iVar0], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_266 = true;
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_199[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_199[iVar0]));
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_209[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_209[iVar0]));
			}
			if (iLocal_48 >= 6)
			{
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(iLocal_155[iVar0]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_155[iVar0], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_266 = true;
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_46 >= 1)
		{
			MISC::ENABLE_DISPATCH_SERVICE(5, true);
			MISC::ENABLE_DISPATCH_SERVICE(3, true);
		}
		if (bLocal_266)
		{
			func_3(func_39(), 1, 25000);
		}
		iLocal_262 = 1;
	}
	if (!CAM::IS_SPHERE_VISIBLE(vLocal_234, 30f) && SYSTEM::VDIST(func_2(PLAYER::PLAYER_ID()), vLocal_234) > 300f)
	{
		func_173();
	}
}

Vector3 func_2(int iParam0)//Position - 0x554
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_3(int iParam0, int iParam1, int iParam2)//Position - 0x567
{
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_4(Global_106565.f_28044[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x5B0
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_38();
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
					func_37(99, 1);
					func_36(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_36(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_36(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_20(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_15(5))
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
							func_36(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_36(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_36(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_15(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_36(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_36(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_36(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_36(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_36(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_36(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_36(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_36(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_36(joaat("sp2_money_spent_property"), iParam3);
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
									func_36(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_36(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_36(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_36(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_36(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_36(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_15(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_36(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_36(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_36(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_36(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_36(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_36(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_14(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_37(95, iParam3);
					break;
				
				case 1:
					func_37(97, iParam3);
					break;
				
				case 2:
					func_37(96, iParam3);
					break;
			}
			func_37(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_7(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_7(iVar1);
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
					func_36(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_36(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_36(joaat("sp2_total_cash_earned"), iParam3);
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
	func_6(iParam0);
	if (Global_36425 == 15)
	{
		func_5(0);
	}
	return 1;
}

void func_5(bool bParam0)//Position - 0xBAF
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

void func_6(int iParam0)//Position - 0xE31
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

void func_7(int iParam0)//Position - 0xE8B
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_13(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_13(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_13(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_13(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_10(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_10(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_10(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_10(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_10(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_10(8274, 0, -1, 1, 0);
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
	else if (MISC::IS_BIT_SET(Global_106565.f_20558.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_9() /*10778*/].f_6165.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_106565.f_20558.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_9() /*10778*/].f_6165.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_8(iParam0));
		HUD::_SET_NOTIFICATION_MESSAGE_2(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_8(int iParam0)//Position - 0x1019
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

int func_9()//Position - 0x1106
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_10(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1113
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_11(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_11(var uParam0)//Position - 0x1143
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_12();
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

int func_12()//Position - 0x1177
{
	return Global_1312745;
}

int func_13(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1183
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
		iParam2 = func_12();
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

void func_14(int iParam0)//Position - 0x1739
{
	func_37(93, iParam0);
	func_37(29, iParam0);
	func_37(30, iParam0);
}

bool func_15(int iParam0)//Position - 0x1759
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
		return func_17(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_17(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_17(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_17(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::_GET_POSIX_TIME();
		iVar1 = func_16(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::_GET_POSIX_TIME();
		iVar3 = func_16(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::_GET_POSIX_TIME();
		iVar5 = func_16(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::_GET_POSIX_TIME();
		iVar7 = func_16(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::_GET_POSIX_TIME();
		iVar9 = func_16(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::_GET_POSIX_TIME();
		iVar11 = func_16(8274, -1, 0);
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
	return MISC::IS_BIT_SET(Global_2097152[func_9() /*10778*/].f_6165.f_10, iParam0);
}

int func_16(int iParam0, int iParam1, int iParam2)//Position - 0x1909
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_11(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_17(int iParam0, int iParam1, int iParam2)//Position - 0x193B
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_12();
	}
	iVar1 = func_19(iParam0, iParam1);
	uVar2 = func_18(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_18(int iParam0)//Position - 0x1978
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

int func_19(int iParam0, int iParam1)//Position - 0x1CBC
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_12();
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

int func_20(bool bParam0)//Position - 0x1FDF
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
		func_35(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_21(27, 1);
	return 1;
}

int func_21(int iParam0, int iParam1)//Position - 0x2096
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_22(iParam0, iParam1);
}

int func_22(int iParam0, int iParam1)//Position - 0x20B1
{
	if (func_34(14) && !func_33(iParam0))
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
	if (func_32(&Global_4269608))
	{
		if (func_30(&Global_4269608, iParam0))
		{
			return 0;
		}
		if (func_23(&Global_4269608, iParam0))
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

int func_23(var uParam0, int iParam1)//Position - 0x214E
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_34(14) && !func_33(iParam1))
	{
		return 0;
	}
	if (func_30(uParam0, iParam1))
	{
		return 0;
	}
	if (func_29(uParam0) < 0f)
	{
		func_28(uParam0, 0);
	}
	func_26(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_24(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_24(var uParam0, int iParam1)//Position - 0x21FF
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_34(14) && !func_33(iParam1))
	{
		return 0;
	}
	if (func_30(uParam0, iParam1))
	{
		return 0;
	}
	if (func_29(uParam0) < 0f)
	{
		func_28(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_25(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_25(var uParam0, int iParam1)//Position - 0x227A
{
	return (*uParam0)[iParam1] == 78;
}

void func_26(var uParam0)//Position - 0x228B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_27(uParam0, iVar0);
		iVar0++;
	}
	func_28(uParam0, (Global_4269607 - 0.5f));
}

void func_27(var uParam0, int iParam1)//Position - 0x22BF
{
	(*uParam0)[iParam1] = 78;
}

void func_28(var uParam0, float fParam1)//Position - 0x22CF
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

float func_29(var uParam0)//Position - 0x22EC
{
	return uParam0->f_80;
}

bool func_30(var uParam0, int iParam1)//Position - 0x22F8
{
	return func_31(uParam0, iParam1) != -1;
}

int func_31(var uParam0, int iParam1)//Position - 0x230A
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

bool func_32(var uParam0)//Position - 0x2337
{
	return uParam0->f_79 == 1;
}

int func_33(int iParam0)//Position - 0x2345
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

bool func_34(int iParam0)//Position - 0x2395
{
	return Global_36425 == iParam0;
}

int func_35(int iParam0, int iParam1)//Position - 0x23A3
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

void func_36(int iParam0, int iParam1)//Position - 0x23F4
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_37(int iParam0, int iParam1)//Position - 0x2417
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

void func_38()//Position - 0x2474
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

int func_39()//Position - 0x24E9
{
	func_40();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_40()//Position - 0x2502
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_43(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_42(PLAYER::PLAYER_PED_ID());
			if (func_41(iVar0) && (!func_34(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_41(Global_106565.f_2357.f_539.f_4321))
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

bool func_41(int iParam0)//Position - 0x25FF
{
	return iParam0 < 3;
}

int func_42(int iParam0)//Position - 0x260B
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_43(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_43(int iParam0)//Position - 0x2648
{
	if (func_41(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_44()//Position - 0x2672
{
	while (func_66())
	{
		SYSTEM::WAIT(0);
	}
	while (!func_65())
	{
		SYSTEM::WAIT(0);
	}
	func_48(-1, 0);
	func_45();
	iLocal_47 = 3;
}

void func_45()//Position - 0x26A6
{
	func_46();
}

int func_46()//Position - 0x26B3
{
	if (func_47(0))
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

bool func_47(bool bParam0)//Position - 0x26FE
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71838, 0);
}

void func_48(int iParam0, int iParam1)//Position - 0x2729
{
	if (iParam0 == -1)
	{
		iParam0 = func_63();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_62(iParam0))
	{
		func_61(iParam0, iParam1);
		if (!func_60(51))
		{
			func_56("RE_REWARD", 1, 0, 4000, 10000, func_59(), 0, 138, 0);
			func_55(51);
		}
		if (func_54(iParam0))
		{
			Global_106565.f_24989.f_2 = 3;
		}
		if (func_53(iParam0, iParam1) != 322)
		{
			func_50(func_53(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_106553 = iParam1;
		if (Global_106551 == 0)
		{
			if (((Global_106554 == 1 || Global_106554 == 5) || Global_106554 == 11) || Global_106554 == 25)
			{
				func_49(2);
			}
			else if ((Global_106554 == 26 || Global_106554 == 8) || Global_106554 == 17)
			{
				func_49(7);
			}
			else
			{
				func_49(1);
			}
		}
	}
}

void func_49(int iParam0)//Position - 0x282D
{
	Global_106551 = iParam0;
}

void func_50(int iParam0, var uParam1, var uParam2)//Position - 0x283B
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
		func_13((891 + iParam0), 1, -1, 1);
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
		func_51();
	}
}

void func_51()//Position - 0x2923
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
		func_35(13, SYSTEM::FLOOR(Global_106565.f_10188.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_71590)
		{
			if (func_52() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_46();
				}
			}
		}
	}
}

int func_52()//Position - 0x2DE4
{
	return Global_25765;
}

int func_53(int iParam0, int iParam1)//Position - 0x2DEF
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

int func_54(int iParam0)//Position - 0x3163
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

void func_55(int iParam0)//Position - 0x3192
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

void func_56(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x31D4
{
	func_57(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_57(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x31F5
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
		func_58();
	}
}

void func_58()//Position - 0x33C8
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

int func_59()//Position - 0x34E8
{
	func_40();
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

int func_60(int iParam0)//Position - 0x352E
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

void func_61(int iParam0, int iParam1)//Position - 0x3571
{
	MISC::SET_BIT(&(Global_106565.f_24989.f_8[iParam0]), iParam1);
}

int func_62(int iParam0)//Position - 0x358C
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

int func_63()//Position - 0x363D
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_64(Var0);
	return uVar16;
}

int func_64(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x365A
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

int func_65()//Position - 0x3834
{
	return 1;
}

int func_66()//Position - 0x383D
{
	if (Global_15866 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_67(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0x385F
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam2, 0))
		{
			if (!PED::IS_PED_INJURED(*uParam0))
			{
				if (PED::IS_PED_IN_VEHICLE(*uParam0, *uParam2, 0))
				{
					if (HUD::DOES_BLIP_EXIST(*iParam1))
					{
						HUD::REMOVE_BLIP(iParam1);
					}
					iVar0 = 1;
				}
				else if (!HUD::DOES_BLIP_EXIST(*iParam1))
				{
					*iParam1 = func_70(*uParam0, 1, 145);
				}
			}
			if (!HUD::DOES_BLIP_EXIST(*iParam3))
			{
				if (iVar0 == 1)
				{
					*iParam3 = func_68(ENTITY::GET_ENTITY_COORDS(*uParam2, true), 0);
					HUD::SET_BLIP_COLOUR(*iParam3, 1);
					HUD::SET_BLIP_PRIORITY(*iParam3, 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam3, "BLIP_VEH");
				}
			}
			else
			{
				vVar1 = { HUD::GET_BLIP_COORDS(*iParam3) };
				vVar4 = { ENTITY::GET_ENTITY_COORDS(*uParam2, true) };
				vVar1.x = (vVar1.x + (((vVar4.x - vVar1.x) / 1f) * SYSTEM::TIMESTEP()));
				vVar1.y = (vVar1.y + (((vVar4.y - vVar1.y) / 1f) * SYSTEM::TIMESTEP()));
				vVar1.z = (vVar1.z + (((vVar4.z - vVar1.z) / 1f) * SYSTEM::TIMESTEP()));
				HUD::SET_BLIP_COORDS(*iParam3, vVar1);
				if (iVar0 == 0)
				{
					HUD::REMOVE_BLIP(iParam3);
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(*iParam3))
			{
				HUD::REMOVE_BLIP(iParam3);
			}
			if (!PED::IS_PED_INJURED(*uParam0))
			{
				if (!HUD::DOES_BLIP_EXIST(*iParam1))
				{
					*iParam1 = func_70(*uParam0, 1, 145);
				}
			}
		}
	}
}

int func_68(vector3 vParam0, bool bParam3)//Position - 0x39AA
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_69(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_69(bool bParam0, float fParam1, float fParam2)//Position - 0x39D6
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_70(int iParam0, bool bParam1, int iParam2)//Position - 0x39ED
{
	int iVar0;
	
	iVar0 = func_71(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_106565.f_28044[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_106565.f_28044[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_71(int iParam0, bool bParam1, bool bParam2)//Position - 0x3A3F
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_69(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_69(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_69(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_72(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, var uParam6, vector3 vParam7, int iParam10, float fParam11)//Position - 0x3AE3
{
	vector3 vVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (((((((ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam0 != iParam1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam1))) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1)) && func_76(iParam0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), *uParam4, true) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *fParam5;
				*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam2, *uParam3, vParam7) };
				func_75(iParam1, uParam4, fParam5);
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				*uParam6 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - *uParam6) > iParam10)
			{
				if (func_74(iParam0, iParam1, 1) > fParam11 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), *uParam2, true) > 20f)
				{
					if (!func_73(*uParam2))
					{
						if (!CAM::IS_SPHERE_VISIBLE(*uParam2, 3f))
						{
							MISC::CLEAR_AREA_OF_PEDS(*uParam2, 1.5f, 0);
							MISC::CLEAR_AREA_OF_VEHICLES(*uParam2, 3f, 0, 0, 0, 0, false, 0);
							ENTITY::SET_ENTITY_COORDS(iParam0, *uParam2, 1, false, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iParam0, *uParam3);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 1084227584);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 10f);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, 0);
							*uParam6 = MISC::GET_GAME_TIMER();
						}
						else
						{
							vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_113, fLocal_112, vParam7) };
							if (!func_73(vVar0))
							{
								if (!CAM::IS_SPHERE_VISIBLE(vVar0, 2f))
								{
									MISC::CLEAR_AREA_OF_PEDS(vVar0, 1.5f, 0);
									MISC::CLEAR_AREA_OF_VEHICLES(vVar0, 3f, 0, 0, 0, 0, false, 0);
									ENTITY::SET_ENTITY_COORDS(iParam0, vVar0, 1, false, 0, 1);
									ENTITY::SET_ENTITY_HEADING(iParam0, fLocal_112);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 1084227584);
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 10f);
									VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, 0);
									*uParam6 = MISC::GET_GAME_TIMER();
									return;
								}
							}
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

int func_73(vector3 vParam0)//Position - 0x3D01
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_74(int iParam0, int iParam1, bool bParam2)//Position - 0x3D2B
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

void func_75(int iParam0, var uParam1, var uParam2)//Position - 0x3D89
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			*uParam1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			*uParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
	}
}

int func_76(int iParam0)//Position - 0x3DB9
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, 0))
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_77(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3E04
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (PED::IS_PED_INJURED(*iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*iParam1))
			{
				HUD::REMOVE_BLIP(iParam1);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			iVar0 = 1;
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, 0))
			{
			}
			else if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(*iParam0, *iParam2, 0))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, 0))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam2);
				VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam2);
				AUDIO::_0x18EB48CFC41F2EA0(*iParam2, 0);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
				if (HUD::DOES_BLIP_EXIST(*iParam3))
				{
					HUD::REMOVE_BLIP(iParam3);
				}
			}
		}
		else
		{
			VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam2);
			VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam2);
			AUDIO::_0x18EB48CFC41F2EA0(*iParam2, 0);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
			if (HUD::DOES_BLIP_EXIST(*iParam3))
			{
				HUD::REMOVE_BLIP(iParam3);
			}
		}
	}
}

int func_78()//Position - 0x3EF5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	if (!bLocal_456)
	{
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_150[iVar1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_150[iVar1]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_150[iVar1], PLAYER::PLAYER_PED_ID(), 200f, 200f, 200f, 0, 1, 0))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_155[iVar1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_155[iVar1]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_155[iVar1], PLAYER::PLAYER_PED_ID(), 200f, 200f, 200f, 0, 1, 0))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_79()//Position - 0x3FB2
{
	int iVar0;
	
	if (bLocal_456)
	{
		if (bLocal_267)
		{
		}
		else if (bLocal_264)
		{
			if (!PED::IS_PED_INJURED(iLocal_150[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_166[0], 0))
			{
			}
			if (!PED::IS_PED_INJURED(iLocal_150[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_166[1], 0))
			{
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_155[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_171[0], 0))
			{
			}
			if (!PED::IS_PED_INJURED(iLocal_155[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_171[1], 0))
			{
			}
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			GRAPHICS::REMOVE_DECAL(iLocal_221[iVar0]);
			if (PED::IS_PED_INJURED(iLocal_150[iVar0]))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_194[iVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_194[iVar0]));
					iLocal_124++;
				}
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_150[iVar0], 0))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_194[iVar0]))
				{
					iLocal_194[iVar0] = func_70(iLocal_150[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			GRAPHICS::REMOVE_DECAL(iLocal_221[iVar0]);
			if (PED::IS_PED_INJURED(iLocal_155[iVar0]))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_199[iVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_199[iVar0]));
					iLocal_125++;
				}
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_155[iVar0], 0))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_199[iVar0]))
				{
					iLocal_199[iVar0] = func_70(iLocal_155[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		if (iLocal_124 >= 4 && iLocal_125 >= 4)
		{
			func_44();
		}
	}
	func_95();
	func_94();
	switch (iLocal_48)
	{
		case 0:
			if (((PLAYER::_0x5FC472C501CCADB3(PLAYER::PLAYER_ID()) || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_234 + Vector(0f, 20f, 0f), 170f, 270f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1555.4f, 4730.817f, 49.1791f, 15f, 25f, 15f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1709.211f, 4659.571f, 36.688f, 15f, 25f, 15f, false, true, 0))
			{
				if (!bLocal_267)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1555.4f, 4730.817f, 49.1791f, 15f, 25f, 15f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1709.211f, 4659.571f, 36.688f, 15f, 25f, 15f, false, true, 0))
					{
						bLocal_267 = true;
					}
				}
				if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &vLocal_240, 1, 1077936128, 0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_240, 20f, 20f, 20f, false, true, 0))
					{
						MISC::ENABLE_DISPATCH_SERVICE(5, true);
						MISC::ENABLE_DISPATCH_SERVICE(3, true);
						SYSTEM::SETTIMERA(0);
						func_92();
						iLocal_48 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (SYSTEM::TIMERA() > 5000 || bLocal_267)
			{
				SYSTEM::SETTIMERA(0);
				iLocal_48 = 2;
			}
			break;
		
		case 2:
			if (bLocal_267)
			{
				if (SYSTEM::TIMERA() > 3500)
				{
					if (((!ENTITY::IS_ENTITY_DEAD(iLocal_176[0], 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_176[1], 0)) && !PED::IS_PED_INJURED(iLocal_150[0])) && !PED::IS_PED_INJURED(iLocal_150[1]))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_150[0], iLocal_176[0], -1);
						PED::SET_PED_INTO_VEHICLE(iLocal_150[1], iLocal_176[1], -1);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_150[0], 3, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_150[1], 3, false);
						PED::SET_PED_HELMET(iLocal_150[0], 0);
						PED::SET_PED_HELMET(iLocal_150[1], 0);
						iLocal_48 = 5;
					}
				}
			}
			if (SYSTEM::TIMERA() > 10000)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rebel")))
					{
						iLocal_48 = 3;
					}
					else
					{
						iLocal_48 = 4;
					}
				}
				else
				{
					iLocal_48 = 3;
				}
			}
			break;
		
		case 3:
			vLocal_243 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			iLocal_132 = MISC::GET_RANDOM_INT_IN_RANGE(10, 15);
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1603.153f, 4892.943f, 60.1768f, 225f, 225f, 50f, false, true, 0))
			{
				if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vLocal_243, iLocal_132, &(vLocal_439[0 /*3*/]), 1, 3f, 0f))
				{
					vLocal_439[1 /*3*/] = { vLocal_439[0 /*3*/] + Vector(0f, 5f, 0f) };
					if (!CAM::IS_SPHERE_VISIBLE(vLocal_439[0 /*3*/], 7f) && !CAM::IS_SPHERE_VISIBLE(vLocal_439[1 /*3*/], 7f))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[0], 0))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_166[0], vLocal_439[0 /*3*/], 1, false, 0, 1);
							func_91(iLocal_166[0], iLocal_150[0]);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[1], 0))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_166[1], vLocal_439[1 /*3*/], 1, false, 0, 1);
							func_91(iLocal_166[1], iLocal_150[1]);
						}
						if (func_39() == 0)
						{
							func_80(&uLocal_271, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_39() == 1)
						{
							func_80(&uLocal_271, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_39() == 2)
						{
							func_80(&uLocal_271, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						bLocal_264 = true;
						SYSTEM::SETTIMERA(0);
						iLocal_48 = 6;
					}
				}
			}
			break;
		
		case 4:
			vLocal_243 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			iLocal_132 = MISC::GET_RANDOM_INT_IN_RANGE(30, 35);
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1603.153f, 4892.943f, 60.1768f, 225f, 225f, 50f, false, true, 0))
			{
				if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vLocal_243, iLocal_132, &(vLocal_439[0 /*3*/]), 1, 3f, 0f))
				{
					vLocal_439[1 /*3*/] = { vLocal_439[0 /*3*/] + Vector(0f, 5f, 0f) };
					if (!CAM::IS_SPHERE_VISIBLE(vLocal_439[0 /*3*/], 7f) && !CAM::IS_SPHERE_VISIBLE(vLocal_439[1 /*3*/], 7f))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_171[0], 0))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_171[0], vLocal_439[0 /*3*/], 1, false, 0, 1);
							func_91(iLocal_171[0], iLocal_155[0]);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_171[1], 0))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_171[1], vLocal_439[1 /*3*/], 1, false, 0, 1);
							func_91(iLocal_171[1], iLocal_155[1]);
						}
						if (func_39() == 0)
						{
							func_80(&uLocal_271, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_39() == 1)
						{
							func_80(&uLocal_271, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_39() == 2)
						{
							func_80(&uLocal_271, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						bLocal_265 = true;
						SYSTEM::SETTIMERA(0);
						iLocal_48 = 6;
					}
				}
			}
			break;
		
		case 5:
			vLocal_243 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			iLocal_132 = MISC::GET_RANDOM_INT_IN_RANGE(5, 10);
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vLocal_243, iLocal_132, &(vLocal_439[0 /*3*/]), 1, 3f, 0f))
			{
				vLocal_439[1 /*3*/] = { vLocal_439[0 /*3*/] + Vector(0f, 5f, 0f) };
				if (!CAM::IS_SPHERE_VISIBLE(vLocal_439[0 /*3*/], 7f) && !CAM::IS_SPHERE_VISIBLE(vLocal_439[1 /*3*/], 7f))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176[0], 0))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_176[0], vLocal_439[0 /*3*/], 1, false, 0, 1);
						func_91(iLocal_176[0], iLocal_150[0]);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176[1], 0))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_176[1], vLocal_439[1 /*3*/], 1, false, 0, 1);
						func_91(iLocal_176[1], iLocal_150[1]);
					}
					if (func_39() == 0)
					{
						func_80(&uLocal_271, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
					}
					else if (func_39() == 1)
					{
						func_80(&uLocal_271, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
					}
					else if (func_39() == 2)
					{
						func_80(&uLocal_271, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
					}
					bLocal_264 = true;
					SYSTEM::SETTIMERA(0);
					iLocal_48 = 6;
				}
			}
			break;
		
		case 6:
			if (func_66())
			{
				fLocal_120 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1.5f, 2.5f);
				fLocal_121 = MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 4f);
				fLocal_122 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.1f, 2f);
				if (iLocal_134 < 5 && iLocal_135 < MISC::GET_GAME_TIMER())
				{
					vLocal_90 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS((vLocal_90.x + fLocal_120), (vLocal_90.y + fLocal_121), (vLocal_90.z + fLocal_122), (vLocal_90.x - fLocal_120), (vLocal_90.y - fLocal_121), vLocal_90.z, 10, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
					iLocal_135 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(200, 500));
					iLocal_134++;
				}
			}
			if (iLocal_134 > 4)
			{
				iLocal_48 = 7;
			}
			break;
	}
}

bool func_80(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4859
{
	func_90(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_81(sParam2, iParam3, 0);
}

int func_81(char* sParam0, int iParam1, bool bParam2)//Position - 0x48A7
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
					func_89();
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
		if (func_88(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_87();
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
				func_86();
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
				if (func_85())
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
			if (func_84())
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
			func_83();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_82();
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
		func_89();
	}
	return 0;
}

void func_82()//Position - 0x4B73
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

void func_83()//Position - 0x4BA4
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

int func_84()//Position - 0x4C39
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_85()//Position - 0x4C60
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

void func_86()//Position - 0x4CF9
{
	if (func_34(14))
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
		Global_14553 = func_39();
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

void func_87()//Position - 0x4D9B
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

bool func_88(int iParam0, int iParam1)//Position - 0x4DF2
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

void func_89()//Position - 0x4E2D
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

void func_90(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x4E84
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

void func_91(int iParam0, int iParam1)//Position - 0x4EDA
{
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 1084227584);
	vLocal_436 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	vLocal_452 = { vLocal_243 - vLocal_436 };
	ENTITY::SET_ENTITY_HEADING(iParam0, MISC::GET_HEADING_FROM_VECTOR_2D(vLocal_452.x, vLocal_452.y));
	if (bLocal_267)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				BRAIN::TASK_VEHICLE_CHASE(iParam1, PLAYER::PLAYER_PED_ID());
				SYSTEM::WAIT(1);
				if (!PED::IS_PED_INJURED(iParam1))
				{
					BRAIN::SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(iParam1, 32, 1);
				}
			}
			else
			{
				BRAIN::TASK_VEHICLE_MISSION_PED_TARGET(iParam1, iParam0, PLAYER::PLAYER_PED_ID(), 6, 20f, 786469, -1f, -1f, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()));
			}
		}
	}
	else if (!PED::IS_PED_INJURED(iParam1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			BRAIN::TASK_VEHICLE_CHASE(iParam1, PLAYER::PLAYER_PED_ID());
		}
		else
		{
			BRAIN::TASK_VEHICLE_MISSION_PED_TARGET(iParam1, iParam0, PLAYER::PLAYER_PED_ID(), 2, 100f, 786469, -1f, -1f, 1);
		}
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()));
	}
}

void func_92()//Position - 0x4FE2
{
	int iVar0;
	
	iLocal_166[0] = VEHICLE::CREATE_VEHICLE(joaat("rebel"), -1595.964f, 4732.479f, 0f, 305f, true, true, false);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_166[0], true, 0);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_166[0], true, true, 0);
	VEHICLE::SET_VEHICLE_LIGHTS(iLocal_166[0], 2);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_166[0], true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_166[0], true);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_166[0], "49GNL112");
	iLocal_166[1] = VEHICLE::CREATE_VEHICLE(joaat("rebel"), -1570.34f, 4733.755f, 0f, 305f, true, true, false);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_166[1], true, 0);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_166[1], true, true, 0);
	VEHICLE::SET_VEHICLE_LIGHTS(iLocal_166[1], 2);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_166[1], true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_166[1], true);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_166[1], "47TMS703");
	iLocal_176[0] = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), Vector(0f, 4732.479f, -1595.964f) + Vector(10f, 10f, 10f), 305f, true, true, false);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_176[0], true, 0);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_176[0], true, true, 0);
	VEHICLE::SET_VEHICLE_LIGHTS(iLocal_176[0], 2);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_176[0], true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_176[0], true);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_176[0], "49GNL112");
	iLocal_176[1] = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), Vector(0f, 4733.755f, -1570.34f) + Vector(10f, 10f, 10f), 305f, true, true, false);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_176[1], true, 0);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_176[1], true, true, 0);
	VEHICLE::SET_VEHICLE_LIGHTS(iLocal_176[1], 2);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_176[1], true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_176[1], true);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_176[1], "47TMS703");
	iLocal_150[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_166[0], 26, joaat("g_m_m_chigoon_02"), -1, 1, true);
	iLocal_150[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_166[1], 26, joaat("g_m_m_chigoon_02"), -1, 1, true);
	if (!bLocal_267)
	{
		iLocal_150[2] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_166[0], 26, joaat("g_m_m_chigoon_02"), 0, 1, true);
		iLocal_150[3] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_166[1], 26, joaat("g_m_m_chigoon_02"), 0, 1, true);
	}
	iLocal_171[0] = VEHICLE::CREATE_VEHICLE(joaat("bobcatxl"), -1356.281f, 5000f, 0f, 125.2811f, true, true, false);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_171[0], true, 0);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_171[0], true, true, 0);
	VEHICLE::SET_VEHICLE_LIGHTS(iLocal_171[0], 2);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_171[0], true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_171[0], true);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_171[0], "49GNL112");
	iLocal_171[1] = VEHICLE::CREATE_VEHICLE(joaat("bobcatxl"), -1373.589f, 5000f, 0f, 125.459f, true, true, false);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_171[1], true, 0);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_171[1], true, true, 0);
	VEHICLE::SET_VEHICLE_LIGHTS(iLocal_171[1], 2);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_171[1], true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_171[1], true);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_171[1], "47TMS703");
	iLocal_155[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_171[0], 26, joaat("g_m_y_salvagoon_03"), -1, 1, true);
	iLocal_155[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_171[1], 26, joaat("g_m_y_salvagoon_03"), -1, 1, true);
	iLocal_155[2] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_171[0], 26, joaat("g_m_y_salvagoon_03"), 0, 1, true);
	iLocal_155[3] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_171[1], 26, joaat("g_m_y_salvagoon_03"), 0, 1, true);
	PED::ADD_RELATIONSHIP_GROUP("RE_deal1", &iLocal_268);
	PED::ADD_RELATIONSHIP_GROUP("RE_deal2", &iLocal_269);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!PED::IS_PED_INJURED(iLocal_150[iVar0]))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_150[iVar0], iLocal_268);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_150[iVar0], true, 0);
			if (bLocal_267)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_150[0], joaat("weapon_sawnoffshotgun"), -1, true, true);
				if (!PED::IS_PED_INJURED(iLocal_150[1]))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_150[1], joaat("weapon_pistol"), -1, true, true);
				}
				PED::SET_PED_ACCURACY(iLocal_150[iVar0], 15);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_150[iVar0], 3, false);
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_150[iVar0], joaat("weapon_pistol"), -1, true, true);
				PED::SET_PED_ACCURACY(iLocal_150[iVar0], 13);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_150[iVar0], 13, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_150[iVar0], 2, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_150[iVar0], 1, true);
			func_93(&uLocal_271, 4, iLocal_150[iVar0], "REDGWChinese", 0, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!PED::IS_PED_INJURED(iLocal_150[iVar0]))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_155[iVar0], iLocal_269);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_155[iVar0], true, 0);
			if (bLocal_267)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_150[0], joaat("weapon_sawnoffshotgun"), -1, true, true);
				if (!PED::IS_PED_INJURED(iLocal_150[1]))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_150[1], joaat("weapon_pistol"), -1, true, true);
				}
				PED::SET_PED_ACCURACY(iLocal_150[iVar0], 15);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_150[iVar0], 3, false);
				func_93(&uLocal_271, 4, iLocal_150[iVar0], "REDGWChinese", 0, 1);
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_155[iVar0], joaat("weapon_pistol"), -1, true, true);
				PED::SET_PED_ACCURACY(iLocal_155[iVar0], 13);
				func_93(&uLocal_271, 5, iLocal_155[iVar0], "REDGWSalvadoran", 0, 1);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_155[iVar0], 13, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_155[iVar0], 2, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_155[iVar0], 1, true);
		}
		iVar0++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_268, iLocal_269);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_269, iLocal_268);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_268, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_269, 1862763509);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_m_chigoon_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_salvagoon_03"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rebel"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bobcatxl"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sanchez"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_c_rottweiler"));
	bLocal_456 = true;
	iLocal_46 = 1;
}

void func_93(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x557C
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

void func_94()//Position - 0x5617
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iLocal_130)
	{
		case 0:
			if (bLocal_264)
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (!PED::IS_PED_INJURED(iLocal_150[iVar0]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_150[iVar0], 100f, 100f, 20f, 0, 1, 0))
						{
							iLocal_130 = 3;
						}
					}
					iVar0++;
				}
			}
			if (bLocal_265)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (!PED::IS_PED_INJURED(iLocal_155[iVar1]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_155[iVar1], 100f, 100f, 20f, 0, 1, 0))
						{
							iLocal_130 = 3;
						}
					}
					iVar1++;
				}
			}
			break;
		
		case 3:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_268, iLocal_269);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_269, iLocal_268);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_268, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_269, 1862763509);
			if (bLocal_264)
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (!PED::IS_PED_INJURED(iLocal_150[iVar2]))
					{
						if ((!PED::IS_PED_IN_COMBAT(iLocal_150[iVar2], 0) && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_150[iVar2], 579380604) != 1) && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_150[iVar2], 579380604) != 0)
						{
							BRAIN::CLEAR_PED_TASKS(iLocal_150[iVar2]);
							BRAIN::TASK_COMBAT_PED(iLocal_150[iVar2], PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::SET_PED_KEEP_TASK(iLocal_150[iVar2], true);
						}
					}
					iVar2++;
				}
				if (func_80(&uLocal_271, "REDGWAU", "REDGW_FIRE_C", 4, 0, 0, 0))
				{
					iLocal_127 = MISC::GET_GAME_TIMER();
					iLocal_130 = 4;
				}
			}
			if (bLocal_265)
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (!PED::IS_PED_INJURED(iLocal_155[iVar3]))
					{
						if ((!PED::IS_PED_IN_COMBAT(iLocal_155[iVar3], 0) && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_155[iVar3], 579380604) != 1) && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_155[iVar3], 579380604) != 0)
						{
							BRAIN::CLEAR_PED_TASKS(iLocal_155[iVar3]);
							BRAIN::TASK_COMBAT_PED(iLocal_155[iVar3], PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::SET_PED_KEEP_TASK(iLocal_155[iVar3], true);
						}
					}
					iVar3++;
				}
				if (func_80(&uLocal_271, "REDGWAU", "REDGW_FIRE_S", 4, 0, 0, 0))
				{
					iLocal_127 = MISC::GET_GAME_TIMER();
					iLocal_130 = 4;
				}
			}
			break;
	}
}

void func_95()//Position - 0x584C
{
	switch (iLocal_128)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_136))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_237, 7f, 7f, 10f, false, true, 0))
				{
					func_97();
					SYSTEM::WAIT(0);
					func_80(&uLocal_271, "REDGWAU", "REDGW_NTOUCH", 4, 0, 0, 0);
					BRAIN::TASK_LOOK_AT_ENTITY(iLocal_136, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					if (!HUD::DOES_BLIP_EXIST(iLocal_182))
					{
						iLocal_182 = func_96(iLocal_214);
					}
					iLocal_127 = MISC::GET_GAME_TIMER();
					iLocal_128++;
				}
			}
			else
			{
				iLocal_128++;
			}
			break;
	}
	switch (iLocal_129)
	{
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_136))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_136, 10f, 10f, 6f, 0, 1, 0))
				{
					if (!func_66())
					{
						func_80(&uLocal_271, "REDGWAU", "REDGW_NKILLD", 4, 0, 0, 0);
						if (!PED::IS_PED_INJURED(iLocal_136))
						{
							BRAIN::TASK_LOOK_AT_ENTITY(iLocal_136, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
							SYSTEM::SETTIMERB(0);
							iLocal_129++;
						}
					}
				}
			}
			else
			{
				SYSTEM::SETTIMERB(0);
				iLocal_129++;
			}
			break;
		
		case 2:
			if (!func_66() || SYSTEM::TIMERB() > 4000)
			{
				if (!PED::IS_PED_INJURED(iLocal_136))
				{
					ENTITY::SET_ENTITY_HEALTH(iLocal_136, 0, 0);
					HUD::REMOVE_BLIP(&iLocal_183);
				}
				if (SYSTEM::TIMERB() > 7000)
				{
					if (!PED::IS_PED_INJURED(iLocal_137[6]))
					{
						ENTITY::SET_ENTITY_HEALTH(iLocal_137[6], 0, 0);
						HUD::REMOVE_BLIP(&(iLocal_184[6]));
					}
				}
				if (SYSTEM::TIMERB() > 9000)
				{
					if (!PED::IS_PED_INJURED(iLocal_137[7]))
					{
						ENTITY::SET_ENTITY_HEALTH(iLocal_137[7], 0, 0);
						HUD::REMOVE_BLIP(&(iLocal_184[7]));
					}
					iLocal_129++;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_137[6]))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_137[6], 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_137[7]))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_137[7], 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_136))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_136, 0, 0);
			}
			break;
	}
}

int func_96(int iParam0)//Position - 0x5A3B
{
	int iVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_PICKUP(iParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_69(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return iVar0;
}

void func_97()//Position - 0x5A73
{
	Global_14732 = 0;
	func_98();
}

void func_98()//Position - 0x5A83
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16877 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15866 = 6;
	}
}

void func_99()//Position - 0x5AA4
{
	int iVar0;
	
	if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_214))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_181))
		{
			HUD::REMOVE_BLIP(&iLocal_181);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_182))
		{
			HUD::REMOVE_BLIP(&iLocal_182);
		}
		iLocal_129 = 1;
		iLocal_47 = 2;
		iLocal_46 = 0;
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_137[iVar0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_137[iVar0]))
				{
					if (iVar0 == 0)
					{
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_184[iVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_184[iVar0]));
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_147)
		{
			if (!PED::IS_PED_INJURED(iLocal_147[iVar0]))
			{
			}
			iVar0++;
		}
		if (!func_127())
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_52[7 /*3*/], 110f, 95f, 40f, false, true, 0))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_181))
				{
					HUD::REMOVE_BLIP(&iLocal_181);
				}
				if ((!HUD::DOES_BLIP_EXIST(iLocal_183) && !HUD::DOES_BLIP_EXIST(iLocal_184[6])) && !HUD::DOES_BLIP_EXIST(iLocal_184[7]))
				{
					iLocal_183 = func_70(iLocal_136, 1, 145);
					iLocal_184[6] = func_70(iLocal_137[6], 1, 145);
					iLocal_184[7] = func_70(iLocal_137[7], 1, 145);
				}
				HUD::_0x75A16C3DA34F1245(iLocal_183, false);
				HUD::_0x75A16C3DA34F1245(iLocal_184[6], false);
				HUD::_0x75A16C3DA34F1245(iLocal_184[7], false);
				func_100(1);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_137[6]))
		{
			if (((((BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_137[6], 1785177548) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_137[6], 1785177548) != 0) || FIRE::IS_ENTITY_ON_FIRE(iLocal_137[6])) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_137[6])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_137[6])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(iLocal_137[6]))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_137[6], 0, 0);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_137[7]))
		{
			if (((((BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_137[7], 1785177548) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_137[7], 1785177548) != 0) || FIRE::IS_ENTITY_ON_FIRE(iLocal_137[7])) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_137[7])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_137[7])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(iLocal_137[7]))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_137[7], 0, 0);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_136))
		{
			if (((((BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_136, 1785177548) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_136, 1785177548) != 0) || FIRE::IS_ENTITY_ON_FIRE(iLocal_136)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_136)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_136)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(iLocal_136))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_136, 0, 0);
			}
		}
		if (!bLocal_263)
		{
		}
	}
	func_95();
	switch (iLocal_131)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_137[6]))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_137[6], true) + Vector(0f, 2.5f, 0f), 9f, 5f, 5f, false, true, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(PLAYER::PLAYER_PED_ID(), iLocal_137[6]))
				{
					BRAIN::TASK_LOOK_AT_ENTITY(iLocal_137[6], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					BRAIN::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_137[6], 4000, 2048, 2);
					func_80(&uLocal_271, "REDGWAU", "REDGW_NDIE", 4, 0, 0, 0);
					iLocal_127 = MISC::GET_GAME_TIMER();
					iLocal_131 = 1;
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_137[7]))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_137[7], true) + Vector(0f, 3f, 0f), 9f, 7f, 5f, false, true, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(PLAYER::PLAYER_PED_ID(), iLocal_137[7]))
				{
					BRAIN::TASK_LOOK_AT_ENTITY(iLocal_137[7], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					BRAIN::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_137[7], 4000, 2048, 2);
					func_80(&uLocal_271, "REDGWAU", "REDGW_NDIE1", 4, 0, 0, 0);
					iLocal_127 = MISC::GET_GAME_TIMER();
					iLocal_131 = 1;
				}
			}
			if (PED::IS_PED_INJURED(iLocal_137[6]) && PED::IS_PED_INJURED(iLocal_137[7]))
			{
				iLocal_131 = 2;
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(iLocal_183))
			{
				HUD::_0x75A16C3DA34F1245(iLocal_183, true);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_184[6]))
			{
				HUD::_0x75A16C3DA34F1245(iLocal_184[6], true);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_184[7]))
			{
				HUD::_0x75A16C3DA34F1245(iLocal_184[7], true);
			}
			iLocal_126 = MISC::GET_GAME_TIMER();
			if ((iLocal_126 - iLocal_127) > 6000 && !func_66())
			{
				if (!PED::IS_PED_INJURED(iLocal_137[6]))
				{
				}
				if (!PED::IS_PED_INJURED(iLocal_137[7]))
				{
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_182))
				{
					iLocal_182 = func_96(iLocal_214);
				}
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				if (!func_127())
				{
					func_100(1);
				}
				iLocal_131 = 2;
			}
			break;
	}
}

int func_100(int iParam0)//Position - 0x5F55
{
	if (func_104())
	{
		Global_106555 = 1;
		Global_106552 = MISC::GET_GAME_TIMER();
		if (func_54(Global_106554))
		{
			func_101(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_54(Global_106554))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_101(int iParam0)//Position - 0x5FA8
{
	switch (iParam0)
	{
		case 0:
			if (Global_106565.f_24989.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_102(func_103(iParam0), -1);
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
					func_102(func_103(iParam0), -1);
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
					func_102(func_103(iParam0), -1);
					Global_106565.f_24989.f_4++;
					MISC::SET_BIT(&Global_106561, 2);
				}
			}
			break;
	}
}

void func_102(char* sParam0, int iParam1)//Position - 0x6089
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

char* func_103(int iParam0)//Position - 0x60A0
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

int func_104()//Position - 0x60E3
{
	switch (func_105(&Global_25824, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_105(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x6119
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
		if (func_109(0))
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
		if (!func_107(iParam2))
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
			func_106(uParam0, iParam4);
		}
	}
	return 2;
}

void func_106(var uParam0, int iParam1)//Position - 0x6250
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

bool func_107(int iParam0)//Position - 0x629F
{
	return func_108(iParam0, Global_36425);
}

int func_108(int iParam0, int iParam1)//Position - 0x62B0
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

int func_109(int iParam0)//Position - 0x6491
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_107(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_110()//Position - 0x64B3
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_160[0], 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_160[0], -1, 0) == iLocal_137[8])
		{
			AUDIO::_0x9D3AF56E94C9AE98(iLocal_160[0], 60000f);
			AUDIO::_SOUND_VEHICLE_HORN_THIS_FRAME(iLocal_160[0]);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_136))
	{
		if (PED::IS_PED_RAGDOLL(iLocal_136))
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_136, 0, 0);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_183))
	{
		HUD::REMOVE_BLIP(&iLocal_183);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!CAM::IS_SPHERE_VISIBLE(vLocal_234, 30f) && SYSTEM::VDIST(func_2(PLAYER::PLAYER_ID()), vLocal_234) > 300f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_137[iVar0]))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_137[iVar0]));
			}
		}
		if (PED::IS_PED_INJURED(iLocal_137[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_184[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_184[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_111()//Position - 0x659B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	STREAMING::REQUEST_MODEL(joaat("g_m_m_chigoon_02"));
	STREAMING::REQUEST_MODEL(joaat("g_m_y_salvagoon_03"));
	STREAMING::REQUEST_MODEL(joaat("rebel"));
	STREAMING::REQUEST_MODEL(joaat("bobcatxl"));
	STREAMING::REQUEST_MODEL(joaat("sanchez"));
	STREAMING::REQUEST_MODEL(joaat("a_c_rottweiler"));
	STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
	STREAMING::REQUEST_ANIM_DICT("random@dealgonewrong");
	STREAMING::REQUEST_ANIM_DICT("random@dealgonewrongdead_peds");
	if ((((((((STREAMING::HAS_MODEL_LOADED(joaat("g_m_m_chigoon_02")) && STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_salvagoon_03"))) && STREAMING::HAS_MODEL_LOADED(joaat("rebel"))) && STREAMING::HAS_MODEL_LOADED(joaat("bobcatxl"))) && STREAMING::HAS_MODEL_LOADED(joaat("sanchez"))) && STREAMING::HAS_MODEL_LOADED(joaat("a_c_rottweiler"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_security_case_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@dealgonewrong")) && STREAMING::HAS_ANIM_DICT_LOADED("random@dealgonewrongdead_peds"))
	{
		PED::ADD_SCENARIO_BLOCKING_AREA(vLocal_234 - Vector(150f, 150f, 150f), vLocal_234 + Vector(150f, 150f, 150f), 0, 1, 1, 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bobcatxl"), true);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rebel"), true);
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		iLocal_160[0] = VEHICLE::CREATE_VEHICLE(joaat("bobcatxl"), -1626.94f, 4729.889f, 51.3463f, 347.1188f, true, true, false);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_160[0], true, 0);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_160[0], 1084227584);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_160[0], true, true, 0);
		VEHICLE::SET_VEHICLE_LIGHTS(iLocal_160[0], 2);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_160[0], 500f);
		VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_160[0], 500f);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_160[0], 1, true);
		VEHICLE::SET_VEHICLE_TYRE_BURST(iLocal_160[0], 0, 0, 1148846080);
		VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_160[0], 6);
		AUDIO::SET_VEH_RADIO_STATION(iLocal_160[0], "RADIO_06_COUNTRY");
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_160[0], "76JON418");
		AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_160[0], true);
		iLocal_160[1] = VEHICLE::CREATE_VEHICLE(joaat("rebel"), -1619.432f, 4747.792f, 52.7502f, 146.6017f, true, true, false);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_160[1], true, 0);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_160[1], 1084227584);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_160[1], true, true, 0);
		VEHICLE::SET_VEHICLE_LIGHTS(iLocal_160[1], 2);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_160[1], 600f);
		VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_160[1], 400f);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_160[1], 1, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_160[1], 2, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_160[1], 3, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_160[1], 4, false);
		VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_160[1], 6);
		AUDIO::SET_VEH_RADIO_STATION(iLocal_160[1], "RADIO_06_COUNTRY");
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_160[1], "79ERK121");
		AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_160[1], true);
		AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_160[1], 1);
		iLocal_160[2] = VEHICLE::CREATE_VEHICLE(joaat("bobcatxl"), -1636.216f, 4748.061f, 51.5484f, 199.3236f, true, true, false);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_160[2], "83JOH802");
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_160[2], true, 0);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_160[2], 1084227584);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_160[2], true, true, 0);
		VEHICLE::SET_VEHICLE_LIGHTS(iLocal_160[2], 2);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_160[2], 60f);
		VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_160[2], 1000f);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_160[2], 1, false);
		VEHICLE::SET_VEHICLE_TYRE_BURST(iLocal_160[2], 1, 0, 1148846080);
		iLocal_160[3] = VEHICLE::CREATE_VEHICLE(joaat("rebel"), -1641.578f, 4736.783f, 52.5984f, 278.1865f, true, true, false);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_160[3], "85TOR114");
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_160[3], true, 0);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_160[3], 1084227584);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_160[3], true, true, 0);
		VEHICLE::SET_VEHICLE_LIGHTS(iLocal_160[3], 2);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_160[3], 500f);
		VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_160[3], 500f);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_160[3], 1, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_160[3], 2, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_160[3], 3, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_160[3], 4, false);
		VEHICLE::SET_VEHICLE_TYRE_BURST(iLocal_160[3], 0, 0, 1148846080);
		VEHICLE::SET_VEHICLE_TYRE_BURST(iLocal_160[3], 5, 0, 1148846080);
		if (!OBJECT::DOES_PICKUP_EXIST(iLocal_214))
		{
			iVar0 = 0;
			MISC::SET_BIT(&iVar0, 1);
			MISC::SET_BIT(&iVar0, 3);
			MISC::SET_BIT(&iVar0, 4);
			iLocal_214 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), vLocal_237, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_security_case_01"));
		}
		vLocal_246[0 /*3*/] = { -1640.411f, 4740.702f, 52.6218f };
		vLocal_246[1 /*3*/] = { -1624.664f, 4746.569f, 51.541f };
		vLocal_246[2 /*3*/] = { -1626.339f, 4734.232f, 51.6176f };
		vLocal_246[3 /*3*/] = { -1634.297f, 4741.213f, 51.9737f };
		vLocal_246[4 /*3*/] = { -1644.717f, 4736.446f, 52.3014f };
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!OBJECT::DOES_PICKUP_EXIST(iLocal_215[iVar1]))
			{
				iVar2 = 0;
				MISC::SET_BIT(&iVar2, 3);
				MISC::SET_BIT(&iVar2, 4);
				if (iVar1 < 2)
				{
					iLocal_215[iVar1] = OBJECT::CREATE_PICKUP(joaat("pickup_weapon_sawnoffshotgun"), vLocal_246[iVar1 /*3*/], iVar2, -1, 1, 0);
				}
				else if (iVar1 == 4)
				{
					iLocal_215[iVar1] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_weapon_assaultrifle"), vLocal_246[iVar1 /*3*/], 90f, 50f, 0f, 0, 50, 2, 1, 0);
				}
				else
				{
					iLocal_215[iVar1] = OBJECT::CREATE_PICKUP(joaat("pickup_weapon_pistol"), vLocal_246[iVar1 /*3*/], iVar2, -1, 1, 0);
				}
			}
			iVar1++;
		}
		vLocal_52[0 /*3*/] = { -1636.535f, 4708.455f, 46.09f };
		fLocal_80[0] = 177.0024f;
		vLocal_52[1 /*3*/] = { -1621.19f, 4744.868f, 52.4254f };
		fLocal_80[1] = 146.9645f;
		vLocal_52[2 /*3*/] = { -1622.795f, 4735.975f, 51.474f };
		fLocal_80[2] = 48.6546f;
		vLocal_52[3 /*3*/] = { -1632.695f, 4742.906f, 51.8604f };
		fLocal_80[3] = 155.0678f;
		vLocal_52[4 /*3*/] = { -1629.544f, 4738.6f, 52.1784f };
		fLocal_80[4] = 278.3085f;
		vLocal_52[5 /*3*/] = { -1634.764f, 4745.188f, 51.3926f };
		fLocal_80[5] = 270.3501f;
		vLocal_52[7 /*3*/] = { -1628.321f, 4731.502f, 51.7644f };
		fLocal_80[7] = 352.9167f;
		vLocal_52[6 /*3*/] = { -1640.311f, 4738.4f, 52.2f };
		fLocal_80[6] = 34.1111f;
		vLocal_117 = { -1641.735f, 4692.13f, 39.394f };
		fLocal_123 = 326.7277f;
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (iVar1 <= 3)
			{
				iLocal_137[iVar1] = PED::CREATE_PED(22, joaat("g_m_y_salvagoon_03"), vLocal_52[iVar1 /*3*/], fLocal_80[iVar1], 1, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_137[iVar1], 227, true);
			}
			else
			{
				iLocal_137[iVar1] = PED::CREATE_PED(22, joaat("g_m_m_chigoon_02"), vLocal_52[iVar1 /*3*/], fLocal_80[iVar1], 1, true);
			}
			iVar1++;
		}
		iLocal_147[0] = PED::CREATE_PED(26, joaat("a_c_rottweiler"), -1635.005f, 4737.181f, 53.4995f, 33.4155f, 1, true);
		iLocal_147[1] = PED::CREATE_PED(26, joaat("a_c_rottweiler"), -1625.215f, 4741.119f, 52.5762f, 316.2733f, 1, true);
		iVar1 = 0;
		while (iVar1 < iLocal_147)
		{
			PED::SET_PED_CAN_RAGDOLL(iLocal_147[iVar1], 1);
			ENTITY::SET_ENTITY_COLLISION(iLocal_147[iVar1], true, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_147[iVar1], 227, true);
			vLocal_90 = { ENTITY::GET_ENTITY_COORDS(iLocal_147[iVar1], true) };
			vLocal_93 = { vLocal_90.x, (vLocal_90.y - 2f), (vLocal_90.z - 0.5f) };
			vLocal_96 = { vLocal_90.x, (vLocal_90.y + 50f), (vLocal_90.z - 0.5f) };
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(vLocal_93, vLocal_96, 100, 1, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			iVar1++;
		}
		BRAIN::TASK_PLAY_ANIM_ADVANCED(iLocal_137[0], "random@dealgonewrongdead_peds", "ped_b", -1635.928f, 4707.941f, 46.383f, -29.25f, 12.25f, 171.75f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		BRAIN::TASK_PLAY_ANIM_ADVANCED(iLocal_137[1], "random@dealgonewrongdead_peds", "ped_a", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		BRAIN::TASK_PLAY_ANIM_ADVANCED(iLocal_137[2], "random@dealgonewrongdead_peds", "ped_b", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		BRAIN::TASK_PLAY_ANIM_ADVANCED(iLocal_137[3], "random@dealgonewrongdead_peds", "ped_c", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		BRAIN::TASK_PLAY_ANIM_ADVANCED(iLocal_137[4], "random@dealgonewrongdead_peds", "ped_d", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		BRAIN::TASK_PLAY_ANIM_ADVANCED(iLocal_137[5], "random@dealgonewrongdead_peds", "ped_e", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		BRAIN::TASK_PLAY_ANIM_ADVANCED(iLocal_147[0], "random@dealgonewrongdead_peds", "dog_a", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		BRAIN::TASK_PLAY_ANIM_ADVANCED(iLocal_147[1], "random@dealgonewrongdead_peds", "dog_b", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		GRAPHICS::_0x46D1A61A21F566FC(50f);
		func_113();
		GRAPHICS::_0x46D1A61A21F566FC(1f);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_160[0], 0))
		{
			iLocal_137[8] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_160[0], 26, joaat("g_m_y_salvagoon_03"), -1, 1, true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_137[8], true, 0);
			PED::SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(iLocal_137[8], 1);
			ENTITY::SET_ENTITY_HEALTH(iLocal_137[8], 0, 0);
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_181))
		{
		}
		PED::ADD_RELATIONSHIP_GROUP("re_DealGoneWrong", &iLocal_270);
		iLocal_137[6] = PED::CREATE_PED(22, joaat("g_m_m_chigoon_02"), vLocal_52[6 /*3*/], fLocal_80[6], 1, true);
		func_93(&uLocal_271, 4, iLocal_137[6], "REDGWChinese", 0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_137[6], true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_137[6], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_137[6], iLocal_270);
		iVar3 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_52[6 /*3*/] + Vector(1.05f, 0f, 0f), -7f, 0f, 34.1111f, 0);
		BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_137[6], iVar3, "random@dealgonewrong", "base", 8f, -8f, 5, 0, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar3, true);
		PED::SET_PED_KEEP_TASK(iLocal_137[6], true);
		PED::SET_PED_CONFIG_FLAG(iLocal_137[6], 227, true);
		iLocal_137[7] = PED::CREATE_PED(22, joaat("g_m_y_salvagoon_03"), -1640.311f, 4738.4f, 50.2f, fLocal_80[7], 1, true);
		func_93(&uLocal_271, 5, iLocal_137[7], "REDGWSalvadoran", 0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_137[7], true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_137[7], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_137[7], iLocal_270);
		iVar4 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_52[7 /*3*/] + Vector(0.92f, 0.65f, -0.65f), 0f, 0f, 34.1111f, 0);
		BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_137[7], iVar4, "random@dealgonewrong", "idle_a", 8f, -8f, 5, 0, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar4, true);
		PED::SET_SYNCHRONIZED_SCENE_PHASE(iVar4, 0.5f);
		PED::SET_PED_KEEP_TASK(iLocal_137[7], true);
		PED::SET_PED_CONFIG_FLAG(iLocal_137[7], 227, true);
		iLocal_136 = PED::CREATE_PED(22, joaat("g_m_m_chigoon_02"), vLocal_117, fLocal_123, 1, true);
		func_93(&uLocal_271, 4, iLocal_136, "REDGWChinese", 0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_136, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_136, iLocal_270);
		iVar5 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_117, 7.5f, -12.75f, 51.5f, 0);
		BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_136, iVar5, "random@dealgonewrong", "idle_b", 8f, -8f, 5, 0, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar5, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_136, 4f, 18f, 326.7277f, 0, 1);
		PED::SET_PED_KEEP_TASK(iLocal_136, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_136, 227, true);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_270, 1862763509);
		if (func_39() == 0)
		{
			func_93(&uLocal_271, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		if (func_39() == 1)
		{
			func_93(&uLocal_271, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		if (func_39() == 2)
		{
			func_93(&uLocal_271, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		iLocal_221[0] = GRAPHICS::ADD_DECAL(1110, -1632.953f, 4745.359f, 51.7876f, 0f, 0f, -1f, func_112(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		iLocal_221[1] = GRAPHICS::ADD_DECAL(1110, -1634.87f, 4744.458f, 51.8233f, 0f, 0f, -1f, func_112(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		iLocal_221[2] = GRAPHICS::ADD_DECAL(1110, -1636.971f, 4736.595f, 52.2814f, 0f, 0f, -1f, func_112(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		iLocal_221[3] = GRAPHICS::ADD_DECAL(1110, -1625.561f, 4741.241f, 51.7102f, 0f, 0f, -1f, func_112(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		iLocal_221[4] = GRAPHICS::ADD_DECAL(1110, -1621.533f, 4744.576f, 51.9093f, 0f, 0f, -1f, func_112(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		iLocal_221[5] = GRAPHICS::ADD_DECAL(1110, -1621.963f, 4737.039f, 51.4174f, 0f, 0f, -1f, func_112(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		iLocal_221[6] = GRAPHICS::ADD_DECAL(1110, -1628.517f, 4736.906f, 51.8207f, 0f, 0f, -1f, func_112(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		iLocal_221[7] = GRAPHICS::ADD_DECAL(1110, -1629.324f, 4732.146f, 51.6947f, 0f, 0f, -1f, func_112(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		iLocal_221[8] = GRAPHICS::ADD_DECAL(1110, -1640.287f, 4738.437f, 52.1756f, 0f, 0f, -1f, func_112(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		iLocal_221[9] = GRAPHICS::ADD_DECAL(1110, -1640.055f, 4701.995f, 41.2428f, 0f, 0f, -1f, func_112(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		iLocal_221[10] = GRAPHICS::ADD_DECAL(1110, -1641.924f, 4692.236f, 38.3762f, 0f, 0f, -1f, func_112(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_137[iVar1], 0))
			{
				PED::SET_PED_CAN_RAGDOLL(iLocal_137[iVar1], 1);
				PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(iLocal_137[iVar1], 0, 0.3f, 0.6f, 3);
				PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(iLocal_137[iVar1], 0, 0.65f, 0.6f, 3);
				SYSTEM::WAIT(MISC::GET_RANDOM_INT_IN_RANGE(100, 500));
				if (iVar1 <= 5)
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_184[iVar1]))
					{
						HUD::REMOVE_BLIP(&(iLocal_184[iVar1]));
					}
				}
			}
			iVar1++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true, 0);
			}
		}
		iLocal_455 = 1;
	}
}

Vector3 func_112(vector3 vParam0)//Position - 0x756E
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

void func_113()//Position - 0x75AD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		SYSTEM::WAIT(0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_160[iVar0]))
		{
			vLocal_99 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_160[iVar0], 0f, 0f, 0.5f) };
		}
		iLocal_133 = 0;
		while (iLocal_133 < 5)
		{
			fLocal_120 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1.5f, 2.5f);
			fLocal_121 = MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 4f);
			fLocal_122 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.1f, 2f);
			SYSTEM::WAIT(0);
			vLocal_102 = { (vLocal_99.x - fLocal_120), (vLocal_99.y - fLocal_121), (vLocal_99.z + fLocal_122) };
			vLocal_105 = { (vLocal_99.x + fLocal_120), (vLocal_99.y + fLocal_121), vLocal_99.z };
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(vLocal_102, vLocal_105, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			vLocal_102 = { (vLocal_99.x + fLocal_120), (vLocal_99.y + fLocal_121), (vLocal_99.z + fLocal_122) };
			vLocal_105 = { (vLocal_99.x - fLocal_120), (vLocal_99.y - fLocal_121), vLocal_99.z };
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(vLocal_102, vLocal_105, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			vLocal_102 = { (vLocal_99.x + fLocal_120), (vLocal_99.y - fLocal_121), (vLocal_99.z + fLocal_122) };
			vLocal_105 = { (vLocal_99.x - fLocal_120), (vLocal_99.y + fLocal_121), vLocal_99.z };
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(vLocal_102, vLocal_105, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			vLocal_102 = { (vLocal_99.x - fLocal_120), (vLocal_99.y + fLocal_121), (vLocal_99.z + fLocal_122) };
			vLocal_105 = { (vLocal_99.x + fLocal_120), (vLocal_99.y - fLocal_121), vLocal_99.z };
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(vLocal_102, vLocal_105, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			vLocal_102 = { vLocal_99.x, (vLocal_99.y + fLocal_121), (vLocal_99.z + fLocal_122) };
			vLocal_105 = { vLocal_99.x, (vLocal_99.y - fLocal_121), vLocal_99.z };
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(vLocal_102, vLocal_105, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			iLocal_133++;
		}
		iVar0++;
	}
}

int func_114()//Position - 0x7781
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_125())
		{
			return 0;
		}
	}
	if (func_121())
	{
		return 1;
	}
	if (func_115(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_115(float fParam0, bool bParam1)//Position - 0x7807
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
		if (func_41(func_39()))
		{
			iVar36 = func_59();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (MISC::IS_BIT_SET(Global_106565.f_18568[iVar32 /*6*/], 2) && !MISC::IS_BIT_SET(Global_106565.f_18568[iVar32 /*6*/], 3))
				{
					func_116(iVar32, &Var0);
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

void func_116(int iParam0, var uParam1)//Position - 0x78BE
{
	switch (iParam0)
	{
		case 0:
			func_117(uParam1, "Abigail1", func_119(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 1:
			func_117(uParam1, "Abigail2", func_119(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 2:
			func_117(uParam1, "Barry1", func_119(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 3:
			func_117(uParam1, "Barry2", func_119(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_118(iParam0), 1, 1);
			break;
		
		case 4:
			func_117(uParam1, "Barry3", func_119(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 5:
			func_117(uParam1, "Barry3A", func_119(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 6:
			func_117(uParam1, "Barry3C", func_119(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 7:
			func_117(uParam1, "Barry4", func_119(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_118(iParam0), 0, 0);
			break;
		
		case 8:
			func_117(uParam1, "Dreyfuss1", func_119(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 9:
			func_117(uParam1, "Epsilon1", func_119(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 10:
			func_117(uParam1, "Epsilon2", func_119(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 11:
			func_117(uParam1, "Epsilon3", func_119(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 12:
			func_117(uParam1, "Epsilon4", func_119(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 13:
			func_117(uParam1, "Epsilon5", func_119(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 14:
			func_117(uParam1, "Epsilon6", func_119(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 15:
			func_117(uParam1, "Epsilon7", func_119(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 16:
			func_117(uParam1, "Epsilon8", func_119(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 17:
			func_117(uParam1, "Extreme1", func_119(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 18:
			func_117(uParam1, "Extreme2", func_119(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 19:
			func_117(uParam1, "Extreme3", func_119(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 20:
			func_117(uParam1, "Extreme4", func_119(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 21:
			func_117(uParam1, "Fanatic1", func_119(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_118(iParam0), 1, 0);
			break;
		
		case 22:
			func_117(uParam1, "Fanatic2", func_119(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_118(iParam0), 1, 0);
			break;
		
		case 23:
			func_117(uParam1, "Fanatic3", func_119(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_118(iParam0), 0, 1);
			break;
		
		case 24:
			func_117(uParam1, "Hao1", func_119(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_118(iParam0), 0, 1);
			break;
		
		case 25:
			func_117(uParam1, "Hunting1", func_119(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 26:
			func_117(uParam1, "Hunting2", func_119(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 27:
			func_117(uParam1, "Josh1", func_119(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 28:
			func_117(uParam1, "Josh2", func_119(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_118(iParam0), 1, 1);
			break;
		
		case 29:
			func_117(uParam1, "Josh3", func_119(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_118(iParam0), 1, 1);
			break;
		
		case 30:
			func_117(uParam1, "Josh4", func_119(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 31:
			func_117(uParam1, "Maude1", func_119(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 32:
			func_117(uParam1, "Minute1", func_119(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 33:
			func_117(uParam1, "Minute2", func_119(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 34:
			func_117(uParam1, "Minute3", func_119(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 35:
			func_117(uParam1, "MrsPhilips1", func_119(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 36:
			func_117(uParam1, "MrsPhilips2", func_119(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 37:
			func_117(uParam1, "Nigel1", func_119(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 38:
			func_117(uParam1, "Nigel1A", func_119(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_118(iParam0), 1, 1);
			break;
		
		case 39:
			func_117(uParam1, "Nigel1B", func_119(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_118(iParam0), 1, 1);
			break;
		
		case 40:
			func_117(uParam1, "Nigel1C", func_119(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_118(iParam0), 1, 1);
			break;
		
		case 41:
			func_117(uParam1, "Nigel1D", func_119(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_118(iParam0), 1, 1);
			break;
		
		case 42:
			func_117(uParam1, "Nigel2", func_119(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_118(iParam0), 1, 1);
			break;
		
		case 43:
			func_117(uParam1, "Nigel3", func_119(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_118(iParam0), 1, 1);
			break;
		
		case 44:
			func_117(uParam1, "Omega1", func_119(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 45:
			func_117(uParam1, "Omega2", func_119(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 46:
			func_117(uParam1, "Paparazzo1", func_119(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 47:
			func_117(uParam1, "Paparazzo2", func_119(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 48:
			func_117(uParam1, "Paparazzo3", func_119(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 49:
			func_117(uParam1, "Paparazzo3A", func_119(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 50:
			func_117(uParam1, "Paparazzo3B", func_119(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 51:
			func_117(uParam1, "Paparazzo4", func_119(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 52:
			func_117(uParam1, "Rampage1", func_119(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 54:
			func_117(uParam1, "Rampage3", func_119(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 55:
			func_117(uParam1, "Rampage4", func_119(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 56:
			func_117(uParam1, "Rampage5", func_119(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 53:
			func_117(uParam1, "Rampage2", func_119(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 57:
			func_117(uParam1, "TheLastOne", func_119(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 58:
			func_117(uParam1, "Tonya1", func_119(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 59:
			func_117(uParam1, "Tonya2", func_119(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 60:
			func_117(uParam1, "Tonya3", func_119(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 61:
			func_117(uParam1, "Tonya4", func_119(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 62:
			func_117(uParam1, "Tonya5", func_119(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_117(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0x8A74
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

int func_118(int iParam0)//Position - 0x8B05
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

struct<2> func_119(int iParam0)//Position - 0x8E4B
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_120(iParam0) };
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

struct<2> func_120(int iParam0)//Position - 0x8E82
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

int func_121()//Position - 0x92CE
{
	if (func_124() && !func_125())
	{
		return 1;
	}
	if (func_123() && func_122())
	{
		return 1;
	}
	return 0;
}

bool func_122()//Position - 0x9300
{
	return Global_106283 > 0;
}

int func_123()//Position - 0x930E
{
	if (Global_90634 != -1)
	{
		return 1;
	}
	return 0;
}

int func_124()//Position - 0x9323
{
	if (Global_90634 != -1)
	{
		return MISC::IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 20);
	}
	return 0;
}

int func_125()//Position - 0x9349
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

int func_126()//Position - 0x9366
{
	if (!func_107(5))
	{
		return 1;
	}
	if (func_121())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_125())
		{
			return 0;
		}
	}
	if (func_115(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_127()//Position - 0x93C8
{
	if ((Global_106554 == func_63() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_106555)
	{
		return 1;
	}
	return 0;
}

void func_128(int iParam0)//Position - 0x93F3
{
	if (iParam0 == -1)
	{
		iParam0 = func_63();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_130(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_106551 = 0;
	func_129();
}

void func_129()//Position - 0x9429
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

void func_130(int iParam0)//Position - 0x9466
{
	Global_106554 = iParam0;
}

int func_131(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x9474
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
		iParam3 = func_63();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_172())
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
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_125())
			{
				return 0;
			}
		}
		if (!Global_106565.f_9079)
		{
			return 0;
		}
		if (func_47(0))
		{
			return 0;
		}
		if (func_121())
		{
			return 0;
		}
		if (func_171())
		{
			return 0;
		}
		if (Global_106554 != -1)
		{
			return 0;
		}
		if (func_41(func_39()))
		{
			if (func_115(100f, 1) != -1)
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
		if (!func_170(iParam3))
		{
			return 0;
		}
		if (func_41(func_39()))
		{
			if (func_169(func_39()) == 4 || func_169(func_39()) == 5)
			{
				return 0;
			}
		}
		if (func_41(func_39()))
		{
			if (!func_168(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_167(Global_106565.f_24989.f_43[iParam3]))
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
		if (func_166())
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
		if (!func_157(4))
		{
			return 0;
		}
		if (!func_107(5))
		{
			return 0;
		}
		if (func_156(iParam3, iParam4) && !bParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_156(0, 0))
		{
			return 0;
		}
		if (Global_25911)
		{
			return 0;
		}
		if (func_170(30) && !func_156(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_41(func_39()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_106565.f_2357.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_106565.f_2357.f_539.f_2296[iVar4];
				if (func_155(iVar8))
				{
					if (func_133(iVar4))
					{
						if (!func_132(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vVar5) < (210f * 210f))
							{
								if (func_39() != iVar4)
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

bool func_132(vector3 vParam0, vector3 vParam3, bool bParam6)//Position - 0x980E
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_133(int iParam0)//Position - 0x9855
{
	int iVar0;
	
	iVar0 = Global_106565.f_2357.f_539.f_2296[iParam0];
	return func_134(iVar0);
}

int func_134(int iParam0)//Position - 0x9876
{
	return func_135(iParam0, 1);
}

int func_135(int iParam0, int iParam1)//Position - 0x9885
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_155(iParam0))
	{
		return 0;
	}
	func_136(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_136(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x98D8
{
	func_137(func_148(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_137(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x98F6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_147(iParam0, iParam1))
	{
		iVar0 = func_146(iParam1);
		iVar1 = func_144(iParam0);
		iVar2 = (func_144(iParam0) - func_144(iParam1));
		iVar3 = (func_146(iParam0) - func_146(iParam1));
		iVar4 = (func_143(iParam0) - func_143(iParam1));
		iVar5 = (func_142(iParam0) - func_142(iParam1));
		iVar6 = (func_141(iParam0) - func_141(iParam1));
		iVar7 = (func_140(iParam0) - func_140(iParam1));
	}
	else
	{
		iVar0 = func_146(iParam0);
		iVar1 = func_144(iParam1);
		iVar2 = (func_144(iParam1) - func_144(iParam0));
		iVar3 = (func_146(iParam1) - func_146(iParam0));
		iVar4 = (func_143(iParam1) - func_143(iParam0));
		iVar5 = (func_142(iParam1) - func_142(iParam0));
		iVar6 = (func_141(iParam1) - func_141(iParam0));
		iVar7 = (func_140(iParam1) - func_140(iParam0));
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
		iVar4 = (iVar4 + func_139(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_138(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_138(float fParam0, float fParam1, float fParam2)//Position - 0x9AF7
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

int func_139(int iParam0, int iParam1)//Position - 0x9B39
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

int func_140(int iParam0)//Position - 0x9BDB
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_141(int iParam0)//Position - 0x9BEE
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_142(int iParam0)//Position - 0x9C01
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_143(int iParam0)//Position - 0x9C14
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_144(int iParam0)//Position - 0x9C26
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_145(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_145(bool bParam0, int iParam1, int iParam2)//Position - 0x9C4B
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_146(int iParam0)//Position - 0x9C62
{
	return iParam0 & 15;
}

int func_147(int iParam0, int iParam1)//Position - 0x9C6F
{
	int iVar0;
	int iVar1;
	
	if (!func_155(iParam1) || !func_155(iParam0))
	{
		return 1;
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
	iVar0 = func_146(iParam0);
	iVar1 = func_146(iParam1);
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
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_140(iParam0);
	iVar1 = func_140(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_148()//Position - 0x9D7B
{
	var uVar0;
	
	func_154(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_153(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_152(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_151(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_150(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_149(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_149(var uParam0, int iParam1)//Position - 0x9DC1
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

void func_150(var uParam0, int iParam1)//Position - 0x9E47
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_151(var uParam0, int iParam1)//Position - 0x9E7A
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_146(*uParam0);
	iVar1 = func_144(*uParam0);
	if (iParam1 < 1 || iParam1 > func_139(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_152(var uParam0, int iParam1)//Position - 0x9ECB
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_153(var uParam0, int iParam1)//Position - 0x9F05
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_154(var uParam0, int iParam1)//Position - 0x9F40
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_155(int iParam0)//Position - 0x9F7C
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
	iVar0 = func_140(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_141(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_142(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_144(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_146(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_143(iParam0);
	if (iVar5 < 1 || iVar5 > func_139(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_156(int iParam0, int iParam1)//Position - 0xA058
{
	if (MISC::IS_BIT_SET(Global_106565.f_24989.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_157(int iParam0)//Position - 0xA07B
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_39();
				if (!func_41(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_165()) || Global_105612) || Global_25767) || func_164()) || func_88(8, -1)) || func_163()) || func_162()) || func_161()) || func_160()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_165()) || Global_25767) || func_164()) || func_88(8, -1)) || func_161()) || func_163()) || func_162()) || func_160()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_165()) || Global_105612) || Global_25767) || func_164()) || func_88(8, -1)) || func_161()) || func_163()) || func_162()) || func_160()) || Global_106565.f_7682.f_919[iVar0] == 5) || Global_36972 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_165()) || Global_105612) || Global_25767) || func_164()) || func_88(8, -1)) || func_163()) || func_162()) || func_160()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_165() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_88(8, -1)) || func_160()) || func_159()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_88(8, -1) || func_163()) || func_162()) || func_159()) || func_158())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_165()) || Global_25767) || func_164()) || func_88(8, -1)) || func_162()) || func_161()) || func_160()) || Global_106565.f_7682.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_165()) || func_162()) || Global_105612) || Global_25767) || func_164()) || Global_37584) || func_88(8, -1)) || func_161()) || func_159()) || func_160()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_165()) || Global_105612) || Global_25767) || func_164()) || func_88(8, -1)) || func_161()) || func_159()) || func_163()) || func_162()) || func_160())
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

var func_158()//Position - 0xA798
{
	return Global_93721.f_1;
}

int func_159()//Position - 0xA7A6
{
	if (Global_90634 != -1)
	{
		return MISC::IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 13);
	}
	return 0;
}

int func_160()//Position - 0xA7CC
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_161()//Position - 0xA7E6
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

bool func_162()//Position - 0xA810
{
	return Global_93734.f_340 > 0;
}

bool func_163()//Position - 0xA821
{
	return Global_93734.f_339 > 0;
}

var func_164()//Position - 0xA832
{
	return Global_1312867;
}

int func_165()//Position - 0xA83E
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

int func_166()//Position - 0xA85A
{
	func_86();
	if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_167(int iParam0)//Position - 0xA882
{
	return func_147(func_148(), iParam0);
}

int func_168(int iParam0, int iParam1, int iParam2)//Position - 0xA894
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_39();
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

int func_169(int iParam0)//Position - 0xA978
{
	if (!func_41(iParam0))
	{
		return 7;
	}
	return Global_106565.f_7682.f_919[iParam0];
}

bool func_170(int iParam0)//Position - 0xA99C
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_172())
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

int func_171()//Position - 0xA9FA
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

int func_172()//Position - 0xAA3E
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

void func_173()//Position - 0xAAF9
{
	int iVar0;
	
	if (iLocal_455 && !iLocal_262)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		if (HUD::DOES_BLIP_EXIST(iLocal_181))
		{
			HUD::REMOVE_BLIP(&iLocal_181);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_182))
		{
			HUD::REMOVE_BLIP(&iLocal_182);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_194[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_194[iVar0]));
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_204[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_204[iVar0]));
			}
			if (iLocal_48 >= 6)
			{
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(iLocal_150[iVar0]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_150[iVar0], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_266 = true;
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_199[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_199[iVar0]));
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_209[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_209[iVar0]));
			}
			if (iLocal_48 >= 6)
			{
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(iLocal_155[iVar0]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_155[iVar0], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_266 = true;
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_46 >= 1)
		{
			MISC::ENABLE_DISPATCH_SERVICE(5, true);
			MISC::ENABLE_DISPATCH_SERVICE(3, true);
		}
		if (bLocal_266)
		{
			func_3(func_39(), 1, 25000);
		}
	}
	func_174(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_174(int iParam0)//Position - 0xAC71
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_63();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_127())
	{
		func_178(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_106556 = MISC::GET_GAME_TIMER();
		func_177(30000);
		StringCopy(&cVar0, func_176(Global_106554, 1), 64);
		if (func_62(Global_106554) > 0)
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
	func_175(&Global_25824);
	Global_106555 = 0;
	func_130(-1);
}

void func_175(var uParam0)//Position - 0xAD26
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

char* func_176(int iParam0, bool bParam1)//Position - 0xAD63
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

void func_177(int iParam0)//Position - 0xAFAC
{
	Global_36976 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_178(int iParam0)//Position - 0xAFBE
{
	func_179(iParam0, 0, func_184(iParam0));
}

void func_179(int iParam0, int iParam1, int iParam2)//Position - 0xAFD3
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_148();
	func_182(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_181(iParam0, &uVar0);
	Var1 = { func_180(&uVar0) };
}

struct<16> func_180(var uParam0)//Position - 0xB002
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
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
	StringConCat(&Var0, ":", 64);
	iVar16 = func_140(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_143(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_146(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_144(*uParam0), 64);
	return Var0;
}

void func_181(int iParam0, var uParam1)//Position - 0xB0D2
{
	Global_106565.f_24989.f_43[iParam0] = *uParam1;
}

void func_182(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB0EA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_144(*uParam0);
	iVar1 = func_146(*uParam0);
	iVar2 = func_143(*uParam0);
	iVar3 = func_142(*uParam0);
	iVar4 = func_141(*uParam0);
	iVar5 = func_140(*uParam0);
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
	iVar6 = func_139(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_139(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_183(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_183(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB26C
{
	func_154(uParam0, iParam1);
	func_153(uParam0, iParam2);
	func_152(uParam0, iParam3);
	func_150(uParam0, iParam5);
	func_151(uParam0, iParam4);
	func_149(uParam0, iParam6);
}

int func_184(int iParam0)//Position - 0xB2A4
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

