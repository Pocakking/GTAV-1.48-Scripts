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
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
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
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	bool bLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76[1] = { 0 };
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 16;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
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
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
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
	int iLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	int iLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	int iLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	int iLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	int iLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	int iLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	int iLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 1097859072;
	var uLocal_270 = 1500;
	var uLocal_271 = 45;
	var uLocal_272 = 1103626240;
	var uLocal_273 = 5;
	int iLocal_274[1] = { 0 };
	char* sLocal_276 = NULL;
	char* sLocal_277 = NULL;
	var uLocal_278 = 1;
	var uLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	var uLocal_282[1] = { 0 };
	int iLocal_284[4] = { 0, 0, 0, 0 };
	struct<9> Local_289 = { 0, 0, 0, 0, 0, 0, 0, 21, 6 } ;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	int iLocal_301 = 0;
	vector3 vLocal_302 = { 0f, 0f, 0f };
	vector3 vLocal_305 = { 0f, 0f, 0f };
	vector3 vLocal_308 = { 0f, 0f, 0f };
	vector3 vLocal_311 = { 0f, 0f, 0f };
	vector3 vLocal_314 = { 0f, 0f, 0f };
	vector3 vLocal_317 = { 0f, 0f, 0f };
	vector3 vLocal_320 = { 0f, 0f, 0f };
	vector3 vLocal_323 = { 0f, 0f, 0f };
	float fLocal_326 = 0f;
	float fLocal_327 = 0f;
	float fLocal_328 = 0f;
	float fLocal_329 = 0f;
	int iLocal_330 = 0;
	var uLocal_331 = 0;
	int iLocal_332 = 0;
	var uLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	bool bLocal_336 = 0;
	bool bLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	struct<5> ScriptParam_0 = { 1, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
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
	vLocal_63 = { 500f, 500f, 500f };
	fLocal_329 = -1f;
	iLocal_332 = -1;
	bLocal_336 = true;
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("stripperhome");
	MISC::SET_MISSION_FLAG(1);
	PLAYER::_0xDE45D1A1EF45EE61(PLAYER::PLAYER_ID(), 1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(75))
	{
		func_290();
	}
	bLocal_337 = ScriptParam_0.f_5;
	if (bLocal_337)
	{
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, -1);
		func_285(0, -1, 0);
		NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	}
	uLocal_76[0] = ScriptParam_0[0];
	Global_105590.f_1 = uLocal_76[0];
	bVar0 = false;
	bVar1 = true;
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	if (func_284() && ScriptParam_0.f_4)
	{
		bVar1 = false;
		if (iVar2 > 14 && iVar2 < 22)
		{
			bVar0 = true;
		}
	}
	while (((!func_255(&ScriptParam_0, bVar0) && iLocal_74 != 6) && iLocal_74 != 5) && (iLocal_74 != -1 || !func_254(uLocal_333, 1024)))
	{
		func_246(0);
		SYSTEM::WAIT(0);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_245(0, 0));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_245(1, 0));
	if (!bVar1)
	{
		iLocal_74 = 2;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_335 > 0)
		{
			func_243();
			iLocal_335 = (iLocal_335 - SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
		}
		switch (iLocal_74)
		{
			case -1:
				func_242();
				break;
			
			case 0:
				func_203(1);
				break;
			
			case 1:
				func_106();
				break;
			
			case 2:
				func_203(0);
				break;
			
			case 3:
				func_88();
				break;
			
			case 4:
				func_37(bLocal_336);
				break;
			
			case 5:
				func_11();
				break;
			
			case 6:
				if (!func_10(&iLocal_261))
				{
					func_7(&iLocal_261);
				}
				else if (func_1(&iLocal_261, 7.5f))
				{
					func_290();
				}
				break;
		}
	}
}

int func_1(int iParam0, float fParam1)//Position - 0x24B
{
	if (func_3(iParam0, fParam1))
	{
		func_2(iParam0);
		return 1;
	}
	return 0;
}

void func_2(int iParam0)//Position - 0x269
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

int func_3(int iParam0, float fParam1)//Position - 0x27F
{
	if (func_10(iParam0))
	{
		if (func_4(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_4(int iParam0)//Position - 0x2A1
{
	if (func_10(iParam0))
	{
		if (func_6(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_5(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_5(bool bParam0)//Position - 0x2E0
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_6(var uParam0)//Position - 0x338
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

void func_7(int iParam0)//Position - 0x348
{
	if (!func_10(iParam0))
	{
		func_8(iParam0);
	}
}

void func_8(int iParam0)//Position - 0x360
{
	func_9(iParam0, 0f);
}

void func_9(int iParam0, float fParam1)//Position - 0x36F
{
	iParam0->f_1 = (func_5(MISC::IS_BIT_SET(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_10(var uParam0)//Position - 0x39D
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

void func_11()//Position - 0x3AD
{
	if (!func_254(uLocal_333, 8192))
	{
		if (func_36())
		{
			func_26();
		}
		else
		{
			iLocal_74 = 6;
		}
	}
	if (func_254(uLocal_333, 16384))
	{
		if (func_12())
		{
			iLocal_74 = 6;
		}
	}
}

int func_12()//Position - 0x3EB
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_274[0], 0))
	{
		return 1;
	}
	if (func_254(uLocal_333, 8192))
	{
		PED::SET_PED_RESET_FLAG(iLocal_274[0], 60, true);
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_274[0], 96.8033f, -1287.597f, 28.2688f, 5f, 5f, 2f, false, true, 1) || func_25(PLAYER::PLAYER_PED_ID(), 96.8033f, -1287.597f, 28.2688f, 1) > 100f)
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), 0))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, 1, 0f, 0);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_284[0]))
			{
				if (CAM::IS_CAM_RENDERING(iLocal_284[0]))
				{
					func_13(1, 1, 0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
					CAM::DESTROY_CAM(iLocal_284[0], 1);
				}
			}
			PED::DELETE_PED(&(iLocal_274[0]));
			return 1;
		}
	}
	return 0;
}

void func_13(bool bParam0, bool bParam1, int iParam2)//Position - 0x4E7
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(1);
	func_15(0, 1, iParam2, 0, 0, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
	func_14(23, 0);
}

void func_14(int iParam0, bool bParam1)//Position - 0x524
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_26010, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_26010, iParam0);
	}
}

void func_15(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x546
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_24(1);
		HUD::_0xA8FDB297A8D25FBA();
		HUD::_0xFDB423997FA30340();
		if (Global_14553.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_23())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_22(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_24(0);
		HUD::_0xE1CD1E48E025E661();
		Global_56500 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_22(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_20(PLAYER::PLAYER_ID())) && !func_17(PLAYER::PLAYER_ID(), 0)) && !func_16()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_20(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_71588 = 0;
	}
}

bool func_16()//Position - 0x67F
{
	return MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_39.f_18, 14);
}

bool func_17(int iParam0, int iParam1)//Position - 0x69C
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)//Position - 0x6E7
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()//Position - 0x728
{
	return Global_1312745;
}

int func_20(int iParam0)//Position - 0x734
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_21())
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

bool func_21()//Position - 0x776
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_22(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x787
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

int func_23()//Position - 0x7BA
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_24(int iParam0)//Position - 0x7E1
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

float func_25(int iParam0, vector3 vParam1, bool bParam4)//Position - 0x804
{
	vector3 vVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, bParam4);
}

void func_26()//Position - 0x83E
{
	int iVar0;
	
	func_29();
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), 0))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, 0, 0f, 0);
	}
	func_27(&uLocal_333, 16384);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_274[0], false);
	PED::SET_PED_CONFIG_FLAG(iLocal_274[0], 104, true);
	BRAIN::OPEN_SEQUENCE_TASK(&iVar0);
	BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 98.2041f, -1291.252f, 28.2688f, 1f, -1, 0.25f, 1, 1193033728);
	BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 107.6303f, -1304.742f, 27.7688f, 1f, -1, 0.25f, 0, 1193033728);
	BRAIN::TASK_PLAY_ANIM(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, 15000, 1, 0, 0, 0, 0);
	BRAIN::CLOSE_SEQUENCE_TASK(iVar0);
	BRAIN::TASK_PERFORM_SEQUENCE(iLocal_274[0], iVar0);
	BRAIN::CLEAR_SEQUENCE_TASK(&iVar0);
	func_27(&uLocal_333, 8192);
}

void func_27(var uParam0, int iParam1)//Position - 0x92B
{
	func_28(uParam0, iParam1);
}

void func_28(var uParam0, var uParam1)//Position - 0x93B
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_29()//Position - 0x94C
{
	if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_274[0]) && func_35(1, 0, 1))
	{
		func_30(0, 0, 0);
		iLocal_284[0] = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 90.1007f, -1281.573f, 28.6661f, 2.4422f, 0f, -113.4013f, 45f, 1, 2);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
	}
}

void func_30(int iParam0, int iParam1, int iParam2)//Position - 0x9B2
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 15f);
	}
	CUTSCENE::_0xC61B86C9F61EB404(iParam1);
	func_31(0);
	func_15(1, 1, iParam2, 0, 0, 0);
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	func_14(23, 1);
}

void func_31(int iParam0)//Position - 0xA0A
{
	if (func_34())
	{
		return;
	}
	if (Global_14725)
	{
		func_32(0, 0);
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
	if (!func_23())
	{
		Global_14553.f_1 = 3;
	}
}

void func_32(bool bParam0, bool bParam1)//Position - 0xA84
{
	if (bParam0)
	{
		if (func_33(0))
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

int func_33(int iParam0)//Position - 0xAF8
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

bool func_34()//Position - 0xB52
{
	return MISC::IS_BIT_SET(Global_1681628, 19);
}

int func_35(bool bParam0, bool bParam1, bool bParam2)//Position - 0xB64
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

int func_36()//Position - 0xC49
{
	if ((uLocal_76[0] == 8 || uLocal_76[0] == 9) || func_25(iLocal_274[0], 96.12f, -1284.91f, 29.43f, 1) > 10f)
	{
		return 0;
	}
	return 1;
}

void func_37(bool bParam0)//Position - 0xC95
{
	vector3 vVar0;
	var uVar3;
	int iVar4;
	
	func_64();
	if (bParam0)
	{
		vVar0 = { vLocal_308 };
	}
	else
	{
		func_63(&vVar0, &uVar3, 0);
	}
	func_60(vVar0);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_274[0], 0))
		{
			iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4) && !ENTITY::IS_ENTITY_DEAD(iVar4, 0))
			{
				if (iLocal_338)
				{
					if (func_58(iVar4, 4f, 1, 1056964608, 0, 1, 0))
					{
						func_57();
						BRAIN::TASK_LEAVE_ANY_VEHICLE(iLocal_274[0], 0, 16777216);
						func_38();
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vVar0, 4f, 4f, 2f, true, true, 2))
				{
					iLocal_338 = 1;
				}
			}
		}
	}
}

void func_38()//Position - 0xD4B
{
	func_56();
	func_49(295, 0, 0);
	func_39(0);
	func_290();
}

void func_39(bool bParam0)//Position - 0xD69
{
	struct<8> Var0[3];
	struct<6> Var25[3];
	
	if (!func_46())
	{
		return;
	}
	if (!iLocal_69)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Location", 32);
	StringCopy(&(Var0[2 /*8*/]), "Type", 32);
	if (bParam0)
	{
		StringCopy(&(Var25[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var25[0 /*6*/]), "SP", 24);
	}
	StringCopy(&(Var25[1 /*6*/]), "City", 24);
	StringCopy(&(Var25[2 /*6*/]), "????", 24);
	if (func_44(200, &Var25, &Var0, 3, -1, 0, 0))
	{
		STATS::_0x0BCA1D2C47B0D269(131, func_43(), 0f);
		STATS::_0x0BCA1D2C47B0D269(108, func_42(), 0f);
		STATS::_0x0BCA1D2C47B0D269(102, func_41(), 0f);
		STATS::_0x0BCA1D2C47B0D269(8, func_40(), 0f);
	}
	iLocal_66 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
	iLocal_69 = 0;
}

int func_40()//Position - 0xE26
{
	return iLocal_67;
}

int func_41()//Position - 0xE30
{
	return iLocal_68;
}

int func_42()//Position - 0xE3A
{
	return iLocal_66;
}

int func_43()//Position - 0xE44
{
	return 0;
}

int func_44(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xE4D
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
	}
	if ((!NETWORK::NETWORK_PLAYER_IS_CHEATER() && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::_0x1353F87E89946207())) && NETWORK::_0x422D396F80A96547())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
			{
				Var69 = { func_45(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var69))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = { *(uParam2[iVar68 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2456885.f_3)
			{
				STATS::_0xC980E62E33DF1D5C(&Var0, &(Global_1657223.f_10));
			}
			else
			{
				STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			}
		}
		return 1;
	}
	if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
	}
	if (NETWORK::_0x1353F87E89946207())
	{
	}
	if (!NETWORK::_0x422D396F80A96547())
	{
	}
	return 0;
}

struct<13> func_45(int iParam0)//Position - 0xF81
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_46()//Position - 0xF98
{
	if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && func_47())
	{
		return 1;
	}
	return 0;
}

int func_47()//Position - 0xFBE
{
	if (func_48())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_48()//Position - 0xFDE
{
	return Global_2459114;
}

void func_49(int iParam0, int iParam1, int iParam2)//Position - 0xFEA
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
		func_55((891 + iParam0), 1, -1, 1);
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
		Global_106565.f_10188[iParam0 /*12*/].f_10 = iParam1;
		Global_106565.f_10188[iParam0 /*12*/].f_11 = iParam2;
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
		func_50();
	}
}

void func_50()//Position - 0x10D2
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
		func_54(13, SYSTEM::FLOOR(Global_106565.f_10188.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_71590)
		{
			if (func_53() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_51();
				}
			}
		}
	}
}

int func_51()//Position - 0x1593
{
	if (func_52(0))
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

bool func_52(bool bParam0)//Position - 0x15DE
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71838, 0);
}

int func_53()//Position - 0x1609
{
	return Global_25765;
}

int func_54(int iParam0, int iParam1)//Position - 0x1614
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

int func_55(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1665
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
		iParam2 = func_19();
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

void func_56()//Position - 0x1C11
{
	iLocal_68++;
	iLocal_69 = 1;
}

void func_57()//Position - 0x1C22
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_274[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_274[0], 0))
	{
		AUDIO::STOP_PED_SPEAKING(iLocal_274[0], true);
		if (PED::IS_PED_IN_GROUP(iLocal_274[0]))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_274[0]);
		}
	}
}

int func_58(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x1C6A
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
	func_59(iParam0);
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

void func_59(int iParam0)//Position - 0x1DF9
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

void func_60(vector3 vParam0)//Position - 0x1E25
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(iLocal_281))
	{
		HUD::REMOVE_BLIP(&iLocal_281);
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_274[0], 0))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_274[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_280))
				{
					iLocal_280 = func_61(vParam0, 1);
				}
			}
		}
	}
}

