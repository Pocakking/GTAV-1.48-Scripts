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
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
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
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	vector3 vLocal_57 = { 0f, 0f, 0f };
	bool bLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65[2] = { 0, 0 };
	vector3 vLocal_68 = { 0f, 0f, 0f };
	float fLocal_71 = 0f;
	vector3 vLocal_72 = { 0f, 0f, 0f };
	float fLocal_75 = 0f;
	vector3 vLocal_76 = { 0f, 0f, 0f };
	float fLocal_79 = 0f;
	int iLocal_80 = 0;
	vector3 vLocal_81 = { 0f, 0f, 0f };
	vector3 vLocal_84 = { 0f, 0f, 0f };
	vector3 vLocal_87 = { 0f, 0f, 0f };
	int iLocal_90 = 0;
	int iLocal_91[2] = { 0, 0 };
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	bool bLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	char* sLocal_113 = NULL;
	char* sLocal_114 = NULL;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	bool bLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	struct<6> Local_137 = { 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_143[24] = "";
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	var uLocal_150 = 0;
	int iLocal_151 = 0;
	vector3 vLocal_152 = { 0f, 0f, 0f };
	var uLocal_155[2] = { 0, 0 };
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	vector3 vLocal_160 = { 0f, 0f, 0f };
	int iLocal_163 = 0;
	float fLocal_164 = 0f;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	var uLocal_173 = 16;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
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
	int iLocal_338 = 0;
	vector3 vLocal_339 = { 0f, 0f, 0f };
	vector3 vLocal_342 = { 0f, 0f, 0f };
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
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
	iLocal_19 = 3;
	sLocal_22 = "NULL";
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
	iLocal_51 = HUD::_0x4A9923385BDB9DAD();
	iLocal_52 = HUD::_GET_BLIP_INFO_ID_ITERATOR();
	vLocal_87 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_124 = -1;
	StringCopy(&Local_137, "", 24);
	iLocal_165 = -1;
	vLocal_339 = { -1017.345f, -1354.196f, 4.4568f };
	vLocal_342 = { 2003.456f, 3071.102f, 46.0499f };
	vLocal_57 = { ScriptParam_0.f_1[0 /*3*/] };
	func_273();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_235();
	}
	if (func_193(vLocal_57, 27, iLocal_345, 0, 0))
	{
		func_190(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	iLocal_159 = MISC::GET_GAME_TIMER();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (TASK::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_62)
		{
			if (!func_189())
			{
				if (func_188())
				{
					func_235();
				}
			}
			RECORDING::_0x208784099002BC30("RE_DD", 0);
			switch (iLocal_53)
			{
				case 0:
					if (iLocal_56)
					{
						iLocal_172 = 1;
						iLocal_53 = 1;
					}
					else
					{
						if (func_176())
						{
							func_235();
						}
						if (!bLocal_60)
						{
							func_175();
						}
						if (bLocal_60)
						{
							func_174();
						}
					}
					break;
				
				case 1:
					func_167();
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						func_166();
						func_163();
						if (iLocal_54 == 1 && !ENTITY::DOES_ENTITY_EXIST(iLocal_91[1]))
						{
							func_70();
							if (func_68() || ENTITY::IS_ENTITY_DEAD(iLocal_94, 0))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[0]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_91[0], 0))
									{
										if (PED::IS_PED_IN_GROUP(iLocal_91[0]))
										{
											PED::REMOVE_PED_FROM_GROUP(iLocal_91[0]);
										}
										BRAIN::CLEAR_PED_TASKS(iLocal_91[0]);
										BRAIN::TASK_SMART_FLEE_PED(iLocal_91[0], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
										func_64(iLocal_91[0], 120000, 0);
										PED::SET_PED_KEEP_TASK(iLocal_91[0], true);
										func_62();
										SYSTEM::WAIT(0);
										func_61(&uLocal_173, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
								}
								func_60();
							}
						}
						if (iLocal_54 == 2 || (iLocal_54 == 1 && ENTITY::DOES_ENTITY_EXIST(iLocal_91[1])))
						{
							func_70();
							if (iLocal_55 != 9)
							{
								if (func_68() || ENTITY::IS_ENTITY_DEAD(iLocal_94, 0))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[0]))
									{
										if (!PED::IS_PED_INJURED(iLocal_91[0]))
										{
											if (PED::IS_PED_IN_GROUP(iLocal_91[0]))
											{
												PED::REMOVE_PED_FROM_GROUP(iLocal_91[0]);
											}
											BRAIN::CLEAR_PED_TASKS(iLocal_91[0]);
											BRAIN::TASK_SMART_FLEE_PED(iLocal_91[0], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
											func_64(iLocal_91[0], 120000, 0);
											PED::SET_PED_KEEP_TASK(iLocal_91[0], true);
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[1]))
									{
										if (!PED::IS_PED_INJURED(iLocal_91[1]))
										{
											if (PED::IS_PED_IN_GROUP(iLocal_91[1]))
											{
												PED::REMOVE_PED_FROM_GROUP(iLocal_91[1]);
											}
											BRAIN::CLEAR_PED_TASKS(iLocal_91[1]);
											BRAIN::TASK_SMART_FLEE_PED(iLocal_91[1], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
											func_64(iLocal_91[1], 120000, 0);
											PED::SET_PED_KEEP_TASK(iLocal_91[1], true);
										}
									}
									if (iLocal_54 == 1)
									{
										func_62();
										SYSTEM::WAIT(0);
										func_61(&uLocal_173, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
									if (iLocal_54 == 2)
									{
										func_62();
										SYSTEM::WAIT(0);
										func_61(&uLocal_173, "REDR2AU", "REDR2_AT", 4, 0, 0, 0);
									}
									func_60();
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_91[0]))
							{
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_91[0], 1f);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[1]))
						{
							if (!PED::IS_PED_INJURED(iLocal_91[1]))
							{
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_91[1], 1f);
							}
						}
					}
					if ((func_59() && !func_58()) && iLocal_55 != 9)
					{
						if (!PED::IS_PED_INJURED(iLocal_91[0]))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_91[0], vLocal_87, 5f, 5f, 5f, false, true, 0))
							{
								if (iLocal_54 == 2)
								{
									if (!PED::IS_PED_INJURED(iLocal_91[1]))
									{
										if (!PED::IS_PED_IN_GROUP(iLocal_91[0]) && !PED::IS_PED_IN_GROUP(iLocal_91[1]))
										{
											PED::SET_PED_AS_GROUP_MEMBER(iLocal_91[0], func_57());
											PED::SET_PED_AS_GROUP_MEMBER(iLocal_91[1], func_57());
										}
									}
								}
								func_56(0);
								SYSTEM::WAIT(0);
								func_62();
								iLocal_55 = 9;
							}
						}
					}
					if (func_55())
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[0]))
						{
							PED::DELETE_PED(&(iLocal_91[0]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[1]))
						{
							PED::DELETE_PED(&(iLocal_91[1]));
						}
						func_30();
					}
					if ((func_29() || func_28()) || func_3())
					{
						func_60();
					}
					break;
			}
		}
		else
		{
			func_235();
		}
		func_1();
	}
}

void func_1()//Position - 0x4DA
{
	if (((iLocal_54 == 1 && iLocal_55 == 7) && iLocal_64 == 5) && iLocal_110)
	{
		iLocal_159 = MISC::GET_GAME_TIMER();
		if (func_2())
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				vLocal_160 = { ENTITY::GET_ENTITY_SPEED_VECTOR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) };
			}
		}
	}
}

