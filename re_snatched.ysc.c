#region Local Var
	var uLocal_0 = 0;
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
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	vector3 vLocal_44 = { 0f, 0f, 0f };
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	vector3 vLocal_52 = { 0f, 0f, 0f };
	float fLocal_55 = 0f;
	vector3 vLocal_56 = { 0f, 0f, 0f };
	vector3 vLocal_59 = { 0f, 0f, 0f };
	vector3 vLocal_62 = { 0f, 0f, 0f };
	vector3 vLocal_65 = { 0f, 0f, 0f };
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	vector3 vLocal_70 = { 0f, 0f, 0f };
	int iLocal_73 = 0;
	bool bLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	bool bLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87[2] = { 0, 0 };
	int iLocal_90[2] = { 0, 0 };
	int iLocal_93[2] = { 0, 0 };
	int iLocal_96[2] = { 0, 0 };
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	vector3 vLocal_110 = { 0f, 0f, 0f };
	vector3 vLocal_113 = { 0f, 0f, 0f };
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125[2] = { 0, 0 };
	int iLocal_128[2] = { 0, 0 };
	var uLocal_131[2] = { 0, 0 };
	int iLocal_134[4] = { 0, 0, 0, 0 };
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144[2] = { 0, 0 };
	int iLocal_147[2] = { 0, 0 };
	int iLocal_150[4] = { 0, 0, 0, 0 };
	int iLocal_155 = 0;
	int iLocal_156[2] = { 0, 0 };
	int iLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	vector3 vLocal_165 = { 0f, 0f, 0f };
	vector3 vLocal_168 = { 0f, 0f, 0f };
	vector3 vLocal_171 = { 0f, 0f, 0f };
	char* sLocal_174 = NULL;
	char* sLocal_175 = NULL;
	var uLocal_176 = 16;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
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
	var uLocal_343 = -1;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 1000;
	var uLocal_351 = 1000;
	var uLocal_352 = 0;
	vector3 vLocal_353 = { 0f, 0f, 0f };
	vector3 vLocal_356 = { 0f, 0f, 0f };
	float fLocal_359 = 0f;
	var uLocal_360 = 0;
	int iLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	var uLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	struct<6> Local_378 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	char* sLocal_386 = NULL;
	char[] cLocal_387[8] = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	struct<19> Local_392 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	struct<7> Local_416[2];
	int iLocal_431[2] = { 0, 0 };
	int iLocal_434[2] = { 0, 0 };
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	struct<18> ScriptParam_0 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	vector3 vVar0;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iLocal_3 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0.001f;
	iLocal_19 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = -1f;
	vLocal_56 = { -1511.194f, 436.5252f, 109.7818f };
	vLocal_59 = { 968.0051f, -127.6078f, 73.3543f };
	vLocal_65 = { -1034.6f, 4918.6f, 205.9f };
	vLocal_70 = { 0.5f, 0.1f, 0.56f };
	sLocal_175 = "chassis";
	vLocal_353 = { 0f, -5f, 0f };
	vLocal_356 = { 1f, -1f, 0f };
	iLocal_369 = joaat("gburrito");
	iLocal_370 = joaat("daemon");
	iLocal_371 = joaat("g_m_y_lost_01");
	iLocal_372 = joaat("g_m_y_lost_02");
	iLocal_373 = joaat("u_f_y_bikerchic");
	StringCopy(&Local_378, "", 24);
	iLocal_384 = -1;
	sLocal_386 = "RANDOM@KIDNAP_GIRL";
	cLocal_387 = "RESNAAU";
	iLocal_438 = -1;
	vLocal_52 = { ScriptParam_0.f_1[0 /*3*/] };
	fLocal_55 = ScriptParam_0.f_17[0];
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_140))
		{
			if (PED::IS_PED_GROUP_MEMBER(iLocal_140, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_140);
				BRAIN::TASK_WANDER_STANDARD(iLocal_140, 1193033728, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_140, 17, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_140, 2, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_140, false);
				PED::SET_PED_KEEP_TASK(iLocal_140, true);
			}
			else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_140, sLocal_386, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 3))
			{
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_140, 1);
				BRAIN::TASK_SMART_FLEE_COORD(iLocal_140, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 150f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_140, true);
			}
		}
		func_250();
	}
	if (func_209(vLocal_52, -1, 0, 0, 0))
	{
		func_206(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	BRAIN::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", false);
	BRAIN::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
	func_205();
	bLocal_83 = false;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!iLocal_105)
		{
			func_204(1);
			iLocal_105 = 1;
		}
		if (!func_203())
		{
			if (func_202())
			{
				func_250();
			}
		}
		RECORDING::_0x208784099002BC30("RE_SN", 0);
		func_201();
		func_200();
		func_198();
		if (!func_203())
		{
			if (TASK::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				switch (iLocal_48)
				{
					case 0:
						if (func_184())
						{
							PLAYER::SET_MAX_WANTED_LEVEL(0);
							iLocal_48 = 1;
						}
						else if (func_172())
						{
							func_250();
						}
						break;
					
					case 1:
						func_171();
						VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.2f);
						if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(iLocal_141)) && !PED::IS_PED_INJURED(iLocal_140))
						{
							if (!HUD::DOES_BLIP_EXIST(iLocal_123))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_140, false) - Vector(7f, 0f, 0f), 142f, 83.75f, 35.25f, false, true, 0))
								{
									if (HUD::DOES_BLIP_EXIST(iLocal_120))
									{
										HUD::REMOVE_BLIP(&iLocal_120);
									}
									if (!HUD::DOES_BLIP_EXIST(iLocal_123))
									{
										HUD::FLASH_MINIMAP_DISPLAY();
										iLocal_123 = func_170(iLocal_142, 1, 0);
									}
								}
							}
							if (iLocal_439 == 0)
							{
								if ((!ENTITY::IS_ENTITY_OCCLUDED(iLocal_155) || !ENTITY::IS_ENTITY_OCCLUDED(iLocal_141)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_140, 40f, 40f, 20f, 0, 1, 0))
								{
									SYSTEM::SETTIMERB(0);
									iLocal_439 = 1;
								}
							}
							if (iLocal_439 == 3)
							{
								PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
								VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_155, true);
								func_161(0);
							}
							else if (!iLocal_101)
							{
								if (func_160() == 2)
								{
									if ((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vLocal_52) < 40f && ENTITY::DOES_ENTITY_EXIST(iLocal_155)) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_155))
									{
										if (func_159(&uLocal_176, cLocal_387, "RESNA_LOST", 8, 0, 0, 0))
										{
											iLocal_101 = 1;
										}
									}
								}
							}
						}
						else
						{
							func_158();
							func_151();
						}
						break;
				}
			}
			else
			{
				func_250();
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_140))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_140, 150f, 150f, 50f, 0, 1, 0) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_155)))
			{
				switch (iLocal_50)
				{
					case 0:
						RECORDING::_0xAF66DCEE6609B148();
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0) && !PED::IS_PED_INJURED(iLocal_142))
						{
							if (PED::IS_PED_IN_VEHICLE(iLocal_142, iLocal_155, 0))
							{
								if (ENTITY::IS_ENTITY_ATTACHED(iLocal_140) && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_142, 242628503) == 7)
								{
									BRAIN::TASK_LOOK_AT_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									BRAIN::OPEN_SEQUENCE_TASK(&iLocal_159);
									BRAIN::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, vLocal_62, 50f, 0, 0, 786469, 7f, 15f);
									BRAIN::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, -859.6284f, 382.7891f, 86.4466f, 50f, 0, 0, 786469, 7f, 15f);
									BRAIN::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, -703.2946f, 287.229f, 82.6848f, 50f, 0, 0, 786469, 7f, 15f);
									BRAIN::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, -496.6651f, 246.5268f, 82.0747f, 50f, 0, 0, 786469, 7f, 15f);
									BRAIN::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, -166.6776f, 250.8786f, 92.4768f, 50f, 0, 0, 786469, 7f, 15f);
									BRAIN::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, 74.5106f, 236.4861f, 108.1344f, 50f, 0, 0, 786469, 7f, 15f);
									BRAIN::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, 278.7988f, 161.9029f, 103.446f, 50f, 0, 0, 786469, 7f, 15f);
									BRAIN::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, 425.6758f, 108.9366f, 99.4329f, 50f, 0, 0, 786469, 7f, 15f);
									BRAIN::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, 729.2792f, -19.616f, 81.9823f, 50f, 0, 0, 786469, 7f, 15f);
									BRAIN::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, vLocal_59, 50f, 0, 0, 786469, 7f, 15f);
									BRAIN::CLOSE_SEQUENCE_TASK(iLocal_159);
									BRAIN::TASK_PERFORM_SEQUENCE(iLocal_142, iLocal_159);
									BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_159);
									iLocal_50 = 1;
								}
							}
						}
						else
						{
							func_149();
							iLocal_50 = 1;
						}
						break;
					
					case 1:
						RECORDING::_0xAF66DCEE6609B148();
						func_148();
						func_118();
						func_117(iLocal_123, iLocal_141, 150f, 1061158912, 0);
						if (((((func_116() || func_115()) || func_113()) || func_112()) || func_111()) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), 1))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_140);
							if (HUD::DOES_BLIP_EXIST(iLocal_123))
							{
								if (HUD::GET_BLIP_COLOUR(iLocal_123) != 1)
								{
									HUD::SET_BLIP_AS_FRIENDLY(iLocal_123, false);
									HUD::SET_BLIP_COLOUR(iLocal_123, 1);
								}
							}
							func_149();
							func_109(&uLocal_341, 0, 0);
							iLocal_50 = 2;
						}
						else if (iLocal_366 || iLocal_81)
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_123))
							{
								if (HUD::GET_BLIP_COLOUR(iLocal_123) != 1)
								{
									HUD::SET_BLIP_AS_FRIENDLY(iLocal_123, false);
									HUD::SET_BLIP_COLOUR(iLocal_123, 1);
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_155, 25f, 25f, 5f, 0, 1, 0) && ENTITY::GET_ENTITY_SPEED(iLocal_155) > 10f)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_109 + 5000)
								{
									iLocal_81 = 1;
								}
							}
							else
							{
								iLocal_109 = MISC::GET_GAME_TIMER();
							}
						}
						break;
					
					case 2:
						RECORDING::_0xAF66DCEE6609B148();
						if (!bLocal_83)
						{
							bLocal_83 = true;
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_155) && ENTITY::DOES_ENTITY_EXIST(iLocal_140))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_140, iLocal_155))
							{
								if (ENTITY::IS_ENTITY_DEAD(iLocal_155, 0))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_140, false);
									ENTITY::DETACH_ENTITY(iLocal_140, 1, false);
								}
							}
						}
						if (bLocal_74)
						{
							if (iLocal_76)
							{
								func_108();
							}
							else
							{
								func_107();
							}
						}
						else
						{
							bLocal_77 = true;
						}
						func_158();
						func_104();
						if (bLocal_77)
						{
							if (bLocal_78)
							{
								func_104();
								iLocal_50 = 3;
								ENTITY::SET_ENTITY_INVINCIBLE(iLocal_140, false);
							}
						}
						break;
					
					case 3:
						if (!HUD::DOES_BLIP_EXIST(iLocal_122))
						{
							iLocal_122 = func_170(iLocal_140, 0, 0);
						}
						switch (iLocal_385)
						{
							case 0:
								if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
								{
									if (!ENTITY::DOES_ENTITY_EXIST(iLocal_163))
									{
										iLocal_163 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_163, true, 1);
									}
								}
								if (func_103(1, 0, 1) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_140, 2.5f, 2.5f, 2.5f, 0, 1, 1))
								{
									MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 0);
									PED::SET_PED_CONFIG_FLAG(iLocal_140, 118, false);
									func_102();
									func_94(1, 1, 1, 0, 0, 0);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
									HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
									Local_392 = { -1.2232f, -4.3354f, 1.3385f };
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_155, 0))
									{
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_155, -8f, 1);
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_155, false);
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_155, 1);
										Local_392.f_3 = { -22.8598f, 0f, (ENTITY::GET_ENTITY_HEADING(iLocal_155) - 60f) };
									}
									Local_392.f_6 = { -1.4334f, -4.6656f, 1.3733f };
									Local_392.f_9 = { -22.8598f, 0f, -106.3162f };
									Local_392.f_12 = 55f;
									Local_392.f_13 = 3000;
									Local_392.f_18 = 0;
									func_90(&Local_392, iLocal_155, 1);
									ENTITY::SET_ENTITY_COORDS(iLocal_140, ENTITY::GET_ENTITY_COORDS(iLocal_155, false), 1, false, 0, 1);
									vLocal_110 = { 0f, 0f, 0f };
									vLocal_113 = { 0f, 0f, 0f };
									iLocal_108 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_110, vLocal_113, 2);
									if (ENTITY::IS_ENTITY_ATTACHED(iLocal_140))
									{
										ENTITY::DETACH_ENTITY(iLocal_140, 1, false);
									}
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_108, iLocal_155, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_155, sLocal_175));
									PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_108, vLocal_110, vLocal_113, 2);
									BRAIN::TASK_LOOK_AT_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_140, iLocal_108, sLocal_386, "IG_1_ALT1_EXIT_VAN", 1000f, -4f, 5, 0, 1148846080, 0);
									PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(iLocal_108, false);
									PED::SET_PED_KEEP_TASK(iLocal_140, true);
									iLocal_412 = CAM::CREATE_CAMERA(964613260, 1);
									CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_412, iLocal_108, "IG_1_ALT1_EXIT_VAN_CAM", sLocal_386);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_155, true);
									VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_155, 2, 0, 0);
									VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_155, 3, 0, 0);
									vLocal_110 = { ENTITY::GET_ENTITY_COORDS(iLocal_155, false) };
									vLocal_113.z = ENTITY::GET_ENTITY_HEADING(iLocal_155);
									vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, 0f, -4.7f, 0f) };
									MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 0, 0);
									ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_HEADING(iLocal_155));
									ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vVar0, 1, false, 0, 1);
									if (func_86(iLocal_163))
									{
										func_85();
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
									{
										if (ENTITY::IS_ENTITY_DEAD(iLocal_141, 0) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_141, false), ENTITY::GET_ENTITY_COORDS(iLocal_140, false)) < 3f)
										{
											PED::DELETE_PED(&iLocal_141);
										}
										if (ENTITY::IS_ENTITY_DEAD(iLocal_143, 0) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_143, false), ENTITY::GET_ENTITY_COORDS(iLocal_143, false)) < 3f)
										{
											PED::DELETE_PED(&iLocal_143);
										}
									}
									WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
									CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_369);
									HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
									iLocal_385++;
								}
								break;
							
							case 1:
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_155))
								{
									iLocal_385++;
								}
								break;
							
							case 2:
								if (func_160() == 0)
								{
									sVar3 = "RESNA_THX";
								}
								else if (func_160() == 1)
								{
									sVar3 = "RESNA_THX1";
								}
								else
								{
									sVar3 = "RESNA_THX2";
								}
								if (!func_84())
								{
									if (func_159(&uLocal_176, cLocal_387, sVar3, 8, 0, 0, 0))
									{
										iLocal_385++;
									}
								}
								break;
							
							case 3:
								if (!func_84())
								{
									if (func_159(&uLocal_176, cLocal_387, "RESNA_THX3", 8, 0, 0, 0))
									{
										iLocal_385++;
									}
								}
								break;
							
							case 4:
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_108))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_108) > 0.3746479f && !iLocal_116)
									{
										if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
										{
											GRAPHICS::_START_SCREEN_EFFECT("CamPushInNeutral", 0, 0);
											AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
											iLocal_116 = 1;
										}
									}
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_108) > 0.4f)
									{
										iLocal_385++;
									}
								}
								break;
							
							case 5:
								BRAIN::CLEAR_PED_TASKS(iLocal_140);
								ENTITY::SET_ENTITY_INVINCIBLE(iLocal_140, false);
								PED::SET_PED_CONFIG_FLAG(iLocal_140, 118, true);
								vLocal_171 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_386, "IG_1_ALT1_EXIT_VAN", vLocal_110, vLocal_113, 1f, 2) };
								MISC::GET_GROUND_Z_FOR_3D_COORD(vLocal_171, &(vLocal_171.f_2), 0, 0);
								ENTITY::SET_ENTITY_COORDS(iLocal_140, vLocal_171, 1, false, 0, 1);
								vLocal_171 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_386, "IG_1_ALT1_EXIT_VAN", vLocal_110, vLocal_113, 1f, 2) };
								ENTITY::SET_ENTITY_HEADING(iLocal_140, vLocal_171.z);
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_108))
								{
									PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_108, 1f);
								}
								PED::_0x2208438012482A1A(iLocal_140, 0, 0);
								WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_155, false);
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_155, sLocal_386, "IG_1_ALT1_EXIT_VAN", 3))
									{
										ENTITY::STOP_ENTITY_ANIM(iLocal_155, "IG_1_ALT1_EXIT_VAN", sLocal_386, -8f);
									}
								}
								CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
								if (CAM::DOES_CAM_EXIST(iLocal_412))
								{
									CAM::DESTROY_CAM(iLocal_412, 0);
								}
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
								func_94(0, 1, 1, 0, 0, 0);
								PED::SET_PED_CAN_RAGDOLL(iLocal_140, 1);
								func_82(vLocal_56);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
								{
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_155, 1);
								}
								iLocal_50 = 4;
								break;
						}
						if (iLocal_385 > 0 && iLocal_385 < 5)
						{
							HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
							if ((func_80(1000) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_108)) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_108) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_108) > 0.4f))
							{
								iLocal_385 = 5;
							}
						}
						if (!HUD::DOES_BLIP_EXIST(iLocal_122))
						{
							iLocal_122 = func_170(iLocal_140, 0, 0);
						}
						break;
					
					case 4:
						if (PLAYER::GET_MAX_WANTED_LEVEL() == 0)
						{
							PLAYER::SET_MAX_WANTED_LEVEL(5);
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_142))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_142, false)) > 10000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_142))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_142);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_143, false)) > 10000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_143))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_143);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_141, false)) > 10000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_141))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_141);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_155))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_155, false)) > 10000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_155))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_155);
							}
						}
						func_62();
						if (HUD::DOES_BLIP_EXIST(iLocal_122))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_140, 10f, 10f, 10f, 0, 1, 0))
							{
								if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
								{
									if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_140, 474215631) != 7)
									{
										BRAIN::CLEAR_PED_TASKS(iLocal_140);
									}
									BRAIN::TASK_CLEAR_LOOK_AT(iLocal_140);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_140, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_140, 0);
									HUD::REMOVE_BLIP(&iLocal_122);
									if (HUD::DOES_BLIP_EXIST(iLocal_120))
									{
										HUD::REMOVE_BLIP(&iLocal_120);
									}
									func_57();
									iLocal_120 = func_56(vLocal_56, 1);
								}
							}
						}
						else if (HUD::DOES_BLIP_EXIST(iLocal_120))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_56, Global_19, true, true, 0))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, 0))
								{
									if ((VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) && ENTITY::IS_ENTITY_UPRIGHT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 90f))
									{
										iLocal_50 = 6;
										func_55();
										HUD::REMOVE_BLIP(&iLocal_120);
									}
								}
								else
								{
									iLocal_50 = 6;
									func_55();
									HUD::REMOVE_BLIP(&iLocal_120);
								}
							}
							else
							{
								if (!PED::IS_PED_GROUP_MEMBER(iLocal_140, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
								{
									func_55();
									HUD::REMOVE_BLIP(&iLocal_120);
									if (!HUD::DOES_BLIP_EXIST(iLocal_122))
									{
										iLocal_122 = func_53(iLocal_140, 0, 145);
									}
								}
								if (!iLocal_73 && !iLocal_75)
								{
									func_50();
									iLocal_69 = MISC::GET_GAME_TIMER();
								}
								else if (!iLocal_75)
								{
									if ((MISC::GET_GAME_TIMER() - iLocal_69) > 5000)
									{
										iLocal_69 = (MISC::GET_GAME_TIMER() - 5000);
									}
									func_47();
									iVar4 = 0;
									while (iVar4 < iLocal_156)
									{
										if (((func_46(iLocal_144[iVar4]) || func_46(iLocal_147[iVar4])) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vLocal_56) < 400f) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vLocal_65) < 400f)
										{
											if (HUD::DOES_BLIP_EXIST(iLocal_120))
											{
												HUD::REMOVE_BLIP(&iLocal_120);
											}
											func_55();
											iLocal_391 = iLocal_390;
											if (iLocal_391 < 6)
											{
												if (iLocal_388 > 0)
												{
													iLocal_391++;
												}
											}
											func_44();
											iLocal_75 = 0;
											if (!PED::IS_PED_INJURED(iLocal_144[iVar4]))
											{
												PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_144[iVar4], 3);
											}
											if (!PED::IS_PED_INJURED(iLocal_147[iVar4]))
											{
												PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_147[iVar4], 3);
											}
											iLocal_50 = 5;
										}
										iVar4++;
									}
								}
							}
						}
						func_158();
						if (func_43())
						{
							PED::DELETE_PED(&iLocal_140);
							func_13();
						}
						break;
					
					case 5:
						if (PLAYER::GET_MAX_WANTED_LEVEL() != 0)
						{
							PLAYER::SET_MAX_WANTED_LEVEL(0);
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						}
						func_158();
						func_12();
						func_47();
						if (!iLocal_367)
						{
							if (func_11())
							{
								if (func_159(&uLocal_176, cLocal_387, "RESNA_MOR", 4, func_200(), 0, 0))
								{
									iLocal_367 = 1;
									iLocal_119 = MISC::GET_GAME_TIMER();
								}
							}
							else
							{
								iLocal_367 = 1;
							}
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_119) > 2000 && !func_84())
						{
							if (!iLocal_99)
							{
								if (func_11() && func_10() < 30f)
								{
									if (!PED::IS_PED_INJURED(iLocal_140) && !PED::IS_PED_INJURED(iLocal_144[0]))
									{
										if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, 0))
										{
											BRAIN::TASK_DRIVE_BY(iLocal_140, iLocal_144[0], 0, 0f, 0f, 0f, 50f, 90, 0, 1566631136);
										}
										iLocal_99 = 1;
									}
								}
							}
							else if (!iLocal_100)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, 0))
								{
									if (PED::IS_PED_DOING_DRIVEBY(iLocal_140))
									{
										if (func_159(&uLocal_176, cLocal_387, "RESNA_FINGER", 8, 0, 0, 0))
										{
											iLocal_100 = 1;
										}
									}
								}
							}
						}
						iVar5 = 0;
						while (iVar5 < iLocal_156)
						{
							iVar6 = 0;
							if ((ENTITY::DOES_ENTITY_EXIST(iLocal_144[iVar5]) && !PED::IS_PED_INJURED(iLocal_144[iVar5])) && !ENTITY::IS_ENTITY_DEAD(iLocal_144[iVar5], 0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_156[iVar5], 0) && PED::IS_PED_IN_VEHICLE(iLocal_144[iVar5], iLocal_156[iVar5], 0))
								{
									if (HUD::DOES_BLIP_EXIST(iLocal_125[iVar5]))
									{
										HUD::REMOVE_BLIP(&(iLocal_125[iVar5]));
									}
									iVar6 = 1;
								}
								if (!HUD::DOES_BLIP_EXIST(iLocal_125[iVar5]) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_144[iVar5], 0))
								{
									iLocal_125[iVar5] = func_53(iLocal_144[iVar5], 1, 145);
								}
							}
							else if (HUD::DOES_BLIP_EXIST(iLocal_125[iVar5]))
							{
								HUD::REMOVE_BLIP(&(iLocal_125[iVar5]));
							}
							if ((ENTITY::DOES_ENTITY_EXIST(iLocal_147[iVar5]) && !PED::IS_PED_INJURED(iLocal_147[iVar5])) && !ENTITY::IS_ENTITY_DEAD(iLocal_147[iVar5], 0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_156[iVar5], 0) && PED::IS_PED_IN_VEHICLE(iLocal_147[iVar5], iLocal_156[iVar5], 0))
								{
									if (HUD::DOES_BLIP_EXIST(iLocal_128[iVar5]))
									{
										HUD::REMOVE_BLIP(&(iLocal_128[iVar5]));
									}
									iVar6 = 1;
								}
								if (!HUD::DOES_BLIP_EXIST(iLocal_128[iVar5]) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_147[iVar5], 0))
								{
									iLocal_128[iVar5] = func_53(iLocal_147[iVar5], 1, 145);
								}
							}
							else if (HUD::DOES_BLIP_EXIST(iLocal_128[iVar5]))
							{
								HUD::REMOVE_BLIP(&(iLocal_128[iVar5]));
							}
							func_7(iVar5, (iVar6 && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_156[iVar5], 0)));
							iVar5++;
						}
						if (func_6())
						{
							iLocal_85 = 0;
							while (iLocal_85 < 2)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_156[iLocal_85], 0))
								{
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_156[iLocal_85]));
								}
								if (!PED::IS_PED_INJURED(iLocal_144[iLocal_85]))
								{
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_144[iLocal_85]));
								}
								if (!PED::IS_PED_INJURED(iLocal_147[iLocal_85]))
								{
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_147[iLocal_85]));
								}
								if (HUD::DOES_BLIP_EXIST(iLocal_125[iLocal_85]))
								{
									HUD::REMOVE_BLIP(&(iLocal_125[iLocal_85]));
								}
								if (HUD::DOES_BLIP_EXIST(iLocal_128[iLocal_85]))
								{
									HUD::REMOVE_BLIP(&(iLocal_128[iLocal_85]));
								}
								if (HUD::DOES_BLIP_EXIST(uLocal_131[iLocal_85]))
								{
									HUD::REMOVE_BLIP(&(uLocal_131[iLocal_85]));
								}
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_370);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_371);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_372);
								iLocal_85++;
							}
							func_57();
							iLocal_120 = func_56(vLocal_56, 1);
							func_5(-1);
							iLocal_75 = 1;
							BRAIN::CLEAR_PED_TASKS(iLocal_140);
							if (!PED::IS_PED_GROUP_MEMBER(iLocal_140, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_140, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
							}
							iLocal_50 = 4;
						}
						break;
					
					case 6:
						if (func_2())
						{
							func_13();
						}
						break;
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_120))
				{
					HUD::_0x75A16C3DA34F1245(iLocal_120, bLocal_83);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_121))
				{
					HUD::_0x75A16C3DA34F1245(iLocal_121, bLocal_83);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_122))
				{
					HUD::_0x75A16C3DA34F1245(iLocal_122, bLocal_83);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_123))
				{
					HUD::_0x75A16C3DA34F1245(iLocal_123, bLocal_83);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_124))
				{
					HUD::_0x75A16C3DA34F1245(iLocal_124, bLocal_83);
				}
			}
			else
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_155);
				}
				func_250();
			}
		}
		else
		{
			func_1();
			func_250();
		}
	}
}

