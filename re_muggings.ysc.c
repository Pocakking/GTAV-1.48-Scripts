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
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	vector3 vLocal_67 = { 0f, 0f, 0f };
	vector3 vLocal_68 = { 0f, 0f, 0f };
	float fLocal_69 = 0f;
	var uLocal_70 = 0;
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	vector3 vLocal_74 = { 0f, 0f, 0f };
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	vector3 vLocal_79 = { 0f, 0f, 0f };
	int iLocal_80 = 0;
	vector3 vLocal_81 = { 0f, 0f, 0f };
	vector3 vLocal_82 = { 0f, 0f, 0f };
	vector3 vLocal_83 = { 0f, 0f, 0f };
	vector3 vLocal_84 = { 0f, 0f, 0f };
	char[] cLocal_85[8] = 0;
	char* sLocal_86 = NULL;
	char* sLocal_87 = NULL;
	char* sLocal_88 = NULL;
	char* sLocal_89 = NULL;
	char* sLocal_90 = NULL;
	char* sLocal_91 = NULL;
	char* sLocal_92 = NULL;
	char* sLocal_93 = NULL;
	char* sLocal_94 = NULL;
	char* sLocal_95 = NULL;
	char* sLocal_96 = NULL;
	char* sLocal_97 = NULL;
	char* sLocal_98 = NULL;
	char* sLocal_99 = NULL;
	char* sLocal_100 = NULL;
	char* sLocal_101 = NULL;
	char* sLocal_102 = NULL;
	int iLocal_103 = 0;
	vector3 vLocal_104 = { 0f, 0f, 0f };
	vector3 vLocal_105 = { 0f, 0f, 0f };
	vector3 vLocal_106 = { 0f, 0f, 0f };
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	bool bLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	vector3 vLocal_121 = { 0f, 0f, 0f };
	int iLocal_122 = 0;
	bool bLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	bool bLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	bool bLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	float fLocal_139 = 0f;
	vector3 vLocal_140 = { 0f, 0f, 0f };
	vector3 vLocal_141 = { 0f, 0f, 0f };
	vector3 vLocal_142 = { 0f, 0f, 0f };
	vector3 vLocal_143 = { 0f, 0f, 0f };
	vector3 vLocal_144 = { 0f, 0f, 0f };
	vector3 vLocal_145 = { 0f, 0f, 0f };
	vector3 vLocal_146 = { 0f, 0f, 0f };
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 16;
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
	char[] cLocal_319[8] = 0;
	char[] cLocal_320[8] = 0;
	char[] cLocal_321[8] = 0;
	char* sLocal_322 = NULL;
	char* sLocal_323 = NULL;
	char* sLocal_324 = NULL;
	char* sLocal_325 = NULL;
	char* sLocal_326 = NULL;
	char* sLocal_327 = NULL;
	char* sLocal_328 = NULL;
	char* sLocal_329 = NULL;
	char* sLocal_330 = NULL;
	vector3 vLocal_331 = { 0f, 0f, 0f };
	vector3 vLocal_332 = { 0f, 0f, 0f };
	char[] cLocal_333[8] = 0;
	char[] cLocal_334[8] = 0;
	int iLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = -1;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 1000;
	var uLocal_346 = 1000;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 15;
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
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 1;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	vector3 vLocal_626 = { 0f, 0f, 0f };
	struct<2> Local_627 = { 0, 5 } ;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 5;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	
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
	vLocal_81 = { -131.052f, -1627f, 31.1755f };
	vLocal_82 = { 287.888f, -284.603f, 52.967f };
	vLocal_83 = { -319.66f, -832.28f, 31.61f };
	vLocal_84 = { 31f, -1019f, 28.5f };
	sLocal_102 = "";
	cLocal_319 = "RANDOM@MUGGING3";
	cLocal_320 = "pickup_object";
	cLocal_333 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	iLocal_335 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (iLocal_46 == 5 || iLocal_46 == 12)
		{
			func_292(25, iLocal_80);
			func_274();
		}
		else
		{
			func_274();
		}
	}
	vLocal_104 = { ScriptParam_627.f_1[0 /*3*/] };
	func_273(&uLocal_349, 3);
	func_272();
	if ((iLocal_80 == 1 && func_271(55)) && !func_270(55))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_229(vLocal_104, 25, iLocal_80, 0, 0))
	{
		func_226(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	bVar0 = false;
	while (true)
	{
		SYSTEM::WAIT(0);
		func_223(&uLocal_349);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		func_222(iLocal_63, &uLocal_348);
		if (TASK::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || bLocal_123)
		{
			switch (iLocal_44)
			{
				case 0:
					if (func_208())
					{
						PED::SET_CREATE_RANDOM_COPS(0);
						MISC::CLEAR_AREA_OF_VEHICLES(-127.9025f, -1574.084f, 36.4128f, 10f, 0, 0, 0, 0, false, 0);
						iLocal_130 = 1;
						iLocal_44 = 1;
					}
					else if (func_207())
					{
						func_274();
					}
					break;
				
				case 1:
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (iLocal_117 == 0)
						{
							iLocal_117 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(99, vLocal_104, 0f);
						}
						PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
						switch (iLocal_46)
						{
							case 1:
								func_199();
								break;
							
							case 2:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("MUGGING_INTERACTION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								switch (iLocal_47)
								{
									case 0:
										GRAPHICS::DRAW_DEBUG_TEXT_2D("INITIAL_MUGGING_SEQ", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (PED::IS_PED_INJURED(iLocal_61) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), 0))
										{
											bVar0 = PED::IS_PED_INJURED(iLocal_60);
											if (!OBJECT::DOES_PICKUP_EXIST(iLocal_151))
											{
											}
											if (bVar0 == 0 && iLocal_80 == 1)
											{
												PED::SET_PED_TO_RAGDOLL(iLocal_60, 500, 1000, 0, 0, 0, 0);
												BRAIN::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
												PED::SET_PED_KEEP_TASK(iLocal_60, true);
												func_198(1);
												func_193();
											}
										}
										else
										{
											func_163();
										}
										if (iLocal_625 == 1 && bLocal_123 == 1)
										{
											iLocal_46 = 4;
										}
										else if (bLocal_123)
										{
											iLocal_47 = 2;
										}
										break;
									
									case 2:
										GRAPHICS::DRAW_DEBUG_TEXT_2D("VIC_CRY_OUT", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										func_162();
										if (iLocal_52 && !func_161())
										{
											iLocal_47 = 4;
										}
										break;
									
									case 4:
										GRAPHICS::DRAW_DEBUG_TEXT_2D("ASK_PLAYER_FOR_HELP", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (func_160())
										{
											func_159();
										}
										if (bLocal_129)
										{
											iLocal_47 = 5;
										}
										if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_60, 242628503) == 7)
										{
											BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
											BRAIN::TASK_LOOK_AT_ENTITY(0, iLocal_61, 5000, 0, 2);
											BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000);
											BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
											BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
											BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
											BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
											BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
											BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
										}
										break;
									
									case 5:
										func_156();
										if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, 0))
										{
											if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_60, 242628503) == 7)
											{
												BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
												BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_61, 0);
												BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
												BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
												BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
												BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
												BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
												BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
											}
										}
										break;
								}
								if (func_155())
								{
									iLocal_46 = 11;
								}
								if (bLocal_123)
								{
								}
								func_154();
								if (iLocal_47 == 0)
								{
									if (func_152())
									{
										if (iLocal_119 == 4)
										{
											if (HUD::DOES_BLIP_EXIST(iLocal_64))
											{
												HUD::REMOVE_BLIP(&iLocal_64);
											}
											if (HUD::DOES_BLIP_EXIST(iLocal_63))
											{
												HUD::REMOVE_BLIP(&iLocal_63);
											}
											if (!HUD::DOES_BLIP_EXIST(iLocal_65))
											{
												iLocal_65 = func_150(iLocal_151);
											}
											iLocal_46 = 4;
										}
										else
										{
											iLocal_46 = 3;
										}
									}
									if (func_149())
									{
										func_148();
									}
								}
								if (func_147())
								{
									func_146();
									func_145();
									if (ENTITY::IS_ENTITY_AT_COORD(iLocal_60, vLocal_146, 7f, 7f, 7f, false, true, 0))
									{
										iLocal_119 = 2;
										iLocal_46 = 3;
									}
									else
									{
										iLocal_46 = 4;
									}
								}
								if (bLocal_123)
								{
									if (!PED::IS_PED_IN_COMBAT(iLocal_61, 0))
									{
										func_143(iLocal_64, &uLocal_118);
									}
									else if (HUD::DOES_BLIP_EXIST(iLocal_64))
									{
										if (HUD::GET_BLIP_COLOUR(iLocal_64) == 1)
										{
										}
										else
										{
											HUD::SET_BLIP_AS_FRIENDLY(iLocal_64, false);
											HUD::SET_BLIP_COLOUR(iLocal_64, 1);
										}
									}
								}
								if (func_142())
								{
									iLocal_46 = 10;
								}
								break;
							
							case 4:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_141(1);
								if (func_160())
								{
									func_159();
									func_156();
								}
								if (func_155())
								{
									iLocal_46 = 11;
								}
								func_133();
								break;
							
							case 5:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("PLAYER_HAS_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_141(1);
								if (!bLocal_126)
								{
									func_132(iLocal_60, &uLocal_153);
									uLocal_153 = uLocal_153;
									func_131();
									func_130();
									func_129();
									if (func_128())
									{
										func_127();
										func_193();
									}
									if (func_121(func_122()) < iLocal_152)
									{
										iLocal_46 = 12;
									}
								}
								func_57();
								break;
							
							case 10:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_56();
								break;
							
							case 3:
								func_55();
								break;
							
							case 11:
								func_54();
								break;
							
							case 6:
								if (func_155())
								{
									iLocal_46 = 11;
								}
								func_41();
								break;
							
							case 8:
								if (!PED::IS_PED_INJURED(iLocal_60))
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
									{
										iLocal_46 = 6;
									}
									else
									{
										func_274();
									}
								}
								break;
							
							case 9:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
								{
									if (PED::IS_PED_INJURED(iLocal_61))
									{
										if (HUD::DOES_BLIP_EXIST(iLocal_64))
										{
											HUD::REMOVE_BLIP(&iLocal_64);
										}
										if (!ENTITY::DOES_ENTITY_EXIST(iLocal_60))
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
											{
												OBJECT::DELETE_OBJECT(&iLocal_62);
											}
											func_40();
											iLocal_54 = 1;
											func_133();
										}
									}
								}
								break;
							
							case 12:
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
								{
									OBJECT::DELETE_OBJECT(&iLocal_62);
								}
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
								func_193();
								break;
							
							case 13:
								func_39();
								break;
							}
					}
					if (bLocal_58)
					{
						if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
						{
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
							{
								if (SYSTEM::VDIST(vLocal_146, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 150f)
								{
									func_274();
								}
							}
						}
					}
					else if (bLocal_123)
					{
						if (!PED::IS_PED_INJURED(iLocal_61))
						{
							if (iLocal_46 != 6)
							{
								if (func_38(PLAYER::PLAYER_PED_ID(), iLocal_61, 1) > 150f && (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_61) || ENTITY::IS_ENTITY_OCCLUDED(iLocal_61)))
								{
									func_37(&uLocal_336, 0, 0);
									iLocal_46 = 8;
								}
								else
								{
									func_4();
									func_3(iLocal_64, iLocal_61, 100f, 1061158912, 0);
								}
							}
						}
						else
						{
							func_37(&uLocal_336, 0, 0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
					{
						if (!PED::IS_PED_INJURED(iLocal_60))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 1))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
								{
									if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_62, iLocal_60))
									{
										ENTITY::DETACH_ENTITY(iLocal_62, 1, true);
									}
								}
							}
						}
					}
					if (iLocal_124)
					{
						if (!iLocal_137)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_61, 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_60, 0))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_61, true), ENTITY::GET_ENTITY_COORDS(iLocal_60, true), true) > 100f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_61, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 100f)
								{
									BRAIN::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
									iLocal_137 = 1;
								}
							}
						}
					}
					if (bLocal_123 && !iLocal_124)
					{
						if (!PED::IS_PED_INJURED(iLocal_61))
						{
							if (iLocal_80 == 3)
							{
								if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_61, 1805844857) != 1)
								{
									BRAIN::CLEAR_PED_SECONDARY_TASK(iLocal_61);
									BRAIN::TASK_SMART_FLEE_PED(iLocal_61, iLocal_60, 200f, -1, 0, 0);
									PED::FORCE_PED_MOTION_STATE(iLocal_61, -530524, true, 0, 0);
									iLocal_124 = 1;
								}
							}
							else if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_61, 1805844857) != 1)
							{
								BRAIN::CLEAR_PED_SECONDARY_TASK(iLocal_61);
								BRAIN::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
								PED::FORCE_PED_MOTION_STATE(iLocal_61, -530524, true, 0, 0);
								iLocal_124 = 1;
							}
							if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_61, -2134635134))
							{
								BRAIN::TASK_SMART_FLEE_PED(iLocal_61, iLocal_60, 200f, -1, 0, 0);
								PED::FORCE_PED_MOTION_STATE(iLocal_61, -530524, true, 0, 0);
								iLocal_124 = 1;
							}
							if (iLocal_80 == 1 || iLocal_80 == 4)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_319, sLocal_329, 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_61, cLocal_319, sLocal_329) >= 0.922f)
									{
										BRAIN::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
										PED::FORCE_PED_MOTION_STATE(iLocal_61, -530524, true, 0, 0);
										iLocal_124 = 1;
									}
								}
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_319, sLocal_327, 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_61, cLocal_319, sLocal_327) >= 0.922f)
									{
										BRAIN::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
										PED::FORCE_PED_MOTION_STATE(iLocal_61, -530524, true, 0, 0);
										iLocal_124 = 1;
									}
								}
							}
						}
					}
					func_1();
					break;
			}
		}
		else
		{
			func_274();
		}
	}
}

void func_1()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
	{
		if (PED::IS_PED_INJURED(iLocal_60))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
			{
				if (PED::IS_PED_INJURED(iLocal_61))
				{
					func_274();
				}
			}
		}
	}
	if (PED::IS_PED_INJURED(iLocal_60))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_63))
		{
			HUD::REMOVE_BLIP(&iLocal_63);
		}
	}
	if (PED::IS_PED_INJURED(iLocal_61))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_64))
		{
			HUD::REMOVE_BLIP(&iLocal_64);
		}
	}
	if (!iLocal_135)
	{
		if (PED::IS_PED_INJURED(iLocal_61))
		{
			func_2(&uLocal_154, 1);
			iLocal_135 = 1;
		}
	}
	if (!iLocal_136)
	{
		if (PED::IS_PED_INJURED(iLocal_60))
		{
			func_2(&uLocal_154, 2);
			iLocal_136 = 1;
		}
	}
}