int func_61(vector3 vParam0, bool bParam3)//Position - 0x1EAB
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_62(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_62(bool bParam0, float fParam1, float fParam2)//Position - 0x1ED7
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_63(var uParam0, var uParam1, bool bParam2)//Position - 0x1EEE
{
	vLocal_317 = { vLocal_317 };
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (!bParam2)
			{
				*uParam0 = { 92.8829f, -1281.123f, 28.1845f };
				*uParam1 = 15f;
			}
			else
			{
				*uParam0 = { vLocal_314 };
				*uParam1 = fLocal_326;
			}
			vLocal_317 = { *uParam0 };
			break;
		
		case 8:
			if (!bParam2)
			{
				*uParam0 = { -1615.991f, 187.4827f, 59.1337f };
				*uParam1 = 217.5474f;
			}
			else
			{
				*uParam0 = { vLocal_314 };
				*uParam1 = fLocal_326;
			}
			vLocal_317 = { *uParam0 };
			break;
		
		case 9:
			if (!bParam2)
			{
				*uParam0 = { 1538.432f, 3776.85f, 33.5178f };
				*uParam1 = 225.8821f;
			}
			else
			{
				*uParam0 = { vLocal_314 };
				*uParam1 = fLocal_326;
			}
			vLocal_317 = { *uParam0 };
			break;
	}
}

void func_64()//Position - 0x2003
{
	if (PED::IS_PED_INJURED(iLocal_274[0]))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_274[0]))
		{
		}
		else if (ENTITY::IS_ENTITY_DEAD(iLocal_274[0], 0))
		{
		}
		func_65(0);
	}
}

void func_65(int iParam0)//Position - 0x203C
{
	if ((uLocal_76[0] > -1 && uLocal_76[0] < 10) && iParam0 != 2)
	{
		func_86(uLocal_76[0], (func_87(uLocal_76[0]) / 2));
	}
	func_84();
	switch (iParam0)
	{
		case 0:
			func_82("SCLUB_HOME_D", uLocal_76[0]);
			func_86(uLocal_76[0], 0);
			func_71(uLocal_76[0], 1);
			iLocal_74 = 6;
			break;
		
		case 1:
			HUD::CLEAR_PRINTS();
			func_66("SCLUB_HOME_A", uLocal_76[0], 0);
			iLocal_74 = 5;
			break;
		
		case 2:
			iLocal_74 = 5;
			break;
		
		case 4:
			func_82("SCLUB_HOME_D3", uLocal_76[0]);
			iLocal_74 = 6;
			break;
		
		case 3:
			if (func_25(iLocal_274[0], 92.5861f, -1282.86f, 28.2548f, 1) < 10f)
			{
				iLocal_74 = 5;
			}
			else
			{
				iLocal_74 = 6;
			}
			break;
	}
}

void func_66(char* sParam0, int iParam1, bool bParam2)//Position - 0x2128
{
	int iVar0;
	
	MemCopy(&iVar0, {func_70(iParam1)}, 6);
	if (!func_69(sParam0, &iVar0))
	{
		if (!bParam2)
		{
			func_68(sParam0, &iVar0, -1);
		}
		else
		{
			func_67(sParam0, &iVar0);
		}
	}
}

void func_67(char* sParam0, int iParam1)//Position - 0x2161
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, -1);
}

void func_68(char* sParam0, int iParam1, int iParam2)//Position - 0x217D
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam2);
}

int func_69(char* sParam0, int iParam1)//Position - 0x219A
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

struct<4> func_70(int iParam0)//Position - 0x21B3
{
	struct<4> Var0;
	
	StringCopy(&Var0, "SCLUB_NM_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

void func_71(int iParam0, bool bParam1)//Position - 0x21CD
{
	if (bParam1)
	{
		func_27(&(Global_106565.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
	else
	{
		func_72(&(Global_106565.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
}

void func_72(var uParam0, int iParam1)//Position - 0x220F
{
	func_73(uParam0, iParam1);
}

void func_73(var uParam0, var uParam1)//Position - 0x221F
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_74()//Position - 0x2234
{
	int iVar0;
	
	iVar0 = func_76();
	switch (iVar0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		default:
			switch (func_75(-1))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}

int func_75(int iParam0)//Position - 0x22C2
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_76()//Position - 0x22F6
{
	func_77();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_77()//Position - 0x230F
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_81(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_80(PLAYER::PLAYER_PED_ID());
			if (func_79(iVar0) && (!func_78(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_79(Global_106565.f_2357.f_539.f_4321))
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

bool func_78(int iParam0)//Position - 0x240C
{
	return Global_36425 == iParam0;
}

bool func_79(int iParam0)//Position - 0x241A
{
	return iParam0 < 3;
}

int func_80(int iParam0)//Position - 0x2426
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_81(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_81(int iParam0)//Position - 0x2463
{
	if (func_79(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_82(char* sParam0, int iParam1)//Position - 0x248D
{
	int iVar0;
	
	MemCopy(&iVar0, {func_70(iParam1)}, 6);
	func_83(sParam0, &iVar0, 7500, 1);
}

void func_83(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x24AC
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, 1);
}

void func_84()//Position - 0x24CB
{
	if (HUD::DOES_BLIP_EXIST(iLocal_281))
	{
		HUD::REMOVE_BLIP(&iLocal_281);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_280))
	{
		HUD::REMOVE_BLIP(&iLocal_280);
	}
	func_85();
}

void func_85()//Position - 0x24F9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_282[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_282[iVar0]));
		}
		iVar0++;
	}
}

void func_86(int iParam0, int iParam1)//Position - 0x252C
{
	Global_106565.f_243[func_74() /*53*/].f_2[iParam0 /*5*/] = iParam1;
}

int func_87(int iParam0)//Position - 0x2548
{
	return Global_106565.f_243[func_74() /*53*/].f_2[iParam0 /*5*/];
}

void func_88()//Position - 0x2562
{
	func_64();
	func_84();
	switch (iLocal_80)
	{
		case 0:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_274[0], 0))
				{
					if (!func_105("SCLUB_SECLUDED"))
					{
						func_104("SCLUB_SECLUDED");
					}
					if (func_103() && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) == 0f)
					{
						HUD::CLEAR_HELP(1);
						STREAMING::REQUEST_ANIM_DICT(func_98(iLocal_274[0], 0, 0));
						iLocal_80 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (func_91())
			{
				iLocal_80 = 2;
			}
			break;
		
		case 2:
			if (BRAIN::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 242628503) != 1)
			{
				func_243();
				if (CLOCK::GET_CLOCK_HOURS() > 20 || CLOCK::GET_CLOCK_HOURS() < 4)
				{
					bLocal_336 = false;
				}
				CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(iLocal_45);
				func_89(bLocal_336);
				iLocal_74 = 4;
			}
			break;
	}
}

void func_89(bool bParam0)//Position - 0x2639
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_82("SCLUB_HOME_GO", uLocal_76[0]);
			}
			else
			{
				func_90("SCLUB_CLUB_GO", 7500, 1);
			}
			break;
		
		case 8:
		case 9:
			func_90("SCLUB_HOME_GO3", 7500, 1);
			break;
	}
}

void func_90(char* sParam0, int iParam1, int iParam2)//Position - 0x26BA
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

int func_91()//Position - 0x26D3
{
	if (STREAMING::HAS_ANIM_DICT_LOADED(func_98(iLocal_274[0], 0, 0)))
	{
		func_92(iLocal_274[0], 0, 1, -1, 1);
		func_92(PLAYER::PLAYER_PED_ID(), 0, 0, -1, 1);
		return 1;
	}
	return 0;
}

void func_92(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x270D
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	int iVar3;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		return;
	}
	iLocal_45 = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && func_97(0, 1))
	{
		if (iLocal_45 != 4)
		{
			CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(4);
		}
	}
	bVar1 = func_96(iVar0);
	sVar2 = func_98(iParam0, 0, 0);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar2))
	{
		STREAMING::REQUEST_ANIM_DICT(sVar2);
	}
	else
	{
		BRAIN::OPEN_SEQUENCE_TASK(&iVar3);
		BRAIN::TASK_PLAY_ANIM(0, sVar2, func_93(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		BRAIN::TASK_PLAY_ANIM(0, sVar2, func_93(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		BRAIN::TASK_PLAY_ANIM(0, sVar2, func_93(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		BRAIN::TASK_PLAY_ANIM(0, sVar2, func_93(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		BRAIN::TASK_PLAY_ANIM(0, sVar2, func_93(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		BRAIN::CLOSE_SEQUENCE_TASK(iVar3);
		BRAIN::TASK_PERFORM_SEQUENCE(iParam0, iVar3);
		if (bParam4)
		{
			BRAIN::CLEAR_SEQUENCE_TASK(&iVar3);
		}
	}
}

char* func_93(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x2852
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_95(18);
					}
					else
					{
						sVar0 = func_95(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_95(8);
				}
				else
				{
					sVar0 = func_95(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_94(18);
				}
				else
				{
					sVar0 = func_94(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_94(8);
			}
			else
			{
				sVar0 = func_94(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_95(19);
					}
					else
					{
						sVar0 = func_95(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_95(9);
				}
				else
				{
					sVar0 = func_95(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_94(19);
				}
				else
				{
					sVar0 = func_94(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_94(9);
			}
			else
			{
				sVar0 = func_94(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_95(20);
					}
					else
					{
						sVar0 = func_95(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_95(10);
				}
				else
				{
					sVar0 = func_95(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_94(20);
				}
				else
				{
					sVar0 = func_94(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_94(10);
			}
			else
			{
				sVar0 = func_94(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_95(21);
					}
					else
					{
						sVar0 = func_95(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_95(11);
				}
				else
				{
					sVar0 = func_95(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_94(21);
				}
				else
				{
					sVar0 = func_94(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_94(11);
			}
			else
			{
				sVar0 = func_94(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_95(22);
					}
					else
					{
						sVar0 = func_95(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_95(12);
				}
				else
				{
					sVar0 = func_95(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_94(22);
				}
				else
				{
					sVar0 = func_94(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_94(12);
			}
			else
			{
				sVar0 = func_94(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_95(3);
				}
				else
				{
					sVar0 = func_95(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_94(3);
			}
			else
			{
				sVar0 = func_94(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_94(int iParam0)//Position - 0x2B34
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_95(int iParam0)//Position - 0x2CF2
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_96(int iParam0)//Position - 0x2EB0
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
			case 1837596901:
			case 2013836096:
			case 2071837743:
			case 2130662788:
			case -1546132012:
			case 1192783831:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 1240573865:
			case -627376728:
			case 986556497:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_97(bool bParam0, bool bParam1)//Position - 0x2F77
{
	bool bVar0;
	
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = CAM::_0xEE778F8C7E1142E2(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = CAM::_0xEE778F8C7E1142E2(1) == 4;
		}
	}
	return bVar0;
}

var func_98(int iParam0, bool bParam1, int iParam2)//Position - 0x2FA6
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (func_96(iVar0))
			{
				if ((!func_97(0, 1) || iParam2) && !bParam1)
				{
					return func_102();
				}
				else
				{
					return func_101();
				}
			}
		}
	}
	if ((!func_97(0, 1) || iParam2) && !bParam1)
	{
		return func_100();
	}
	return func_99();
}

char* func_99()//Position - 0x3028
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_100()//Position - 0x3034
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_101()//Position - 0x3040
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_102()//Position - 0x304C
{
	return "mini@prostitutes@sexlow_veh";
}

int func_103()//Position - 0x3058
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	var uVar10;
	vector3 vVar11;
	float fVar14;
	int iVar15;
	
	fVar6 = 25f;
	func_63(&vVar7, &uVar10, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
		vVar3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(vVar3, &vVar11, 1077936128, 0))
		{
			fVar14 = SYSTEM::VDIST(vVar3, vVar11);
			if (fVar14 <= 10f)
			{
				return 0;
			}
		}
		if (SYSTEM::VDIST(vVar3, vLocal_308) < 20f || SYSTEM::VDIST(vVar3, vVar7) < 20f)
		{
			return 0;
		}
		if (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(vVar3 - Vector(20f, 20f, 20f), vVar3 + Vector(20f, 20f, 20f)))
		{
			return 0;
		}
		PED::GET_CLOSEST_PED(vVar3, fVar6, 1, 1, &iVar0, 0, 0, -1);
		if (!iVar0 == 0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), 17))
				{
					return 0;
				}
			}
		}
		else
		{
			iVar1 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(vVar3, fVar6, 0, -1);
			if (!iVar1 == 0)
			{
				if (!iVar1 == iVar2)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
					{
						iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, 0);
						if (!iVar0 == 0)
						{
							return 0;
						}
					}
				}
			}
		}
		iVar15 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
		if (!iVar15 == 0)
		{
			return 0;
		}
	}
	return 1;
}

void func_104(char* sParam0)//Position - 0x31CA
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, -1);
}

int func_105(char* sParam0)//Position - 0x31E0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_106()//Position - 0x31F3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_75 < 12 && iLocal_75 >= 2)
	{
		if (func_201(3000))
		{
			CAM::DO_SCREEN_FADE_OUT(1000);
			iLocal_75 = 12;
		}
	}
	if (!bLocal_71 && iLocal_75 >= 5)
	{
		iVar0 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("blimp2"))
			{
				bLocal_71 = false;
			}
			else if (VEHICLE::IS_BIG_VEHICLE(VEHICLE::GET_LAST_DRIVEN_VEHICLE()) && uLocal_76[0] == 5)
			{
				bLocal_71 = func_198(&uLocal_70, -865f, 516.3f, 90f, 1, 15f);
			}
			else if (func_197(VEHICLE::GET_LAST_DRIVEN_VEHICLE()))
			{
				bLocal_71 = func_198(&uLocal_70, vLocal_323, 1, fLocal_327);
			}
			else
			{
				bLocal_71 = func_198(&uLocal_70, vLocal_308, 1, fLocal_327);
			}
		}
	}
	if (iLocal_75 > 0 && iLocal_75 < 13)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
	switch (iLocal_75)
	{
		case 0:
			HUD::CLEAR_HELP(1);
			HUD::CLEAR_PRINTS();
			func_84();
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TIME_LAPSE", false, -1);
			func_30(56, 1, 0);
			if (!func_254(uLocal_333, 131072))
			{
				func_27(&uLocal_333, 131072);
			}
			if (!func_254(uLocal_333, 256))
			{
				func_196();
				func_27(&uLocal_333, 256);
			}
			if (!func_254(uLocal_333, 32768))
			{
				STREAMING::REQUEST_ANIM_DICT(func_195());
				func_27(&uLocal_333, 32768);
			}
			if (!func_254(uLocal_333, 256))
			{
				STREAMING::REQUEST_ANIM_DICT(func_194());
				func_27(&uLocal_333, 256);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_340 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				func_193(PLAYER::PLAYER_PED_ID(), iLocal_340);
				iLocal_75 = 1;
			}
			else
			{
				func_57();
				func_191(PLAYER::PLAYER_PED_ID(), vLocal_302);
				func_191(iLocal_274[0], vLocal_305);
				iLocal_75 = 2;
			}
			func_189();
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_340, 0))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_340, true), vLocal_308) < 2f)
				{
					func_57();
					func_191(PLAYER::PLAYER_PED_ID(), vLocal_302);
					func_191(iLocal_274[0], vLocal_305);
					STREAMING::NEW_LOAD_SCENE_STOP();
					iLocal_75 = 2;
				}
				else if (MISC::GET_GAME_TIMER() >= 10000)
				{
					iLocal_75 = 13;
				}
			}
			break;
		
		case 2:
			if (!CAM::IS_CAM_RENDERING(iLocal_284[0]))
			{
				CAM::SET_CAM_ACTIVE(iLocal_284[0], true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_340, 0))
				{
					if (ENTITY::GET_ENTITY_MODEL(iLocal_340) == joaat("blimp2"))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_340, false, 0);
					}
				}
				func_8(&iLocal_255);
				iLocal_75 = 3;
			}
			break;
		
		case 3:
			if (func_188(&iLocal_255) > 1f)
			{
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_284[1], iLocal_284[0], 6000, 1, 1);
				func_187(&Local_289, 1, 0, 2000, 1, 1, 0, 1);
				iVar1 = CLOCK::GET_CLOCK_HOURS();
				iLocal_330 = iVar1 + 8;
				if (iLocal_330 > 23)
				{
					iLocal_330 = (iLocal_330 - 24);
				}
				Local_289.f_7 = iVar1;
				Local_289.f_8 = iLocal_330;
				func_2(&iLocal_255);
				iLocal_75 = 4;
			}
			break;
		
		case 4:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_284[1]) && CAM::IS_CAM_RENDERING(iLocal_284[1]))
			{
				if (!func_254(uLocal_331, 512))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_340) && !ENTITY::IS_ENTITY_DEAD(iLocal_340, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_340, 1);
					}
					func_184(PLAYER::PLAYER_PED_ID(), func_186());
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), func_183());
					func_165();
					func_27(&uLocal_331, 512);
				}
				else if (!func_254(uLocal_331, 2048))
				{
					if (ENTITY::IS_ENTITY_DEAD(iLocal_274[0], 0))
					{
					}
					if (!func_164() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_274[0]))
					{
						func_165();
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
						{
							AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(PLAYER::PLAYER_PED_ID());
							AUDIO::_PLAY_AMBIENT_SPEECH1(PLAYER::PLAYER_PED_ID(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
						}
						func_27(&uLocal_331, 2048);
						func_8(&iLocal_255);
						sLocal_277 = func_163();
						iLocal_75 = 5;
					}
				}
			}
			break;
		
		case 5:
			if (func_188(&iLocal_255) > 1f)
			{
				if (func_138(iLocal_330, 0, sLocal_277, "", &Local_289, (func_188(&iLocal_255) * 0.2f), 0))
				{
					if (!func_164())
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_340))
						{
							if (ENTITY::GET_ENTITY_MODEL(iLocal_340) != joaat("blimp2"))
							{
								MISC::CLEAR_AREA(vLocal_305, 20f, 1, 0, 0, false);
							}
						}
						else
						{
							MISC::CLEAR_AREA(vLocal_305, 20f, 1, 0, 0, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_274[0]))
						{
							ENTITY::SET_ENTITY_VISIBLE(iLocal_274[0], false, 0);
						}
						BRAIN::SET_PED_PATH_AVOID_FIRE(PLAYER::PLAYER_PED_ID(), 0);
						func_8(&iLocal_255);
						iLocal_75 = 6;
					}
				}
			}
			break;
		
		case 6:
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
			if (func_188(&iLocal_255) > 1.5f)
			{
				if (bLocal_71)
				{
					func_136(&uLocal_70);
				}
				func_8(&iLocal_255);
				iLocal_75 = 7;
			}
			break;
		
		case 7:
			if (!CAM::IS_CAM_RENDERING(iLocal_284[2]))
			{
				GRAPHICS::_0x03FC694AE06C5A20();
				GRAPHICS::_0x0AE73D8DF3A762B2(true);
				GRAPHICS::_SET_FAR_SHADOWS_SUPPRESSED(1);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_284[2], iLocal_284[1], 6000, 1, 1);
				func_8(&iLocal_255);
				iLocal_75 = 8;
			}
			break;
		