void func_1()//Position - 0x14DD
{
	func_149();
	SYSTEM::WAIT(0);
}

int func_2()//Position - 0x14EE
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		switch (iLocal_437)
		{
			case 0:
				func_94(1, 1, 0, 0, 0, 0);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					while (!func_3(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1093140480, 1, 1056964608, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_140))
				{
					if (PED::IS_PED_IN_GROUP(iLocal_140))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_140);
					}
				}
				func_44();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 1280);
				while (!func_159(&uLocal_176, cLocal_387, "RESNA_ARRV", 4, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, 0))
				{
					BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), 0);
				}
				BRAIN::TASK_LOOK_AT_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), 30000, 2052, 2);
				BRAIN::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_140, 30000, 2052, 2);
				iLocal_437++;
				break;
			
			case 1:
				if (!func_84())
				{
					BRAIN::OPEN_SEQUENCE_TASK(&iVar0);
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, 0))
					{
						BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					}
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -3069.737f, 455.0024f, 8.6478f, 1f, 30000, 0.25f, 0, 1193033728);
					BRAIN::TASK_ACHIEVE_HEADING(0, 73.0132f, 0);
					BRAIN::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
					BRAIN::CLOSE_SEQUENCE_TASK(iVar0);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_140, iVar0);
					BRAIN::CLEAR_SEQUENCE_TASK(&iVar0);
					iLocal_437++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(iLocal_140))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, 0))
					{
						SYSTEM::SETTIMERA(0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						func_94(0, 1, 0, 0, 0, 0);
						iLocal_437++;
					}
				}
				break;
			
			case 3:
				if (SYSTEM::TIMERA() > 1000)
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_3(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x16AD
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
	func_4(iParam0);
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

void func_4(int iParam0)//Position - 0x183C
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

void func_5(int iParam0)//Position - 0x1868
{
	iLocal_389 = MISC::GET_GAME_TIMER();
	iLocal_390 = iParam0;
	iLocal_388 = 0;
}

int func_6()//Position - 0x1880
{
	float fVar0;
	
	fVar0 = func_10();
	if (fVar0 == -1f || fVar0 > 300f)
	{
		return 1;
	}
	return 0;
}

void func_7(int iParam0, bool bParam1)//Position - 0x18A8
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (bParam1)
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_131[iParam0]))
		{
			uLocal_131[iParam0] = func_8(ENTITY::GET_ENTITY_COORDS(iLocal_156[iParam0], false), 0);
			HUD::SET_BLIP_COLOUR(uLocal_131[iParam0], 1);
			HUD::SET_BLIP_PRIORITY(uLocal_131[iParam0], 9);
		}
		else
		{
			vVar0 = { HUD::GET_BLIP_COORDS(uLocal_131[iParam0]) };
			vVar3 = { ENTITY::GET_ENTITY_COORDS(iLocal_156[iParam0], false) };
			vVar0.x = (vVar0.x + ((vVar3.x - vVar0.x) / 25f));
			vVar0.y = (vVar0.y + ((vVar3.y - vVar0.y) / 25f));
			vVar0.z = (vVar0.z + ((vVar3.z - vVar0.z) / 25f));
			HUD::SET_BLIP_COORDS(uLocal_131[iParam0], vVar0);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(uLocal_131[iParam0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_131[iParam0]));
	}
}

int func_8(vector3 vParam0, bool bParam3)//Position - 0x1978
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_9(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_9(bool bParam0, float fParam1, float fParam2)//Position - 0x19A4
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

float func_10()//Position - 0x19BB
{
	int iVar0;
	float fVar1;
	
	fVar1 = -1f;
	iVar0 = 0;
	while (iVar0 < iLocal_144)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_144[iVar0]) && !PED::IS_PED_INJURED(iLocal_144[iVar0])) && !ENTITY::IS_ENTITY_DEAD(iLocal_144[iVar0], 0))
		{
			if (fVar1 == -1f)
			{
				fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_144[iVar0], false));
			}
			else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_144[iVar0], false)) < fVar1)
			{
				fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_144[iVar0], false));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_147)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_147[iVar0]) && !PED::IS_PED_INJURED(iLocal_147[iVar0])) && !ENTITY::IS_ENTITY_DEAD(iLocal_147[iVar0], 0))
		{
			if (fVar1 == -1f)
			{
				fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_147[iVar0], false));
			}
			else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_147[iVar0], false)) < fVar1)
			{
				fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_147[iVar0], false));
			}
		}
		iVar0++;
	}
	return fVar1;
}