void func_2(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_3(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
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

void func_4()
{
	if (!PED::IS_PED_INJURED(iLocal_61) || !bLocal_109)
	{
		func_5(&uLocal_336, iLocal_61, 0, 0, 1, 1, 1);
	}
	else
	{
		func_37(&uLocal_336, 0, 0);
	}
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_6(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_6(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_7(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_7(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_37(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_8(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_8(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
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
	iVar0 = sParam3;
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
	if (func_36(iVar0))
	{
		func_35();
	}
	if (func_34(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
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
			if (func_29(uParam0, bParam5, bParam7, 0))
			{
				func_25(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_13(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
						{
							if (!func_36(iVar0))
							{
								func_12(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_11(1);
								}
							}
						}
					}
				}
			}
			else if (func_13(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
					{
						if (!func_36(iVar0))
						{
							func_12(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_11(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam3))
			{
				if (func_36(sParam3))
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
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_37(uParam0, iVar0, 1);
				}
			}
			if (!func_29(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_10(uParam0))
				{
					func_9(uParam0);
				}
			}
		}
	}
	else
	{
		func_37(uParam0, iVar0, 0);
	}
}

void func_9(var uParam0)
{
	if (func_34(PLAYER::PLAYER_PED_ID()))
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

int func_10(var uParam0)
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

int func_11(bool bParam0)
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

void func_12(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

int func_13(char* sParam0)
{
	if (!func_14(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_36(sParam0)) || func_36("CMN_HINT"))
		{
			HUD::CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_36425)
	{
		case 0:
		case 3:
			if (func_11(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_11(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_11(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_14(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_24(0))
	{
		return 0;
	}
	if (func_23())
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
	if ((func_22() || func_21(Global_4456448.f_161209)) || func_20())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			iVar1 = func_19(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::_0xE33FFA906CE74880(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == 562680400 && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == 1181327175 && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == -1693015116 && iVar1 == 0) && func_18(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1680665)
	{
		return 0;
	}
	if (func_15(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_15(int iParam0)
{
	if (iParam0 != func_17())
	{
		if (func_16(iParam0, 1, 1))
		{
			return Global_2424047[iParam0 /*416*/].f_309.f_5 != -1;
		}
		else if ((Global_1312867 && iParam0 == PLAYER::PLAYER_ID()) && func_16(iParam0, 1, 0))
		{
			return Global_2424047[iParam0 /*416*/].f_309.f_5 != -1;
		}
	}
	return 0;
}

int func_16(int iParam0, bool bParam1, bool bParam2)
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

int func_17()
{
	return -1;
}

int func_18(int iParam0, int iParam1)
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

int func_19(int iParam0, int iParam1)
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

var func_20()
{
	return Global_2448756.f_16;
}

bool func_21(int iParam0)
{
	return iParam0 == 51;
}

var func_22()
{
	return Global_2448756.f_15;
}

bool func_23()
{
	return MISC::GET_GAME_TIMER() <= Global_17411.f_5878 + 100;
}

int func_24(int iParam0)
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

void func_25(var uParam0, int iParam1, vector3 vParam2, int iParam3)
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
		func_37(uParam0, 0, 0);
	}
	if (func_28(vParam2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_26())
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
	if (iParam3 == 1726668277)
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
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam3);
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

bool func_26()
{
	return func_27(PLAYER::PLAYER_ID());
}

int func_27(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_28(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_29(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_33(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_33(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_10(uParam0))
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
						if (!func_33(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_32(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_32(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_33(bParam1, bParam2, bParam3))
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
					if (!func_33(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_32(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
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
				else if (!func_33(bParam1, bParam2, bParam3))
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
						if (func_31(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_30(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_30(bParam1, bParam2, bParam3))
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
					else if (func_31(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_10(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_14(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_35();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_30(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
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

int func_31(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
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

int func_32(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
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

int func_33(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
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

int func_34(int iParam0)
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

void func_35()
{
	MISC::SET_BIT(&Global_2424, 4);
}

int func_36(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_37(var uParam0, int iParam1, int iParam2)
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
		if (func_36(uParam0->f_3))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_36(sVar0))
		{
			HUD::CLEAR_HELP(1);
		}
	}
}

float func_38(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
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
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar1, bParam2);
}

void func_39()
{
	func_274();
}

void func_40()
{
	if (!OBJECT::DOES_PICKUP_EXIST(iLocal_151))
	{
		if (PED::IS_PED_INJURED(iLocal_61))
		{
			vLocal_146 = { PED::GET_DEAD_PED_PICKUP_COORDS(iLocal_61, 1067030938, 1069547520) };
		}
		else
		{
			vLocal_146 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_61, true), 1.2f, 1.5f) };
		}
		iLocal_151 = OBJECT::CREATE_PICKUP(joaat("pickup_money_wallet"), vLocal_146, iLocal_120, iLocal_152, 1, iLocal_77);
		iLocal_65 = func_150(iLocal_151);
		func_37(&uLocal_336, 0, 0);
		bLocal_58 = true;
	}
}

void func_41()
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "flee_backward_loop_shopkeeper", 3))
		{
			BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
			BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			BRAIN::TASK_WANDER_STANDARD(0, 1193033728, 0);
			BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
			BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "flee_forward_loop_shopkeeper", 3))
		{
			BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
			BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			BRAIN::TASK_WANDER_STANDARD(0, 1193033728, 0);
			BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
			BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
		func_42(&uLocal_154, cLocal_85, sLocal_92, 4, 0, 0, 0);
		iLocal_128 = 1;
		PED::SET_PED_KEEP_TASK(iLocal_60, true);
		SYSTEM::WAIT(0);
		func_274();
	}
}

int func_42(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_53(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_43(sParam2, iParam3, 0);
}

int func_43(char* sParam0, int iParam1, bool bParam2)
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
					func_52();
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
		if (func_51(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_50();
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
				func_48();
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
				if (func_47())
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
			if (func_46())
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
			func_45();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_44();
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
		func_52();
	}
	return 0;
}

void func_44()
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

void func_45()
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

int func_46()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_47()
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

void func_48()
{
	if (func_49(14))
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
		Global_14553 = func_122();
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

bool func_49(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_50()
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

bool func_51(int iParam0, int iParam1)
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

void func_52()
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

void func_53(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_54()
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		BRAIN::CLEAR_PED_TASKS(iLocal_60);
		BRAIN::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_60, true);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
		{
			OBJECT::DELETE_OBJECT(&iLocal_62);
		}
		SYSTEM::WAIT(0);
		if (HUD::DOES_BLIP_EXIST(iLocal_63))
		{
			HUD::REMOVE_BLIP(&iLocal_63);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
	}
	if (PED::IS_PED_INJURED(iLocal_61) || PED::IS_PED_INJURED(iLocal_60))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_64))
		{
			HUD::REMOVE_BLIP(&iLocal_64);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_63))
		{
			HUD::REMOVE_BLIP(&iLocal_63);
		}
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
		{
			if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
			{
				iLocal_54 = 1;
				func_133();
			}
			else
			{
				func_141(0);
				func_274();
			}
		}
		else
		{
			func_274();
		}
	}
}

void func_55()
{
	bool bVar0;
	
	func_133();
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
	{
		if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
		{
		}
	}
	if (iLocal_119 == 1)
	{
		if (!iLocal_49)
		{
			if (!PED::IS_PED_INJURED(iLocal_61))
			{
				BRAIN::CLEAR_PED_TASKS(iLocal_61);
				BRAIN::TASK_COMBAT_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_61, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_60))
			{
				if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
				{
					if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
					{
						BRAIN::CLEAR_PED_TASKS(iLocal_60);
						BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
						BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(iLocal_151), 1f, 20000, 0.25f, 0, 1193033728);
						BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
						BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
						BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
					}
				}
			}
			iLocal_49 = 1;
		}
	}
	if (iLocal_119 == 2)
	{
		if (!iLocal_49)
		{
			if (!PED::IS_PED_INJURED(iLocal_61))
			{
				BRAIN::CLEAR_PED_TASKS(iLocal_61);
				BRAIN::TASK_COMBAT_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_61, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_61, false, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_61);
			}
			if (!PED::IS_PED_INJURED(iLocal_60))
			{
				if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
				{
					if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_60, OBJECT::GET_PICKUP_COORDS(iLocal_151), 10f, 10f, 10f, false, true, 0))
						{
							if (iLocal_80 == 3)
							{
								if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "handsup_standing_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "handsup_standing_base", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "handsup_standing_exit", 3))
								{
									BRAIN::CLEAR_PED_TASKS(iLocal_60);
									BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
									BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(iLocal_151), 1f, 20000, 0.25f, 0, 1193033728);
									BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
									BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
									BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
									iLocal_49 = 1;
								}
							}
							else if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, sLocal_330, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, sLocal_326, 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, sLocal_328, 3))
							{
								BRAIN::CLEAR_PED_TASKS(iLocal_60);
								BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
								BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(iLocal_151), 1f, 20000, 0.25f, 0, 1193033728);
								BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
								BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
								BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
								iLocal_49 = 1;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					if (iLocal_80 == 3)
					{
						if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "handsup_standing_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "handsup_standing_base", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "handsup_standing_exit", 3))
						{
							BRAIN::CLEAR_PED_TASKS(iLocal_60);
							BRAIN::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
							PED::SET_PED_KEEP_TASK(iLocal_60, true);
							if (HUD::DOES_BLIP_EXIST(iLocal_63))
							{
								HUD::REMOVE_BLIP(&iLocal_63);
							}
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
							iLocal_49 = 1;
							iLocal_46 = 9;
						}
					}
					else if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, sLocal_330, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, sLocal_326, 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, sLocal_328, 3))
					{
						BRAIN::CLEAR_PED_TASKS(iLocal_60);
						BRAIN::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_60, true);
						if (HUD::DOES_BLIP_EXIST(iLocal_63))
						{
							HUD::REMOVE_BLIP(&iLocal_63);
						}
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
						iLocal_49 = 1;
						iLocal_46 = 9;
					}
				}
			}
		}
	}
	if (iLocal_119 == 3)
	{
		if (!iLocal_49)
		{
			if (!PED::IS_PED_INJURED(iLocal_61))
			{
				BRAIN::CLEAR_PED_TASKS(iLocal_61);
				BRAIN::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_61, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_61, false, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_61);
			}
			if (!PED::IS_PED_INJURED(iLocal_60))
			{
				BRAIN::CLEAR_PED_TASKS(iLocal_60);
				BRAIN::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_60, true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
			}
			iLocal_54 = 1;
			iLocal_49 = 1;
		}
	}
	if (iLocal_119 == 1 || iLocal_119 == 2)
	{
		if (!PED::IS_PED_INJURED(iLocal_60))
		{
			if (iLocal_49)
			{
				if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
				{
					if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_320, "pickup_low", 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_60, cLocal_320, "pickup_low") > 0.5f)
							{
								if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
								{
									if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
									{
										func_42(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0);
										OBJECT::REMOVE_PICKUP(iLocal_151);
										bLocal_50 = true;
									}
								}
							}
						}
						else if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_60, 242628503) == 7)
						{
							BRAIN::CLEAR_PED_TASKS(iLocal_60);
							BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
							BRAIN::TASK_PLAY_ANIM(0, cLocal_320, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
							BRAIN::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
							BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
							BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
							BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
							PED::SET_PED_KEEP_TASK(iLocal_60, true);
						}
					}
					else if (bLocal_50)
					{
						PED::SET_PED_MONEY(iLocal_60, iLocal_152);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
						func_198(3);
						func_193();
					}
					else
					{
						BRAIN::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_60, true);
						if (HUD::DOES_BLIP_EXIST(iLocal_63))
						{
							HUD::REMOVE_BLIP(&iLocal_63);
						}
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
						iLocal_49 = 1;
						iLocal_46 = 12;
					}
				}
				else if (bLocal_50)
				{
					PED::SET_PED_MONEY(iLocal_60, iLocal_152);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
					func_198(3);
					func_193();
				}
				else
				{
					BRAIN::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_60, true);
					if (HUD::DOES_BLIP_EXIST(iLocal_63))
					{
						HUD::REMOVE_BLIP(&iLocal_63);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
					iLocal_49 = 1;
					iLocal_46 = 12;
				}
			}
		}
		else
		{
			iLocal_46 = 9;
		}
	}
}

void func_56()
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		BRAIN::CLEAR_PED_TASKS(iLocal_60);
		BRAIN::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_60, true);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
	}
}

void func_57()
{
	int iVar0;
	vector3 vVar1;
	var uVar2;
	struct<2> Var3;
	vector3 vVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	int iVar8;
	int iVar9;
	
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (!bLocal_126)
		{
			if (iLocal_127)
			{
				vVar7 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				iVar8 = 1;
				if (iLocal_80 == 1)
				{
					if (vVar7.z > 33.5f)
					{
						iVar8 = 0;
					}
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 5f, 5f, 5f, 0, 1, 0) && iVar8 == 1)
				{
					if (func_119(2))
					{
						HUD::CLEAR_HELP(1);
					}
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						if (func_118(1, 0, 1))
						{
							if (!func_117())
							{
								if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
								{
									func_109(1, 1, 1, 0, 0, 0);
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										while (!func_107(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fLocal_71, 1, 1056964608, 0, 1, 0) || func_161())
										{
											HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
											SYSTEM::WAIT(0);
										}
										if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
										{
											BRAIN::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
									}
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
									if (!PED::IS_PED_INJURED(iLocal_60))
									{
										PED::SET_PED_CAN_RAGDOLL(iLocal_60, 0);
									}
									HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
									EVENT::REMOVE_ALL_SHOCKING_EVENTS(0);
									EVENT::REMOVE_SHOCKING_EVENT(iLocal_117);
									if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										func_105();
									}
									bLocal_126 = true;
									SYSTEM::SETTIMERA(0);
								}
							}
						}
					}
				}
				else
				{
					func_103(ENTITY::GET_ENTITY_COORDS(iLocal_60, true), &uLocal_70, &fLocal_71);
				}
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 15f, 15f, 15f, 0, 1, 0))
			{
				BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
				BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				BRAIN::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				if (iLocal_45 == 2)
				{
					BRAIN::TASK_PLAY_ANIM(0, cLocal_333, "RETURNING_FRONT_A", 8f, -1000f, -1, 0, 0, 0, 0, 0);
				}
				BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
				BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
				BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
				PED::FORCE_PED_MOTION_STATE(iLocal_60, -668482597, false, 0, 0);
				iLocal_127 = 1;
			}
		}
		if (bLocal_126)
		{
			switch (iLocal_125)
			{
				case 0:
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_60))
						{
							func_100(iLocal_60, &vLocal_105, &vLocal_106, cLocal_321, sLocal_323);
							if (iLocal_80 == 1)
							{
								if (vLocal_106.z > 225f && vLocal_106.z < 265f)
								{
									if (vLocal_106.z < 245f)
									{
										vLocal_106.z = 225f;
									}
									else
									{
										vLocal_106.z = 265f;
									}
								}
								else if (vLocal_106.z > 45f && vLocal_106.z < 85f)
								{
									if (vLocal_106.z < 65f)
									{
										vLocal_106.z = 45f;
									}
									else
									{
										vLocal_106.z = 85f;
									}
								}
							}
							vLocal_105.z = (vLocal_105.z + 2f);
							MISC::GET_GROUND_Z_FOR_3D_COORD(vLocal_105, &(vLocal_105.f_2), 0, 0);
							vVar1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_321, sLocal_323, vLocal_105, vLocal_106, 0f, 2) };
							vVar4 = { vVar1 - vLocal_105 };
							vVar4.z = 0f;
							fVar5 = SYSTEM::VMAG(vVar4);
							MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &(vVar1.f_2), 0, 0);
							fVar6 = (vLocal_105.z - vVar1.z);
							vLocal_106.x = MISC::ATAN2(fVar6, fVar5);
							if (vLocal_106.x > 30f || vLocal_106.x < -30f)
							{
								vLocal_106.x = 0f;
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
						{
							if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
							{
								iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar0), &uVar2, &Var3);
								if (ENTITY::IS_ENTITY_AT_COORD(iVar0, vLocal_105, (Var3.f_1 + 1.5f), (Var3.f_1 + 1.5f), 3f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(iVar0, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_321, sLocal_323, vLocal_105, vLocal_106, 0, 2), (Var3.f_1 + 1f), (Var3.f_1 + 1f), 3f, false, true, 0))
								{
									if (iLocal_80 == 1)
									{
										if (vLocal_106.z > 40f && vLocal_106.z < 220f)
										{
											vLocal_74 = { -148.3897f, -1647.215f, 31.5867f };
											fLocal_73 = 331.9427f;
										}
										else
										{
											vLocal_74 = { -129.5632f, -1622.282f, 31.1122f };
											fLocal_73 = 148.9075f;
										}
									}
									else if (iLocal_80 == 3)
									{
										if (vLocal_106.z > 160f && vLocal_106.z < 340f)
										{
											vLocal_74 = { -319.709f, -837.0066f, 30.449f };
											fLocal_73 = 61.7986f;
										}
										else
										{
											vLocal_74 = { -346.8735f, -833.8024f, 30.4135f };
											fLocal_73 = 269.6216f;
										}
									}
									else if (iLocal_80 == 4)
									{
										if (vLocal_106.z > 240f || vLocal_106.z < 60f)
										{
											vLocal_74 = { 37.222f, -1005.04f, 28.4648f };
											fLocal_73 = 156.7986f;
										}
										else
										{
											vLocal_74 = { 29.9887f, -1033.184f, 28.3794f };
											fLocal_73 = 344.6216f;
										}
									}
									else
									{
										fLocal_73 = ENTITY::GET_ENTITY_HEADING(iVar0);
										vLocal_74 = { func_98(vLocal_105, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_321, sLocal_323, vLocal_105, vLocal_106, 0, 2)) };
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
									{
										ENTITY::SET_ENTITY_COORDS(iVar0, vLocal_74, 1, false, 0, 1);
										ENTITY::SET_ENTITY_HEADING(iVar0, fLocal_73);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
										VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
									}
								}
							}
						}
						MISC::CLEAR_AREA_OF_OBJECTS(vLocal_105, 20f, 2);
						MISC::CLEAR_AREA_OF_PROJECTILES(vLocal_105, 20f, 0);
						MISC::CLEAR_AREA(vLocal_105, 2f, 1, 1, 0, false);
						WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
						iLocal_62 = OBJECT::CREATE_OBJECT(iLocal_77, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true, true, false);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						}
						iLocal_107 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_105, vLocal_106, 2);
						PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(iLocal_107, false);
						iLocal_108 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_108, iLocal_107, sLocal_324, cLocal_321);
						BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						BRAIN::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_107, cLocal_321, sLocal_322, 1000f, -8f, 0, 0, 1148846080, 0);
						if (!PED::IS_PED_INJURED(iLocal_60))
						{
							BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_60);
							BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_60, iLocal_107, cLocal_321, sLocal_323, 1000f, -8f, 0, 0, 1148846080, 0);
						}
						CAM::SET_CAM_ACTIVE(iLocal_108, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
						func_42(&uLocal_154, cLocal_85, sLocal_97, 4, 0, 0, 0);
						SYSTEM::SETTIMERA(0);
						iLocal_125++;
					}
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					break;
				
				case 1:
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_107) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_107) > 0.9f) || func_96(1000))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_CAM_ACTIVE(iLocal_108, false);
						CAM::DESTROY_CAM(iLocal_108, 0);
						func_95();
						if (!PED::IS_PED_INJURED(iLocal_60))
						{
							BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_60);
							PED::SET_PED_MONEY(iLocal_60, (iLocal_152 - (iLocal_152 / 10)));
							vVar1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_321, sLocal_323, vLocal_105, vLocal_106, 1f, 2) };
							MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &(vVar1.f_2), 0, 0);
							ENTITY::SET_ENTITY_COORDS(iLocal_60, vVar1, 1, false, 0, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_60, false);
							vVar1 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(cLocal_321, sLocal_323, vLocal_105, vLocal_106, 1f, 2) };
							ENTITY::SET_ENTITY_HEADING(iLocal_60, vVar1.z);
							if (iLocal_80 == 4)
							{
								if (func_94(vVar1.z, 0f, 90f))
								{
									BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
									BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 38.2412f, -992.2134f, 28.4317f, 1f, 20000, 1048576000, 0, 1193033728);
									BRAIN::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_60), 1);
									BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
									BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
									BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
								}
								else
								{
									BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
									BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 58.803f, -1067.711f, 28.4411f, 1f, 20000, 1048576000, 0, 1193033728);
									BRAIN::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_60), 1);
									BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
									BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
									BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
								}
							}
							else
							{
								BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
								BRAIN::TASK_WANDER_STANDARD(0, vVar1.z, 1);
								BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
								BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
								BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
							}
							PED::SET_PED_MOVEMENT_CLIPSET(iLocal_60, cLocal_334, 1048576000);
							PED::FORCE_PED_MOTION_STATE(iLocal_60, -668482597, true, 0, 0);
							PED::SET_PED_KEEP_TASK(iLocal_60, true);
						}
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
						{
							OBJECT::DELETE_OBJECT(&iLocal_62);
						}
						if (!PED::IS_PED_INJURED(iLocal_60))
						{
							PED::SET_PED_MONEY(iLocal_60, (iLocal_152 - (iLocal_152 / 10)));
							PED::SET_PED_CAN_RAGDOLL(iLocal_60, 1);
						}
						iVar9 = (iLocal_152 / 100);
						iVar9 *= 90;
						SYSTEM::WAIT(0);
						CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
						func_60(func_122(), 1, iVar9);
						func_59(joaat("rc_wallets_returned"), 1);
						func_198(3);
						func_193();
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -3856156))
					{
						if (!PED::IS_PED_INJURED(iLocal_60) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::DETACH_ENTITY(iLocal_62, 0, true);
								if (PED::IS_PED_MALE(iLocal_60))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_62, iLocal_60, PED::GET_PED_BONE_INDEX(iLocal_60, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
								else
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_62, iLocal_60, PED::GET_PED_BONE_INDEX(iLocal_60, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
								if (!iLocal_59)
								{
									if (func_42(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0) || func_58())
									{
										iLocal_59 = 1;
									}
								}
							}
						}
					}
					else if (!iLocal_59)
					{
						if (func_42(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0) || func_58())
						{
							iLocal_59 = 1;
						}
					}
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					break;
				}
		}
	}
	else
	{
		func_274();
	}
}