		case 8:
			if (!func_254(uLocal_333, 262144))
			{
				if (func_188(&iLocal_255) >= 1.25f)
				{
					func_135();
				}
			}
			if (func_188(&iLocal_255) > 6f)
			{
				CAM::SET_CAM_ACTIVE(iLocal_284[3], true);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_340, 0))
				{
					if (ENTITY::GET_ENTITY_MODEL(iLocal_340) == joaat("blimp2"))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_340, true, 0);
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_340, true, 1);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_340, 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_340, 1000f);
					VEHICLE::SET_VEHICLE_FIXED(iLocal_340);
				}
				func_8(&iLocal_255);
				iLocal_75 = 10;
			}
			break;
		
		case 10:
			if (func_188(&iLocal_255) > 2f)
			{
				CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
				iLocal_75 = 13;
			}
			break;
		
		case 12:
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			{
				if (!func_254(uLocal_333, 262144))
				{
					PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vLocal_314, fLocal_326, false, true, 1);
					func_135();
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_340, 0))
				{
					if (ENTITY::GET_ENTITY_MODEL(iLocal_340) == joaat("blimp2"))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_340, true, 0);
					}
				}
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_340, 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_340, true, 1);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_340, 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_340, 1000f);
					VEHICLE::SET_VEHICLE_FIXED(iLocal_340);
				}
				func_8(&iLocal_255);
				iLocal_75 = 13;
			}
			break;
		
		case 13:
			if (!CAM::IS_SCREEN_FADING_OUT() && func_188(&iLocal_255) >= 1f)
			{
				func_13(1, 1, 0);
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()), 0);
				PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 30, 1);
				if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), func_81(0)))
				{
					func_134();
				}
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(vLocal_308 - Vector(3f, 3f, 3f), vLocal_308 + Vector(3f, 3f, 3f), 15f, 1);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_340, 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_340, true, 1);
					if (ENTITY::GET_ENTITY_MODEL(iLocal_340) != joaat("blimp2"))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_340, vLocal_308, 1, false, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_340, fLocal_327);
						if (VEHICLE::IS_BIG_VEHICLE(iLocal_340) && uLocal_76[0] == 5)
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_340, -865f, 516.3f, 90f, 1, false, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_340, 15f);
						}
						else if (func_197(iLocal_340))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_340, vLocal_323, 1, false, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_340, fLocal_328);
						}
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_340, 1084227584);
					}
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					func_187(&Local_289, 0, 0, 2000, 1, 0, 0, 1);
				}
				else
				{
					CLOCK::ADD_TO_CLOCK_TIME(8, 0, 0);
					func_132(SYSTEM::TO_FLOAT(8));
					CAM::DO_SCREEN_FADE_IN(2000);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					func_187(&Local_289, 0, 0, 2000, 1, 1, 0, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_274[0]))
				{
					PED::DELETE_PED(&(iLocal_274[0]));
				}
				if (!func_131(uLocal_76[0], -1))
				{
					if (uLocal_76[0] == 5)
					{
						func_66("SCLUB_PHON_HELP_ALT", uLocal_76[0], 0);
					}
					else
					{
						func_66("SCLUB_PHON_HELP", uLocal_76[0], 0);
					}
					func_117(uLocal_76[0], 1, -1);
					SYSTEM::WAIT(4000);
				}
				func_115(uLocal_76[0]);
				iVar2 = func_114(uLocal_76[0]);
				if (iVar2 <= 2)
				{
					iVar3 = func_113(uLocal_76[0]);
					iVar4 = func_112(iVar2);
					func_107(-384575792, iVar3, iVar4, 3, func_111(), func_110(uLocal_76[0]), 60000, 10000, -1, 0, -1, 0, 1);
				}
				func_38();
			}
			break;
	}
}

int func_107(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x3AB2
{
	struct<14> Var0;
	
	if (func_52(0))
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam5 < 3)
	{
		if (MISC::IS_BIT_SET(iParam4, iParam5))
		{
			return 0;
		}
	}
	if (iParam4 < 1 || iParam4 > 7)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 83 || iParam2 == 83)
	{
		return 0;
	}
	if (Global_106565.f_7682.f_764 < 8)
	{
		Var0 = iParam0;
		Var0.f_3 = func_109(iParam3);
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam6);
		Var0.f_5 = iParam7;
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam4;
		Var0.f_6 = iParam5;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_13 = iParam12;
		MISC::CLEAR_BIT(&(Var0.f_1), 0);
		Global_106565.f_7682.f_651[Global_106565.f_7682.f_764 /*14*/] = { Var0 };
		Global_106565.f_7682.f_764++;
		func_108(0);
		func_108(1);
		func_108(2);
		return 1;
	}
	return 0;
}