int func_11()//Position - 0x1B02
{
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && PED::IS_PED_IN_VEHICLE(iLocal_140, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			return 1;
		}
		if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, 0)) && !PED::IS_PED_RAGDOLL(iLocal_140))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_140, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) < 400f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_12()//Position - 0x1B94
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { -20f, -20f, -20f };
	vVar3 = { 20f, 20f, 20f };
	if (!iLocal_367)
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_140, false) + vVar0 };
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iLocal_140, false) + vVar3 };
		if (func_159(&uLocal_176, cLocal_387, "RESNA_MOR", 4, func_200(), 0, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_140) && !PED::IS_PED_INJURED(iLocal_147[0]))
			{
				BRAIN::TASK_LOOK_AT_ENTITY(iLocal_140, iLocal_144[0], 20000, 16, 3);
			}
			iLocal_367 = 1;
		}
	}
}

void func_13()//Position - 0x1C2E
{
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_140, 317, true);
	}
	func_18(-1, 0);
	func_17();
	func_14();
	func_250();
}

void func_14()//Position - 0x1C5D
{
	func_15();
}

int func_15()//Position - 0x1C6A
{
	if (func_16(0))
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

bool func_16(bool bParam0)//Position - 0x1CB5
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71838, 0);
}

int func_17()//Position - 0x1CE0
{
	return 1;
}

void func_18(int iParam0, int iParam1)//Position - 0x1CE9
{
	if (iParam0 == -1)
	{
		iParam0 = func_41();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_40(iParam0))
	{
		func_39(iParam0, iParam1);
		if (!func_38(51))
		{
			func_29("RE_REWARD", 1, 0, 4000, 10000, func_32(), 0, 138, 0);
			func_28(51);
		}
		if (func_27(iParam0))
		{
			Global_106565.f_24989.f_2 = 3;
		}
		if (func_26(iParam0, iParam1) != 322)
		{
			func_20(func_26(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_106553 = iParam1;
		if (Global_106551 == 0)
		{
			if (((Global_106554 == 1 || Global_106554 == 5) || Global_106554 == 11) || Global_106554 == 25)
			{
				func_19(2);
			}
			else if ((Global_106554 == 26 || Global_106554 == 8) || Global_106554 == 17)
			{
				func_19(7);
			}
			else
			{
				func_19(1);
			}
		}
	}
}

void func_19(int iParam0)//Position - 0x1DED
{
	Global_106551 = iParam0;
}

void func_20(int iParam0, var uParam1, var uParam2)//Position - 0x1DFB
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
		func_24((891 + iParam0), 1, -1, 1);
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
		func_21();
	}
}

void func_21()//Position - 0x1EE3
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
		func_23(13, SYSTEM::FLOOR(Global_106565.f_10188.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_71590)
		{
			if (func_22() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_15();
				}
			}
		}
	}
}

int func_22()//Position - 0x23A4
{
	return Global_25765;
}

int func_23(int iParam0, int iParam1)//Position - 0x23AF
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

int func_24(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x2400
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
		iParam2 = func_25();
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

int func_25()//Position - 0x29B6
{
	return Global_1312745;
}

int func_26(int iParam0, int iParam1)//Position - 0x29C2
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

int func_27(int iParam0)//Position - 0x2D36
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

void func_28(int iParam0)//Position - 0x2D65
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

void func_29(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x2DA7
{
	func_30(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_30(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x2DC8
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
		func_31();
	}
}

void func_31()//Position - 0x2F9B
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

int func_32()//Position - 0x30BB
{
	func_33();
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

void func_33()//Position - 0x3101
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_37(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_36(PLAYER::PLAYER_PED_ID());
			if (func_35(iVar0) && (!func_34(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_35(Global_106565.f_2357.f_539.f_4321))
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

bool func_34(int iParam0)//Position - 0x31FE
{
	return Global_36425 == iParam0;
}

bool func_35(int iParam0)//Position - 0x320C
{
	return iParam0 < 3;
}

int func_36(int iParam0)//Position - 0x3218
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_37(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_37(int iParam0)//Position - 0x3255
{
	if (func_35(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_38(int iParam0)//Position - 0x327F
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

void func_39(int iParam0, int iParam1)//Position - 0x32C2
{
	MISC::SET_BIT(&(Global_106565.f_24989.f_8[iParam0]), iParam1);
}

int func_40(int iParam0)//Position - 0x32DD
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

int func_41()//Position - 0x338E
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_42(Var0);
	return uVar16;
}

int func_42(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x33AB
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

int func_43()//Position - 0x3585
{
	if (Global_26001)
	{
		func_19(4);
		return 1;
	}
	return 0;
}

void func_44()//Position - 0x359D
{
	Global_14732 = 0;
	func_45();
}

void func_45()//Position - 0x35AD
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

int func_46(int iParam0)//Position - 0x35D1
{
	int iVar0;
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iParam0, false)) < 10000f)
		{
			iVar0 = 1;
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iParam0, false)) < 2500f)
		{
			iVar0 = 1;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 1))
		{
			iVar0 = 1;
		}
		if (!PED::IS_PED_INJURED(iLocal_140) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(iLocal_140, 0), 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PED::GET_VEHICLE_PED_IS_IN(iLocal_140, 0), iParam0, 1))
				{
					iVar0 = 1;
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != PED::GET_VEHICLE_PED_IS_IN(iLocal_140, 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iParam0, 1))
					{
						iVar0 = 1;
					}
				}
			}
		}
	}
	return iVar0;
}

void func_47()//Position - 0x36DC
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_415))
	{
		STREAMING::REQUEST_MODEL(joaat("prop_ld_test_01"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_test_01")))
		{
			iLocal_415 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) + Vector(2f, 0f, 0f), true, true, false);
			ENTITY::SET_ENTITY_COLLISION(iLocal_415, false, 0);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_415, false, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_415, true);
		}
	}
	GRAPHICS::DRAW_DEBUG_TEXT_2D("Checking for warp", 0.89f, 0.02f, 0f, 0, 0, 255, 255);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_156[iVar1], 0) && !PED::IS_PED_INJURED(iLocal_144[iVar1])) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_144[iVar1], iLocal_156[iVar1]))
			{
				vVar2 = { ENTITY::GET_ENTITY_COORDS(iLocal_156[iVar1], false) };
				vVar5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
				if (SYSTEM::VDIST2(vVar5, Local_416[0 /*7*/]) > 400f && SYSTEM::VDIST2(vVar5, Local_416[1 /*7*/]) > 400f)
				{
					if (SYSTEM::VDIST2(vVar5, Local_416[iVar1 /*7*/]) > 900f)
					{
						if (func_49(iLocal_156[iVar1], iVar0, iLocal_415, vVar5, ENTITY::GET_ENTITY_ROTATION(iVar0, 2)))
						{
							Local_416[iVar1 /*7*/] = { vVar5 };
							Local_416[iVar1 /*7*/].f_3 = { ENTITY::GET_ENTITY_ROTATION(iVar0, 2) };
							Local_416[iVar1 /*7*/].f_6 = SYSTEM::VMAG(ENTITY::GET_ENTITY_VELOCITY(iLocal_156[iVar1]));
						}
					}
				}
				if (!func_48(Local_416[iVar1 /*7*/]))
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_156[iVar1]))
					{
						iLocal_434[iVar1] = MISC::GET_GAME_TIMER();
					}
					else if (((MISC::GET_GAME_TIMER() - iLocal_434[iVar1]) > 1000 && (MISC::GET_GAME_TIMER() - iLocal_431[0]) > 2000) && (MISC::GET_GAME_TIMER() - iLocal_431[1]) > 2000)
					{
						if (!CAM::IS_SPHERE_VISIBLE(Local_416[iVar1 /*7*/], 3f) && !CAM::IS_SPHERE_VISIBLE(vVar2, 3f))
						{
							fVar8 = 99f;
							iVar9 = 0;
							if (iVar1 == 0)
							{
								iVar9 = 1;
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_156[iVar9], 0))
							{
								fVar8 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_156[iVar9], false), Local_416[iVar1 /*7*/]);
							}
							if ((((SYSTEM::VDIST2(vVar2, vVar5) > 625f && SYSTEM::VDIST2(vVar2, Local_416[iVar1 /*7*/]) < SYSTEM::VDIST2(vVar2, vVar5)) && SYSTEM::VDIST2(vVar5, Local_416[iVar1 /*7*/]) > 400f) && fVar8 > 5f) && func_49(iLocal_156[iVar1], iVar0, iLocal_415, Local_416[iVar1 /*7*/], Local_416[iVar1 /*7*/].f_3))
							{
								MISC::CLEAR_AREA_OF_PEDS(Local_416[iVar1 /*7*/], 3f, 0);
								MISC::CLEAR_AREA_OF_VEHICLES(Local_416[iVar1 /*7*/], 3f, 0, 0, 0, 0, false, 0);
								ENTITY::SET_ENTITY_COORDS(iLocal_156[iVar1], Local_416[iVar1 /*7*/], 1, false, 0, 1);
								ENTITY::SET_ENTITY_ROTATION(iLocal_156[iVar1], Local_416[iVar1 /*7*/].f_3, 2, 1);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_156[iVar1], 1084227584);
								VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_156[iVar1], (Local_416[iVar1 /*7*/].f_6 + 5f));
								BRAIN::TASK_VEHICLE_CHASE(iLocal_144[iVar1], PLAYER::PLAYER_PED_ID());
								VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_156[iVar1], true, true, 0);
								iLocal_431[iVar1] = MISC::GET_GAME_TIMER();
								iLocal_68 = MISC::GET_GAME_TIMER() + 1000;
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	if (iLocal_68 > MISC::GET_GAME_TIMER())
	{
		RECORDING::_0xAF66DCEE6609B148();
	}
}

int func_48(vector3 vParam0)//Position - 0x3A79
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6)//Position - 0x3AA3
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

void func_50()//Position - 0x3BD9
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vLocal_56) < 1500f || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vLocal_65) < 1500f)
			{
				if (func_51())
				{
					iLocal_73 = 1;
				}
			}
		}
	}
}

int func_51()//Position - 0x3C3A
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;
	
	iVar0 = 524852;
	iVar1 = 6;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_156[0], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_156[1], 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_144[0]))
		{
			if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_144[0], -1273030092) == 1)
			{
				if (!BRAIN::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iLocal_144[0]))
				{
					BRAIN::TASK_DRIVE_BY(iLocal_144[0], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 100f, 100, 1, -753768974);
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_144[1]))
		{
			if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_144[1], -1273030092) == 1)
			{
				if (!BRAIN::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iLocal_144[1]))
				{
					BRAIN::TASK_DRIVE_BY(iLocal_144[1], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 100f, 100, 1, -753768974);
				}
			}
		}
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_370);
		STREAMING::REQUEST_MODEL(iLocal_372);
		STREAMING::REQUEST_MODEL(iLocal_371);
		if ((STREAMING::HAS_MODEL_LOADED(iLocal_370) && STREAMING::HAS_MODEL_LOADED(iLocal_372)) && STREAMING::HAS_MODEL_LOADED(iLocal_371))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				vVar5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
				if (VEHICLE::_0xA4822F1CF23F4810(&vVar5, &vVar2, &vVar8, 0f, 180f, 30f, false, 1, 1))
				{
					if ((func_52(vVar2) && !CAM::IS_SPHERE_VISIBLE(vVar2, 5f)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vVar2) > 100f)
					{
						iVar11 = 0;
						while (iVar11 < 2)
						{
							MISC::CLEAR_AREA(vVar2, 3f, 0, 0, 0, false);
							vVar2.x = (vVar2.x + SYSTEM::TO_FLOAT(iVar11));
							iLocal_156[iVar11] = VEHICLE::CREATE_VEHICLE(iLocal_370, vVar2, vVar8.z, true, true, false);
							iLocal_144[iVar11] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_156[iVar11], 22, iLocal_372, -1, 1, true);
							iLocal_147[iVar11] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_156[iVar11], 22, iLocal_371, 0, 1, true);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_147[iVar11], iLocal_374);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_144[iVar11], iLocal_374);
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
								{
									BRAIN::TASK_VEHICLE_CHASE(iLocal_144[iVar11], PLAYER::PLAYER_PED_ID());
								}
							}
							else
							{
								BRAIN::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_144[iVar11], iLocal_156[iVar11], PLAYER::PLAYER_PED_ID(), iVar1, 50f, iVar0, 5f, 10f, 1);
							}
							PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_144[iVar11], 0);
							PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_147[iVar11], 0);
							PED::SET_PED_KEEP_TASK(iLocal_144[iVar11], true);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_144[iVar11], joaat("weapon_sawnoffshotgun"), 999999, true, true);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_156[iVar11], (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) + 5f));
							iVar1 = 11;
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_147[iVar11], joaat("weapon_sawnoffshotgun"), 999999, true, true);
							BRAIN::TASK_DRIVE_BY(iLocal_147[iVar11], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 70, 0, -753768974);
							PED::SET_PED_KEEP_TASK(iLocal_147[iVar11], true);
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_144[iVar11], 1);
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_147[iVar11], 1);
							PED::SET_PED_CONFIG_FLAG(iLocal_144[iVar11], 42, true);
							PED::SET_PED_CONFIG_FLAG(iLocal_147[iVar11], 42, true);
							PED::SET_PED_ACCURACY(iLocal_144[iVar11], 15);
							PED::SET_PED_ACCURACY(iLocal_147[iVar11], 15);
							iVar11++;
						}
						func_102();
					}
				}
			}
		}
	}
	return 0;
}

int func_52(vector3 vParam0)//Position - 0x3F5B
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { vParam0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
	if (MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y)) >= 90f)
	{
		return 1;
	}
	return 0;
}