int func_2()//Position - 0x532
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if (iLocal_54 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_91[0]))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_91[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							return 1;
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_91[1]))
				{
					if (!PED::IS_PED_INJURED(iLocal_91[0]) && !PED::IS_PED_INJURED(iLocal_91[1]))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_91[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && PED::IS_PED_IN_VEHICLE(iLocal_91[1], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_3()//Position - 0x5FF
{
	if (iLocal_54 == 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_94, 0))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_94, 200f, 200f, 200f, 0, 1, 0))
			{
				return 1;
			}
			if (((!func_27("REDR2_DC") && !func_27("REDR2_AKA")) && !func_27("REDR2_OFFR")) && !func_27("REDR2_CULT"))
			{
				func_5(1);
			}
			if (((((((((((((((((!func_27("REDR2_DC") && !func_27("REDR2_AKA")) && !func_27("REDR2_AKB")) && !func_27("REDR2_TRY")) && !func_27("REDR2_JIC")) && !func_27("REDR2_CH")) && !func_27("REDR2_WH2")) && !func_27("REDR2_BCK")) && !func_27("REDR2_JIA")) && !func_27("REDR2_JIB")) && !func_27("REDR2_JIC")) && !func_27("REDR2_WHA")) && !func_27("REDR2_WHB")) && !func_27("REDR2_WHC")) && !func_27("REDR2_PSM")) && !func_27("REDR2_PSF")) && !func_27("REDR2_PST")) && !func_27("REDR2_TK"))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_94) && ENTITY::GET_ENTITY_HEALTH(iLocal_94) < iLocal_80)
				{
					iLocal_80 = ENTITY::GET_ENTITY_HEALTH(iLocal_94);
					func_5(0);
					func_62();
					SYSTEM::WAIT(0);
					func_61(&uLocal_173, "REDR2AU", "REDR2_DC", 4, 0, 0, 0);
				}
			}
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0) || VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_94))
			{
				func_62();
				SYSTEM::WAIT(0);
				if (!func_4())
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_LC", 4, 0, 0, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_91[0]))
						{
							BRAIN::TASK_WANDER_STANDARD(iLocal_91[0], 1193033728, 0);
							PED::SET_PED_KEEP_TASK(iLocal_91[0], true);
						}
						if (!PED::IS_PED_INJURED(iLocal_91[1]))
						{
							BRAIN::TASK_GO_TO_ENTITY(iLocal_91[1], iLocal_91[0], -1, 0f, 1f, 1073741824, 0);
							PED::SET_PED_KEEP_TASK(iLocal_91[1], true);
						}
						return 1;
					}
				}
			}
			if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_94, 0, 2) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_94, PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_91[0]))
				{
					BRAIN::CLEAR_PED_TASKS(iLocal_91[0]);
					BRAIN::TASK_SMART_FLEE_PED(iLocal_91[0], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_91[1]))
				{
					BRAIN::CLEAR_PED_TASKS(iLocal_91[1]);
					BRAIN::TASK_SMART_FLEE_PED(iLocal_91[1], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
				}
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

int func_4()//Position - 0x8A9
{
	if (Global_15866 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_5(bool bParam0)//Position - 0x8CB
{
	if (bParam0)
	{
		if (iLocal_136)
		{
			if (func_10(&uLocal_173, "REDR2AU", &cLocal_143, &Local_137, 8, 0, 0))
			{
				iLocal_136 = 0;
			}
		}
	}
	else if ((!iLocal_136 && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !func_27("REDR1_SWV"))
	{
		cLocal_143 = { func_9() };
		Local_137 = { func_8() };
		func_6();
		iLocal_136 = 1;
	}
}

void func_6()//Position - 0x92A
{
	Global_14732 = 0;
	func_7();
}

void func_7()//Position - 0x93A
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

struct<6> func_8()//Position - 0x95E
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

struct<6> func_9()//Position - 0x9A4
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15866 == 4)
	{
		return Global_15485;
	}
	return Var0;
}

bool func_10(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9C8
{
	func_26(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_11(sParam2, iParam4, 0);
}

int func_11(char* sParam0, int iParam1, bool bParam2)//Position - 0xA1C
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
					func_25();
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
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_23();
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
				func_16();
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
				if (func_15())
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
			if (func_14())
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
			func_13();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_12();
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
		func_25();
	}
	return 0;
}

void func_12()//Position - 0xCE8
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

void func_13()//Position - 0xD18
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

int func_14()//Position - 0xDAD
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_15()//Position - 0xDD4
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

void func_16()//Position - 0xE6D
{
	if (func_22(14))
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
		Global_14553 = func_17();
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

int func_17()//Position - 0xF0F
{
	func_18();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_18()//Position - 0xF28
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_21(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_20(PLAYER::PLAYER_PED_ID());
			if (func_19(iVar0) && (!func_22(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_19(Global_106565.f_2357.f_539.f_4321))
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

bool func_19(int iParam0)//Position - 0x1025
{
	return iParam0 < 3;
}

int func_20(int iParam0)//Position - 0x1031
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_21(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_21(int iParam0)//Position - 0x106E
{
	if (func_19(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_22(int iParam0)//Position - 0x1098
{
	return Global_36425 == iParam0;
}

void func_23()//Position - 0x10A6
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

bool func_24(int iParam0, int iParam1)//Position - 0x10FC
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

void func_25()//Position - 0x1137
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

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x118E
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

int func_27(char* sParam0)//Position - 0x11E4
{
	var uVar0;
	
	if (func_4())
	{
		MemCopy(&uVar0, {func_9()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_28()//Position - 0x120C
{
	if (iLocal_54 == 1)
	{
		if (PED::IS_PED_INJURED(iLocal_91[0]))
		{
			return 1;
		}
	}
	if (iLocal_54 == 2)
	{
		if (PED::IS_PED_INJURED(iLocal_91[0]) && PED::IS_PED_INJURED(iLocal_91[1]))
		{
			return 1;
		}
	}
	return 0;
}

int func_29()//Position - 0x124F
{
	if (iLocal_54 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_91[0]))
		{
			return 1;
		}
	}
	if (iLocal_54 == 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_91[0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_91[1]))
		{
			return 1;
		}
	}
	return 0;
}

void func_30()//Position - 0x1295
{
	while (!func_54())
	{
		SYSTEM::WAIT(0);
	}
	func_34(27, iLocal_345);
	func_31();
	func_235();
}

void func_31()//Position - 0x12BE
{
	func_32();
}

int func_32()//Position - 0x12CB
{
	if (func_33(0))
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

bool func_33(bool bParam0)//Position - 0x1316
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71838, 0);
}

void func_34(int iParam0, int iParam1)//Position - 0x1341
{
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_51(iParam0))
	{
		func_50(iParam0, iParam1);
		if (!func_49(51))
		{
			func_45("RE_REWARD", 1, 0, 4000, 10000, func_48(), 0, 138, 0);
			func_44(51);
		}
		if (func_43(iParam0))
		{
			Global_106565.f_24989.f_2 = 3;
		}
		if (func_42(iParam0, iParam1) != 322)
		{
			func_36(func_42(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_106553 = iParam1;
		if (Global_106551 == 0)
		{
			if (((Global_106554 == 1 || Global_106554 == 5) || Global_106554 == 11) || Global_106554 == 25)
			{
				func_35(2);
			}
			else if ((Global_106554 == 26 || Global_106554 == 8) || Global_106554 == 17)
			{
				func_35(7);
			}
			else
			{
				func_35(1);
			}
		}
	}
}

void func_35(int iParam0)//Position - 0x1445
{
	Global_106551 = iParam0;
}

void func_36(int iParam0, var uParam1, var uParam2)//Position - 0x1453
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
		func_40((891 + iParam0), 1, -1, 1);
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
		func_37();
	}
}

void func_37()//Position - 0x153B
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
		func_39(13, SYSTEM::FLOOR(Global_106565.f_10188.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_71590)
		{
			if (func_38() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_32();
				}
			}
		}
	}
}

int func_38()//Position - 0x19FC
{
	return Global_25765;
}

int func_39(int iParam0, int iParam1)//Position - 0x1A07
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

int func_40(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1A58
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
		iParam2 = func_41();
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

int func_41()//Position - 0x200E
{
	return Global_1312745;
}

int func_42(int iParam0, int iParam1)//Position - 0x201A
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

int func_43(int iParam0)//Position - 0x238E
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

void func_44(int iParam0)//Position - 0x23BD
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

void func_45(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x23FF
{
	func_46(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_46(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x241F
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
		func_47();
	}
}

void func_47()//Position - 0x25F1
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

int func_48()//Position - 0x2711
{
	func_18();
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

int func_49(int iParam0)//Position - 0x2757
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

void func_50(int iParam0, int iParam1)//Position - 0x279A
{
	MISC::SET_BIT(&(Global_106565.f_24989.f_8[iParam0]), iParam1);
}

int func_51(int iParam0)//Position - 0x27B5
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

int func_52()//Position - 0x2866
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_53(Var0);
	return uVar16;
}

int func_53(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x2883
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

int func_54()//Position - 0x2A5D
{
	return 1;
}

int func_55()//Position - 0x2A66
{
	if (Global_26001)
	{
		func_35(4);
		return 1;
	}
	return 0;
}

void func_56(int iParam0)//Position - 0x2A7E
{
	Global_16877 = iParam0;
}

int func_57()//Position - 0x2A8B
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_58()//Position - 0x2A9B
{
	if (Global_106565.f_24989.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_59()//Position - 0x2AB7
{
	return Global_26000;
}

void func_60()//Position - 0x2AC2
{
	func_235();
}

bool func_61(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2ACE
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_11(sParam2, iParam3, 0);
}

void func_62()//Position - 0x2B1C
{
	Global_14732 = 0;
	func_63();
}

void func_63()//Position - 0x2B2C
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16877 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15866 = 6;
	}
}

int func_64(int iParam0, int iParam1, bool bParam2)//Position - 0x2B4D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_67(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_66(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_65();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_37345[iVar2 /*5*/] = 0;
	Global_37345[iVar2 /*5*/].f_1 = iParam0;
	Global_37345[iVar2 /*5*/].f_2 = iParam1;
	Global_37345[iVar2 /*5*/].f_3 = iParam1;
	Global_37345[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		Global_37582 = 1;
	}
	Global_37343++;
	return 1;
}

int func_65()//Position - 0x2C09
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_37345[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_66(int iParam0)//Position - 0x2C38
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_37345[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_67(int iParam0)//Position - 0x2C69
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

int func_68()//Position - 0x2CAA
{
	VEHICLE::_0xD4B8E3D1917BC86B(true);
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	if ((MISC::IS_BULLET_IN_AREA(vLocal_152, 40f, 1) || MISC::IS_BULLET_IN_AREA(func_69(PLAYER::PLAYER_ID()), 10f, 0)) || MISC::IS_PROJECTILE_IN_AREA(vLocal_152 - Vector(40f, 40f, 40f), vLocal_152 + Vector(40f, 40f, 40f), 0))
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(iLocal_91[0]))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_91[0], PLAYER::PLAYER_PED_ID(), 1) || ENTITY::IS_ENTITY_IN_WATER(iLocal_91[0]))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_91[0], PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
			{
				return 1;
			}
		}
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_91[0]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_91[0]))
			{
				if (PED::_CAN_PED_SEE_PED(iLocal_91[0], PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_91[1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_91[1], PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_91[1], PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
				{
					return 1;
				}
			}
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_91[1]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_91[1]))
				{
					if (PED::_CAN_PED_SEE_PED(iLocal_91[1], PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_69(int iParam0)//Position - 0x2E5F
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_70()//Position - 0x2E72
{
	int iVar0;
	
	switch (iLocal_55)
	{
		case 0:
			if (iLocal_54 == 1)
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1017.461f, -1259.868f, 3.9183f, -1061.891f, -1424.029f, 24.4253f, 171.75f, 0, true, 0) && CAM::IS_SPHERE_VISIBLE(vLocal_152, 1f)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_152, 15f, 15f, 15f, false, true, 0))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_151))
					{
						HUD::REMOVE_BLIP(&iLocal_151);
					}
					if (!PED::IS_PED_INJURED(iLocal_91[0]))
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_155[0]))
						{
							uLocal_155[0] = func_162(iLocal_91[0], 0, 145);
							HUD::_0x75A16C3DA34F1245(uLocal_155[0], false);
						}
					}
					if (!func_189())
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
						{
							iLocal_95 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						}
						func_161(&uLocal_173, "REDR1AU", "REDR1_DCO", 4, 0, 0, 0, 0);
						func_152(1);
						func_151(1);
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1011.144f, -1378.79f, 4.1997f, -1039.685f, -1337.61f, 9.7035f, 37.875f, 0, true, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_91[0]) && !PED::IS_PED_INJURED(iLocal_91[1]))
						{
							func_150();
							BRAIN::TASK_PLAY_ANIM(iLocal_91[0], "random@drunk_driver_1", "drunk_argument_dd1", 2f, -2f, -1, 0, 0, 0, 0, 0);
							BRAIN::TASK_PLAY_ANIM(iLocal_91[1], "random@drunk_driver_1", "drunk_argument_dd2", 2f, -2f, -1, 0, 0, 0, 0, 0);
							iLocal_123 = (MISC::GET_GAME_TIMER() + 60000);
							if (HUD::DOES_BLIP_EXIST(uLocal_155[0]))
							{
								HUD::_0x75A16C3DA34F1245(uLocal_155[0], true);
							}
							iLocal_55 = 1;
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1820.238f, 3671.948f, 30.8437f, 1957.818f, 3751.887f, 55.4436f, 159.9375f, 0, true, 0) && CAM::IS_SPHERE_VISIBLE(vLocal_152, 1f)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_152, 15f, 15f, 15f, false, true, 0))
				{
					func_149();
					if (!func_189())
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
						{
							iLocal_95 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						}
						func_152(1);
						func_151(1);
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1877.761f, 3727.7f, 31.882f, 1896.962f, 3693.83f, 34.9925f, 19.1875f, 0, true, 0))
					{
						func_61(&uLocal_173, "REDR2AU", "REDR2_DCA", 4, 0, 0, 0);
						if (HUD::DOES_BLIP_EXIST(uLocal_155[0]))
						{
							HUD::_0x75A16C3DA34F1245(uLocal_155[0], true);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_155[1]))
						{
							HUD::_0x75A16C3DA34F1245(uLocal_155[1], true);
						}
						iLocal_123 = (MISC::GET_GAME_TIMER() + 120000);
						iLocal_55 = 3;
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_123 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(iLocal_91[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_94, 0))
				{
					BRAIN::OPEN_SEQUENCE_TASK(&iLocal_99);
					BRAIN::TASK_LOOK_AT_ENTITY(0, iLocal_91[1], 7000, 2060, 4);
					BRAIN::TASK_PAUSE(0, 2500);
					BRAIN::TASK_ENTER_VEHICLE(0, iLocal_94, -1, -1, 1f, 1, 0);
					BRAIN::CLOSE_SEQUENCE_TASK(iLocal_99);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_91[0], iLocal_99);
					BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_99);
				}
				if (!PED::IS_PED_INJURED(iLocal_91[1]))
				{
					BRAIN::OPEN_SEQUENCE_TASK(&iLocal_99);
					BRAIN::TASK_LOOK_AT_ENTITY(0, iLocal_91[0], 7000, 2060, 4);
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1052.215f, -1354.937f, 4.3754f, 1f, -1, 1f, 0, 1193033728);
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1061.464f, -1384.922f, 4.2462f, 1f, -1, 1f, 1, 1193033728);
					BRAIN::TASK_WANDER_STANDARD(0, 1193033728, 0);
					BRAIN::CLOSE_SEQUENCE_TASK(iLocal_99);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_91[1], iLocal_99);
					BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_99);
				}
				SYSTEM::SETTIMERA(0);
				iLocal_55 = 3;
			}
			if (!PED::IS_PED_INJURED(iLocal_91[0]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91[0], 8f, 8f, 4f, 0, 1, 0))
				{
					if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_91[0], 80f))
					{
						bLocal_121 = true;
						SYSTEM::SETTIMERA(0);
						iLocal_55 = 4;
					}
				}
				else if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91[0], 30f, 30f, 30f, 0, 1, 0))
				{
					AUDIO::_0xB542DE8C3D1CB210(1);
				}
				else
				{
					AUDIO::_0xB542DE8C3D1CB210(0);
				}
			}
			break;
		
		case 3:
			if (iLocal_54 == 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_91[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_91[1]))
					{
						if (func_61(&uLocal_173, "REDR1AU", "REDR1_DCL", 4, 0, 0, 0))
						{
							SYSTEM::SETTIMERA(0);
							iLocal_55 = 4;
						}
					}
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91[0], 8f, 8f, 4f, 0, 1, 0))
					{
						if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_91[0], 80f))
						{
							bLocal_121 = true;
							SYSTEM::SETTIMERA(0);
							iLocal_55 = 4;
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if (!PED::IS_PED_INJURED(iLocal_91[0]))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91[0], 30f, 30f, 30f, 0, 1, 0))
					{
						func_148();
						if (func_147())
						{
							func_56(0);
						}
					}
					else if (func_4())
					{
						func_56(1);
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_68, 15f, 15f, 15f, false, true, 0) && !PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(iLocal_91[0]))
					{
						if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_91[0], 80f))
						{
							if (PED::_CAN_PED_SEE_PED(iLocal_91[0], PLAYER::PLAYER_PED_ID()))
							{
								if (!PED::IS_PED_INJURED(iLocal_91[0]))
								{
									BRAIN::OPEN_SEQUENCE_TASK(&iLocal_99);
									BRAIN::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
									BRAIN::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, 0, 0, 0, 0);
									BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									BRAIN::CLOSE_SEQUENCE_TASK(iLocal_99);
									BRAIN::TASK_PERFORM_SEQUENCE(iLocal_91[0], iLocal_99);
									BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_99);
								}
								if (!PED::IS_PED_INJURED(iLocal_91[1]))
								{
									BRAIN::TASK_LOOK_AT_ENTITY(iLocal_91[1], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
								}
								SYSTEM::SETTIMERA(0);
								iLocal_55 = 4;
							}
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1889.121f, 3715.057f, 31.844f, 1895.608f, 3703.586f, 34.8272f, 12.4375f, 0, true, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_91[0]))
					{
						BRAIN::OPEN_SEQUENCE_TASK(&iLocal_99);
						BRAIN::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
						BRAIN::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, 0, 0, 0, 0);
						BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						BRAIN::CLOSE_SEQUENCE_TASK(iLocal_99);
						BRAIN::TASK_PERFORM_SEQUENCE(iLocal_91[0], iLocal_99);
						BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_99);
						if (!PED::IS_PED_INJURED(iLocal_91[1]))
						{
							BRAIN::TASK_LOOK_AT_ENTITY(iLocal_91[1], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
						}
						SYSTEM::SETTIMERA(0);
						iLocal_55 = 4;
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_94, 1.5f, 1.5f, 5f, 0, 1, 0) && PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (func_147())
						{
							func_56(0);
						}
						func_62();
						SYSTEM::WAIT(0);
						if (func_61(&uLocal_173, "REDR2AU", "REDR2_TRY", 4, 0, 0, 0))
						{
							iLocal_170 = 2;
							iLocal_63 = 0;
							while (iLocal_63 <= 1)
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_155[iLocal_63]))
								{
									HUD::REMOVE_BLIP(&(uLocal_155[iLocal_63]));
								}
								iLocal_63++;
							}
							if (!HUD::DOES_BLIP_EXIST(iLocal_158))
							{
								iLocal_158 = func_145(iLocal_94, 0, 0);
							}
							if (!PED::IS_PED_INJURED(iLocal_91[0]))
							{
								BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_91[0]);
							}
							iLocal_55 = 4;
						}
					}
				}
				if (iLocal_123 < MISC::GET_GAME_TIMER())
				{
					if (func_147())
					{
						func_56(0);
					}
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_DRV", 4, 0, 0, 0))
					{
						if ((!PED::IS_PED_INJURED(iLocal_91[0]) && !PED::IS_PED_INJURED(iLocal_91[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_94))
						{
							BRAIN::OPEN_SEQUENCE_TASK(&iLocal_99);
							BRAIN::TASK_LOOK_AT_ENTITY(0, iLocal_91[1], -1, 2060, 4);
							BRAIN::TASK_ENTER_VEHICLE(0, iLocal_94, -1, -1, 1f, 1, 0);
							BRAIN::CLOSE_SEQUENCE_TASK(iLocal_99);
							BRAIN::TASK_PERFORM_SEQUENCE(iLocal_91[0], iLocal_99);
							BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_99);
							BRAIN::OPEN_SEQUENCE_TASK(&iLocal_99);
							BRAIN::TASK_LOOK_AT_ENTITY(0, iLocal_91[0], -1, 2060, 4);
							BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_91[0], 0);
							BRAIN::TASK_ENTER_VEHICLE(0, iLocal_94, -1, 0, 1f, 1, 0);
							BRAIN::CLOSE_SEQUENCE_TASK(iLocal_99);
							BRAIN::TASK_PERFORM_SEQUENCE(iLocal_91[1], iLocal_99);
							BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_99);
							iLocal_63 = 0;
							while (iLocal_63 <= 1)
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_155[iLocal_63]))
								{
									HUD::REMOVE_BLIP(&(uLocal_155[iLocal_63]));
								}
								iLocal_63++;
							}
							iLocal_55 = 2;
						}
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_54 == 1)
			{
				switch (iLocal_170)
				{
					case 0:
						if (!PED::IS_PED_INJURED(iLocal_91[0]) && !PED::IS_PED_INJURED(iLocal_91[1]))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91[0], 8f, 8f, 4f, 0, 1, 0) || bLocal_121)
							{
								AUDIO::_0xB542DE8C3D1CB210(0);
								BRAIN::TASK_LOOK_AT_ENTITY(iLocal_91[0], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
								BRAIN::TASK_LOOK_AT_ENTITY(iLocal_91[1], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
								BRAIN::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91[0], -1, 2060, 4);
								if ((MISC::GET_GAME_TIMER() + 50000) > iLocal_123 || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
								{
									func_6();
									if (bLocal_121)
									{
										if (!func_4())
										{
											if (func_17() == 0)
											{
												if (func_61(&uLocal_173, "REDR1AU", "REDR1_HYM", 4, 0, 0, 0))
												{
													SYSTEM::SETTIMERA(0);
													iLocal_170++;
												}
											}
											else if (func_17() == 1)
											{
												if (func_61(&uLocal_173, "REDR1AU", "REDR1_HYF", 4, 0, 0, 0))
												{
													SYSTEM::SETTIMERA(0);
													iLocal_170++;
												}
											}
											else if (func_17() == 2)
											{
												if (func_61(&uLocal_173, "REDR1AU", "REDR1_HYT", 4, 0, 0, 0))
												{
													SYSTEM::SETTIMERA(0);
													iLocal_170++;
												}
											}
										}
									}
									else
									{
										iLocal_170++;
									}
								}
							}
						}
						break;
					
					case 1:
						if (!func_4())
						{
							if (func_144())
							{
								if (!PED::IS_PED_INJURED(iLocal_91[0]))
								{
									BRAIN::OPEN_SEQUENCE_TASK(&iLocal_99);
									BRAIN::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_breakout_dd1", 2f, -2f, -1, 0, 0, 0, 0, 0);
									BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									BRAIN::CLOSE_SEQUENCE_TASK(iLocal_99);
									BRAIN::TASK_PERFORM_SEQUENCE(iLocal_91[0], iLocal_99);
									BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_99);
									if (!PED::IS_PED_INJURED(iLocal_91[1]))
									{
										BRAIN::OPEN_SEQUENCE_TASK(&iLocal_99);
										BRAIN::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_breakout_dd2", 2f, -2f, -1, 0, 0, 0, 0, 0);
										BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_91[0], 0);
										BRAIN::TASK_PAUSE(0, 3000);
										BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1052.215f, -1354.937f, 4.3754f, 1f, -1, 1f, 0, 1193033728);
										BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1061.464f, -1384.922f, 4.2462f, 1f, -1, 1f, 1, 1193033728);
										BRAIN::TASK_WANDER_STANDARD(0, 1193033728, 0);
										BRAIN::CLOSE_SEQUENCE_TASK(iLocal_99);
										BRAIN::TASK_PERFORM_SEQUENCE(iLocal_91[1], iLocal_99);
										BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_99);
									}
									func_143();
								}
							}
							else
							{
								if (!PED::IS_PED_INJURED(iLocal_91[0]))
								{
									if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_91[0], 80f))
									{
										BRAIN::TASK_LOOK_AT_ENTITY(iLocal_91[0], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
										BRAIN::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91[0], 10000, 2060, 4);
										func_6();
										SYSTEM::WAIT(0);
										iLocal_170++;
									}
									else
									{
										func_142(iLocal_91[0], &(uLocal_65[0]));
									}
								}
								if (!func_4())
								{
									iLocal_170++;
								}
							}
						}
						break;
					
					case 2:
						if (func_144())
						{
							iLocal_170 = 6;
						}
						else
						{
							iLocal_170++;
						}
						break;
					
					case 3:
						if (!iLocal_104)
						{
							if (SYSTEM::TIMERA() > 1500)
							{
								if (!PED::IS_PED_INJURED(iLocal_91[0]))
								{
									BRAIN::OPEN_SEQUENCE_TASK(&iLocal_99);
									BRAIN::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
									BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									BRAIN::TASK_PAUSE(0, 500);
									BRAIN::CLOSE_SEQUENCE_TASK(iLocal_99);
									BRAIN::TASK_PERFORM_SEQUENCE(iLocal_91[0], iLocal_99);
									BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_99);
									SYSTEM::SETTIMERA(0);
									iLocal_104 = 1;
								}
							}
						}
						func_142(iLocal_91[0], &(uLocal_65[0]));
						if (!func_4())
						{
							if (func_61(&uLocal_173, "REDR1AU", "REDR1_LFT", 4, 0, 0, 0))
							{
								iLocal_170++;
							}
						}
						break;
					
					case 4:
						if (!func_144())
						{
							if (!func_4())
							{
								if (func_61(&uLocal_173, "REDR1AU", "REDR1_PLS", 4, 0, 0, 0))
								{
									BRAIN::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
									if (HUD::DOES_BLIP_EXIST(uLocal_155[0]))
									{
										HUD::REMOVE_BLIP(&(uLocal_155[0]));
									}
									if (HUD::DOES_BLIP_EXIST(uLocal_155[1]))
									{
										HUD::REMOVE_BLIP(&(uLocal_155[1]));
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0))
									{
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_94, 1);
										if (!PED::IS_PED_INJURED(iLocal_91[0]))
										{
											BRAIN::TASK_ENTER_VEHICLE(iLocal_91[0], iLocal_94, -1, 0, 1f, 1, 0);
										}
									}
									iLocal_170++;
								}
							}
						}
						else
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_155[0]))
							{
								HUD::REMOVE_BLIP(&(uLocal_155[0]));
							}
							if (HUD::DOES_BLIP_EXIST(uLocal_155[1]))
							{
								HUD::REMOVE_BLIP(&(uLocal_155[1]));
							}
							iLocal_170++;
						}
						break;
					
					case 5:
						if (func_144())
						{
							if (!PED::IS_PED_INJURED(iLocal_91[0]))
							{
								if (!PED::IS_PED_IN_GROUP(iLocal_91[0]))
								{
									BRAIN::CLEAR_PED_TASKS(iLocal_91[0]);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_91[0], func_57());
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_91[0], 1);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_91[0], 0);
								}
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_100, 1862763509);
								func_141();
							}
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != iLocal_94)
								{
									if (!func_4())
									{
										if (func_17() == 0)
										{
											if (func_61(&uLocal_173, "REDR1AU", "REDR1_TKM", 4, 0, 0, 0))
											{
												iLocal_55 = 7;
											}
										}
										else if (func_17() == 1)
										{
											if (func_61(&uLocal_173, "REDR1AU", "REDR1_TKF", 4, 0, 0, 0))
											{
												iLocal_55 = 7;
											}
										}
										else if (func_17() == 2)
										{
											if (func_61(&uLocal_173, "REDR1AU", "REDR1_TKT", 4, 0, 0, 0))
											{
												iLocal_55 = 7;
											}
										}
									}
								}
								else
								{
									iLocal_55 = 7;
								}
							}
						}
						break;
					
					case 6:
						func_142(iLocal_91[0], &(uLocal_65[0]));
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (func_144())
							{
								if (!func_4())
								{
									if (func_61(&uLocal_173, "REDR1AU", "REDR1_AKB", 4, 0, 0, 0))
									{
										iLocal_170 = 10;
									}
								}
							}
							else
							{
								iLocal_170 = 4;
							}
						}
						else
						{
							iLocal_170 = 4;
						}
						break;
					
					case 7:
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (func_144())
							{
								if (!func_4())
								{
									if (func_17() == 0)
									{
										if (func_61(&uLocal_173, "REDR1AU", "REDR1_JIA", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
											iLocal_170 = 10;
										}
									}
									else if (func_17() == 1)
									{
										if (func_61(&uLocal_173, "REDR1AU", "REDR1_JIB", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
											iLocal_170 = 10;
										}
									}
									else if (func_17() == 2)
									{
										if (func_61(&uLocal_173, "REDR1AU", "REDR1_JIC", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
											iLocal_170 = 10;
										}
									}
								}
							}
							else
							{
								iLocal_170 = 4;
							}
						}
						else
						{
							iLocal_170 = 4;
						}
						break;
					
					case 10:
						if (func_144())
						{
							if (!PED::IS_PED_INJURED(iLocal_91[0]))
							{
								if (!PED::IS_PED_IN_GROUP(iLocal_91[0]))
								{
									BRAIN::CLEAR_PED_TASKS(iLocal_91[0]);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_91[0], func_57());
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_91[0], 1);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_91[0], 0);
								}
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_100, 1862763509);
								func_141();
							}
							iLocal_170++;
						}
						else
						{
							iLocal_170 = 4;
						}
						break;
					
					case 11:
						iLocal_55 = 7;
						break;
					}
			}
			if (iLocal_54 == 2)
			{
				switch (iLocal_170)
				{
					case 0:
						if (!PED::IS_PED_INJURED(iLocal_91[0]) && !PED::IS_PED_INJURED(iLocal_91[1]))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91[0], 10f, 10f, 10f, 0, 1, 0))
							{
								if (PED::IS_PED_FACING_PED(iLocal_91[0], PLAYER::PLAYER_PED_ID(), 50f))
								{
									BRAIN::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91[0], -1, 2060, 4);
									BRAIN::TASK_LOOK_AT_ENTITY(iLocal_91[0], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
									BRAIN::TASK_LOOK_AT_ENTITY(iLocal_91[1], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
									if (func_147())
									{
										func_56(0);
									}
									func_6();
									SYSTEM::WAIT(0);
									if (func_61(&uLocal_173, "REDR2AU", "REDR2_AKA", 4, 0, 0, 0))
									{
										iLocal_170++;
									}
								}
								else
								{
									func_142(iLocal_91[0], &(uLocal_65[0]));
								}
							}
						}
						break;
					
					case 1:
						if (!PED::IS_PED_INJURED(iLocal_91[0]))
						{
							BRAIN::OPEN_SEQUENCE_TASK(&iLocal_99);
							BRAIN::TASK_PAUSE(0, 500);
							BRAIN::CLOSE_SEQUENCE_TASK(iLocal_99);
							BRAIN::TASK_PERFORM_SEQUENCE(iLocal_91[0], iLocal_99);
							BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_99);
							SYSTEM::SETTIMERA(0);
							iLocal_170++;
						}
						break;
					
					case 2:
						func_142(iLocal_91[0], &(uLocal_65[0]));
						if (!PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_94, 1);
							}
						}
						if (SYSTEM::TIMERA() > 8000)
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_155[0]))
							{
								HUD::REMOVE_BLIP(&(uLocal_155[0]));
							}
							if (HUD::DOES_BLIP_EXIST(uLocal_155[1]))
							{
								HUD::REMOVE_BLIP(&(uLocal_155[1]));
							}
							if (!HUD::DOES_BLIP_EXIST(iLocal_158))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0))
								{
									iLocal_158 = func_145(iLocal_94, 0, 0);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_94, 1);
								}
							}
						}
						if (!func_4())
						{
							if (!PED::IS_PED_INJURED(iLocal_91[0]))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91[0], 20f, 20f, 20f, 0, 1, 0) && SYSTEM::TIMERA() > 9500)
								{
									iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
									if (iVar0 < 60)
									{
										if (func_61(&uLocal_173, "REDR2AU", "REDR2_PLS", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
										}
									}
									else if (func_61(&uLocal_173, "REDR2AU", "REDR2_CAR", 4, 0, 0, 0))
									{
										SYSTEM::SETTIMERA(0);
									}
								}
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_94, 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_94, 1))
							{
								iLocal_55 = 7;
							}
						}
						break;
					}
			}
			if (iLocal_54 == 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_91[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_94, 0))
				{
					if (SYSTEM::TIMERA() > 50000 || VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_94, -1, 0) == iLocal_91[0])
					{
						if (func_61(&uLocal_173, "REDR1AU", "REDR1_FU", 4, 0, 0, 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0) && !VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_94))
							{
								if (!PED::IS_PED_INJURED(iLocal_91[0]))
								{
									if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_94, -1, 0) && PED::IS_PED_IN_VEHICLE(iLocal_91[0], iLocal_94, 0))
									{
										BRAIN::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(iLocal_91[0], iLocal_94, 0);
										iLocal_55 = 2;
									}
									else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_94, -1, 0) == iLocal_91[0])
									{
										iLocal_55 = 2;
									}
									else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_94, -1, 0) == PLAYER::PLAYER_PED_ID())
									{
										iLocal_55 = 7;
									}
									else
									{
										func_64(iLocal_91[0], 120000, 0);
										BRAIN::TASK_WANDER_STANDARD(iLocal_91[0], 1193033728, 0);
										PED::SET_PED_KEEP_TASK(iLocal_91[0], true);
										SYSTEM::WAIT(0);
										func_60();
									}
								}
							}
							else if (!PED::IS_PED_INJURED(iLocal_91[0]))
							{
								func_64(iLocal_91[0], 120000, 0);
								BRAIN::TASK_WANDER_STANDARD(iLocal_91[0], 1193033728, 0);
								PED::SET_PED_KEEP_TASK(iLocal_91[0], true);
								SYSTEM::WAIT(0);
								func_60();
							}
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if (SYSTEM::TIMERA() > 60000)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_FU", 4, 0, 0, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_94, -1, 0))
							{
								if (!PED::IS_PED_INJURED(iLocal_91[0]))
								{
									BRAIN::OPEN_SEQUENCE_TASK(&iLocal_99);
									BRAIN::TASK_CLEAR_LOOK_AT(0);
									BRAIN::TASK_ENTER_VEHICLE(0, iLocal_94, -1, -1, 1f, 1, 0);
									BRAIN::CLOSE_SEQUENCE_TASK(iLocal_99);
									BRAIN::TASK_PERFORM_SEQUENCE(iLocal_91[0], iLocal_99);
									BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_99);
								}
							}
							if (!PED::IS_PED_INJURED(iLocal_91[1]))
							{
								BRAIN::OPEN_SEQUENCE_TASK(&iLocal_99);
								BRAIN::TASK_CLEAR_LOOK_AT(0);
								BRAIN::TASK_ENTER_VEHICLE(0, iLocal_94, -1, 0, 1f, 1, 0);
								BRAIN::CLOSE_SEQUENCE_TASK(iLocal_99);
								BRAIN::TASK_PERFORM_SEQUENCE(iLocal_91[1], iLocal_99);
								BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_99);
							}
							iLocal_55 = 2;
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_54 == 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_91[0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_94, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_91[0], iLocal_94, 0))
						{
							if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_91[0], 355471868) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_91[0], 355471868) != 0)
							{
								VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_94, 5f);
								VEHICLE::_0x25367DE49D64CF16(iLocal_94, 1);
								BRAIN::OPEN_SEQUENCE_TASK(&iLocal_99);
								BRAIN::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_94, -1016.152f, -1352.855f, 4.4854f, 4, 50f, 262144, -1f, 100f, 1);
								BRAIN::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_94, -1005.757f, -1353.806f, 4.4756f, 4, 50f, 262144, -1f, 100f, 1);
								BRAIN::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_94, -989.2302f, -1354.278f, -7.3581f, 4, 50f, 262144, -1f, 100f, 1);
								BRAIN::CLOSE_SEQUENCE_TASK(iLocal_99);
								BRAIN::TASK_PERFORM_SEQUENCE(iLocal_91[0], iLocal_99);
								BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_99);
								PED::SET_PED_KEEP_TASK(iLocal_91[0], true);
								func_60();
							}
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_91[0]) && !PED::IS_PED_INJURED(iLocal_91[1]))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_91[0], iLocal_94) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_91[1], iLocal_94))
						{
							VEHICLE::_0x25367DE49D64CF16(iLocal_94, 1);
							BRAIN::CLEAR_PED_TASKS(iLocal_91[1]);
							BRAIN::TASK_STAND_STILL(iLocal_91[1], -1);
							PED::SET_PED_KEEP_TASK(iLocal_91[1], true);
							iLocal_55 = 5;
						}
						if (!iLocal_101)
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_91[0], iLocal_94) && !PED::IS_PED_SITTING_IN_VEHICLE(iLocal_91[1], iLocal_94))
							{
								BRAIN::CLEAR_PED_TASKS(iLocal_91[0]);
								BRAIN::TASK_STAND_STILL(iLocal_91[0], -1);
							}
							if (!PED::IS_PED_SITTING_IN_VEHICLE(iLocal_91[0], iLocal_94) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_91[1], iLocal_94))
							{
								BRAIN::CLEAR_PED_TASKS(iLocal_91[1]);
								BRAIN::TASK_STAND_STILL(iLocal_91[1], -1);
							}
							iLocal_101 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_91[0]))
				{
					BRAIN::CLEAR_PED_TASKS(iLocal_91[0]);
					BRAIN::OPEN_SEQUENCE_TASK(&iLocal_99);
					BRAIN::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_94, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_94, 0f, 2f, 0f), 10f, 0, iLocal_98, 262144, 5f, -1f);
					BRAIN::TASK_VEHICLE_TEMP_ACTION(0, iLocal_94, 24, 500);
					BRAIN::TASK_VEHICLE_TEMP_ACTION(0, iLocal_94, 9, 1500);
					BRAIN::TASK_VEHICLE_TEMP_ACTION(0, iLocal_94, 24, 500);
					BRAIN::TASK_VEHICLE_TEMP_ACTION(0, iLocal_94, 11, 1500);
					BRAIN::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_94, 2185.817f, 3915.471f, 27.9257f, 4, 30f, 262144, 0f, 0f, 1);
					BRAIN::CLOSE_SEQUENCE_TASK(iLocal_99);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_91[0], iLocal_99);
					BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_99);
					PED::SET_PED_KEEP_TASK(iLocal_91[0], true);
				}
			}
			iLocal_55 = 6;
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_91[0]))
			{
				if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_91[0], 242628503) == 1)
				{
					if (BRAIN::GET_SEQUENCE_PROGRESS(iLocal_91[0]) == 5)
					{
						func_60();
					}
				}
			}
			break;
		
		case 7:
			if (iLocal_54 == 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_91[1]))
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91[1], 50f, 50f, 50f, 0, 1, 0))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_91[1]));
					}
				}
				switch (iLocal_64)
				{
					case 0:
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_155[0]))
							{
								uLocal_155[0] = func_162(iLocal_91[0], 0, 145);
							}
							iLocal_64++;
							SYSTEM::SETTIMERA(0);
						}
						break;
					
					case 1:
						if (SYSTEM::TIMERA() > 1000)
						{
							if (!PED::IS_PED_INJURED(iLocal_91[0]))
							{
								if (func_144())
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 0))
									{
										fLocal_164 = func_140(PLAYER::PLAYER_PED_ID(), iLocal_91[0], 1);
										iLocal_64++;
									}
								}
								else if (!iLocal_119)
								{
									if (func_61(&uLocal_173, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
									{
										iLocal_119 = 1;
									}
								}
							}
						}
						break;
					
					case 2:
						func_139();
						if (!PED::IS_PED_INJURED(iLocal_91[0]))
						{
							if (func_144())
							{
								if (!iLocal_118)
								{
									if (func_140(PLAYER::PLAYER_PED_ID(), iLocal_91[0], 1) > (fLocal_164 + 5f))
									{
										if (func_61(&uLocal_173, "REDR1AU", "REDR1_LEA", 4, 0, 0, 0))
										{
											iLocal_118 = 1;
										}
									}
								}
							}
							else if (!iLocal_119)
							{
								if (func_61(&uLocal_173, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
								{
									iLocal_119 = 1;
								}
							}
						}
						if (func_2())
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_94, 1);
							}
							if (HUD::DOES_BLIP_EXIST(uLocal_155[0]))
							{
								HUD::REMOVE_BLIP(&(uLocal_155[0]));
							}
							if (func_17() == 2 && !func_58())
							{
								if (!HUD::DOES_BLIP_EXIST(iLocal_103))
								{
									iLocal_103 = func_137(vLocal_87, 0);
									HUD::SET_BLIP_SPRITE(iLocal_103, 269);
									func_135();
								}
							}
							iLocal_62 = 1;
							iLocal_64++;
						}
						if (!PED::IS_PED_INJURED(iLocal_91[0]))
						{
							if (func_140(PLAYER::PLAYER_PED_ID(), iLocal_91[0], 1) > 50f)
							{
								func_60();
							}
						}
						break;
					
					case 3:
						if (!func_4())
						{
							SYSTEM::WAIT(1500);
							BRAIN::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
							if (func_17() == 0)
							{
								if (func_61(&uLocal_173, "REDR1AU", "REDR1_WHA", 4, 0, 0, 0))
								{
									iLocal_64++;
								}
							}
							else if (func_17() == 1)
							{
								if (func_61(&uLocal_173, "REDR1AU", "REDR1_WHB", 4, 0, 0, 0))
								{
									iLocal_64++;
								}
							}
							else if (func_17() == 2)
							{
								if (func_61(&uLocal_173, "REDR1AU", "REDR1_WHC", 4, 0, 0, 0))
								{
									iLocal_64++;
								}
							}
						}
						break;
					
					case 4:
						if (!func_4())
						{
							if (func_61(&uLocal_173, "REDR1AU", "REDR1_WH2", 4, 0, 0, 0))
							{
								iLocal_171 = MISC::GET_GAME_TIMER();
								iLocal_64++;
							}
						}
						break;
					
					case 5:
						func_134();
						func_133();
						func_139();
						if (!iLocal_110)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_171) > 7000)
							{
								if (!func_4())
								{
									if (func_61(&uLocal_173, "REDR1AU", "REDR1_ILL", 4, 0, 0, 0))
									{
										iLocal_171 = MISC::GET_GAME_TIMER();
										iLocal_110 = 1;
									}
								}
							}
						}
						else if (func_2())
						{
							if (iLocal_109 && !bLocal_108)
							{
								func_132();
							}
							else
							{
								func_129();
								func_128();
								CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
							}
						}
						if (func_127(vLocal_81))
						{
							func_5(0);
							func_62();
							SYSTEM::WAIT(0);
							func_61(&uLocal_173, "REDR1AU", "REDR1_OFFR", 4, 0, 0, 0);
						}
						if (func_126())
						{
							func_5(0);
							func_62();
							SYSTEM::WAIT(0);
							func_61(&uLocal_173, "REDR1AU", "REDR1_CULT", 4, 0, 0, 0);
						}
						if (!PED::IS_PED_INJURED(iLocal_91[0]))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_91[0], vLocal_81, Global_22, true, true, 0))
							{
								if (HUD::DOES_BLIP_EXIST(iLocal_102))
								{
									HUD::REMOVE_BLIP(&iLocal_102);
								}
								if (HUD::DOES_BLIP_EXIST(iLocal_103))
								{
									HUD::REMOVE_BLIP(&iLocal_103);
								}
								iLocal_55 = 8;
							}
						}
						break;
					}
			}
			if (iLocal_54 == 2)
			{
				switch (iLocal_64)
				{
					case 0:
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_94, 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_94, 1))
							{
								if (!HUD::DOES_BLIP_EXIST(uLocal_155[0]))
								{
									uLocal_155[0] = func_162(iLocal_91[0], 0, 145);
								}
								if (!HUD::DOES_BLIP_EXIST(uLocal_155[1]))
								{
									uLocal_155[1] = func_162(iLocal_91[1], 0, 145);
								}
								if (!func_4())
								{
									SYSTEM::SETTIMERA(0);
									if (func_17() == 0)
									{
										if (func_61(&uLocal_173, "REDR2AU", "REDR2_JIA", 4, 0, 0, 0))
										{
											iLocal_64++;
										}
									}
									else if (func_17() == 1)
									{
										if (func_61(&uLocal_173, "REDR2AU", "REDR2_JIB", 4, 0, 0, 0))
										{
											iLocal_64++;
										}
									}
									else if (func_17() == 2)
									{
										if (func_61(&uLocal_173, "REDR2AU", "REDR2_JIC", 4, 0, 0, 0))
										{
											iLocal_64++;
										}
									}
								}
							}
						}
						break;
					
					case 1:
						if (!PED::IS_PED_INJURED(iLocal_91[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_94, 0))
						{
							BRAIN::TASK_CLEAR_LOOK_AT(iLocal_91[0]);
							BRAIN::TASK_ENTER_VEHICLE(iLocal_91[0], iLocal_94, 30000, 2, 1073741824, 1, 0);
						}
						SYSTEM::SETTIMERA(0);
						iLocal_64++;
						break;
					
					case 2:
						if (!PED::IS_PED_INJURED(iLocal_91[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_94, 0))
						{
							BRAIN::OPEN_SEQUENCE_TASK(&iLocal_99);
							BRAIN::TASK_CLEAR_LOOK_AT(0);
							BRAIN::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, iLocal_94, 1.5f, -3f, 0f, 1f, 4000, 1036831949, 1);
							BRAIN::TASK_ENTER_VEHICLE(0, iLocal_94, 30000, 1, 1073741824, 1, 0);
							BRAIN::CLOSE_SEQUENCE_TASK(iLocal_99);
							BRAIN::TASK_PERFORM_SEQUENCE(iLocal_91[1], iLocal_99);
							BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_99);
						}
						SYSTEM::SETTIMERA(0);
						iLocal_64++;
						break;
					
					case 3:
						func_134();
						func_133();
						if (!iLocal_117)
						{
							if (!func_4())
							{
								if (func_61(&uLocal_173, "REDR2AU", "REDR2_BCK", 4, 0, 0, 0))
								{
									iLocal_117 = 1;
								}
							}
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_91[0], 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_91[1], 0))
								{
									if (PED::IS_PED_IN_VEHICLE(iLocal_91[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && PED::IS_PED_IN_VEHICLE(iLocal_91[1], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
									{
										PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_100, 1862763509);
										func_141();
										iLocal_63 = 0;
										while (iLocal_63 <= (iLocal_90 - 1))
										{
											if (HUD::DOES_BLIP_EXIST(uLocal_155[iLocal_63]))
											{
												HUD::REMOVE_BLIP(&(uLocal_155[iLocal_63]));
											}
											iLocal_63++;
										}
										if (HUD::DOES_BLIP_EXIST(iLocal_158))
										{
											HUD::REMOVE_BLIP(&iLocal_158);
										}
										if (func_17() == 2 && !func_58())
										{
											if (!HUD::DOES_BLIP_EXIST(iLocal_103))
											{
												iLocal_103 = func_137(vLocal_87, 0);
												HUD::SET_BLIP_SPRITE(iLocal_103, 269);
												func_135();
											}
										}
										if (func_17() == 0)
										{
											if (func_61(&uLocal_173, "REDR2AU", "REDR2_WHA", 4, 0, 0, 0))
											{
												SYSTEM::SETTIMERA(0);
												iLocal_64++;
											}
										}
										else if (func_17() == 1)
										{
											if (func_61(&uLocal_173, "REDR2AU", "REDR2_WHB", 4, 0, 0, 0))
											{
												SYSTEM::SETTIMERA(0);
												iLocal_64++;
											}
										}
										else if (func_17() == 2)
										{
											if (func_61(&uLocal_173, "REDR2AU", "REDR2_WHC", 4, 0, 0, 0))
											{
												SYSTEM::SETTIMERA(0);
												iLocal_64++;
											}
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_134();
						func_133();
						if (!func_4())
						{
							if (func_61(&uLocal_173, "REDR2AU", "REDR2_WH2", 4, 0, 0, 0))
							{
								iLocal_62 = 1;
								BRAIN::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								iLocal_171 = MISC::GET_GAME_TIMER();
								iLocal_64++;
							}
						}
						break;
					
					case 5:
						func_134();
						if (iLocal_346 == 0 || iLocal_346 == 9)
						{
							func_133();
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_171) > 9000)
						{
							func_120();
						}
						if (iLocal_346 == 9 && ((MISC::GET_GAME_TIMER() - iLocal_347) > 6000 && (MISC::GET_GAME_TIMER() - iLocal_347) < 6500))
						{
							func_61(&uLocal_173, "REDR2AU", "REDR2_CHAT", 4, 0, 0, 0);
						}
						if (func_127(vLocal_81))
						{
							func_5(0);
							func_62();
							SYSTEM::WAIT(0);
							func_61(&uLocal_173, "REDR2AU", "REDR2_OFFR", 4, 0, 0, 0);
						}
						if (func_126())
						{
							func_5(0);
							func_62();
							SYSTEM::WAIT(0);
							func_61(&uLocal_173, "REDR2AU", "REDR2_CULT", 4, 0, 0, 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_94, 0))
						{
							if ((!PED::IS_PED_INJURED(iLocal_91[0]) && !PED::IS_PED_INJURED(iLocal_91[1])) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_94, 0))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(iLocal_91[0], vLocal_81, Global_22, true, true, 0) && ENTITY::IS_ENTITY_AT_COORD(iLocal_91[1], vLocal_81, Global_22, false, true, 0))
								{
									iLocal_64++;
								}
							}
						}
						break;
					
					case 6:
						if (HUD::DOES_BLIP_EXIST(iLocal_102))
						{
							HUD::REMOVE_BLIP(&iLocal_102);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_103))
						{
							HUD::REMOVE_BLIP(&iLocal_103);
						}
						iLocal_55 = 8;
						break;
					}
			}
			break;
		
		case 8:
			iLocal_63 = 0;
			while (iLocal_63 <= (iLocal_90 - 1))
			{
				if (!PED::IS_PED_INJURED(iLocal_91[iLocal_63]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_91[iLocal_63], false);
				}
				iLocal_63++;
			}
			if (iLocal_54 == 1)
			{
				if (func_119(1, 0, 1) && iLocal_124 == -1)
				{
					func_6();
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						VEHICLE::_SET_VEHICLE_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), (10.5f - 5f), 2, 0);
					}
					if (func_2())
					{
						if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) == iLocal_94)
						{
							iLocal_124 = 0;
						}
						else
						{
							iLocal_124 = 1;
						}
					}
					else
					{
						iLocal_124 = 2;
					}
				}
				if (iLocal_124 == 0)
				{
					func_118();
				}
				if (iLocal_124 == 1)
				{
					func_117();
				}
				if (iLocal_124 == 2)
				{
					func_116();
				}
				if (bLocal_130)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					func_30();
				}
			}
			if (iLocal_54 == 2)
			{
				if (func_119(1, 0, 1) && iLocal_124 == -1)
				{
					func_62();
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						VEHICLE::_SET_VEHICLE_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), (10.5f - 4f), 2, 0);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(1143.587f, 2672.224f, 37.1142f, 70f, 2);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(930.2788f, 2856.145f, 59.2884f, 70f, 2);
					}
					func_108(1, 1, 1, 0, 0, 0);
					while (func_4())
					{
						SYSTEM::WAIT(0);
					}
					if (func_2())
					{
						if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) == iLocal_94)
						{
							iLocal_124 = 0;
						}
					}
				}
				if (iLocal_124 == 0)
				{
					func_105();
				}
				else if (iLocal_124 == 1)
				{
					func_104();
				}
				else if (iLocal_124 == 2)
				{
					func_71();
				}
				if (bLocal_130)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					func_30();
				}
			}
			break;
		
		case 9:
			break;
	}
}