void func_108(int iParam0)//Position - 0x3BF0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_79(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_106565.f_7682.f_136)
	{
		if (MISC::IS_BIT_SET(Global_106565.f_7682[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_106565.f_7682[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_106565.f_7682[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_106565.f_7682.f_764)
	{
		if (MISC::IS_BIT_SET(Global_106565.f_7682.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_106565.f_7682.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_106565.f_7682.f_919[iParam0] = iVar1;
}

int func_109(int iParam0)//Position - 0x3CB4
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_110(int iParam0)//Position - 0x3D1E
{
	switch (iParam0)
	{
		case 0:
			return 104;
			break;
		
		case 1:
			return 105;
			break;
		
		case 2:
			return 106;
			break;
		
		case 3:
			return 107;
			break;
		
		case 4:
			return 108;
			break;
		
		case 5:
			return 109;
			break;
		
		case 6:
			return 110;
			break;
		
		case 7:
			return 111;
			break;
		
		case 8:
			return 112;
			break;
		
		case 9:
			return 93;
			break;
	}
	return 145;
}

int func_111()//Position - 0x3DBB
{
	func_77();
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

int func_112(int iParam0)//Position - 0x3E01
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
	}
	return -1;
}

int func_113(int iParam0)//Position - 0x3E3B
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 4:
			return 2;
			break;
		
		case 5:
			return 3;
			break;
		
		case 8:
			return 4;
			break;
		
		case 9:
			return 5;
			break;
	}
	return -1;
}

int func_114(int iParam0)//Position - 0x3E99
{
	return Global_106565.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_2;
}

void func_115(int iParam0)//Position - 0x3EB5
{
	if (func_114(iParam0) < 0)
	{
		func_116(iParam0, 0);
	}
	Global_106565.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_2++;
}

void func_116(int iParam0, int iParam1)//Position - 0x3EF8
{
	Global_106565.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_2 = iParam1;
}

void func_117(int iParam0, bool bParam1, int iParam2)//Position - 0x3F16
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_74();
	}
	if (func_130(iParam2) == 4)
	{
	}
	bVar0 = Global_106565.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!func_129(func_110(iParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_129(func_110(iParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_106565.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_128(iParam0, 0);
			func_125(func_110(iParam0), func_130(iParam2), 1);
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					MISC::SET_BIT(&(Global_2097152[func_124() /*10778*/].f_6165.f_1272), iParam0);
					func_121(15, 0);
					break;
			}
			func_120(iVar1);
			func_119(iParam0, iVar1);
			Global_105559.f_15[iParam0] = MISC::GET_GAME_TIMER();
		}
	}
	else if (bVar0)
	{
		func_118(func_110(iParam0), func_130(iParam2));
	}
}

void func_118(int iParam0, int iParam1)//Position - 0x403A
{
	if (Global_117[iParam0 /*10*/].f_8 != 147)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_106565.f_28044[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_106565.f_28044[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

void func_119(int iParam0, int iParam1)//Position - 0x407D
{
	if (iParam1 > -1)
	{
		Global_105559.f_4[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
	}
	else
	{
		Global_105559.f_4[iParam0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1200000, 2100000));
	}
}

void func_120(int iParam0)//Position - 0x40BA
{
	if (iParam0 != -1)
	{
		Global_105559.f_3 = (MISC::GET_GAME_TIMER() + iParam0);
	}
	else
	{
		Global_105559.f_3 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(21600000, 25200000));
	}
}

void func_121(int iParam0, int iParam1)//Position - 0x40F1
{
	int iVar0;
	
	if (func_123(iParam0, iParam1))
	{
		iVar0 = func_122();
		Global_2458506[iVar0] = iParam0;
	}
}

int func_122()//Position - 0x4114
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2458506[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_123(int iParam0, var uParam1)//Position - 0x4149
{
	if (Global_1312855)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312867) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_124()//Position - 0x41CF
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_125(int iParam0, int iParam1, bool bParam2)//Position - 0x41DC
{
	Global_3109 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 147)
	{
		func_127();
		if (iParam1 == 4)
		{
			Global_106565.f_28044[iParam0 /*29*/].f_12[0] = 1;
			Global_106565.f_28044[iParam0 /*29*/].f_12[1] = 1;
			Global_106565.f_28044[iParam0 /*29*/].f_12[2] = 1;
			Global_106565.f_28044[iParam0 /*29*/].f_24[0] = 1;
			Global_106565.f_28044[iParam0 /*29*/].f_24[1] = 1;
			Global_106565.f_28044[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_106565.f_28044[iParam0 /*29*/].f_12[iParam1] == 1 && Global_106565.f_28044[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_106565.f_28044[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_106565.f_28044[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_71590)
			{
				if (iParam1 != 4)
				{
					if (Global_14553 != iParam1)
					{
						Global_3082[iParam1 /*4*/] = { Global_106565.f_28044[iParam0 /*29*/].f_3 };
						Global_3099[iParam1] = 1;
						Global_3104[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14553)
					{
					}
					else
					{
						Global_3033[1 /*6*/] = { Global_106565.f_28044[iParam0 /*29*/].f_3 };
						Global_3033[1 /*6*/].f_5 = iParam1;
						func_126();
					}
				}
				else
				{
					Global_3033[1 /*6*/] = { Global_106565.f_28044[iParam0 /*29*/].f_3 };
					Global_3033[1 /*6*/].f_5 = iParam1;
					func_126();
				}
			}
			else
			{
				Global_3033[1 /*6*/] = { Global_106565.f_28044[iParam0 /*29*/].f_3 };
				Global_3033[1 /*6*/].f_5 = iParam1;
				func_126();
			}
		}
	}
}

void func_126()//Position - 0x4386
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_106565.f_28044[Global_3109 /*29*/].f_7)), 64);
	if (Global_3128 == 0)
	{
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("");
		StringCopy(&cVar16, HUD::_GET_LABEL_TEXT(&(Global_3033[1 /*6*/])), 64);
		sVar32 = HUD::_GET_LABEL_TEXT("CELL_253");
		HUD::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_3033[1 /*6*/]));
		HUD::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_2423, 0);
}

void func_127()//Position - 0x4407
{
	if (func_78(14))
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
		Global_14553 = func_76();
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

void func_128(int iParam0, int iParam1)//Position - 0x44A9
{
	Global_106565.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_129(int iParam0, int iParam1)//Position - 0x44C7
{
	if (Global_106565.f_28044[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0)//Position - 0x44EC
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 1:
			return 1;
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
			break;
	}
	return 4;
}

bool func_131(int iParam0, int iParam1)//Position - 0x4548
{
	if (iParam1 < 0)
	{
		iParam1 = func_74();
	}
	return Global_106565.f_243[iParam1 /*53*/].f_2[iParam0 /*5*/].f_4;
}

void func_132(float fParam0)//Position - 0x456E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_10(&(Global_106565.f_18097.f_175[iVar0 /*19*/].f_5)))
		{
			func_133(&(Global_106565.f_18097.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_10(&(Global_106565.f_18097.f_362[iVar1 /*3*/])))
		{
			func_133(&(Global_106565.f_18097.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	AUDIO::SKIP_RADIO_FORWARD();
}

void func_133(int iParam0, float fParam1)//Position - 0x45FF
{
	if (func_10(iParam0))
	{
		func_9(iParam0, (func_4(iParam0) + fParam1));
	}
}

void func_134()//Position - 0x4622
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_90174[iVar0] = Global_90174[iVar0 + 1];
		}
		else
		{
			Global_90174[iVar0] = MISC::GET_GAME_TIMER();
		}
		iVar0++;
	}
}

void func_135()//Position - 0x4663
{
	int iVar0;
	int iVar1;
	
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_276))
	{
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 50000);
		BRAIN::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		BRAIN::OPEN_SEQUENCE_TASK(&iVar1);
		BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_314, 1f, -1, 0.25f, 0, fLocal_326);
		if (iVar0 < 15000)
		{
			BRAIN::TASK_PLAY_ANIM(0, sLocal_276, "fidget_rub_hands", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		else if (iVar0 >= 15000 && iVar0 < 35000)
		{
			BRAIN::TASK_PLAY_ANIM(0, sLocal_276, "fidget_rub_chin", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		else
		{
			BRAIN::TASK_PLAY_ANIM(0, sLocal_276, "fidget_arm_swing", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		BRAIN::CLOSE_SEQUENCE_TASK(iVar1);
		BRAIN::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar1);
		BRAIN::CLEAR_SEQUENCE_TASK(&iVar1);
		func_27(&uLocal_333, 262144);
	}
}

void func_136(var uParam0)//Position - 0x4739
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!func_137(iVar0))
		{
			ENTITY::SET_ENTITY_COLLISION(iVar0, true, 0);
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
		}
	}
}

int func_137(int iParam0)//Position - 0x4770
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
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

int func_138(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6)//Position - 0x47B3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_162();
			iVar4 = func_162();
			func_161(&iVar4, iParam0);
			func_160(&iVar4, iParam1);
			func_159(&iVar4, 0);
			if (func_157(*uParam4, iVar4))
			{
				func_152(&iVar4, 0, 0, 0, 1, 0, 0);
			}
			func_149(*uParam4, iVar4, &iVar0, &iVar1, &iVar2, &uVar5, &uVar6, &uVar7);
			uParam4->f_11 = ((iVar0 + iVar1 * 60) + (iVar2 + iParam6) * 3600);
			func_132((SYSTEM::TO_FLOAT(uParam4->f_11) / 3600f));
			GRAPHICS::_0x5F0F3F56635809EF(0.6f);
			GRAPHICS::_SET_FAR_SHADOWS_SUPPRESSED(0);
			GRAPHICS::_0x0AE73D8DF3A762B2(false);
			func_148();
			uParam4->f_10 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(uParam4->f_10, "TIME_LAPSE_MASTER", 0, true);
			AUDIO::START_AUDIO_SCENE("TOD_SHIFT_SCENE");
			func_147();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if (fParam5 >= 0.5f)
			{
				if (uParam4->f_3 == 1)
				{
					if (MISC::GET_HASH_KEY(sParam2) != 0)
					{
						MISC::_SET_WEATHER_TYPE_OVER_TIME(sParam2, 1f);
					}
					if (MISC::GET_HASH_KEY(sParam3) != 0)
					{
						MISC::_CLEAR_CLOUD_HAT();
						MISC::_SET_CLOUD_HAT_TRANSITION(sParam3, 0);
					}
					uParam4->f_3 = 2;
				}
			}
			if (fParam5 >= 0.99f || fParam5 == -1f)
			{
				iVar4 = *uParam4;
				func_152(&iVar4, uParam4->f_11, 0, 0, 0, 0, 0);
				CLOCK::SET_CLOCK_TIME(func_146(iVar4), func_145(iVar4), func_144(iVar4));
				AUDIO::STOP_SOUND(uParam4->f_10);
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				return 1;
			}
			fVar10 = fParam5;
			fVar8 = 0.1f;
			fVar9 = 0.9f;
			fVar11 = func_143(((fVar10 - fVar8) / (fVar9 - fVar8)), 0f, 1f);
			iVar3 = SYSTEM::ROUND((IntToFloat(uParam4->f_11) * fVar11));
			iVar4 = *uParam4;
			func_152(&iVar4, iVar3, 0, 0, 0, 0, 0);
			CLOCK::SET_CLOCK_TIME(func_146(iVar4), func_145(iVar4), func_144(iVar4));
			if (func_142(iVar4) != CLOCK::GET_CLOCK_DAY_OF_MONTH())
			{
				CLOCK::SET_CLOCK_DATE(func_142(iVar4), func_141(iVar4), func_139(iVar4));
			}
			func_243();
			GRAPHICS::_0xE3E2C1B4C59DBC77(6);
			break;
	}
	return 0;
}

int func_139(int iParam0)//Position - 0x49B1
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_140(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_140(bool bParam0, int iParam1, int iParam2)//Position - 0x49D6
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_141(int iParam0)//Position - 0x49ED
{
	return iParam0 & 15;
}

int func_142(int iParam0)//Position - 0x49FA
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

float func_143(float fParam0, float fParam1, float fParam2)//Position - 0x4A0C
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

int func_144(int iParam0)//Position - 0x4A33
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_145(int iParam0)//Position - 0x4A46
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_146(int iParam0)//Position - 0x4A59
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

void func_147()//Position - 0x4A6C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		HUD::_REMOVE_NOTIFICATION(Global_106565.f_14135[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

int func_148()//Position - 0x4A98
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 0;
	}
	AUDIO::SET_VEH_RADIO_STATION(iVar0, "OFF");
	return 1;
}

void func_149(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x4AE6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_157(iParam0, iParam1))
	{
		iVar0 = func_141(iParam1);
		iVar1 = func_139(iParam0);
		iVar2 = (func_139(iParam0) - func_139(iParam1));
		iVar3 = (func_141(iParam0) - func_141(iParam1));
		iVar4 = (func_142(iParam0) - func_142(iParam1));
		iVar5 = (func_146(iParam0) - func_146(iParam1));
		iVar6 = (func_145(iParam0) - func_145(iParam1));
		iVar7 = (func_144(iParam0) - func_144(iParam1));
	}
	else
	{
		iVar0 = func_141(iParam0);
		iVar1 = func_139(iParam1);
		iVar2 = (func_139(iParam1) - func_139(iParam0));
		iVar3 = (func_141(iParam1) - func_141(iParam0));
		iVar4 = (func_142(iParam1) - func_142(iParam0));
		iVar5 = (func_146(iParam1) - func_146(iParam0));
		iVar6 = (func_145(iParam1) - func_145(iParam0));
		iVar7 = (func_144(iParam1) - func_144(iParam0));
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
		iVar4 = (iVar4 + func_151(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_150(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_150(float fParam0, float fParam1, float fParam2)//Position - 0x4CE7
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

int func_151(int iParam0, int iParam1)//Position - 0x4D29
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

void func_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4DCB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_139(*iParam0);
	iVar1 = func_141(*iParam0);
	iVar2 = func_142(*iParam0);
	iVar3 = func_146(*iParam0);
	iVar4 = func_145(*iParam0);
	iVar5 = func_144(*iParam0);
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
	iVar6 = func_151(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_151(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_153(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_153(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4F4D
{
	func_159(uParam0, iParam1);
	func_160(uParam0, iParam2);
	func_161(uParam0, iParam3);
	func_156(uParam0, iParam5);
	func_155(uParam0, iParam4);
	func_154(uParam0, iParam6);
}

void func_154(var uParam0, int iParam1)//Position - 0x4F85
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

void func_155(var uParam0, int iParam1)//Position - 0x500B
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_141(*uParam0);
	iVar1 = func_139(*uParam0);
	if (iParam1 < 1 || iParam1 > func_151(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_156(var uParam0, int iParam1)//Position - 0x505C
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

int func_157(int iParam0, int iParam1)//Position - 0x508F
{
	int iVar0;
	int iVar1;
	
	if (!func_158(iParam1) || !func_158(iParam0))
	{
		return 1;
	}
	iVar0 = func_139(iParam0);
	iVar1 = func_139(iParam1);
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
	iVar0 = func_144(iParam0);
	iVar1 = func_144(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_158(int iParam0)//Position - 0x519B
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
	iVar0 = func_144(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_145(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_146(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_139(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_141(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_142(iParam0);
	if (iVar5 < 1 || iVar5 > func_151(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_159(int iParam0, int iParam1)//Position - 0x5277
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 66060288);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_160(int iParam0, int iParam1)//Position - 0x52B3
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_161(int iParam0, int iParam1)//Position - 0x52EE
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15872);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

int func_162()//Position - 0x5328
{
	var uVar0;
	
	func_159(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_160(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_161(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_155(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_156(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_154(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

char* func_163()//Position - 0x536E
{
	char* sVar0;
	
	switch (uLocal_76[0])
	{
		case 0:
			sVar0 = "CLEARING";
			break;
		
		case 1:
			sVar0 = "OVERCAST";
			break;
		
		case 4:
			sVar0 = "CLOUDS";
			break;
		
		case 5:
			sVar0 = "CLEAR";
			break;
		
		case 8:
			sVar0 = "EXTRASUNNY";
			break;
		
		case 9:
			sVar0 = "RAIN";
			break;
		
		default:
			sVar0 = "EXTRASUNNY";
			break;
	}
	return sVar0;
}

int func_164()//Position - 0x53E5
{
	if (Global_15866 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_165()//Position - 0x5407
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_274[0], 0))
	{
		if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
		{
			func_181(&uLocal_81, 1, 0, func_182(uLocal_76[0]), 0, 1);
			func_168("SC_SEX", 0, 0, 0);
		}
		else
		{
			func_166(iLocal_274[0], "SEX_ORAL", 10);
		}
	}
}

void func_166(int iParam0, char* sParam1, int iParam2)//Position - 0x5469
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_167(iParam2), 1);
}

int func_167(int iParam0)//Position - 0x5480
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

int func_168(char* sParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x5675
{
	struct<6> Var0;
	char[] cVar6[8];
	
	if (func_180())
	{
		StringCopy(&Var0, sParam0, 24);
		if (bParam1)
		{
			func_179(&Var0, bParam2);
		}
		else
		{
			Var0 = { func_178(Var0) };
		}
		if (bParam3)
		{
			cVar6 = "SCAUD";
		}
		else
		{
			cVar6 = "SHAUD";
		}
		if (func_169(&uLocal_81, cVar6, &Var0, 7, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_169(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x56D0
{
	func_177(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_170(sParam2, iParam3, 0);
}

int func_170(char* sParam0, int iParam1, bool bParam2)//Position - 0x571E
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
					func_176();
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
		if (func_175(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_174();
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
				func_127();
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
				if (func_173())
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
			if (func_23())
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
			func_172();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_171();
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
		func_176();
	}
	return 0;
}

void func_171()//Position - 0x59EA
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

void func_172()//Position - 0x5A1C
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

int func_173()//Position - 0x5AB1
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

void func_174()//Position - 0x5B4A
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

bool func_175(int iParam0, int iParam1)//Position - 0x5BA2
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

void func_176()//Position - 0x5BDD
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

void func_177(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5C34
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

struct<6> func_178(char[24] cParam0)//Position - 0x5C8A
{
	int iVar0;
	
	StringConCat(&cParam0, "_", 24);
	iVar0 = uLocal_76[0];
	StringIntConCat(&cParam0, iVar0, 24);
	return cParam0;
}

void func_179(char* sParam0, bool bParam1)//Position - 0x5CAB
{
	StringConCat(sParam0, "_", 24);
	if (func_76() == 2)
	{
		StringConCat(sParam0, "T", 24);
	}
	else if (func_76() == 0)
	{
		StringConCat(sParam0, "M", 24);
	}
	else if (func_76() == 1)
	{
		StringConCat(sParam0, "F", 24);
	}
	if (bParam1)
	{
		*sParam0 = { func_178(*sParam0) };
	}
}

int func_180()//Position - 0x5D02
{
	if ((HUD::IS_MESSAGE_BEING_DISPLAYED() || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) || Global_15866 != 0)
	{
		return 0;
	}
	return 1;
}

void func_181(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x5D2B
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

char* func_182(int iParam0)//Position - 0x5DC6
{
	switch (iParam0)
	{
		case 0:
			return "Juliet";
			break;
		
		case 1:
			return "Nikki";
			break;
		
		case 2:
			return "Chastity";
			break;
		
		case 3:
			return "Cheetah";
			break;
		
		case 4:
			return "Sapphire";
			break;
		
		case 5:
			return "Infernus";
			break;
		
		case 6:
			return "Fufu";
			break;
		
		case 7:
			return "Peach";
			break;
		
		case 8:
			return "TaxiLiz";
			break;
		
		case 9:
			return "REHH2Hiker";
			break;
	}
	return "Invalid name";
}

float func_183()//Position - 0x5E79
{
	switch (uLocal_76[0])
	{
		case 1:
			return 325.6f;
			break;
		
		case 0:
			return 52.89f;
			break;
		
		case 4:
			return 14.5f;
			break;
		
		case 5:
			return 43.85f;
			break;
		
		case 8:
			return 193.5f;
			break;
		
		case 9:
			return 233.2f;
			break;
	}
	return 0f;
}

Vector3 func_184(int iParam0, vector3 vParam1)//Position - 0x5EF2
{
	var uVar0;
	
	vParam1.z = (vParam1.z + 0.15f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vParam1, &uVar0, 0, 0))
	{
		vParam1.z = uVar0;
	}
	if (func_185(iParam0))
	{
		ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, 1, false, 0, 1);
	}
	return vParam1;
}

bool func_185(int iParam0)//Position - 0x5F38
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, 0);
}

Vector3 func_186()//Position - 0x5F56
{
	switch (uLocal_76[0])
	{
		case 1:
			return 130.7462f, -1896.513f, 22.3246f;
			break;
		
		case 0:
			return -162.4315f, -1635.107f, 32.6529f;
			break;
		
		case 4:
			return -197.6542f, 92.3329f, 68.5846f;
			break;
		
		case 5:
			return -848.9675f, 510.048f, 89.8218f;
			break;
		
		case 8:
			return -28.5266f, -1565.793f, 28.918f;
			break;
		
		case 9:
			return 3315.045f, 5174.08f, 17.6765f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_187(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x600D
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()), 64);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(bParam1, bParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		HUD::CLEAR_HELP(1);
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_4))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_4, false);
			}
			CAM::DESTROY_CAM(uParam0->f_4, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, 0);
		}
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true, 0);
		}
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_10);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
	}
	func_15(bParam1, 1, 0, 0, 0, 0);
	func_147();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(250);
		}
	}
	if (!bParam1)
	{
		if (Global_106565.f_32743.f_4801 != -15)
		{
			Global_106565.f_32743.f_4801 = func_162();
		}
	}
}

float func_188(int iParam0)//Position - 0x6180
{
	if (func_10(iParam0))
	{
		if (func_6(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_5(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_189()//Position - 0x61BC
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar14[4];
	var uVar27[4];
	
	func_190(&vVar1, &vVar14, &uVar27);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!CAM::DOES_CAM_EXIST(iLocal_284[iVar0]))
		{
			iLocal_284[iVar0] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar1[iVar0 /*3*/], vVar14[iVar0 /*3*/], uVar27[iVar0], 0, 2);
			CAM::SHAKE_CAM(iLocal_284[iVar0], "HAND_SHAKE", 0.3f);
		}
		iVar0++;
	}
	Local_289.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
	CAM::ADD_CAM_SPLINE_NODE(Local_289.f_4, vVar1[0 /*3*/], vVar14[0 /*3*/], 6000, 3, 2);
	CAM::ADD_CAM_SPLINE_NODE(Local_289.f_4, vVar1[1 /*3*/], vVar14[1 /*3*/], 6000, 3, 2);
	CAM::SET_CAM_FOV(Local_289.f_4, uVar27[0]);
}

void func_190(var uParam0, var uParam1, var uParam2)//Position - 0x628E
{
	switch (uLocal_76[0])
	{
		case 1:
			*(uParam0[0 /*3*/]) = { 140.9085f, -1885.527f, 25.6959f };
			*(uParam1[0 /*3*/]) = { -9.0308f, 0f, 126.3829f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 141.712f, -1884.935f, 30.7241f };
			*(uParam1[1 /*3*/]) = { 4.7025f, 0f, 129.5531f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 139.1899f, -1885.865f, 24.96737f };
			*(uParam1[2 /*3*/]) = { -3.535496f, 0.081819f, 135.1308f };
			(*uParam2)[2] = 50f;
			*(uParam0[3 /*3*/]) = { 133.9669f, -1893.292f, 23.9573f };
			*(uParam1[3 /*3*/]) = { -1.8669f, -0.0329f, -5.5828f };
			(*uParam2)[3] = 50f;
			break;
		
		case 0:
			*(uParam0[0 /*3*/]) = { -186.5408f, -1629.328f, 35.8275f };
			*(uParam1[0 /*3*/]) = { -1.5588f, 0f, -118.8025f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -186.1923f, -1629.505f, 48.7132f };
			*(uParam1[1 /*3*/]) = { -1.2745f, 0f, -116.9616f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -184.9595f, -1632.193f, 36.32303f };
			*(uParam1[2 /*3*/]) = { -3.262451f, 0.073971f, -100.6756f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -164.7078f, -1632.25f, 34.0944f };
			*(uParam1[3 /*3*/]) = { -3.7303f, 0.0222f, 108.1824f };
			(*uParam2)[3] = 40f;
			break;
		
		case 4:
			*(uParam0[0 /*3*/]) = { -208.6886f, 112.8581f, 73.0855f };
			*(uParam1[0 /*3*/]) = { -0.1055f, 0f, -156.0082f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -208.9068f, 113.3747f, 85.2889f };
			*(uParam1[1 /*3*/]) = { 3.8438f, 0f, -157.0767f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -206.2357f, 106.941f, 72.07555f };
			*(uParam1[2 /*3*/]) = { -11.58381f, 0.084975f, -158.9702f };
			(*uParam2)[2] = 45f;
			*(uParam0[3 /*3*/]) = { -197.6886f, 94.7063f, 69.814f };
			*(uParam1[3 /*3*/]) = { 0.5155f, -0.0266f, 48.8652f };
			(*uParam2)[3] = 45f;
			break;
		
		case 5:
			*(uParam0[0 /*3*/]) = { -871.6285f, 520.8466f, 93.1945f };
			*(uParam1[0 /*3*/]) = { -0.1377f, -1.3933f, -105.9309f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -871.5255f, 521.1066f, 104.6356f };
			*(uParam1[1 /*3*/]) = { 3.1118f, -1.3933f, -105.9309f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -866.6436f, 514.6121f, 92.90275f };
			*(uParam1[2 /*3*/]) = { -5.957637f, -1.324997f, -101.9062f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -849.5522f, 514.2322f, 91.0095f };
			*(uParam1[3 /*3*/]) = { -1.626f, -1.3198f, 92.3739f };
			(*uParam2)[3] = 40f;
			break;
		
		case 8:
			*(uParam0[0 /*3*/]) = { -27.698f, -1584.646f, 31.1034f };
			*(uParam1[0 /*3*/]) = { 0.0044f, 0f, -1.9117f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -27.698f, -1584.646f, 40.4849f };
			*(uParam1[1 /*3*/]) = { 7.981f, 0f, -1.9117f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -28.63904f, -1579.74f, 30.82423f };
			*(uParam1[2 /*3*/]) = { -7.527712f, 0.030218f, -14.33051f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -28.6719f, -1568.09f, 29.7492f };
			*(uParam1[3 /*3*/]) = { -1.5414f, 0f, -168.6005f };
			(*uParam2)[3] = 40f;
			break;
		
		case 9:
			*(uParam0[0 /*3*/]) = { 3323.631f, 5148.861f, 20.9592f };
			*(uParam1[0 /*3*/]) = { 1.1547f, 1.0064f, 21.8733f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 3323.844f, 5148.672f, 28.2303f };
			*(uParam1[1 /*3*/]) = { 11.4168f, 1.0064f, 22.8025f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 3328.904f, 5157.818f, 20.5799f };
			*(uParam1[2 /*3*/]) = { -3.634001f, 1.039937f, 30.44809f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { 3315.368f, 5171.771f, 18.9066f };
			*(uParam1[3 /*3*/]) = { -2.8773f, 1.0064f, -103.0585f };
			(*uParam2)[3] = 40f;
			break;
	}
}

void func_191(int iParam0, vector3 vParam1)//Position - 0x67C2
{
	float fVar0;
	float fVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		BRAIN::SET_PED_PATH_AVOID_FIRE(iParam0, 1);
		if (BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1)
		{
			BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_339);
			BRAIN::OPEN_SEQUENCE_TASK(&iLocal_339);
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
			{
				BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 0, 16777216);
			}
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), vLocal_302);
				fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), vLocal_305);
				if (fVar1 < fVar0)
				{
					BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_274[0], 0);
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(func_192()))
				{
					BRAIN::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_192(), 0, 552, -1);
				}
				else
				{
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_302, 1f, -1, 0.25f, 64, 1193033728);
				}
			}
			if (iParam0 != PLAYER::PLAYER_PED_ID())
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_192()))
				{
					BRAIN::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_192(), 0, 546, -1);
				}
				else
				{
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam1, 1f, -1, 0.25f, 1, 1193033728);
				}
				if (func_25(iParam0, vParam1, 1) > 5f)
				{
					BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					BRAIN::TASK_PLAY_ANIM(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					BRAIN::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000));
					BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					BRAIN::TASK_PLAY_ANIM(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					BRAIN::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000));
					BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					BRAIN::TASK_PLAY_ANIM(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					BRAIN::TASK_PLAY_ANIM(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, -1, 0, 0, 0, 0, 0);
				}
			}
			BRAIN::CLOSE_SEQUENCE_TASK(iLocal_339);
			BRAIN::TASK_PERFORM_SEQUENCE(iParam0, iLocal_339);
		}
	}
}

char* func_192()//Position - 0x6990
{
	char* sVar0;
	
	if (uLocal_76[0] == 1)
	{
		sVar0 = "BC_NIKKI_H_F";
	}
	return sVar0;
}

void func_193(int iParam0, int iParam1)//Position - 0x69A9
{
	if (!PED::IS_PED_INJURED(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		BRAIN::TASK_VEHICLE_PARK(iParam0, iParam1, vLocal_308, fLocal_327, 3, 1092616192, 0);
	}
}

char* func_194()//Position - 0x69DF
{
	return "mini@strip_club@idles@bouncer@base";
}

char* func_195()//Position - 0x69EB
{
	if (func_76() == 0)
	{
		return "facials@p_m_zero@variations@happy";
	}
	else if (func_76() == 1)
	{
		return "facials@p_m_one@variations@happy";
	}
	else if (func_76() == 2)
	{
		return "facials@p_m_two@variations@happy";
	}
	return "facials@p_m_zero@variations@happy";
}

void func_196()//Position - 0x6A2A
{
	sLocal_276 = "move_p_m_one_idles@generic";
	STREAMING::REQUEST_ANIM_DICT(sLocal_276);
}

int func_197(int iParam0)//Position - 0x6A40
{
	if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("blimp")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("cargobob")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("cargobob2")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("cargobob3")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("buzzard")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("buzzard2")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("maverick")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("polmav")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("annihilator")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("frogger")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("frogger2")))
	{
		return 1;
	}
	return 0;
}

int func_198(var uParam0, vector3 vParam1, bool bParam4, float fParam5)//Position - 0x6B2D
{
	if (func_200(uParam0))
	{
		VEHICLE::SET_LAST_DRIVEN_VEHICLE(*uParam0);
		if (!func_199(vParam1))
		{
			ENTITY::SET_ENTITY_COORDS(*uParam0, vParam1, 1, false, 0, 1);
			if (bParam4)
			{
				ENTITY::SET_ENTITY_HEADING(*uParam0, fParam5);
			}
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 1084227584);
		}
		return 1;
	}
	return 0;
}