int func_53(int iParam0, bool bParam1, int iParam2)//Position - 0x3FA3
{
	int iVar0;
	
	iVar0 = func_54(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_106565.f_28044[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_106565.f_28044[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_54(int iParam0, bool bParam1, bool bParam2)//Position - 0x3FF5
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_9(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_9(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_9(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_55()//Position - 0x409D
{
	if (HUD::DOES_BLIP_EXIST(iLocal_139))
	{
		HUD::REMOVE_BLIP(&iLocal_139);
	}
}

int func_56(vector3 vParam0, bool bParam3)//Position - 0x40B4
{
	return func_8(vParam0, bParam3);
}

void func_57()//Position - 0x40C6
{
	if (func_160() == 2)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_139))
		{
			func_60();
			iLocal_139 = func_56(vLocal_65, 0);
			HUD::SET_BLIP_SPRITE(iLocal_139, 269);
			func_58();
		}
	}
}

void func_58()//Position - 0x40FC
{
	if (!func_59())
	{
		if (func_160() == 2)
		{
			Global_26000 = 1;
		}
	}
}

int func_59()//Position - 0x4118
{
	if (Global_106565.f_24989.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_60()//Position - 0x4134
{
	if (func_160() == 2)
	{
		if (!Global_26002)
		{
			func_61("CULT_BLIP_HELP", -1);
			Global_26002 = 1;
		}
	}
}

void func_61(char* sParam0, int iParam1)//Position - 0x4158
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_62()//Position - 0x416F
{
	struct<6> Var0;
	char* sVar6;
	int iVar7;
	
	if (!iLocal_87[0])
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_140, false)) < 400f)
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_87[0] = 1;
			}
		}
	}
	if (!iLocal_90[0])
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_140, false)) < 400f && (MISC::GET_GAME_TIMER() - iLocal_104) > 30000)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if (!func_79(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
					{
						iLocal_90[0] = 1;
					}
				}
			}
		}
	}
	else if (iLocal_90[1])
	{
		if (func_11())
		{
			iLocal_104 = MISC::GET_GAME_TIMER();
			iLocal_90[0] = 0;
			iLocal_90[1] = 0;
		}
	}
	if (!iLocal_93[0])
	{
		if (func_11())
		{
			if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 1f)
			{
				fLocal_102 = (fLocal_102 + MISC::GET_FRAME_TIME());
				if (fLocal_102 > 30f)
				{
					iLocal_93[0] = 1;
				}
			}
			else if (fLocal_102 > 0f)
			{
				fLocal_102 = (fLocal_102 - (MISC::GET_FRAME_TIME() * 10f));
			}
		}
	}
	else if (iLocal_93[1])
	{
		fLocal_102 = 0f;
		iLocal_93[0] = 0;
		iLocal_93[1] = 0;
	}
	if (!iLocal_96[0])
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, 0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))
			{
				fLocal_103 = (fLocal_103 + MISC::GET_FRAME_TIME());
				if (fLocal_103 > 15f)
				{
					iLocal_96[0] = 1;
				}
			}
		}
		else if (fLocal_103 > 0f)
		{
			fLocal_103 = (fLocal_103 - (MISC::GET_FRAME_TIME() * 10f));
		}
	}
	if ((((!iLocal_93[0] || (iLocal_93[0] && iLocal_93[1])) && (!iLocal_87[0] || (iLocal_87[0] && iLocal_87[1]))) && (!iLocal_90[0] || (iLocal_90[0] && iLocal_90[1]))) && (!iLocal_96[0] || (iLocal_96[0] && iLocal_96[1])))
	{
		switch (iLocal_390)
		{
			case 0:
				switch (iLocal_388)
				{
					case 0:
						if (!func_84())
						{
							iLocal_388++;
						}
						break;
					
					case 1:
						if (func_11())
						{
							if (func_159(&uLocal_176, cLocal_387, "RESNA_HOME", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 2:
						if (!func_84())
						{
							if (func_11())
							{
								if (func_78("RESNA_RESP", 0))
								{
									iLocal_388++;
								}
							}
						}
						break;
					
					case 3:
						if (func_11())
						{
							if (func_77())
							{
								if (func_159(&uLocal_176, cLocal_387, "RESNA_ADD", 4, 0, 0, 0))
								{
									iLocal_388++;
								}
							}
							else if (func_159(&uLocal_176, cLocal_387, "RESNA_ADD2", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 4:
						if (!func_84())
						{
							func_5(1);
						}
						break;
				}
				break;
			
			case 1:
				if ((MISC::GET_GAME_TIMER() - iLocal_389) > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_11())
							{
								if (func_159(&uLocal_176, cLocal_387, "RESNA_BANT", 4, 0, 0, 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 1:
							if (!func_84())
							{
								iLocal_388++;
							}
							break;
						
						case 2:
							if (func_160() == 2)
							{
								if (func_65("RESNA_B1T", func_11()))
								{
									iLocal_388++;
								}
							}
							else if (func_11())
							{
								if (func_78("RESNA_B1", 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 3:
							if (func_65("RESNA_B2", func_11()))
							{
								iLocal_388++;
							}
							break;
						
						case 4:
							if (func_11())
							{
								if (func_78("RESNA_B2", 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 5:
							if (!func_84())
							{
								func_5(2);
							}
							break;
						}
				}
				break;
			
			case 2:
				if ((MISC::GET_GAME_TIMER() - iLocal_389) > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_11())
							{
								if (func_78("RESNA_B4", 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 1:
							if (func_65("RESNA_B4", func_11()))
							{
								iLocal_388++;
							}
							break;
						
						case 2:
							if (func_11())
							{
								if (func_78("RESNA_B4", "b"))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 3:
							if (func_65("RESNA_B5b", func_11()))
							{
								iLocal_388++;
							}
							break;
						
						case 4:
							if (!func_84())
							{
								func_5(5);
							}
							break;
						}
				}
				break;
			
			case 3:
				if ((MISC::GET_GAME_TIMER() - iLocal_389) > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_11())
							{
								if (func_159(&uLocal_176, cLocal_387, "RESNA_B5", 4, 0, 0, 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 1:
							if (!func_84())
							{
								if (func_11())
								{
									if (func_78("RESNA_B5", 0))
									{
										iLocal_388++;
									}
								}
							}
							break;
						
						case 2:
							if (func_65("RESNA_B5b", func_11()))
							{
								iLocal_388++;
							}
							break;
						
						case 3:
							if (!func_84())
							{
								func_5(5);
							}
							break;
						}
				}
				break;
			
			case 4:
				if ((MISC::GET_GAME_TIMER() - iLocal_389) > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_65("RESNA_B6", func_11()))
							{
								iLocal_388++;
							}
							break;
						
						case 1:
							if (func_11())
							{
								if (func_78("RESNA_B6", 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 2:
							if (func_65("RESNA_RUNOUT", func_11()))
							{
								iLocal_388++;
							}
							break;
						
						case 3:
							if (!func_84())
							{
								func_5(5);
							}
							break;
						}
				}
				break;
			
			case 5:
				if (iLocal_388 > 1 && iLocal_388 < 3)
				{
					if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_140))
					{
						BRAIN::TASK_USE_MOBILE_PHONE(iLocal_140, 1, 1);
					}
				}
				else if (PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_140))
				{
					BRAIN::TASK_USE_MOBILE_PHONE(iLocal_140, 0, 1);
				}
				switch (iLocal_388)
				{
					case 0:
						if ((MISC::GET_GAME_TIMER() - iLocal_389) > 10000)
						{
							if (func_11())
							{
								if (func_159(&uLocal_176, cLocal_387, "RESNA_CELL1", 8, 0, 0, 0))
								{
									PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_140, 0);
									PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_140, 0);
									PED::SET_PED_CAN_PLAY_VISEME_ANIMS(iLocal_140, 0, 0);
									iLocal_388++;
								}
							}
						}
						break;
					
					case 1:
						Var0 = { func_64() };
						if (MISC::ARE_STRINGS_EQUAL(&Var0, "RESNA_CELL1_3"))
						{
							iLocal_388++;
						}
						break;
					
					case 2:
						if (!func_84())
						{
							iLocal_389 = MISC::GET_GAME_TIMER();
							iLocal_388++;
						}
						break;
					
					case 3:
						if ((MISC::GET_GAME_TIMER() - iLocal_389) > 2000)
						{
							if (func_11() && !PED::_0xA3F3564A5B3646C0(iLocal_140))
							{
								if (func_78("RESNA_CELLR", 0))
								{
									PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_140, 1);
									PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_140, 1);
									PED::SET_PED_CAN_PLAY_VISEME_ANIMS(iLocal_140, 1, 0);
									iLocal_388++;
								}
							}
						}
						break;
					
					case 4:
						if (func_11())
						{
							if (func_159(&uLocal_176, cLocal_387, "RESNA_CELLD", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
				}
				break;
			
			case -1:
				switch (iLocal_388)
				{
					case 0:
						if (func_159(&uLocal_176, cLocal_387, "RESNA_BANT2", 4, 0, 0, 0))
						{
							iLocal_388++;
						}
						break;
					
					case 1:
						if (!func_84())
						{
							if (func_11())
							{
								if (func_78("RESNA_B3", 0))
								{
									iLocal_388++;
								}
							}
						}
						break;
					
					case 2:
						if (func_11())
						{
							if (func_159(&uLocal_176, cLocal_387, "RESNA_B3B", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 3:
						if (!func_84())
						{
							if (func_11())
							{
								if (func_78("RESNA_B3B", 0))
								{
									iLocal_388++;
								}
							}
						}
						break;
					
					case 4:
						if (func_11())
						{
							if (func_159(&uLocal_176, cLocal_387, "RESNA_B3C", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 5:
						if (!func_84())
						{
							if (func_11())
							{
								if (func_78("RESNA_B3C", 0))
								{
									iLocal_388++;
								}
							}
						}
						break;
					
					case 6:
						if (func_11())
						{
							if (func_159(&uLocal_176, cLocal_387, "RESNA_B3D", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 7:
						if (!func_84())
						{
							iLocal_388++;
						}
						break;
					
					case 8:
						if (func_11())
						{
							if (func_160() == 2)
							{
								if (!func_84())
								{
									if (func_78("RESNA_B3D", 0))
									{
										iLocal_388++;
									}
								}
							}
							else if (func_160() == 0)
							{
								if (func_65("RESNA_B3DM", func_11()))
								{
									iLocal_388++;
								}
							}
							else if (func_65("RESNA_B3DF", func_11()))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 9:
						if (!func_84())
						{
							func_5(6);
						}
						break;
				}
				break;
			
			case 6:
				if (func_160() == 2 && (MISC::GET_GAME_TIMER() - iLocal_389) > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_82(vLocal_56))
							{
								iLocal_388++;
							}
							break;
						
						case 1:
							if (func_65("RESNA_TREV", func_11()))
							{
								iLocal_388++;
								iLocal_389 = MISC::GET_GAME_TIMER();
							}
							break;
						
						case 2:
							if (func_82(vLocal_56))
							{
								iLocal_388++;
							}
							break;
						
						case 3:
							if (func_65("RESNA_CULT", func_11()))
							{
								iLocal_388++;
								iLocal_389 = MISC::GET_GAME_TIMER();
							}
							break;
						
						case 4:
							if (func_82(vLocal_56) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vLocal_65) < 250f)
							{
								iLocal_388++;
							}
							break;
						
						case 5:
							if (func_65("RESNA_NEAR", func_11()))
							{
								iLocal_388++;
							}
							break;
						}
				}
				break;
		}
	}
	else if (func_84())
	{
		if (iLocal_376 && !iLocal_377)
		{
			Local_378 = { func_63() };
			func_44();
			iLocal_377 = 1;
		}
	}
	else
	{
		if (iLocal_87[0] && !iLocal_87[1])
		{
			if (func_159(&uLocal_176, cLocal_387, "RESNA_JACK", 8, 0, 0, 0))
			{
				iLocal_87[1] = 1;
			}
		}
		if (iLocal_96[0] && !iLocal_96[1])
		{
			if (func_159(&uLocal_176, cLocal_387, "RESNA_NOVEH", 8, 0, 0, 0))
			{
				iLocal_96[1] = 1;
			}
		}
		if (iLocal_93[0] && !iLocal_93[1])
		{
			if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 3f)
			{
				if (func_159(&uLocal_176, cLocal_387, "RESNA_STOP", 8, 0, 0, 0))
				{
					iLocal_93[1] = 1;
				}
			}
			else
			{
				iLocal_93[0] = 0;
			}
		}
		if (iLocal_90[0] && !iLocal_90[1])
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				iVar7 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
				if ((VEHICLE::IS_THIS_MODEL_A_BIKE(iVar7) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar7)) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar7))
				{
					sVar6 = "RESNA_VEH1";
				}
				else
				{
					sVar6 = "RESNA_VEH2";
				}
				if (func_159(&uLocal_176, cLocal_387, sVar6, 8, 0, 0, 0))
				{
					iLocal_90[1] = 1;
				}
			}
			else
			{
				iLocal_90[0] = 0;
			}
		}
	}
}

struct<6> func_63()//Position - 0x4D46
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

struct<6> func_64()//Position - 0x4DF2
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15866 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_16876);
		if (iVar6 > -1)
		{
			return Global_14734[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_65(char* sParam0, bool bParam1)//Position - 0x4E38
{
	if (bParam1)
	{
		if (!iLocal_376)
		{
			if (func_159(&uLocal_176, cLocal_387, sParam0, 8, 0, 0, 0))
			{
				iLocal_376 = 1;
				iLocal_377 = 0;
			}
		}
		else if (iLocal_377)
		{
			if (func_66(&uLocal_176, cLocal_387, sParam0, &Local_378, 8, 0, 0))
			{
				iLocal_377 = 0;
			}
		}
		if ((iLocal_376 && !iLocal_377) && bParam1)
		{
			if (iLocal_384 == -1)
			{
				if (!func_84())
				{
					iLocal_384 = MISC::GET_GAME_TIMER();
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_384) > 500)
			{
				iLocal_384 = -1;
				iLocal_376 = 0;
				iLocal_377 = 0;
				return 1;
			}
		}
	}
	else if (iLocal_376 && !iLocal_377)
	{
		Local_378 = { func_63() };
		func_44();
		iLocal_377 = 1;
	}
	return 0;
}

bool func_66(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4EFA
{
	func_76(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_67(sParam2, iParam4, 0);
}

int func_67(char* sParam0, int iParam1, bool bParam2)//Position - 0x4F4E
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
					func_75();
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
		if (func_74(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_73();
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
				func_72();
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
				if (func_71())
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
			if (func_70())
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
			func_69();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_68();
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
		func_75();
	}
	return 0;
}

void func_68()//Position - 0x521A
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

void func_69()//Position - 0x524B
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

int func_70()//Position - 0x52E0
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_71()//Position - 0x5307
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

void func_72()//Position - 0x53A0
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
		Global_14553 = func_160();
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

void func_73()//Position - 0x5442
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

bool func_74(int iParam0, int iParam1)//Position - 0x5499
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

void func_75()//Position - 0x54D4
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

void func_76(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x552B
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

int func_77()//Position - 0x5581
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_78(char* sParam0, char* sParam1)//Position - 0x55A2
{
	vector3 vVar0;
	
	StringConCat(&vVar0, sParam0, 24);
	if (func_160() == 0)
	{
		StringConCat(&vVar0, "M", 24);
	}
	else if (func_160() == 1)
	{
		StringConCat(&vVar0, "F", 24);
	}
	else
	{
		StringConCat(&vVar0, "T", 24);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		StringConCat(&vVar0, sParam1, 24);
	}
	if (func_159(&uLocal_176, cLocal_387, &vVar0, 8, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_79(int iParam0)//Position - 0x5606
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

int func_80(int iParam0)//Position - 0x5656
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
			if (func_81())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_81()//Position - 0x56A0
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

int func_82(vector3 vParam0)//Position - 0x56D2
{
	if (func_160() == 2)
	{
		if (func_83() && !Global_26003)
		{
			if (fLocal_47 == -1f)
			{
				fLocal_47 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vParam0);
			}
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vParam0) > (fLocal_47 + 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				Global_26003 = 1;
				return 1;
			}
		}
	}
	return 0;
}

var func_83()//Position - 0x575F
{
	return Global_26000;
}

int func_84()//Position - 0x576A
{
	if (Global_15866 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_85()//Position - 0x578C
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	var uVar7;
	
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, 0f, -6f, 0f) };
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), vVar0, 5f, 5f, 5f, false, true, 0))
		{
			PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), iLocal_3, &vVar3, &fVar6, &uVar7, 1, 3f, 0f);
			ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), fVar6);
			ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), vVar3, 1, false, 0, 1);
		}
	}
}

int func_86(int iParam0)//Position - 0x57FD
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11[4];
	vector3 vVar24[4];
	vector3 vVar37[4];
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iLocal_155))
	{
		iVar1 = iParam0;
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar1), &vVar2, &vVar5);
		vVar8 = { vVar5 - vVar2 };
		vVar11[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, (-vVar8.x / 2f), (vVar8.y / 2f), 0f) };
		vVar11[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, (vVar8.x / 2f), (vVar8.y / 2f), 0f) };
		vVar11[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, (vVar8.x / 2f), (-vVar8.y / 2f), 0f) };
		vVar11[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, (-vVar8.x / 2f), (-vVar8.y / 2f), 0f) };
		vVar24[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, -1f, -2.5f, 0f) };
		vVar24[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, 1f, -2.5f, 0f) };
		vVar24[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, 0.75f, -5f, 0f) };
		vVar24[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, -0.75f, -5f, 0f) };
		iVar50 = 0;
		while (iVar50 < vVar24.x)
		{
			iVar52 = iVar50 + 1;
			if (iVar52 == vVar24.x)
			{
				iVar52 = 0;
			}
			iVar51 = 0;
			while (iVar51 < vVar11.x)
			{
				iVar53 = iVar51 + 1;
				if (iVar53 == vVar11.x)
				{
					iVar53 = 0;
				}
				if (func_87(vVar24[iVar50 /*3*/], vVar24[iVar52 /*3*/], vVar11[iVar51 /*3*/], vVar11[iVar53 /*3*/], &(vVar37[iVar50 /*3*/])))
				{
					iVar0 = 1;
				}
				iVar51++;
			}
			iVar50++;
		}
	}
	return iVar0;
}