int func_58()
{
	if (Global_15866 == 4)
	{
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_59(int iParam0, int iParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

int func_60(int iParam0, int iParam1, int iParam2)
{
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_61(Global_106565.f_28044[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_61(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_93();
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
					func_92(99, 1);
					func_59(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_59(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_59(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_77(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_72(5))
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
							func_59(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_59(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_59(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_72(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_59(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_59(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_59(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_59(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_59(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_59(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_59(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_59(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_59(joaat("sp2_money_spent_property"), iParam3);
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
									func_59(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_59(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_59(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_59(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_59(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_59(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_72(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_59(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_59(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_59(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_59(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_59(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_59(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_71(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_92(95, iParam3);
					break;
				
				case 1:
					func_92(97, iParam3);
					break;
				
				case 2:
					func_92(96, iParam3);
					break;
			}
			func_92(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_64(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_64(iVar1);
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
					func_59(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_59(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_59(joaat("sp2_total_cash_earned"), iParam3);
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
	func_63(iParam0);
	if (Global_36425 == 15)
	{
		func_62(0);
	}
	return 1;
}

void func_62(bool bParam0)
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

void func_63(int iParam0)
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

void func_64(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_70(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_70(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_70(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_70(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_67(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_67(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_67(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_67(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_67(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_67(8274, 0, -1, 1, 0);
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
	else if (MISC::IS_BIT_SET(Global_106565.f_20558.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_66() /*10778*/].f_6165.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_106565.f_20558.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_66() /*10778*/].f_6165.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_65(iParam0));
		HUD::_SET_NOTIFICATION_MESSAGE_2(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_65(int iParam0)
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

int func_66()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_67(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_68(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_68(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_69();
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

int func_69()
{
	return Global_1312745;
}

int func_70(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_69();
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

void func_71(int iParam0)
{
	func_92(93, iParam0);
	func_92(29, iParam0);
	func_92(30, iParam0);
}

bool func_72(int iParam0)
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
		return func_74(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_74(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_74(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_74(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::_GET_POSIX_TIME();
		iVar1 = func_73(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::_GET_POSIX_TIME();
		iVar3 = func_73(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::_GET_POSIX_TIME();
		iVar5 = func_73(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::_GET_POSIX_TIME();
		iVar7 = func_73(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::_GET_POSIX_TIME();
		iVar9 = func_73(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::_GET_POSIX_TIME();
		iVar11 = func_73(8274, -1, 0);
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
	return MISC::IS_BIT_SET(Global_2097152[func_66() /*10778*/].f_6165.f_10, iParam0);
}

int func_73(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_68(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_74(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_69();
	}
	iVar1 = func_76(iParam0, iParam1);
	uVar2 = func_75(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_75(int iParam0)
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

int func_76(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_69();
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

int func_77(bool bParam0)
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
		func_91(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_78(27, 1);
	return 1;
}

int func_78(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_79(iParam0, iParam1);
}

int func_79(int iParam0, int iParam1)
{
	if (func_49(14) && !func_90(iParam0))
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
	if (func_89(&Global_4269608))
	{
		if (func_87(&Global_4269608, iParam0))
		{
			return 0;
		}
		if (func_80(&Global_4269608, iParam0))
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

int func_80(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_49(14) && !func_90(iParam1))
	{
		return 0;
	}
	if (func_87(uParam0, iParam1))
	{
		return 0;
	}
	if (func_86(uParam0) < 0f)
	{
		func_85(uParam0, 0);
	}
	func_83(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_81(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_81(var uParam0, int iParam1)
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_49(14) && !func_90(iParam1))
	{
		return 0;
	}
	if (func_87(uParam0, iParam1))
	{
		return 0;
	}
	if (func_86(uParam0) < 0f)
	{
		func_85(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_82(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_82(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_83(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_84(uParam0, iVar0);
		iVar0++;
	}
	func_85(uParam0, (Global_4269607 - 0.5f));
}

void func_84(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_85(var uParam0, float fParam1)
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

float func_86(var uParam0)
{
	return uParam0->f_80;
}

bool func_87(var uParam0, int iParam1)
{
	return func_88(uParam0, iParam1) != -1;
}

int func_88(var uParam0, int iParam1)
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

bool func_89(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_90(int iParam0)
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

int func_91(int iParam0, int iParam1)
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

void func_92(int iParam0, int iParam1)
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

void func_93()
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

int func_94(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

void func_95()
{
	int iVar0;
	
	iVar0 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.5f, -1f, 0.5f), 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 65f, 1, 2);
	CAM::SET_CAM_ACTIVE(iVar0, true);
}

int func_96(int iParam0)
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
			if (func_97())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_97()
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

Vector3 func_98(vector3 vParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	int iVar13;
	
	iVar5 = 0;
	iVar6 = 1;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, 0);
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar0), &vVar3, &vVar4);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vParam0, 3, &vVar2, 1, 3f, 0f);
	if (SYSTEM::VDIST(vParam0, -3039.655f, 602.4346f, 6.5719f) <= 25f)
	{
		vVar1 = { -3045.49f, 604.46f, 7.02f };
		iVar5 = 8;
	}
	else if (SYSTEM::VDIST(vParam0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		vVar1 = { 278.97f, -1255.06f, 28.88f };
		iVar5 = 8;
	}
	while (iVar5 < 8)
	{
		switch (iVar5)
		{
			case 0:
				if (SYSTEM::VDIST(vVar2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (vVar4.y + IntToFloat(iVar6)), 0f)) < SYSTEM::VDIST(vVar2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(vVar4.y + IntToFloat(iVar6)), 0f)))
				{
					vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (vVar4.y + IntToFloat(iVar6)), 0f) };
				}
				else
				{
					vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(vVar4.y + IntToFloat(iVar6)), 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
					{
						vVar10 = { func_99(vVar1, 0f, vVar4) };
						vVar11 = { func_99(vVar1, 0f, vVar3) };
						iVar13 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 1:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 2;
						}
						else
						{
							iVar6++;
							iVar5 = 0;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 2;
						}
						else
						{
							iVar6++;
							iVar5 = 0;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 2:
				if (SYSTEM::VDIST(vVar2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (vVar4.y - IntToFloat(iVar6)), 0f)) < SYSTEM::VDIST(vVar2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(vVar4.y - IntToFloat(iVar6)), 0f)))
				{
					vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (vVar4.y - IntToFloat(iVar6)), 0f) };
				}
				else
				{
					vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(vVar4.y - IntToFloat(iVar6)), 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
					{
						vVar10 = { func_99(vVar1, 0f, vVar4) };
						vVar11 = { func_99(vVar1, 0f, vVar3) };
						iVar13 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 3:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 4;
						}
						else
						{
							iVar6++;
							iVar5 = 2;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 4;
						}
						else
						{
							iVar6++;
							iVar5 = 2;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 4:
				if (SYSTEM::VDIST(vVar2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (vVar4.x + IntToFloat(iVar6)), 0f, 0f)) < SYSTEM::VDIST(vVar2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(vVar4.x + IntToFloat(iVar6)), 0f, 0f)))
				{
					vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (vVar4.x + IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(vVar4.x + IntToFloat(iVar6)), 0f, 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
					{
						vVar10 = { func_99(vVar1, 0f, vVar4) };
						vVar11 = { func_99(vVar1, 0f, vVar3) };
						iVar13 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 5:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 6;
						}
						else
						{
							iVar6++;
							iVar5 = 4;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 6;
						}
						else
						{
							iVar6++;
							iVar5 = 4;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 6:
				if (SYSTEM::VDIST(vVar2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (vVar4.x - IntToFloat(iVar6)), 0f, 0f)) < SYSTEM::VDIST(vVar2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(vVar4.x - IntToFloat(iVar6)), 0f, 0f)))
				{
					vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (vVar4.x - IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(vVar4.x - IntToFloat(iVar6)), 0f, 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
					{
						vVar10 = { func_99(vVar1, 0f, vVar4) };
						vVar11 = { func_99(vVar1, 0f, vVar3) };
						iVar13 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 7:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 8;
						}
						else
						{
							iVar6++;
							iVar5 = 6;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 8;
						}
						else
						{
							iVar6++;
							iVar5 = 6;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 8:
				break;
		}
		SYSTEM::WAIT(0);
	}
	return vVar1;
}

Vector3 func_99(vector3 vParam0, float fParam1, struct<2> Param2, var uParam3)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	fVar1 = fParam1;
	fVar2 = SYSTEM::COS(fVar1);
	fVar3 = SYSTEM::SIN(fVar1);
	vVar0.x = ((Param2 * fVar2) + (Param2.f_1 * fVar3));
	vVar0.y = ((Param2.f_1 * fVar2) - (Param2 * fVar3));
	vVar4 = { vParam0 + vVar0 };
	return vVar4;
}

void func_100(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	var uVar11;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	*uParam1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	uParam2->f_2 = func_102(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	fVar3 = func_102(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	fVar4 = func_102(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	vVar10 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	if (STREAMING::HAS_ANIM_DICT_LOADED(sParam3))
	{
		vVar9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sParam3, sParam4, *uParam1, *uParam2, 0, 2) };
	}
	else
	{
		vVar9 = { *uParam1 + Vector(0f, 5f, 5f) };
	}
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1 > 20)
				{
					uParam2->f_2 = func_101(ENTITY::GET_ENTITY_COORDS(iParam0, false), *uParam1, 1);
					*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false), uParam2->f_2, vVar10) };
					iVar0 = 2;
				}
				else
				{
					iVar5 = SHAPETEST::START_SHAPE_TEST_CAPSULE(*uParam1, vVar9 + Vector(-1f, 0f, 0f), 0.5f, 17, 0, 4);
					iVar0++;
				}
				break;
			
			case 1:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar5, &iVar6, &vVar8, &uVar7, &uVar11) == 2)
				{
					if (iVar6 != 0)
					{
						if (vVar8.z > (uParam1->f_2 + 8.5f))
						{
							iVar0++;
						}
						else
						{
							if (iVar1 <= 3)
							{
								fVar4 = (fVar4 + 7.5f);
							}
							else
							{
								fVar4 = (fVar3 - (7.5f * IntToFloat(iVar2)));
								iVar2++;
							}
							*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), fVar4, vVar10) };
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							uParam2->f_2 = func_101(vVar9 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
						}
						iVar0++;
					}
				}
				break;
			
			case 2:
				break;
		}
		SYSTEM::WAIT(0);
	}
}

float func_101(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

float func_102(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	return func_101(vVar0, vVar1, iParam2);
}

void func_103(vector3 vParam0, var uParam1, float fParam2)
{
	bool bVar0;
	vector3 vVar1;
	float fVar2;
	
	bVar0 = false;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - vParam0 };
		fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
		if (func_104(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
		vVar1 = { vParam0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
		if (func_104(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 30f)
		{
			*uParam1 = (6f * 4f);
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 20f)
		{
			*uParam1 = (6f * 3f);
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 10f)
		{
			*uParam1 = (6f * 2f);
		}
		else
		{
			*uParam1 = 6f;
		}
		*fParam2 = ((*uParam1 / 1.33f) - 1f);
	}
	else
	{
		*uParam1 = 6f;
		*fParam2 = ((*uParam1 / 1.33f) - 1f);
	}
}

int func_104(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		fVar0 = ENTITY::GET_ENTITY_HEADING(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_105()
{
	Global_14732 = 0;
	func_106();
}

void func_106()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16877 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15866 = 6;
	}
}

int func_107(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_108(iParam0);
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

void func_108(int iParam0)
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

void func_109(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_116(1);
		HUD::_0xA8FDB297A8D25FBA();
		HUD::_0xFDB423997FA30340();
		if (Global_14553.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_46())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_115(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_116(0);
		HUD::_0xE1CD1E48E025E661();
		Global_56500 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_115(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_113(PLAYER::PLAYER_ID())) && !func_111(PLAYER::PLAYER_ID(), 0)) && !func_110()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_113(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_71588 = 0;
	}
}

bool func_110()
{
	return MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_39.f_18, 14);
}

bool func_111(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_112(-1, 0) == 8;
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

int func_112(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_69();
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

int func_113(int iParam0)
{
	if (func_111(iParam0, 0))
	{
		return 1;
	}
	if (func_114())
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

bool func_114()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_115(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_116(int iParam0)
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

int func_117()
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (func_161())
		{
			return 1;
		}
	}
	return 0;
}

int func_118(bool bParam0, bool bParam1, bool bParam2)
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

bool func_119(int iParam0)
{
	return func_36(func_120(iParam0));
}

char* func_120(int iParam0)
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

int func_121(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			STATS::STAT_GET_INT(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			STATS::STAT_GET_INT(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			STATS::STAT_GET_INT(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_122()
{
	func_123();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_123()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_126(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_125(PLAYER::PLAYER_PED_ID());
			if (func_124(iVar0) && (!func_49(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_124(Global_106565.f_2357.f_539.f_4321))
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

bool func_124(int iParam0)
{
	return iParam0 < 3;
}

int func_125(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_126(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_126(int iParam0)
{
	if (func_124(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_127()
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		BRAIN::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_60, true);
		SYSTEM::WAIT(0);
	}
}

int func_128()
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 3f, 3f, 3f };
	vVar1 = { -3f, -3f, -3f };
	if (PED::IS_PED_INJURED(iLocal_60))
	{
		return 1;
	}
	else
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_60, 31086, 0f, 0f, 0f), 5f, 1))
		{
			return 1;
		}
		vVar0 = { vVar0 + PED::GET_PED_BONE_COORDS(iLocal_60, 31086, 0f, 0f, 0f) };
		vVar1 = { vVar1 + PED::GET_PED_BONE_COORDS(iLocal_60, 31086, 0f, 0f, 0f) };
		if ((MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar1, vVar0, joaat("weapon_smokegrenade"), 1) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar1, vVar0, joaat("weapon_grenade"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar1, vVar0, joaat("weapon_stickybomb"), 1))
		{
			return 1;
		}
		if (GRAPHICS::_0x2F09F7976C512404(PED::GET_PED_BONE_COORDS(iLocal_60, 31086, 0f, 0f, 0f), 3f))
		{
			return 1;
		}
	}
	return 0;
}

void func_129()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, 0))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_60, true)) > (fLocal_139 + 50f))
		{
			func_193();
		}
		else if (func_121(func_122()) < iLocal_152)
		{
			func_193();
		}
	}
}

void func_130()
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, Global_19, 0, 1, 0))
		{
			BRAIN::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 3000, 0, 2);
			BRAIN::TASK_LOOK_AT_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
		}
	}
}

void func_131()
{
	float fVar0;
	
	if (iLocal_80 == 1)
	{
		fVar0 = 13f;
	}
	if (iLocal_80 == 4)
	{
		fVar0 = 5.75f;
	}
	if (iLocal_80 == 1 || iLocal_80 == 4)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vLocal_140, vLocal_141, fVar0, 0, true, 0))
		{
			if (!iLocal_131)
			{
				if (!PED::IS_PED_INJURED(iLocal_60))
				{
					BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 0);
					iLocal_131 = 1;
					iLocal_132 = 0;
				}
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vLocal_142, vLocal_143, fVar0, 0, true, 0))
		{
			if (!iLocal_132)
			{
				if (!PED::IS_PED_INJURED(iLocal_60))
				{
					BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 0);
					iLocal_132 = 1;
					iLocal_131 = 0;
				}
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vLocal_144, vLocal_145, fVar0, 0, true, 0))
		{
			if (!iLocal_133)
			{
				if (!PED::IS_PED_INJURED(iLocal_60))
				{
					iLocal_133 = 1;
				}
			}
		}
	}
	if (!iLocal_134)
	{
		if (!PED::IS_PED_INJURED(iLocal_60))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 25f, 25f, 5f, 0, 1, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 17))
			{
				if (func_42(&uLocal_154, cLocal_85, sLocal_90, 4, 0, 0, 0) || func_58())
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "flee_forward_outro_shopkeeper", 3))
					{
						BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
						BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						if (iLocal_45 == 2)
						{
							BRAIN::TASK_PLAY_ANIM(0, cLocal_333, "RETURNING_FRONT_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
						BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
						BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
						BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
						iLocal_134 = 1;
					}
				}
			}
		}
	}
}

void func_132(int iParam0, var uParam1)
{
	float fVar0;
	
	fVar0 = 65f;
	switch (*uParam1)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
				BRAIN::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
				BRAIN::TASK_PERFORM_SEQUENCE(iParam0, iLocal_103);
				BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
				SYSTEM::SETTIMERA(0);
				*uParam1++;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), fVar0))
				{
					*uParam1++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (!PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), fVar0))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_133()
{
	if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_151))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, 0))
		{
			fLocal_139 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_60, true));
		}
		func_59(joaat("rc_wallets_recovered"), 1);
		PAD::SET_PAD_SHAKE(0, 200, 250);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
		{
			OBJECT::DELETE_OBJECT(&iLocal_62);
		}
		func_136();
		func_135(&uLocal_348);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
		{
			if (!PED::IS_PED_INJURED(iLocal_60))
			{
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_60, 0);
			}
		}
		func_141(0);
		OBJECT::REMOVE_PICKUP(iLocal_151);
		if (!iLocal_54)
		{
			iLocal_46 = 5;
			func_134(2);
		}
		else
		{
			iLocal_46 = 12;
		}
	}
}

void func_134(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_106565.f_24989.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_12(func_120(iParam0), -1);
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
					func_12(func_120(iParam0), -1);
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
					func_12(func_120(iParam0), -1);
					Global_106565.f_24989.f_4++;
					MISC::SET_BIT(&Global_106561, 2);
				}
			}
			break;
	}
}

void func_135(var uParam0)
{
	*uParam0 = -99;
}

void func_136()
{
	iLocal_65 = 0;
	if (!HUD::DOES_BLIP_EXIST(iLocal_63))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, 0))
		{
			iLocal_63 = func_137(iLocal_60, 0, 0);
		}
	}
}

int func_137(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_138(iParam0, bParam1, 145);
}

int func_138(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_139(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_106565.f_28044[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_106565.f_28044[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_139(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_140(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_140(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_140(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_140(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_141(bool bParam0)
{
	if (!PED::IS_PED_INJURED(iLocal_60) && iLocal_80 == 4)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "flee_forward_loop_shopkeeper", 3))
		{
			BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
			BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			BRAIN::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			if (bParam0)
			{
				BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
			BRAIN::CLEAR_PED_TASKS(iLocal_60);
			BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
	}
}

int func_142()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_62))
		{
			if (!PED::IS_PED_INJURED(iLocal_60))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_62, iLocal_60))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 18f, 18f, 18f, 0, 1, 0))
					{
						if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
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

void func_143(int iParam0, var uParam1)
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		if (MISC::GET_GAME_TIMER() > *uParam1 + 500)
		{
			if (HUD::GET_BLIP_COLOUR(iParam0) == 1)
			{
				HUD::SET_BLIP_AS_FRIENDLY(iParam0, true);
			}
			else
			{
				HUD::SET_BLIP_AS_FRIENDLY(iParam0, false);
				HUD::SET_BLIP_COLOUR(iParam0, 1);
			}
			*uParam1 = MISC::GET_GAME_TIMER();
		}
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_144(0))
		{
			func_134(1);
		}
	}
}

bool func_144(int iParam0)
{
	return MISC::IS_BIT_SET(Global_106561, iParam0);
}

void func_145()
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 8f, 8f, 18f, 0, 1, 0) || ENTITY::IS_ENTITY_ON_SCREEN(iLocal_60))
		{
			HUD::CLEAR_PRINTS();
		}
	}
}

void func_146()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_64))
	{
		HUD::REMOVE_BLIP(&iLocal_64);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_62))
		{
			ENTITY::DETACH_ENTITY(iLocal_62, 1, true);
			OBJECT::DELETE_OBJECT(&iLocal_62);
			func_40();
		}
	}
	else
	{
		func_40();
	}
	if (!PED::IS_PED_INJURED(iLocal_61))
	{
		if (func_42(&uLocal_154, cLocal_85, sLocal_89, 4, 0, 0, 0) || func_58())
		{
			if (iLocal_45 == 2)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 128, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 2, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 1, false);
				BRAIN::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
			}
			PED::SET_PED_KEEP_TASK(iLocal_61, true);
		}
	}
}

int func_147()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_61, 0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (bLocal_123)
			{
				return 1;
			}
		}
	}
	else if (bLocal_123)
	{
		return 1;
	}
	return 0;
}

void func_148()
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		BRAIN::CLEAR_PED_TASKS(iLocal_60);
		BRAIN::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_60, true);
		SYSTEM::WAIT(0);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
	}
	if (!PED::IS_PED_INJURED(iLocal_61))
	{
		func_42(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
		BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
		BRAIN::TASK_CLEAR_LOOK_AT(0);
		BRAIN::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
		BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
		BRAIN::TASK_PERFORM_SEQUENCE(iLocal_61, iLocal_103);
		BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
		PED::SET_PED_KEEP_TASK(iLocal_61, true);
		SYSTEM::WAIT(0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_61, false, 1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_61);
	}
}

int func_149()
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (PED::IS_PED_RAGDOLL(iLocal_60))
		{
			return 1;
		}
	}
	return 0;
}

int func_150(int iParam0)
{
	return func_151(iParam0);
}

int func_151(int iParam0)
{
	int iVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_PICKUP(iParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_140(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return iVar0;
}

int func_152()
{
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
	{
		if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_61, 0))
				{
					if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 18f, 18f, 18f, 0, 1, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), 1))
						{
							SYSTEM::SETTIMERB(0);
							iLocal_119 = 1;
							return 1;
						}
					}
				}
				if (func_153())
				{
					SYSTEM::SETTIMERB(0);
					iLocal_119 = 2;
					return 1;
				}
				if (PED::IS_PED_INJURED(iLocal_61))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), 1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
						{
							if (!PED::IS_PED_INJURED(iLocal_60))
							{
								BRAIN::CLEAR_PED_TASKS(iLocal_60);
								PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_60, 0);
							}
						}
						SYSTEM::SETTIMERB(0);
						iLocal_119 = 2;
						return 1;
					}
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), 1))
				{
					SYSTEM::SETTIMERB(0);
					iLocal_119 = 2;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
					{
						if (!PED::IS_PED_INJURED(iLocal_60))
						{
							BRAIN::CLEAR_PED_TASKS(iLocal_60);
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_60, 0);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_61))
					{
						BRAIN::CLEAR_PED_TASKS(iLocal_61);
						BRAIN::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_61, true);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_61, false, 1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_61);
					}
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, 0))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 5.3f, 5.3f, 6f, 0, 1, 0))
					{
						if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
						{
							if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_60) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_60))
							{
								SYSTEM::SETTIMERB(0);
								iLocal_119 = 3;
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_153()
{
	if (!PED::IS_PED_INJURED(iLocal_61))
	{
		if (PED::_CAN_PED_SEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 20f, 20f, 20f, 0, 1, 0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_61) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_61))
				{
					return 1;
				}
			}
		}
		if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
		if (PED::IS_PED_RAGDOLL(iLocal_61))
		{
			return 1;
		}
	}
	return 0;
}