void func_71()//Position - 0x4F01
{
	switch (iLocal_126)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_91[0]))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_91[0]);
				BRAIN::TASK_LOOK_AT_ENTITY(iLocal_91[0], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
				BRAIN::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91[0], 10000, 2060, 4);
			}
			if (!PED::IS_PED_INJURED(iLocal_91[1]))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_91[0]);
				BRAIN::TASK_LOOK_AT_ENTITY(iLocal_91[1], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
			}
			func_61(&uLocal_173, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
			iLocal_126++;
			break;
		
		case 1:
			iLocal_126++;
			break;
		
		case 2:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(iLocal_91[0]))
				{
					BRAIN::TASK_GO_STRAIGHT_TO_COORD(iLocal_91[0], vLocal_84, 1f, -1, 1193033728, 1056964608);
					iLocal_125 = MISC::GET_GAME_TIMER() + 500;
					iLocal_126++;
				}
			}
			break;
		
		case 3:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(iLocal_91[1]))
				{
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_91[1], vLocal_84, 1f, -1, 1048576000, 0, 1193033728);
					iLocal_126++;
				}
			}
			break;
		
		case 4:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
			{
				iLocal_126++;
			}
			break;
		
		case 5:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_130 = true;
			break;
	}
}

void func_72(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x505E
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
	func_73(Global_106565.f_28044[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_73(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x5145
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_103();
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
					func_102(99, 1);
					func_101(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_101(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_101(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_87(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_82(5))
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
							func_101(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_101(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_101(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_82(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_101(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_101(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_101(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_101(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_101(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_101(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_101(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_101(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_101(joaat("sp2_money_spent_property"), iParam3);
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
									func_101(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_101(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_101(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_101(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_101(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_101(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_82(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_101(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_101(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_101(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_101(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_101(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_101(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_81(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_102(95, iParam3);
					break;
				
				case 1:
					func_102(97, iParam3);
					break;
				
				case 2:
					func_102(96, iParam3);
					break;
			}
			func_102(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_76(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_76(iVar1);
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
					func_101(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_101(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_101(joaat("sp2_total_cash_earned"), iParam3);
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
	func_75(iParam0);
	if (Global_36425 == 15)
	{
		func_74(0);
	}
	return 1;
}

void func_74(bool bParam0)//Position - 0x5744
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

void func_75(int iParam0)//Position - 0x59C6
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

void func_76(int iParam0)//Position - 0x5A20
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_40(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_40(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_40(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_40(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_79(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_79(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_79(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_79(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_79(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_79(8274, 0, -1, 1, 0);
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
	else if (MISC::IS_BIT_SET(Global_106565.f_20558.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_78() /*10778*/].f_6165.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_106565.f_20558.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_78() /*10778*/].f_6165.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_77(iParam0));
		HUD::_SET_NOTIFICATION_MESSAGE_2(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_77(int iParam0)//Position - 0x5BAF
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

int func_78()//Position - 0x5CAA
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_79(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x5CB7
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_80(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_80(var uParam0)//Position - 0x5CE7
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_41();
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

void func_81(int iParam0)//Position - 0x5D1B
{
	func_102(93, iParam0);
	func_102(29, iParam0);
	func_102(30, iParam0);
}

bool func_82(int iParam0)//Position - 0x5D3B
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
		return func_84(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_84(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_84(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_84(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::_GET_POSIX_TIME();
		iVar1 = func_83(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::_GET_POSIX_TIME();
		iVar3 = func_83(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::_GET_POSIX_TIME();
		iVar5 = func_83(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::_GET_POSIX_TIME();
		iVar7 = func_83(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::_GET_POSIX_TIME();
		iVar9 = func_83(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::_GET_POSIX_TIME();
		iVar11 = func_83(8274, -1, 0);
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
	return MISC::IS_BIT_SET(Global_2097152[func_78() /*10778*/].f_6165.f_10, iParam0);
}

int func_83(int iParam0, int iParam1, int iParam2)//Position - 0x5EEB
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_80(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_84(int iParam0, int iParam1, int iParam2)//Position - 0x5F1D
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_41();
	}
	iVar1 = func_86(iParam0, iParam1);
	uVar2 = func_85(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_85(int iParam0)//Position - 0x5F5A
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

int func_86(int iParam0, int iParam1)//Position - 0x629E
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_41();
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

int func_87(bool bParam0)//Position - 0x65C1
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
		func_39(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_88(27, 1);
	return 1;
}

int func_88(int iParam0, int iParam1)//Position - 0x6678
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_89(iParam0, iParam1);
}

int func_89(int iParam0, int iParam1)//Position - 0x6693
{
	if (func_22(14) && !func_100(iParam0))
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
	if (func_99(&Global_4269608))
	{
		if (func_97(&Global_4269608, iParam0))
		{
			return 0;
		}
		if (func_90(&Global_4269608, iParam0))
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

int func_90(var uParam0, int iParam1)//Position - 0x6730
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_22(14) && !func_100(iParam1))
	{
		return 0;
	}
	if (func_97(uParam0, iParam1))
	{
		return 0;
	}
	if (func_96(uParam0) < 0f)
	{
		func_95(uParam0, 0);
	}
	func_93(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_91(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_91(var uParam0, int iParam1)//Position - 0x67E1
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_22(14) && !func_100(iParam1))
	{
		return 0;
	}
	if (func_97(uParam0, iParam1))
	{
		return 0;
	}
	if (func_96(uParam0) < 0f)
	{
		func_95(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_92(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_92(var uParam0, int iParam1)//Position - 0x685C
{
	return (*uParam0)[iParam1] == 78;
}

void func_93(var uParam0)//Position - 0x686D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_94(uParam0, iVar0);
		iVar0++;
	}
	func_95(uParam0, (Global_4269607 - 0.5f));
}

void func_94(var uParam0, int iParam1)//Position - 0x68A1
{
	(*uParam0)[iParam1] = 78;
}

void func_95(var uParam0, float fParam1)//Position - 0x68B1
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

float func_96(var uParam0)//Position - 0x68CE
{
	return uParam0->f_80;
}

bool func_97(var uParam0, int iParam1)//Position - 0x68DA
{
	return func_98(uParam0, iParam1) != -1;
}

int func_98(var uParam0, int iParam1)//Position - 0x68EC
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

bool func_99(var uParam0)//Position - 0x6919
{
	return uParam0->f_79 == 1;
}

int func_100(int iParam0)//Position - 0x6927
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

void func_101(int iParam0, int iParam1)//Position - 0x6977
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_102(int iParam0, int iParam1)//Position - 0x699A
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

void func_103()//Position - 0x69F7
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

void func_104()//Position - 0x6A6C
{
	int iVar0;
	
	switch (iLocal_126)
	{
		case 0:
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iVar0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_91[0]))
						{
							BRAIN::CLEAR_PED_TASKS(iLocal_91[0]);
							PED::REMOVE_PED_FROM_GROUP(iLocal_91[0]);
						}
						if (!PED::IS_PED_INJURED(iLocal_91[1]))
						{
							BRAIN::CLEAR_PED_TASKS(iLocal_91[1]);
							PED::REMOVE_PED_FROM_GROUP(iLocal_91[1]);
						}
					}
					func_61(&uLocal_173, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					iLocal_126++;
				}
			}
			break;
		
		case 1:
			iLocal_126++;
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_91[1]))
			{
				BRAIN::OPEN_SEQUENCE_TASK(&iLocal_99);
				BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_84, 1f, -1, 1048576000, 0, 1193033728);
				BRAIN::CLOSE_SEQUENCE_TASK(iLocal_99);
				BRAIN::TASK_PERFORM_SEQUENCE(iLocal_91[1], iLocal_99);
				BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_99);
				iLocal_125 = MISC::GET_GAME_TIMER() + 1500;
				iLocal_126++;
			}
			break;
		
		case 3:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(iLocal_91[0]))
				{
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_91[0], vLocal_84, 1f, -1, 1048576000, 0, 1193033728);
					iLocal_126++;
				}
			}
			break;
		
		case 4:
			if (func_17() == 2)
			{
				if (func_61(&uLocal_173, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
				{
					iLocal_125 = MISC::GET_GAME_TIMER() + 1000;
					iLocal_126 = 7;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_173, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
				{
					iLocal_125 = MISC::GET_GAME_TIMER() + 1500;
					iLocal_126 = 7;
				}
			}
			else if (func_17() == 0)
			{
				if (func_61(&uLocal_173, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
				{
					iLocal_125 = MISC::GET_GAME_TIMER() + 750;
					iLocal_126 = 7;
				}
			}
			break;
		
		case 5:
			iLocal_126++;
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_91[0]))
			{
				if (func_17() == 2)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_91[0], vLocal_84, 1f, -1, 1048576000, 0, 1193033728);
						iLocal_125 = MISC::GET_GAME_TIMER() + 3500;
						iLocal_126++;
					}
				}
				if (func_17() == 1 || func_17() == 0)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_91[0], vLocal_84, 1f, -1, 1048576000, 0, 1193033728);
						iLocal_125 = MISC::GET_GAME_TIMER() + 3500;
						iLocal_126++;
					}
				}
			}
			break;
		
		case 7:
			if (!func_4())
			{
				iLocal_126++;
			}
			break;
		
		case 8:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_130 = true;
			break;
	}
}

void func_105()//Position - 0x6D21
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	switch (iLocal_126)
	{
		case 0:
			HUD::DISPLAY_HUD(false);
			HUD::DISPLAY_RADAR(false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_94))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_91[0]))
						{
							BRAIN::CLEAR_PED_TASKS(iLocal_91[0]);
							PED::REMOVE_PED_FROM_GROUP(iLocal_91[0]);
							BRAIN::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91[0], 4000, 2060, 4);
						}
						if (!PED::IS_PED_INJURED(iLocal_91[1]))
						{
							BRAIN::CLEAR_PED_TASKS(iLocal_91[1]);
							PED::REMOVE_PED_FROM_GROUP(iLocal_91[1]);
						}
					}
					StringCopy(&cLocal_143, "", 24);
					func_62();
					SYSTEM::WAIT(0);
					func_61(&uLocal_173, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					iLocal_126++;
				}
			}
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0))
			{
				iLocal_128 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1121.335f, 2643.908f, 37.862f, 1.5062f, 0f, 20.274f, 33.0256f, 0, 2);
				iLocal_129 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1121.302f, 2643.998f, 37.8919f, 1.5062f, 0f, 18.7019f, 33.0256f, 0, 2);
				CAM::SHAKE_CAM(iLocal_128, "HAND_SHAKE", 0.3f);
				CAM::SHAKE_CAM(iLocal_129, "HAND_SHAKE", 0.3f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_129, iLocal_128, 2500, 0, 0);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				MISC::CLEAR_AREA(vLocal_81, 8f, 1, 0, 0, false);
				ENTITY::SET_ENTITY_COORDS(iLocal_94, 1120.551f, 2647.307f, 36.9963f, 1, false, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_94, 179.7675f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_94, 1084227584);
				iLocal_125 = MISC::GET_GAME_TIMER() + 2500;
				iLocal_126++;
			}
			break;
		
		case 2:
			if (iLocal_125 - 500) < MISC::GET_GAME_TIMER()
			{
				if (!PED::IS_PED_INJURED(iLocal_91[1]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_91[1], 0))
					{
						BRAIN::OPEN_SEQUENCE_TASK(&iLocal_99);
						BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_84, 1f, -1, 1048576000, 0, 1193033728);
						BRAIN::CLOSE_SEQUENCE_TASK(iLocal_99);
						BRAIN::TASK_PERFORM_SEQUENCE(iLocal_91[1], iLocal_99);
						BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_99);
						PED::SET_PED_KEEP_TASK(iLocal_91[1], true);
					}
				}
			}
			if (iLocal_125 - 1000) < MISC::GET_GAME_TIMER()
			{
				if (!PED::IS_PED_INJURED(iLocal_91[0]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_91[0], 0))
					{
						BRAIN::OPEN_SEQUENCE_TASK(&iLocal_99);
						BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_84 - Vector(0f, 0f, 1f), 1f, -1, 1048576000, 0, 1193033728);
						BRAIN::CLOSE_SEQUENCE_TASK(iLocal_99);
						BRAIN::TASK_PERFORM_SEQUENCE(iLocal_91[0], iLocal_99);
						BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_99);
						PED::SET_PED_KEEP_TASK(iLocal_91[0], true);
					}
				}
			}
			if (iLocal_125 < MISC::GET_GAME_TIMER())
			{
				CAM::SET_CAM_PARAMS(iLocal_128, 1105.849f, 2664.653f, 38.047f, 3.6983f, 0.0242f, -140.4768f, 41.7126f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iLocal_129, 1106f, 2664.469f, 38.0625f, 3.6984f, 0.0242f, -140.4769f, 41.7126f, 0, 1, 1, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_129, iLocal_128, 5000, 0, 0);
				STREAMING::NEW_LOAD_SCENE_STOP();
				iLocal_125 = MISC::GET_GAME_TIMER() + 6000;
				iLocal_126++;
			}
			break;
		
		case 3:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
			{
				CAM::SET_CAM_PARAMS(iLocal_128, 1122.37f, 2646.108f, 38.3339f, -5.6746f, -0.1271f, 33.7683f, 50f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iLocal_129, 1122.338f, 2646.157f, 38.3281f, -5.6746f, -0.1271f, 33.7683f, 50f, 0, 1, 1, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_129, iLocal_128, 1500, 1, 1);
				if (!PED::IS_PED_INJURED(iLocal_91[0]) && !PED::IS_PED_INJURED(iLocal_91[1]))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_91[0], 1141.156f, 2643.205f, 37.1487f, 1, false, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_91[0], 262.7369f);
					ENTITY::SET_ENTITY_COORDS(iLocal_91[1], 1140.152f, 2644.149f, 37.1487f, 1, false, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_91[1], 262.1522f);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					BRAIN::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
				if (func_17() == 2)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
					{
					}
				}
				else if (func_17() == 1)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
					{
					}
				}
				else if (func_17() == 0)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
					{
					}
				}
				iLocal_125 = MISC::GET_GAME_TIMER() + 1700;
				iLocal_126++;
			}
			break;
		
		case 4:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
			{
				iLocal_126++;
			}
			break;
		
		case 5:
			iLocal_126 = 7;
			break;
		
		case 6:
			if (!func_4())
			{
				if (func_17() == 2)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						iLocal_125 = MISC::GET_GAME_TIMER() + 5500;
						iLocal_126++;
					}
				}
				if (func_17() == 1 || func_17() == 0)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						iLocal_125 = MISC::GET_GAME_TIMER() + 5500;
						iLocal_126++;
					}
				}
			}
			break;
		
		case 7:
			STREAMING::NEW_LOAD_SCENE_STOP();
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
			func_108(0, 1, 1, 0, 0, 0);
			PED::DELETE_PED(&(iLocal_91[0]));
			PED::DELETE_PED(&(iLocal_91[1]));
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_94, 7);
			}
			if (iLocal_131)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_94, 0))
				{
					PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_94, 1);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
				}
			}
			else
			{
				CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
			}
			CAM::SET_CAM_ACTIVE(iLocal_128, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
			HUD::DISPLAY_HUD(true);
			HUD::DISPLAY_RADAR(true);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			func_72(func_17(), 1, 40, 0, 1);
			bLocal_130 = true;
	}
	if (iLocal_126 != 0)
	{
		if (func_106(1000))
		{
			func_62();
			iLocal_131 = 1;
			iLocal_126 = 7;
		}
	}
}

int func_106(int iParam0)//Position - 0x7300
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
			if (func_107())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_107()//Position - 0x734A
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

void func_108(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x737C
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_115(1);
		HUD::_0xA8FDB297A8D25FBA();
		HUD::_0xFDB423997FA30340();
		if (Global_14553.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_14())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_114(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_115(0);
		HUD::_0xE1CD1E48E025E661();
		Global_56500 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_114(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_112(PLAYER::PLAYER_ID())) && !func_110(PLAYER::PLAYER_ID(), 0)) && !func_109()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_112(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_71588 = 0;
	}
}

bool func_109()//Position - 0x74B5
{
	return MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_39.f_18, 14);
}

bool func_110(int iParam0, int iParam1)//Position - 0x74D2
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_111(-1, 0) == 8;
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

int func_111(int iParam0, bool bParam1)//Position - 0x751D
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_41();
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

int func_112(int iParam0)//Position - 0x755E
{
	if (func_110(iParam0, 0))
	{
		return 1;
	}
	if (func_113())
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

bool func_113()//Position - 0x75A0
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_114(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x75B1
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

void func_115(int iParam0)//Position - 0x75E4
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

void func_116()//Position - 0x7607
{
	switch (iLocal_126)
	{
		case 0:
			if (!func_4())
			{
				if (!PED::IS_PED_INJURED(iLocal_91[0]))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_91[0]);
					BRAIN::TASK_LOOK_AT_ENTITY(iLocal_91[0], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
					BRAIN::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91[0], 10000, 2060, 4);
				}
				if (bLocal_108)
				{
					func_61(&uLocal_173, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
				}
				else
				{
					func_61(&uLocal_173, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
				}
				iLocal_126++;
			}
			break;
		
		case 1:
			iLocal_125 = MISC::GET_GAME_TIMER() + 3000;
			iLocal_126++;
			break;
		
		case 2:
			if (func_17() == 0)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_17() == 2)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_91[0]))
			{
				BRAIN::OPEN_SEQUENCE_TASK(&iLocal_99);
				BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1800);
				BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_84, 1f, -1, 1048576000, 0, 1193033728);
				BRAIN::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, 0, 0, 0);
				BRAIN::CLOSE_SEQUENCE_TASK(iLocal_99);
				BRAIN::TASK_PERFORM_SEQUENCE(iLocal_91[0], iLocal_99);
				BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_99);
				PED::SET_PED_KEEP_TASK(iLocal_91[0], true);
				iLocal_125 = MISC::GET_GAME_TIMER() + 2000;
				iLocal_126++;
			}
			break;
		
		case 4:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
			{
				iLocal_126++;
			}
			break;
		
		case 5:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_130 = true;
			break;
	}
}

void func_117()//Position - 0x77E6
{
	int iVar0;
	
	switch (iLocal_126)
	{
		case 0:
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iVar0) && !func_4())
				{
					if (!PED::IS_PED_INJURED(iLocal_91[0]))
					{
						BRAIN::CLEAR_PED_TASKS(iLocal_91[0]);
						PED::REMOVE_PED_FROM_GROUP(iLocal_91[0]);
						BRAIN::TASK_LOOK_AT_ENTITY(iLocal_91[0], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
						BRAIN::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91[0], 10000, 2060, 4);
					}
					if (bLocal_108)
					{
						func_61(&uLocal_173, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					}
					else
					{
						func_61(&uLocal_173, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
					}
					iLocal_126++;
				}
			}
			break;
		
		case 1:
			iLocal_126++;
			break;
		
		case 2:
			iLocal_126++;
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_91[0]))
			{
				BRAIN::OPEN_SEQUENCE_TASK(&iLocal_99);
				BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194304);
				BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1800);
				BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_84, 1f, -1, 1048576000, 0, 1193033728);
				BRAIN::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, 0, 0, 0);
				BRAIN::CLOSE_SEQUENCE_TASK(iLocal_99);
				BRAIN::TASK_PERFORM_SEQUENCE(iLocal_91[0], iLocal_99);
				BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_99);
				PED::SET_PED_KEEP_TASK(iLocal_91[0], true);
			}
			func_64(iLocal_91[0], 120000, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_125 = MISC::GET_GAME_TIMER() + 3000;
			iLocal_126++;
			break;
		
		case 4:
			iLocal_125 = MISC::GET_GAME_TIMER() + 3000;
			if (func_17() == 0)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_17() == 2)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			break;
		
		case 5:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
			{
				iLocal_126++;
			}
			break;
		
		case 6:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_130 = true;
			break;
	}
}