int func_87(vector3 vParam0, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11, var uParam12)//Position - 0x5981
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = vParam0.x;
	fVar1 = Param3;
	fVar2 = Param6;
	fVar3 = Param9;
	fVar4 = vParam0.y;
	fVar5 = Param3.f_1;
	fVar6 = Param6.f_1;
	fVar7 = Param9.f_1;
	fVar8 = (((fVar0 - fVar1) * (fVar6 - fVar7)) - ((fVar4 - fVar5) * (fVar2 - fVar3)));
	if (fVar8 == 0f)
	{
		return 0;
	}
	fVar9 = ((fVar0 * fVar5) - (fVar4 * fVar1));
	fVar10 = ((fVar2 * fVar7) - (fVar6 * fVar3));
	fVar11 = (((fVar9 * (fVar2 - fVar3)) - ((fVar0 - fVar1) * fVar10)) / fVar8);
	fVar12 = (((fVar9 * (fVar6 - fVar7)) - ((fVar4 - fVar5) * fVar10)) / fVar8);
	if (((fVar11 < func_89(fVar0, fVar1) || fVar11 > func_88(fVar0, fVar1)) || fVar11 < func_89(fVar2, fVar3)) || fVar11 > func_88(fVar2, fVar3))
	{
		return 0;
	}
	if (((fVar12 < func_89(fVar4, fVar5) || fVar12 > func_88(fVar4, fVar5)) || fVar12 < func_89(fVar6, fVar7)) || fVar12 > func_88(fVar6, fVar7))
	{
		return 0;
	}
	*uParam12 = fVar11;
	uParam12->f_1 = fVar12;
	uParam12->f_2 = vParam0.z;
	return 1;
}

float func_88(float fParam0, float fParam1)//Position - 0x5AB9
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_89(float fParam0, float fParam1)//Position - 0x5AD3
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_90(var uParam0, int iParam1, bool bParam2)//Position - 0x5AED
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (CAM::DOES_CAM_EXIST(uParam0->f_14))
	{
		CAM::DESTROY_CAM(uParam0->f_14, 0);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_15))
	{
		CAM::DESTROY_CAM(uParam0->f_15, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		uParam0->f_14 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
		CAM::SET_CAM_COORD(uParam0->f_14, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, *uParam0));
		if (uParam0->f_18 == 1)
		{
			CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_14, iParam1, *uParam0, 1);
		}
		if (bParam2)
		{
			CAM::SET_CAM_ROT(uParam0->f_14, uParam0->f_3, 2);
		}
		else
		{
			vVar0 = { func_93(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, uParam0->f_3), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, *uParam0)) };
			vVar3 = { func_91(vVar0) };
			CAM::SET_CAM_ROT(uParam0->f_14, vVar3, 2);
		}
		CAM::SET_CAM_FOV(uParam0->f_14, uParam0->f_12);
		CAM::SET_CAM_ACTIVE(uParam0->f_14, true);
	}
}

Vector3 func_91(vector3 vParam0)//Position - 0x5BBF
{
	vector3 vVar0;
	
	vParam0.z = func_92(vParam0.z);
	vVar0.z = MISC::ATAN2(-vParam0.x, vParam0.y);
	vVar0.x = MISC::ASIN(vParam0.z);
	vVar0.y = 0f;
	return vVar0;
}

float func_92(float fParam0)//Position - 0x5BF5
{
	if (fParam0 == 1f)
	{
		return 0.999999f;
	}
	if (fParam0 == -1f)
	{
		return -0.999999f;
	}
	return fParam0;
}

Vector3 func_93(vector3 vParam0, vector3 vParam3)//Position - 0x5C1D
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	vVar0 = { vParam0 - vParam3 };
	fVar6 = SYSTEM::SQRT((((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) + (vVar0.z * vVar0.z)));
	vVar3.x = (vVar0.x / fVar6);
	vVar3.y = (vVar0.y / fVar6);
	vVar3.z = (vVar0.z / fVar6);
	return vVar3;
}

void func_94(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x5C72
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_101(1);
		HUD::_0xA8FDB297A8D25FBA();
		HUD::_0xFDB423997FA30340();
		if (Global_14553.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_70())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_100(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_101(0);
		HUD::_0xE1CD1E48E025E661();
		Global_56500 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_100(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_98(PLAYER::PLAYER_ID())) && !func_96(PLAYER::PLAYER_ID(), 0)) && !func_95()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_98(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_71588 = 0;
	}
}

bool func_95()//Position - 0x5DAB
{
	return MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_39.f_18, 14);
}

bool func_96(int iParam0, int iParam1)//Position - 0x5DC8
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_97(-1, 0) == 8;
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

int func_97(int iParam0, bool bParam1)//Position - 0x5E13
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_25();
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

int func_98(int iParam0)//Position - 0x5E54
{
	if (func_96(iParam0, 0))
	{
		return 1;
	}
	if (func_99())
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

bool func_99()//Position - 0x5E96
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_100(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x5EA7
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

void func_101(int iParam0)//Position - 0x5EDA
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

void func_102()//Position - 0x5EFD
{
	Global_14732 = 0;
	func_75();
}

int func_103(bool bParam0, bool bParam1, bool bParam2)//Position - 0x5F0D
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

void func_104()//Position - 0x5FF2
{
	int iVar0;
	
	if (PED::IS_PED_INJURED(iLocal_141))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_121))
		{
			HUD::REMOVE_BLIP(&iLocal_121);
		}
		iVar0++;
	}
	if (PED::IS_PED_INJURED(iLocal_142))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_123))
		{
			HUD::REMOVE_BLIP(&iLocal_123);
		}
		iVar0++;
	}
	if (PED::IS_PED_INJURED(iLocal_143))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_124))
		{
			HUD::REMOVE_BLIP(&iLocal_124);
		}
		iVar0++;
	}
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		if (MISC::GET_GAME_TIMER() > iLocal_86 + 8000)
		{
			func_105(iLocal_140, "GENERIC_FRIGHTENED_HIGH", 3);
			iLocal_86 = MISC::GET_GAME_TIMER();
		}
	}
	if (iVar0 == 3)
	{
		bLocal_78 = true;
	}
}

void func_105(int iParam0, char* sParam1, int iParam2)//Position - 0x6084
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_106(iParam2), 1);
}

int func_106(int iParam0)//Position - 0x609B
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

void func_107()//Position - 0x6290
{
	int iVar0;
	vector3 vVar1[4];
	
	vVar1[0 /*3*/] = { 986.8661f, -113.7463f, 72.9153f };
	vVar1[1 /*3*/] = { 964.0147f, -144.0337f, 73.4875f };
	vVar1[2 /*3*/] = { 954.2817f, -137.429f, 73.4781f };
	vVar1[3 /*3*/] = { 976.5977f, -149.0529f, 73.2404f };
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_59, 10f, 10f, 10f, false, true, 0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iLocal_150[iVar0] = PED::CREATE_PED(22, iLocal_371, vVar1[iVar0 /*3*/], 0f, 1, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_150[iVar0], joaat("weapon_sawnoffshotgun"), 999999, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_150[iVar0], iLocal_374);
			BRAIN::TASK_COMBAT_PED(iLocal_150[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
			PED::SET_PED_CONFIG_FLAG(iLocal_150[iVar0], 42, true);
			iLocal_134[iVar0] = func_170(iLocal_150[iVar0], 1, 0);
			iVar0++;
		}
		iLocal_76 = 1;
	}
}

void func_108()//Position - 0x6397
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (PED::IS_PED_INJURED(iLocal_150[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_134[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_134[iVar0]));
			}
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 4)
	{
		bLocal_77 = true;
	}
}

void func_109(var uParam0, int iParam1, int iParam2)//Position - 0x63E4
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_2528542.f_4582, 26))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(iParam2);
		GRAPHICS::_STOP_SCREEN_EFFECT("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			GRAPHICS::_START_SCREEN_EFFECT("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!MISC::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_110(uParam0->f_3))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_110(sVar0))
		{
			HUD::CLEAR_HELP(1);
		}
	}
}

int func_110(char* sParam0)//Position - 0x64C1
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_111()//Position - 0x64D4
{
	if (PED::IS_PED_INJURED(iLocal_142))
	{
		return 1;
	}
	else if (PED::IS_PED_ON_FOOT(iLocal_142))
	{
		return 1;
	}
	if (PED::IS_PED_INJURED(iLocal_141))
	{
		return 1;
	}
	if (PED::IS_PED_INJURED(iLocal_143))
	{
		return 1;
	}
	return 0;
}

int func_112()//Position - 0x6514
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_155, vLocal_59, 10f, 10f, 10f, false, true, 0))
		{
			bLocal_74 = true;
			return 1;
		}
	}
	return 0;
}

int func_113()//Position - 0x654D
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
	{
		if (iLocal_84 > 0)
		{
			func_114();
		}
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_155, 20f, 20f, 10f, 0, 1, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_155, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (iLocal_438 == -1)
				{
					iLocal_438 = MISC::GET_GAME_TIMER();
				}
				iLocal_84++;
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_155);
				if (SYSTEM::TIMERA() > 10000)
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) > 49)
					{
						func_159(&uLocal_176, cLocal_387, "RESNA_STRG", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_142))
					{
						func_159(&uLocal_176, cLocal_387, "RESNA_FOFF", 4, 0, 0, 0);
					}
					SYSTEM::SETTIMERA(0);
				}
			}
			if (iLocal_84 > 30)
			{
				return 1;
			}
		}
		else
		{
			iLocal_84 = 0;
		}
		if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_155))
		{
			return 1;
		}
	}
	return 0;
}

void func_114()//Position - 0x661B
{
	if (!PED::IS_PED_INJURED(iLocal_142))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_142, 0))
		{
			if (!BRAIN::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iLocal_142))
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_142, joaat("weapon_microsmg"), 0) || (WEAPON::HAS_PED_GOT_WEAPON(iLocal_142, joaat("weapon_microsmg"), 0) && WEAPON::GET_PED_AMMO_BY_TYPE(iLocal_142, -1878508229) == 0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_142, joaat("weapon_microsmg"), 68, true, true);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_142, joaat("weapon_microsmg"), true);
				}
				BRAIN::TASK_DRIVE_BY(iLocal_142, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 100f, 100, 1, -753768974);
			}
		}
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_438) > 250)
	{
		if (!PED::IS_PED_INJURED(iLocal_141))
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(iLocal_141, 0) && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_141, 2104565373) != 1) && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_141, 2104565373) != 0)
			{
				BRAIN::CLEAR_PED_TASKS(iLocal_141);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_141, joaat("weapon_microsmg"), 68, true, true);
				BRAIN::TASK_DRIVE_BY(iLocal_141, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 100f, 100, 0, -753768974);
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_143))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(iLocal_143, 0) && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_143, 2104565373) != 1) && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_143, 2104565373) != 0)
		{
			BRAIN::CLEAR_PED_TASKS(iLocal_143);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_143, joaat("weapon_pistol"), 68, true, true);
			BRAIN::TASK_DRIVE_BY(iLocal_143, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 100f, 100, 0, -753768974);
			PED::SET_PED_KEEP_TASK(iLocal_143, true);
		}
	}
	if (!iLocal_366)
	{
		iLocal_366 = 1;
	}
}