void func_154()
{
	if (iLocal_56)
	{
		if (!iLocal_57)
		{
			if (!PED::IS_PED_INJURED(iLocal_61))
			{
				if (WEAPON::IS_PED_ARMED(iLocal_61, 4))
				{
					if ((func_42(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0) || func_58()) || func_58())
					{
						iLocal_57 = 1;
					}
				}
				else if ((func_42(&uLocal_154, cLocal_85, sLocal_89, 4, 0, 0, 0) || func_58()) || func_58())
				{
					iLocal_57 = 1;
				}
			}
		}
	}
	else if (func_153())
	{
		if ((func_42(&uLocal_154, cLocal_85, sLocal_98, 4, 0, 0, 0) || func_58()) || func_58())
		{
			if (WEAPON::IS_PED_ARMED(iLocal_61, 4))
			{
				BRAIN::TASK_COMBAT_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 0, 16);
			}
			else
			{
				func_146();
			}
			iLocal_56 = 1;
		}
	}
}

int func_155()
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 20f, 20f, 20f, 0, 1, 0))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_60) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_60))
				{
					return 1;
				}
			}
		}
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
		{
			if (iVar0 == joaat("weapon_stungun"))
			{
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_60, joaat("weapon_stungun"), 0))
				{
					return 1;
				}
			}
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_60, 31086, 0f, 0f, 0f), 3f, 1))
	{
		return 1;
	}
	return 0;
}

void func_156()
{
	if (iLocal_45 == 2)
	{
	}
	if (!func_161())
	{
		if (SYSTEM::TIMERA() > 10000)
		{
			if (!PED::IS_PED_INJURED(iLocal_60))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_60))
				{
					func_157(iLocal_60, "GENERIC_CURSE_MED", 24);
					SYSTEM::SETTIMERA(0);
				}
			}
		}
	}
	if (!bLocal_58)
	{
		if (func_38(PLAYER::PLAYER_PED_ID(), iLocal_61, 1) > 200f)
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_61) || ENTITY::IS_ENTITY_OCCLUDED(iLocal_61))
			{
				iLocal_46 = 8;
			}
		}
	}
}