int func_199(vector3 vParam0)//Position - 0x6B80
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_200(var uParam0)//Position - 0x6BAA
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!func_137(iVar0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), vLocal_63, 0, 1, 0))
			{
				VEHICLE::SET_LAST_DRIVEN_VEHICLE(iVar0);
				ENTITY::SET_ENTITY_COLLISION(iVar0, false, 0);
				ENTITY::SET_ENTITY_VISIBLE(iVar0, false, 0);
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, 1);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_201(int iParam0)//Position - 0x6C1C
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
			if (func_202())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_202()//Position - 0x6C66
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

void func_203(bool bParam0)//Position - 0x6C98
{
	struct<4> Var0;
	float fVar4;
	
	func_64();
	if (ENTITY::IS_ENTITY_DEAD(iLocal_274[0], 0))
	{
		return;
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_308 + Vector(0f, 1f, 1f) * Vector(10f, 10f, 10f), vLocal_308 + Vector(0f, -1f, -1f) * Vector(10f, 10f, 10f), false, 1);
	fVar4 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_274[0], true));
	if (iLocal_78 != 9)
	{
		if (((fVar4 >= (200f / 2f) && func_180()) && !func_254(uLocal_333, 2)) || func_241(iLocal_274[0], 0))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_281))
			{
				HUD::REMOVE_BLIP(&iLocal_281);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_280))
			{
				HUD::REMOVE_BLIP(&iLocal_280);
			}
			func_238(0);
			func_82("SCLUB_HOME_R", uLocal_76[0]);
			iLocal_78 = 9;
		}
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (iLocal_78 != 8)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_281))
			{
				HUD::REMOVE_BLIP(&iLocal_281);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_280))
			{
				HUD::REMOVE_BLIP(&iLocal_280);
			}
			iLocal_78 = 8;
		}
	}
	if (func_227(iLocal_274[0], &uLocal_267, &iLocal_264))
	{
		func_65(4);
	}
	if (iLocal_78 <= 1)
	{
		func_246(1);
	}
	switch (iLocal_78)
	{
		case 0:
			iLocal_79 = 0;
			if (func_180())
			{
				if (!func_254(uLocal_333, 1))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_274[0], true);
					func_82("SCLUB_HOME_MEET", uLocal_76[0]);
					func_238(0);
					func_27(&uLocal_333, 1);
				}
				iLocal_78 = 1;
			}
			break;
		
		case 1:
			iLocal_79 = 1;
			Var0 = { func_70(uLocal_76[0]) };
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_340 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				iLocal_334 = ENTITY::GET_ENTITY_HEALTH(iLocal_340);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_274[0], true), 3f, 3f, 3f, false, true, 0) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_340, 0) && func_226(iLocal_340, iLocal_274[0], 1) <= 10f))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_274[0], false);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_340) && (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iLocal_340) < 1 || (!bParam0 && !VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_340)))))
				{
					if (!func_69("SCLUB_SMALL_CAR", &Var0))
					{
						func_66("SCLUB_SMALL_CAR", uLocal_76[0], 0);
						func_166(iLocal_274[0], "NEED_A_VEHICLE", 10);
					}
				}
				else
				{
					HUD::CLEAR_HELP(1);
					BRAIN::CLEAR_PED_TASKS(iLocal_274[0]);
					func_224();
					if (!func_254(uLocal_333, 2))
					{
						func_27(&uLocal_333, 2);
					}
					func_223();
					func_84();
					func_216(39, 1);
					func_216(40, 1);
					func_216(41, 1);
					func_216(42, 1);
					func_216(43, 1);
					func_216(44, 1);
					iLocal_78 = 2;
				}
			}
			else if (func_69("SCLUB_SMALL_CAR", &Var0))
			{
				HUD::CLEAR_HELP(1);
			}
			break;
		
		case 2:
			iLocal_79 = 2;
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_274[0], 0))
				{
					iLocal_78 = 3;
				}
			}
			else
			{
				func_166(iLocal_274[0], "NEED_A_VEHICLE", 10);
				iLocal_78 = 3;
			}
			break;
		
		case 3:
			iLocal_79 = 3;
			func_213();
			if (!func_164())
			{
				if (func_180())
				{
					PATHFIND::SET_ROADS_IN_AREA(vLocal_308 - Vector(3f, 3f, 3f), vLocal_308 + Vector(3f, 3f, 3f), false, 1);
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_308 - Vector(3f, 3f, 3f), vLocal_308 + Vector(3f, 3f, 3f), false, 1);
					MISC::CLEAR_AREA_OF_VEHICLES(vLocal_308, 10f, 0, 0, 0, 0, false, 0);
					MISC::CLEAR_AREA_OF_PEDS(vLocal_308, 10f, 0);
					iLocal_301 = PED::ADD_SCENARIO_BLOCKING_AREA(vLocal_308 - Vector(35f, 35f, 35f), vLocal_308 + Vector(35f, 35f, 35f), 0, 1, 1, 1);
					func_8(&iLocal_246);
					if (bParam0)
					{
						func_89(1);
						func_212();
					}
					else
					{
						iLocal_74 = 3;
					}
				}
			}
			break;
		
		case 4:
			iLocal_79 = 4;
			func_209(fVar4, vLocal_311);
			func_204();
			if ((func_4(&iLocal_258) > 45f || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vLocal_320) > (100f * 100f)) && func_25(PLAYER::PLAYER_PED_ID(), vLocal_311, 1) > 100f)
			{
				if (uLocal_76[0] == 8)
				{
					func_168("SC_WALK", 0, 0, 0);
				}
				else
				{
					func_166(iLocal_274[0], "GENERIC_FUCK_YOU", 10);
				}
				func_65(3);
			}
			else if (func_241(iLocal_274[0], 1))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_281))
				{
					HUD::REMOVE_BLIP(&iLocal_281);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_280))
				{
					HUD::REMOVE_BLIP(&iLocal_280);
				}
				func_238(0);
				func_82("SCLUB_HOME_R", uLocal_76[0]);
				iLocal_78 = 9;
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_308, 3f, 3f, 2f, true, true, 2) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_305, 5f, 5f, 2f, true, true, 1))
			{
				if (func_35(1, 0, 1))
				{
					iLocal_74 = 1;
				}
			}
			else if (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				func_212();
			}
			break;
		
		case 5:
			iLocal_79 = 5;
			func_209(fVar4, vLocal_308);
			func_204();
			func_224();
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_308, 1f, 1f, 2f, true, true, 2))
			{
				iLocal_78 = 6;
			}
			else
			{
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					func_212();
				}
				else
				{
					func_60(vLocal_308);
				}
				if (func_105("SCLUB_HOME_WALK"))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			break;
		
		case 6:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
				{
					if (func_58(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 3f, 2, 0.5f, 0, 1, 0))
					{
						func_57();
						func_191(iLocal_274[0], vLocal_305);
						if (uLocal_76[0] == 9 || uLocal_76[0] == 8)
						{
							func_168("SC_GO_DOOR", 0, 0, 0);
						}
						else
						{
							func_168("SC_FOLLOWD", 0, 0, 1);
						}
						iLocal_78 = 7;
					}
				}
			}
			else if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_274[0]);
				func_212();
				HUD::CLEAR_HELP(1);
			}
			break;
		
		case 7:
			iLocal_79 = 7;
			if ((!func_164() && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !func_254(uLocal_333, 2048))
			{
				Var0 = { func_70(uLocal_76[0]) };
				func_83("SCLUB_FOLLOW_H", &Var0, 7500, 1);
				func_84();
				func_238(0);
				func_27(&uLocal_333, 2048);
			}
			if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_311, 5f, 5f, 2f, false, true, 1) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_305, 5f, 5f, 2f, false, true, 1)) && PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if (func_35(1, 0, 1))
				{
					iLocal_74 = 1;
				}
			}
			break;
		
		case 8:
			if ((!func_254(uLocal_331, 4096) && !func_164()) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_274[0]))
			{
				if (iLocal_79 > 1 || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_274[0], true)) < (3f * 3f))
				{
					func_166(iLocal_274[0], "GENERIC_FRIGHTENED_MED", 10);
					func_27(&uLocal_331, 4096);
				}
			}
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_78 = iLocal_79;
			}
			break;
		
		case 9:
			if (fVar4 > 200f)
			{
				func_65(1);
			}
			else if (fVar4 <= (200f / 2f) && !func_241(iLocal_274[0], 1))
			{
				HUD::CLEAR_PRINTS();
				iLocal_78 = iLocal_79;
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					func_212();
				}
			}
			break;
	}
}