int func_115()//Position - 0x679D
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
	{
		if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_155) < 700f || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_155) < 700f)
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_116()//Position - 0x67DC
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
	{
		if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_155, 0, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_155, 1, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_155, 4, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_155, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_117(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)//Position - 0x6828
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1), 0))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(iParam0, 1);
						HUD::SET_BLIP_ALPHA(iParam0, (255 - iVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(iParam0, 0);
						HUD::SET_BLIP_ALPHA(iParam0, 255);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(iParam0, 1);
						HUD::SET_BLIP_ALPHA(iParam0, (255 - iVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(iParam0, 0);
						HUD::SET_BLIP_ALPHA(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_118()//Position - 0x6981
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
		{
			func_119(&uLocal_341, iLocal_155, 0, 0, 1, 1, 1);
		}
		else
		{
			func_109(&uLocal_341, 0, 0);
		}
	}
	else
	{
		func_109(&uLocal_341, 0, 0);
	}
}

void func_119(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x69C5
{
	func_120(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_120(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0x69DF
{
	uParam0->f_6 = 0;
	func_121(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_121(var uParam0, int iParam1, vector3 vParam2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0x6A01
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_110(iVar0))
	{
		func_147();
	}
	if (func_146(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::_0x7D7A2E43E74E2EB8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::_0x2BC338A7B21F4608(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 1);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_141(uParam0, bParam7, bParam9, 0))
			{
				func_137(uParam0, iParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_125(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
						{
							if (!func_110(iVar0))
							{
								func_61(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_124(1);
								}
							}
						}
					}
				}
			}
			else if (func_125(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
					{
						if (!func_110(iVar0))
						{
							func_61(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_124(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam5))
			{
				if (func_110(sParam5))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(3) == 3 || CAM::_0xEE778F8C7E1142E2(3) == 4)
					{
						func_109(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
					{
						func_109(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
					{
						func_109(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
					{
						func_109(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
					{
						func_109(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_109(uParam0, iVar0, 1);
				}
			}
			if (!func_141(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_123(uParam0))
				{
					func_122(uParam0);
				}
			}
		}
	}
	else
	{
		func_109(uParam0, iVar0, 0);
	}
}

void func_122(var uParam0)//Position - 0x6D6E
{
	if (func_146(PLAYER::PLAYER_PED_ID()))
	{
		BRAIN::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		CAM::STOP_GAMEPLAY_HINT(0);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::_STOP_SCREEN_EFFECT("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::_START_SCREEN_EFFECT("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_123(var uParam0)//Position - 0x6DD7
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_124(bool bParam0)//Position - 0x6E02
{
	switch (Global_36425)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_106565.f_10043.f_100++;
			}
			return Global_106565.f_10043.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_106565.f_10043.f_101++;
			}
			return Global_106565.f_10043.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_106565.f_10043.f_102++;
			}
			return Global_106565.f_10043.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_125(char* sParam0)//Position - 0x6EAC
{
	if (!func_126(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_110(sParam0)) || func_110("CMN_HINT"))
		{
			HUD::CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_36425)
	{
		case 0:
		case 3:
			if (func_124(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_124(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_124(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_126(bool bParam0, bool bParam1, bool bParam2)//Position - 0x6F45
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_136(0))
	{
		return 0;
	}
	if (func_135())
	{
		return 0;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 0;
	}
	if (Global_68807)
	{
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53675)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(3) == 3 || CAM::_0xEE778F8C7E1142E2(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	if ((func_134() || func_133(Global_4456448.f_161209)) || func_132())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			iVar1 = func_131(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::_0xE33FFA906CE74880(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == 562680400 && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == 1181327175 && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == -1693015116 && iVar1 == 0) && func_130(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1680665)
	{
		return 0;
	}
	if (func_127(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_127(int iParam0)//Position - 0x719E
{
	if (iParam0 != func_129())
	{
		if (func_128(iParam0, 1, 1))
		{
			return Global_2424047[iParam0 /*416*/].f_309.f_5 != -1;
		}
		else if ((Global_1312867 && iParam0 == PLAYER::PLAYER_ID()) && func_128(iParam0, 1, 0))
		{
			return Global_2424047[iParam0 /*416*/].f_309.f_5 != -1;
		}
	}
	return 0;
}

int func_128(int iParam0, bool bParam1, bool bParam2)//Position - 0x7204
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

int func_129()//Position - 0x724E
{
	return -1;
}

int func_130(int iParam0, int iParam1)//Position - 0x7257
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_131(int iParam0, int iParam1)//Position - 0x72B9
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

var func_132()//Position - 0x733E
{
	return Global_2448756.f_16;
}

bool func_133(int iParam0)//Position - 0x734C
{
	return iParam0 == 51;
}

var func_134()//Position - 0x7359
{
	return Global_2448756.f_15;
}

bool func_135()//Position - 0x7367
{
	return MISC::GET_GAME_TIMER() <= Global_17411.f_5878 + 100;
}

int func_136(int iParam0)//Position - 0x737C
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

void func_137(var uParam0, int iParam1, vector3 vParam2, int iParam5)//Position - 0x73D6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1319096 == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		func_109(uParam0, 0, 0);
	}
	if (func_140(vParam2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_138())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	BRAIN::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::_START_SCREEN_EFFECT("FocusIn", 0, 0);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_138()//Position - 0x74E6
{
	return func_139(PLAYER::PLAYER_ID());
}

int func_139(int iParam0)//Position - 0x74F6
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_140(vector3 vParam0, vector3 vParam3, bool bParam6)//Position - 0x7515
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_141(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x755C
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (func_145(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_144(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_144(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_145(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_123(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_145(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_144(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_144(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_145(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!func_145(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_144(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_144(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || BRAIN::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_145(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (func_143(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_142(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_142(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || BRAIN::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_143(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_123(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_126(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_147();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_142(bool bParam0, bool bParam1, bool bParam2)//Position - 0x78C8
{
	if (!func_126(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_143(bool bParam0, bool bParam1, bool bParam2)//Position - 0x791A
{
	if (!func_126(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_144(bool bParam0, bool bParam1, bool bParam2)//Position - 0x7963
{
	if (!func_126(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_145(bool bParam0, bool bParam1, bool bParam2)//Position - 0x79C2
{
	if (!func_126(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_116)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_146(int iParam0)//Position - 0x7A18
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_147()//Position - 0x7A73
{
	MISC::SET_BIT(&Global_2424, 4);
}

void func_148()//Position - 0x7A83
{
	if (!PED::IS_PED_INJURED(iLocal_143) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(iLocal_143, iLocal_155, 0))
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_155, sLocal_386, "IG_1_ALT1_EXIT_VAN_BURR", 3))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_143, iLocal_155, 1);
			}
		}
	}
}

void func_149()//Position - 0x7AC9
{
	if (!PED::IS_PED_INJURED(iLocal_142))
	{
		BRAIN::TASK_COMBAT_PED(iLocal_142, PLAYER::PLAYER_PED_ID(), 0, 16);
		PED::SET_PED_KEEP_TASK(iLocal_142, true);
		func_159(&uLocal_176, cLocal_387, "RESNA_ATT", 4, 0, 0, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_141))
	{
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_141, joaat("weapon_smg"), 68, true, true);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_141, joaat("weapon_smg"), true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_141, true);
		BRAIN::TASK_COMBAT_PED(iLocal_141, PLAYER::PLAYER_PED_ID(), 0, 16);
		PED::SET_PED_KEEP_TASK(iLocal_141, true);
	}
	if (!PED::IS_PED_INJURED(iLocal_143))
	{
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_143, joaat("weapon_pistol"), 68, true, true);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_143, joaat("weapon_pistol"), true);
		BRAIN::TASK_COMBAT_PED(iLocal_143, PLAYER::PLAYER_PED_ID(), 0, 16);
		PED::SET_PED_KEEP_TASK(iLocal_143, true);
	}
	func_150();
	BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_159);
	iLocal_50 = 2;
}

void func_150()//Position - 0x7B87
{
	if (!PED::IS_PED_INJURED(iLocal_142))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_123))
		{
			iLocal_123 = func_170(iLocal_142, 1, 0);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_141))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_141, PLAYER::PLAYER_PED_ID(), 100f, 100f, 20f, 0, 1, 0))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_121))
			{
				iLocal_121 = func_170(iLocal_141, 1, 0);
			}
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_141);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_143))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_143, PLAYER::PLAYER_PED_ID(), 100f, 100f, 20f, 0, 1, 0))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_124))
			{
				iLocal_124 = func_170(iLocal_143, 1, 0);
			}
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_143);
		}
	}
}

void func_151()//Position - 0x7C39
{
	bool bVar0;
	
	bVar0 = false;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_155, PLAYER::PLAYER_PED_ID(), 1))
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (PED::IS_PED_INJURED(iLocal_141))
	{
		bVar0 = true;
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_141, PLAYER::PLAYER_PED_ID(), 1))
	{
		bVar0 = true;
	}
	if (PED::IS_PED_INJURED(iLocal_142))
	{
		bVar0 = true;
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_142, PLAYER::PLAYER_PED_ID(), 1))
	{
		bVar0 = true;
	}
	if (PED::IS_PED_INJURED(iLocal_143))
	{
		bVar0 = true;
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_143, PLAYER::PLAYER_PED_ID(), 1))
	{
		bVar0 = true;
	}
	if (PED::IS_PED_INJURED(iLocal_140))
	{
		bVar0 = true;
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_157();
		if (iLocal_365)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_107))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_107) > 0.735f)
				{
					func_156();
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_107) > 0.4f)
				{
					func_155();
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_140))
			{
				BRAIN::TASK_COWER(iLocal_140, -1);
			}
			if (iLocal_82)
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_155, false);
			}
			HUD::REMOVE_BLIP(&iLocal_120);
			if (!HUD::DOES_BLIP_EXIST(iLocal_123))
			{
				iLocal_123 = func_170(iLocal_142, 1, 0);
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.3f);
			if (!func_203())
			{
				func_161(1);
			}
			func_153();
			func_149();
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_142))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
				{
					BRAIN::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_142, iLocal_155, PLAYER::PLAYER_PED_ID(), 8, 40f, 786469, -1f, -1f, 1);
				}
				else
				{
					BRAIN::TASK_SMART_FLEE_PED(iLocal_142, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_142, true);
				}
			}
			func_152();
		}
	}
}

void func_152()//Position - 0x7DD0
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_106))
	{
		PED::DETACH_SYNCHRONIZED_SCENE(iLocal_106);
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_107))
	{
		PED::DETACH_SYNCHRONIZED_SCENE(iLocal_107);
	}
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_140, 1);
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_140, sLocal_386, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 3))
		{
			BRAIN::TASK_SMART_FLEE_PED(iLocal_140, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_140, true);
		}
	}
	func_149();
	func_250();
}

void func_153()//Position - 0x7E39
{
	Global_14732 = 0;
	func_154();
}

void func_154()//Position - 0x7E49
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16877 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15866 = 6;
	}
}

void func_155()//Position - 0x7E6A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0) && !PED::IS_PED_INJURED(iLocal_140))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_140, iLocal_155, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_155, sLocal_175), 0.421191f, -1.99042f, 0.20134f, -5.08056E-06f, -6.5249E-06f, 174.612f, 1, 0, 0, 0, 2, 1);
		ENTITY::SET_ENTITY_COORDS(iLocal_140, ENTITY::GET_ENTITY_COORDS(iLocal_155, false), 1, false, 0, 1);
		BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_140);
		BRAIN::TASK_PLAY_ANIM(iLocal_140, sLocal_386, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_140, true);
		if (!HUD::DOES_BLIP_EXIST(iLocal_123))
		{
			iLocal_123 = func_170(iLocal_142, 1, 0);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
		{
			VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_155, 1);
		}
		iLocal_365 = 0;
	}
}

void func_156()//Position - 0x7F20
{
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0) && !PED::IS_PED_INJURED(iLocal_140)) && !PED::IS_PED_INJURED(iLocal_141)) && !PED::IS_PED_INJURED(iLocal_143))
	{
		PED::SET_PED_INTO_VEHICLE(iLocal_143, iLocal_155, 2);
		PED::SET_PED_INTO_VEHICLE(iLocal_141, iLocal_155, 1);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_140, iLocal_155, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_155, sLocal_175), 0.421191f, -1.99042f, 0.20134f, -5.08056E-06f, -6.5249E-06f, 174.612f, 1, 0, 0, 0, 2, 1);
		ENTITY::SET_ENTITY_COORDS(iLocal_140, ENTITY::GET_ENTITY_COORDS(iLocal_155, false), 1, false, 0, 1);
		BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_140);
		BRAIN::TASK_PLAY_ANIM(iLocal_140, sLocal_386, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_140, true);
		if (!HUD::DOES_BLIP_EXIST(iLocal_123))
		{
			iLocal_123 = func_170(iLocal_142, 1, 0);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
		{
			VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_155, 0);
		}
		RECORDING::_0xAF66DCEE6609B148();
		iLocal_365 = 0;
	}
}

void func_157()//Position - 0x8006
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_118))
	{
		if (!PED::IS_PED_INJURED(iLocal_141))
		{
			BRAIN::CLEAR_PED_TASKS(iLocal_141);
		}
		if (!PED::IS_PED_INJURED(iLocal_143))
		{
			BRAIN::CLEAR_PED_TASKS(iLocal_143);
		}
		if (!PED::IS_PED_INJURED(iLocal_140))
		{
			BRAIN::CLEAR_PED_TASKS(iLocal_140);
		}
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_155, -4f, 1);
	}
}

void func_158()//Position - 0x8054
{
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), 1) || FIRE::IS_ENTITY_ON_FIRE(iLocal_140))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_118))
			{
				func_157();
			}
			func_152();
		}
	}
}