void func_157(int iParam0, char* sParam1, int iParam2)
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_158(iParam2), 1);
}

int func_158(int iParam0)
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

void func_159()
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (!bLocal_51)
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "flee_backward_loop_shopkeeper", 3))
			{
				BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
				BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
				BRAIN::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
				BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
				BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
				BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
				iLocal_138 = 3;
				bLocal_51 = true;
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "flee_forward_loop_shopkeeper", 3))
			{
				BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
				BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
				BRAIN::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
				BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
				BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
				BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
				iLocal_138 = 3;
				bLocal_51 = true;
			}
			else
			{
				bLocal_51 = true;
			}
		}
		if (bLocal_51)
		{
			if (!iLocal_112)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 7f, 7f, 7f, 0, 1, 0))
				{
					if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_60, 242628503) == 1)
					{
						if (BRAIN::GET_SEQUENCE_PROGRESS(iLocal_60) == iLocal_138)
						{
							BRAIN::TASK_LOOK_AT_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 9000, 0, 2);
							func_42(&uLocal_154, cLocal_85, sLocal_88, 4, 0, 0, 0);
							bLocal_129 = true;
							iLocal_112 = 1;
						}
					}
					else
					{
						AUDIO::STOP_PED_SPEAKING(iLocal_60, true);
						func_42(&uLocal_154, cLocal_85, sLocal_88, 4, 0, 0, 0);
						BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
						BRAIN::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
						BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000);
						BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
						BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
						BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
						SYSTEM::SETTIMERA(0);
						bLocal_129 = true;
						iLocal_112 = 1;
					}
				}
			}
		}
	}
}

int func_160()
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 12f, 12f, 5f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_161()
{
	if (Global_15866 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_162()
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (!bLocal_110)
		{
			iLocal_114 = MISC::GET_GAME_TIMER();
			bLocal_110 = true;
		}
		if (bLocal_110)
		{
			iLocal_115 = MISC::GET_GAME_TIMER();
			if (!iLocal_52)
			{
				if ((iLocal_115 - iLocal_114) > 500)
				{
					if (!func_161())
					{
						if (func_42(&uLocal_154, cLocal_85, sLocal_87, 4, 0, 0, 0) || func_58())
						{
							if (iLocal_45 == 2)
							{
								if (!PED::IS_PED_INJURED(iLocal_60))
								{
									if (!PED::IS_PED_INJURED(iLocal_61))
									{
									}
								}
							}
							if (iLocal_45 == 1)
							{
								if (!PED::IS_PED_INJURED(iLocal_60))
								{
								}
							}
							if (HUD::DOES_BLIP_EXIST(iLocal_63))
							{
								HUD::REMOVE_BLIP(&iLocal_63);
							}
							iLocal_52 = 1;
						}
					}
				}
			}
		}
	}
}

void func_163()
{
	float fVar0;
	
	if (!bLocal_53)
	{
		if (iLocal_80 == 1)
		{
			fVar0 = 1f;
		}
		if (iLocal_80 == 2)
		{
			fVar0 = 4f;
		}
		if (iLocal_80 != 2)
		{
			if (!PED::IS_PED_INJURED(iLocal_60) && !PED::IS_PED_INJURED(iLocal_61))
			{
				if (!func_190())
				{
					if (func_177())
					{
						func_274();
					}
				}
				if (func_176())
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_66))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_61, 0))
						{
							iLocal_66 = func_137(iLocal_61, 1, 0);
						}
						func_168(1);
					}
				}
				if (func_167())
				{
					func_166();
					if (iLocal_80 == 3)
					{
						if (!iLocal_55)
						{
							BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
							BRAIN::TASK_LOOK_AT_ENTITY(0, iLocal_61, 16000, 0, 2);
							BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_79, 1f, 20000, fVar0, 4, 1193033728);
							BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
							BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
							BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
							iLocal_55 = 1;
						}
						BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
						BRAIN::TASK_LOOK_AT_ENTITY(0, iLocal_60, -1, 0, 2);
						BRAIN::TASK_PLAY_ANIM(0, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT", "exit_forward", 1000f, -1000f, -1, 512, 0, 0, 0, 0);
						BRAIN::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vLocal_79, iLocal_60, 1f, false, 1.5f, 4f, true, 0, 0, -957453492, 20000);
						BRAIN::TASK_AIM_GUN_AT_ENTITY(0, iLocal_60, -1, 1);
						BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
						BRAIN::TASK_PERFORM_SEQUENCE(iLocal_61, iLocal_103);
						BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
						SYSTEM::SETTIMERA(0);
						bLocal_53 = true;
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					}
					else
					{
						if (iLocal_80 == 1)
						{
							sLocal_93 = sLocal_93;
						}
						func_165();
						bLocal_53 = true;
						bLocal_123 = true;
						SYSTEM::SETTIMERA(0);
					}
				}
			}
		}
	}
	if (bLocal_53)
	{
		if (!iLocal_111)
		{
			if (SYSTEM::TIMERA() > 1000)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 60f, 60f, 50f, 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, 0))
					{
						BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_60, iLocal_61, 0);
					}
					iLocal_111 = 1;
				}
				else
				{
					iLocal_111 = 1;
				}
			}
		}
		if (iLocal_111 && !bLocal_109)
		{
			if (!PED::IS_PED_INJURED(iLocal_60) && !PED::IS_PED_INJURED(iLocal_61))
			{
				if (func_42(&uLocal_154, cLocal_85, sLocal_86, 4, 0, 0, 0) || func_58())
				{
					BRAIN::CLEAR_PED_TASKS(iLocal_60);
					BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
					BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "handsup_standing_enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
					BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "handsup_standing_base", 8f, -4f, 7000, 0, 0, 0, 0, 0);
					BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "handsup_standing_exit", 8f, -4f, -1, 0, 0, 0, 0, 0);
					BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
					BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
					func_166();
					iLocal_151 = OBJECT::CREATE_PICKUP(joaat("pickup_money_purse"), OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_60, 0f, 2.5f, 0f), 1.2f, 1.5f), iLocal_120, iLocal_152, 1, iLocal_77);
					bLocal_109 = true;
				}
			}
		}
		if (bLocal_109)
		{
			if (PED::IS_PED_INJURED(iLocal_61))
			{
				func_164();
			}
			else
			{
				switch (iLocal_623)
				{
					case 0:
						vLocal_626 = { OBJECT::GET_PICKUP_COORDS(iLocal_151) - Vector(0f, 0f, 0.75f) };
						if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
						{
							BRAIN::CLEAR_PED_TASKS(iLocal_61);
							BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
							BRAIN::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vLocal_626, iLocal_60, 2f, false, 0.1f, 4f, true, 0, 0, -957453492, 20000);
							BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
							BRAIN::TASK_PERFORM_SEQUENCE(iLocal_61, iLocal_103);
							BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
							iLocal_624 = MISC::GET_GAME_TIMER();
						}
						iLocal_623 = 1;
						break;
					
					case 1:
						if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_61, 242628503) == 7)
						{
							vLocal_626 = { OBJECT::GET_PICKUP_COORDS(iLocal_151) - Vector(0f, 0f, 0.75f) };
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_61, true), vLocal_626, true) > 1f)
								{
									iLocal_625 = 1;
									iLocal_623 = 4;
								}
								else
								{
									BRAIN::CLEAR_PED_TASKS(iLocal_61);
									BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
									BRAIN::TASK_PLAY_ANIM(0, cLocal_320, "pickup_low", 8f, -4f, -1, 8224, 0, 0, 0, 0);
									BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
									BRAIN::TASK_PERFORM_SEQUENCE(iLocal_61, iLocal_103);
									BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
									iLocal_623 = 2;
								}
							}
							else
							{
								iLocal_623 = 4;
							}
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_624) > 15000)
						{
							iLocal_625 = 1;
							iLocal_623 = 4;
						}
						break;
					
					case 2:
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_61, cLocal_320, "pickup_low") > 0.5f)
						{
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
							{
								OBJECT::REMOVE_PICKUP(iLocal_151);
								iLocal_623 = 3;
							}
							else
							{
								iLocal_623 = 4;
							}
						}
						break;
					
					case 3:
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_320, "pickup_low", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_61, cLocal_320, "pickup_low") > 0.58f) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_320, "pickup_low", 3))
						{
							iLocal_623 = 4;
						}
						break;
					
					case 4:
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_61, true, 1);
						BRAIN::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 50f, -1, 0, 0);
						PED::_0x2208438012482A1A(iLocal_61, 0, 0);
						bLocal_123 = true;
						break;
					}
				}
			}
	}
}

void func_164()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_63))
	{
		HUD::REMOVE_BLIP(&iLocal_63);
	}
	if (!HUD::DOES_BLIP_EXIST(iLocal_65))
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
		{
			iLocal_65 = func_150(iLocal_151);
		}
	}
	iLocal_46 = 4;
}

void func_165()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (PED::IS_PED_FACING_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 90f))
	{
		BRAIN::TASK_PLAY_ANIM(iLocal_61, cLocal_319, sLocal_327, 1000f, -1000f, -1, 8, 0, 0, 0, 0);
		if (iLocal_45 == 2)
		{
			BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
			BRAIN::TASK_PLAY_ANIM(0, cLocal_319, sLocal_328, 8f, -8f, -1, 0, 0, 0, 0, 0);
			BRAIN::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			BRAIN::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			BRAIN::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			BRAIN::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			BRAIN::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			BRAIN::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 1, 0, 0, 0, 0);
			BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
			BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
		else if (iLocal_80 == 4)
		{
			iLocal_335 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(39.7889f, -1014.392f, 28.4847f, 4f, 4f, 4f, 0f, 0, 4);
			BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
			BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "flee_backward_intro_shopkeeper", 8f, -4f, -1, 0, 0, 0, 0, 0);
			BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "flee_backward_loop_shopkeeper", 8f, -4f, -1, 9, 0, 0, 0, 0);
			BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
			BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
		else
		{
			BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
			BRAIN::TASK_PLAY_ANIM(0, cLocal_319, sLocal_328, 8f, -4f, -1, 0, 0, 0, 0, 0);
			BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
			BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
			BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
			BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
			BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
	}
	else
	{
		BRAIN::TASK_PLAY_ANIM(iLocal_61, cLocal_319, sLocal_329, 1000f, -1000f, -1, 8, 0, 0, 0, 0);
		if (iLocal_45 == 2)
		{
			BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
			BRAIN::TASK_PLAY_ANIM(0, cLocal_319, sLocal_330, 8f, -8f, -1, 8, 0.1f, 0, 0, 0);
			BRAIN::TASK_TURN_PED_TO_FACE_COORD(0, -94.8543f, -1582.686f, 30.2862f, 3000);
			BRAIN::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			BRAIN::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			BRAIN::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			BRAIN::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			BRAIN::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			BRAIN::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 1, 0, 0, 0, 0);
			BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
			BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
		else if (iLocal_80 == 4)
		{
			BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
			BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "flee_forward_intro_shopkeeper", 8f, -4f, -1, 0, 0, 0, 0, 0);
			BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "flee_forward_loop_shopkeeper", 8f, -4f, -1, 9, 0, 0, 0, 0);
			BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
			BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
		else
		{
			BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
			BRAIN::TASK_PLAY_ANIM(0, cLocal_319, sLocal_330, 8f, -4f, -1, 8, 0, 0, 0, 0);
			BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
			BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
			BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
			BRAIN::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
			BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
	}
}

void func_166()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_66))
	{
		HUD::REMOVE_BLIP(&iLocal_66);
	}
	if (!HUD::DOES_BLIP_EXIST(iLocal_64))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_61, 0))
		{
			iLocal_64 = func_137(iLocal_61, 1, 0);
		}
	}
}