void func_118()//Position - 0x7A19
{
	switch (iLocal_126)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_94) && !func_4())
				{
					if (!PED::IS_PED_INJURED(iLocal_91[0]))
					{
						BRAIN::CLEAR_PED_TASKS(iLocal_91[0]);
						PED::REMOVE_PED_FROM_GROUP(iLocal_91[0]);
						BRAIN::TASK_LOOK_AT_ENTITY(iLocal_91[0], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
						BRAIN::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91[0], 10000, 2060, 4);
					}
					if (bLocal_108)
					{
						func_61(&uLocal_173, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					}
					else
					{
						func_61(&uLocal_173, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
					}
					iLocal_126++;
				}
			}
			break;
		
		case 1:
			iLocal_126++;
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_91[0]))
			{
				BRAIN::OPEN_SEQUENCE_TASK(&iLocal_99);
				BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194304);
				BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1800);
				BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_84, 1f, -1, 1048576000, 0, 1193033728);
				BRAIN::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, 0, 0, 0);
				BRAIN::CLOSE_SEQUENCE_TASK(iLocal_99);
				BRAIN::TASK_PERFORM_SEQUENCE(iLocal_91[0], iLocal_99);
				BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_99);
				PED::SET_PED_KEEP_TASK(iLocal_91[0], true);
				func_64(iLocal_91[0], 120000, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_125 = MISC::GET_GAME_TIMER() + 3000;
				iLocal_126++;
			}
			break;
		
		case 3:
			iLocal_125 = MISC::GET_GAME_TIMER() + 3000;
			if (func_17() == 0)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_17() == 2)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			break;
		
		case 4:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
			{
				iLocal_126++;
			}
			break;
		
		case 5:
			iLocal_126++;
			break;
		
		case 6:
			iLocal_126++;
			break;
		
		case 7:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_130 = true;
			break;
	}
}