void func_204()//Position - 0x742A
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!func_254(uLocal_333, 16))
	{
		if (func_205())
		{
			func_27(&uLocal_333, 16);
		}
		else
		{
			return;
		}
	}
	sVar0 = func_98(iLocal_274[0], 0, 0);
	if (!func_254(uLocal_333, 8))
	{
		if (!func_254(uLocal_333, 4))
		{
			if (!func_254(uLocal_331, 256))
			{
				if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
				{
					func_168("SC_BJ", 0, 0, 0);
				}
				func_27(&uLocal_331, 256);
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT(sVar0);
				func_27(&uLocal_333, 4);
			}
		}
		else if (STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
		{
			func_92(iLocal_274[0], 1, 1, -1, 1);
			PED::SET_PED_KEEP_TASK(iLocal_274[0], true);
			func_7(&iLocal_255);
			func_27(&uLocal_333, 8);
		}
	}
	else if (func_254(uLocal_333, 4))
	{
		iVar1 = 0;
		bVar2 = ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_274[0], sVar0, func_93(4, 1, 1, func_96(iLocal_340)), 3);
		bVar3 = PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID());
		bVar4 = BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_274[0], 242628503) == 7;
		bVar5 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
		bVar6 = false;
		if (bVar5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				bVar6 = (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) && ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) > 5f);
			}
		}
		if ((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || func_4(&iLocal_255) > 35f) || SYSTEM::VDIST(vLocal_308, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 75f) || bVar3) || bVar6)
		{
			if (!bVar4 && !bVar2)
			{
				BRAIN::TASK_PLAY_ANIM(iLocal_274[0], sVar0, func_93(4, 1, 1, func_96(iLocal_340)), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			if (bVar3)
			{
				iLocal_335 = 2000;
			}
			iVar1 = 1;
		}
		else if (bVar4)
		{
			iVar1 = 1;
		}
		if (bVar2)
		{
			func_243();
		}
		if ((iVar1 && bVar4) && !bVar2)
		{
			if (!bVar3 && bVar5)
			{
				if (bVar6)
				{
					ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) - SYSTEM::CEIL((IntToFloat(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) * 0.1f))), 0);
					func_166(PLAYER::PLAYER_PED_ID(), "GENERIC_CURSE_HIGH", 10);
				}
				else
				{
					func_166(PLAYER::PLAYER_PED_ID(), "SEX_CLIMAX", 10);
				}
				func_27(&uLocal_331, 128);
			}
			STREAMING::REMOVE_ANIM_DICT(sVar0);
			func_72(&uLocal_333, 4);
		}
		if (!func_254(uLocal_331, 64))
		{
			if (func_4(&iLocal_255) > 10f)
			{
				func_166(PLAYER::PLAYER_PED_ID(), "SEX_GENERIC", 10);
				func_166(iLocal_274[0], "SEX_ORAL", 10);
				func_27(&uLocal_331, 64);
			}
		}
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		func_243();
	}
}

int func_205()//Position - 0x7716
{
	vector3 vVar0;
	var uVar3;
	
	if (!func_180())
	{
		return 0;
	}
	func_63(&vVar0, &uVar3, 0);
	if (((SYSTEM::VDIST(vLocal_308, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > (75f * 2f) && SYSTEM::VDIST(vVar0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > (75f / 2f)) && func_114(uLocal_76[0]) > 1) && func_206())
	{
		return 1;
	}
	return 0;
}

int func_206()//Position - 0x778C
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		if (func_208(iVar1, 0) && func_207(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_207(int iParam0)//Position - 0x77DC
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 16);
						iVar2 = MISC::GET_HASH_KEY(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == MISC::GET_HASH_KEY("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		if (VEHICLE::IS_VEHICLE_MODEL(iParam0, -1804415708))
		{
			if ((!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 2) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 3)) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 4))
			{
				return 0;
			}
		}
		if (VEHICLE::IS_VEHICLE_MODEL(iParam0, -682108547))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) == -1)
			{
				return 0;
			}
		}
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case 1486715695:
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 1663892749:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1910741341:
			case -1158091941:
			case -1834221859:
			case -1453479140:
			case -1954624455:
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case -526725184:
			case 1610027666:
			case -970031572:
			case 2071837743:
			case 1482989244:
			case 2130662788:
			case -1546132012:
			case 1410462333:
			case 1192783831:
			case -1304848574:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 954521785:
			case 584837381:
			case -2123959937:
			case 1074598648:
			case 1818992907:
			case -370341013:
			case 1240573865:
			case -627376728:
			case 986556497:
			case -1852541008:
				return 1;
				break;
		}
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0) == 931866387 && ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
	}
	return 0;
}