int func_167()
{
	int iVar0;
	
	iVar0 = 0;
	if (iLocal_80 == 1)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -170.3051f, -1670.362f, 53.73083f, -91.94043f, -1578.828f, 24.96221f, 18f, 0, false, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_80 == 2)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_61, true), true) < 30f)
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_80 == 4)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -41.32678f, -959.6443f, 38.4444f, 119.9208f, -1021.231f, 21.85738f, 123.75f, 0, true, 0))
		{
			iVar0 = 1;
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -325.7037f, -829.31f, 30.5812f, true) < 95f)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_168(int iParam0)
{
	if (func_170())
	{
		Global_106555 = 1;
		Global_106552 = MISC::GET_GAME_TIMER();
		if (func_169(Global_106554))
		{
			func_134(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_169(Global_106554))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

int func_169(int iParam0)
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

int func_170()
{
	switch (func_171(&Global_25824, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_171(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_175(0))
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
		if (!func_173(iParam2))
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
			func_172(uParam0, iParam4);
		}
	}
	return 2;
}

void func_172(var uParam0, int iParam1)
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

bool func_173(int iParam0)
{
	return func_174(iParam0, Global_36425);
}

int func_174(int iParam0, int iParam1)
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

int func_175(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_173(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_176()
{
	int iVar0;
	
	iVar0 = 0;
	if (iLocal_80 == 1)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -179.103f, -1682.421f, 53.693f, -83.53208f, -1567.584f, 25.18745f, 40.75f, 0, false, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_80 == 2)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 353.1506f, -296.1962f, 62.76571f, 210.4646f, -243.5106f, 46.13731f, 123.75f, 0, true, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_80 == 3)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -325.7037f, -829.31f, 30.5812f, true) < 105f)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_177()
{
	if (!func_173(5))
	{
		return 1;
	}
	if (func_186())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_185())
		{
			return 0;
		}
	}
	if (func_178(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_178(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_124(func_122()))
		{
			iVar5 = func_184();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (MISC::IS_BIT_SET(Global_106565.f_18568[iVar1 /*6*/], 2) && !MISC::IS_BIT_SET(Global_106565.f_18568[iVar1 /*6*/], 3))
				{
					func_179(iVar1, &Var0);
					fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_179(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_180(uParam1, "Abigail1", func_182(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 1:
			func_180(uParam1, "Abigail2", func_182(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 2:
			func_180(uParam1, "Barry1", func_182(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 3:
			func_180(uParam1, "Barry2", func_182(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		
		case 4:
			func_180(uParam1, "Barry3", func_182(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 5:
			func_180(uParam1, "Barry3A", func_182(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 6:
			func_180(uParam1, "Barry3C", func_182(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 7:
			func_180(uParam1, "Barry4", func_182(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_181(iParam0), 0, 0);
			break;
		
		case 8:
			func_180(uParam1, "Dreyfuss1", func_182(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 9:
			func_180(uParam1, "Epsilon1", func_182(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 10:
			func_180(uParam1, "Epsilon2", func_182(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 11:
			func_180(uParam1, "Epsilon3", func_182(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 12:
			func_180(uParam1, "Epsilon4", func_182(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 13:
			func_180(uParam1, "Epsilon5", func_182(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 14:
			func_180(uParam1, "Epsilon6", func_182(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 15:
			func_180(uParam1, "Epsilon7", func_182(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 16:
			func_180(uParam1, "Epsilon8", func_182(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 17:
			func_180(uParam1, "Extreme1", func_182(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 18:
			func_180(uParam1, "Extreme2", func_182(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 19:
			func_180(uParam1, "Extreme3", func_182(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 20:
			func_180(uParam1, "Extreme4", func_182(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 21:
			func_180(uParam1, "Fanatic1", func_182(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_181(iParam0), 1, 0);
			break;
		
		case 22:
			func_180(uParam1, "Fanatic2", func_182(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_181(iParam0), 1, 0);
			break;
		
		case 23:
			func_180(uParam1, "Fanatic3", func_182(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_181(iParam0), 0, 1);
			break;
		
		case 24:
			func_180(uParam1, "Hao1", func_182(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_181(iParam0), 0, 1);
			break;
		
		case 25:
			func_180(uParam1, "Hunting1", func_182(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 26:
			func_180(uParam1, "Hunting2", func_182(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 27:
			func_180(uParam1, "Josh1", func_182(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 28:
			func_180(uParam1, "Josh2", func_182(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		
		case 29:
			func_180(uParam1, "Josh3", func_182(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		
		case 30:
			func_180(uParam1, "Josh4", func_182(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 31:
			func_180(uParam1, "Maude1", func_182(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 32:
			func_180(uParam1, "Minute1", func_182(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 33:
			func_180(uParam1, "Minute2", func_182(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 34:
			func_180(uParam1, "Minute3", func_182(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 35:
			func_180(uParam1, "MrsPhilips1", func_182(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 36:
			func_180(uParam1, "MrsPhilips2", func_182(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 37:
			func_180(uParam1, "Nigel1", func_182(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 38:
			func_180(uParam1, "Nigel1A", func_182(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		
		case 39:
			func_180(uParam1, "Nigel1B", func_182(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_181(iParam0), 1, 1);
			break;
		
		case 40:
			func_180(uParam1, "Nigel1C", func_182(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_181(iParam0), 1, 1);
			break;
		
		case 41:
			func_180(uParam1, "Nigel1D", func_182(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_181(iParam0), 1, 1);
			break;
		
		case 42:
			func_180(uParam1, "Nigel2", func_182(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		
		case 43:
			func_180(uParam1, "Nigel3", func_182(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		
		case 44:
			func_180(uParam1, "Omega1", func_182(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 45:
			func_180(uParam1, "Omega2", func_182(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 46:
			func_180(uParam1, "Paparazzo1", func_182(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 47:
			func_180(uParam1, "Paparazzo2", func_182(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 48:
			func_180(uParam1, "Paparazzo3", func_182(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 49:
			func_180(uParam1, "Paparazzo3A", func_182(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 50:
			func_180(uParam1, "Paparazzo3B", func_182(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 51:
			func_180(uParam1, "Paparazzo4", func_182(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 52:
			func_180(uParam1, "Rampage1", func_182(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 54:
			func_180(uParam1, "Rampage3", func_182(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 55:
			func_180(uParam1, "Rampage4", func_182(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 56:
			func_180(uParam1, "Rampage5", func_182(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 53:
			func_180(uParam1, "Rampage2", func_182(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 57:
			func_180(uParam1, "TheLastOne", func_182(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 58:
			func_180(uParam1, "Tonya1", func_182(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 59:
			func_180(uParam1, "Tonya2", func_182(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 60:
			func_180(uParam1, "Tonya3", func_182(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 61:
			func_180(uParam1, "Tonya4", func_182(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 62:
			func_180(uParam1, "Tonya5", func_182(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_180(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_181(int iParam0)
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

struct<2> func_182(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_183(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_183(int iParam0)
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

int func_184()
{
	func_123();
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

int func_185()
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

int func_186()
{
	if (func_189() && !func_185())
	{
		return 1;
	}
	if (func_188() && func_187())
	{
		return 1;
	}
	return 0;
}

bool func_187()
{
	return Global_106283 > 0;
}

int func_188()
{
	if (Global_90634 != -1)
	{
		return 1;
	}
	return 0;
}

int func_189()
{
	if (Global_90634 != -1)
	{
		return MISC::IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 20);
	}
	return 0;
}

int func_190()
{
	if ((Global_106554 == func_191() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_106555)
	{
		return 1;
	}
	return 0;
}

int func_191()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar1 = func_192(Var0);
	return uVar1;
}

int func_192(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_193()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 1);
	}
	func_292(25, iLocal_80);
	func_197();
	func_194();
	func_274();
}

void func_194()
{
	func_195();
}

int func_195()
{
	if (func_196(0))
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

bool func_196(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71838, 0);
}

int func_197()
{
	return 1;
}

void func_198(int iParam0)
{
	Global_106551 = iParam0;
}

void func_199()
{
	switch (iLocal_116)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_61))
			{
				BRAIN::TASK_PLAY_ANIM(iLocal_61, cLocal_319, "IG_1_guy_stickup_loop", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_60))
			{
				BRAIN::TASK_PLAY_ANIM(iLocal_60, cLocal_321, "ortega_stand_loop_ort", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			iLocal_116++;
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
			{
				if (!PED::IS_PED_INJURED(iLocal_61))
				{
					if (func_176())
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_66))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_61, 0))
							{
								iLocal_66 = func_137(iLocal_61, 1, 0);
							}
							if (!func_190())
							{
								func_168(1);
							}
						}
					}
					if (func_167())
					{
						func_42(&uLocal_154, cLocal_85, "REMG2_ARG", 4, 0, 0, 0);
						func_166();
						iLocal_147 = MISC::GET_GAME_TIMER();
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						iLocal_150 = 1;
						iLocal_116++;
					}
				}
				else if (!PED::IS_PED_INJURED(iLocal_60))
				{
					BRAIN::TASK_SMART_FLEE_COORD(iLocal_60, vLocal_121, 250f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_60, true);
					SYSTEM::WAIT(0);
					func_205();
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (func_204())
				{
					iLocal_116 = 4;
				}
				if (func_153())
				{
					iLocal_116 = 9;
				}
				if (func_203())
				{
					iLocal_116 = 6;
				}
				if (func_202())
				{
					iLocal_116 = 4;
				}
			}
			if (!func_190())
			{
				if (func_177())
				{
					func_274();
				}
			}
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
			{
				if (!PED::IS_PED_INJURED(iLocal_61))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 6f, 6f, 15f, 0, 1, 0))
					{
						if (PED::_CAN_PED_SEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 3f, 3f, 15f, 0, 1, 0))
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_61, 65f))
							{
								iLocal_149 = MISC::GET_GAME_TIMER();
								BRAIN::TASK_LOOK_AT_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
								func_42(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
								SYSTEM::SETTIMERB(0);
								iLocal_116++;
							}
							else
							{
								iLocal_149 = MISC::GET_GAME_TIMER();
								BRAIN::TASK_LOOK_AT_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
								func_42(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
								SYSTEM::SETTIMERB(0);
								iLocal_116++;
							}
						}
					}
				}
			}
			if (func_204() || func_202())
			{
				iLocal_116 = 4;
			}
			if (func_153())
			{
				iLocal_116 = 9;
			}
			if (func_203())
			{
				iLocal_116 = 6;
			}
			break;
		
		case 3:
			if ((iLocal_148 - iLocal_149) > 12500)
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					iLocal_116 = 4;
				}
			}
			if ((iLocal_148 - iLocal_149) > 5500)
			{
				if (!bLocal_113)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
					{
						if (!PED::IS_PED_INJURED(iLocal_61))
						{
							func_42(&uLocal_154, cLocal_85, sLocal_96, 4, 0, 0, 0);
							BRAIN::TASK_COMBAT_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 0, 16);
							bLocal_113 = true;
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
							{
								if (!PED::IS_PED_INJURED(iLocal_60))
								{
									BRAIN::TASK_SMART_FLEE_COORD(iLocal_60, vLocal_121, 250f, -1, 0, 0);
									PED::SET_PED_KEEP_TASK(iLocal_60, true);
									SYSTEM::WAIT(0);
								}
								if (!PED::IS_PED_INJURED(iLocal_60))
								{
								}
								if (HUD::DOES_BLIP_EXIST(iLocal_63))
								{
									HUD::REMOVE_BLIP(&iLocal_63);
								}
							}
						}
					}
				}
			}
			if (bLocal_113)
			{
				iLocal_116 = 10;
			}
			else
			{
				if (func_204())
				{
					iLocal_116 = 4;
				}
				if (func_153())
				{
					iLocal_116 = 9;
				}
				if (func_203())
				{
					iLocal_116 = 6;
				}
				if (func_201())
				{
					iLocal_116 = 9;
				}
				if (func_202())
				{
					iLocal_116 = 4;
				}
			}
			break;
		
		case 10:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
			{
				if (PED::IS_PED_INJURED(iLocal_61) || func_38(PLAYER::PLAYER_PED_ID(), iLocal_61, 1) > 100f)
				{
					func_200();
					func_205();
				}
			}
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
			{
				if (!PED::IS_PED_INJURED(iLocal_60))
				{
					if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 1))
					{
						BRAIN::CLEAR_PED_TASKS(iLocal_60);
						if (!PED::IS_PED_INJURED(iLocal_61))
						{
							BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
							BRAIN::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_61, false), 150f, -1, 0, 0);
							BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
							BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
							BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
							PED::SET_PED_KEEP_TASK(iLocal_60, true);
						}
						iLocal_122 = 1;
					}
					else
					{
						BRAIN::CLEAR_PED_TASKS(iLocal_60);
						BRAIN::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_60, true);
						if (HUD::DOES_BLIP_EXIST(iLocal_63))
						{
							HUD::REMOVE_BLIP(&iLocal_63);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
			{
				if (!PED::IS_PED_INJURED(iLocal_61))
				{
					BRAIN::CLEAR_PED_TASKS(iLocal_61);
					BRAIN::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_61, true);
					if (HUD::DOES_BLIP_EXIST(iLocal_64))
					{
						HUD::REMOVE_BLIP(&iLocal_64);
					}
				}
			}
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				func_105();
			}
			SYSTEM::WAIT(0);
			if (!iLocal_122)
			{
				if (!PED::IS_PED_INJURED(iLocal_61))
				{
					func_42(&uLocal_154, cLocal_85, "REMG2_FKIT", 4, 0, 0, 0);
				}
				func_274();
			}
			break;
		
		case 5:
			if (SYSTEM::TIMERB() > 250)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
				{
					if (!PED::IS_PED_INJURED(iLocal_61))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_61, 17, true);
						PED::SET_PED_RESET_FLAG(iLocal_61, 156, true);
						BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
						BRAIN::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
						BRAIN::TASK_PERFORM_SEQUENCE(iLocal_61, iLocal_103);
						BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
						PED::SET_PED_KEEP_TASK(iLocal_61, true);
						SYSTEM::WAIT(0);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_61, false, 1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_61);
						func_42(&uLocal_154, cLocal_85, sLocal_95, 4, 0, 0, 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
				{
					if (!PED::IS_PED_INJURED(iLocal_60))
					{
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 1))
						{
							BRAIN::CLEAR_PED_TASKS(iLocal_60);
							iLocal_122 = 1;
						}
					}
				}
				if (!iLocal_122)
				{
					SYSTEM::WAIT(0);
					func_274();
				}
			}
			break;
		
		case 6:
			if (SYSTEM::TIMERA() > 500)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
					{
						if (!PED::IS_PED_INJURED(iLocal_60))
						{
							BRAIN::CLEAR_PED_TASKS(iLocal_60);
							BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
							BRAIN::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 0, 2);
							BRAIN::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
							BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
							BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
							BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
							PED::SET_PED_KEEP_TASK(iLocal_60, true);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
					{
						if (!PED::IS_PED_INJURED(iLocal_61))
						{
							func_42(&uLocal_154, cLocal_85, sLocal_96, 4, 0, 0, 0);
							BRAIN::CLEAR_PED_TASKS(iLocal_61);
							BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
							BRAIN::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 0, 2);
							BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							BRAIN::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
							BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
							BRAIN::TASK_PERFORM_SEQUENCE(iLocal_61, iLocal_103);
							BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
							PED::SET_PED_KEEP_TASK(iLocal_61, true);
						}
					}
				}
				SYSTEM::WAIT(0);
				func_274();
			}
			break;
		
		case 7:
			SYSTEM::SETTIMERA(0);
			iLocal_116++;
			break;
		
		case 8:
			if (SYSTEM::TIMERA() > 200)
			{
				func_205();
			}
			break;
		
		case 9:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
			{
				if (!PED::IS_PED_INJURED(iLocal_61))
				{
					PED::SET_PED_RESET_FLAG(iLocal_61, 156, true);
					BRAIN::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_61, 50f, 0);
					if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						func_105();
					}
					SYSTEM::WAIT(0);
					func_42(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
			{
				if (!PED::IS_PED_INJURED(iLocal_60))
				{
					BRAIN::CLEAR_PED_TASKS(iLocal_60);
					BRAIN::TASK_COWER(iLocal_60, 2000);
					iLocal_122 = 1;
				}
			}
			break;
	}
	if (iLocal_116 != 8 && iLocal_122)
	{
		iLocal_116 = 7;
	}
	iLocal_148 = MISC::GET_GAME_TIMER();
	if (iLocal_150 && !bLocal_113)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_61) && ENTITY::DOES_ENTITY_EXIST(iLocal_61))
		{
			if (!PED::IS_PED_INJURED(iLocal_60) && !PED::IS_PED_INJURED(iLocal_61))
			{
				if ((((iLocal_148 - iLocal_147) > 12000 && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 3f, 3f, 35f, 0, 1, 0)) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_61)) && !func_161())
				{
					if ((func_42(&uLocal_154, cLocal_85, "REMG2_FKIT", 4, 0, 0, 0) || func_58()) || func_58())
					{
						PED::SET_PED_RESET_FLAG(iLocal_61, 156, true);
						PED::SET_PED_SHOOTS_AT_COORD(iLocal_61, PED::GET_PED_BONE_COORDS(iLocal_60, 31086, 0f, 0f, 0f), 0);
						BRAIN::CLEAR_PED_TASKS(iLocal_60);
						ENTITY::SET_ENTITY_HEALTH(iLocal_60, 99, 0);
						BRAIN::TASK_SMART_FLEE_COORD(iLocal_61, vLocal_121, 250f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_61, true);
						func_274();
					}
				}
			}
		}
	}
}

void func_200()
{
	Global_14732 = 0;
	func_52();
}

int func_201()
{
	if (!PED::IS_PED_INJURED(iLocal_60) && !PED::IS_PED_INJURED(iLocal_61))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 2f, 2f, 2f, 0, 1, 0))
		{
		}
	}
	return 0;
}

int func_202()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, 0))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 20f, 20f, 20f, 0, 1, 0))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_60) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_60))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
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
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_61, 0))
	{
		if (func_153())
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
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

int func_203()
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 5.3f, 5.3f, 6f, 0, 1, 0))
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 17))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(iLocal_61))
					{
						if (!PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_61))
						{
							if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_60) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_60))
							{
								SYSTEM::SETTIMERB(0);
								return 1;
							}
						}
					}
					else if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_60) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_60))
					{
						SYSTEM::SETTIMERB(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_204()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, 0))
	{
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_60, 31086, 0f, 0f, 0f), 5f, 1))
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_205()
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (!PED::IS_PED_RAGDOLL(iLocal_60))
		{
			if (func_190())
			{
				if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_60, 242628503) == 7 || BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_60, 474215631) == 7)
				{
					if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						func_105();
					}
					if (!PED::IS_PED_INJURED(iLocal_61))
					{
						if (!PED::IS_PED_FLEEING(iLocal_60))
						{
							BRAIN::TASK_SMART_FLEE_PED(iLocal_60, iLocal_61, 150f, -1, 0, 0);
						}
					}
					else if (iLocal_45 == 3)
					{
						if (!PED::IS_PED_FLEEING(iLocal_60))
						{
							BRAIN::TASK_SMART_FLEE_COORD(iLocal_60, vLocal_104, 150f, -1, 0, 0);
						}
					}
					PED::SET_PED_KEEP_TASK(iLocal_60, true);
					SYSTEM::WAIT(0);
					func_42(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0);
					SYSTEM::WAIT(0);
					if (iLocal_152 > 0)
					{
						PED::SET_PED_MONEY(PLAYER::PLAYER_PED_ID(), (iLocal_152 / 100) * 90);
						func_60(func_122(), 1, iLocal_152);
						SYSTEM::WAIT(0);
						func_206(func_122(), 1, (iLocal_152 / 10), 0, 1);
					}
					func_198(3);
					func_193();
				}
			}
			else
			{
				func_274();
			}
		}
		else
		{
			func_274();
		}
	}
	else
	{
		func_274();
	}
}

void func_206(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_61(Global_106565.f_28044[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_207()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_185())
		{
			return 0;
		}
	}
	if (func_186())
	{
		return 1;
	}
	if (func_178(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_208()
{
	func_219();
	func_218(&uLocal_349, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE");
	func_218(&uLocal_349, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT");
	func_218(&uLocal_349, cLocal_333);
	func_218(&uLocal_349, cLocal_321);
	func_216(&uLocal_349, iLocal_75);
	func_216(&uLocal_349, iLocal_76);
	func_216(&uLocal_349, iLocal_77);
	func_218(&uLocal_349, cLocal_320);
	func_218(&uLocal_349, cLocal_319);
	func_218(&uLocal_349, cLocal_334);
	func_218(&uLocal_349, "RANDOM@BICYCLE_THIEF@IDLE_A");
	if (func_212(&uLocal_349))
	{
		func_209();
		return 1;
	}
	return 0;
}

void func_209()
{
	iLocal_60 = PED::CREATE_PED(26, iLocal_75, vLocal_67, fLocal_69, 1, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_60, true);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_60, false);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_60, 8, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_60, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_60, 512, true);
	AUDIO::STOP_PED_SPEAKING(iLocal_60, true);
	PED::_0x570389D1C3DE3C6B(iLocal_60);
	PED::SET_PED_MONEY(iLocal_60, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_60, true);
	if (iLocal_75 == joaat("a_m_y_genstreet_01"))
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_60, 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_60, 3, 0, 3, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_60, 4, 0, 2, 0);
	}
	if (iLocal_75 == joaat("a_m_y_business_02"))
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_60, 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_60, 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_60, 3, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_60, 4, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_60, 8, 0, 0, 0);
	}
	PED::ADD_RELATIONSHIP_GROUP("theAssailant", &iLocal_78);
	iLocal_61 = PED::CREATE_PED(26, iLocal_76, vLocal_68, fLocal_72, 1, true);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_61, true, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_61, true);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_61, 1, 0);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_61, joaat("weapon_pistol"), -1, true, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_61, 13, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_61, 17, false);
	PED::SET_PED_DIES_WHEN_INJURED(iLocal_61, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_61, 42, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_61, 137, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 2, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_61, iLocal_78);
	AUDIO::STOP_PED_SPEAKING(iLocal_61, true);
	if (!MISC::IS_STRING_NULL(sLocal_102))
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_60, sLocal_102);
	}
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_61, sLocal_101);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 45677184, iLocal_78);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1191392768, iLocal_78);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_78, 45677184);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_78, 1191392768);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_78, 1862763509);
	switch (func_122())
	{
		case 0:
			func_211(&uLocal_154, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_211(&uLocal_154, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_211(&uLocal_154, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			break;
	}
	func_211(&uLocal_154, 1, iLocal_61, sLocal_100, 0, 1);
	func_211(&uLocal_154, 2, iLocal_60, sLocal_99, 0, 1);
	if (iLocal_45 == 2)
	{
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 1, false);
	}
	if (iLocal_80 == 1 || iLocal_80 == 4)
	{
		func_210();
	}
	if (iLocal_80 == 3)
	{
		vLocal_105 = { -325.4189f, -828.8596f, 31.1f };
		vLocal_106 = { 0f, 0f, 180f };
		iLocal_107 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_105, vLocal_106, 2);
		BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_61, iLocal_107, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE", "base", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	if (iLocal_80 == 4)
	{
		PATHFIND::DISABLE_NAVMESH_IN_AREA(Vector(28.5315f, -1027.565f, 37.1197f) - Vector(1f, 1f, 1f), Vector(28.5315f, -1027.565f, 37.1197f) + Vector(1f, 1f, 1f), 1);
	}
}

void func_210()
{
	vector3 vVar0;
	
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_61, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_319, sLocal_325, vLocal_331, vLocal_332, 0, 2), 0, 0, 1);
	vVar0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(cLocal_319, sLocal_325, vLocal_331, vLocal_332, 0f, 2) };
	if (vVar0.z < 0f)
	{
		vVar0.z = (vVar0.z + 360f);
	}
	ENTITY::SET_ENTITY_HEADING(iLocal_61, vVar0.z);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_60, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_319, sLocal_326, vLocal_331, vLocal_332, 0, 2), 0, 0, 1);
	vVar0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(cLocal_319, sLocal_326, vLocal_331, vLocal_332, 0f, 2) };
	if (vVar0.z < 0f)
	{
		vVar0.z = (vVar0.z + 360f);
	}
	ENTITY::SET_ENTITY_HEADING(iLocal_60, vVar0.z);
	BRAIN::TASK_PLAY_ANIM(iLocal_61, cLocal_319, sLocal_325, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
	BRAIN::TASK_PLAY_ANIM(iLocal_60, cLocal_319, sLocal_326, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
}

void func_211(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_212(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_213(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_213(var uParam0)
{
	return func_214(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_214(int iParam0, char* sParam1, int iParam2)
{
	if (MISC::IS_BIT_SET(iParam0, 30))
	{
		if (MISC::IS_BIT_SET(iParam0, 29))
		{
			switch (func_215(iParam0))
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

int func_215(int iParam0)
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

void func_216(var uParam0, int iParam1)
{
	func_217(uParam0, 0, iParam1, "NULL", 0);
}

void func_217(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!MISC::ARE_STRINGS_EQUAL(sParam3, "NULL"))
					{
						if (MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
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
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			MISC::SET_BIT(uParam0[iVar0 /*18*/], iParam1);
			MISC::SET_BIT(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_218(var uParam0, char* sParam1)
{
	func_217(uParam0, 1, -1, sParam1, 0);
}

void func_219()
{
	func_272();
	MISC::SET_BIT(&iLocal_120, 3);
	MISC::SET_BIT(&iLocal_120, 4);
	MISC::SET_BIT(&iLocal_120, 1);
	if (iLocal_80 == 1)
	{
		cLocal_319 = "RANDOM@MUGGING1";
		sLocal_325 = "STRUGGLE_Loop_A_Thief";
		sLocal_326 = "STRUGGLE_Loop_A_Shopkeeper";
		sLocal_328 = "FLEE_BACKWARD_Shopkeeper";
		sLocal_327 = "FLEE_BACKWARD_Thief";
		sLocal_330 = "FLEE_FORWARD_Shopkeeper";
		sLocal_329 = "FLEE_FORWARD_Thief";
		func_221();
		iLocal_152 = 200;
		iLocal_46 = 2;
		vLocal_121 = { -132.2607f, -1628.336f, 31.2107f };
		iLocal_75 = joaat("a_m_y_business_02");
		iLocal_76 = joaat("g_m_y_strpunk_01");
		vLocal_67 = { -138.814f, -1635.975f, 31.357f };
		fLocal_69 = 318.519f;
		vLocal_68 = { -129.8504f, -1629.676f, 31.2506f };
		fLocal_72 = 98f;
		vLocal_331 = { vLocal_67 };
		vLocal_332 = { 0f, 0f, fLocal_69 };
		vLocal_140 = { -103.8951f, -1593.239f, 30.49198f };
		vLocal_141 = { -89.29615f, -1575.444f, 32.30938f };
		vLocal_142 = { -152.0367f, -1654.379f, 31.73599f };
		vLocal_143 = { -169.8183f, -1669.556f, 33.94173f };
		vLocal_144 = { -152.0367f, -1654.379f, 31.73599f };
		vLocal_145 = { -103.8951f, -1593.239f, 30.49198f };
		fLocal_73 = 340.0645f;
		vLocal_74 = { -151.0793f, -1650.322f, 31.6504f };
		vLocal_79 = { -133.6872f, -1630.245f, 31.2527f };
		iLocal_77 = joaat("prop_ld_wallet_pickup");
		cLocal_85 = "REMG1AU";
		sLocal_86 = "REMG1_VIC";
		sLocal_87 = "REMG1_SHT";
		sLocal_88 = "REMG1_ASK";
		sLocal_89 = "REMG1_DRP";
		sLocal_90 = "REMG1_OHY";
		sLocal_91 = "REMG1_THK";
		sLocal_92 = "REMG1_GIV";
		sLocal_93 = "REMG1_MUGA";
		sLocal_94 = "REMG1_WHO";
		switch (func_122())
		{
			case 0:
				sLocal_97 = "REMG1_HOM";
				sLocal_98 = "REMG1_WAM";
				break;
			
			case 1:
				sLocal_97 = "REMG1_HOF";
				sLocal_98 = "REMG1_WAF";
				break;
			
			case 2:
				sLocal_97 = "REMG1_HOT";
				sLocal_98 = "REMG1_WAT";
				break;
		}
		sLocal_101 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_102 = "A_M_Y_Business_02_WHITE_FULL_01";
		sLocal_99 = "MuggedMan";
		sLocal_100 = "MuggerGang";
		iLocal_48 = 1;
		cLocal_334 = "move_m@hurry@b";
	}
	if (iLocal_80 == 2)
	{
		cLocal_319 = "random@mugging2";
		cLocal_321 = "random@mugging2";
		iLocal_46 = 1;
		vLocal_121 = { 287.888f, -284.603f, 52.967f };
		iLocal_75 = joaat("a_f_y_genhot_01");
		iLocal_76 = joaat("g_m_y_strpunk_01");
		vLocal_67 = { 288.6728f, -282.4782f, 52.9707f };
		fLocal_69 = 260.7569f;
		vLocal_68 = { 290.5373f, -283.198f, 52.9799f };
		fLocal_72 = 45f;
		fLocal_73 = 251f;
		vLocal_74 = { 297.4484f, -261.2914f, 53.0037f };
		iLocal_77 = joaat("prop_ld_handbag");
		cLocal_85 = "REMG2AU";
		sLocal_86 = "REMG2_VIC";
		sLocal_87 = "REMG2_SHT";
		sLocal_88 = "REMG2_ASK";
		sLocal_89 = "REMG2_DRP";
		sLocal_90 = "REMG2_OHY";
		sLocal_91 = "REMG2_THK";
		sLocal_92 = "REMG2_GIV";
		sLocal_94 = "REMG2_WHO";
		sLocal_95 = "REMG2_GUN";
		sLocal_96 = "REMG2_FUT";
		switch (func_122())
		{
			case 0:
				sLocal_97 = "REMG2_HOM";
				sLocal_98 = "REMG2_WAM";
				break;
			
			case 1:
				sLocal_97 = "REMG2_HOF";
				sLocal_98 = "REMG2_WAF";
				break;
			
			case 2:
				sLocal_97 = "REMG2_HOT";
				sLocal_98 = "REMG2_WAT";
				break;
		}
		sLocal_101 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_99 = "MuggedYMan";
		sLocal_100 = "MuggerGang";
		iLocal_48 = 1;
		cLocal_334 = "move_m@hurry@b";
	}
	if (iLocal_45 == 1)
	{
		func_220();
		iLocal_152 = 2000;
		iLocal_46 = 2;
		if (iLocal_80 == 3)
		{
			cLocal_319 = "RANDOM@MUGGING3";
			vLocal_121 = { -317.1964f, -824.0751f, 31.4284f };
			iLocal_75 = joaat("a_f_y_hipster_01");
			iLocal_76 = joaat("a_m_o_tramp_01");
			vLocal_67 = { -310.9292f, -833.8435f, 30.6261f };
			fLocal_69 = 80.7161f;
			vLocal_68 = { -322.5526f, -827.186f, 30.5857f };
			fLocal_72 = 336.5502f;
			fLocal_73 = 81.8694f;
			vLocal_74 = { -322.3941f, -835.7213f, 30.6001f };
			vLocal_79 = { -320.9667f, -832.1209f, 30.5979f };
			iLocal_77 = joaat("prop_ld_purse_01");
			cLocal_85 = "REMG3AU";
			sLocal_86 = "REMG3_VIC";
			sLocal_87 = "REMG3_SHT";
			sLocal_88 = "REMG3_ASK";
			sLocal_89 = "REMG3_DRP";
			sLocal_90 = "REMG3_OHY";
			sLocal_91 = "REMG3_THK";
			sLocal_92 = "REMG3_GIV";
			sLocal_93 = "REMG3_MUGB";
			sLocal_94 = "REMG3_WHO";
			sLocal_95 = "REMG3_GUN";
			sLocal_96 = "REMG3_FUT";
			switch (func_122())
			{
				case 0:
					sLocal_97 = "REMG3_HOM";
					sLocal_98 = "REMG3_WAM";
					break;
				
				case 1:
					sLocal_97 = "REMG3_HOF";
					sLocal_98 = "REMG3_WAF";
					break;
				
				case 2:
					sLocal_97 = "REMG3_HOT";
					sLocal_98 = "REMG3_WAT";
					break;
			}
			sLocal_101 = "G_M_Y_Korean_02_Korean_MINI_02";
			sLocal_99 = "MUGGEDHIPSTER";
			sLocal_100 = "MuggerTramp";
			iLocal_48 = 1;
			cLocal_334 = "move_f@hurry@a";
		}
		if (iLocal_80 == 4)
		{
			func_220();
			cLocal_319 = "RANDOM@MUGGING4";
			sLocal_325 = "STRUGGLE_Loop_B_Thief";
			sLocal_326 = "STRUGGLE_Loop_B_Shopkeeper";
			sLocal_328 = "FLEE_BACKWARD_Shopkeeper";
			sLocal_327 = "FLEE_BACKWARD_Thief";
			sLocal_330 = "FLEE_FORWARD_Shopkeeper";
			sLocal_329 = "FLEE_FORWARD_Thief";
			vLocal_121 = { 32.8802f, -1016.061f, 28.4527f };
			iLocal_75 = joaat("a_f_m_tourist_01");
			iLocal_76 = joaat("g_m_y_armgoon_02");
			vLocal_67 = { 32.2169f, -1020.864f, 28.456f };
			fLocal_69 = 159.1445f;
			vLocal_331 = { vLocal_67 };
			vLocal_332 = { 0f, 0f, fLocal_69 };
			vLocal_68 = { 38.1933f, -1023.579f, 28.4889f };
			fLocal_72 = 60.1372f;
			fLocal_73 = 248f;
			vLocal_74 = { 42.5323f, -990.353f, 28.248f };
			vLocal_140 = { 38.15186f, -1001.485f, 28.42276f };
			vLocal_141 = { 40.13669f, -995.2711f, 30.37197f };
			vLocal_142 = { 37.21758f, -1040.354f, 28.41506f };
			vLocal_143 = { 19.91492f, -1036.814f, 30.28045f };
			vLocal_144 = { 28.4511f, -1035.718f, 28.3329f };
			vLocal_145 = { 38.6536f, -1001.073f, 28.407f };
			vLocal_79 = { 32.536f, -1020.293f, 28.4576f };
			iLocal_77 = joaat("prop_ld_wallet_pickup");
			cLocal_85 = "REMG4AU";
			sLocal_86 = "REMG4_VIC";
			sLocal_87 = "REMG4_SHT";
			sLocal_88 = "REMG4_ASK";
			sLocal_89 = "REMG4_DRP";
			sLocal_90 = "REMG4_OHY";
			sLocal_91 = "REMG4_THK";
			sLocal_92 = "REMG4_GIV";
			sLocal_93 = "REMG4_MUGB";
			sLocal_94 = "REMG4_WHO";
			sLocal_95 = "REMG4_GUN";
			sLocal_96 = "REMG4_FUT";
			switch (func_122())
			{
				case 0:
					sLocal_97 = "REMG4_HOM";
					sLocal_98 = "REMG4_WAM";
					break;
				
				case 1:
					sLocal_97 = "REMG4_HOF";
					sLocal_98 = "REMG4_WAF";
					break;
				
				case 2:
					sLocal_97 = "REMG4_HOT";
					sLocal_98 = "REMG4_WAT";
					break;
			}
			sLocal_101 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_02";
			sLocal_99 = "MuggedWoman";
			sLocal_100 = "MuggerGang";
			iLocal_48 = 1;
			cLocal_334 = "move_f@hurry@a";
		}
	}
}

void func_220()
{
	cLocal_321 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_FEMALE";
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			sLocal_322 = "Return_Wallet_Positive_A_Player";
			sLocal_323 = "Return_Wallet_Positive_A_Female";
			sLocal_324 = "Return_Wallet_Positive_A_Cam";
			break;
		
		case 1:
			sLocal_322 = "Return_Wallet_Positive_B_Player";
			sLocal_323 = "Return_Wallet_Positive_B_Female";
			sLocal_324 = "Return_Wallet_Positive_B_Cam";
			break;
		
		case 2:
			sLocal_322 = "Return_Wallet_Positive_C_Player";
			sLocal_323 = "Return_Wallet_Positive_C_Female";
			sLocal_324 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_221()
{
	cLocal_321 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_MALE";
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			sLocal_322 = "Return_Wallet_Positive_A_Player";
			sLocal_323 = "Return_Wallet_Positive_A_Male";
			sLocal_324 = "Return_Wallet_Positive_A_Cam";
			break;
		
		case 1:
			sLocal_322 = "Return_Wallet_Positive_B_Player";
			sLocal_323 = "Return_Wallet_Positive_B_Male";
			sLocal_324 = "Return_Wallet_Positive_B_Cam";
			break;
		
		case 2:
			sLocal_322 = "Return_Wallet_Positive_C_Player";
			sLocal_323 = "Return_Wallet_Positive_C_Male";
			sLocal_324 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_222(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = MISC::GET_GAME_TIMER();
	}
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		iVar0 = (MISC::GET_GAME_TIMER() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (HUD::GET_BLIP_ALPHA(iParam0) != 255)
				{
					HUD::SET_BLIP_ALPHA(iParam0, 255);
				}
			}
			else if (HUD::GET_BLIP_ALPHA(iParam0) != 0)
			{
				HUD::SET_BLIP_ALPHA(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (HUD::GET_BLIP_ALPHA(iParam0) != 255)
			{
				HUD::SET_BLIP_ALPHA(iParam0, 255);
			}
		}
	}
}

void func_223(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_272 + uParam0->f_273) || MISC::IS_BIT_SET(Global_93682.f_20, 2)) || MISC::IS_BIT_SET(Global_93682.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 29))
					{
						func_224(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_224(int iParam0)
{
	func_225(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_225(int iParam0, char* sParam1, int iParam2)
{
	if (MISC::IS_BIT_SET(*iParam0, 30))
	{
		switch (func_215(*iParam0))
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

void func_226(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_191();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_228(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_106551 = 0;
	func_227();
}

void func_227()
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

void func_228(int iParam0)
{
	Global_106554 = iParam0;
}

int func_229(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (!Global_145143)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_191();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_269())
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
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_185())
			{
				return 0;
			}
		}
		if (!Global_106565.f_9079)
		{
			return 0;
		}
		if (func_196(0))
		{
			return 0;
		}
		if (func_186())
		{
			return 0;
		}
		if (func_268())
		{
			return 0;
		}
		if (Global_106554 != -1)
		{
			return 0;
		}
		if (func_124(func_122()))
		{
			if (func_178(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((vVar1.z - vLocal_43.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_267(iParam1))
		{
			return 0;
		}
		if (func_124(func_122()))
		{
			if (func_266(func_122()) == 4 || func_266(func_122()) == 5)
			{
				return 0;
			}
		}
		if (func_124(func_122()))
		{
			if (!func_265(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_264(Global_106565.f_24989.f_43[iParam1]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_106556) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_263())
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
		if (!func_254(4))
		{
			return 0;
		}
		if (!func_173(5))
		{
			return 0;
		}
		if (func_253(iParam1, iParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_253(0, 0))
		{
			return 0;
		}
		if (Global_25911)
		{
			return 0;
		}
		if (func_267(30) && !func_253(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_124(func_122()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_106565.f_2357.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_106565.f_2357.f_539.f_2296[iVar2];
				if (func_252(iVar4))
				{
					if (func_230(iVar2))
					{
						if (!func_28(vVar3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vVar3) < (210f * 210f))
							{
								if (func_122() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_230(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_106565.f_2357.f_539.f_2296[iParam0];
	return func_231(iVar0);
}

int func_231(int iParam0)
{
	return func_232(iParam0, 1);
}

int func_232(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_252(iParam0))
	{
		return 0;
	}
	func_233(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_233(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_234(func_245(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_234(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_244(iParam0, iParam1))
	{
		iVar0 = func_243(iParam1);
		iVar1 = func_241(iParam0);
		iVar2 = (func_241(iParam0) - func_241(iParam1));
		iVar3 = (func_243(iParam0) - func_243(iParam1));
		iVar4 = (func_240(iParam0) - func_240(iParam1));
		iVar5 = (func_239(iParam0) - func_239(iParam1));
		iVar6 = (func_238(iParam0) - func_238(iParam1));
		iVar7 = (func_237(iParam0) - func_237(iParam1));
	}
	else
	{
		iVar0 = func_243(iParam0);
		iVar1 = func_241(iParam1);
		iVar2 = (func_241(iParam1) - func_241(iParam0));
		iVar3 = (func_243(iParam1) - func_243(iParam0));
		iVar4 = (func_240(iParam1) - func_240(iParam0));
		iVar5 = (func_239(iParam1) - func_239(iParam0));
		iVar6 = (func_238(iParam1) - func_238(iParam0));
		iVar7 = (func_237(iParam1) - func_237(iParam0));
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
		iVar4 = (iVar4 + func_236(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_235(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_235(float fParam0, float fParam1, float fParam2)
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

int func_236(int iParam0, int iParam1)
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

int func_237(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_238(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_239(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_240(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_241(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_242(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_242(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_243(int iParam0)
{
	return iParam0 & 15;
}

int func_244(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_252(iParam1) || !func_252(iParam0))
	{
		return 1;
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
	iVar0 = func_240(iParam0);
	iVar1 = func_240(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_239(iParam0);
	iVar1 = func_239(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_238(iParam0);
	iVar1 = func_238(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_237(iParam0);
	iVar1 = func_237(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_245()
{
	var uVar0;
	
	func_251(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_250(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_249(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_248(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_247(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_246(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_246(var uParam0, int iParam1)
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

void func_247(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_248(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_243(*uParam0);
	iVar1 = func_241(*uParam0);
	if (iParam1 < 1 || iParam1 > func_236(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_249(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_250(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_251(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_252(int iParam0)
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
	iVar0 = func_237(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_238(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_239(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_241(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_243(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_240(iParam0);
	if (iVar5 < 1 || iVar5 > func_236(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_253(int iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(Global_106565.f_24989.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_254(int iParam0)
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_122();
				if (!func_124(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_262()) || Global_105612) || Global_25767) || func_261()) || func_51(8, -1)) || func_260()) || func_259()) || func_258()) || func_257()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_262()) || Global_25767) || func_261()) || func_51(8, -1)) || func_258()) || func_260()) || func_259()) || func_257()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_262()) || Global_105612) || Global_25767) || func_261()) || func_51(8, -1)) || func_258()) || func_260()) || func_259()) || func_257()) || Global_106565.f_7682.f_919[iVar0] == 5) || Global_36972 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_262()) || Global_105612) || Global_25767) || func_261()) || func_51(8, -1)) || func_260()) || func_259()) || func_257()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_262() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_51(8, -1)) || func_257()) || func_256()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_51(8, -1) || func_260()) || func_259()) || func_256()) || func_255())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_262()) || Global_25767) || func_261()) || func_51(8, -1)) || func_259()) || func_258()) || func_257()) || Global_106565.f_7682.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_262()) || func_259()) || Global_105612) || Global_25767) || func_261()) || Global_37584) || func_51(8, -1)) || func_258()) || func_256()) || func_257()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_262()) || Global_105612) || Global_25767) || func_261()) || func_51(8, -1)) || func_258()) || func_256()) || func_260()) || func_259()) || func_257())
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

var func_255()
{
	return Global_93721.f_1;
}

int func_256()
{
	if (Global_90634 != -1)
	{
		return MISC::IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 13);
	}
	return 0;
}

int func_257()
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_258()
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

bool func_259()
{
	return Global_93734.f_340 > 0;
}

bool func_260()
{
	return Global_93734.f_339 > 0;
}

var func_261()
{
	return Global_1312867;
}

int func_262()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

int func_263()
{
	func_48();
	if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_264(int iParam0)
{
	return func_244(func_245(), iParam0);
}

int func_265(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_122();
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

int func_266(int iParam0)
{
	if (!func_124(iParam0))
	{
		return 7;
	}
	return Global_106565.f_7682.f_919[iParam0];
}

bool func_267(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_269())
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

int func_268()
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

int func_269()
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

bool func_270(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_106565.f_18568[iParam0 /*6*/], 3);
}

bool func_271(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_106565.f_18568[iParam0 /*6*/], 0);
}

void func_272()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (SYSTEM::VDIST(vLocal_104, vLocal_81) < 20f)
		{
			iLocal_80 = 1;
			iLocal_45 = 2;
		}
		if (SYSTEM::VDIST(vLocal_104, vLocal_82) < 20f)
		{
			iLocal_80 = 2;
			iLocal_45 = 3;
		}
		if (SYSTEM::VDIST(vLocal_104, vLocal_83) < 20f)
		{
			iLocal_80 = 3;
			iLocal_45 = 1;
		}
		if (SYSTEM::VDIST(vLocal_104, vLocal_84) < 20f)
		{
			iLocal_80 = 4;
			iLocal_45 = 1;
		}
	}
}

void func_273(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_273 = iParam1;
	}
}

void func_274()
{
	if (iLocal_130)
	{
		if (iLocal_48)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_75);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_76);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_77);
		}
		if (!PED::IS_PED_INJURED(iLocal_61))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				BRAIN::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
			}
			PED::SET_PED_KEEP_TASK(iLocal_61, true);
			if (!bLocal_58)
			{
				PED::SET_PED_MONEY(iLocal_61, iLocal_152);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
		{
			if (!PED::IS_PED_INJURED(iLocal_60))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_60, true);
				if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_60, -1146898486) == 7 && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_60, 242628503) == 7)
				{
					BRAIN::OPEN_SEQUENCE_TASK(&iLocal_103);
					if (PED::IS_PED_DUCKING(iLocal_60))
					{
						BRAIN::TASK_TOGGLE_DUCK(0, 0);
					}
					BRAIN::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 9000, 0, 2);
					BRAIN::TASK_SMART_FLEE_COORD(0, vLocal_104, 250f, -1, 0, 0);
					BRAIN::CLOSE_SEQUENCE_TASK(iLocal_103);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
					BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_103);
					PED::SET_PED_KEEP_TASK(iLocal_60, true);
					if (!iLocal_128 && !iLocal_122)
					{
						if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							func_105();
						}
					}
				}
			}
		}
		SYSTEM::WAIT(0);
		if (HUD::DOES_BLIP_EXIST(iLocal_64))
		{
			HUD::REMOVE_BLIP(&iLocal_64);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_63))
		{
			HUD::REMOVE_BLIP(&iLocal_63);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_62);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_65))
		{
			HUD::REMOVE_BLIP(&iLocal_65);
		}
	}
	if (iLocal_335 != -1)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_335))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_335);
		}
		iLocal_335 = -1;
	}
	if (func_190())
	{
		PED::SET_CREATE_RANDOM_COPS(1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
	func_37(&uLocal_336, 0, 0);
	func_109(0, 1, 1, 0, 0, 0);
	func_280(-1);
	func_275(&uLocal_349, 0);
	if (iLocal_117 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_117);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_275(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_277(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_276(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_276(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_277(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			func_278(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_278(var uParam0)
{
	func_279(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_279(int iParam0, char* sParam1, int iParam2)
{
	if (MISC::IS_BIT_SET(iParam0, 30))
	{
		switch (func_215(iParam0))
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

void func_280(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_191();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_190())
	{
		func_285(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_106556 = MISC::GET_GAME_TIMER();
		func_284(30000);
		StringCopy(&cVar0, func_283(Global_106554, 1), 64);
		if (func_282(Global_106554) > 0)
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
	func_281(&Global_25824);
	Global_106555 = 0;
	func_228(-1);
}

void func_281(var uParam0)
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

int func_282(int iParam0)
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

char* func_283(int iParam0, bool bParam1)
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

void func_284(int iParam0)
{
	Global_36976 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_285(int iParam0)
{
	func_286(iParam0, 0, func_291(iParam0));
}

void func_286(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_245();
	func_289(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_288(iParam0, &uVar0);
	Var1 = { func_287(&uVar0) };
}

struct<16> func_287(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_239(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_238(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_237(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_240(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_243(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_241(*uParam0), 64);
	return Var0;
}

void func_288(int iParam0, var uParam1)
{
	Global_106565.f_24989.f_43[iParam0] = *uParam1;
}

void func_289(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_241(*uParam0);
	iVar1 = func_243(*uParam0);
	iVar2 = func_240(*uParam0);
	iVar3 = func_239(*uParam0);
	iVar4 = func_238(*uParam0);
	iVar5 = func_237(*uParam0);
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
	iVar6 = func_236(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_236(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_290(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_290(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_251(uParam0, iParam1);
	func_250(uParam0, iParam2);
	func_249(uParam0, iParam3);
	func_247(uParam0, iParam5);
	func_248(uParam0, iParam4);
	func_246(uParam0, iParam6);
}

int func_291(int iParam0)
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

void func_292(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_191();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_282(iParam0))
	{
		func_302(iParam0, iParam1);
		if (!func_301(51))
		{
			func_298("RE_REWARD", 1, 0, 4000, 10000, func_184(), 0, 138, 0);
			func_297(51);
		}
		if (func_169(iParam0))
		{
			Global_106565.f_24989.f_2 = 3;
		}
		if (func_296(iParam0, iParam1) != 322)
		{
			func_293(func_296(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_106553 = iParam1;
		if (Global_106551 == 0)
		{
			if (((Global_106554 == 1 || Global_106554 == 5) || Global_106554 == 11) || Global_106554 == 25)
			{
				func_198(2);
			}
			else if ((Global_106554 == 26 || Global_106554 == 8) || Global_106554 == 17)
			{
				func_198(7);
			}
			else
			{
				func_198(1);
			}
		}
	}
}

void func_293(int iParam0, var uParam1, var uParam2)
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
		func_70((891 + iParam0), 1, -1, 1);
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
		func_294();
	}
}

void func_294()
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
		func_91(13, SYSTEM::FLOOR(Global_106565.f_10188.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_71590)
		{
			if (func_295() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_195();
				}
			}
		}
	}
}

int func_295()
{
	return Global_25765;
}

int func_296(int iParam0, int iParam1)
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

void func_297(int iParam0)
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

void func_298(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_299(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_299(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_300();
	}
}

void func_300()
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

int func_301(int iParam0)
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

void func_302(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_106565.f_24989.f_8[iParam0]), iParam1);
}