int func_119(bool bParam0, bool bParam1, bool bParam2)//Position - 0x7C50
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

void func_120()//Position - 0x7D35
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_enter_m", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_idle_m", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_exit_m", 3))
	{
		iVar0 = 0;
		iVar1 = CAM::_0x19CAFA3C87F7C2FF();
		if (iVar1 != 0)
		{
			iVar2 = CAM::_0xEE778F8C7E1142E2(iVar1);
			if (iVar2 == 4)
			{
				iVar0 = 1;
			}
		}
		if ((((((((func_125(64) || PAD::IS_CONTROL_PRESSED(0, 86)) || PAD::IS_CONTROL_PRESSED(0, 71)) || PAD::IS_CONTROL_PRESSED(0, 72)) || PAD::IS_CONTROL_PRESSED(0, 76)) || PAD::IS_CONTROL_PRESSED(0, 73)) || PAD::IS_CONTROL_PRESSED(0, 68)) || PAD::IS_CONTROL_PRESSED(0, 75)) || iVar0)
		{
			BRAIN::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
	switch (iLocal_346)
	{
		case 0:
			if (func_124())
			{
				BRAIN::TASK_LOOK_AT_ENTITY(iLocal_91[0], iLocal_91[1], -1, 2060, 4);
				BRAIN::TASK_LOOK_AT_ENTITY(iLocal_91[1], iLocal_91[0], -1, 2060, 4);
				if (func_61(&uLocal_173, "REDR2AU", "REDR2_HC", 4, 0, 0, 0))
				{
					BRAIN::OPEN_SEQUENCE_TASK(&iLocal_99);
					BRAIN::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_intro_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
					BRAIN::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_loop_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
					BRAIN::CLOSE_SEQUENCE_TASK(iLocal_99);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_91[0], iLocal_99);
					BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_99);
					BRAIN::OPEN_SEQUENCE_TASK(&iLocal_99);
					BRAIN::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_intro_f", 2f, -2f, -1, 0, 0, 0, 0, 0);
					BRAIN::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_loop_f", 2f, -2f, -1, 1, 0, 0, 0, 0);
					BRAIN::CLOSE_SEQUENCE_TASK(iLocal_99);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_91[1], iLocal_99);
					BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_99);
					iLocal_347 = MISC::GET_GAME_TIMER();
					iLocal_346++;
				}
			}
			break;
		
		case 1:
			if (!func_4())
			{
				iLocal_347 = MISC::GET_GAME_TIMER();
				iLocal_346++;
			}
			break;
		
		case 2:
			if (func_124())
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_347) > 5000)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_CH", 4, 0, 0, 0))
					{
						iLocal_347 = MISC::GET_GAME_TIMER();
						iLocal_346++;
					}
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_347) > 15000)
			{
				if (func_124())
				{
					BRAIN::TASK_PLAY_ANIM(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_intro_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
					BRAIN::TASK_PLAY_ANIM(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_intro_f", 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_346++;
				}
			}
			break;
		
		case 4:
			if (func_124())
			{
				func_122();
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_intro_m", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_intro_m") > 0.9f)
					{
						BRAIN::TASK_PLAY_ANIM(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
						BRAIN::TASK_PLAY_ANIM(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, 0, 0, 0, 0);
						iLocal_347 = MISC::GET_GAME_TIMER();
						iLocal_346++;
					}
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_91[0]) && !PED::IS_PED_INJURED(iLocal_91[1]))
			{
				BRAIN::CLEAR_PED_TASKS(iLocal_91[0]);
				BRAIN::CLEAR_PED_TASKS(iLocal_91[1]);
				iLocal_346 = 3;
			}
			break;
		
		case 5:
			if (func_124())
			{
				func_122();
				func_121();
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iLocal_91[1], 0), 0))
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_347) > 15000)
					{
						bVar3 = false;
						iVar4 = CAM::_0x19CAFA3C87F7C2FF();
						if (iVar4 != 0)
						{
							iVar5 = CAM::_0xEE778F8C7E1142E2(iVar4);
							if (iVar5 == 4)
							{
								bVar3 = true;
							}
						}
						if (!bVar3)
						{
							BRAIN::OPEN_SEQUENCE_TASK(&iLocal_99);
							BRAIN::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "driver_enter_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
							BRAIN::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "driver_idle_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
							BRAIN::CLOSE_SEQUENCE_TASK(iLocal_99);
							BRAIN::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_99);
							BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_99);
						}
						if (func_17() == 0)
						{
							if (func_61(&uLocal_173, "REDR2AU", "REDR2_PSM", 4, 0, 0, 0))
							{
								iLocal_347 = MISC::GET_GAME_TIMER();
								iLocal_346++;
							}
						}
						else if (func_17() == 1)
						{
							if (func_61(&uLocal_173, "REDR2AU", "REDR2_PSF", 4, 0, 0, 0))
							{
								iLocal_347 = MISC::GET_GAME_TIMER();
								iLocal_346++;
							}
						}
						else if (func_17() == 2)
						{
							if (func_61(&uLocal_173, "REDR2AU", "REDR2_PST", 4, 0, 0, 0))
							{
								iLocal_347 = MISC::GET_GAME_TIMER() + 14000;
								iLocal_346++;
							}
						}
					}
				}
			}
			break;
		
		case 6:
			func_122();
			func_121();
			if ((MISC::GET_GAME_TIMER() - iLocal_347) > 5000 && func_124())
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iLocal_91[1], 0), 0))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m") > 0.9f)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_idle_m", 3))
							{
								BRAIN::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_exit_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
							}
							BRAIN::TASK_PLAY_ANIM(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
							BRAIN::TASK_PLAY_ANIM(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_outro_f", 2f, -2f, -1, 0, 0, 0, 0, 0);
							iLocal_346++;
						}
					}
				}
			}
			break;
		
		case 7:
			func_122();
			if (func_124())
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.25f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m") > 0.2f)
					{
						ENTITY::APPLY_FORCE_TO_ENTITY(PED::GET_VEHICLE_PED_IS_IN(iLocal_91[0], 0), 0, 0f, 0f, 20f, -0.4f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						iLocal_347 = MISC::GET_GAME_TIMER();
						iLocal_346++;
					}
				}
			}
			break;
		
		case 8:
			func_122();
			if (func_124())
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iLocal_91[1], 0), 0))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.525f)
						{
							BRAIN::TASK_PLAY_ANIM(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
							BRAIN::TASK_PLAY_ANIM(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, 0, 0, 0, 0);
							iLocal_346 = 6;
						}
					}
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_347) > 10000)
			{
				if (!PED::IS_PED_INJURED(iLocal_91[0]) && !PED::IS_PED_INJURED(iLocal_91[1]))
				{
					BRAIN::CLEAR_PED_TASKS(iLocal_91[0]);
					BRAIN::CLEAR_PED_TASKS(iLocal_91[1]);
					iLocal_347 = MISC::GET_GAME_TIMER();
					iLocal_346++;
				}
			}
			break;
	}
}

void func_121()//Position - 0x8421
{
	if (!PED::IS_PED_INJURED(iLocal_91[1]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(iLocal_91[0], 0), 0))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f", 3))
			{
				if ((((ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.15f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.1f) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.35f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.3f)) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.65f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.6f)) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.9f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.85f))
				{
					ENTITY::APPLY_FORCE_TO_ENTITY(PED::GET_VEHICLE_PED_IS_IN(iLocal_91[0], 0), 0, 0f, 0f, 15f, -0.4f, 0f, 0f, 0, 1, 1, 1, 0, 1);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SUSPENSION_SCRIPT_FORCE", PED::GET_VEHICLE_PED_IS_IN(iLocal_91[0], 0), 0, false, 0);
				}
			}
		}
	}
}

void func_122()//Position - 0x8577
{
	RECORDING::_0xEB2D525B57F42B40();
	func_123();
}

void func_123()//Position - 0x8587
{
	Global_17272.f_134 = 1;
}

int func_124()//Position - 0x8595
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_91[1]))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_91[1], 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_91[1], 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_91[0]))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_91[0], iVar0, 0))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2, 0) == iLocal_91[0] && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1, 0) == iLocal_91[1])
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_125(int iParam0)//Position - 0x8612
{
	int iVar0;
	int iVar1;
	
	iVar0 = (PAD::GET_CONTROL_VALUE(2, 195) - 128);
	iVar1 = (PAD::GET_CONTROL_VALUE(2, 196) - 128);
	if (((iVar0 < iParam0 && iVar0 > -iParam0) && iVar1 < iParam0) && iVar1 > -iParam0)
	{
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_126()//Position - 0x8662
{
	if (func_17() == 2)
	{
		if (func_59())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				if (!Global_26005)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("AC_EN_ROUTE_CULT");
					Global_26005 = 1;
					if (!Global_26004)
					{
						Global_26004 = 1;
						return 1;
					}
				}
			}
			else if (Global_26005)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_LEFT_AREA");
				Global_26005 = 0;
			}
		}
	}
	return 0;
}