int func_208(int iParam0, bool bParam1)//Position - 0x7A94
{
	if ((((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if (((((((((((((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2")) || iParam0 == 886810209) || iParam0 == -212993243) || iParam0 == -121446169) || iParam0 == 1909189272) || iParam0 == 1617472902) || iParam0 == 1031562256) || iParam0 == 500482303) || iParam0 == 276065473) || iParam0 == 444994115) || iParam0 == -941272559) || iParam0 == -507495760)
	{
		return 0;
	}
	return 1;
}

void func_209(float fParam0, vector3 vParam1)//Position - 0x7C32
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (!func_254(uLocal_331, 262144))
	{
		if (func_211(iLocal_274[0]))
		{
			if (uLocal_76[0] == 8)
			{
				func_168("SC_STEALC", 0, 0, 0);
			}
			else
			{
				func_166(iLocal_274[0], "GENERIC_SHOCKED_MED", 10);
			}
			func_8(&iLocal_249);
			func_27(&uLocal_331, 262144);
		}
	}
	else if (func_4(&iLocal_249) > 10f)
	{
		func_72(&uLocal_331, 262144);
		func_8(&iLocal_249);
	}
	if ((fParam0 > 5f || !func_180()) || func_254(uLocal_333, 4))
	{
		return;
	}
	if (!func_254(uLocal_331, 1) && !func_254(uLocal_331, 128))
	{
		if (SYSTEM::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 75f)
		{
			if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
			{
				if (func_168("SC_NEAR", 0, 0, 0))
				{
					func_27(&uLocal_331, 1);
				}
			}
			else
			{
				func_27(&uLocal_331, 1);
			}
			MISC::CLEAR_AREA_OF_VEHICLES(vLocal_308, 5f, 0, 0, 0, 0, false, 0);
		}
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		if (!func_254(uLocal_331, 16))
		{
			func_166(iLocal_274[0], "NEED_A_VEHICLE", 10);
			func_27(&uLocal_331, 16);
			func_8(&iLocal_246);
		}
		if (!func_254(uLocal_331, 4))
		{
			func_72(&uLocal_331, 4);
		}
		if (!func_254(uLocal_331, 8))
		{
			func_72(&uLocal_331, 8);
		}
	}
	else
	{
		fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
		fVar2 = VEHICLE::_0x53AF99BAA671CA47(iVar0);
		if (fVar1 < (fVar2 * 0.9f) || fVar1 > (fVar2 * 0.1f))
		{
			func_8(&iLocal_252);
		}
		if (!func_254(uLocal_331, 4))
		{
			if (func_4(&iLocal_246) > 15f && func_4(&iLocal_252) > 5f)
			{
				func_166(iLocal_274[0], "DRIVEN_FAST", 10);
				func_27(&uLocal_331, 4);
				func_8(&iLocal_246);
			}
		}
		else if (func_4(&iLocal_246) < 5f)
		{
			func_72(&uLocal_331, 4);
			func_8(&iLocal_246);
		}
		if (!func_254(uLocal_331, 8))
		{
			if (func_4(&iLocal_246) > 15f && func_4(&iLocal_252) > 5f)
			{
				func_166(iLocal_274[0], "DRIVEN_SLOW", 10);
				func_27(&uLocal_331, 4);
				func_8(&iLocal_246);
			}
		}
		else if (func_4(&iLocal_246) < 5f)
		{
			func_72(&uLocal_331, 8);
			func_8(&iLocal_246);
		}
		if (!func_254(uLocal_331, 131072))
		{
			if (func_210(iLocal_274[0], &iLocal_334))
			{
				if (func_4(&iLocal_249) > 5f)
				{
					func_166(iLocal_274[0], "CRASH_GENERIC_DRIVEN", 10);
					func_27(&uLocal_331, 131072);
					func_8(&iLocal_246);
				}
			}
		}
		else if (func_4(&iLocal_249) > 5f)
		{
			func_72(&uLocal_331, 131072);
			func_8(&iLocal_249);
		}
		if (!func_254(uLocal_331, 65536))
		{
			if (func_4(&iLocal_246) > 30f || (func_4(&iLocal_246) > 10f && !func_254(uLocal_331, 32)))
			{
				func_166(iLocal_274[0], "BOOTY_FLIRT", 10);
				func_27(&uLocal_331, 32);
				func_27(&uLocal_331, 524288);
				func_8(&iLocal_246);
			}
			else if (func_254(uLocal_331, 524288))
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_274[0]) && func_4(&iLocal_246) > 4f)
				{
					func_166(PLAYER::PLAYER_PED_ID(), "BOOTY_FLIRT_RESP", 10);
					func_72(&uLocal_331, 524288);
				}
			}
		}
	}
}

int func_210(int iParam0, int iParam1)//Position - 0x7FE7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iVar0))
		{
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iVar0))
			{
				iVar1 = ENTITY::GET_ENTITY_HEALTH(iVar0);
				iVar2 = (*iParam1 - iVar1);
				*iParam1 = iVar1;
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar0);
				if (iVar2 > 10)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_211(int iParam0)//Position - 0x8041
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(108, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	return 0;
}

void func_212()//Position - 0x807F
{
	func_85();
	func_8(&iLocal_246);
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_280))
		{
			HUD::REMOVE_BLIP(&iLocal_280);
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_281))
		{
			iLocal_281 = func_61(vLocal_311, 0);
		}
		func_8(&iLocal_258);
		vLocal_320 = { ENTITY::GET_ENTITY_COORDS(iLocal_274[0], true) };
		iLocal_78 = 4;
	}
	else
	{
		func_8(&iLocal_249);
		func_60(vLocal_308);
		iLocal_78 = 5;
	}
}

void func_213()//Position - 0x80F4
{
	if (!func_254(uLocal_331, 1024))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (func_214(uLocal_76[0]))
			{
				if (!func_164())
				{
					func_166(iLocal_274[0], "NICE_CAR", 10);
					func_27(&uLocal_331, 1024);
				}
			}
		}
	}
}

int func_214(int iParam0)//Position - 0x8153
{
	int iVar0;
	int iVar1;
	
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		if (func_215(iParam0, iVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_215(int iParam0, int iParam1)//Position - 0x8188
{
	switch (iParam1)
	{
		case joaat("manana"):
		case joaat("tornado"):
		case joaat("tornado3"):
		case joaat("tornado4"):
		case joaat("ztype"):
		case joaat("regina"):
			if (iParam0 == 0)
			{
				return 1;
			}
			break;
		
		case joaat("blista"):
		case joaat("surge"):
		case joaat("dilettante"):
		case joaat("penumbra"):
		case joaat("asterope"):
			if (iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("dominator"):
		case joaat("gauntlet"):
		case joaat("phoenix"):
		case joaat("sabregt"):
		case joaat("bullet"):
		case joaat("banshee"):
		case joaat("peyote"):
		case joaat("buffalo"):
		case joaat("buffalo2"):
			if (iParam0 == 2)
			{
				return 1;
			}
			break;
		
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("jb700"):
		case joaat("stingergt"):
		case joaat("monroe"):
		case joaat("comet2"):
		case joaat("oracle"):
		case joaat("oracle2"):
		case joaat("intruder"):
		case joaat("jackal"):
		case joaat("exemplar"):
		case joaat("felon"):
		case joaat("superd"):
		case joaat("infernus"):
		case joaat("entityxf"):
		case joaat("adder"):
		case joaat("vacca"):
			if (iParam0 == 3 || iParam0 == 5)
			{
				return 1;
			}
			break;
		
		case joaat("baller"):
		case joaat("bison"):
		case joaat("dubsta"):
		case joaat("granger"):
		case joaat("patriot"):
		case joaat("baller2"):
		case joaat("bjxl"):
		case joaat("cavalcade"):
		case joaat("cavalcade2"):
		case joaat("gresley"):
		case joaat("landstalker"):
		case joaat("mesa"):
		case joaat("rancherxl"):
		case joaat("sandking"):
		case joaat("rebel"):
		case joaat("stretch"):
		case joaat("romero"):
		case joaat("coach"):
		case joaat("bus"):
			if (iParam0 == 4 || iParam0 == 7)
			{
				return 1;
			}
			break;
		
		case joaat("surano"):
		case joaat("rapidgt2"):
		case joaat("ninef2"):
		case joaat("zion2"):
		case joaat("tornado2"):
		case joaat("sentinel2"):
		case joaat("issi2"):
		case joaat("felon2"):
			if (iParam0 == 6 || iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("vader"):
		case joaat("akuma"):
		case joaat("bagger"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("double"):
		case joaat("hexer"):
		case joaat("nemesis"):
		case joaat("ruffian"):
			if (iParam0 == 8)
			{
				return 1;
			}
			break;
		
		case joaat("fbi"):
		case joaat("taxi"):
		case joaat("pranger"):
		case joaat("ambulance"):
		case joaat("police3"):
			if (iParam0 == 9)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_216(int iParam0, bool bParam1)//Position - 0x83F7
{
	if (bParam1)
	{
		if (!func_222(iParam0, 2, 1))
		{
			func_221(iParam0, 2, 1);
		}
	}
	else if (func_222(iParam0, 2, 1))
	{
		func_217(iParam0, 2, 1);
	}
}

void func_217(int iParam0, int iParam1, bool bParam2)//Position - 0x842E
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
		if (func_53() == 0)
		{
			iVar0 = func_219(func_220(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_218(func_220(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_106565.f_668[iParam0]), iParam1);
	}
}

void func_218(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x84A0
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_75(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_219(int iParam0, int iParam1, int iParam2)//Position - 0x84D0
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_75(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_220(int iParam0)//Position - 0x8502
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

void func_221(int iParam0, int iParam1, bool bParam2)//Position - 0x8823
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
		if (func_53() == 0)
		{
			iVar0 = func_219(func_220(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_218(func_220(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_106565.f_668[iParam0]), iParam1);
	}
}

int func_222(int iParam0, int iParam1, bool bParam2)//Position - 0x8895
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
		if (func_53() == 0)
		{
			return MISC::IS_BIT_SET(func_219(func_220(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_106565.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_223()//Position - 0x88FF
{
	if (uLocal_76[0] == 8)
	{
		func_168("SC_GREET", 0, 0, 0);
	}
	else
	{
		func_166(iLocal_274[0], "GENERIC_HI_FLIRTY", 10);
	}
}

void func_224()//Position - 0x8930
{
	if (!PED::IS_PED_IN_GROUP(iLocal_274[0]) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_274[0], true)) < 10f)
	{
		PED::SET_PED_AS_GROUP_MEMBER(iLocal_274[0], func_225());
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_274[0], 0);
	}
}

int func_225()//Position - 0x8982
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

float func_226(int iParam0, int iParam1, bool bParam2)//Position - 0x8992
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

int func_227(int iParam0, var uParam1, int iParam2)//Position - 0x89F0
{
	var uVar0;
	int iVar1;
	
	if (!func_10(iParam2))
	{
		func_7(iParam2);
	}
	if (func_4(iParam2) > 3f)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
		if (func_230(iParam0, iVar1, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_228(&uVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
				{
					if (!PED::_0xCC6E3B6BB69501F1(iLocal_72))
					{
						PED::ADD_RELATIONSHIP_GROUP("BootyCall", &iLocal_72);
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_72, 1862763509);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, iLocal_72);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_72);
					BRAIN::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
				}
			}
			func_8(iParam2);
			return 1;
		}
	}
	return 0;
}

void func_228(var uParam0)//Position - 0x8AAA
{
	switch (*uParam0)
	{
		case 1:
		case 4:
		case 16:
			func_229(1);
			break;
		
		case 2:
			break;
	}
}

void func_229(bool bParam0)//Position - 0x8ADD
{
	Global_105559 = 0;
	Global_105559.f_1 = -1;
	Global_105559.f_2 = -1;
	if (bParam0)
	{
		func_120(-1);
	}
}

int func_230(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x8B02
{
	int iVar0;
	bool bVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (!func_254(*uParam2, 1))
		{
			if (func_237(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_254(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_254(*uParam2, 4))
		{
			if (func_235(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_254(*uParam2, 8))
		{
			if (func_234(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_254(*uParam2, 128);
		if (bParam4)
		{
			if (func_231(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_254(*uParam2, 16))
		{
			if (func_231(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_231(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x8C2C
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_59)
		{
			iLocal_60 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_59 = true;
		}
		iLocal_61 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_62 = (iLocal_60 - iLocal_61);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_59)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return 1;
		}
	}
	if (func_233(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_232(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_232(int iParam0, bool bParam1)//Position - 0x8DF4
{
	return func_226(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, bParam1);
}

int func_233(int iParam0, int iParam1)//Position - 0x8E0C
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(iParam1, true)) < 2.5f)
			{
				if (PED::IS_PED_FACING_PED(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_234(int iParam0, int iParam1, var uParam2)//Position - 0x8E61
{
	if (WEAPON::IS_PED_ARMED(iParam0, 4))
	{
		if (PED::IS_PED_SHOOTING(iParam0) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_235(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x8EAF
{
	vector3 vVar0;
	int iVar3;
	
	iVar3 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	if (MISC::IS_BULLET_IN_AREA(vVar0, 4f, 1))
	{
		return 1;
	}
	if (MISC::HAS_BULLET_IMPACTED_IN_AREA(vVar0, SYSTEM::TO_FLOAT(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (WEAPON::IS_PED_ARMED(iParam0, 2))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0);
			}
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_236(iVar3))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (MISC::IS_PROJECTILE_IN_AREA((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_236(int iParam0)//Position - 0x9028
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0) != 0)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_226(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1))
							{
								if ((ENTITY::IS_ENTITY_A_VEHICLE(iVar1) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam0) || (ENTITY::IS_ENTITY_A_PED(iVar1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0)))
								{
									if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0, 24)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PAD::IS_CONTROL_PRESSED(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_237(int iParam0, var uParam1)//Position - 0x90F6
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_232(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - uParam1->f_1) > uParam1->f_3)
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

void func_238(int iParam0)//Position - 0x917B
{
	struct<4> Var0;
	
	if (HUD::DOES_BLIP_EXIST(uLocal_282[iParam0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_282[iParam0]));
	}
	uLocal_282[iParam0] = func_239(iLocal_274[iParam0], 0, 145);
	Var0 = { func_70(uLocal_76[iParam0]) };
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_282[iParam0], &Var0);
}

int func_239(int iParam0, bool bParam1, int iParam2)//Position - 0x91CC
{
	int iVar0;
	
	iVar0 = func_240(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_106565.f_28044[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_106565.f_28044[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_240(int iParam0, bool bParam1, bool bParam2)//Position - 0x921E
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_62(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_62(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_62(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_241(int iParam0, int iParam1)//Position - 0x92C2
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	float fVar7;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (PED::GET_PED_GROUP_INDEX(iParam0) == func_225())
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar6, 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(iParam0, iVar6, 0) && SYSTEM::VDIST(vVar0, vVar3) > 10f)
				{
					return 1;
				}
			}
		}
	}
	if (iParam1 && func_254(uLocal_333, 2))
	{
		fVar7 = MISC::ABSF((vVar0.z - vVar3.z));
		if (fVar7 > 8f)
		{
			return 1;
		}
	}
	return 0;
}

void func_242()//Position - 0x9369
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_274[0], 0))
	{
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			func_184(iLocal_274[0], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 0f, 2f, 0f));
			iLocal_74 = 1;
			iLocal_75 = 0;
		}
	}
}

void func_243()//Position - 0x93B9
{
	RECORDING::_0xEB2D525B57F42B40();
	func_244();
}

void func_244()//Position - 0x93C9
{
	Global_17272.f_134 = 1;
}

int func_245(int iParam0, bool bParam1)//Position - 0x93D7
{
	if (iParam0 == 0)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_01");
		}
		else
		{
			return joaat("s_f_y_stripper_01");
		}
	}
	else if (iParam0 == 1)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_02");
		}
		else
		{
			return joaat("s_f_y_stripper_02");
		}
	}
	return 0;
}

void func_246(bool bParam0)//Position - 0x941F
{
	struct<8> Var0;
	
	if (!func_158(iLocal_73))
	{
		iLocal_73 = func_162();
		func_152(&iLocal_73, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(5, 7), 0, 0, 0);
	}
	else if (bParam0)
	{
		if (!func_254(uLocal_333, 512))
		{
			if (func_253(iLocal_73) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_274[0]))
			{
				if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
				{
					StringCopy(&Var0, "SC_CANCEL_", 64);
					StringIntConCat(&Var0, uLocal_76[0], 64);
					func_181(&uLocal_81, 1, 0, func_182(uLocal_76[0]), 0, 1);
					func_252(&uLocal_81, func_110(uLocal_76[0]), "SHAUD", &Var0, 7, 0, 0, 1);
				}
				else
				{
					func_250();
				}
				func_249(iLocal_274[0]);
				func_27(&uLocal_333, 512);
			}
		}
		else if (func_248())
		{
			func_72(&uLocal_333, 512);
		}
		else if ((!func_164() && func_247()) && !func_248())
		{
			func_229(1);
			func_65(2);
		}
	}
}

int func_247()//Position - 0x9524
{
	if (Global_15866 == 0)
	{
		return 1;
	}
	return 0;
}

int func_248()//Position - 0x953B
{
	if (Global_15915 == 1 || Global_16882 == 1)
	{
		return 1;
	}
	return 0;
}

void func_249(int iParam0)//Position - 0x955E
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		BRAIN::SET_PED_PATH_AVOID_FIRE(iParam0, 1);
		if (BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1)
		{
			BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_339);
			BRAIN::OPEN_SEQUENCE_TASK(&iLocal_339);
			BRAIN::TASK_USE_MOBILE_PHONE_TIMED(0, 8000);
			BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_305, 1.5f, -1, 0.25f, 0, 1193033728);
			BRAIN::CLOSE_SEQUENCE_TASK(iLocal_339);
			BRAIN::TASK_PERFORM_SEQUENCE(iParam0, iLocal_339);
		}
	}
}

void func_250()//Position - 0x95C7
{
	int iVar0;
	
	if (func_251())
	{
		return;
	}
	iVar0 = func_113(uLocal_76[0]);
	func_107(-384575792, iVar0, 6, 3, func_111(), func_110(uLocal_76[0]), 0, 10000, -1, 0, -1, 0, 1);
}

int func_251()//Position - 0x9608
{
	if (func_53() == 0)
	{
		return 1;
	}
	return 0;
}

int func_252(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x961D
{
	func_177(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15914 = 1;
	Global_15873 = 1;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 0;
	Global_15871 = 0;
	Global_15918 = 0;
	Global_15920 = 0;
	Global_2621441 = 0;
	return func_170(sParam3, iParam4, bParam7);
}

bool func_253(int iParam0)//Position - 0x966B
{
	return func_157(func_162(), iParam0);
}

bool func_254(var uParam0, int iParam1)//Position - 0x967D
{
	return (uParam0 && iParam1) != 0;
}

int func_255(var uParam0, bool bParam1)//Position - 0x968C
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	char cVar5[64];
	struct<16> Var21;
	struct<8> Var37;
	
	func_283();
	func_63(&vVar0, &fVar3, bParam1);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (fLocal_329 == -1f)
		{
			fLocal_329 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vVar0);
		}
		if (iLocal_332 == -1)
		{
			iLocal_332 = uParam0->f_3;
		}
		if (!func_254(uLocal_333, 32))
		{
			func_279(&uLocal_278, func_281((*uParam0)[0], 0));
			func_278(&uLocal_278);
			func_27(&uLocal_333, 32);
			STREAMING::REQUEST_ANIM_DICT("mini@strip_club@idles@stripper");
			STREAMING::REQUEST_ANIM_DICT("gestures@f@standing@casual");
			func_277();
			return 0;
		}
		else if ((!func_276(&uLocal_278) || !STREAMING::HAS_ANIM_DICT_LOADED("mini@strip_club@idles@stripper")) || !func_275())
		{
			return 0;
		}
		if (bLocal_337)
		{
			if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
			{
				return 0;
			}
		}
		if (!func_254(uLocal_333, 1024))
		{
			uLocal_76[0] = (*uParam0)[0];
			iLocal_274[0] = PED::CREATE_PED(26, func_281((*uParam0)[0], 0), vVar0, fVar3, 1, true);
			func_269(iLocal_274[0], uLocal_76[0], 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_274[iVar4], true);
			PED::SET_PED_KEEP_TASK(iLocal_274[0], true);
			PED::SET_PED_DIES_WHEN_INJURED(iLocal_274[0], true);
			func_265(iLocal_274[0]);
			BRAIN::TASK_PLAY_ANIM(iLocal_274[0], "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -1.5f, -1, 1, 0, 0, 0, 0);
			BRAIN::TASK_LOOK_AT_ENTITY(iLocal_274[iVar4], PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_274[0], 0);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_274[0], func_182((*uParam0)[0]));
			func_181(&uLocal_81, 1, iLocal_274[0], func_182((*uParam0)[0]), 0, 1);
			func_27(&uLocal_333, 1024);
		}
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vVar0) > 100f)
		{
			if (func_180())
			{
				if (!func_254(uLocal_333, 1))
				{
					func_264(bParam1);
					func_238(0);
					func_27(&uLocal_333, 1);
				}
			}
			if (!func_254(uLocal_333, 64) && !func_254(uLocal_333, 512))
			{
				if (func_263(func_110((*uParam0)[0])))
				{
					StringCopy(&cVar5, "BC_PLYRC_", 64);
					if (func_76() == 2)
					{
						func_181(&uLocal_81, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						StringConCat(&cVar5, "T", 64);
					}
					else if (func_76() == 0)
					{
						func_181(&uLocal_81, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
						StringConCat(&cVar5, "M", 64);
					}
					else if (func_76() == 1)
					{
						func_181(&uLocal_81, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						StringConCat(&cVar5, "F", 64);
					}
					func_181(&uLocal_81, 3, 0, func_182((*uParam0)[0]), 0, 1);
					Var21 = { func_262() };
					func_257(&uLocal_81, func_110((*uParam0)[0]), "BCAUD", &cVar5, &cVar5, &Var21, &Var21, 12, 1, 0, 0, 0);
					func_27(&uLocal_333, 64);
				}
				if (func_158(iLocal_73))
				{
					if (func_253(iLocal_73))
					{
						if ((*uParam0)[0] == 8 || (*uParam0)[0] == 9)
						{
							StringCopy(&Var37, "SC_CANCEL_", 64);
							StringIntConCat(&Var37, (*uParam0)[0], 64);
							func_181(&uLocal_81, 1, 0, func_182((*uParam0)[0]), 0, 1);
							func_252(&uLocal_81, func_110((*uParam0)[0]), "SHAUD", &Var37, 12, 0, 0, 1);
						}
						else
						{
							func_250();
						}
						func_27(&uLocal_333, 512);
					}
				}
			}
			else if (func_248())
			{
				func_72(&uLocal_333, 64);
				func_72(&uLocal_333, 512);
			}
			else if ((!func_164() && func_247()) && !func_248())
			{
				func_256((*uParam0)[0]);
				func_229(1);
				func_65(2);
			}
			if (!func_254(uLocal_333, 128))
			{
				if (!func_33(0))
				{
					func_66("SCLUB_HOME_C_H", uLocal_76[0], 0);
					func_27(&uLocal_333, 128);
				}
			}
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vVar0) > (fLocal_329 + (200f * 3f)))
			{
				func_65(1);
			}
			else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vVar0) < fLocal_329)
			{
				fLocal_329 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vVar0);
			}
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (func_76() == 2)
	{
		func_181(&uLocal_81, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	else if (func_76() == 0)
	{
		func_181(&uLocal_81, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (func_76() == 1)
	{
		func_181(&uLocal_81, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	return 1;
}

void func_256(int iParam0)//Position - 0x9B0F
{
	if (Global_106565.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_1 < 0)
	{
		Global_106565.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_1 = 0;
	}
	Global_106565.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_1++;
}

int func_257(var uParam0, int iParam1, char* sParam2, char[4] cParam3, char[4] cParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x9B6E
{
	var uVar0;
	var uVar11;
	
	func_177(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_261();
	if (iParam8 == 1)
	{
		Global_15878 = 1;
	}
	else
	{
		Global_15878 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_259(2, &uVar0, &uVar11, cParam3, cParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_258(&uVar0, &uVar11, iParam7, bParam11);
}

int func_258(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x9BCD
{
	int iVar0;
	
	Global_15867 = 0;
	if (Global_15866 == 0 || Global_15868 == 2)
	{
		if (Global_15866 != 0)
		{
			if (iParam2 > Global_15868)
			{
				if (bParam3 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_14553.f_1 = 3;
					Global_15866 = 0;
					Global_15867 = 1;
					Global_15919 = 0;
					Global_15862 = 0;
					Global_15863 = 0;
				}
				else
				{
					func_176();
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
		if (func_175(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_174();
		Global_15155 = { Global_15320 };
		Global_15872 = Global_15873;
		Global_15879 = Global_15880;
		Global_2621442 = Global_2621441;
		Global_15881 = { Global_15897 };
		Global_15874 = Global_15875;
		Global_16856 = Global_16857;
		Global_16864 = { Global_16870 };
		Global_16862 = Global_16863;
		Global_16858 = Global_16859;
		Global_16860 = Global_16861;
		Global_15485.f_368 = Global_16853;
		Global_15485.f_369 = Global_16854;
		Global_15485.f_370 = Global_16855;
		Global_15862 = Global_15863;
		Global_15864 = Global_15865;
		if (Global_16124 == 0)
		{
			Global_16020[0 /*6*/] = { Global_16046[0 /*6*/] };
			Global_16020[1 /*6*/] = { Global_16046[1 /*6*/] };
			Global_16072[0 /*6*/] = { Global_16098[0 /*6*/] };
			Global_16072[1 /*6*/] = { Global_16098[1 /*6*/] };
			Global_16033[0 /*6*/] = { Global_16059[0 /*6*/] };
			Global_16033[1 /*6*/] = { Global_16059[1 /*6*/] };
			Global_16085[0 /*6*/] = { Global_16111[0 /*6*/] };
			Global_16085[1 /*6*/] = { Global_16111[1 /*6*/] };
		}
		if (Global_15872)
		{
			MISC::CLEAR_BIT(&Global_2423, 20);
			MISC::CLEAR_BIT(&Global_2424, 17);
			MISC::CLEAR_BIT(&Global_2425, 0);
			if (bParam3)
			{
				func_127();
				if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_173())
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
					if (Global_16124 == 0)
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
			}
			if (func_23())
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
			}
			func_172();
			Global_15876 = bParam3;
		}
		Global_15868 = iParam2;
		if (Global_15862 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15862)
			{
				StringCopy(&(Global_15485.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15485.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14732 = 0;
		func_171();
		return 1;
	}
	if (Global_15866 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15868 || iParam2 == Global_15868)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_176();
	}
	return 0;
}

void func_259(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x9F37
{
	func_260(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_260(var uParam0)//Position - 0x9FA7
{
	Global_15863 = uParam0;
	Global_15873 = 1;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16863 = 0;
	Global_2621441 = 0;
}

void func_261()//Position - 0x9FCD
{
	Global_15914 = 0;
	Global_15873 = 1;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_15880 = 0;
	Global_16863 = 0;
	Global_15871 = 0;
	Global_15918 = 0;
	Global_15920 = 0;
	Global_2621441 = 0;
}

struct<16> func_262()//Position - 0xA006
{
	struct<16> Var0;
	
	StringCopy(&Var0, "BC_DECR_", 64);
	StringIntConCat(&Var0, uLocal_76[0], 64);
	return Var0;
}

int func_263(int iParam0)//Position - 0xA024
{
	if ((Global_16980 || Global_16979) || Global_16981)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 147)
	{
		if (Global_14553.f_1 == 10)
		{
			if (Global_1738 == iParam0)
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
	return 0;
}

void func_264(bool bParam0)//Position - 0xA088
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_82("SCLUB_HOME_MEE4", uLocal_76[0]);
			}
			else
			{
				func_82("SCLUB_HOME_MEET", uLocal_76[0]);
			}
			break;
		
		case 8:
			func_82("SCLUB_HOME_LIZ", uLocal_76[0]);
			break;
		
		case 9:
			func_82("SCLUB_HOME_HITCH", uLocal_76[0]);
			break;
	}
}

void func_265(int iParam0)//Position - 0xA11B
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("s_f_y_stripper_02"))
	{
		func_268(iParam0, 2, MISC::GET_RANDOM_INT_IN_RANGE(0, 3));
		func_267(iParam0, 2, MISC::GET_RANDOM_INT_IN_RANGE(0, 3));
		func_266(iParam0, 0, 0);
	}
}

void func_266(int iParam0, int iParam1, int iParam2)//Position - 0xA153
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 6, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, iParam1, iParam2, 0);
	}
}

void func_267(int iParam0, int iParam1, int iParam2)//Position - 0xA178
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 3, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, iParam1, iParam2, 0);
	}
}

void func_268(int iParam0, int iParam1, int iParam2)//Position - 0xA19D
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 8, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iParam1, iParam2, 0);
	}
}

void func_269(int iParam0, int iParam1, bool bParam2)//Position - 0xA1C4
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam0);
		bVar0 = false;
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_stripperlite"))
		{
			bVar0 = true;
		}
		switch (iParam1)
		{
			case 0:
				if (bVar0)
				{
					func_274(iParam0, 1, 0);
					func_273(iParam0, 1, 0);
					func_267(iParam0, 1, 0);
					func_272(iParam0, 1, 0);
					func_271(iParam0, 1, -1, -1);
				}
				else
				{
					func_274(iParam0, 1, 1);
					func_273(iParam0, 2, 0);
					func_267(iParam0, 0, 0);
					func_272(iParam0, 0, 0);
					func_268(iParam0, 1, 0);
					func_270(iParam0, 0, 0);
					func_271(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 1:
				if (bVar0)
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 0, 0);
					func_267(iParam0, 0, 0);
					func_272(iParam0, 0, 0);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 0, 0);
					func_267(iParam0, 0, 0);
					func_272(iParam0, 0, 0);
					func_266(iParam0, 4, 0);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, 0, 4);
				}
				break;
			
			case 2:
				if (bVar0)
				{
					func_274(iParam0, 1, 0);
					func_273(iParam0, 1, 1);
					func_267(iParam0, 1, 0);
					func_272(iParam0, 1, 0);
					func_271(iParam0, 1, -1, -1);
				}
				else
				{
					func_274(iParam0, 0, 1);
					func_273(iParam0, 1, 1);
					func_267(iParam0, 1, 0);
					func_272(iParam0, 1, 1);
					func_268(iParam0, 1, 0);
					func_270(iParam0, 1, 0);
					func_271(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 3:
				if (bVar0)
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 0, 1);
					func_267(iParam0, 0, 1);
					func_272(iParam0, 0, 1);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 2, 0);
					func_267(iParam0, 0, 2);
					func_272(iParam0, 1, 1);
					func_266(iParam0, 0, 0);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, 2, 0);
				}
				break;
			
			case 4:
				if (bVar0)
				{
					func_274(iParam0, 1, 0);
					func_273(iParam0, 1, 0);
					func_267(iParam0, 1, 0);
					func_272(iParam0, 1, 0);
					func_271(iParam0, 1, -1, -1);
				}
				else
				{
					func_274(iParam0, 1, 0);
					func_273(iParam0, 2, 1);
					func_267(iParam0, 1, 2);
					func_272(iParam0, 0, 2);
					func_268(iParam0, 1, 0);
					func_270(iParam0, 1, 2);
					func_271(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 5:
				if (bVar0)
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 0, 0);
					func_267(iParam0, 0, 0);
					func_272(iParam0, 0, 0);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_274(iParam0, 1, 1);
					func_273(iParam0, 1, 0);
					func_267(iParam0, 0, 1);
					func_272(iParam0, 0, 2);
					func_266(iParam0, 2, 0);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, 1, 2);
				}
				break;
			
			case 6:
				if (bVar0)
				{
					func_274(iParam0, 1, 0);
					func_273(iParam0, 1, 0);
					func_267(iParam0, 1, 0);
					func_272(iParam0, 1, 0);
					func_271(iParam0, 1, -1, -1);
				}
				else
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 1, 0);
					func_267(iParam0, 0, 1);
					func_272(iParam0, 0, 1);
					func_268(iParam0, 1, 0);
					func_270(iParam0, 0, 1);
					func_271(iParam0, bParam2, 0, 1);
				}
				break;
			
			case 7:
				if (bVar0)
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 0, 1);
					func_267(iParam0, 0, 0);
					func_272(iParam0, 0, 0);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_274(iParam0, 1, 0);
					func_273(iParam0, 0, 2);
					func_267(iParam0, 1, 1);
					func_272(iParam0, 0, 1);
					func_266(iParam0, 0, 0);
					func_268(iParam0, 1, 0);
					func_271(iParam0, bParam2, 0, 0);
				}
				break;
			
			case 8:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 1, 0);
				break;
			
			case 9:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, 0);
				break;
			}
	}
}

void func_270(int iParam0, int iParam1, int iParam2)//Position - 0xA61F
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 11, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, iParam1, iParam2, 0);
	}
}

void func_271(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xA646
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iVar0 == func_245(0, 0) || iVar0 == func_245(0, 1))
	{
		if (bParam1)
		{
			func_267(iParam0, 2, 0);
			func_268(iParam0, 1, 0);
		}
	}
	else if (iVar0 == func_245(1, 0) || iVar0 == func_245(1, 1))
	{
		if (bParam1)
		{
			func_267(iParam0, 0, iParam2);
			func_266(iParam0, iParam3, 0);
			func_268(iParam0, 1, 0);
		}
	}
	else if (iVar0 == joaat("mp_f_stripperlite"))
	{
		if (bParam1)
		{
			func_268(iParam0, 1, 0);
		}
	}
}

void func_272(int iParam0, int iParam1, int iParam2)//Position - 0xA6EA
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 4, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, iParam1, iParam2, 0);
	}
}

void func_273(int iParam0, int iParam1, int iParam2)//Position - 0xA70F
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 2, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, iParam1, iParam2, 0);
	}
}

void func_274(int iParam0, int iParam1, int iParam2)//Position - 0xA734
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 0, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, iParam1, iParam2, 0);
	}
}

int func_275()//Position - 0xA759
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_192()))
	{
		return 1;
	}
	else if (BRAIN::GET_IS_WAYPOINT_RECORDING_LOADED(func_192()))
	{
		return 1;
	}
	return 0;
}