bool func_159(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x8091
{
	func_76(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_67(sParam2, iParam3, 0);
}

int func_160()//Position - 0x80DF
{
	func_33();
	return Global_106565.f_2357.f_539.f_4321;
}

int func_161(int iParam0)//Position - 0x80F8
{
	if (func_164())
	{
		Global_106555 = 1;
		Global_106552 = MISC::GET_GAME_TIMER();
		if (func_27(Global_106554))
		{
			func_162(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_27(Global_106554))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_162(int iParam0)//Position - 0x814B
{
	switch (iParam0)
	{
		case 0:
			if (Global_106565.f_24989.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_61(func_163(iParam0), -1);
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
					func_61(func_163(iParam0), -1);
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
					func_61(func_163(iParam0), -1);
					Global_106565.f_24989.f_4++;
					MISC::SET_BIT(&Global_106561, 2);
				}
			}
			break;
	}
}

char* func_163(int iParam0)//Position - 0x822C
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

int func_164()//Position - 0x826F
{
	switch (func_165(&Global_25824, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_165(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x82A5
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
		if (func_169(0))
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
		if (!func_167(iParam2))
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
			func_166(uParam0, iParam4);
		}
	}
	return 2;
}

void func_166(var uParam0, int iParam1)//Position - 0x83DC
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

bool func_167(int iParam0)//Position - 0x842B
{
	return func_168(iParam0, Global_36425);
}

int func_168(int iParam0, int iParam1)//Position - 0x843C
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

int func_169(int iParam0)//Position - 0x861D
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_167(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_170(int iParam0, bool bParam1, int iParam2)//Position - 0x863F
{
	iParam2 = iParam2;
	return func_53(iParam0, bParam1, 145);
}

void func_171()//Position - 0x8655
{
	if (iLocal_361)
	{
	}
	else
	{
		iLocal_361 = 1;
	}
}

int func_172()//Position - 0x866A
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vLocal_44) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_183())
		{
			return 0;
		}
	}
	if (func_179())
	{
		return 1;
	}
	if (func_173(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_173(float fParam0, bool bParam1)//Position - 0x86F0
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
		if (func_35(func_160()))
		{
			iVar36 = func_32();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (MISC::IS_BIT_SET(Global_106565.f_18568[iVar32 /*6*/], 2) && !MISC::IS_BIT_SET(Global_106565.f_18568[iVar32 /*6*/], 3))
				{
					func_174(iVar32, &Var0);
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

void func_174(int iParam0, var uParam1)//Position - 0x87A7
{
	switch (iParam0)
	{
		case 0:
			func_175(uParam1, "Abigail1", func_177(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 1:
			func_175(uParam1, "Abigail2", func_177(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 2:
			func_175(uParam1, "Barry1", func_177(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 3:
			func_175(uParam1, "Barry2", func_177(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_176(iParam0), 1, 1);
			break;
		
		case 4:
			func_175(uParam1, "Barry3", func_177(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 5:
			func_175(uParam1, "Barry3A", func_177(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 6:
			func_175(uParam1, "Barry3C", func_177(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 7:
			func_175(uParam1, "Barry4", func_177(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_176(iParam0), 0, 0);
			break;
		
		case 8:
			func_175(uParam1, "Dreyfuss1", func_177(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 9:
			func_175(uParam1, "Epsilon1", func_177(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 10:
			func_175(uParam1, "Epsilon2", func_177(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 11:
			func_175(uParam1, "Epsilon3", func_177(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 12:
			func_175(uParam1, "Epsilon4", func_177(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 13:
			func_175(uParam1, "Epsilon5", func_177(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 14:
			func_175(uParam1, "Epsilon6", func_177(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 15:
			func_175(uParam1, "Epsilon7", func_177(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 16:
			func_175(uParam1, "Epsilon8", func_177(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 17:
			func_175(uParam1, "Extreme1", func_177(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 18:
			func_175(uParam1, "Extreme2", func_177(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 19:
			func_175(uParam1, "Extreme3", func_177(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 20:
			func_175(uParam1, "Extreme4", func_177(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 21:
			func_175(uParam1, "Fanatic1", func_177(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_176(iParam0), 1, 0);
			break;
		
		case 22:
			func_175(uParam1, "Fanatic2", func_177(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_176(iParam0), 1, 0);
			break;
		
		case 23:
			func_175(uParam1, "Fanatic3", func_177(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_176(iParam0), 0, 1);
			break;
		
		case 24:
			func_175(uParam1, "Hao1", func_177(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_176(iParam0), 0, 1);
			break;
		
		case 25:
			func_175(uParam1, "Hunting1", func_177(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 26:
			func_175(uParam1, "Hunting2", func_177(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 27:
			func_175(uParam1, "Josh1", func_177(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 28:
			func_175(uParam1, "Josh2", func_177(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_176(iParam0), 1, 1);
			break;
		
		case 29:
			func_175(uParam1, "Josh3", func_177(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_176(iParam0), 1, 1);
			break;
		
		case 30:
			func_175(uParam1, "Josh4", func_177(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 31:
			func_175(uParam1, "Maude1", func_177(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 32:
			func_175(uParam1, "Minute1", func_177(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 33:
			func_175(uParam1, "Minute2", func_177(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 34:
			func_175(uParam1, "Minute3", func_177(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 35:
			func_175(uParam1, "MrsPhilips1", func_177(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 36:
			func_175(uParam1, "MrsPhilips2", func_177(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 37:
			func_175(uParam1, "Nigel1", func_177(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 38:
			func_175(uParam1, "Nigel1A", func_177(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_176(iParam0), 1, 1);
			break;
		
		case 39:
			func_175(uParam1, "Nigel1B", func_177(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_176(iParam0), 1, 1);
			break;
		
		case 40:
			func_175(uParam1, "Nigel1C", func_177(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_176(iParam0), 1, 1);
			break;
		
		case 41:
			func_175(uParam1, "Nigel1D", func_177(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_176(iParam0), 1, 1);
			break;
		
		case 42:
			func_175(uParam1, "Nigel2", func_177(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_176(iParam0), 1, 1);
			break;
		
		case 43:
			func_175(uParam1, "Nigel3", func_177(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_176(iParam0), 1, 1);
			break;
		
		case 44:
			func_175(uParam1, "Omega1", func_177(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 45:
			func_175(uParam1, "Omega2", func_177(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 46:
			func_175(uParam1, "Paparazzo1", func_177(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 47:
			func_175(uParam1, "Paparazzo2", func_177(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 48:
			func_175(uParam1, "Paparazzo3", func_177(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 49:
			func_175(uParam1, "Paparazzo3A", func_177(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 50:
			func_175(uParam1, "Paparazzo3B", func_177(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 51:
			func_175(uParam1, "Paparazzo4", func_177(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 52:
			func_175(uParam1, "Rampage1", func_177(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 54:
			func_175(uParam1, "Rampage3", func_177(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 55:
			func_175(uParam1, "Rampage4", func_177(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 56:
			func_175(uParam1, "Rampage5", func_177(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 53:
			func_175(uParam1, "Rampage2", func_177(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 57:
			func_175(uParam1, "TheLastOne", func_177(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 58:
			func_175(uParam1, "Tonya1", func_177(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 59:
			func_175(uParam1, "Tonya2", func_177(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 60:
			func_175(uParam1, "Tonya3", func_177(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 61:
			func_175(uParam1, "Tonya4", func_177(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 62:
			func_175(uParam1, "Tonya5", func_177(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_175(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0x995C
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

int func_176(int iParam0)//Position - 0x99ED
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

struct<2> func_177(int iParam0)//Position - 0x9D33
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_178(iParam0) };
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

struct<2> func_178(int iParam0)//Position - 0x9D6A
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

int func_179()//Position - 0xA1B6
{
	if (func_182() && !func_183())
	{
		return 1;
	}
	if (func_181() && func_180())
	{
		return 1;
	}
	return 0;
}

bool func_180()//Position - 0xA1E8
{
	return Global_106283 > 0;
}

int func_181()//Position - 0xA1F6
{
	if (Global_90634 != -1)
	{
		return 1;
	}
	return 0;
}

int func_182()//Position - 0xA20B
{
	if (Global_90634 != -1)
	{
		return MISC::IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 20);
	}
	return 0;
}

int func_183()//Position - 0xA231
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

int func_184()//Position - 0xA24E
{
	func_190(39, 1);
	func_190(40, 1);
	func_190(41, 1);
	func_190(42, 1);
	func_190(43, 1);
	func_190(44, 1);
	fLocal_55 = 321f;
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_372, true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_373, true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_371, true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_369, true);
	STREAMING::REQUEST_MODEL(iLocal_373);
	STREAMING::REQUEST_MODEL(iLocal_371);
	STREAMING::REQUEST_MODEL(iLocal_372);
	STREAMING::REQUEST_MODEL(iLocal_369);
	STREAMING::REQUEST_ANIM_DICT(sLocal_386);
	STREAMING::REQUEST_MODEL(joaat("prop_ld_test_01"));
	if (((((STREAMING::HAS_MODEL_LOADED(iLocal_373) && STREAMING::HAS_MODEL_LOADED(iLocal_371)) && STREAMING::HAS_MODEL_LOADED(iLocal_372)) && STREAMING::HAS_MODEL_LOADED(iLocal_369)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_test_01"))) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_386))
	{
		func_189();
		func_188();
		func_187();
		func_186();
		EVENT::ADD_SHOCKING_EVENT_AT_POSITION(109, vLocal_52, -1f);
		iLocal_162 = PED::ADD_SCENARIO_BLOCKING_AREA(vLocal_59 - Vector(50f, 50f, 50f), vLocal_59 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
		switch (func_160())
		{
			case 0:
				sLocal_174 = "MICHAEL";
				break;
			
			case 1:
				sLocal_174 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_174 = "TREVOR";
				break;
		}
		func_185(&uLocal_176, 0, PLAYER::PLAYER_PED_ID(), sLocal_174, 0, 1);
		vLocal_165 = { -3057.362f, 441.8271f, 6.151212f };
		vLocal_168 = { -0.34992f, -0.199749f, -98.79861f };
		fLocal_359 = 116f;
		vLocal_56 = { -3053.721f, 440.9221f, 5.3566f };
		iLocal_164 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), ENTITY::GET_ENTITY_COORDS(iLocal_155, false), true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_164, ENTITY::GET_ENTITY_ROTATION(iLocal_155, 2), 2, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_164, true);
		ENTITY::SET_ENTITY_COLLISION(iLocal_164, false, 0);
		return 1;
	}
	return 0;
}

void func_185(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xA42B
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

void func_186()//Position - 0xA4C6
{
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_141, false);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_155, true);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_155, 3);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_142, iLocal_374);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_143, iLocal_374);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_141, iLocal_374);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_143, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_142, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_141, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_142, 42, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_141, 42, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_143, 42, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_143, 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_143, 1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_143, 13, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_143, 50, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 2, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_142, 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_142, 1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_142, 13, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_142, 50, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_142, 6, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 2, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 13, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 50, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 2, true);
	PED::SET_PED_COMBAT_MOVEMENT(iLocal_143, 2);
	PED::SET_PED_COMBAT_MOVEMENT(iLocal_142, 2);
	PED::SET_PED_COMBAT_MOVEMENT(iLocal_141, 2);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_143, 0);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_142, 0);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_141, 0);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_143, joaat("weapon_pistol"), 68, false, true);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_142, joaat("weapon_sawnoffshotgun"), 68, false, true);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_141, joaat("weapon_microsmg"), 68, false, true);
	PED::SET_PED_DIES_IN_VEHICLE(iLocal_143, 0);
	PED::SET_PED_DIES_IN_VEHICLE(iLocal_142, 0);
	PED::SET_PED_DIES_IN_VEHICLE(iLocal_141, 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_142, 115, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_141, 115, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_143, 115, true);
	func_185(&uLocal_176, 2, iLocal_142, "LostKidnapper", 0, 1);
}

void func_187()//Position - 0xA64D
{
	int iVar0;
	
	iVar0 = 500;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
	{
		iLocal_140 = PED::CREATE_PED(5, iLocal_373, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, vLocal_353), fLocal_55, 1, true);
	}
	else
	{
		iLocal_140 = PED::CREATE_PED(5, iLocal_373, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), vLocal_353), fLocal_55, 1, true);
	}
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_140, "LostKidnapGirl");
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_140, false);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_140, 0);
	ENTITY::SET_ENTITY_HEALTH(iLocal_140, iVar0, 0);
	PED::SET_PED_MAX_HEALTH(iLocal_140, iVar0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_140, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_140, iLocal_375);
	func_185(&uLocal_176, 1, iLocal_140, "LostKidnapGirl", 0, 1);
}

void func_188()//Position - 0xA6E3
{
	vector3 vVar0;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	if (vVar0.x > vLocal_52.x)
	{
		iLocal_155 = VEHICLE::CREATE_VEHICLE(iLocal_369, -1116.946f, 560.8027f, 101.3588f, 116.0592f, true, true, false);
		vLocal_62 = { -1247.233f, 515.3996f, 94.1352f };
	}
	else
	{
		iLocal_155 = VEHICLE::CREATE_VEHICLE(iLocal_369, vLocal_52, 305f, true, true, false);
		vLocal_62 = { -852.9832f, 441.7806f, 86.0437f };
	}
	VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_155);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_155, true, true, 0);
	iLocal_142 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_155, 22, iLocal_372, -1, 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_142, 2, true);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_142, joaat("weapon_sawnoffshotgun"), 68, true, true);
	WEAPON::SET_CURRENT_PED_WEAPON(iLocal_142, joaat("weapon_sawnoffshotgun"), true);
	iLocal_143 = PED::CREATE_PED(22, iLocal_372, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, vLocal_356), fLocal_55, 1, true);
	iLocal_141 = PED::CREATE_PED(22, iLocal_371, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, vLocal_356), fLocal_55, 1, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_155, true);
	iLocal_82 = 1;
	PED::SET_PED_SHOOT_RATE(iLocal_141, 25);
	PED::SET_PED_FIRING_PATTERN(iLocal_141, -753768974);
	PED::SET_PED_SHOOT_RATE(iLocal_143, 35);
	PED::SET_PED_FIRING_PATTERN(iLocal_141, 1566631136);
	PED::SET_PED_ACCURACY(iLocal_142, 12);
	PED::SET_PED_ACCURACY(iLocal_143, 10);
	PED::SET_PED_ACCURACY(iLocal_141, 15);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_155, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_372);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_371);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_369);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_155, false, 0);
	VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_155, 2f);
}

void func_189()//Position - 0xA848
{
	PED::ADD_RELATIONSHIP_GROUP("re_snatched badGuys", &iLocal_374);
	PED::ADD_RELATIONSHIP_GROUP("re_snatched pedVictim", &iLocal_375);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_374, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_374, iLocal_375);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_375, 1862763509);
}

void func_190(int iParam0, bool bParam1)//Position - 0xA88D
{
	if (bParam1)
	{
		if (!func_197(iParam0, 2, 1))
		{
			func_196(iParam0, 2, 1);
		}
	}
	else if (func_197(iParam0, 2, 1))
	{
		func_191(iParam0, 2, 1);
	}
}

void func_191(int iParam0, int iParam1, bool bParam2)//Position - 0xA8C4
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
		if (func_22() == 0)
		{
			iVar0 = func_194(func_195(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_192(func_195(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_106565.f_668[iParam0]), iParam1);
	}
}

void func_192(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xA936
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_193(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_193(var uParam0)//Position - 0xA966
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_25();
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

int func_194(int iParam0, int iParam1, int iParam2)//Position - 0xA99A
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_193(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_195(int iParam0)//Position - 0xA9CC
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

void func_196(int iParam0, int iParam1, bool bParam2)//Position - 0xACED
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
		if (func_22() == 0)
		{
			iVar0 = func_194(func_195(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_192(func_195(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_106565.f_668[iParam0]), iParam1);
	}
}

int func_197(int iParam0, int iParam1, bool bParam2)//Position - 0xAD5F
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
		if (func_22() == 0)
		{
			return MISC::IS_BIT_SET(func_194(func_195(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_106565.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_198()//Position - 0xADC9
{
	float fVar0;
	
	if (((ENTITY::DOES_ENTITY_EXIST(iLocal_141) && ENTITY::DOES_ENTITY_EXIST(iLocal_143)) && ENTITY::DOES_ENTITY_EXIST(iLocal_140)) && ENTITY::DOES_ENTITY_EXIST(iLocal_155))
	{
		STREAMING::REQUEST_ANIM_DICT("random@kidnap_girl");
		if (STREAMING::HAS_ANIM_DICT_LOADED("random@kidnap_girl"))
		{
			fVar0 = 1.25f;
			switch (iLocal_439)
			{
				case 0:
					if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0) && !PED::IS_PED_INJURED(iLocal_140)) && !PED::IS_PED_INJURED(iLocal_141)) && !PED::IS_PED_INJURED(iLocal_143))
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_117))
						{
							vLocal_110 = { 0f, 0f, 0f };
							vLocal_113 = { 0f, 0f, 0f };
							iLocal_117 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_110, vLocal_113, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_117, iLocal_155, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_155, sLocal_175));
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_117, true);
							PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_117, vLocal_110, vLocal_113, 2);
							BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_140, iLocal_117, sLocal_386, "IG_1_GIRL_ON_PHONE_LOOP", 1000f, -1000f, 4, 0, 1148846080, 0);
							BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_141, iLocal_117, sLocal_386, "IG_1_GUY1_IN_VAN_LOOP", 1000f, -1000f, 4, 0, 1148846080, 0);
							BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_143, iLocal_117, sLocal_386, "IG_1_GUY2_IN_VAN_LOOP", 1000f, -1000f, 4, 0, 1148846080, 0);
							PED::SET_PED_CAN_RAGDOLL(iLocal_140, 1);
						}
						else
						{
							func_151();
							func_158();
							if (func_199())
							{
								func_152();
							}
						}
					}
					break;
				
				case 1:
					if ((!PED::IS_PED_INJURED(iLocal_140) && !PED::IS_PED_INJURED(iLocal_141)) && !PED::IS_PED_INJURED(iLocal_143))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_117))
						{
							BRAIN::CLEAR_PED_TASKS(iLocal_141);
							BRAIN::CLEAR_PED_TASKS(iLocal_140);
							BRAIN::CLEAR_PED_TASKS(iLocal_143);
						}
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_118))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
							{
								vLocal_110 = { 0f, 0f, 0f };
								vLocal_113 = { ENTITY::GET_ENTITY_ROTATION(iLocal_155, 2) };
								iLocal_118 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(iLocal_155, false), vLocal_113.x, vLocal_113.y, ENTITY::GET_ENTITY_HEADING(iLocal_155), 2);
								if (iLocal_82)
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_155, false);
									iLocal_82 = 0;
								}
								PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_118, fVar0);
								BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_140, iLocal_118, sLocal_386, "IG_1_GIRL_DRAG_INTO_VAN", 1000f, -4f, 5, 0, 1148846080, 0);
								BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_141, iLocal_118, sLocal_386, "IG_1_GUY1_DRAG_INTO_VAN", 1000f, -4f, 5, 0, 1148846080, 0);
								BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_143, iLocal_118, sLocal_386, "IG_1_GUY2_DRAG_INTO_VAN", 1000f, -4f, 5, 0, 1148846080, 0);
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_155, iLocal_118, "DRAG_INTO_VAN_BURR", sLocal_386, 1000f, -4f, 1, 1148846080);
							}
						}
						else
						{
							if (!iLocal_80)
							{
								if ((((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_118) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_155, false)) < 30f) && !func_84()) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_118) > 0.1f) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_118) < 0.4f)
								{
									if (func_159(&uLocal_176, cLocal_387, "RESNA_HELP", 4, func_200(), 0, 0))
									{
										iLocal_80 = 1;
									}
								}
							}
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_118) > 0.502f)
							{
								ENTITY::SET_ENTITY_INVINCIBLE(iLocal_140, true);
								ENTITY::SET_ENTITY_INVINCIBLE(iLocal_141, true);
								ENTITY::SET_ENTITY_INVINCIBLE(iLocal_143, true);
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_118) < 0.732f)
								{
									if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_155))
									{
										PED::SET_PED_CAN_RAGDOLL(iLocal_141, 0);
										PED::SET_PED_CAN_RAGDOLL(iLocal_143, 0);
										if (!PED::IS_PED_INJURED(iLocal_142) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
										{
											BRAIN::TASK_VEHICLE_TEMP_ACTION(iLocal_142, iLocal_155, 30, 6000);
										}
										ENTITY::SET_ENTITY_INVINCIBLE(iLocal_140, true);
										PED::SET_PED_CONFIG_FLAG(iLocal_140, 106, true);
										PED::SET_PED_CONFIG_FLAG(iLocal_141, 106, true);
										PED::SET_PED_CONFIG_FLAG(iLocal_143, 106, true);
									}
									if (ENTITY::IS_ENTITY_DEAD(iLocal_155, 0))
									{
										func_157();
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_140))
										{
											ENTITY::SET_ENTITY_HEALTH(iLocal_140, 0, 0);
										}
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
										{
											ENTITY::SET_ENTITY_HEALTH(iLocal_143, 0, 0);
										}
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
										{
											ENTITY::SET_ENTITY_HEALTH(iLocal_141, 0, 0);
										}
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_142))
										{
											ENTITY::SET_ENTITY_HEALTH(iLocal_142, 0, 0);
										}
										ENTITY::DETACH_ENTITY(iLocal_155, 1, false);
									}
								}
								else
								{
									PED::SET_PED_CAN_RAGDOLL(iLocal_141, 1);
									PED::SET_PED_CAN_RAGDOLL(iLocal_143, 1);
									PED::SET_PED_CONFIG_FLAG(iLocal_140, 106, false);
									PED::SET_PED_CONFIG_FLAG(iLocal_141, 106, false);
									PED::SET_PED_CONFIG_FLAG(iLocal_143, 106, false);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_141, false);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_143, false);
									func_157();
									func_156();
									iLocal_439 = 3;
									SYSTEM::SETTIMERB(0);
								}
							}
							else
							{
								func_151();
								func_158();
								if (func_199())
								{
									func_152();
								}
							}
						}
					}
					break;
				
				case 3:
					break;
				}
			}
	}
}

int func_199()//Position - 0xB20C
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { 10f, 10f, 3f };
	vVar3 = { -10f, -10f, -3f };
	if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_140, 31086, 0f, 0f, 0f), 15f, 1))
	{
		return 1;
	}
	vVar0 = { vVar0 + PED::GET_PED_BONE_COORDS(iLocal_140, 31086, 0f, 0f, 0f) };
	vVar3 = { vVar3 + PED::GET_PED_BONE_COORDS(iLocal_140, 31086, 0f, 0f, 0f) };
	if (((MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar3, vVar0, joaat("weapon_smokegrenade"), 1) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar3, vVar0, joaat("weapon_grenade"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar3, vVar0, joaat("weapon_stickybomb"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar3, vVar0, joaat("vehicle_weapon_tank"), 1))
	{
		return 1;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iLocal_140))
	{
		return 1;
	}
	return 0;
}

int func_200()//Position - 0xB2EC
{
	int iVar0;
	vector3 vVar1;
	
	vVar1 = { 75f, 75f, 20f };
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), vVar1, 0, 1, 0))
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

void func_201()//Position - 0xB330
{
}

int func_202()//Position - 0xB338
{
	if (!func_167(5))
	{
		return 1;
	}
	if (func_179())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_183())
		{
			return 0;
		}
	}
	if (func_173(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_203()//Position - 0xB39A
{
	if ((Global_106554 == func_41() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_106555)
	{
		return 1;
	}
	return 0;
}

void func_204(bool bParam0)//Position - 0xB3C5
{
	MISC::CLEAR_AREA(vLocal_171, 15f, 1, 0, 0, false);
	MISC::CLEAR_AREA(-1133.993f, 558.3267f, 107.351f, 5f, 1, 0, 0, false);
	if (bParam0)
	{
		iLocal_414 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(104.0503f, 560.4913f, -1126.376f) - Vector(5.75f, 19.25f, 39.75f), Vector(104.0503f, 560.4913f, -1126.376f) + Vector(5.75f, 19.25f, 39.75f), 0, 1, 1, 1);
		iLocal_413 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(9.361914f, 442.6952f, -3055.088f) + Vector(5f, 10f, 10f), Vector(9.361914f, 442.6952f, -3055.088f) - Vector(5f, 10f, 10f), 0, 1, 1, 1);
	}
	else
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_414, 0);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_413, 0);
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(107.351f, 558.3267f, -1133.993f) + Vector(7.25f, 25.25f, 25f), Vector(107.351f, 558.3267f, -1133.993f) - Vector(7.25f, 25.25f, 25f), !bParam0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(9.361914f, 442.6952f, -3055.088f) + Vector(5f, 10f, 10f), Vector(9.361914f, 442.6952f, -3055.088f) - Vector(5f, 10f, 10f), !bParam0, 1);
}

void func_205()//Position - 0xB51C
{
}

void func_206(int iParam0)//Position - 0xB524
{
	if (iParam0 == -1)
	{
		iParam0 = func_41();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_208(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_106551 = 0;
	func_207();
}

void func_207()//Position - 0xB55A
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

void func_208(int iParam0)//Position - 0xB597
{
	Global_106554 = iParam0;
}

int func_209(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xB5A5
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
		iParam3 = func_41();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_249())
		{
			return 0;
		}
	}
	vLocal_44 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_183())
			{
				return 0;
			}
		}
		if (!Global_106565.f_9079)
		{
			return 0;
		}
		if (func_16(0))
		{
			return 0;
		}
		if (func_179())
		{
			return 0;
		}
		if (func_248())
		{
			return 0;
		}
		if (Global_106554 != -1)
		{
			return 0;
		}
		if (func_35(func_160()))
		{
			if (func_173(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((vVar1.z - vLocal_44.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_247(iParam3))
		{
			return 0;
		}
		if (func_35(func_160()))
		{
			if (func_246(func_160()) == 4 || func_246(func_160()) == 5)
			{
				return 0;
			}
		}
		if (func_35(func_160()))
		{
			if (!func_245(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_244(Global_106565.f_24989.f_43[iParam3]))
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
		if (func_243())
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
		if (!func_234(4))
		{
			return 0;
		}
		if (!func_167(5))
		{
			return 0;
		}
		if (func_233(iParam3, iParam4) && !bParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_233(0, 0))
		{
			return 0;
		}
		if (Global_25911)
		{
			return 0;
		}
		if (func_247(30) && !func_233(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_35(func_160()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_106565.f_2357.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_106565.f_2357.f_539.f_2296[iVar4];
				if (func_232(iVar8))
				{
					if (func_210(iVar4))
					{
						if (!func_140(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vVar5) < (210f * 210f))
							{
								if (func_160() != iVar4)
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

bool func_210(int iParam0)//Position - 0xB93F
{
	int iVar0;
	
	iVar0 = Global_106565.f_2357.f_539.f_2296[iParam0];
	return func_211(iVar0);
}

int func_211(int iParam0)//Position - 0xB960
{
	return func_212(iParam0, 1);
}

int func_212(int iParam0, int iParam1)//Position - 0xB96F
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_232(iParam0))
	{
		return 0;
	}
	func_213(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_213(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xB9C2
{
	func_214(func_225(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_214(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xB9E0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_224(iParam0, iParam1))
	{
		iVar0 = func_223(iParam1);
		iVar1 = func_221(iParam0);
		iVar2 = (func_221(iParam0) - func_221(iParam1));
		iVar3 = (func_223(iParam0) - func_223(iParam1));
		iVar4 = (func_220(iParam0) - func_220(iParam1));
		iVar5 = (func_219(iParam0) - func_219(iParam1));
		iVar6 = (func_218(iParam0) - func_218(iParam1));
		iVar7 = (func_217(iParam0) - func_217(iParam1));
	}
	else
	{
		iVar0 = func_223(iParam0);
		iVar1 = func_221(iParam1);
		iVar2 = (func_221(iParam1) - func_221(iParam0));
		iVar3 = (func_223(iParam1) - func_223(iParam0));
		iVar4 = (func_220(iParam1) - func_220(iParam0));
		iVar5 = (func_219(iParam1) - func_219(iParam0));
		iVar6 = (func_218(iParam1) - func_218(iParam0));
		iVar7 = (func_217(iParam1) - func_217(iParam0));
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
		iVar4 = (iVar4 + func_216(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_215(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_215(float fParam0, float fParam1, float fParam2)//Position - 0xBBE1
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

int func_216(int iParam0, int iParam1)//Position - 0xBC23
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

int func_217(int iParam0)//Position - 0xBCC5
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_218(int iParam0)//Position - 0xBCD8
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_219(int iParam0)//Position - 0xBCEB
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_220(int iParam0)//Position - 0xBCFE
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_221(int iParam0)//Position - 0xBD10
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_222(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_222(bool bParam0, int iParam1, int iParam2)//Position - 0xBD35
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_223(int iParam0)//Position - 0xBD4C
{
	return iParam0 & 15;
}

int func_224(int iParam0, int iParam1)//Position - 0xBD59
{
	int iVar0;
	int iVar1;
	
	if (!func_232(iParam1) || !func_232(iParam0))
	{
		return 1;
	}
	iVar0 = func_221(iParam0);
	iVar1 = func_221(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_223(iParam0);
	iVar1 = func_223(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_220(iParam0);
	iVar1 = func_220(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_219(iParam0);
	iVar1 = func_219(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_218(iParam0);
	iVar1 = func_218(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_217(iParam0);
	iVar1 = func_217(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_225()//Position - 0xBE65
{
	var uVar0;
	
	func_231(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_230(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_229(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_228(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_227(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_226(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_226(var uParam0, int iParam1)//Position - 0xBEAB
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

void func_227(var uParam0, int iParam1)//Position - 0xBF31
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_228(var uParam0, int iParam1)//Position - 0xBF64
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_223(*uParam0);
	iVar1 = func_221(*uParam0);
	if (iParam1 < 1 || iParam1 > func_216(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_229(var uParam0, int iParam1)//Position - 0xBFB5
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_230(var uParam0, int iParam1)//Position - 0xBFEF
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_231(var uParam0, int iParam1)//Position - 0xC02B
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_232(int iParam0)//Position - 0xC067
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
	iVar0 = func_217(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_218(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_219(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_221(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_223(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_220(iParam0);
	if (iVar5 < 1 || iVar5 > func_216(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_233(int iParam0, int iParam1)//Position - 0xC143
{
	if (MISC::IS_BIT_SET(Global_106565.f_24989.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_234(int iParam0)//Position - 0xC166
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_160();
				if (!func_35(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_242()) || Global_105612) || Global_25767) || func_241()) || func_74(8, -1)) || func_240()) || func_239()) || func_238()) || func_237()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_242()) || Global_25767) || func_241()) || func_74(8, -1)) || func_238()) || func_240()) || func_239()) || func_237()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_242()) || Global_105612) || Global_25767) || func_241()) || func_74(8, -1)) || func_238()) || func_240()) || func_239()) || func_237()) || Global_106565.f_7682.f_919[iVar0] == 5) || Global_36972 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_242()) || Global_105612) || Global_25767) || func_241()) || func_74(8, -1)) || func_240()) || func_239()) || func_237()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_242() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_74(8, -1)) || func_237()) || func_236()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_74(8, -1) || func_240()) || func_239()) || func_236()) || func_235())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_242()) || Global_25767) || func_241()) || func_74(8, -1)) || func_239()) || func_238()) || func_237()) || Global_106565.f_7682.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_242()) || func_239()) || Global_105612) || Global_25767) || func_241()) || Global_37584) || func_74(8, -1)) || func_238()) || func_236()) || func_237()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_242()) || Global_105612) || Global_25767) || func_241()) || func_74(8, -1)) || func_238()) || func_236()) || func_240()) || func_239()) || func_237())
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

var func_235()//Position - 0xC883
{
	return Global_93721.f_1;
}

int func_236()//Position - 0xC891
{
	if (Global_90634 != -1)
	{
		return MISC::IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 13);
	}
	return 0;
}

int func_237()//Position - 0xC8B7
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_238()//Position - 0xC8D1
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

bool func_239()//Position - 0xC8FB
{
	return Global_93734.f_340 > 0;
}

bool func_240()//Position - 0xC90C
{
	return Global_93734.f_339 > 0;
}

var func_241()//Position - 0xC91D
{
	return Global_1312867;
}

int func_242()//Position - 0xC929
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

int func_243()//Position - 0xC945
{
	func_72();
	if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_244(int iParam0)//Position - 0xC96D
{
	return func_224(func_225(), iParam0);
}

int func_245(int iParam0, int iParam1, int iParam2)//Position - 0xC97F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_160();
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

int func_246(int iParam0)//Position - 0xCA63
{
	if (!func_35(iParam0))
	{
		return 7;
	}
	return Global_106565.f_7682.f_919[iParam0];
}

bool func_247(int iParam0)//Position - 0xCA87
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_249())
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

int func_248()//Position - 0xCAE5
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

int func_249()//Position - 0xCB29
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

void func_250()//Position - 0xCBE4
{
	SYSTEM::WAIT(0);
	func_263(0);
	if (Global_26004)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
	}
	func_262();
	func_109(&uLocal_341, 0, 0);
	if (func_203())
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_162, 0);
	}
	else
	{
		func_261(&Global_25824);
	}
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_140) && !PED::IS_PED_INJURED(iLocal_140)) && PED::IS_PED_GROUP_MEMBER(iLocal_140, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
	{
		PED::REMOVE_PED_FROM_GROUP(iLocal_140);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_155, 1);
	}
	func_204(0);
	func_251(-1);
	BRAIN::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", true);
	BRAIN::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", true);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_251(int iParam0)//Position - 0xCC96
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_41();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_203())
	{
		func_254(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_106556 = MISC::GET_GAME_TIMER();
		func_253(30000);
		StringCopy(&cVar0, func_252(Global_106554, 1), 64);
		if (func_40(Global_106554) > 0)
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
	func_261(&Global_25824);
	Global_106555 = 0;
	func_208(-1);
}

char* func_252(int iParam0, bool bParam1)//Position - 0xCD4B
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

void func_253(int iParam0)//Position - 0xCF94
{
	Global_36976 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_254(int iParam0)//Position - 0xCFA6
{
	func_255(iParam0, 0, func_260(iParam0));
}

void func_255(int iParam0, int iParam1, int iParam2)//Position - 0xCFBB
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_225();
	func_258(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_257(iParam0, &uVar0);
	Var1 = { func_256(&uVar0) };
}

struct<16> func_256(var uParam0)//Position - 0xCFEA
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_219(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_218(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_217(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_220(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_223(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_221(*uParam0), 64);
	return Var0;
}

void func_257(int iParam0, var uParam1)//Position - 0xD0BA
{
	Global_106565.f_24989.f_43[iParam0] = *uParam1;
}

void func_258(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xD0D2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_221(*uParam0);
	iVar1 = func_223(*uParam0);
	iVar2 = func_220(*uParam0);
	iVar3 = func_219(*uParam0);
	iVar4 = func_218(*uParam0);
	iVar5 = func_217(*uParam0);
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
	iVar6 = func_216(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_216(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_259(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_259(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xD254
{
	func_231(uParam0, iParam1);
	func_230(uParam0, iParam2);
	func_229(uParam0, iParam3);
	func_227(uParam0, iParam5);
	func_228(uParam0, iParam4);
	func_226(uParam0, iParam6);
}

int func_260(int iParam0)//Position - 0xD28C
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

void func_261(var uParam0)//Position - 0xD42F
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

void func_262()//Position - 0xD46C
{
	Global_26000 = 0;
	Global_26001 = 0;
	Global_26003 = 0;
	Global_26004 = 0;
	Global_26005 = 0;
}

void func_263(bool bParam0)//Position - 0xD488
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		func_190(iVar0, bParam0);
		iVar0++;
	}
}