int func_127(vector3 vParam0)//Position - 0x86DD
{
	if (func_17() == 2)
	{
		if (func_59() && !Global_26003)
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

void func_128()//Position - 0x876A
{
	if (!bLocal_108)
	{
		if ((((((((!func_27("REDR1_SWV") && !func_27("REDR1_COM")) && !func_27("REDR1_BANT1")) && !func_27("REDR1_SIK")) && !func_27("REDR2_DC")) && !func_27("REDR1_OFFR")) && !func_27("REDR2_OFFR")) && !func_27("REDR1_CULT")) && !func_27("REDR2_CULT"))
		{
			func_5(1);
		}
		if ((iLocal_110 && !iLocal_134) && (MISC::GET_GAME_TIMER() - iLocal_171) > 9000)
		{
			if (!func_4())
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_BANT1", 4, 0, 0, 0))
				{
					iLocal_134 = 1;
				}
			}
		}
	}
	if (iLocal_134 && !iLocal_135)
	{
		if (!func_4())
		{
			if (func_17() == 0)
			{
				func_61(&uLocal_173, "REDR1AU", "REDR1_RESPM", 4, 0, 0, 0);
			}
			else if (func_17() == 1)
			{
				func_61(&uLocal_173, "REDR1AU", "REDR1_RESPF", 4, 0, 0, 0);
			}
			else if (func_17() == 2)
			{
				func_61(&uLocal_173, "REDR1AU", "REDR1_RESPT", 4, 0, 0, 0);
			}
			iLocal_149 = MISC::GET_GAME_TIMER() + 6000;
			iLocal_135 = 1;
		}
	}
	if (!bLocal_108)
	{
		if ((iLocal_134 && !iLocal_133) && iLocal_149 < MISC::GET_GAME_TIMER())
		{
			if (!func_4())
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_COM", 4, 0, 0, 0))
				{
					iLocal_135 = 0;
					iLocal_133 = 1;
				}
			}
		}
	}
	else if ((bLocal_108 && !iLocal_132) && iLocal_149 < MISC::GET_GAME_TIMER())
	{
		if (!func_4())
		{
			if (func_61(&uLocal_173, "REDR1AU", "REDR1_BANT2", 4, 0, 0, 0))
			{
				iLocal_135 = 0;
				iLocal_132 = 1;
			}
		}
	}
}

void func_129()//Position - 0x8925
{
	if (func_2() && iLocal_111 < 2)
	{
		if ((PLAYER::GET_TIME_SINCE_PLAYER_HIT_VEHICLE(PLAYER::PLAYER_ID()) > 0 && PLAYER::GET_TIME_SINCE_PLAYER_HIT_VEHICLE(PLAYER::PLAYER_ID()) < 100) || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
		{
			if (!func_27("REDR1_SWV"))
			{
				func_5(0);
				func_62();
				SYSTEM::WAIT(0);
				func_61(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				iLocal_163 += 6;
			}
		}
		func_130(vLocal_160, (MISC::GET_GAME_TIMER() - iLocal_159));
	}
	if (iLocal_163 > 17)
	{
		iLocal_109 = 1;
	}
}

void func_130(vector3 vParam0, int iParam3)//Position - 0x89B6
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (func_2())
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			vVar0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) };
		}
	}
	vVar3 = { vVar0 - vParam0 };
	vVar3 = { func_131(vVar3, iParam3) };
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) && !func_27("REDR1_SWV"))
			{
				if (iLocal_165 == -1)
				{
					iLocal_165 = MISC::GET_GAME_TIMER() + 400;
				}
				else if (iLocal_165 < MISC::GET_GAME_TIMER())
				{
					iLocal_163 += 3;
					func_5(0);
					func_62();
					SYSTEM::WAIT(0);
					func_61(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				}
			}
			else
			{
				iLocal_165 = -1;
			}
		}
	}
	if (vVar3.y > 0.025f)
	{
		iLocal_163++;
		if (!func_27("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(0);
			func_62();
			SYSTEM::WAIT(0);
			func_61(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (vVar3.y < -0.025f)
	{
		iLocal_163++;
		if (!func_27("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(0);
			func_62();
			SYSTEM::WAIT(0);
			func_61(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (vVar3.x > 0.025f)
	{
		iLocal_163++;
		if (!func_27("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(0);
			func_62();
			SYSTEM::WAIT(0);
			func_61(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (vVar3.x < -0.025f)
	{
		iLocal_163++;
		if (!func_27("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(0);
			func_62();
			SYSTEM::WAIT(0);
			func_61(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
}

Vector3 func_131(vector3 vParam0, int iParam3)//Position - 0x8B99
{
	vector3 vVar0;
	
	vVar0.x = (vParam0.x / IntToFloat(iParam3));
	vVar0.y = (vParam0.y / IntToFloat(iParam3));
	vVar0.z = (vParam0.z / IntToFloat(iParam3));
	return vVar0;
}

void func_132()//Position - 0x8BC5
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_91[0]))
	{
		switch (iLocal_111)
		{
			case 0:
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_SIK", 4, 0, 0, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
					{
						VEHICLE::REMOVE_VEHICLE_WINDOW(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
					}
					SYSTEM::SETTIMERB(0);
					iLocal_111++;
				}
				break;
			
			case 1:
				if (SYSTEM::TIMERB() > 3000 || !func_4())
				{
					if (!PED::IS_PED_INJURED(iLocal_91[0]))
					{
						BRAIN::CLEAR_PED_TASKS(iLocal_91[0]);
						BRAIN::TASK_PLAY_ANIM(iLocal_91[0], "random@drunk_driver_1", sLocal_114, 8f, -8f, -1, 0, 0, 0, 0, 0);
						iLocal_111++;
					}
				}
				break;
			
			case 2:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_91[0], "random@drunk_driver_1", sLocal_114, 3))
				{
					fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_91[0], "random@drunk_driver_1", sLocal_114);
					if (fVar0 > 0.243f && fVar0 < 0.28f)
					{
						if (!iLocal_105)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", iLocal_91[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
							iLocal_105 = 1;
						}
					}
					else if (fVar0 > 0.295f && fVar0 < 0.37f)
					{
						if (!iLocal_106)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", iLocal_91[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
							iLocal_106 = 1;
							if (func_17() == 0)
							{
								func_61(&uLocal_173, "REDR1AU", "REDR1_SIKM", 4, 0, 0, 0);
							}
							else if (func_17() == 1)
							{
								func_61(&uLocal_173, "REDR1AU", "REDR1_SIKF", 4, 0, 0, 0);
							}
							else if (func_17() == 2)
							{
								func_61(&uLocal_173, "REDR1AU", "REDR1_SIKT", 4, 0, 0, 0);
							}
						}
					}
					else if (fVar0 > 0.49f && fVar0 < 0.55f)
					{
						if (!iLocal_107)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", iLocal_91[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
							iLocal_107 = 1;
						}
					}
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_91[0], "random@drunk_driver_1", sLocal_114) > 0.8f)
					{
						iLocal_111++;
					}
				}
				break;
			
			case 3:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_91[0], "random@drunk_driver_1", sLocal_114, 3))
				{
				}
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_APO", 4, 0, 0, 0))
				{
					BRAIN::TASK_PLAY_ANIM(iLocal_91[0], "random@drunk_driver_1", sLocal_113, 2f, -4f, -1, 1, 0, 0, 0, 0);
					iLocal_105 = 0;
					iLocal_111++;
				}
				break;
			
			case 4:
				AUDIO::STOP_SOUND(iLocal_112);
				bLocal_108 = true;
				break;
			}
	}
}

void func_133()//Position - 0x8E4F
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_168)
		{
			iLocal_166 = MISC::GET_GAME_TIMER();
			iLocal_168 = 1;
		}
		else
		{
			iLocal_167 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_167 = 0;
		iLocal_168 = 0;
		iLocal_169 = 0;
	}
	if ((iLocal_167 - iLocal_166) > 50000 && !iLocal_169)
	{
		if (iLocal_54 == 1)
		{
			func_62();
			SYSTEM::WAIT(0);
			func_61(&uLocal_173, "REDR1AU", "REDR1_WLK", 4, 0, 0, 0);
		}
		iLocal_169 = 1;
	}
	if ((iLocal_167 - iLocal_166) > 60000 && iLocal_169)
	{
		if (iLocal_54 == 2)
		{
			func_62();
			SYSTEM::WAIT(0);
			func_61(&uLocal_173, "REDR2AU", "REDR2_FU", 4, 0, 0, 0);
		}
		if (!PED::IS_PED_INJURED(iLocal_91[0]) && !PED::IS_PED_INJURED(iLocal_91[1]))
		{
			BRAIN::TASK_WANDER_STANDARD(iLocal_91[0], 1193033728, 0);
			func_64(iLocal_91[0], 120000, 0);
			PED::SET_PED_KEEP_TASK(iLocal_91[0], true);
			if (PED::IS_PED_IN_GROUP(iLocal_91[0]))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_91[0]);
			}
			BRAIN::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_91[1], iLocal_91[0], 0f, 1f, 0f, 1f, -1, 1036831949, 1);
			func_64(iLocal_91[1], 120000, 0);
			PED::SET_PED_KEEP_TASK(iLocal_91[1], true);
			if (PED::IS_PED_IN_GROUP(iLocal_91[1]))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_91[1]);
			}
		}
		func_60();
	}
}

void func_134()//Position - 0x8F98
{
	if (iLocal_54 == 1)
	{
		if (!PED::IS_PED_INJURED(iLocal_91[0]))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91[0], 150f, 150f, 150f, 0, 1, 0))
			{
				func_60();
			}
			if (func_144() || PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_GROUP(iLocal_91[0]))
				{
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_91[0], func_57());
					PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_91[0], 1);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_91[0], 0);
				}
			}
			else if (PED::IS_PED_IN_GROUP(iLocal_91[0]))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_91[0]);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_91[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_91[0], "random@drunk_driver_1", sLocal_113, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_91[0], "random@drunk_driver_1", sLocal_114, 3)) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_91[0]))
					{
						BRAIN::TASK_PLAY_ANIM(iLocal_91[0], "random@drunk_driver_1", sLocal_113, 2f, -4f, -1, 1, 0, 0, 0, 0);
					}
					if (func_147())
					{
						func_56(0);
						iLocal_120 = 0;
					}
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_91[0], "random@drunk_driver_1", sLocal_113, 3))
				{
					BRAIN::STOP_ANIM_PLAYBACK(iLocal_91[0], 0, 0);
				}
			}
			else
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_91[0], 0))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_91[0], "random@drunk_driver_1", sLocal_113, 3))
					{
						BRAIN::STOP_ANIM_PLAYBACK(iLocal_91[0], 0, 0);
					}
				}
				if (func_4() && !iLocal_120)
				{
					func_56(1);
					iLocal_120 = 1;
				}
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91[0], 8f, 8f, 8f, 0, 1, 0) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_155[0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_155[0]));
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_102))
				{
					iLocal_102 = func_137(vLocal_81, 1);
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_155[0]))
				{
					uLocal_155[0] = func_162(iLocal_91[0], 0, 145);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_102))
				{
					HUD::REMOVE_BLIP(&iLocal_102);
				}
			}
		}
	}
	if (iLocal_54 == 2)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(iLocal_94, 0) && !PED::IS_PED_INJURED(iLocal_91[0])) && !PED::IS_PED_INJURED(iLocal_91[1]))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91[0], 150f, 150f, 150f, 0, 1, 0) || !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91[1], 150f, 150f, 150f, 0, 1, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_91[0]))
					{
						if (PED::IS_PED_IN_GROUP(iLocal_91[0]))
						{
							PED::REMOVE_PED_FROM_GROUP(iLocal_91[0]);
						}
						BRAIN::CLEAR_PED_TASKS(iLocal_91[0]);
						BRAIN::TASK_SMART_FLEE_PED(iLocal_91[0], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						func_64(iLocal_91[0], 120000, 0);
						PED::SET_PED_KEEP_TASK(iLocal_91[0], true);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[1]))
				{
					if (!PED::IS_PED_INJURED(iLocal_91[1]))
					{
						if (PED::IS_PED_IN_GROUP(iLocal_91[1]))
						{
							PED::REMOVE_PED_FROM_GROUP(iLocal_91[1]);
						}
						BRAIN::CLEAR_PED_TASKS(iLocal_91[1]);
						BRAIN::TASK_SMART_FLEE_PED(iLocal_91[1], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						func_64(iLocal_91[1], 120000, 0);
						PED::SET_PED_KEEP_TASK(iLocal_91[1], true);
					}
				}
				func_60();
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_94, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_91[0], iLocal_94, 0) && PED::IS_PED_IN_VEHICLE(iLocal_91[1], iLocal_94, 0))
				{
					if (func_147())
					{
						func_56(0);
						iLocal_120 = 0;
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_102))
					{
						iLocal_102 = func_137(vLocal_81, 1);
					}
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_158))
				{
					HUD::REMOVE_BLIP(&iLocal_158);
				}
			}
			else
			{
				if ((func_4() && !iLocal_120) && iLocal_64 > 3)
				{
					func_56(1);
					iLocal_120 = 1;
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_158))
				{
					iLocal_158 = func_145(iLocal_94, 0, 0);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_102))
				{
					HUD::REMOVE_BLIP(&iLocal_102);
				}
			}
		}
	}
}

void func_135()//Position - 0x9397
{
	if (func_17() == 2)
	{
		if (!Global_26002)
		{
			func_136("CULT_BLIP_HELP", -1);
			Global_26002 = 1;
		}
	}
}

void func_136(char* sParam0, int iParam1)//Position - 0x93BB
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

int func_137(vector3 vParam0, bool bParam3)//Position - 0x93D2
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_138(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_138(bool bParam0, float fParam1, float fParam2)//Position - 0x93FE
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_139()//Position - 0x9415
{
	if (!PED::IS_PED_INJURED(iLocal_91[0]))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (!func_144())
			{
				if (PED::IS_PED_IN_GROUP(iLocal_91[0]))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_91[0]);
				}
				if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_91[0], 1227113341) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_91[0], 1227113341) != 0)
				{
					BRAIN::TASK_GO_TO_ENTITY(iLocal_91[0], PLAYER::PLAYER_PED_ID(), -1, 6f, 2f, 1073741824, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_91[0], 0))
				{
					BRAIN::TASK_LEAVE_ANY_VEHICLE(iLocal_91[0], 0, 0);
				}
				if (!iLocal_122)
				{
					if (!func_4())
					{
						func_61(&uLocal_173, "REHH1AU", "REDR1_NO", 4, 0, 0, 0);
						iLocal_122 = 1;
					}
				}
			}
			else
			{
				iLocal_122 = 0;
				if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_91[0], 1227113341) == 1 && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_91[0], 1227113341) == 0)
				{
					BRAIN::CLEAR_PED_TASKS(iLocal_91[0]);
				}
			}
		}
		else if (!PED::IS_PED_IN_GROUP(iLocal_91[0]))
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_91[0], func_57());
			PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_91[0], 1);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_91[0], 0);
		}
	}
}

float func_140(int iParam0, int iParam1, bool bParam2)//Position - 0x9539
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

void func_141()//Position - 0x9597
{
	if (!func_58())
	{
		if (func_17() == 2)
		{
			Global_26000 = 1;
		}
	}
}