int func_276(var uParam0)//Position - 0xA786
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_277()//Position - 0xA7CD
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_192()))
	{
		BRAIN::REQUEST_WAYPOINT_RECORDING(func_192());
	}
}

void func_278(var uParam0)//Position - 0xA7E9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_279(var uParam0, int iParam1)//Position - 0xA819
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_280(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_280(var uParam0)//Position - 0xA876
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_281(int iParam0, bool bParam1)//Position - 0xA8A2
{
	int iVar0;
	
	if (bParam1)
	{
		return joaat("mp_f_stripperlite");
	}
	iVar0 = func_110(iParam0);
	if (iVar0 != 145)
	{
		return func_282(iVar0);
	}
	return func_245(0, 0);
}

int func_282(int iParam0)//Position - 0xA8D5
{
	if (!func_79(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_283()//Position - 0xA900
{
	switch (uLocal_76[0])
	{
		case 1:
			vLocal_302 = { 128.1002f, -1895.001f, 22.4811f };
			vLocal_305 = { 128.1059f, -1896.819f, 22.6792f };
			vLocal_308 = { 133.9411f, -1881.89f, 22.5257f };
			vLocal_311 = { 130.1663f, -1893.057f, 22.3748f };
			vLocal_314 = { 133.4958f, -1891.641f, 22.4252f };
			fLocal_326 = 330.5705f;
			fLocal_327 = 244f;
			vLocal_323 = { 146.293f, -1888.049f, 22.2193f };
			fLocal_328 = fLocal_327;
			break;
		
		case 0:
			vLocal_302 = { -161.9628f, -1636.501f, 33.0339f };
			vLocal_305 = { -159.9415f, -1637.307f, 33.0339f };
			vLocal_308 = { -178.6316f, -1629.522f, 32.1789f };
			vLocal_311 = { -166.1453f, -1633.102f, 32.6574f };
			vLocal_314 = { -166.6636f, -1633.229f, 32.6567f };
			fLocal_326 = 108.072f;
			fLocal_327 = 180.9811f;
			vLocal_323 = { vLocal_308 };
			fLocal_328 = fLocal_327;
			break;
		
		case 4:
			vLocal_302 = { -198.3824f, 87.8785f, 68.7436f };
			vLocal_305 = { -197.2292f, 86.3497f, 68.7561f };
			vLocal_308 = { -200.9078f, 113.537f, 68.5518f };
			vLocal_311 = { -200.1384f, 96.9809f, 68.5203f };
			vLocal_314 = { -199.5068f, 95.7042f, 68.5193f };
			fLocal_326 = 48.99f;
			fLocal_327 = 64.3f;
			vLocal_323 = { vLocal_308 };
			fLocal_328 = fLocal_327;
			break;
		
		case 5:
			vLocal_302 = { -849.0348f, 510.6906f, 89.8218f };
			vLocal_305 = { -849.0408f, 508.5767f, 89.8218f };
			vLocal_308 = { -846.1005f, 520.2202f, 89.6217f };
			vLocal_311 = { -851.8972f, 512.73f, 89.6217f };
			vLocal_314 = { -851.8746f, 513.6746f, 89.6217f };
			fLocal_326 = 92.365f;
			fLocal_327 = 293f;
			vLocal_323 = { -860.4819f, 514.2496f, 88.1473f };
			fLocal_328 = fLocal_327;
			break;
		
		case 8:
			vLocal_302 = { -28.2427f, -1555.892f, 29.6918f };
			vLocal_305 = { -24.8589f, -1556.846f, 29.6819f };
			vLocal_308 = { -41.8174f, -1575.609f, 28.2831f };
			vLocal_311 = { -25.3404f, -1556.341f, 29.6919f };
			vLocal_314 = { -27.7382f, -1570.572f, 29.3f };
			fLocal_326 = 181.352f;
			fLocal_327 = 47.9206f;
			vLocal_323 = { vLocal_308 };
			fLocal_328 = fLocal_327;
			break;
		
		case 9:
			vLocal_302 = { 3313.487f, 5175.831f, 18.619f };
			vLocal_305 = { 3310.816f, 5176.331f, 18.619f };
			vLocal_308 = { 3334.321f, 5161.122f, 17.2996f };
			vLocal_311 = { 3317.788f, 5171.707f, 17.4471f };
			vLocal_314 = { 3318.076f, 5171.805f, 17.4385f };
			fLocal_326 = 236.4579f;
			vLocal_323 = { 3322.927f, 5148.607f, 17.3141f };
			fLocal_328 = 310.8648f;
			break;
	}
}

int func_284()//Position - 0xAC78
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bLocal_337)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_285(int iParam0, int iParam1, bool bParam2)//Position - 0xACD6
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_289();
			}
			else
			{
				return 0;
			}
		}
		if (!func_288())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_289();
					}
					else
					{
						return 0;
					}
				}
				if (func_287())
				{
					if (!bParam2)
					{
						func_289();
					}
					else
					{
						return 0;
					}
				}
				if (func_286(155))
				{
					if (!bParam2)
					{
						func_289();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_289();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_289();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_289();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_286(int iParam0)//Position - 0xADEB
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_287()//Position - 0xAE02
{
	return Global_2448756.f_581;
}

bool func_288()//Position - 0xAE11
{
	return Global_1312844;
}

void func_289()//Position - 0xAE1D
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_290()//Position - 0xAE29
{
	GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	func_84();
	HUD::CLEAR_PRINTS();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_301, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_308 - Vector(3f, 3f, 3f), vLocal_308 + Vector(3f, 3f, 3f), true, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(vLocal_308 - Vector(3f, 3f, 3f), vLocal_308 + Vector(3f, 3f, 3f), 15f, 1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_274[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_274[0], 0))
		{
			if (!func_254(uLocal_333, 8192))
			{
				BRAIN::TASK_WANDER_STANDARD(iLocal_274[0], 1193033728, 0);
			}
			PED::SET_PED_KEEP_TASK(iLocal_274[0], true);
			if (!PED::_0xCC6E3B6BB69501F1(iLocal_72))
			{
				PED::ADD_RELATIONSHIP_GROUP("BootyCall", &iLocal_72);
			}
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_72, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, iLocal_72);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_274[0], iLocal_72);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_274[0]));
	}
	if (iLocal_332 != -1)
	{
		func_292(&iLocal_332);
	}
	if (bLocal_71)
	{
		func_136(&uLocal_70);
	}
	PLAYER::_0xDE45D1A1EF45EE61(PLAYER::PLAYER_ID(), 0);
	func_119(uLocal_76[0], -1);
	Global_105559 = 0;
	func_291(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_291(bool bParam0)//Position - 0xAF61
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		func_216(iVar0, bParam0);
		iVar0++;
	}
}

void func_292(int iParam0)//Position - 0xAF84
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_36387)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_36386 = 0;
	Global_36388 = 0;
	Global_36425 = 15;
	Global_56491 = 0;
	Global_56492 = 0;
}