void func_142(int iParam0, var uParam1)//Position - 0x95B3
{
	switch (*uParam1)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				BRAIN::OPEN_SEQUENCE_TASK(&iLocal_99);
				BRAIN::TASK_CLEAR_LOOK_AT(0);
				BRAIN::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
				BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
				BRAIN::CLOSE_SEQUENCE_TASK(iLocal_99);
				BRAIN::TASK_PERFORM_SEQUENCE(iParam0, iLocal_99);
				BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_99);
				*uParam1++;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
				{
					*uParam1++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (!PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_143()//Position - 0x966C
{
	if (func_17() == 0)
	{
		if (func_61(&uLocal_173, "REDR1AU", "REDR1_OFFA", 4, 0, 0, 0))
		{
			SYSTEM::SETTIMERA(0);
			iLocal_170++;
		}
	}
	else if (func_17() == 1)
	{
		if (func_61(&uLocal_173, "REDR1AU", "REDR1_OFFB", 4, 0, 0, 0))
		{
			SYSTEM::SETTIMERA(0);
			iLocal_170++;
		}
	}
	else if (func_17() == 2)
	{
		if (func_61(&uLocal_173, "REDR1AU", "REDR1_OFFC", 4, 0, 0, 0))
		{
			SYSTEM::SETTIMERA(0);
			iLocal_170++;
		}
	}
}

int func_144()//Position - 0x96EF
{
	int iVar0;
	
	if (iLocal_54 == 1)
	{
		iVar0 = 1;
	}
	if (iLocal_54 == 2)
	{
		iVar0 = 2;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if ((((((!PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
			{
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) >= iVar0)
				{
					return 1;
				}
			}
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), 0))
		{
			if (((((!VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_145(int iParam0, bool bParam1, bool bParam2)//Position - 0x9848
{
	return func_146(iParam0, !bParam1, bParam2);
}

int func_146(int iParam0, bool bParam1, bool bParam2)//Position - 0x985B
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_138(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_138(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_138(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_147()//Position - 0x98FF
{
	if (Global_16877 == 1)
	{
		return 1;
	}
	return 0;
}

void func_148()//Position - 0x9916
{
	if (!PED::IS_PED_INJURED(iLocal_91[0]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91[0], 30f, 30f, 30f, 0, 1, 0))
		{
			if (!iLocal_115)
			{
				if (func_61(&uLocal_173, "REDR2AU", "REDR2_DCB", 4, 0, 0, 0))
				{
					iLocal_115 = 1;
				}
			}
			if (!iLocal_116)
			{
				if (func_61(&uLocal_173, "REDR2AU", "REDR2_DCC", 4, 0, 0, 0))
				{
					iLocal_116 = 1;
				}
			}
		}
	}
}

void func_149()//Position - 0x9987
{
	if (HUD::DOES_BLIP_EXIST(iLocal_151))
	{
		HUD::REMOVE_BLIP(&iLocal_151);
	}
	iLocal_63 = 0;
	while (iLocal_63 <= (iLocal_90 - 1))
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_155[iLocal_63]))
		{
			uLocal_155[iLocal_63] = func_162(iLocal_91[iLocal_63], 0, 145);
			HUD::_0x75A16C3DA34F1245(uLocal_155[iLocal_63], false);
		}
		iLocal_63++;
	}
}

void func_150()//Position - 0x99DF
{
	AUDIO::START_PRELOADED_CONVERSATION();
	Global_16858 = 0;
}

void func_151(bool bParam0)//Position - 0x99EF
{
	if (bParam0)
	{
		StringCopy(&Global_105621, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_105615 = 1;
	}
	else
	{
		StringCopy(&Global_105621, "NULL", 24);
		Global_105615 = 0;
	}
}

int func_152(int iParam0)//Position - 0x9A1B
{
	if (func_155())
	{
		Global_106555 = 1;
		Global_106552 = MISC::GET_GAME_TIMER();
		if (func_43(Global_106554))
		{
			func_153(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_43(Global_106554))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_153(int iParam0)//Position - 0x9A6E
{
	switch (iParam0)
	{
		case 0:
			if (Global_106565.f_24989.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_136(func_154(iParam0), -1);
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
					func_136(func_154(iParam0), -1);
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
					func_136(func_154(iParam0), -1);
					Global_106565.f_24989.f_4++;
					MISC::SET_BIT(&Global_106561, 2);
				}
			}
			break;
	}
}

char* func_154(int iParam0)//Position - 0x9B4F
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

int func_155()//Position - 0x9B91
{
	switch (func_156(&Global_25824, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_156(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x9BC7
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
		if (func_160(0))
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
		if (!func_158(iParam2))
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
			func_157(uParam0, iParam4);
		}
	}
	return 2;
}

void func_157(var uParam0, int iParam1)//Position - 0x9CFE
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

bool func_158(int iParam0)//Position - 0x9D4D
{
	return func_159(iParam0, Global_36425);
}

int func_159(int iParam0, int iParam1)//Position - 0x9D5E
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

int func_160(int iParam0)//Position - 0x9F3F
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_158(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_161(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x9F61
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_11(sParam2, iParam3, 0);
}

int func_162(int iParam0, bool bParam1, int iParam2)//Position - 0x9FB4
{
	int iVar0;
	
	iVar0 = func_146(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_106565.f_28044[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_106565.f_28044[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

void func_163()//Position - 0xA006
{
	if (func_165())
	{
		sLocal_113 = "drunk_idle_van";
		sLocal_114 = "vomit_van";
	}
	else if (func_164())
	{
		sLocal_113 = "drunk_idle_low";
		sLocal_114 = "vomit_low";
	}
	else
	{
		sLocal_113 = "drunk_idle";
		sLocal_114 = "vomit_outside";
	}
}

int func_164()//Position - 0xA046
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_91[0], 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(iLocal_91[0], 0), 0))
		{
			iVar0 = VEHICLE::GET_VEHICLE_LAYOUT_HASH(PED::GET_VEHICLE_PED_IS_IN(iLocal_91[0], 0));
			if ((((((((((iVar0 == -2066252141 || iVar0 == 925191417) || iVar0 == -782720499) || iVar0 == 1105669833) || iVar0 == 542797648) || iVar0 == 68566729) || iVar0 == -1887744178) || iVar0 == -1150063973) || iVar0 == 1630950849) || iVar0 == -463340997) || iVar0 == 2033852426)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_165()//Position - 0xA11A
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_91[0], 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(iLocal_91[0], 0), 0))
		{
			iVar0 = VEHICLE::GET_VEHICLE_LAYOUT_HASH(PED::GET_VEHICLE_PED_IS_IN(iLocal_91[0], 0));
			if (((((((((((iVar0 == -1965057835 || iVar0 == 919485892) || iVar0 == -1838563680) || iVar0 == 1768419516) || iVar0 == 1576485197) || iVar0 == 929009548) || iVar0 == -497732145) || iVar0 == -1659990386) || iVar0 == 434478421) || iVar0 == 1816176348) || iVar0 == 1710903184) || iVar0 == 1663892749)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_166()//Position - 0xA1FC
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

void func_167()//Position - 0xA269
{
	if (!iLocal_61)
	{
		func_169(39, 1);
		func_169(40, 1);
		func_169(41, 1);
		func_169(42, 1);
		func_169(43, 1);
		func_169(44, 1);
		MISC::CLEAR_AREA(vLocal_68, 8f, 1, 0, 0, false);
		PED::ADD_SCENARIO_BLOCKING_AREA(vLocal_68 - Vector(8f, 8f, 8f), vLocal_68 + Vector(8f, 8f, 8f), 0, 1, 1, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_76 - Vector(10f, 15f, 15f), vLocal_76 + Vector(10f, 15f, 15f), false, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_81 - Vector(10f, 15f, 15f), vLocal_81 + Vector(10f, 15f, 15f), false, 1);
		MISC::SET_BIT(&uLocal_150, 5);
		if (func_17() == 0)
		{
			func_168(&uLocal_173, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		else if (func_17() == 1)
		{
			func_168(&uLocal_173, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		else if (func_17() == 2)
		{
			func_168(&uLocal_173, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		PED::ADD_RELATIONSHIP_GROUP("rghDrunkPeds", &iLocal_100);
		iLocal_94 = VEHICLE::CREATE_VEHICLE(iLocal_98, vLocal_76, fLocal_79, true, true, false);
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_94);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_94, 1084227584);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_98, true);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_94, 3);
		VEHICLE::_0x2B6747FAA9DB9D6B(iLocal_94, 1);
		iLocal_80 = ENTITY::GET_ENTITY_HEALTH(iLocal_94);
		iLocal_91[0] = PED::CREATE_PED(26, iLocal_96, vLocal_68, fLocal_71, 1, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_91[0], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_91[0], iLocal_100);
		PED::SET_PED_CONFIG_FLAG(iLocal_91[0], 185, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_91[0], 65536, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_96);
		AUDIO::STOP_PED_SPEAKING(iLocal_91[0], true);
		iLocal_91[1] = PED::CREATE_PED(26, iLocal_97, vLocal_72, fLocal_75, 1, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_91[1], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_91[1], iLocal_100);
		PED::SET_PED_CONFIG_FLAG(iLocal_91[1], 185, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_91[1], 65536, true);
		AUDIO::STOP_PED_SPEAKING(iLocal_91[1], true);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_100, 1862763509);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_97);
		if (iLocal_54 == 1)
		{
			BRAIN::TASK_PLAY_ANIM(iLocal_91[0], "random@drunk_driver_1", "drunk_driver_stand_loop_dd1", 8f, -2f, -1, 1, 0, 0, 0, 0);
			BRAIN::TASK_PLAY_ANIM(iLocal_91[1], "random@drunk_driver_1", "drunk_driver_stand_loop_dd2", 8f, -2f, -1, 1, 0, 0, 0, 0);
			PED::SET_PED_MOVEMENT_CLIPSET(iLocal_91[0], "MOVE_M@DRUNK@VERYDRUNK", 1048576000);
			PED::SET_PED_MOVEMENT_CLIPSET(iLocal_91[1], "MOVE_M@DRUNK@MODERATEDRUNK", 1048576000);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_91[0], 0, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_91[0], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_91[0], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_91[1], 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_91[1], 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_91[1], 4, 0, 1, 0);
			VEHICLE::REMOVE_VEHICLE_WINDOW(iLocal_94, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_91[0], 206, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_91[0], 299, true);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_91[0], false);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_91[0], "REDR1Drunk1_AI_Drunk");
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_91[1], "A_M_Y_VINEWOOD_01_BLACK_MINI_01");
			func_168(&uLocal_173, 3, iLocal_91[0], "REDR1Drunk1", 0, 1);
			func_168(&uLocal_173, 4, iLocal_91[1], "REDR1Drunk2", 0, 1);
		}
		if (iLocal_54 == 2)
		{
			PED::ADD_SCENARIO_BLOCKING_AREA(vLocal_81 - Vector(10f, 50f, 30f), vLocal_81 + Vector(10f, 50f, 30f), 0, 1, 1, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_94, true);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_91[1], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_91[1], 2, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_91[1], 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_91[1], 4, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_91[1], 8, 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_91[0], 134, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_91[1], 134, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_91[0], 26, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_91[1], 26, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_91[0], 206, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_91[1], 206, true);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_91[0], false);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_91[1], false);
			BRAIN::TASK_START_SCENARIO_IN_PLACE(iLocal_91[0], "WORLD_HUMAN_BUM_STANDING", 0, 0);
			BRAIN::TASK_LOOK_AT_ENTITY(iLocal_91[0], iLocal_91[1], -1, 2060, 4);
			BRAIN::TASK_START_SCENARIO_IN_PLACE(iLocal_91[1], "WORLD_HUMAN_BUM_STANDING", 0, 0);
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_91[1], 0);
			BRAIN::TASK_LOOK_AT_ENTITY(iLocal_91[1], iLocal_91[0], -1, 2060, 4);
			PED::SET_PED_MOVEMENT_CLIPSET(iLocal_91[0], "MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP", 1048576000);
			PED::SET_PED_MOVEMENT_CLIPSET(iLocal_91[1], "MOVE_M@DRUNK@SLIGHTLYDRUNK", 1048576000);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_91[0], "A_M_Y_BeachVesp_01_White_Mini_01");
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_91[1], "A_F_Y_EastSA_03_Latino_FULL_01");
			func_168(&uLocal_173, 3, iLocal_91[0], "REDR2DrunkM", 0, 1);
			func_168(&uLocal_173, 4, iLocal_91[1], "REDR2DrunkF", 0, 1);
		}
		iLocal_61 = 1;
	}
}

void func_168(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xA747
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

void func_169(int iParam0, bool bParam1)//Position - 0xA7E2
{
	if (bParam1)
	{
		if (!func_173(iParam0, 2, 1))
		{
			func_172(iParam0, 2, 1);
		}
	}
	else if (func_173(iParam0, 2, 1))
	{
		func_170(iParam0, 2, 1);
	}
}

void func_170(int iParam0, int iParam1, bool bParam2)//Position - 0xA819
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
		if (func_38() == 0)
		{
			iVar0 = func_83(func_171(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_79(func_171(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_106565.f_668[iParam0]), iParam1);
	}
}

int func_171(int iParam0)//Position - 0xA88B
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

void func_172(int iParam0, int iParam1, bool bParam2)//Position - 0xABAC
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
		if (func_38() == 0)
		{
			iVar0 = func_83(func_171(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_79(func_171(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_106565.f_668[iParam0]), iParam1);
	}
}

int func_173(int iParam0, int iParam1, bool bParam2)//Position - 0xAC1E
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
		if (func_38() == 0)
		{
			return MISC::IS_BIT_SET(func_83(func_171(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_106565.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_174()//Position - 0xAC88
{
	STREAMING::REQUEST_MODEL(iLocal_96);
	STREAMING::REQUEST_MODEL(iLocal_98);
	STREAMING::REQUEST_MODEL(iLocal_97);
	if (iLocal_54 == 1)
	{
		STREAMING::REQUEST_PTFX_ASSET();
		STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_1");
		STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@VERYDRUNK");
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Taxi_Vomit", false, -1);
	}
	else if (iLocal_54 == 2)
	{
		STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_2");
		STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@SLIGHTLYDRUNK");
		STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
	}
	STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@MODERATEDRUNK");
	if (((STREAMING::HAS_MODEL_LOADED(iLocal_96) && STREAMING::HAS_MODEL_LOADED(iLocal_98)) && STREAMING::HAS_ANIM_SET_LOADED("MOVE_M@DRUNK@MODERATEDRUNK")) && STREAMING::HAS_MODEL_LOADED(iLocal_97))
	{
		if (iLocal_54 == 1)
		{
			if (((STREAMING::HAS_PTFX_ASSET_LOADED() && STREAMING::HAS_ANIM_DICT_LOADED("random@drunk_driver_1")) && STREAMING::HAS_ANIM_SET_LOADED("MOVE_M@DRUNK@VERYDRUNK")) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CONSTRUCTION_ACCIDENT_1", false, -1))
			{
				iLocal_56 = 1;
			}
		}
		else if (iLocal_54 == 2)
		{
			if ((STREAMING::HAS_ANIM_DICT_LOADED("random@drunk_driver_2") && STREAMING::HAS_ANIM_DICT_LOADED("MOVE_M@DRUNK@SLIGHTLYDRUNK")) && STREAMING::HAS_ANIM_DICT_LOADED("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP"))
			{
				iLocal_56 = 1;
			}
		}
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_96);
		STREAMING::REQUEST_MODEL(iLocal_98);
		STREAMING::REQUEST_MODEL(iLocal_97);
		if (iLocal_54 == 1)
		{
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_1");
			STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@VERYDRUNK");
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Taxi_Vomit", false, -1);
		}
		else if (iLocal_54 == 2)
		{
			STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_2");
			STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@SLIGHTLYDRUNK");
			STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
		}
		STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@MODERATEDRUNK");
	}
}

void func_175()//Position - 0xADE9
{
	if (iLocal_54 == 1)
	{
		vLocal_152 = { -1018.238f, -1350.101f, 4.475f };
		iLocal_90 = 2;
		iLocal_96 = joaat("a_m_y_beachvesp_01");
		iLocal_97 = joaat("a_m_y_beachvesp_02");
		vLocal_68 = { -1016.762f, -1356.459f, 4.5531f };
		fLocal_71 = 247.8087f;
		vLocal_72 = { -1015.572f, -1357.081f, 4.552f };
		fLocal_75 = 66.3861f;
		vLocal_76 = { -1027.762f, -1341.644f, 4.4614f };
		fLocal_79 = 76.9418f;
		iLocal_98 = joaat("baller2");
		vLocal_81 = { 160.8892f, -111.4167f, 61.2999f };
		vLocal_84 = { 159.2191f, -117.0664f, 61.2999f };
		bLocal_60 = true;
	}
	if (iLocal_54 == 2)
	{
		vLocal_152 = { 1893.856f, 3714.346f, 31.7771f };
		iLocal_90 = 2;
		iLocal_96 = joaat("a_m_y_genstreet_01");
		iLocal_97 = joaat("a_f_y_hipster_03");
		vLocal_68 = { 1893.856f, 3714.346f, 31.7771f };
		fLocal_71 = 252.0142f;
		vLocal_72 = { 1894.763f, 3714.16f, 31.7605f };
		fLocal_75 = 86.1102f;
		vLocal_76 = { 1888.256f, 3717.189f, 31.8394f };
		fLocal_79 = 299.4672f;
		iLocal_98 = joaat("emperor");
		vLocal_81 = { 1120.551f, 2647.307f, 36.9963f };
		vLocal_84 = { 1121.866f, 2641.707f, 37.1487f };
		bLocal_60 = true;
	}
}

int func_176()//Position - 0xAF41
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vLocal_44) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_187())
		{
			return 0;
		}
	}
	if (func_183())
	{
		return 1;
	}
	if (func_177(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_177(float fParam0, bool bParam1)//Position - 0xAFC7
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
		if (func_19(func_17()))
		{
			iVar36 = func_48();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (MISC::IS_BIT_SET(Global_106565.f_18568[iVar32 /*6*/], 2) && !MISC::IS_BIT_SET(Global_106565.f_18568[iVar32 /*6*/], 3))
				{
					func_178(iVar32, &Var0);
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

void func_178(int iParam0, var uParam1)//Position - 0xB07E
{
	switch (iParam0)
	{
		case 0:
			func_179(uParam1, "Abigail1", func_181(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 1:
			func_179(uParam1, "Abigail2", func_181(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 2:
			func_179(uParam1, "Barry1", func_181(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 3:
			func_179(uParam1, "Barry2", func_181(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 4:
			func_179(uParam1, "Barry3", func_181(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 5:
			func_179(uParam1, "Barry3A", func_181(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 6:
			func_179(uParam1, "Barry3C", func_181(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 7:
			func_179(uParam1, "Barry4", func_181(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_180(iParam0), 0, 0);
			break;
		
		case 8:
			func_179(uParam1, "Dreyfuss1", func_181(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 9:
			func_179(uParam1, "Epsilon1", func_181(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 10:
			func_179(uParam1, "Epsilon2", func_181(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 11:
			func_179(uParam1, "Epsilon3", func_181(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 12:
			func_179(uParam1, "Epsilon4", func_181(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 13:
			func_179(uParam1, "Epsilon5", func_181(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 14:
			func_179(uParam1, "Epsilon6", func_181(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 15:
			func_179(uParam1, "Epsilon7", func_181(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 16:
			func_179(uParam1, "Epsilon8", func_181(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 17:
			func_179(uParam1, "Extreme1", func_181(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 18:
			func_179(uParam1, "Extreme2", func_181(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 19:
			func_179(uParam1, "Extreme3", func_181(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 20:
			func_179(uParam1, "Extreme4", func_181(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 21:
			func_179(uParam1, "Fanatic1", func_181(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_180(iParam0), 1, 0);
			break;
		
		case 22:
			func_179(uParam1, "Fanatic2", func_181(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_180(iParam0), 1, 0);
			break;
		
		case 23:
			func_179(uParam1, "Fanatic3", func_181(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_180(iParam0), 0, 1);
			break;
		
		case 24:
			func_179(uParam1, "Hao1", func_181(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_180(iParam0), 0, 1);
			break;
		
		case 25:
			func_179(uParam1, "Hunting1", func_181(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 26:
			func_179(uParam1, "Hunting2", func_181(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 27:
			func_179(uParam1, "Josh1", func_181(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 28:
			func_179(uParam1, "Josh2", func_181(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 29:
			func_179(uParam1, "Josh3", func_181(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 30:
			func_179(uParam1, "Josh4", func_181(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 31:
			func_179(uParam1, "Maude1", func_181(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 32:
			func_179(uParam1, "Minute1", func_181(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 33:
			func_179(uParam1, "Minute2", func_181(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 34:
			func_179(uParam1, "Minute3", func_181(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 35:
			func_179(uParam1, "MrsPhilips1", func_181(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 36:
			func_179(uParam1, "MrsPhilips2", func_181(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 37:
			func_179(uParam1, "Nigel1", func_181(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 38:
			func_179(uParam1, "Nigel1A", func_181(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 39:
			func_179(uParam1, "Nigel1B", func_181(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_180(iParam0), 1, 1);
			break;
		
		case 40:
			func_179(uParam1, "Nigel1C", func_181(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_180(iParam0), 1, 1);
			break;
		
		case 41:
			func_179(uParam1, "Nigel1D", func_181(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_180(iParam0), 1, 1);
			break;
		
		case 42:
			func_179(uParam1, "Nigel2", func_181(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 43:
			func_179(uParam1, "Nigel3", func_181(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 44:
			func_179(uParam1, "Omega1", func_181(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 45:
			func_179(uParam1, "Omega2", func_181(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 46:
			func_179(uParam1, "Paparazzo1", func_181(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 47:
			func_179(uParam1, "Paparazzo2", func_181(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 48:
			func_179(uParam1, "Paparazzo3", func_181(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 49:
			func_179(uParam1, "Paparazzo3A", func_181(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 50:
			func_179(uParam1, "Paparazzo3B", func_181(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 51:
			func_179(uParam1, "Paparazzo4", func_181(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 52:
			func_179(uParam1, "Rampage1", func_181(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 54:
			func_179(uParam1, "Rampage3", func_181(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 55:
			func_179(uParam1, "Rampage4", func_181(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 56:
			func_179(uParam1, "Rampage5", func_181(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 53:
			func_179(uParam1, "Rampage2", func_181(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 57:
			func_179(uParam1, "TheLastOne", func_181(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 58:
			func_179(uParam1, "Tonya1", func_181(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 59:
			func_179(uParam1, "Tonya2", func_181(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 60:
			func_179(uParam1, "Tonya3", func_181(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 61:
			func_179(uParam1, "Tonya4", func_181(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 62:
			func_179(uParam1, "Tonya5", func_181(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_179(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0xC1F4
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

int func_180(int iParam0)//Position - 0xC285
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

struct<2> func_181(int iParam0)//Position - 0xC5CB
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_182(iParam0) };
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

struct<2> func_182(int iParam0)//Position - 0xC601
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

int func_183()//Position - 0xCA4C
{
	if (func_186() && !func_187())
	{
		return 1;
	}
	if (func_185() && func_184())
	{
		return 1;
	}
	return 0;
}

bool func_184()//Position - 0xCA7E
{
	return Global_106283 > 0;
}

int func_185()//Position - 0xCA8C
{
	if (Global_90634 != -1)
	{
		return 1;
	}
	return 0;
}

int func_186()//Position - 0xCAA1
{
	if (Global_90634 != -1)
	{
		return MISC::IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 20);
	}
	return 0;
}

int func_187()//Position - 0xCAC7
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

int func_188()//Position - 0xCAE4
{
	if (!func_158(5))
	{
		return 1;
	}
	if (func_183())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_187())
		{
			return 0;
		}
	}
	if (func_177(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_189()//Position - 0xCB46
{
	if ((Global_106554 == func_52() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_106555)
	{
		return 1;
	}
	return 0;
}

void func_190(int iParam0)//Position - 0xCB71
{
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_192(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_106551 = 0;
	func_191();
}

void func_191()//Position - 0xCBA7
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

void func_192(int iParam0)//Position - 0xCBE4
{
	Global_106554 = iParam0;
}

int func_193(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xCBF2
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
		iParam3 = func_52();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_234())
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
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_187())
			{
				return 0;
			}
		}
		if (!Global_106565.f_9079)
		{
			return 0;
		}
		if (func_33(0))
		{
			return 0;
		}
		if (func_183())
		{
			return 0;
		}
		if (func_233())
		{
			return 0;
		}
		if (Global_106554 != -1)
		{
			return 0;
		}
		if (func_19(func_17()))
		{
			if (func_177(100f, 1) != -1)
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
		if (!func_232(iParam3))
		{
			return 0;
		}
		if (func_19(func_17()))
		{
			if (func_231(func_17()) == 4 || func_231(func_17()) == 5)
			{
				return 0;
			}
		}
		if (func_19(func_17()))
		{
			if (!func_230(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_229(Global_106565.f_24989.f_43[iParam3]))
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
		if (func_228())
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
		if (!func_219(4))
		{
			return 0;
		}
		if (!func_158(5))
		{
			return 0;
		}
		if (func_218(iParam3, iParam4) && !bParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_218(0, 0))
		{
			return 0;
		}
		if (Global_25911)
		{
			return 0;
		}
		if (func_232(30) && !func_218(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_19(func_17()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_106565.f_2357.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_106565.f_2357.f_539.f_2296[iVar4];
				if (func_217(iVar8))
				{
					if (func_195(iVar4))
					{
						if (!func_194(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vVar5) < (210f * 210f))
							{
								if (func_17() != iVar4)
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

bool func_194(vector3 vParam0, vector3 vParam3, bool bParam6)//Position - 0xCF8C
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_195(int iParam0)//Position - 0xCFD3
{
	int iVar0;
	
	iVar0 = Global_106565.f_2357.f_539.f_2296[iParam0];
	return func_196(iVar0);
}

int func_196(int iParam0)//Position - 0xCFF4
{
	return func_197(iParam0, 1);
}

int func_197(int iParam0, int iParam1)//Position - 0xD003
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_217(iParam0))
	{
		return 0;
	}
	func_198(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_198(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xD056
{
	func_199(func_210(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_199(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xD074
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_209(iParam0, iParam1))
	{
		iVar0 = func_208(iParam1);
		iVar1 = func_206(iParam0);
		iVar2 = (func_206(iParam0) - func_206(iParam1));
		iVar3 = (func_208(iParam0) - func_208(iParam1));
		iVar4 = (func_205(iParam0) - func_205(iParam1));
		iVar5 = (func_204(iParam0) - func_204(iParam1));
		iVar6 = (func_203(iParam0) - func_203(iParam1));
		iVar7 = (func_202(iParam0) - func_202(iParam1));
	}
	else
	{
		iVar0 = func_208(iParam0);
		iVar1 = func_206(iParam1);
		iVar2 = (func_206(iParam1) - func_206(iParam0));
		iVar3 = (func_208(iParam1) - func_208(iParam0));
		iVar4 = (func_205(iParam1) - func_205(iParam0));
		iVar5 = (func_204(iParam1) - func_204(iParam0));
		iVar6 = (func_203(iParam1) - func_203(iParam0));
		iVar7 = (func_202(iParam1) - func_202(iParam0));
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
		iVar4 = (iVar4 + func_201(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_200(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_200(float fParam0, float fParam1, float fParam2)//Position - 0xD275
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

int func_201(int iParam0, int iParam1)//Position - 0xD2B7
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

int func_202(int iParam0)//Position - 0xD359
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_203(int iParam0)//Position - 0xD36C
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_204(int iParam0)//Position - 0xD37F
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_205(int iParam0)//Position - 0xD392
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_206(int iParam0)//Position - 0xD3A4
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_207(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_207(bool bParam0, int iParam1, int iParam2)//Position - 0xD3C9
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_208(int iParam0)//Position - 0xD3E0
{
	return iParam0 & 15;
}

int func_209(int iParam0, int iParam1)//Position - 0xD3ED
{
	int iVar0;
	int iVar1;
	
	if (!func_217(iParam1) || !func_217(iParam0))
	{
		return 1;
	}
	iVar0 = func_206(iParam0);
	iVar1 = func_206(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_208(iParam0);
	iVar1 = func_208(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_205(iParam0);
	iVar1 = func_205(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
	iVar1 = func_204(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_203(iParam0);
	iVar1 = func_203(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_202(iParam0);
	iVar1 = func_202(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_210()//Position - 0xD4F9
{
	var uVar0;
	
	func_216(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_215(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_214(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_213(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_212(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_211(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_211(var uParam0, int iParam1)//Position - 0xD53F
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

void func_212(var uParam0, int iParam1)//Position - 0xD5C5
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_213(var uParam0, int iParam1)//Position - 0xD5F8
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_208(*uParam0);
	iVar1 = func_206(*uParam0);
	if (iParam1 < 1 || iParam1 > func_201(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_214(var uParam0, int iParam1)//Position - 0xD649
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_215(var uParam0, int iParam1)//Position - 0xD683
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_216(var uParam0, int iParam1)//Position - 0xD6BE
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_217(int iParam0)//Position - 0xD6FA
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
	iVar0 = func_202(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_203(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_204(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_206(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_208(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_205(iParam0);
	if (iVar5 < 1 || iVar5 > func_201(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_218(int iParam0, int iParam1)//Position - 0xD7D6
{
	if (MISC::IS_BIT_SET(Global_106565.f_24989.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_219(int iParam0)//Position - 0xD7F9
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_17();
				if (!func_19(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_227()) || Global_105612) || Global_25767) || func_226()) || func_24(8, -1)) || func_225()) || func_224()) || func_223()) || func_222()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_227()) || Global_25767) || func_226()) || func_24(8, -1)) || func_223()) || func_225()) || func_224()) || func_222()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_227()) || Global_105612) || Global_25767) || func_226()) || func_24(8, -1)) || func_223()) || func_225()) || func_224()) || func_222()) || Global_106565.f_7682.f_919[iVar0] == 5) || Global_36972 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_227()) || Global_105612) || Global_25767) || func_226()) || func_24(8, -1)) || func_225()) || func_224()) || func_222()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_227() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_24(8, -1)) || func_222()) || func_221()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_24(8, -1) || func_225()) || func_224()) || func_221()) || func_220())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_227()) || Global_25767) || func_226()) || func_24(8, -1)) || func_224()) || func_223()) || func_222()) || Global_106565.f_7682.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_227()) || func_224()) || Global_105612) || Global_25767) || func_226()) || Global_37584) || func_24(8, -1)) || func_223()) || func_221()) || func_222()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_227()) || Global_105612) || Global_25767) || func_226()) || func_24(8, -1)) || func_223()) || func_221()) || func_225()) || func_224()) || func_222())
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

var func_220()//Position - 0xDF16
{
	return Global_93721.f_1;
}

int func_221()//Position - 0xDF24
{
	if (Global_90634 != -1)
	{
		return MISC::IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 13);
	}
	return 0;
}

int func_222()//Position - 0xDF4A
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_223()//Position - 0xDF64
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

bool func_224()//Position - 0xDF8E
{
	return Global_93734.f_340 > 0;
}

bool func_225()//Position - 0xDF9F
{
	return Global_93734.f_339 > 0;
}

var func_226()//Position - 0xDFB0
{
	return Global_1312867;
}

int func_227()//Position - 0xDFBC
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

int func_228()//Position - 0xDFD8
{
	func_16();
	if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_229(int iParam0)//Position - 0xE000
{
	return func_209(func_210(), iParam0);
}

int func_230(int iParam0, int iParam1, int iParam2)//Position - 0xE012
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_17();
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

int func_231(int iParam0)//Position - 0xE0F6
{
	if (!func_19(iParam0))
	{
		return 7;
	}
	return Global_106565.f_7682.f_919[iParam0];
}

bool func_232(int iParam0)//Position - 0xE11A
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_234())
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

int func_233()//Position - 0xE178
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

int func_234()//Position - 0xE1BC
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

void func_235()//Position - 0xE277
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_enter_m", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_idle_m", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_exit_m", 3))
		{
			BRAIN::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
	if (iLocal_172)
	{
		func_272(0);
		if (Global_26004)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		func_271();
		func_6();
		AUDIO::_0xB542DE8C3D1CB210(0);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_76 - Vector(10f, 15f, 15f), vLocal_76 + Vector(10f, 15f, 15f), true, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_81 - Vector(10f, 15f, 15f), vLocal_81 + Vector(10f, 15f, 15f), true, 1);
		func_151(0);
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true, 0);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_95, 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_95, 0) && func_140(PLAYER::PLAYER_PED_ID(), iLocal_95, 1) > 50f)
			{
				func_247(iLocal_95, 0, 145);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_91[0]))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_91[0], 317, true);
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_91[0], 0))
				{
					PED::RESET_PED_LAST_VEHICLE(iLocal_91[0]);
				}
				if (PED::IS_PED_IN_GROUP(iLocal_91[0]))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_91[0]);
				}
			}
		}
		iLocal_63 = 0;
		while (iLocal_63 <= (iLocal_90 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[iLocal_63]))
			{
				if (!PED::IS_PED_INJURED(iLocal_91[iLocal_63]))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_91[iLocal_63], 317, true);
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_91[iLocal_63], 0))
					{
						PED::RESET_PED_LAST_VEHICLE(iLocal_91[iLocal_63]);
					}
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_91[iLocal_63], true);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_100, 1862763509);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_91[iLocal_63], false);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_91[iLocal_63]));
			}
			iLocal_63++;
		}
		iLocal_63 = 0;
		while (iLocal_63 <= (iLocal_90 - 1))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_155[iLocal_63]))
			{
				HUD::REMOVE_BLIP(&(uLocal_155[iLocal_63]));
			}
			iLocal_63++;
		}
		if (iLocal_54 == 1)
		{
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(42.7808f, -1324.405f, -10f, 98.245f, -1277.174f, 10f, true);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_127))
		{
			if (CAM::IS_CAM_ACTIVE(iLocal_127))
			{
				CAM::SET_CAM_ACTIVE(iLocal_127, false);
			}
		}
	}
	func_236(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_236(int iParam0)//Position - 0xE50B
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_189())
	{
		func_240(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_106556 = MISC::GET_GAME_TIMER();
		func_239(30000);
		StringCopy(&cVar0, func_238(Global_106554, 1), 64);
		if (func_51(Global_106554) > 0)
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
	func_237(&Global_25824);
	Global_106555 = 0;
	func_192(-1);
}

void func_237(var uParam0)//Position - 0xE5C0
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

char* func_238(int iParam0, bool bParam1)//Position - 0xE5FD
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

void func_239(int iParam0)//Position - 0xE846
{
	Global_36976 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_240(int iParam0)//Position - 0xE858
{
	func_241(iParam0, 0, func_246(iParam0));
}

void func_241(int iParam0, int iParam1, int iParam2)//Position - 0xE86D
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_210();
	func_244(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_243(iParam0, &uVar0);
	Var1 = { func_242(&uVar0) };
}

struct<16> func_242(var uParam0)//Position - 0xE89C
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_204(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_203(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_202(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_205(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_208(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_206(*uParam0), 64);
	return Var0;
}

void func_243(int iParam0, var uParam1)//Position - 0xE96B
{
	Global_106565.f_24989.f_43[iParam0] = *uParam1;
}

void func_244(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xE983
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_206(*uParam0);
	iVar1 = func_208(*uParam0);
	iVar2 = func_205(*uParam0);
	iVar3 = func_204(*uParam0);
	iVar4 = func_203(*uParam0);
	iVar5 = func_202(*uParam0);
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
	iVar6 = func_201(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_201(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_245(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_245(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xEB05
{
	func_216(uParam0, iParam1);
	func_215(uParam0, iParam2);
	func_214(uParam0, iParam3);
	func_212(uParam0, iParam5);
	func_213(uParam0, iParam4);
	func_211(uParam0, iParam6);
}

int func_246(int iParam0)//Position - 0xEB3D
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

int func_247(int iParam0, int iParam1, int iParam2)//Position - 0xECE0
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
	func_248(iParam0, iParam2);
	return 1;
}

void func_248(int iParam0, int iParam1)//Position - 0xED20
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_254(iParam0))
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
	func_249(iParam0, &(Global_106565.f_32743.f_5510));
}

void func_249(int iParam0, var uParam1)//Position - 0xEF22
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_253(uParam1);
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
		if (uParam1->f_65 == -1 && !func_252(uParam1->f_66))
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
		func_251(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_250(iVar0 + 1));
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

int func_250(int iParam0)//Position - 0xF1CD
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

int func_251(int iParam0, var uParam1, var uParam2)//Position - 0xF27D
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

int func_252(int iParam0)//Position - 0xF470
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

void func_253(var uParam0)//Position - 0xF490
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

int func_254(int iParam0)//Position - 0xF53F
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_269(iParam0, 0, 0)) || func_269(iParam0, 1, 0)) || func_269(iParam0, 2, 0)) || func_268(iParam0) != 145) || func_267(iParam0)) || func_266(iParam0)) || func_265(iParam0)) || func_264(iParam0)) || !func_255(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_266(iParam0))
		{
		}
		if (func_266(iParam0))
		{
		}
		if (func_269(iParam0, 0, 0))
		{
		}
		if (func_269(iParam0, 1, 0))
		{
		}
		if (func_269(iParam0, 2, 0))
		{
		}
		if (func_268(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_255(int iParam0)//Position - 0xF61C
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_256(iParam0, 0))
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

int func_256(int iParam0, bool bParam1)//Position - 0xF7CD
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
		if (!func_234())
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
		if ((((!func_263() && !func_262()) && !func_261()) && !func_260()) && !func_234())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_261())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_259(iParam0))
		{
			return 0;
		}
	}
	if (!func_257(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_257(int iParam0)//Position - 0xF94D
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_258())
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

int func_258()//Position - 0xFA19
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

int func_259(int iParam0)//Position - 0xFA30
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

int func_260()//Position - 0x11A9E
{
	return 0;
}

int func_261()//Position - 0x11AA7
{
	return 1;
}

int func_262()//Position - 0x11AB0
{
	return 1;
}

int func_263()//Position - 0x11AB9
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_264(int iParam0)//Position - 0x11AD2
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_256(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_265(int iParam0)//Position - 0x11B18
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

int func_266(int iParam0)//Position - 0x11B53
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

int func_267(int iParam0)//Position - 0x11BCF
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

int func_268(int iParam0)//Position - 0x11CB7
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

int func_269(int iParam0, int iParam1, bool bParam2)//Position - 0x11D1A
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_270(iParam1, iVar0, &sVar1, &iVar9))
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

int func_270(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x11D8B
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

void func_271()//Position - 0x11E62
{
	Global_26000 = 0;
	Global_26001 = 0;
	Global_26003 = 0;
	Global_26004 = 0;
	Global_26005 = 0;
}

void func_272(bool bParam0)//Position - 0x11E7E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		func_169(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_273()//Position - 0x11EA1
{
	float fVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vLocal_339, true);
		iLocal_338 = 1;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vLocal_342, true) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vLocal_342, true);
			iLocal_338 = 2;
		}
		if (iLocal_338 == 1)
		{
			iLocal_345 = 1;
			iLocal_54 = 1;
			return vLocal_339;
		}
		if (iLocal_338 == 2)
		{
			iLocal_345 = 2;
			iLocal_54 = 2;
			return vLocal_342;
		}
	}
	return 0f, 0f, 0f;
}

