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
	vector3 vLocal_45 = { 0f, 0f, 0f };
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
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 17;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 17;
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
	var uLocal_115 = 10;
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
	var uLocal_126 = 2;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 8;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 8;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	float fLocal_147 = 0f;
	var uLocal_148 = 12;
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
	var uLocal_161 = 12;
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
	var uLocal_174 = 12;
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
	var uLocal_187 = 9;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 9;
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
	var uLocal_221 = 56;
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
	int iLocal_307 = 0;
	var uLocal_308 = 0;
	vector3 vLocal_309 = { 0f, 0f, 0f };
	vector3 vLocal_312 = { 0f, 0f, 0f };
	vector3 vLocal_315 = { 0f, 0f, 0f };
	vector3 vLocal_318 = { 0f, 0f, 0f };
	vector3 vLocal_321 = { 0f, 0f, 0f };
	vector3 vLocal_324 = { 0f, 0f, 0f };
	vector3 vLocal_327 = { 0f, 0f, 0f };
	vector3 vLocal_330 = { 0f, 0f, 0f };
	vector3 vLocal_333 = { 0f, 0f, 0f };
	vector3 vLocal_336 = { 0f, 0f, 0f };
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_355 = 0;
	var uLocal_356 = 3;
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
	var uLocal_404 = 4;
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
	var uLocal_469 = 2;
	var uLocal_470 = 0;
	var uLocal_471 = 4;
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
	var uLocal_537 = 4;
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
	var uLocal_608 = 12;
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
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
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
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 3;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<282> Var0;
	struct<29> Var1680;
	int iVar1712;
	float fVar1713;
	int iVar1714;
	int iVar1715;
	int iVar1716;
	int iVar1717;
	var uVar1718;
	
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
	vLocal_45 = { 500f, 500f, 500f };
	fLocal_147 = ((0.05f + 0.275f) - 0.01f);
	iLocal_307 = -1;
	vLocal_309 = { 0.034f, 0.002f, -0.007f };
	vLocal_312 = { 70.56f, 72.36f, 67.68f };
	vLocal_315 = { 2f, -0.04f, 0.6f };
	vLocal_318 = { 3.2f, -0.04f, 0.6f };
	vLocal_321 = { 3.2f, -0.04f, -0.6f };
	vLocal_324 = { 2f, -0.04f, -0.6f };
	vLocal_327 = { -3.2f, -0.04f, 0.6f };
	vLocal_330 = { -2f, -0.04f, 0.6f };
	vLocal_333 = { -2f, -0.04f, -0.6f };
	vLocal_336 = { -3.2f, -0.04f, -0.6f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_329();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(0);
	Var0 = 2;
	Var0.f_1.f_4.f_6 = 4;
	Var0.f_1.f_35 = 4;
	Var0.f_1.f_59 = 2;
	Var0.f_1.f_62 = 1056964608;
	Var0.f_1.f_66 = 1065353216;
	Var0.f_1.f_67 = 1065353216;
	Var0.f_1.f_94.f_4.f_6 = 4;
	Var0.f_1.f_94.f_35 = 4;
	Var0.f_1.f_94.f_59 = 2;
	Var0.f_1.f_94.f_62 = 1056964608;
	Var0.f_1.f_94.f_66 = 1065353216;
	Var0.f_1.f_94.f_67 = 1065353216;
	Var0.f_189.f_3 = 4;
	Var0.f_189.f_16 = 4;
	Var0.f_189.f_32 = 2;
	Var0.f_189.f_39 = 3;
	Var0.f_282 = 10;
	Var0.f_303 = 77;
	Var0.f_535 = 77;
	Var0.f_535.f_1 = -1082130432;
	Var0.f_535.f_1.f_1 = -1082130432;
	Var0.f_535.f_1.f_2 = -1082130432;
	Var0.f_535.f_1.f_3 = -1;
	Var0.f_535.f_1.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_1460 = 10;
	Var0.f_1460.f_1 = 10;
	Var0.f_1460.f_1.f_11 = 10;
	Var0.f_1460.f_1.f_11.f_11 = 10;
	Var0.f_1460.f_1.f_11.f_11.f_11 = 10;
	Var0.f_1460.f_1.f_11.f_11.f_11.f_11 = 10;
	Var0.f_1460.f_1.f_11.f_11.f_11.f_11.f_11 = 10;
	Var0.f_1460.f_1.f_11.f_11.f_11.f_11.f_11.f_11 = 10;
	Var0.f_1460.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 10;
	Var0.f_1460.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 10;
	Var0.f_1460.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 10;
	Var0.f_1571 = 11;
	Var0.f_1583 = 24;
	Var1680.f_3 = 1;
	Var1680.f_7 = 2;
	Var1680.f_7.f_1.f_1 = 5;
	Var1680.f_7.f_1.f_8.f_1 = 5;
	Var1680.f_28 = 1;
	iVar1712 = 0;
	fVar1713 = 0f;
	iVar1714 = func_328(25);
	iVar1715 = func_328(17);
	func_327(&Var0, iVar1714, iVar1715);
	iVar1716 = 0;
	iVar1717 = (1 - iVar1716);
	func_313(&Var0, &Var1680, 1, iVar1716, iVar1717);
	while (true)
	{
		func_312(&Var0);
		func_311(&fVar1713, &(Var0.f_189), &(Var0[iVar1716 /*94*/]));
		if (Global_90640)
		{
			func_307(&Var0);
		}
		if (func_306(&Var1680) > 4 && func_304(&Var0, iVar1716, &iVar1712))
		{
			func_301(2, 140);
			func_307(&Var0);
		}
		func_3(&Var0, &Var1680, &iVar1712, iVar1716, iVar1717, &uVar1718, 0);
		func_2(&(Var0.f_281));
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tennis")) > 0)
		{
			func_301(2, 140);
			func_307(&Var0);
		}
		if (!func_1(2) == 49)
		{
			func_307(&Var0);
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(int iParam0)//Position - 0xE53
{
	return Global_88718[iParam0];
}

void func_2(var uParam0)//Position - 0xE63
{
	*uParam0++;
}

void func_3(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, bool bParam6)//Position - 0xE73
{
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;
	float fVar13;
	vector3 vVar14;
	bool bVar17;
	int iVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	vector3 vVar23;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	var uVar29;
	char* sVar31;
	float fVar32;
	vector3 vVar33;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	
	vVar3 = { 0f, 0f, 0f };
	bVar17 = (uParam0->f_1657 == 1 && func_306(uParam1) == 20);
	func_289(uParam0, func_306(uParam1), *iParam2, iParam3, iParam4, bVar17);
	if (uParam0->f_1657 == 1 && !bParam6)
	{
		func_288(uParam0);
	}
	if (func_287(&(uParam0->f_247), 16))
	{
		func_286(&(uParam0->f_247), 16);
	}
	iVar18 = func_285(&(uParam0->f_247));
	if (func_283(uParam0, iVar18, *iParam2, func_306(uParam1)))
	{
		bVar19 = (func_306(uParam1) != 8 && func_306(uParam1) < 16);
		vVar14 = { func_282(&(uParam0->f_247)) };
		iVar20 = func_278(&(uParam0->f_189), &vVar14, &(uParam0->f_247.f_10), &(uParam0->f_1658), &(uParam0->f_247.f_4), &(uParam0->f_247.f_22), &(uParam0->f_247.f_5), &iVar18, bVar19, -1f, func_287(&(uParam0->f_247), 32), 0, 0);
		if (iVar20 == 1)
		{
			func_277(&(uParam0->f_247), 16);
		}
		else if (iVar20 == 3 || iVar20 == 2)
		{
			func_276(uParam0[0 /*94*/], 32768);
			func_276(uParam0[1 /*94*/], 32768);
		}
		func_275(&(uParam0->f_247), vVar14);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_247, func_282(&(uParam0->f_247)), 1, false, 0, 0);
		ENTITY::SET_ENTITY_VELOCITY(uParam0->f_247, uParam0->f_247.f_10);
		vVar14 = { func_282(&(uParam0->f_247)) };
	}
	else if (func_306(uParam1) > 5)
	{
		if (func_274(&(uParam0->f_247)))
		{
			func_273(&(uParam0->f_247));
		}
	}
	func_272(uParam0, uParam1, &iVar21, &iVar22);
	switch (func_306(uParam1))
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			{
				HUD::CLEAR_PRINTS();
				ENTITY::SET_ENTITY_COORDS((uParam0[iParam3 /*94*/])->f_32, func_269(&(uParam0->f_189), func_271(uParam1), uParam0->f_1661, uParam0->f_1658, iParam3 == func_270(uParam1), iParam3), 1, true, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), MISC::GET_HEADING_FROM_VECTOR_2D((uParam0[iParam3 /*94*/])->f_40, (uParam0[iParam3 /*94*/])->f_40.f_1));
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(uParam0->f_189.f_29, 50f, 0);
				func_268(uParam1, 1);
			}
			break;
		
		case 1:
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				CAM::DO_SCREEN_FADE_IN(250);
				if (uParam0->f_1657 != 1)
				{
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				}
				func_268(uParam1, 4);
			}
			break;
		
		case 4:
			if (func_267(uParam0))
			{
				if (uParam0->f_1657 == 1)
				{
					func_266(uParam0, 1);
					vVar23 = { func_269(&(uParam0->f_189), 1, uParam0->f_1661, uParam0->f_1658, 1, (uParam0[iParam3 /*94*/])->f_1) };
					func_265(uParam0[iParam3 /*94*/], PED::CREATE_PED(1, uParam0->f_1669, vVar23, MISC::GET_HEADING_FROM_VECTOR_2D(uParam0->f_1658, uParam0->f_1658.f_1), 0, false));
					BRAIN::TASK_STAND_STILL((uParam0[iParam3 /*94*/])->f_32, -1);
					ENTITY::SET_ENTITY_HEADING(func_264(uParam0[iParam3 /*94*/]), (MISC::GET_HEADING_FROM_VECTOR_2D(uParam0->f_1658, uParam0->f_1658.f_1) + 180f));
					vVar3 = { func_269(&(uParam0->f_189), func_271(uParam1), uParam0->f_1661, uParam0->f_1658, iParam4 == func_270(uParam1), iParam4) };
					func_265(uParam0[iParam4 /*94*/], PED::CREATE_PED(1, uParam0->f_1668, vVar3, MISC::GET_HEADING_FROM_VECTOR_2D(-uParam0->f_1658, -uParam0->f_1658.f_1), 0, false));
					BRAIN::TASK_STAND_STILL((uParam0[iParam4 /*94*/])->f_32, -1);
					ENTITY::SET_ENTITY_HEADING(func_264(uParam0[iParam4 /*94*/]), MISC::GET_HEADING_FROM_VECTOR_2D(-uParam0->f_1658, -uParam0->f_1658.f_1));
					vVar3 = { 0f, 0f, 0f };
					func_268(uParam1, 8);
					func_263(uParam1, 0);
					func_262(uParam1, iParam3);
					(uParam0[iParam3 /*94*/])->f_33 = OBJECT::CREATE_OBJECT(joaat("prop_tennis_rack_01b"), uParam0->f_189.f_3[3 /*3*/], false, false, false);
					ENTITY::SET_ENTITY_VISIBLE((uParam0[iParam3 /*94*/])->f_33, false, 0);
					(uParam0[iParam4 /*94*/])->f_33 = OBJECT::CREATE_OBJECT(joaat("prop_tennis_rack_01b"), uParam0->f_189.f_3[2 /*3*/], false, false, false);
					func_261(uParam0, iParam3, iParam4, 0, 0);
					ENTITY::SET_ENTITY_VISIBLE((uParam0[iParam4 /*94*/])->f_33, false, 0);
					ENTITY::SET_ENTITY_VISIBLE((uParam0[iParam3 /*94*/])->f_33, true, 0);
					OBJECT::_0xB2D0BDE54F0E8E5A((uParam0[iParam3 /*94*/])->f_33, true);
					ENTITY::SET_ENTITY_VISIBLE((uParam0[iParam4 /*94*/])->f_33, true, 0);
					OBJECT::_0xB2D0BDE54F0E8E5A((uParam0[iParam4 /*94*/])->f_33, true);
					func_260(func_264(uParam0[iParam3 /*94*/]), 1);
					func_260(func_264(uParam0[iParam4 /*94*/]), 1);
					if (uParam0->f_189 == 0)
					{
						func_258(uParam0);
						PED::SET_PED_COMPONENT_VARIATION(func_264(uParam0[iParam4 /*94*/]), 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(func_264(uParam0[iParam4 /*94*/]), 2, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(func_264(uParam0[iParam4 /*94*/]), 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(func_264(uParam0[iParam4 /*94*/]), 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(func_264(uParam0[iParam4 /*94*/]), 5, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(func_264(uParam0[iParam4 /*94*/]), 7, 0, 0, 0);
					}
				}
			}
			break;
		
		case 8:
			func_257(&(uParam0->f_247));
			if (func_256(*iParam2, 1))
			{
				func_261(uParam0, iParam3, iParam4, 0, 0);
				ENTITY::SET_ENTITY_VISIBLE((uParam0[iParam3 /*94*/])->f_33, true, 0);
				ENTITY::SET_ENTITY_VISIBLE((uParam0[iParam4 /*94*/])->f_33, true, 0);
				func_254(iParam2, 1);
			}
			bVar26 = (MISC::GET_GAME_TIMER() > func_253(uParam0[iParam3 /*94*/]) && MISC::GET_GAME_TIMER() > func_253(uParam0[iParam4 /*94*/]));
			if ((((uParam0->f_1657 != 1 && !func_256(*iParam2, 4194304)) && bVar26) || ((uParam0->f_1657 == 1 && func_252(uParam0) > func_251(uParam0, iParam3, iParam4)) && !bParam6)) || (uParam0->f_1657 == 1 && bParam6))
			{
				func_235(uParam0[iParam3 /*94*/], uParam0, func_271(uParam1), iParam3, 0, 0);
				func_235(uParam0[iParam4 /*94*/], uParam0, func_271(uParam1), iParam4, 0, 0);
				func_234(&((uParam0[iParam3 /*94*/])->f_4), 0);
				func_234(&((uParam0[iParam4 /*94*/])->f_4), 0);
				func_233(uParam0[iParam3 /*94*/], 75);
				func_233(uParam0[iParam4 /*94*/], 75);
				func_232(uParam0[iParam3 /*94*/]);
				func_232(uParam0[iParam4 /*94*/]);
				func_286(&(uParam0->f_247), 32);
				func_276(uParam0[iParam3 /*94*/], 1024);
				func_276(uParam0[iParam4 /*94*/], 1024);
				func_276(uParam0[iParam3 /*94*/], 8192);
				func_276(uParam0[iParam4 /*94*/], 8192);
				func_231(uParam0->f_1657, 1);
				func_254(iParam2, 268435456);
				func_254(iParam2, 1024);
				func_254(iParam2, 64);
				func_254(iParam2, 32);
				func_254(iParam2, 512);
				func_254(iParam2, 256);
				func_254(iParam2, 8);
				func_230(uParam0, 2);
				func_230(uParam0, 32);
				func_286(&(uParam0->f_247), 64);
				if (uParam1->f_5 != 10)
				{
					func_263(uParam1, 0);
				}
				func_229(uParam0[iParam3 /*94*/], 0);
				func_229(uParam0[iParam4 /*94*/], 0);
				if (uParam0->f_1657 != 1 && !func_228(uParam0, 1))
				{
					func_266(uParam0, 1);
				}
				bVar27 = (uParam0->f_1657 == 1 || func_228(uParam0, 1));
				if (!func_227(&((uParam0[func_270(uParam1) /*94*/])->f_4), 256))
				{
					func_226(uParam0[func_270(uParam1) /*94*/], uParam0, func_271(uParam1), func_270(uParam1), uParam0->f_1657 != 1, func_256(*iParam2, 1), (uParam0->f_1657 != 1 && !func_228(uParam0, 1)), bVar27, 0, 0);
				}
				if (!func_227(&((uParam0[(1 - func_270(uParam1)) /*94*/])->f_4), 256))
				{
					func_217(uParam0[(1 - func_270(uParam1)) /*94*/], uParam0, func_271(uParam1), (1 - func_270(uParam1)), uParam0->f_1657 != 1, bVar27, 0, !func_227(&((uParam0[(1 - func_270(uParam1)) /*94*/])->f_4), 16), 0);
				}
				func_230(uParam0, 8);
				func_268(uParam1, 20);
				func_216(&((uParam0[iParam3 /*94*/])->f_4), 256);
				func_216(&((uParam0[iParam4 /*94*/])->f_4), 256);
				func_215(&(uParam0->f_247));
				func_214(uParam0, 0);
				func_231(uParam0->f_1657, 0);
			}
			else
			{
				func_231(uParam0->f_1657, 0);
			}
			break;
		
		case 9:
			func_213(uParam0, iParam4, func_270(uParam1), uParam0->f_1657, func_227(&((uParam0[iParam4 /*94*/])->f_4), 256));
			if (func_228(uParam0, 4))
			{
				func_230(uParam0, 4);
			}
			if (!func_256(*iParam2, 4194304))
			{
				func_235(uParam0[func_270(uParam1) /*94*/], uParam0, func_271(uParam1), func_270(uParam1), 1, 0);
				func_235(uParam0[(1 - func_270(uParam1)) /*94*/], uParam0, func_271(uParam1), (1 - func_270(uParam1)), 0, 0);
			}
			func_212(uParam0[(1 - func_270(uParam1)) /*94*/], &(uParam0->f_247));
			if ((uParam0[func_270(uParam1) /*94*/])->f_31 != 4)
			{
				if (func_198(uParam0[func_270(uParam1) /*94*/], uParam0, func_271(uParam1), &uVar29, 0))
				{
					bVar28 = true;
				}
			}
			else
			{
				sVar31 = func_195(func_196(uParam0[func_270(uParam1) /*94*/]), "mini@tennis", "mini@tennis@female");
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(func_264(uParam0[func_270(uParam1) /*94*/]), sVar31, "serve", 3))
				{
					if (uParam0->f_1657 == 1 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_247))
					{
						fVar32 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(func_264(uParam0[func_270(uParam1) /*94*/]), sVar31, "serve");
						if (fVar32 > 0.015f && fVar32 < (0.015f * 10f))
						{
							func_194(uParam0[func_270(uParam1) /*94*/], &(uParam0->f_247));
						}
					}
				}
				if (!func_193(1))
				{
					func_192(1);
				}
				if (func_182(uParam0, uParam1, uParam0[func_270(uParam1) /*94*/], bParam6))
				{
					bVar28 = true;
				}
			}
			if (bVar28)
			{
				func_180(iParam2, 128);
				func_268(uParam1, 11);
				func_179(uParam1, func_270(uParam1));
				func_178(uParam0[iParam3 /*94*/], &(uParam0->f_247), 1);
				func_178(uParam0[iParam4 /*94*/], &(uParam0->f_247), 1);
			}
			break;
		
		case 10:
			func_235(uParam0[func_270(uParam1) /*94*/], uParam0, func_271(uParam1), func_270(uParam1), 0, 0);
			func_235(uParam0[(1 - func_270(uParam1)) /*94*/], uParam0, func_271(uParam1), (1 - func_270(uParam1)), 0, 0);
			func_212(uParam0[func_270(uParam1) /*94*/], &(uParam0->f_247));
			if (func_106(uParam0[(1 - func_270(uParam1)) /*94*/], uParam0, &(uParam1->f_7), func_177(uParam1), (1 - func_270(uParam1)), func_270(uParam1), func_271(uParam1), func_176(uParam1)))
			{
				func_179(uParam1, (1 - func_270(uParam1)));
				func_254(iParam2, 128);
			}
			if (MISC::GET_FRAME_COUNT() > func_105(&(uParam0->f_247)) && func_104(uParam0[(1 - func_270(uParam1)) /*94*/], 256))
			{
				func_103(uParam1, func_177(uParam1));
				func_268(uParam1, 14);
				func_102(iParam2);
				func_254(iParam2, 128);
			}
			if (func_97(&(uParam0->f_247), func_101(uParam0), &(uParam0->f_189.f_29)))
			{
				if (func_96(&(uParam0->f_189), uParam0, (uParam0[func_270(uParam1) /*94*/])->f_1, func_271(uParam1)))
				{
					func_95(&(uParam0->f_247));
					func_268(uParam1, 12);
				}
				else
				{
					func_102(iParam2);
					if (func_94(uParam1) == 0)
					{
						if (iParam3 == func_270(uParam1))
						{
							func_93(iParam2, 134217728);
						}
						else
						{
							func_93(iParam2, 33554432);
						}
						func_263(uParam1, 1);
						func_268(uParam1, 8);
						func_180(iParam2, 8192);
						func_180(iParam2, 32);
					}
					else
					{
						func_263(uParam1, 2);
						func_103(uParam1, (1 - func_270(uParam1)));
						func_268(uParam1, 14);
					}
				}
			}
			else if (func_177(uParam1) != func_270(uParam1))
			{
				if (iParam3 == func_270(uParam1))
				{
					func_93(iParam2, 67108864);
				}
				else
				{
					func_93(iParam2, 16777216);
				}
				func_103(uParam1, func_270(uParam1));
				func_268(uParam1, 14);
				func_102(iParam2);
			}
			vVar14 = { func_282(&(uParam0->f_247)) };
			if (vVar14.z < (uParam0->f_189.f_3[0 /*3*/].f_2 - 1f) && SYSTEM::VDIST2(uParam0->f_189.f_29, func_282(&(uParam0->f_247))) < (26.75f * 26.75f))
			{
				func_103(uParam1, (1 - func_270(uParam1)));
				func_268(uParam1, 14);
			}
			break;
		
		case 11:
			iVar12 = (1 - func_270(uParam1));
			func_276(uParam0[iVar12 /*94*/], 32768);
			vVar9 = { func_89(&(uParam0->f_189), func_282(&(uParam0->f_247)), uParam0->f_247.f_10, uParam0->f_1658, func_92(&(uParam0->f_247)), func_91(&(uParam0->f_247)), func_90(&(uParam0->f_247))) };
			func_88(uParam0[iVar12 /*94*/], &vVar9);
			vVar6 = { func_87((uParam0[iVar12 /*94*/])->f_37, &(uParam0->f_189), func_282(&(uParam0->f_247)), uParam0->f_247.f_10, uParam0->f_1658, func_92(&(uParam0->f_247)), func_91(&(uParam0->f_247)), func_90(&(uParam0->f_247)), &fVar13) };
			func_81(&((uParam0[iVar12 /*94*/])->f_4), func_82(uParam0[iVar12 /*94*/], &(uParam0->f_303), vVar6, uParam0->f_189.f_29.f_2, fVar13));
			if (!func_227(&((uParam0[iVar12 /*94*/])->f_4), 64))
			{
				func_80(&((uParam0[iVar12 /*94*/])->f_4), 64);
			}
			if (bParam6)
			{
				func_79(&((uParam0[iVar12 /*94*/])->f_4), 0f);
			}
			else
			{
				func_78(&((uParam0[iVar12 /*94*/])->f_4));
				if ((!func_227(&((uParam0[iVar12 /*94*/])->f_4), 32) && func_285(&(uParam0->f_247)) < 1) && !func_76(vVar9, uParam0->f_189.f_3[0 /*3*/] + uParam0->f_1661 * Vector(0.5f, 0.5f, 0.5f), uParam0->f_189.f_3[3 /*3*/] + uParam0->f_1661 * Vector(0.5f, 0.5f, 0.5f), func_77(&(uParam0->f_189))))
				{
					if (func_75(uParam0[iVar12 /*94*/]) == 75)
					{
						func_80(&((uParam0[iVar12 /*94*/])->f_4), 32);
					}
				}
			}
			if ((uParam0[iVar12 /*94*/])->f_31 == 4)
			{
				func_234(&((uParam0[iVar12 /*94*/])->f_4), 6);
			}
			else
			{
				func_234(&((uParam0[iVar12 /*94*/])->f_4), 1);
			}
			func_234(&((uParam0[func_270(uParam1) /*94*/])->f_4), 5);
			func_268(uParam1, 10);
			if ((uParam0[iVar12 /*94*/])->f_31 != 4)
			{
				*uParam5 = 0f;
				uParam0->f_247.f_1 = 0;
				func_180(iParam2, 536870912);
			}
			if ((uParam0[(1 - func_177(uParam1)) /*94*/])->f_1 == 0)
			{
				iVar2 = 0;
			}
			else if ((uParam0[(1 - func_177(uParam1)) /*94*/])->f_1 == 1)
			{
				iVar2 = 2;
			}
			func_71(uParam0[(1 - func_177(uParam1)) /*94*/], uParam0->f_189.f_3[iVar2 /*3*/], uParam0->f_189.f_16[iVar2 /*3*/]);
			func_66(uParam0[(1 - func_177(uParam1)) /*94*/], func_271(uParam1));
			break;
		
		case 12:
			vVar14 = { func_282(&(uParam0->f_247)) };
			if (!func_64(uParam0, func_177(uParam1)))
			{
				if (func_285(&(uParam0->f_247)) > 1)
				{
					func_103(uParam1, func_177(uParam1));
					func_102(iParam2);
				}
				else
				{
					func_103(uParam1, (1 - func_177(uParam1)));
					func_102(iParam2);
					if (func_63(uParam1) != iParam3 && uParam0->f_1657 == 1)
					{
						Global_106565.f_20015.f_10++;
						func_60(10, 1);
					}
					if (func_59(uParam0->f_247.f_13, &(uParam0->f_189), &(uParam0->f_1658), &(uParam0->f_1661)))
					{
						func_58(uParam0[(1 - func_177(uParam1)) /*94*/], 2);
					}
				}
				func_268(uParam1, 14);
			}
			else if (vVar14.z < (uParam0->f_189.f_3[0 /*3*/].f_2 - 1f) && SYSTEM::VDIST2(uParam0->f_189.f_29, func_282(&(uParam0->f_247))) < (26.75f * 26.75f))
			{
				func_103(uParam1, (1 - func_177(uParam1)));
				func_268(uParam1, 14);
				if (func_63(uParam1) != iParam3 && uParam0->f_1657 != 1)
				{
					Global_106565.f_20015.f_10++;
					func_60(10, 1);
				}
			}
			func_212(uParam0[func_177(uParam1) /*94*/], &(uParam0->f_247));
			if (func_106(uParam0[(1 - func_177(uParam1)) /*94*/], uParam0, &(uParam1->f_7), func_177(uParam1), (1 - func_177(uParam1)), func_270(uParam1), func_271(uParam1), func_176(uParam1)))
			{
				func_257(&(uParam0->f_247));
				func_179(uParam1, (1 - func_177(uParam1)));
				if ((uParam0[func_177(uParam1) /*94*/])->f_31 == 4)
				{
					func_234(&((uParam0[func_177(uParam1) /*94*/])->f_4), 5);
					func_57(uParam0[func_177(uParam1) /*94*/], &(uParam0->f_189), uParam0->f_1661);
				}
				else
				{
					func_254(iParam2, 536870912);
				}
				func_254(iParam2, 128);
				func_268(uParam1, 13);
				func_56(uParam0[iParam3 /*94*/]);
				func_56(uParam0[iParam4 /*94*/]);
			}
			else if (MISC::GET_FRAME_COUNT() > func_105(&(uParam0->f_247)) && func_104(uParam0[(1 - func_177(uParam1)) /*94*/], 256))
			{
				func_103(uParam1, func_177(uParam1));
				func_268(uParam1, 14);
				func_102(iParam2);
				func_254(iParam2, 128);
			}
			func_235(uParam0[iParam3 /*94*/], uParam0, func_271(uParam1), iParam3, 0, 0);
			func_235(uParam0[iParam4 /*94*/], uParam0, func_271(uParam1), iParam4, 0, 0);
			if (uParam0->f_1657 != 1)
			{
				func_53(uParam0[iParam3 /*94*/], &(uParam0->f_189));
			}
			if ((func_227(&((uParam0[iParam3 /*94*/])->f_4), 16) && !func_227(&((uParam0[iParam4 /*94*/])->f_4), 16)) && !func_227(&((uParam0[iParam4 /*94*/])->f_4), 256))
			{
				BRAIN::TASK_STAND_STILL(func_264(uParam0[iParam4 /*94*/]), -1);
			}
			break;
		
		case 13:
			iVar12 = (1 - func_177(uParam1));
			func_276(uParam0[iVar12 /*94*/], 32768);
			vVar33 = { func_89(&(uParam0->f_189), func_282(&(uParam0->f_247)), uParam0->f_247.f_10, uParam0->f_1658, func_92(&(uParam0->f_247)), func_91(&(uParam0->f_247)), func_90(&(uParam0->f_247))) };
			func_88(uParam0[iVar12 /*94*/], &vVar33);
			if (!func_227(&((uParam0[iVar12 /*94*/])->f_4), 64))
			{
				func_80(&((uParam0[iVar12 /*94*/])->f_4), 64);
			}
			if (func_52(uParam0[func_177(uParam1) /*94*/]) == 2)
			{
				func_81(&((uParam0[iVar12 /*94*/])->f_4), vVar33);
			}
			else
			{
				vVar6 = { func_87((uParam0[iVar12 /*94*/])->f_37, &(uParam0->f_189), func_282(&(uParam0->f_247)), uParam0->f_247.f_10, uParam0->f_1658, func_92(&(uParam0->f_247)), func_91(&(uParam0->f_247)), func_90(&(uParam0->f_247)), &fVar13) };
				func_81(&((uParam0[iVar12 /*94*/])->f_4), func_82(uParam0[iVar12 /*94*/], &(uParam0->f_303), vVar6, uParam0->f_189.f_29.f_2, fVar13));
			}
			if ((!func_227(&((uParam0[iVar12 /*94*/])->f_4), 32) && func_285(&(uParam0->f_247)) < 1) && !func_76(vVar33, uParam0->f_189.f_3[0 /*3*/] + uParam0->f_1661 * Vector(0.5f, 0.5f, 0.5f), uParam0->f_189.f_3[3 /*3*/] + uParam0->f_1661 * Vector(0.5f, 0.5f, 0.5f), func_77(&(uParam0->f_189))))
			{
				if (func_75(uParam0[iVar12 /*94*/]) == 75)
				{
					func_80(&((uParam0[iVar12 /*94*/])->f_4), 32);
				}
			}
			if ((uParam0[iVar12 /*94*/])->f_31 == 4)
			{
				if ((uParam0[iVar12 /*94*/])->f_1 == 0)
				{
					iVar2 = 0;
				}
				else if ((uParam0[iVar12 /*94*/])->f_1 == 1)
				{
					iVar2 = 2;
				}
				func_71(uParam0[iVar12 /*94*/], uParam0->f_189.f_3[iVar2 /*3*/], uParam0->f_189.f_16[iVar2 /*3*/]);
			}
			else
			{
				*uParam5 = 0f;
				uParam0->f_247.f_1 = 0;
				func_180(iParam2, 536870912);
			}
			func_216(&((uParam0[iVar12 /*94*/])->f_4), 4);
			func_234(&((uParam0[iVar12 /*94*/])->f_4), 1);
			func_268(uParam1, 12);
			break;
		
		case 14:
			func_178(uParam0[iParam3 /*94*/], &(uParam0->f_247), 0);
			func_178(uParam0[iParam4 /*94*/], &(uParam0->f_247), 0);
			func_234(&((uParam0[iParam3 /*94*/])->f_4), 0);
			func_234(&((uParam0[iParam4 /*94*/])->f_4), 0);
			func_51(&(uParam1->f_7[func_63(uParam1) /*8*/]), iParam2);
			if (uParam1->f_7[func_63(uParam1) /*8*/] >= func_50(func_176(uParam1), 7, 4) && (uParam1->f_7[func_63(uParam1) /*8*/] - uParam1->f_7[(1 - func_63(uParam1)) /*8*/]) >= 2)
			{
				func_48(&(uParam1->f_7), func_49(uParam1), func_63(uParam1), (1 - func_63(uParam1)), iParam2, func_176(uParam1));
				func_268(uParam1, 18);
				func_180(iParam2, 8388608);
				func_47(uParam1, 0);
				if (uParam0->f_1657 == 1)
				{
					func_214(uParam0, 0);
				}
				if (func_63(uParam1) == iParam3)
				{
					func_180(iParam2, 1048576);
					func_93(iParam2, 67108864);
					if ((uParam0[iParam3 /*94*/])->f_31 != 4)
					{
						func_35(2, 3);
						func_180(iParam2, 256);
					}
					if (func_34(&((uParam0[iParam4 /*94*/])->f_4)) == 2)
					{
						func_33(&((uParam0[iParam4 /*94*/])->f_4));
					}
				}
				else
				{
					func_180(iParam2, 2097152);
					func_93(iParam2, 16777216);
					if ((uParam0[iParam3 /*94*/])->f_31 != 4)
					{
						func_180(iParam2, 512);
					}
				}
			}
			else
			{
				iVar38 = func_63(uParam1);
				iVar39 = (1 - iVar38);
				iVar37 = func_49(uParam1);
				iVar36 = func_50(func_176(uParam1), 6, 3);
				if (func_176(uParam1))
				{
					func_32(uParam0, MISC::GET_GAME_TIMER() + 1500);
				}
				if (uParam1->f_7[iVar38 /*8*/] >= iVar36 && uParam1->f_7[iVar38 /*8*/] == uParam1->f_7[iVar39 /*8*/])
				{
					func_180(iParam2, 65536);
					func_31(iVar38, iParam3, uParam0, iParam2);
				}
				else if (uParam1->f_7[iVar38 /*8*/] > iVar36 && uParam1->f_7[iVar38 /*8*/] == uParam1->f_7[iVar39 /*8*/] + 1)
				{
					if (((((func_30(uParam1) == 0 && uParam1->f_7[iVar38 /*8*/].f_1[iVar37] >= 5) && (uParam1->f_7[iVar38 /*8*/].f_1[iVar37] + 1 - uParam1->f_7[iVar39 /*8*/].f_1[iVar37]) >= 2) || func_30(uParam1) == 1) || (func_30(uParam1) == 2 && uParam1->f_7[iVar38 /*8*/].f_1[iVar37] >= 1)) || (func_30(uParam1) == 3 && uParam1->f_7[iVar38 /*8*/].f_1[iVar37] >= 2))
					{
						func_180(iParam2, 32768);
					}
					else
					{
						func_180(iParam2, 131072);
					}
					func_31(iVar38, iParam3, uParam0, iParam2);
				}
				else if (uParam1->f_7[iVar38 /*8*/] == iVar36 && uParam1->f_7[iVar39 /*8*/] < iVar36)
				{
					func_180(iParam2, 32768);
					func_31(iVar38, iParam3, uParam0, iParam2);
				}
				else if (uParam1->f_5 == 10)
				{
					if (uParam1->f_2 != func_270(uParam1))
					{
						func_180(iParam2, 8192);
						func_180(iParam2, 32);
						if (func_63(uParam1) == iParam3)
						{
							func_93(iParam2, 33554432);
						}
						else
						{
							func_93(iParam2, 134217728);
						}
					}
					else if (iVar38 == iParam3)
					{
						func_93(iParam2, 67108864);
						func_180(iParam2, 262144);
						func_180(iParam2, 64);
					}
					else
					{
						func_93(iParam2, 16777216);
						func_180(iParam2, 1024);
						func_180(iParam2, 524288);
					}
				}
				else if (uParam1->f_5 == 12)
				{
					if (iVar38 == iParam3)
					{
						func_180(iParam2, 262144);
					}
					else
					{
						func_180(iParam2, 524288);
					}
					func_31(iVar38, iParam3, uParam0, iParam2);
				}
				if (uParam1->f_5 == 10 && uParam1->f_2 != func_270(uParam1))
				{
					func_254(iParam2, 128);
					if (!func_256(*iParam2, 8192))
					{
					}
				}
				if (func_176(uParam1))
				{
					if (MISC::IS_BIT_SET((uParam1->f_7[iParam3 /*8*/] + uParam1->f_7[iParam4 /*8*/]), 0))
					{
						func_268(uParam1, 18);
					}
					else if (((uParam1->f_7[iParam3 /*8*/] + uParam1->f_7[iParam4 /*8*/]) % 6) == 0)
					{
						func_268(uParam1, 17);
					}
					else
					{
						func_29(uParam1, (1 - func_271(uParam1)));
						func_268(uParam1, 8);
					}
				}
				else
				{
					func_29(uParam1, (1 - func_271(uParam1)));
					func_268(uParam1, 8);
					if (uParam0->f_1657 == 1)
					{
						func_214(uParam0, 0);
					}
				}
			}
			if (func_227(&((uParam0[iParam3 /*94*/])->f_4), 16) || func_227(&((uParam0[iParam4 /*94*/])->f_4), 16))
			{
				func_180(iParam2, 268435456);
			}
			func_232(uParam0[iParam3 /*94*/]);
			func_232(uParam0[iParam4 /*94*/]);
			break;
		
		case 20:
			if (func_26(uParam0, iParam3, iParam4, func_270(uParam1), uParam0->f_1657, func_228(uParam0, 1), iVar22))
			{
				func_231(uParam0->f_1657, 1);
				func_268(uParam1, 9);
				func_25(&((uParam0[iParam3 /*94*/])->f_4));
				func_25(&((uParam0[iParam4 /*94*/])->f_4));
				if (func_228(uParam0, 1))
				{
					func_230(uParam0, 1);
				}
				if (func_228(uParam0, 256))
				{
					func_230(uParam0, 256);
				}
			}
			if ((func_228(uParam0, 1) && !func_228(uParam0, 4)) && iVar21 >= 2)
			{
				func_24(uParam0, 4);
				func_23(uParam0, MISC::GET_GAME_TIMER() + 580);
			}
			else if (((MISC::GET_GAME_TIMER() > func_22(uParam0) && func_228(uParam0, 4)) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_247)) && !ENTITY::IS_ENTITY_ATTACHED(uParam0->f_247))
			{
				func_266(uParam0, 1);
				func_194(uParam0[func_270(uParam1) /*94*/], &(uParam0->f_247));
				func_286(&(uParam0->f_247), 4);
			}
			if (func_270(uParam1) != iParam3 && BRAIN::GET_SCRIPT_TASK_STATUS(func_264(uParam0[iParam3 /*94*/]), 242628503) == 7)
			{
				func_231(uParam0->f_1657, 1);
				func_235(uParam0[iParam3 /*94*/], uParam0, func_271(uParam1), iParam3, 0, 0);
				func_21(20, uParam0[iParam3 /*94*/], *iParam2, 1);
				func_212(uParam0[iParam3 /*94*/], &(uParam0->f_247));
			}
			break;
		
		case 18:
			if (!func_176(uParam1))
			{
				if (uParam0->f_1657 != 1 && (((((uParam1->f_7[iParam3 /*8*/].f_1[func_49(uParam1)] > 5 && (uParam1->f_7[iParam3 /*8*/].f_1[func_49(uParam1)] - uParam1->f_7[iParam4 /*8*/].f_1[func_49(uParam1)]) >= 2) && uParam1->f_7[iParam3 /*8*/] >= 3) || ((uParam1->f_7[iParam4 /*8*/].f_1[func_49(uParam1)] > 5 && (uParam1->f_7[iParam4 /*8*/].f_1[func_49(uParam1)] - uParam1->f_7[iParam3 /*8*/].f_1[func_49(uParam1)]) >= 2) && uParam1->f_7[iParam4 /*8*/] >= 3)) || uParam1->f_7[iParam3 /*8*/].f_1[func_49(uParam1)] == 7) || uParam1->f_7[iParam4 /*8*/].f_1[func_49(uParam1)] == 7))
				{
					if (func_20(uParam1) > 1)
					{
						func_19(&(uParam1->f_7), &(uParam1->f_30), iParam2, func_20(uParam1));
					}
				}
				else if ((uParam1->f_7[iParam3 /*8*/].f_1[func_49(uParam1)] == 6 && uParam1->f_7[iParam4 /*8*/].f_1[func_49(uParam1)] == 6) && uParam0->f_1657 != 1)
				{
					func_47(uParam1, 1);
					func_180(iParam2, 4);
					func_32(uParam0, MISC::GET_GAME_TIMER() + 1500);
				}
				if ((uParam0->f_1657 != 1 && !func_176(uParam1)) && ((((((((func_30(uParam1) == 0 && uParam1->f_7[iParam3 /*8*/].f_7 > (func_20(uParam1) / 2)) || (func_30(uParam1) == 0 && uParam1->f_7[iParam4 /*8*/].f_7 > (func_20(uParam1) / 2))) || (func_30(uParam1) == 1 && uParam1->f_7[iParam3 /*8*/].f_1[func_49(uParam1)] >= 1)) || (func_30(uParam1) == 1 && uParam1->f_7[iParam4 /*8*/].f_1[func_49(uParam1)] >= 1)) || (func_30(uParam1) == 2 && uParam1->f_7[iParam3 /*8*/].f_1[func_49(uParam1)] >= 2)) || (func_30(uParam1) == 2 && uParam1->f_7[iParam4 /*8*/].f_1[func_49(uParam1)] >= 2)) || (func_30(uParam1) == 3 && uParam1->f_7[iParam3 /*8*/].f_1[func_49(uParam1)] >= 3)) || (func_30(uParam1) == 3 && uParam1->f_7[iParam4 /*8*/].f_1[func_49(uParam1)] >= 3)))
				{
					if (func_20(uParam1) > 1)
					{
						uParam1->f_30 = (uParam1->f_30 - 1);
					}
					func_260(PLAYER::PLAYER_PED_ID(), 0);
					func_268(uParam1, 22);
					func_180(iParam2, 2);
				}
				else
				{
					func_18(&(uParam1->f_7), iParam2);
					if (func_270(uParam1) == iParam3)
					{
						func_262(uParam1, iParam4);
					}
					else if (func_270(uParam1) == iParam4)
					{
						func_262(uParam1, iParam3);
					}
					func_268(uParam1, 8);
					func_29(uParam1, 1);
					if (func_17(&(uParam1->f_7), func_49(uParam1)) && uParam0->f_1657 != 1)
					{
						func_268(uParam1, 17);
					}
				}
			}
			else if (func_176(uParam1))
			{
				if (func_270(uParam1) == iParam3)
				{
					func_262(uParam1, iParam4);
				}
				else if (func_270(uParam1) == iParam4)
				{
					func_262(uParam1, iParam3);
				}
				func_268(uParam1, 8);
				func_29(uParam1, 1);
			}
			break;
		
		case 16:
			func_235(uParam0[iParam4 /*94*/], uParam0, func_271(uParam1), iParam4, 0, 0);
			func_235(uParam0[iParam3 /*94*/], uParam0, func_271(uParam1), iParam3, 0, 0);
			if ((uParam0->f_1657 != 1 && !func_256(*iParam2, 4194304)) || uParam0->f_1657 == 1)
			{
				func_268(uParam1, 8);
			}
			break;
		
		case 28:
			break;
	}
	if ((!func_256(*iParam2, 4194304) && func_306(uParam1) > 6) && func_306(uParam1) < 21)
	{
		func_5(uParam0[iParam3 /*94*/], &(uParam0->f_535), uParam0->f_1657);
		func_5(uParam0[iParam4 /*94*/], &(uParam0->f_535), uParam0->f_1657);
	}
	func_4(uParam0);
}

void func_4(var uParam0)//Position - 0x2CDC
{
	if (ENTITY::DOES_ENTITY_EXIST((uParam0[0 /*94*/])->f_33))
	{
		(uParam0[0 /*94*/])->f_46 = { ENTITY::GET_ENTITY_COORDS((uParam0[0 /*94*/])->f_33, true) };
	}
	if (ENTITY::DOES_ENTITY_EXIST((uParam0[1 /*94*/])->f_33))
	{
		(uParam0[1 /*94*/])->f_46 = { ENTITY::GET_ENTITY_COORDS((uParam0[1 /*94*/])->f_33, true) };
	}
}

void func_5(var uParam0, var uParam1, var uParam2)//Position - 0x2D2A
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	char* sVar5;
	int iVar6;
	char* sVar7;
	
	iVar0 = func_264(uParam0);
	iVar6 = func_75(uParam0);
	if (!PED::IS_PED_INJURED(iVar0))
	{
		sVar7 = func_195(func_196(uParam0), "mini@tennis", "mini@tennis@female");
		if (iVar6 == 75)
		{
			if (func_104(uParam0, 32))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, sVar7, "idle", 3))
				{
					BRAIN::STOP_ANIM_TASK(iVar0, sVar7, "idle", -8f);
				}
				func_276(uParam0, 32);
			}
			if (!func_104(uParam0, 128) && !func_227(&(uParam0->f_4), 4))
			{
				if (!MISC::IS_TENNIS_MODE(func_264(uParam0)))
				{
					func_260(func_264(uParam0), 1);
				}
				func_58(uParam0, 128);
			}
		}
		else if (iVar6 == 74)
		{
			fVar1 = 0f;
			fVar4 = 0.567f;
			fVar2 = 0.72f;
			fVar3 = 0.855f;
			sVar5 = "serve";
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, sVar7, sVar5, 3))
			{
				BRAIN::TASK_PLAY_ANIM(iVar0, sVar7, sVar5, 8f, -8f, -1, 0, fVar1, 0, 0, 0);
				func_229(uParam0, 7);
			}
			else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iVar0, sVar7, sVar5) > fVar3)
			{
				BRAIN::STOP_ANIM_TASK(iVar0, sVar7, sVar5, -8f);
				func_233(uParam0, 75);
				if (func_104(uParam0, 4))
				{
					func_276(uParam0, 4);
				}
				if (!func_104(uParam0, 128))
				{
					func_260(func_264(uParam0), 1);
					func_58(uParam0, 128);
				}
			}
			else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iVar0, sVar7, sVar5) >= fVar2)
			{
				if (!func_104(uParam0, 4))
				{
					func_58(uParam0, 4);
					func_229(uParam0, 6);
				}
			}
			else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iVar0, sVar7, sVar5) > fVar4)
			{
				if (func_104(uParam0, 4))
				{
					func_276(uParam0, 4);
				}
			}
		}
		else
		{
			func_6(uParam0, iVar0, uParam1[iVar6 /*12*/], func_16(uParam0), uParam2);
		}
	}
}

void func_6(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4)//Position - 0x2EED
{
	bool bVar0;
	char* sVar1;
	struct<8> Var2;
	int iVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	
	bVar0 = func_196(uParam0);
	sVar1 = func_195(bVar0, "mini@tennis", "mini@tennis@female");
	Var2 = { uParam2->f_4 };
	iVar10 = func_15(uParam2->f_3);
	fVar11 = (SYSTEM::TO_FLOAT(iParam3) / SYSTEM::TO_FLOAT(iVar10));
	fVar12 = *uParam2;
	if (func_14(func_75(uParam0), iParam3))
	{
		fVar12 = (*uParam2 + fVar11);
		func_13(uParam0, 1f);
	}
	else
	{
		fVar13 = (uParam2->f_1 - fVar11);
		fVar14 = (uParam2->f_1 / fVar13);
		fVar14 = func_12(fVar14, 0.5f, 1.5f);
		func_13(uParam0, fVar14);
	}
	if (fVar12 > uParam2->f_1)
	{
		fVar12 = uParam2->f_1;
	}
	if (!func_104(uParam0, 1024))
	{
		if (!MISC::IS_TENNIS_MODE(func_264(uParam0)))
		{
			return;
		}
		BRAIN::CLEAR_PED_TASKS(iParam1);
		if (func_75(uParam0) == 72 || func_75(uParam0) == 73)
		{
			if (func_11(uParam0) != 0)
			{
				if (func_75(uParam0) == 72)
				{
					iVar15 = 0;
				}
				else if (func_75(uParam0) == 73)
				{
					iVar15 = 1;
				}
				MISC::_0x8FA9C42FC5D7C64B(iParam1, iVar15, func_10(uParam0), func_9(uParam0), 1065353216, 0);
				func_8(uParam0, MISC::GET_GAME_TIMER() + 2871);
			}
		}
		else
		{
			MISC::_0xE266ED23311F24D4(iParam1, sVar1, &Var2, fVar12, func_7(uParam0), 0);
		}
		func_58(uParam0, 1024);
		if (uParam0->f_31 != 4)
		{
			Global_106565.f_20015.f_12++;
		}
	}
	else if (MISC::_0x19BFED045C647C49(iParam1) || MISC::_0x17DF68D720AA77F8(iParam1))
	{
		func_276(uParam0, 1024);
		BRAIN::CLEAR_PED_TASKS(iParam1);
		func_233(uParam0, 75);
		func_13(uParam0, 1f);
		if (func_104(uParam0, 65536))
		{
			func_276(uParam0, 65536);
		}
	}
}

var func_7(var uParam0)//Position - 0x30A8
{
	return uParam0->f_67;
}

void func_8(var uParam0, var uParam1)//Position - 0x30B4
{
	uParam0->f_77 = uParam1;
}

var func_9(var uParam0)//Position - 0x30C2
{
	return uParam0->f_70;
}

var func_10(var uParam0)//Position - 0x30CE
{
	return uParam0->f_71;
}

int func_11(var uParam0)//Position - 0x30DA
{
	return uParam0->f_52;
}

float func_12(float fParam0, float fParam1, float fParam2)//Position - 0x30E6
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

void func_13(var uParam0, float fParam1)//Position - 0x310D
{
	uParam0->f_67 = fParam1;
}

int func_14(int iParam0, int iParam1)//Position - 0x311B
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 == 54)
	{
		return 0;
	}
	if (iParam0 == 56)
	{
		return 0;
	}
	if (iParam0 == 55)
	{
		return 0;
	}
	if (iParam0 == 57)
	{
		return 0;
	}
	if (iParam0 == 59)
	{
		return 0;
	}
	if (iParam0 == 58)
	{
		return 0;
	}
	return 1;
}

int func_15(int iParam0)//Position - 0x3170
{
	float fVar0;
	float fVar1;
	
	fVar0 = (SYSTEM::TO_FLOAT(iParam0) * 0.03333334f);
	fVar1 = (fVar0 / MISC::GET_FRAME_TIME());
	return SYSTEM::ROUND(fVar1);
}

int func_16(var uParam0)//Position - 0x3195
{
	return uParam0->f_53;
}

int func_17(var uParam0, int iParam1)//Position - 0x31A1
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < iParam1 + 1)
	{
		iVar0 = (iVar0 + (uParam0[0 /*8*/])->f_1[iVar1]);
		iVar0 = (iVar0 + (uParam0[1 /*8*/])->f_1[iVar1]);
		iVar1++;
	}
	if ((iVar0 % 2) == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_18(var uParam0, var uParam1)//Position - 0x31F5
{
	(*uParam0)[0 /*8*/] = 0;
	(*uParam0)[1 /*8*/] = 0;
	func_180(uParam1, 2);
}

void func_19(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x3210
{
	if (*uParam1 + 1 < iParam3)
	{
		*uParam1++;
		(*uParam0)[0 /*8*/] = 0;
		(*uParam0)[1 /*8*/] = 0;
		(uParam0[0 /*8*/])->f_1[*uParam1] = 0;
		(uParam0[1 /*8*/])->f_1[*uParam1] = 0;
	}
	func_180(uParam2, 2);
}

int func_20(var uParam0)//Position - 0x3257
{
	return uParam0->f_28;
}

void func_21(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x3263
{
	if ((((iParam0 > 6 && iParam0 < 22) && !func_256(uParam2, 4194304)) && iParam0 != 16) || iParam3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_264(uParam1)))
		{
			if (MISC::IS_TENNIS_MODE(func_264(uParam1)))
			{
				PED::SET_PED_RESET_FLAG(func_264(uParam1), 69, true);
			}
			PED::SET_PED_RESET_FLAG(func_264(uParam1), 102, true);
		}
	}
}

int func_22(var uParam0)//Position - 0x32D2
{
	return uParam0->f_1674;
}

void func_23(var uParam0, var uParam1)//Position - 0x32DF
{
	uParam0->f_1674 = uParam1;
}

void func_24(var uParam0, int iParam1)//Position - 0x32EE
{
	uParam0->f_1673 = (uParam0->f_1673 || iParam1);
}

void func_25(var uParam0)//Position - 0x3303
{
	uParam0->f_25 = 0;
}

int func_26(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x3310
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = 1;
	iVar1 = func_264(uParam0[iParam1 /*94*/]);
	iVar2 = func_264(uParam0[iParam2 /*94*/]);
	if (!PED::IS_PED_INJURED(iVar1) && BRAIN::GET_SCRIPT_TASK_STATUS(iVar1, 242628503) != 7)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar1, "mini@tennis", "idle_2_serve", 3))
		{
		}
		iVar0 = 0;
		if (MISC::IS_TENNIS_MODE(iVar1))
		{
			func_58(uParam0[iParam1 /*94*/], 16384);
		}
	}
	else if ((!PED::IS_PED_INJURED(iVar1) && (bParam5 || iParam4 == 1)) && !func_104(uParam0[iParam1 /*94*/], 8192))
	{
		if (iParam1 == iParam3)
		{
			func_28(uParam0[iParam1 /*94*/], "TennisServeSet", 0f);
		}
		func_260(iVar1, 1);
		PED::_0x2208438012482A1A(iVar1, 0, 0);
		func_58(uParam0[iParam1 /*94*/], 8192);
	}
	else if (func_104(uParam0[iParam1 /*94*/], 8192) && iParam1 == iParam3)
	{
		if (!PED::IS_PED_INJURED(iVar1) && BRAIN::_0x921CE12C489C4C41(iVar1))
		{
			if (MISC::ARE_STRINGS_EQUAL(BRAIN::_0x717E4D1F2048376D(iVar1), "Intro") && BRAIN::_0x30ED88D5E0C56A37(iVar1))
			{
				BRAIN::_0xD01015C7316AE176(iVar1, "running");
			}
		}
	}
	bVar3 = (((iParam2 != iParam3 && iParam6 >= (func_27(uParam0[iParam2 /*94*/]) - 1)) && iVar0) && 1);
	if (!PED::IS_PED_INJURED(iVar2) && (BRAIN::GET_SCRIPT_TASK_STATUS(iVar2, 242628503) != 7 && !bVar3))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar2, "mini@tennis", "idle_2_serve", 3))
		{
		}
		if (MISC::IS_TENNIS_MODE(iVar2))
		{
			func_58(uParam0[iParam2 /*94*/], 16384);
		}
		iVar0 = 0;
	}
	else if (((!PED::IS_PED_INJURED(iVar2) && ((bParam5 || iParam4 == 4) || iParam4 == 1)) && !func_104(uParam0[iParam2 /*94*/], 8192)) && BRAIN::GET_SCRIPT_TASK_STATUS(iVar2, 242628503) == 7)
	{
		if (iParam2 == iParam3)
		{
			func_28(uParam0[iParam2 /*94*/], "TennisServeSet", 0f);
		}
		func_260(iVar2, 1);
		PED::_0x2208438012482A1A(iVar2, 0, 0);
		func_58(uParam0[iParam2 /*94*/], 8192);
	}
	else if (func_104(uParam0[iParam2 /*94*/], 8192) && iParam2 == iParam3)
	{
		if (!PED::IS_PED_INJURED(iVar2) && BRAIN::_0x921CE12C489C4C41(iVar2))
		{
			if (MISC::ARE_STRINGS_EQUAL(BRAIN::_0x717E4D1F2048376D(iVar2), "Intro") && BRAIN::_0x30ED88D5E0C56A37(iVar2))
			{
				BRAIN::_0xD01015C7316AE176(iVar2, "running");
			}
		}
	}
	return iVar0;
}

int func_27(var uParam0)//Position - 0x357B
{
	return uParam0->f_55;
}

void func_28(var uParam0, char* sParam1, float fParam2)//Position - 0x3587
{
	if (!((!PED::IS_PED_INJURED(func_264(uParam0)) && BRAIN::_0x921CE12C489C4C41(func_264(uParam0))) && MISC::ARE_STRINGS_EQUAL(BRAIN::_0x717E4D1F2048376D(func_264(uParam0)), "running")))
	{
		BRAIN::_TASK_MOVE_NETWORK(func_264(uParam0), sParam1, fParam2, 0, "mini@tennis", 4);
	}
}

void func_29(var uParam0, int iParam1)//Position - 0x35D5
{
	uParam0->f_3 = iParam1;
}

int func_30(var uParam0)//Position - 0x35E3
{
	return uParam0->f_24;
}

void func_31(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x35EF
{
	if (iParam0 == iParam1)
	{
		if (func_227(&((uParam2[iParam1 /*94*/])->f_4), 16))
		{
			func_93(uParam3, 33554432);
			func_180(uParam3, 32);
		}
		else
		{
			func_93(uParam3, 67108864);
			func_180(uParam3, 64);
		}
	}
	else if (iParam0 != iParam1)
	{
		if (func_104(uParam2[iParam1 /*94*/], 2) || func_227(&((uParam2[iParam0 /*94*/])->f_4), 16))
		{
			func_93(uParam3, 134217728);
		}
		else if (!func_104(uParam2[iParam1 /*94*/], 2))
		{
			func_93(uParam3, 16777216);
		}
		func_180(uParam3, 1024);
	}
}

void func_32(var uParam0, var uParam1)//Position - 0x3695
{
	uParam0->f_1678 = uParam1;
}

void func_33(var uParam0)//Position - 0x36A4
{
	uParam0->f_23 = 0f;
	uParam0->f_21 = 0f;
	uParam0->f_22 = 0f;
}

int func_34(var uParam0)//Position - 0x36BB
{
	return uParam0->f_20;
}

void func_35(int iParam0, int iParam1)//Position - 0x36C7
{
	int iVar0;
	
	iVar0 = func_41();
	func_36(iVar0, iParam0, iParam1);
}

void func_36(int iParam0, int iParam1, int iParam2)//Position - 0x36DF
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
				iVar0 = func_40(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_37(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_37(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x37CF
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_38(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_38(var uParam0)//Position - 0x37FF
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_39();
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

int func_39()//Position - 0x3833
{
	return Global_1312745;
}

int func_40(int iParam0, int iParam1, int iParam2)//Position - 0x383F
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_38(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_41()//Position - 0x3871
{
	func_42();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_42()//Position - 0x388A
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_46(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_45(PLAYER::PLAYER_PED_ID());
			if (func_44(iVar0) && (!func_43(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_44(Global_106565.f_2357.f_539.f_4321))
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

bool func_43(int iParam0)//Position - 0x3987
{
	return Global_36425 == iParam0;
}

bool func_44(int iParam0)//Position - 0x3995
{
	return iParam0 < 3;
}

int func_45(int iParam0)//Position - 0x39A1
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_46(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_46(int iParam0)//Position - 0x39DE
{
	if (func_44(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_47(var uParam0, int iParam1)//Position - 0x3A08
{
	uParam0->f_26 = iParam1;
}

void func_48(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5)//Position - 0x3A16
{
	if ((uParam0[iParam2 /*8*/])->f_1[iParam1] == -1)
	{
		(uParam0[iParam2 /*8*/])->f_1[iParam1] = 1;
	}
	else
	{
		(uParam0[iParam2 /*8*/])->f_1[iParam1]++;
	}
	if (((((uParam0[iParam2 /*8*/])->f_1[iParam1] > 5 && ((uParam0[iParam2 /*8*/])->f_1[iParam1] - (uParam0[iParam3 /*8*/])->f_1[iParam1]) >= 2) && (*uParam0)[iParam2 /*8*/] >= 3) && !bParam5) || bParam5)
	{
		(uParam0[iParam2 /*8*/])->f_7++;
	}
	func_180(uParam4, 2);
}

int func_49(var uParam0)//Position - 0x3ABF
{
	return uParam0->f_30;
}

int func_50(bool bParam0, int iParam1, int iParam2)//Position - 0x3ACB
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_51(var uParam0, var uParam1)//Position - 0x3AE2
{
	*uParam0++;
	func_180(uParam1, 2);
}

int func_52(var uParam0)//Position - 0x3AF9
{
	return uParam0->f_34;
}

void func_53(var uParam0, var uParam1)//Position - 0x3B05
{
	vector3 vVar0;
	
	if (!func_104(uParam0, 2048) && func_55(uParam0->f_37, uParam1))
	{
		if (BRAIN::GET_SCRIPT_TASK_STATUS(func_264(uParam0), 713668775) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(func_264(uParam0), 242628503) != 1)
		{
			vVar0 = { uParam0->f_37 - uParam1->f_29 * Vector(0.93f, 0.93f, 0.93f) };
			BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(func_264(uParam0), uParam1->f_29 + vVar0, 2f, 20000, 1048576000, 0, 1193033728);
			func_58(uParam0, 2048);
			func_54("FAR_FROM_COURT", -1);
		}
	}
	else if (func_104(uParam0, 2048) && BRAIN::GET_SCRIPT_TASK_STATUS(func_264(uParam0), 713668775) != 1)
	{
		func_276(uParam0, 2048);
	}
}

void func_54(char* sParam0, int iParam1)//Position - 0x3BD0
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

bool func_55(vector3 vParam0, var uParam3)//Position - 0x3BE7
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	
	switch (*uParam3)
	{
		case 7:
			fVar0 = 2.031f;
			fVar1 = 2.16f;
			break;
		
		case 1:
			fVar0 = 6.955f;
			fVar1 = 1.6f;
			break;
		
		case 4:
			fVar0 = 6.715f;
			fVar1 = 2.043f;
			break;
		
		case 0:
			fVar0 = 4.8f;
			fVar1 = 2.433f;
			break;
		
		case 3:
			fVar0 = 6.1f;
			fVar1 = 2.395f;
			break;
		
		case 5:
			fVar0 = 2.9f;
			fVar1 = 2.005f;
			break;
		
		case 2:
			fVar0 = 7f;
			fVar1 = 2.533f;
			break;
		
		case 6:
			fVar0 = 7.7f;
			fVar1 = 2.775f;
			break;
		
		default:
			fVar0 = 10f;
			fVar1 = 3f;
			break;
	}
	vVar2 = { uParam3->f_3[1 /*3*/] - uParam3->f_3[0 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
	vVar5 = { uParam3->f_3[0 /*3*/] + vVar2 - uParam3->f_49 * Vector(fVar0, fVar0, fVar0) };
	vVar8 = { uParam3->f_3[3 /*3*/] + vVar2 + uParam3->f_49 * Vector(fVar0, fVar0, fVar0) };
	return !func_76(vParam0, vVar5, vVar8, (func_77(uParam3) * fVar1));
}

void func_56(var uParam0)//Position - 0x3D2A
{
	uParam0->f_60 = 0f;
}

void func_57(var uParam0, var uParam1, vector3 vParam2)//Position - 0x3D37
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (uParam0->f_4.f_20 == 2)
	{
		iVar0 = func_50(MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.5f, 0, 3);
		func_81(&(uParam0->f_4), uParam0->f_4.f_6[iVar0 /*3*/]);
	}
	else if (uParam0->f_4.f_20 == 0)
	{
		vVar1 = { uParam1->f_3[0 /*3*/] + vParam2 * Vector(0.5f, 0.5f, 0.5f) };
		vVar4 = { uParam1->f_3[3 /*3*/] + vParam2 * Vector(0.5f, 0.5f, 0.5f) };
		if (!func_76(uParam0->f_37, vVar1, vVar4, func_77(uParam1)))
		{
			vVar1 = { uParam1->f_29 - uParam0->f_40 * Vector(6f, 6f, 6f) };
			func_81(&(uParam0->f_4), vVar1);
		}
		else
		{
			func_81(&(uParam0->f_4), uParam0->f_37);
		}
	}
	else
	{
		func_81(&(uParam0->f_4), uParam0->f_4.f_6[iVar0 /*3*/]);
	}
}

void func_58(var uParam0, int iParam1)//Position - 0x3E20
{
	func_180(&(uParam0->f_2), iParam1);
}

bool func_59(vector3 vParam0, var uParam3, var uParam4, var uParam5)//Position - 0x3E32
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	vector3 vVar7;
	float fVar10;
	
	vVar0 = { uParam3->f_3[0 /*3*/] + *uParam5 * Vector(0.5f, 0.5f, 0.5f) };
	vVar3 = { uParam3->f_3[3 /*3*/] + *uParam5 * Vector(0.5f, 0.5f, 0.5f) };
	bVar6 = func_76(vParam0, vVar0, vVar3, uParam3->f_1);
	vVar7 = { *uParam4 * Vector(0.018f, 0.018f, 0.018f) };
	fVar10 = (uParam3->f_1 * 1.038f);
	vVar0 = { vVar0 - vVar7 };
	vVar3 = { vVar3 + vVar7 };
	return (!bVar6 && func_76(vParam0, vVar0, vVar3, fVar10));
}

void func_60(int iParam0, int iParam1)//Position - 0x3ED1
{
	if (iParam1 == 1)
	{
		func_61(iParam0, (func_62(iParam0) + iParam1));
	}
	else
	{
		func_61(iParam0, iParam1);
	}
}

void func_61(int iParam0, int iParam1)//Position - 0x3EF9
{
	uLocal_342[iParam0] = iParam1;
}

int func_62(int iParam0)//Position - 0x3F0A
{
	return uLocal_342[iParam0];
}

int func_63(var uParam0)//Position - 0x3F19
{
	return uParam0->f_2;
}

int func_64(var uParam0, int iParam1)//Position - 0x3F25
{
	if (func_97(&(uParam0->f_247), func_101(uParam0), &(uParam0->f_189.f_29)))
	{
		if (func_65(iParam1, uParam0, 1, 1))
		{
			func_95(&(uParam0->f_247));
			if (func_285(&(uParam0->f_247)) > 1)
			{
				return 0;
			}
		}
		else
		{
			func_95(&(uParam0->f_247));
			return 0;
		}
	}
	return 1;
}

int func_65(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x3F79
{
	vector3 vVar0;
	
	vVar0 = { uParam1->f_247.f_13 };
	if (!bParam2)
	{
		vVar0 = { func_282(&(uParam1->f_247)) };
	}
	if (bParam3)
	{
	}
	if ((uParam1[iParam0 /*94*/])->f_1 == 1)
	{
		if (bParam3)
		{
		}
		return func_76(vVar0, uParam1->f_189.f_3[0 /*3*/] + uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f), uParam1->f_189.f_32[0 /*3*/] + uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f), func_77(&(uParam1->f_189)));
	}
	else
	{
		if (bParam3)
		{
		}
		return func_76(vVar0, uParam1->f_189.f_3[3 /*3*/] + uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f), uParam1->f_189.f_32[0 /*3*/] + uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f), func_77(&(uParam1->f_189)));
	}
	return 0;
}

void func_66(var uParam0, int iParam1)//Position - 0x404E
{
	float fVar0;
	
	fVar0 = func_69(uParam0->f_43, func_70(&(uParam0->f_4)) - uParam0->f_37);
	if (fVar0 > 0f && iParam1 == 1)
	{
		func_68(&(uParam0->f_4));
	}
	else if (fVar0 <= 0f && iParam1 == 1)
	{
		func_67(&(uParam0->f_4));
	}
	else if (fVar0 > 0f && iParam1 == 0)
	{
		func_67(&(uParam0->f_4));
	}
	else if (fVar0 <= 0f && iParam1 == 0)
	{
		func_68(&(uParam0->f_4));
	}
}

void func_67(var uParam0)//Position - 0x40DA
{
	uParam0->f_23 = (uParam0->f_23 - 0.5f);
	uParam0->f_23 = func_12(uParam0->f_23, -1.5f, 1.5f);
}

void func_68(var uParam0)//Position - 0x4106
{
	uParam0->f_23 = (uParam0->f_23 + 0.5f);
	uParam0->f_23 = func_12(uParam0->f_23, -1.5f, 1.5f);
}

float func_69(vector3 vParam0, vector3 vParam3)//Position - 0x4132
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_70(var uParam0)//Position - 0x4153
{
	return *uParam0;
}

void func_71(var uParam0, vector3 vParam1, vector3 vParam4)//Position - 0x415F
{
	if (func_69(uParam0->f_43, func_70(&(uParam0->f_4)) - uParam0->f_37) > 0f)
	{
		func_74(&(uParam0->f_4));
	}
	else
	{
		func_73(&(uParam0->f_4));
	}
	if (func_69(uParam0->f_40, func_70(&(uParam0->f_4)) - uParam0->f_37) > 0f)
	{
		func_72(&(uParam0->f_4), 0);
	}
	else
	{
		func_72(&(uParam0->f_4), 1);
	}
	uParam0->f_4.f_6[0 /*3*/] = { vParam1 + uParam0->f_40 * Vector(1f, 1f, 1f) + uParam0->f_40 * Vector(uParam0->f_4.f_22, uParam0->f_4.f_22, uParam0->f_4.f_22) + uParam0->f_43 * Vector(4f, 4f, 4f) + uParam0->f_43 * Vector(uParam0->f_4.f_21, uParam0->f_4.f_21, uParam0->f_4.f_21) };
	uParam0->f_4.f_6[1 /*3*/] = { vParam1 + uParam0->f_40 * Vector(8f, 8f, 8f) + uParam0->f_40 * Vector(uParam0->f_4.f_22, uParam0->f_4.f_22, uParam0->f_4.f_22) + uParam0->f_43 * Vector(2.165f, 2.165f, 2.165f) + uParam0->f_43 * Vector(uParam0->f_4.f_21, uParam0->f_4.f_21, uParam0->f_4.f_21) };
	uParam0->f_4.f_6[2 /*3*/] = { vParam1 + uParam0->f_40 * Vector(8f, 8f, 8f) + uParam0->f_40 * Vector(uParam0->f_4.f_22, uParam0->f_4.f_22, uParam0->f_4.f_22) + uParam0->f_43 * Vector(6f, 6f, 6f) + uParam0->f_43 * Vector(uParam0->f_4.f_21, uParam0->f_4.f_21, uParam0->f_4.f_21) };
	uParam0->f_4.f_6[3 /*3*/] = { vParam4 + uParam0->f_40 * Vector(0.5f, 0.5f, 0.5f) + uParam0->f_40 * Vector(uParam0->f_4.f_22, uParam0->f_4.f_22, uParam0->f_4.f_22) + uParam0->f_43 * Vector(4f, 4f, 4f) + uParam0->f_43 * Vector(uParam0->f_4.f_21, uParam0->f_4.f_21, uParam0->f_4.f_21) };
}

void func_72(var uParam0, bool bParam1)//Position - 0x42DF
{
	float fVar0;
	
	switch (uParam0->f_20)
	{
		case 0:
			fVar0 = 0.1f;
			break;
		
		case 1:
			fVar0 = 0.1f;
			break;
		
		case 2:
			fVar0 = 0.1f;
			break;
	}
	if (!bParam1)
	{
		fVar0 = (fVar0 * -1f);
	}
	uParam0->f_22 = (uParam0->f_22 + fVar0);
	uParam0->f_22 = func_12(uParam0->f_22, -2f, 2f);
}

void func_73(var uParam0)//Position - 0x4349
{
	float fVar0;
	
	switch (uParam0->f_20)
	{
		case 0:
			fVar0 = 0.5f;
			break;
		
		case 1:
			fVar0 = 0.25f;
			break;
		
		case 2:
			fVar0 = 0.05f;
			break;
	}
	uParam0->f_21 = (uParam0->f_21 - fVar0);
	uParam0->f_21 = func_12(uParam0->f_21, -2f, 2f);
}

void func_74(var uParam0)//Position - 0x43A7
{
	float fVar0;
	
	switch (uParam0->f_20)
	{
		case 0:
			fVar0 = 0.5f;
			break;
		
		case 1:
			fVar0 = 0.25f;
			break;
		
		case 2:
			fVar0 = 0.05f;
			break;
	}
	uParam0->f_21 = (uParam0->f_21 + fVar0);
	uParam0->f_21 = func_12(uParam0->f_21, -2f, 2f);
}

int func_75(var uParam0)//Position - 0x4405
{
	return uParam0->f_36;
}

bool func_76(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9)//Position - 0x4411
{
	vParam3.z = (vParam3.z + 30f);
	vParam6.z = (vParam6.z - 5f);
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam3, vParam6, fParam9, 0, true);
}

float func_77(var uParam0)//Position - 0x4445
{
	return uParam0->f_1;
}

void func_78(var uParam0)//Position - 0x4451
{
	if (uParam0->f_20 == 0)
	{
		uParam0->f_24 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.4f);
	}
	else if (uParam0->f_20 == 1)
	{
		uParam0->f_24 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.2f);
	}
	else if (uParam0->f_20 == 2)
	{
		uParam0->f_24 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.01f);
	}
}

void func_79(var uParam0, float fParam1)//Position - 0x44A1
{
	uParam0->f_24 = fParam1;
}

void func_80(var uParam0, int iParam1)//Position - 0x44AF
{
	func_180(&(uParam0->f_25), iParam1);
}

void func_81(var uParam0, vector3 vParam1)//Position - 0x44C1
{
	*uParam0 = { vParam1 };
}

Vector3 func_82(var uParam0, var uParam1, vector3 vParam2, var uParam5, float fParam6)//Position - 0x44D1
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	float fVar11;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	bool bVar17;
	vector3 vVar18;
	float fVar21;
	float fVar22;
	
	iVar0 = 0;
	fVar10 = 100f;
	vVar12 = { func_86(uParam0, vParam2) };
	fVar15 = func_69(vParam2 - uParam0->f_37, uParam0->f_43);
	bVar16 = fVar15 > 0f;
	while (iVar0 < 75)
	{
		bVar17 = (*uParam1)[iVar0 /*3*/] > 0f;
		if (bVar16 == bVar17)
		{
			vVar1 = { func_85(uParam0, *(uParam1[iVar0 /*3*/])) };
			fVar11 = MISC::ABSF(((vVar1.z + vVar12.z) - vParam2.z));
			if (fVar11 < 0.15f)
			{
				fVar11 = 0f;
			}
			fVar11 = (fVar11 + func_84(iVar0));
			vVar18 = { vParam2 - vVar1 };
			fVar21 = 0f;
			fVar22 = func_83(uParam0, vVar18, fParam6, &fVar21);
			if (fVar22 < fVar21)
			{
				fVar11 = (fVar11 + (fVar21 - fVar22));
			}
			if (fVar11 < fVar10)
			{
				fVar10 = fVar11;
				vVar7 = { vVar1 };
			}
		}
		iVar0++;
	}
	vVar4 = { vParam2 - vVar7 };
	vVar4.z = uParam5;
	return vVar4;
}

float func_83(var uParam0, vector3 vParam1, float fParam4, float fParam5)//Position - 0x45CB
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	
	vVar0 = { vParam1 - uParam0->f_37 };
	*fParam5 = SYSTEM::VMAG(vVar0);
	if (*fParam5 > 5f)
	{
		vVar0 = { vVar0 * FtoV((5f / *fParam5)) };
	}
	vVar3 = { ENTITY::GET_ENTITY_VELOCITY(uParam0->f_32) };
	fVar6 = ((SYSTEM::VDIST(vVar0, vVar3) * 2f) / 5f);
	fVar7 = ((fParam4 * 5f) - fVar6);
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	return fVar7;
}

float func_84(int iParam0)//Position - 0x4637
{
	switch (iParam0)
	{
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
			return 0.05f;
		
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
			return 0.05f;
		
		case 72:
		case 73:
			return 0.4f;
		
		default:
	}
	return 0f;
}

Vector3 func_85(var uParam0, vector3 vParam1)//Position - 0x46D7
{
	vector3 vVar0;
	
	vVar0 = { Vector(vParam1.x, vParam1.x, vParam1.x) * uParam0->f_43 };
	vVar0 = { vVar0 + Vector(vParam1.y, vParam1.y, vParam1.y) * uParam0->f_40 };
	vVar0.z = (vVar0.z + vParam1.z);
	return vVar0;
}

Vector3 func_86(var uParam0, vector3 vParam1)//Position - 0x4713
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	
	vVar0 = { vParam1 - uParam0->f_37 };
	fVar3 = func_69(vVar0, uParam0->f_40);
	vVar4 = { uParam0->f_40 * Vector(fVar3, fVar3, fVar3) };
	return uParam0->f_37 + vVar4;
}

Vector3 func_87(vector3 vParam0, var uParam3, vector3 vParam4, vector3 vParam7, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, var uParam15, float fParam16)//Position - 0x4753
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	iVar4 = 0;
	while (iVar4 < 180 && iVar3 < 2)
	{
		vVar0 = { vParam4 };
		func_278(uParam3, &vParam4, &vParam7, &uParam10, &uParam13, &iParam14, &uParam15, &iVar3, 0, -1082130432, 0, 0, 0);
		if (SYSTEM::VDIST(vParam0, vVar0) < SYSTEM::VDIST(vParam0, vParam4))
		{
			*fParam16 = (IntToFloat(iVar4) * MISC::GET_FRAME_TIME());
			return vParam4;
		}
		if (iVar3 > 0 && vParam7.z < 0f)
		{
			*fParam16 = (IntToFloat(iVar4) * MISC::GET_FRAME_TIME());
			return vVar0;
		}
		iVar4++;
	}
	*fParam16 = (IntToFloat(iVar4) * MISC::GET_FRAME_TIME());
	return vParam4;
}

void func_88(var uParam0, var uParam1)//Position - 0x4802
{
	uParam0->f_49 = { *uParam1 };
}

Vector3 func_89(var uParam0, vector3 vParam1, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, var uParam12)//Position - 0x4814
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 180)
	{
		func_278(uParam0, &vParam1, &uParam4, &uParam7, &uParam10, &iParam11, &uParam12, &iVar0, 0, 0.03333334f, 0, 0.1f, 0);
		if (iVar0 > 0)
		{
			return vParam1;
		}
		iVar1++;
	}
	return vParam1;
}

var func_90(var uParam0)//Position - 0x4865
{
	return uParam0->f_5;
}

int func_91(var uParam0)//Position - 0x4871
{
	return uParam0->f_22;
}

var func_92(var uParam0)//Position - 0x487D
{
	return uParam0->f_4;
}

void func_93(var uParam0, int iParam1)//Position - 0x4889
{
	func_254(uParam0, 67108864);
	func_254(uParam0, 134217728);
	func_254(uParam0, 16777216);
	func_254(uParam0, 33554432);
	func_180(uParam0, iParam1);
}

int func_94(var uParam0)//Position - 0x48C5
{
	return uParam0->f_29;
}

void func_95(var uParam0)//Position - 0x48D1
{
	uParam0->f_1++;
}

int func_96(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x48E3
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	
	vVar0 = { func_282(&(uParam1->f_247)) };
	if (MISC::ABSF((vVar0.z - uParam0->f_3[0 /*3*/].f_2)) <= 0.6f)
	{
		vVar3 = { uParam1->f_247.f_13 };
		if (iParam2 == 0)
		{
			if (iParam3 == 1)
			{
				vVar6 = { uParam0->f_32[0 /*3*/] + uParam1->f_1661 * Vector(0.25f, 0.25f, 0.25f) };
				vVar9 = { uParam0->f_16[3 /*3*/] + uParam1->f_1661 * Vector(0.25f, 0.25f, 0.25f) };
			}
			else
			{
				vVar6 = { uParam0->f_32[0 /*3*/] + uParam1->f_1661 * Vector(0.75f, 0.75f, 0.75f) };
				vVar9 = { uParam0->f_16[3 /*3*/] + uParam1->f_1661 * Vector(0.75f, 0.75f, 0.75f) };
			}
		}
		else if (iParam2 == 1)
		{
			if (iParam3 == 1)
			{
				vVar6 = { uParam0->f_32[0 /*3*/] + uParam1->f_1661 * Vector(0.75f, 0.75f, 0.75f) };
				vVar9 = { uParam0->f_16[0 /*3*/] + uParam1->f_1661 * Vector(0.75f, 0.75f, 0.75f) };
			}
			else
			{
				vVar6 = { uParam0->f_32[0 /*3*/] + uParam1->f_1661 * Vector(0.25f, 0.25f, 0.25f) };
				vVar9 = { uParam0->f_16[0 /*3*/] + uParam1->f_1661 * Vector(0.25f, 0.25f, 0.25f) };
			}
		}
		return func_76(vVar3, vVar6, vVar9, 4.153f);
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_97(var uParam0, int iParam1, var uParam2)//Position - 0x4A3F
{
	int iVar0;
	
	if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(*uParam0) || func_287(uParam0, 16))
	{
		iVar0 = ENTITY::GET_LAST_MATERIAL_HIT_BY_ENTITY(*uParam0);
		if (iVar0 == 122789469)
		{
		}
		if ((((((((((((((((((((iVar0 == 1907048430 || iVar0 == 1187676648) || iVar0 == 282940568) || iVar0 == 435688960) || iVar0 == 762193613) || iVar0 == -145735917) || iVar0 == 233925547) || iVar0 == -2098049209) || iVar0 == 450003561) || iVar0 == 1394765188) || iVar0 == 125958708) || iVar0 == -1625995479) || iVar0 == -365631240) || iVar0 == -642658848) || iVar0 == 592446772) || iVar0 == 669292054) || iVar0 == 1144315879) || iVar0 == -1286696947) || iVar0 == 1849540536) && (iParam1 - uParam0->f_2) > 4) && iVar0 != 0)
		{
			func_100(uParam0, iParam1);
			uParam0->f_13 = { func_282(uParam0) };
			func_286(uParam0, 32);
			func_286(uParam0, 16);
			return 1;
		}
		if (func_287(uParam0, 16) && (iParam1 - uParam0->f_2) > 4)
		{
			func_286(uParam0, 16);
			func_100(uParam0, iParam1);
			uParam0->f_13 = { func_282(uParam0) };
			func_286(uParam0, 32);
			return 1;
		}
		if (SYSTEM::VDIST2(*uParam2, func_282(uParam0)) > (26.75f * 26.75f))
		{
			return 1;
		}
	}
	if (func_99(uParam0) > 5f)
	{
		func_98(uParam0);
		func_277(uParam0, 128);
		return 1;
	}
	return 0;
}

void func_98(var uParam0)//Position - 0x4C3B
{
	uParam0->f_6 = 0f;
}

float func_99(var uParam0)//Position - 0x4C48
{
	return uParam0->f_6;
}

void func_100(var uParam0, int iParam1)//Position - 0x4C54
{
	uParam0->f_2 = iParam1;
}

int func_101(var uParam0)//Position - 0x4C62
{
	return uParam0->f_281;
}

void func_102(var uParam0)//Position - 0x4C6F
{
	func_180(uParam0, 2048);
	func_180(uParam0, 16384);
}

void func_103(var uParam0, int iParam1)//Position - 0x4C89
{
	uParam0->f_2 = iParam1;
}

bool func_104(var uParam0, int iParam1)//Position - 0x4C97
{
	return func_256(uParam0->f_2, iParam1);
}

int func_105(var uParam0)//Position - 0x4CA9
{
	return uParam0->f_3;
}

int func_106(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x4CB5
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	float fVar5;
	bool bVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	var uVar10;
	vector3 vVar11;
	vector3 vVar14;
	vector3 vVar17;
	vector3 vVar20;
	float fVar23;
	vector3 vVar24;
	vector3 vVar27;
	var uVar30;
	int iVar33;
	int iVar34;
	float fVar35;
	float fVar36;
	int iVar37;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	int iVar42;
	
	bVar6 = (ENTITY::DOES_ENTITY_EXIST(uParam1->f_247) && !ENTITY::IS_ENTITY_ATTACHED(uParam1->f_247));
	uVar7 = func_92(&(uParam1->f_247));
	uVar8 = func_90(&(uParam1->f_247));
	iVar9 = func_285(&(uParam1->f_247));
	uVar10 = func_91(&(uParam1->f_247));
	vVar11 = { func_282(&(uParam1->f_247)) };
	vVar14 = { uParam1->f_247.f_10 };
	if (bVar6 && iParam3 != iParam4)
	{
		if (!func_104(uParam0, 32768))
		{
			func_175(uParam0, uParam1, &vVar11, &vVar14, &uVar7, &uVar10, &uVar8, &iVar9);
		}
		else if (func_104(uParam0, 32768))
		{
			func_170(uParam0, uParam1, &vVar11, &vVar14, &uVar7, &uVar10, &uVar8, &iVar9);
		}
	}
	if (func_227(&(uParam0->f_4), 32))
	{
		func_169(uParam0);
		if (func_168(uParam0) >= func_167(uParam0))
		{
			func_166(uParam1, uParam0, uParam2, iParam3, iParam5, iParam6, func_282(&(uParam1->f_247)), bParam7);
			func_216(&(uParam0->f_4), 32);
			func_216(&(uParam0->f_4), 8);
			func_165(uParam0);
		}
	}
	if (uParam0->f_31 != 4 && MISC::GET_GAME_TIMER() > func_164(uParam0))
	{
		bVar0 = PAD::IS_CONTROL_PRESSED(0, 223);
		bVar2 = PAD::IS_CONTROL_PRESSED(0, 224);
		bVar3 = PAD::IS_CONTROL_PRESSED(0, 225);
		bVar1 = PAD::IS_CONTROL_PRESSED(0, 222);
		if (((PAD::IS_CONTROL_JUST_PRESSED(0, 223) || PAD::IS_CONTROL_JUST_PRESSED(0, 224)) || PAD::IS_CONTROL_JUST_PRESSED(0, 225)) || PAD::IS_CONTROL_JUST_PRESSED(0, 222))
		{
			if (func_163(uParam0))
			{
				func_58(uParam0, 1);
			}
			if (func_162(uParam1, uParam0, bVar6))
			{
				func_58(uParam0, 8);
			}
			vVar17 = { vVar14 };
			vVar17.z = 0f;
			vVar20 = { uParam0->f_40 };
			vVar20.z = 0f;
			if (func_69(vVar17, vVar20) < 0f)
			{
				func_58(uParam0, 16);
			}
		}
	}
	else if (MISC::GET_GAME_TIMER() > func_164(uParam0))
	{
		if (SYSTEM::VDIST2(func_282(&(uParam1->f_247)), uParam0->f_37) > (0f * 0f))
		{
			func_161(uParam0, uParam1, &bVar0, &bVar1);
		}
	}
	if (((uParam0->f_31 != 4 && func_104(uParam0, 512)) && func_160(uParam0) > 0.95f) && func_75(uParam0) == 75)
	{
		func_276(uParam0, 512);
		func_159(uParam0);
	}
	else if (func_104(uParam0, 512))
	{
		func_158(uParam0);
		if ((bVar0 || bVar2) || bVar3)
		{
			func_157(uParam0);
		}
		else
		{
			func_56(uParam0);
		}
	}
	if (((bVar0 || bVar1) || bVar2) || bVar3)
	{
		if ((func_75(uParam0) == 75 && !func_104(uParam0, 512)) && !func_104(uParam0, 4096))
		{
			func_58(uParam0, 512);
			if (bVar0)
			{
				func_229(uParam0, 0);
			}
			else if (bVar1)
			{
				func_229(uParam0, 2);
			}
			else if (bVar2)
			{
				func_229(uParam0, 3);
			}
			else if (bVar3)
			{
				func_229(uParam0, 1);
			}
			if (uParam0->f_31 != 4)
			{
				vVar24 = { func_87(uParam0->f_37, &(uParam1->f_189), func_282(&(uParam1->f_247)), uParam1->f_247.f_10, uParam1->f_1658, func_92(&(uParam1->f_247)), func_91(&(uParam1->f_247)), func_90(&(uParam1->f_247)), &fVar23) };
				func_81(&(uParam0->f_4), func_82(uParam0, &(uParam1->f_303), vVar24, uParam1->f_189.f_29.f_2, fVar23));
			}
		}
		if (uParam0->f_31 != 4 && bVar0)
		{
			if (func_104(uParam0, 1))
			{
				func_156(uParam0);
			}
		}
		else if (!bVar0)
		{
			func_155(uParam0);
		}
		if (func_154(uParam0))
		{
			PAD::SET_PAD_SHAKE(0, 50, 85);
		}
	}
	else
	{
		if (func_104(uParam0, 4096) && MISC::GET_GAME_TIMER() > func_164(uParam0))
		{
			func_276(uParam0, 4096);
		}
		func_155(uParam0);
	}
	if (iParam3 != iParam4 && ((func_104(uParam0, 512) && uParam0->f_31 != 4) || uParam0->f_31 == 4))
	{
		if (func_153(uParam0, vVar11, bVar6))
		{
			vVar27 = { func_70(&(uParam0->f_4)) };
			iVar4 = func_151(uParam0, uParam1, &(uParam1->f_303), &(uParam1->f_535), &(uParam1->f_1583), &vVar27, &iVar33, &uVar30);
			if ((iVar4 != 75 && iVar4 != 76) && (uParam0->f_31 == 4 || (uParam0->f_31 != 4 && func_104(uParam0, 512))))
			{
				if (!func_227(&(uParam0->f_4), 8) && !func_227(&(uParam0->f_4), 1))
				{
					func_150(&(uParam0->f_4));
					func_233(uParam0, iVar4);
					func_149(uParam0, iVar33);
					func_80(&(uParam0->f_4), 1);
					func_148(uParam0, MISC::GET_FRAME_COUNT() + 2);
					if (uParam0->f_31 == 4)
					{
						func_146(uParam0, &(uParam1->f_189), uParam1[iParam3 /*94*/]);
						func_58(uParam0, 512);
					}
				}
			}
			else if (iVar4 == 75 && func_145(uParam0, uParam1[iParam3 /*94*/], &(uParam1->f_247), uParam1->f_189.f_29, &fVar5))
			{
				vVar11 = { func_282(&(uParam1->f_247)) };
				if (fVar5 > 0f)
				{
					iVar4 = func_139(uParam0, &(uParam1->f_303), &(uParam1->f_535), &vVar11, &uVar30);
					func_233(uParam0, iVar4);
				}
				func_138(uParam0, MISC::GET_GAME_TIMER() + 1000);
				if (iVar4 == 75 || fVar5 <= 0f)
				{
					BRAIN::CLEAR_PED_TASKS(func_264(uParam0));
					func_137(uParam1, uParam0, uParam2, iParam3, iParam5, iParam6, vVar11, bParam7);
					func_276(uParam0, 512);
				}
				if (fVar5 < 5f)
				{
					iVar34 = 0;
					fVar35 = func_69(uParam1->f_1583[iVar34 /*3*/] - uParam0->f_37, uParam0->f_40);
					while (iVar34 < 23 && fVar35 > 0f)
					{
						iVar34++;
						fVar35 = func_69(uParam1->f_1583[iVar34 /*3*/] - uParam0->f_37, uParam0->f_40);
					}
					fVar36 = SYSTEM::TO_FLOAT(func_15(uParam1->f_535[iVar4 /*12*/].f_3));
					iVar37 = (SYSTEM::FLOOR((uParam1->f_535[iVar4 /*12*/].f_1 * fVar36)) - iVar34);
					func_149(uParam0, iVar37);
					func_80(&(uParam0->f_4), 1);
				}
			}
			func_81(&(uParam0->f_4), vVar27);
		}
		else if (uParam0->f_31 != 4 && func_168(uParam0) >= (func_167(uParam0) / 2f))
		{
			if (func_104(uParam0, 512))
			{
				func_166(uParam1, uParam0, uParam2, iParam3, iParam5, iParam6, func_282(&(uParam1->f_247)), bParam7);
			}
		}
	}
	if (func_133(uParam0, &(uParam1->f_247), uParam1->f_189.f_29, bVar6))
	{
		iVar42 = (1 - iParam4);
		vVar11 = { func_282(&(uParam1->f_247)) };
		if (func_52(uParam0) == 2)
		{
			func_215(&(uParam1->f_247));
			if (func_132(uParam1[iVar42 /*94*/], &(uParam1->f_189), uParam1->f_1661))
			{
				bVar38 = true;
			}
			else
			{
				bVar39 = true;
				func_229(uParam0, 5);
			}
		}
		else if ((uParam0->f_31 != 4 && func_154(uParam0)) && func_163(uParam0))
		{
			func_131(uParam0);
			func_276(uParam0, 1);
			func_155(uParam0);
			bVar41 = true;
		}
		else if (func_130(uParam0, &(uParam1->f_189), &(uParam1->f_1661), vVar11.z, func_285(&(uParam1->f_247))))
		{
			bVar40 = true;
		}
		if (func_129(&(uParam1->f_247), &(uParam1->f_189), uParam0, uParam1[iVar42 /*94*/]))
		{
			func_277(&(uParam1->f_247), 32);
		}
		func_107(uParam0, uParam1, iParam4, bVar40, bVar41, bVar38, bVar39);
		return 1;
	}
	return 0;
}

void func_107(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x5433
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	func_128(&iVar0, &iVar1, &iVar2, &iVar2, 1, 1);
	if (uParam0->f_31 != 4)
	{
		if (func_52(uParam0) == 1)
		{
			func_127(&(uParam1->f_247), 1);
		}
		else if (func_52(uParam0) == 3)
		{
			func_127(&(uParam1->f_247), 2);
		}
		else
		{
			func_215(&(uParam1->f_247));
		}
	}
	else if ((func_52(uParam0) != 2 && func_52(uParam0) != 5) && !bParam3)
	{
		func_127(&(uParam1->f_247), func_126(uParam0->f_4.f_20));
	}
	vVar3 = { func_120(uParam0, uParam1, iVar0, iParam2, func_282(&(uParam1->f_247)), bParam3, bParam4, bParam5, bParam6) };
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_247) && ENTITY::IS_ENTITY_ATTACHED(uParam1->f_247))
	{
		ENTITY::DETACH_ENTITY(uParam1->f_247, 1, true);
	}
	func_113(uParam1, vVar3);
	func_232(uParam0);
	func_216(&(uParam0->f_4), 4);
	func_58(uParam0, 4096);
	func_159(uParam0);
	func_108(uParam0, &(uParam1->f_247), bParam3, bParam4, bParam5, bParam6);
	iVar2 = (1 - iParam2);
	func_216(&((uParam1[iVar2 /*94*/])->f_4), 2);
	func_216(&((uParam1[iVar2 /*94*/])->f_4), 1);
	func_229(uParam1[iVar2 /*94*/], 0);
	func_149(uParam0, 0);
}

void func_108(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x5568
{
	int iVar0;
	bool bVar1;
	
	if (func_45(func_264(uParam0)) == 17 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.5f)
	{
		func_109(uParam0, "TENNIS_EXHERT", func_112(uParam0), 9);
	}
	bVar1 = (bParam5 || bParam4);
	if (bParam2 || bParam3)
	{
		if (func_91(uParam1) == 0)
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_195(uParam0->f_31 != 4, "TENNIS_PLYR_SMASH_MASTER", "TENNIS_NPC_SMASH_MASTER"), func_264(uParam0), 0, false, 0);
		}
		else if (func_91(uParam1) == 2)
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_195(uParam0->f_31 != 4, "TENNIS_PLYR_SMASH_BACKSLICE_MASTER", "TENNIS_NPC_SMASH_BACKSLICE_MASTER"), func_264(uParam0), 0, false, 0);
		}
		else if (func_91(uParam1) == 1)
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_195(uParam0->f_31 != 4, "TENNIS_PLYR_SMASH_MASTER", "TENNIS_NPC_SMASH_MASTER"), func_264(uParam0), 0, false, 0);
		}
		iVar0 = 100;
	}
	else if (bVar1)
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_195(uParam0->f_31 != 4, "TENNIS_PLYR_LOB_MASTER", "TENNIS_NPC_LOB_MASTER"), func_264(uParam0), 0, false, 0);
		iVar0 = 60;
	}
	else
	{
		if (func_91(uParam1) == 0)
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_195(uParam0->f_31 != 4, "TENNIS_PLYR_FOREARM_MASTER", "TENNIS_NPC_FOREARM_MASTER"), func_264(uParam0), 0, false, 0);
		}
		else if (func_91(uParam1) == 2)
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_195(uParam0->f_31 != 4, "TENNIS_PLYR_BACKSLICE_MASTER", "TENNIS_NPC_BACKSLICE_MASTER"), func_264(uParam0), 0, false, 0);
		}
		else if (func_91(uParam1) == 1)
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_195(uParam0->f_31 != 4, "TENNIS_PLYR_TOPSPIN_MASTER", "TENNIS_NPC_TOPSPIN_MASTER"), func_264(uParam0), 0, false, 0);
		}
		iVar0 = 80;
	}
	if (uParam0->f_31 != 4)
	{
		PAD::SET_PAD_SHAKE(0, iVar0, 256);
	}
}

void func_109(var uParam0, char* sParam1, char* sParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, int iParam10)//Position - 0x5709
{
	if (!PED::IS_PED_INJURED(func_264(uParam0)))
	{
		func_110(func_264(uParam0), sParam1, &sParam2, iParam10);
	}
}

void func_110(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x572F
{
	AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(iParam0, sParam1, sParam2, func_111(iParam3), 0);
}

int func_111(int iParam0)//Position - 0x5748
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

struct<8> func_112(var uParam0)//Position - 0x593D
{
	return uParam0->f_86;
}

void func_113(var uParam0, vector3 vParam1)//Position - 0x594C
{
	vector3 vVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_247))
	{
		if (uParam0->f_1657 != 1 && !func_274(&(uParam0->f_247)))
		{
			func_273(&(uParam0->f_247));
			func_119(&(uParam0->f_247));
		}
		uParam0->f_247.f_10 = { vParam1 };
		vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_247, true) };
		if (vVar0.z < uParam0->f_189.f_29.f_2)
		{
			vVar0.z = uParam0->f_189.f_29.f_2;
		}
		func_275(&(uParam0->f_247), vVar0);
		uParam0->f_247.f_16 = { func_282(&(uParam0->f_247)) };
		func_118(&(uParam0->f_247), MISC::GET_FRAME_COUNT() + 5);
		func_117(&(uParam0->f_247));
		func_115(&(uParam0->f_247), 1);
		func_100(&(uParam0->f_247), func_101(uParam0));
		func_114(uParam0->f_247, 1);
	}
	func_286(&(uParam0->f_247), 4);
	func_286(&(uParam0->f_247), 16);
}

void func_114(int iParam0, bool bParam1)//Position - 0x5A21
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if ((ENTITY::IS_ENTITY_VISIBLE(iParam0) && !bParam1) || (!ENTITY::IS_ENTITY_VISIBLE(iParam0) && bParam1))
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam0, bParam1, 0);
			OBJECT::_0xB2D0BDE54F0E8E5A(iParam0, bParam1);
		}
	}
}

void func_115(var uParam0, bool bParam1)//Position - 0x5A6B
{
	vector3 vVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		vVar0 = { func_116(bParam1, func_282(uParam0), ENTITY::GET_ENTITY_COORDS(*uParam0, true)) };
	}
	uParam0->f_27 = { vVar0 };
	uParam0->f_30 = { vVar0 };
	uParam0->f_25 = 0f;
	uParam0->f_26 = 0f;
}

Vector3 func_116(bool bParam0, vector3 vParam1, vector3 vParam4)//Position - 0x5AB3
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam4;
}

void func_117(var uParam0)//Position - 0x5ACE
{
	uParam0->f_4 = 0f;
	uParam0->f_5 = 0f;
	func_98(uParam0);
}

void func_118(var uParam0, var uParam1)//Position - 0x5AE6
{
	uParam0->f_3 = uParam1;
}

void func_119(var uParam0)//Position - 0x5AF4
{
	func_277(uParam0, 1);
}

Vector3 func_120(var uParam0, var uParam1, int iParam2, int iParam3, vector3 vParam4, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0x5B03
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	vector3 vVar10;
	vector3 vVar13;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	float fVar24;
	int iVar25;
	float fVar26;
	float fVar27;
	
	fVar3 = 8f;
	fVar4 = 7.2f;
	fVar5 = 5.5f;
	fVar6 = -1.5f;
	fVar7 = 0.9f;
	fVar8 = (30f * func_125(uParam0));
	fVar9 = fVar8;
	vVar10 = { vParam4 };
	vVar13 = { MISC::_0x21C235BC64831E5A(vVar10, uParam1->f_189.f_32[0 /*3*/], uParam1->f_189.f_32[1 /*3*/], 0) };
	fVar16 = SYSTEM::VDIST(vVar10, vVar13);
	fVar17 = (SYSTEM::VMAG(uParam1->f_189.f_3[3 /*3*/] - uParam1->f_189.f_3[0 /*3*/]) / 2f);
	fVar18 = (fVar16 / fVar17);
	if (func_287(&(uParam1->f_247), 64))
	{
		bParam7 = false;
		bParam8 = false;
		bParam9 = true;
		func_229(uParam0, 2);
	}
	if (bParam7)
	{
		fVar8 = 45f;
		fVar3 = 15f;
		fVar4 = 0f;
		fVar5 = 7.5f;
		fVar6 = -2f;
	}
	else if (bParam8)
	{
		fVar8 = (fVar8 + 10f);
	}
	else if (bParam9)
	{
		fVar4 = 15f;
		fVar5 = 12.5f;
		fVar6 = 1.38f;
		fVar7 = func_124(8f, 15f, fVar18);
		fVar9 = 14.35f;
		fVar3 = 12.325f;
		fVar8 = func_124(15f, 30f, fVar18);
	}
	else if (bParam10)
	{
		fVar8 = 27.55f;
		fVar9 = 7f;
		fVar6 = 0f;
		fVar3 = 3f;
		fVar7 = 1.58f;
	}
	fVar19 = (vVar10.z - uParam1->f_189.f_29.f_2);
	fVar20 = (fVar19 / 2f);
	fVar21 = func_124(fVar8, fVar9, fVar20);
	fVar22 = func_124(fVar21, fVar8, fVar18);
	fVar23 = func_124(fVar3, fVar22, fVar18);
	fVar24 = func_124(fVar23, fVar22, fVar20);
	if (uParam0->f_31 != 4)
	{
		vVar0 = { func_123(uParam0, &(uParam1->f_189), vVar10, iParam2) };
	}
	else
	{
		iVar25 = (1 - iParam3);
		vVar0 = { func_121(uParam0, uParam1, &(uParam1->f_247.f_16), &((uParam1[iVar25 /*94*/])->f_37), iParam3) };
	}
	fVar26 = func_124(fVar4, fVar5, fVar18);
	fVar27 = func_124(fVar6, fVar7, fVar18);
	vVar0.z = func_124(fVar26, fVar27, fVar20);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	vVar0 = { vVar0 * Vector(fVar24, fVar24, fVar24) };
	return vVar0;
}

Vector3 func_121(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x5D2E
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	vector3 vVar19;
	vector3 vVar22;
	vector3 vVar25;
	bool bVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	int iVar34;
	int iVar35;
	
	iVar0 = func_50(uParam0->f_1 == 0, 3, 1);
	iVar1 = func_50(uParam0->f_1 == 0, 2, 0);
	iVar2 = (1 - iParam4);
	if (uParam0->f_4.f_20 == 0 || func_287(&(uParam1->f_247), 64))
	{
		vVar6 = { FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) * uParam0->f_43 };
		vVar3 = { *uParam2 + vVar6 - uParam0->f_37 };
		if (func_287(&(uParam1->f_247), 64))
		{
			func_286(&(uParam1->f_247), 64);
		}
	}
	else if (uParam0->f_4.f_20 == 1)
	{
		fVar9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.15f, 1.15f);
		vVar16 = { uParam1->f_189.f_3[iVar1 /*3*/] - uParam1->f_189.f_3[iVar0 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
		if (SYSTEM::VDIST2(*uParam3, uParam1->f_189.f_3[iVar0 /*3*/]) > SYSTEM::VDIST2(*uParam3, uParam1->f_189.f_3[iVar1 /*3*/]))
		{
			vVar10 = { uParam1->f_189.f_3[iVar0 /*3*/] };
			vVar13 = { vVar10 + vVar16 };
		}
		else
		{
			vVar10 = { uParam1->f_189.f_3[iVar0 /*3*/] + vVar16 };
			vVar13 = { uParam1->f_189.f_3[iVar1 /*3*/] };
		}
		vVar19 = { func_122(vVar10, vVar13, fVar9) };
		vVar3 = { vVar19 - func_282(&(uParam1->f_247)) };
	}
	else if (uParam0->f_4.f_20 == 2)
	{
		bVar28 = false;
		fVar29 = SYSTEM::VDIST2(uParam1->f_189.f_3[0 /*3*/], *uParam3);
		fVar30 = SYSTEM::VDIST2(uParam1->f_189.f_3[1 /*3*/], *uParam3);
		fVar31 = MISC::ABSF((fVar29 - fVar30));
		fVar32 = func_124(0.75f, 0.05f, (fVar31 / 90f));
		fVar33 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		switch (func_52(uParam0))
		{
			case 0:
				vVar25 = { uParam0->f_40 * Vector(-1f, -1f, -1f) };
				break;
			
			case 1:
				vVar25 = { uParam0->f_40 * Vector(-2f, -2f, -2f) };
				break;
			
			case 3:
				vVar25 = { uParam0->f_40 * Vector(0f, 0f, 0f) };
				break;
		}
		if (fVar33 < fVar32 && func_227(&(uParam0->f_4), 128))
		{
			bVar28 = true;
			func_128(&iVar34, &iVar35, &iVar35, &iVar35, 1, 1);
			if (iVar34 > 15)
			{
				iVar35 = func_50(uParam0->f_1 == 0, 2, 0);
				vVar22 = { uParam1->f_189.f_3[iVar35 /*3*/] + vVar25 };
			}
			else if (iVar34 < -15)
			{
				iVar35 = func_50(uParam0->f_1 == 0, 3, 1);
				vVar22 = { uParam1->f_189.f_3[iVar35 /*3*/] + vVar25 };
			}
			else
			{
				bVar28 = false;
			}
		}
		if (fVar29 > fVar30 && !bVar28)
		{
			if (uParam0->f_1 == 0)
			{
				fVar29 = SYSTEM::VDIST2(uParam1->f_189.f_3[0 /*3*/], uParam0->f_37);
				fVar30 = SYSTEM::VDIST2(uParam1->f_189.f_3[1 /*3*/], uParam0->f_37);
				if (func_65(iVar2, uParam1, 0, 0))
				{
					vVar22 = { uParam1->f_189.f_3[3 /*3*/] + vVar25 };
				}
				else if (fVar29 < fVar30)
				{
					vVar22 = { uParam1->f_189.f_3[3 /*3*/] + uParam0->f_43 * Vector(1.5f, 1.5f, 1.5f) + vVar25 };
				}
				else
				{
					vVar22 = { uParam1->f_189.f_3[3 /*3*/] + vVar25 };
				}
			}
			else
			{
				fVar29 = SYSTEM::VDIST2(uParam1->f_189.f_3[3 /*3*/], uParam0->f_37);
				fVar30 = SYSTEM::VDIST2(uParam1->f_189.f_3[2 /*3*/], uParam0->f_37);
				if (func_65(iVar2, uParam1, 0, 0))
				{
					vVar22 = { uParam1->f_189.f_3[0 /*3*/] + vVar25 };
				}
				else if (fVar29 < fVar30)
				{
					vVar22 = { uParam1->f_189.f_3[0 /*3*/] - uParam0->f_43 * Vector(1.5f, 1.5f, 1.5f) + vVar25 };
				}
				else
				{
					vVar22 = { uParam1->f_189.f_3[0 /*3*/] + vVar25 };
				}
			}
		}
		else if (!bVar28)
		{
			if (uParam0->f_1 == 0)
			{
				fVar29 = SYSTEM::VDIST2(uParam1->f_189.f_3[1 /*3*/], uParam0->f_37);
				fVar30 = SYSTEM::VDIST2(uParam1->f_189.f_3[0 /*3*/], uParam0->f_37);
				if (func_65(iVar2, uParam1, 0, 0))
				{
					vVar22 = { uParam1->f_189.f_3[2 /*3*/] + vVar25 };
				}
				else if (fVar29 < fVar30)
				{
					vVar22 = { uParam1->f_189.f_3[2 /*3*/] - uParam0->f_43 * Vector(1.5f, 1.5f, 1.5f) + vVar25 };
				}
				else
				{
					vVar22 = { uParam1->f_189.f_3[2 /*3*/] + vVar25 };
				}
			}
			else
			{
				fVar29 = SYSTEM::VDIST2(uParam1->f_189.f_3[2 /*3*/], uParam0->f_37);
				fVar30 = SYSTEM::VDIST2(uParam1->f_189.f_3[3 /*3*/], uParam0->f_37);
				if (func_65(iVar2, uParam1, 0, 0))
				{
					vVar22 = { uParam1->f_189.f_3[1 /*3*/] + vVar25 };
				}
				else if (fVar29 < fVar30)
				{
					vVar22 = { uParam1->f_189.f_3[1 /*3*/] + uParam0->f_43 * Vector(1.5f, 1.5f, 1.5f) + vVar25 };
				}
				else
				{
					vVar22 = { uParam1->f_189.f_3[1 /*3*/] + vVar25 };
				}
			}
		}
		vVar3 = { vVar22 - func_282(&(uParam1->f_247)) };
	}
	else
	{
		vVar3 = { *uParam2 - uParam0->f_37 };
	}
	return vVar3;
}

Vector3 func_122(vector3 vParam0, vector3 vParam3, float fParam6)//Position - 0x6267
{
	return FtoV((1f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

Vector3 func_123(var uParam0, var uParam1, vector3 vParam2, int iParam5)//Position - 0x6282
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	vector3 vVar11;
	float fVar14;
	vector3 vVar15;
	float fVar18;
	vector3 vVar19;
	
	vVar3 = { 0f, 0f, 0f };
	vVar6 = { 0f, 0f, 0f };
	iVar9 = func_50(uParam0->f_1 == 0, 3, 1);
	iVar10 = func_50(uParam0->f_1 == 0, 2, 0);
	vVar11 = { uParam1->f_3[1 /*3*/] - uParam1->f_3[0 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
	if (!func_76(vParam2, uParam1->f_3[0 /*3*/] + vVar11, uParam1->f_3[3 /*3*/] + vVar11, func_77(uParam1)))
	{
		fVar14 = func_124(0.4f, 1f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f));
		if (func_69(uParam0->f_43, uParam0->f_37 - uParam1->f_3[0 /*3*/]) < 0f)
		{
			vVar3 = { uParam0->f_43 * Vector(fVar14, fVar14, fVar14) };
		}
		if (func_69(uParam0->f_43, uParam0->f_37 - uParam1->f_3[1 /*3*/]) >= 0f)
		{
			vVar6 = { uParam0->f_43 * Vector(fVar14, fVar14, fVar14) * Vector(-1f, -1f, -1f) };
		}
	}
	vVar15 = { MISC::_0x21C235BC64831E5A(uParam0->f_37, uParam1->f_3[iVar9 /*3*/], uParam1->f_3[iVar10 /*3*/], 1) };
	if (MISC::ABSI(iParam5) > 15)
	{
		if (iParam5 > 0)
		{
			fVar18 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(128));
			vVar19 = { func_122(vVar15, uParam1->f_3[iVar10 /*3*/] + vVar6, fVar18) };
		}
		else
		{
			fVar18 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(-128));
			vVar19 = { func_122(vVar15, uParam1->f_3[iVar9 /*3*/] + vVar3, fVar18) };
		}
		vVar0 = { vVar19 - vParam2 };
	}
	else
	{
		vVar0 = { vVar15 - vParam2 };
	}
	return vVar0;
}

float func_124(float fParam0, float fParam1, float fParam2)//Position - 0x6424
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_125(var uParam0)//Position - 0x6439
{
	return uParam0->f_66;
}

int func_126(int iParam0)//Position - 0x6445
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.3f)
			{
				if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.5f)
				{
					return 1;
				}
				else
				{
					return 2;
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.2f)
			{
				if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.6f)
				{
					return 1;
				}
				else
				{
					return 2;
				}
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

void func_127(var uParam0, int iParam1)//Position - 0x64E4
{
	uParam0->f_22 = iParam1;
}

void func_128(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x64F2
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (iParam5 == 0)
	{
		if (bParam4)
		{
			fVar0 = PAD::GET_CONTROL_NORMAL(0, 218);
			fVar1 = PAD::GET_CONTROL_NORMAL(0, 219);
			fVar2 = PAD::GET_CONTROL_NORMAL(0, 220);
			fVar3 = PAD::GET_CONTROL_NORMAL(0, 221);
		}
		else
		{
			fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 218);
			fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 219);
			fVar2 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 220);
			fVar3 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 221);
		}
	}
	else if (bParam4)
	{
		fVar0 = PAD::_0x5B84D09CEC5209C5(0, 218);
		fVar1 = PAD::_0x5B84D09CEC5209C5(0, 219);
		fVar2 = PAD::_0x5B84D09CEC5209C5(0, 220);
		fVar3 = PAD::_0x5B84D09CEC5209C5(0, 221);
	}
	else
	{
		fVar0 = PAD::_0x4F8A26A890FD62FB(0, 218);
		fVar1 = PAD::_0x4F8A26A890FD62FB(0, 219);
		fVar2 = PAD::_0x4F8A26A890FD62FB(0, 220);
		fVar3 = PAD::_0x4F8A26A890FD62FB(0, 221);
	}
	*iParam0 = SYSTEM::ROUND((128f * fVar0));
	*iParam1 = SYSTEM::ROUND((128f * fVar1));
	*uParam2 = SYSTEM::ROUND((128f * fVar2));
	*uParam3 = SYSTEM::ROUND((128f * fVar3));
}

int func_129(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x65DF
{
	vector3 vVar0;
	float fVar3;
	
	if (uParam2->f_31 == 4)
	{
		return 0;
	}
	if (func_52(uParam3) != 2)
	{
		return 0;
	}
	if (func_52(uParam2) == 2)
	{
		return 0;
	}
	if (func_285(uParam0) >= 1)
	{
		return 0;
	}
	vVar0 = { func_282(uParam0) };
	fVar3 = (vVar0.z - uParam1->f_29.f_2);
	if (fVar3 < 0.1f)
	{
		return 0;
	}
	return 1;
}

int func_130(var uParam0, var uParam1, var uParam2, float fParam3, int iParam4)//Position - 0x6644
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	if (func_75(uParam0) == 72 || func_75(uParam0) == 73)
	{
		return 0;
	}
	fVar0 = (fParam3 - uParam1->f_3[0 /*3*/].f_2);
	bVar1 = (uParam0->f_31 != 4 || uParam0->f_4.f_20 > 0);
	bVar2 = iParam4 < 1;
	if (!bVar1)
	{
		return 0;
	}
	if (!bVar2)
	{
		return 0;
	}
	if (!func_132(uParam0, uParam1, *uParam2))
	{
		return 0;
	}
	if (fVar0 < 0.8f)
	{
		return 0;
	}
	return 1;
}

void func_131(var uParam0)//Position - 0x66CD
{
	uParam0->f_63 = 0f;
}

bool func_132(var uParam0, var uParam1, vector3 vParam2)//Position - 0x66DA
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	
	vVar0 = { uParam1->f_16[0 /*3*/] + vParam2 * Vector(0.5f, 0.5f, 0.5f) };
	vVar3 = { uParam1->f_16[3 /*3*/] + vParam2 * Vector(0.5f, 0.5f, 0.5f) };
	uVar6 = func_76(uParam0->f_37, vVar0, vVar3, func_77(uParam1));
	return uVar6;
}

int func_133(var uParam0, var uParam1, vector3 vParam2, bool bParam5)//Position - 0x6730
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar8;
	float fVar11;
	float fVar12;
	float fVar13;
	vector3 vVar14;
	vector3 vVar17;
	float fVar20;
	float fVar21;
	
	if (!bParam5)
	{
		return 0;
	}
	if (func_75(uParam0) == 75)
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(func_264(uParam0)) && MISC::_0xE95B0C7D5BA3B96B(func_264(uParam0)))
	{
		return 0;
	}
	if (func_136(uParam0) > MISC::GET_FRAME_COUNT())
	{
		return 0;
	}
	if (!func_104(uParam0, 1024))
	{
		return 0;
	}
	if (!func_104(uParam0, 512))
	{
		return 0;
	}
	if (func_104(uParam0, 8))
	{
		return 0;
	}
	if (func_227(&(uParam0->f_4), 16))
	{
		return 0;
	}
	vVar0 = { func_282(uParam1) };
	if (func_69(uParam0->f_40, vVar0 - vParam2) > 0f)
	{
		return 0;
	}
	fVar3 = 2f;
	if (func_75(uParam0) == 72 || func_75(uParam0) == 73)
	{
		fVar3 = 0.45f;
	}
	else if (func_16(uParam0) > 5)
	{
		fVar3 = 1.5f;
	}
	fVar4 = SYSTEM::VDIST2(vVar0, func_135(uParam0));
	if (fVar4 > (fVar3 * fVar3))
	{
		return 0;
	}
	vVar5 = { func_135(uParam0) };
	vVar8 = { vVar0 - vVar5 };
	fVar11 = func_69(uParam0->f_43, vVar8);
	fVar12 = func_69(uParam0->f_40, vVar8);
	fVar13 = func_69(0f, 0f, 1f, vVar8);
	vVar14 = { PED::GET_PED_BONE_COORDS(func_264(uParam0), 60309, 0f, 0f, 0f) };
	vVar17 = { vVar0 - vVar14 };
	fVar20 = func_69(uParam0->f_43, vVar17);
	fVar21 = (MISC::ABSF(fVar11) - MISC::ABSF(fVar20));
	fVar21 = (fVar21 * 0.3f);
	if (!func_134(uParam0->f_33, &vVar14, &(uParam0->f_40), &vVar0, &(uParam1->f_10)))
	{
		return 0;
	}
	if (MISC::ABSF(fVar11) > (0.65f + fVar21))
	{
		return 0;
	}
	if (fVar12 < -0.9f)
	{
		return 0;
	}
	if (fVar13 > 0.9f)
	{
		return 0;
	}
	func_275(uParam1, vVar0);
	ENTITY::SET_ENTITY_COORDS(*uParam1, vVar0, 1, false, 0, 1);
	return 1;
}

int func_134(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x693C
{
	vector3 vVar0;
	var uVar3;
	var uVar6;
	vector3 vVar9;
	float fVar12;
	vector3 vVar13;
	float fVar16;
	bool bVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		ENTITY::GET_ENTITY_MATRIX(iParam0, &uVar6, &uVar3, &vVar9, &vVar0);
		vVar0 = { vVar0 + vVar9 * Vector(0.4f, 0.4f, 0.4f) };
		fVar12 = MISC::GET_FRAME_TIME();
		*uParam3 = { *uParam3 + *uParam4 * Vector(fVar12, fVar12, fVar12) };
		vVar13 = { *uParam1 };
		fVar16 = func_69(*uParam3 - vVar13, *uParam2);
		bVar17 = fVar16 < 0.35f;
		if (bVar17)
		{
			fVar18 = func_69(*uParam4, *uParam2);
			if (fVar18 < 0f)
			{
				fVar19 = (fVar16 / fVar18);
				fVar19 = func_12(fVar19, 0f, fVar12);
				*uParam3 = { *uParam3 - *uParam4 * Vector(fVar19, fVar19, fVar19) };
				fVar20 = func_69(*uParam3 - vVar0, *uParam2);
				if (fVar20 < -0.1f)
				{
					*uParam3 = { *uParam3 - *uParam2 * Vector(fVar20, fVar20, fVar20) };
				}
			}
			else
			{
				*uParam3 = { *uParam3 - *uParam2 * Vector(fVar16, fVar16, fVar16) };
			}
		}
		return bVar17;
	}
	return 0;
}

Vector3 func_135(var uParam0)//Position - 0x6A31
{
	vector3 vVar0;
	var uVar3;
	var uVar6;
	vector3 vVar9;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_33))
	{
		ENTITY::PROCESS_ENTITY_ATTACHMENTS(uParam0->f_33);
		ENTITY::GET_ENTITY_MATRIX(uParam0->f_33, &uVar6, &uVar3, &vVar9, &vVar0);
		vVar0 = { vVar0 + vVar9 * Vector(0.4f, 0.4f, 0.4f) };
	}
	return vVar0;
}

int func_136(var uParam0)//Position - 0x6A74
{
	return uParam0->f_56;
}

void func_137(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, bool bParam9)//Position - 0x6A80
{
	float fVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	bool bVar4;
	
	if (!func_104(uParam1, 1024))
	{
		fVar0 = func_69(uParam1->f_43, vParam6 - uParam1->f_37);
		iVar1 = func_264(uParam1);
		sVar2 = "mini@tennis";
		sVar3 = func_195(fVar0 > 0f, "react_ball_out", "react_ball_out_lt");
		bVar4 = false;
		BRAIN::CLEAR_PED_TASKS(iVar1);
		MISC::_0xE266ED23311F24D4(iVar1, sVar2, sVar3, 0f, 1f, 1);
		func_58(uParam1, 1024);
		func_80(&(uParam1->f_4), 16);
		func_8(uParam1, MISC::GET_GAME_TIMER() + 2442);
		if ((1 && !func_227(&((uParam0[iParam3 /*94*/])->f_4), 256)) && MISC::GET_GAME_TIMER() > func_253(uParam0[iParam3 /*94*/]))
		{
			iParam5 = (1 - iParam5);
			if (bParam9)
			{
				bVar4 = (((*uParam2)[0 /*8*/] + (*uParam2)[1 /*8*/]) + 1 % 6) == false;
				if (MISC::IS_BIT_SET(((*uParam2)[0 /*8*/] + (*uParam2)[1 /*8*/]) + 1, 0) || bVar4)
				{
					iParam5 = 1;
					iParam4 = (1 - iParam4);
				}
			}
			else if (uParam0->f_1657 == 1)
			{
				if (((*uParam2)[0 /*8*/] >= 4 && ((*uParam2)[0 /*8*/] - (*uParam2)[1 /*8*/]) >= 2) || ((*uParam2)[1 /*8*/] >= 4 && ((*uParam2)[1 /*8*/] - (*uParam2)[0 /*8*/]) >= 2))
				{
					iParam4 = (1 - iParam4);
				}
			}
			if (iParam3 == iParam4)
			{
				func_80(&((uParam0[iParam3 /*94*/])->f_4), 256);
				func_226(uParam0[iParam3 /*94*/], uParam0, iParam5, iParam3, 0, 0, 0, 1, bVar4, 0);
			}
			else
			{
				func_80(&((uParam0[iParam3 /*94*/])->f_4), 256);
				func_217(uParam0[iParam3 /*94*/], uParam0, iParam5, iParam3, 0, 1, bVar4, 0, 0);
			}
		}
	}
}

void func_138(var uParam0, var uParam1)//Position - 0x6C13
{
	uParam0->f_65 = uParam1;
}

int func_139(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x6C21
{
	int iVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	vector3 vVar10;
	vector3 vVar13;
	float fVar16;
	int iVar17;
	float fVar18;
	int iVar19;
	vector3 vVar20;
	vector3 vVar23;
	var uVar26;
	float fVar29;
	float fVar30;
	
	iVar0 = 75;
	fVar1 = 1000f;
	MISC::_0xF56DFB7B61BE7276(*uParam3, *uParam4, uParam0->f_37, uParam0->f_40, &fVar2);
	fVar9 = func_144(uParam0->f_31 != 4, 0.5f, 1.2f);
	if (fVar2 <= fVar9)
	{
		return 75;
	}
	vVar10 = { *uParam4 - *uParam3 * Vector(fVar2, fVar2, fVar2) };
	vVar13 = { *uParam3 + vVar10 };
	vVar13.z = uParam3->f_2;
	fVar16 = (vVar13.z - uParam0->f_37.f_2);
	if (fVar16 > 2f)
	{
		return 75;
	}
	iVar17 = 0;
	while (iVar17 < (77 - 1))
	{
		if (((uParam2[iVar17 /*12*/])->f_1 >= 0f && iVar17 != 72) && iVar17 != 73)
		{
			vVar3 = { func_85(uParam0, *(uParam1[iVar17 /*3*/])) };
			vVar6 = { uParam0->f_37 + vVar3 };
			fVar18 = SYSTEM::VDIST2(vVar6, vVar13);
			if (fVar18 < fVar1)
			{
				fVar1 = fVar18;
				iVar0 = iVar17;
			}
		}
		iVar17++;
	}
	vVar20 = { vVar13 + uParam0->f_40 };
	vVar23 = { vVar13 - uParam0->f_40 };
	if (iVar0 == 72)
	{
		iVar19 = func_143(uParam0, &vVar20, &vVar23, &vLocal_327, &vLocal_333, &vLocal_336, 0, &fVar29, &fVar30, &uVar26);
		if (iVar19 == 0)
		{
			func_142(uParam0, 0.5f);
			func_141(uParam0, 1f);
			func_140(uParam0, 2);
		}
		else
		{
			func_142(uParam0, fVar29);
			func_141(uParam0, fVar30);
			func_140(uParam0, iVar19);
			iVar0 = 75;
		}
	}
	else if (iVar0 == 73)
	{
		iVar19 = func_143(uParam0, &vVar20, &vVar23, &vLocal_315, &vLocal_321, &vLocal_324, 1, &fVar29, &fVar30, &uVar26);
		if (iVar19 == 0)
		{
			func_142(uParam0, 0.5f);
			func_141(uParam0, 1f);
			func_140(uParam0, 2);
		}
		else
		{
			func_142(uParam0, fVar29);
			func_141(uParam0, fVar30);
			func_140(uParam0, iVar19);
			iVar0 = 75;
		}
	}
	return iVar0;
}

void func_140(var uParam0, int iParam1)//Position - 0x6E0B
{
	uParam0->f_52 = iParam1;
}

void func_141(var uParam0, float fParam1)//Position - 0x6E19
{
	uParam0->f_71 = fParam1;
}

void func_142(var uParam0, float fParam1)//Position - 0x6E27
{
	uParam0->f_70 = fParam1;
}

int func_143(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, float fParam7, float fParam8, var uParam9)//Position - 0x6E35
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	var uVar8;
	vector3 vVar9;
	
	fVar0 = 0f;
	MISC::_0xF56DFB7B61BE7276(*uParam1, *uParam2, uParam0->f_37, uParam0->f_40, &fVar0);
	if (fVar0 < 0f || fVar0 > 1f)
	{
		return 0;
	}
	vVar1 = { *uParam1 + *uParam2 - *uParam1 * Vector(fVar0, fVar0, fVar0) };
	vVar4 = { vVar1 - uParam0->f_37 };
	fVar7 = func_69(vVar4, uParam0->f_43);
	if (MISC::ABSF(fVar7) < 2.85f)
	{
		return 0;
	}
	uVar8 = vVar4.z;
	vVar9 = { fVar7, 0f, uVar8 };
	*fParam7 = MISC::_0x7F8F6405F4777AF6(vVar9, *uParam5, *uParam3, 0);
	*fParam8 = MISC::_0x7F8F6405F4777AF6(vVar9, func_116(bParam6, *uParam5, *uParam4), func_116(bParam6, *uParam4, *uParam5), 0);
	if (((*fParam7 < 0f || *fParam7 > 2f) || *fParam8 < 0f) || *fParam8 > 2f)
	{
		return 0;
	}
	*uParam9 = { vVar1 };
	return 2;
}

float func_144(bool bParam0, float fParam1, float fParam2)//Position - 0x6F39
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_145(var uParam0, var uParam1, var uParam2, vector3 vParam3, var uParam6)//Position - 0x6F50
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	
	if (ENTITY::IS_ENTITY_ATTACHED(*uParam2))
	{
		return 0;
	}
	if (func_52(uParam1) == 2 && func_285(uParam2) <= 1)
	{
		return 0;
	}
	if (uParam0->f_31 != 4)
	{
		if (!func_104(uParam0, 512))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(uParam0->f_37, func_282(uParam2)) > (20f * 20f))
		{
			return 0;
		}
		if (func_227(&(uParam0->f_4), 1))
		{
			return 0;
		}
		*uParam6 = 0f;
		*uParam6 = func_69(uParam0->f_40, func_282(uParam2) - uParam0->f_37);
		vVar0 = { uParam2->f_10 };
		vVar3 = { func_282(uParam2) };
		vVar0.z = 0f;
		vVar3.z = vParam3.z;
		vVar6 = { vParam3 - vVar3 };
		fVar9 = func_69(vVar0, vVar6);
		if (*uParam6 > 2f && fVar9 < 0f)
		{
			return 0;
		}
		if (*uParam6 > 2f && *uParam6 < 7.6f)
		{
			return 0;
		}
		if (*uParam6 < 0.5f)
		{
			return 1;
		}
		if (((!PAD::IS_CONTROL_JUST_RELEASED(0, 223) && !PAD::IS_CONTROL_JUST_RELEASED(0, 224)) && !PAD::IS_CONTROL_JUST_RELEASED(0, 225)) && !PAD::IS_CONTROL_JUST_RELEASED(0, 222))
		{
			return 0;
		}
	}
	else
	{
		if (!func_227(&(uParam0->f_4), 64))
		{
			return 0;
		}
		if (func_227(&(uParam0->f_4), 1))
		{
			return 0;
		}
		if (func_227(&(uParam0->f_4), 16))
		{
			return 0;
		}
		fVar10 = func_69(uParam0->f_40, func_282(uParam2) - uParam0->f_37);
		if (fVar10 > 1.2f)
		{
			return 0;
		}
	}
	return 1;
}

void func_146(var uParam0, var uParam1, var uParam2)//Position - 0x70FC
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	
	if (func_34(&(uParam0->f_4)) != 2)
	{
		if (func_147(&(uParam0->f_4)) == 3)
		{
			func_229(uParam0, 0);
		}
		else if (func_147(&(uParam0->f_4)) == 4)
		{
			func_229(uParam0, 2);
		}
		else
		{
			func_229(uParam0, 0);
		}
	}
	else
	{
		vVar5 = { uParam1->f_3[1 /*3*/] - uParam1->f_3[0 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
		vVar8 = { uParam1->f_3[0 /*3*/] + vVar5 };
		vVar11 = { uParam1->f_3[3 /*3*/] + vVar5 };
		fVar0 = SYSTEM::VDIST(vVar8, uParam2->f_37);
		fVar1 = SYSTEM::VDIST(vVar11, uParam2->f_37);
		fVar2 = MISC::ABSF((fVar0 - fVar1));
		fVar3 = func_124(0.15f, 0.5f, (fVar2 / 570f));
		fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		if (fVar4 < fVar3)
		{
			func_229(uParam0, 2);
		}
		else
		{
			func_229(uParam0, 0);
		}
	}
}

int func_147(var uParam0)//Position - 0x71F0
{
	return uParam0->f_19;
}

void func_148(var uParam0, var uParam1)//Position - 0x71FC
{
	uParam0->f_56 = uParam1;
}

void func_149(var uParam0, int iParam1)//Position - 0x720A
{
	uParam0->f_53 = iParam1;
}

void func_150(var uParam0)//Position - 0x7218
{
	float fVar0;
	float fVar1;
	
	switch (func_147(uParam0))
	{
		case 3:
		case 4:
			break;
		
		default:
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
			fVar1 = func_144(uParam0->f_20 == 2, 0.6f, 0.75f);
			if (fVar0 < fVar1)
			{
				func_234(uParam0, 3);
			}
			else
			{
				func_234(uParam0, 4);
			}
			break;
	}
}

int func_151(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x7278
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	vector3 vVar11;
	vector3 vVar14;
	vector3 vVar17;
	float fVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	vector3 vVar25;
	vector3 vVar28;
	int iVar31;
	int iVar32;
	float fVar33;
	float fVar34;
	int iVar35;
	float fVar36;
	int iVar37;
	float fVar38;
	float fVar39;
	float fVar40;
	vector3 vVar41;
	vector3 vVar44;
	vector3 vVar47;
	vector3 vVar50;
	float fVar53;
	float fVar54;
	int iVar55;
	float fVar56;
	vector3 vVar57;
	float fVar60;
	float fVar61;
	
	iVar0 = 75;
	fVar1 = 0.75f;
	fVar2 = 100f;
	MISC::_0xF56DFB7B61BE7276(*(uParam4[0 /*3*/]), *(uParam4[1 /*3*/]), uParam0->f_37, uParam0->f_40, &fVar10);
	vVar11 = { *(uParam4[1 /*3*/]) - *(uParam4[0 /*3*/]) * Vector(fVar10, fVar10, fVar10) };
	vVar14 = { *(uParam4[0 /*3*/]) + vVar11 };
	vVar17 = { vVar14 - uParam0->f_37 };
	fVar20 = func_69(vVar17, uParam0->f_43);
	iVar21 = -1;
	iVar22 = -1;
	iVar23 = 0;
	while (iVar23 < 10)
	{
		if (iVar21 == -1 && (fVar20 - 0.2f) <= uParam1->f_1571[iVar23 + 1])
		{
			iVar21 = iVar23;
		}
		if (iVar22 == -1 && (fVar20 + 0.2f) <= uParam1->f_1571[iVar23 + 1])
		{
			iVar22 = iVar23;
		}
		iVar23++;
	}
	if (iVar21 == -1)
	{
		iVar21 = func_50(fVar20 > 0f, 9, 0);
	}
	if (iVar22 == -1)
	{
		iVar22 = func_50(fVar20 > 0f, 9, 0);
	}
	vVar25 = { uParam0->f_37 };
	iVar24 = 0;
	while (iVar24 <= 3)
	{
		iVar23 = iVar21;
		while (iVar23 <= iVar22)
		{
			iVar31 = 0;
			while (iVar31 < 10)
			{
				iVar32 = uParam1->f_1460[iVar23 /*11*/][iVar31];
				iVar31++;
				if ((uParam3[iVar32 /*12*/])->f_1 >= 0f)
				{
					fVar33 = ((((uParam3[iVar32 /*12*/])->f_1 - (*uParam3)[iVar32 /*12*/]) * IntToFloat((uParam3[iVar32 /*12*/])->f_3)) * 0.03333334f);
					fVar34 = ((fVar33 - uParam1->f_247.f_33) / 0.03333334f);
					iVar35 = SYSTEM::FLOOR(fVar34);
					fVar36 = (fVar34 - SYSTEM::TO_FLOAT(iVar35));
					iVar3 = (iVar24 + iVar35) - 2;
					if (iVar3 < (*uParam4 - 2) && iVar3 >= 0)
					{
						if (iVar24 == 0 && (iVar32 == 72 || iVar32 == 73))
						{
							fVar38 = -1f;
							fVar39 = -1f;
							if (iVar32 == 72)
							{
								iVar37 = func_143(uParam0, uParam4[8 /*3*/], uParam4[9 /*3*/], &vLocal_327, &vLocal_333, &vLocal_336, 0, &fVar38, &fVar39, &vVar28);
							}
							else
							{
								iVar37 = func_143(uParam0, uParam4[8 /*3*/], uParam4[9 /*3*/], &vLocal_315, &vLocal_321, &vLocal_324, 1, &fVar38, &fVar39, &vVar28);
							}
							if (iVar37 != 0)
							{
								fVar40 = func_84(iVar32);
								if (fVar40 < fVar1)
								{
									fVar1 = fVar40;
									iVar0 = iVar32;
									func_142(uParam0, fVar38);
									func_141(uParam0, fVar39);
									func_140(uParam0, iVar37);
									vVar7 = { vVar28 };
								}
							}
						}
						else if (iVar32 != 72 && iVar32 != 73)
						{
							vVar4 = { func_85(uParam0, *(uParam2[iVar32 /*3*/])) };
							vVar41 = { vVar25 + vVar4 };
							vVar44 = { func_122(*(uParam4[iVar3 /*3*/]), *(uParam4[iVar3 + 1 /*3*/]), fVar36) };
							vVar47 = { vVar44 - vVar4 };
							vVar47.z = uParam0->f_37.f_2;
							vVar50 = { vVar41 - vVar44 };
							fVar53 = func_69(vVar50, uParam0->f_40);
							fVar54 = func_69(uParam0->f_40, func_282(&(uParam1->f_247)) - uParam0->f_37);
							iVar55 = 0;
							while (((fVar53 > 0f && (iVar3 - iVar55) > 2) && func_152(uParam0)) && fVar54 > 0f)
							{
								iVar55++;
								vVar44 = { MISC::_0x21C235BC64831E5A(vVar41, *(uParam4[(iVar3 - iVar55) /*3*/]), *(uParam4[((iVar3 - iVar55) - 1) /*3*/]), 1) };
								vVar50 = { vVar41 - vVar44 };
								fVar53 = func_69(vVar50, uParam0->f_40);
							}
							if (MISC::ABSF(fVar53) > 0.3f)
							{
								fVar53 = (fVar53 * (0.3f / MISC::ABSF(fVar53)));
							}
							vVar50 = { vVar50 - uParam0->f_40 * Vector(fVar53, fVar53, fVar53) };
							fVar56 = SYSTEM::VMAG(vVar50);
							if (fVar56 < 0.15f)
							{
								fVar56 = 0f;
							}
							fVar56 = (fVar56 + func_84(iVar32));
							if (fVar56 < fVar1)
							{
								vVar57 = { uParam0->f_37 - vVar44 };
								fVar60 = func_69(vVar50, vVar57);
								if (fVar60 > 0f)
								{
									if (fVar56 > 0.25f)
									{
										fVar61 = (2.5f * (fVar56 - 0.25f));
										fVar56 = (fVar56 + fVar61);
									}
								}
							}
							if (fVar56 < fVar2)
							{
								fVar2 = fVar56;
								vVar7 = { vVar44 };
							}
							if (fVar56 < fVar1)
							{
								if (iVar24 > 0)
								{
								}
								fVar1 = fVar56;
								iVar0 = iVar32;
								*uParam5 = { vVar47 };
								*uParam6 = (iVar55 - iVar24);
								vVar7 = { vVar44 };
							}
						}
					}
				}
			}
			iVar23++;
		}
		*uParam7 = { vVar7 };
		if (fVar1 <= 0.4f)
		{
			return iVar0;
		}
		if (iVar0 != 75)
		{
			return iVar0;
		}
		if (uParam0->f_31 == 4)
		{
			return 75;
		}
		iVar24++;
	}
	return iVar0;
}

int func_152(var uParam0)//Position - 0x7721
{
	if (uParam0->f_31 == 4)
	{
		return 0;
	}
	return 1;
}

int func_153(var uParam0, vector3 vParam1, bool bParam4)//Position - 0x7736
{
	if (!bParam4)
	{
		return 0;
	}
	if (func_75(uParam0) != 75)
	{
		return 0;
	}
	if (SYSTEM::VDIST(uParam0->f_37, vParam1) > 100f)
	{
		return 0;
	}
	if (func_227(&(uParam0->f_4), 32))
	{
		return 0;
	}
	return 1;
}

bool func_154(var uParam0)//Position - 0x7784
{
	return uParam0->f_64 > 0.5f;
}

void func_155(var uParam0)//Position - 0x7796
{
	uParam0->f_64 = 0f;
}

void func_156(var uParam0)//Position - 0x77A3
{
	uParam0->f_64 = (uParam0->f_64 + MISC::GET_FRAME_TIME());
}

void func_157(var uParam0)//Position - 0x77B8
{
	uParam0->f_60 = (uParam0->f_60 + MISC::GET_FRAME_TIME());
}

void func_158(var uParam0)//Position - 0x77CD
{
	uParam0->f_61 = (uParam0->f_61 + MISC::GET_FRAME_TIME());
}

void func_159(var uParam0)//Position - 0x77E2
{
	uParam0->f_61 = 0f;
}

float func_160(var uParam0)//Position - 0x77EF
{
	return uParam0->f_61;
}

void func_161(var uParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x77FB
{
	float fVar0;
	float fVar1;
	
	*bParam2 = 0;
	*bParam3 = 0;
	switch (func_147(&(uParam0->f_4)))
	{
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_247) && func_285(&(uParam1->f_247)) > 0)
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
				fVar1 = func_144(uParam0->f_4.f_20 == 2, 0.6f, 0.75f);
				if (fVar0 < fVar1)
				{
					if (!func_227(&(uParam0->f_4), 2))
					{
						*bParam2 = 1;
						func_80(&(uParam0->f_4), 2);
					}
					func_234(&(uParam0->f_4), 3);
				}
				else
				{
					if (!func_227(&(uParam0->f_4), 2))
					{
						*bParam3 = 1;
						func_80(&(uParam0->f_4), 2);
					}
					func_234(&(uParam0->f_4), 4);
				}
			}
			break;
		
		case 3:
			*bParam2 = 1;
			break;
		
		case 4:
			*bParam3 = 1;
			break;
	}
}

int func_162(var uParam0, var uParam1, bool bParam2)//Position - 0x78CA
{
	if (func_69(uParam1->f_40, uParam0->f_247.f_10) > 0f)
	{
		return 0;
	}
	if (func_69(uParam1->f_40, uParam0->f_1583[1 /*3*/] - uParam1->f_37) > 0f)
	{
		return 0;
	}
	if (func_75(uParam1) != 75)
	{
		return 0;
	}
	if (!bParam2)
	{
		return 0;
	}
	return 1;
}

bool func_163(var uParam0)//Position - 0x792B
{
	return uParam0->f_63 > 3f;
}

int func_164(var uParam0)//Position - 0x7939
{
	return uParam0->f_65;
}

void func_165(var uParam0)//Position - 0x7945
{
	uParam0->f_68 = 0f;
}

int func_166(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, bool bParam9)//Position - 0x7952
{
	if (!func_227(&(uParam1->f_4), 32))
	{
		return 0;
	}
	if (func_227(&(uParam1->f_4), 8))
	{
		return 0;
	}
	if (func_75(uParam1) != 75)
	{
		return 0;
	}
	func_137(uParam0, uParam1, uParam2, iParam3, iParam4, iParam5, vParam6, bParam9);
	func_234(&(uParam1->f_4), 5);
	func_80(&(uParam1->f_4), 8);
	func_216(&(uParam1->f_4), 32);
	return 1;
}

float func_167(var uParam0)//Position - 0x79C0
{
	return uParam0->f_69;
}

float func_168(var uParam0)//Position - 0x79CC
{
	return uParam0->f_68;
}

void func_169(var uParam0)//Position - 0x79D8
{
	uParam0->f_68 = (uParam0->f_68 + MISC::GET_FRAME_TIME());
}

void func_170(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)//Position - 0x79ED
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	uParam1->f_247.f_33 = (uParam1->f_247.f_33 - MISC::GET_FRAME_TIME());
	while (uParam1->f_247.f_33 <= 0f)
	{
		uParam1->f_247.f_33 = (uParam1->f_247.f_33 + 0.03333334f);
		iVar0 = 0;
		while (iVar0 <= 22)
		{
			uParam1->f_1583[iVar0 /*3*/] = { uParam1->f_1583[iVar0 + 1 /*3*/] };
			iVar0++;
		}
		*uParam2 = { uParam1->f_1583[iVar0 /*3*/] };
		func_174(uParam0, uParam3, uParam4, uParam5, uParam6, iParam7);
		iVar1 = func_278(&(uParam1->f_189), uParam2, uParam3, &(uParam1->f_1658), uParam4, uParam5, uParam6, iParam7, 0, 0.03333334f, 0, 0.1f, 0);
		if (iVar1 == 1)
		{
			if (func_227(&(uParam0->f_4), 32) && func_168(uParam0) == 0f)
			{
				func_165(uParam0);
				func_173(uParam0, (SYSTEM::TO_FLOAT(iVar0) * MISC::GET_FRAME_TIME()));
			}
		}
		if (!func_172(*uParam2))
		{
			uParam1->f_1583[iVar0 /*3*/] = { *uParam2 };
		}
		else
		{
			uParam1->f_1583[iVar0 /*3*/] = { func_282(&(uParam1->f_247)) };
		}
		func_171(uParam0, *uParam3, *uParam4, *uParam5, *uParam6, *iParam7);
	}
}

void func_171(var uParam0, vector3 vParam1, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x7B19
{
	uParam0->f_78 = { vParam1 };
	uParam0->f_81 = uParam4;
	uParam0->f_82 = uParam5;
	uParam0->f_83 = uParam6;
	uParam0->f_84 = uParam7;
}

int func_172(vector3 vParam0)//Position - 0x7B43
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_173(var uParam0, float fParam1)//Position - 0x7B6D
{
	uParam0->f_69 = fParam1;
}

void func_174(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x7B7B
{
	*uParam1 = { uParam0->f_78 };
	*uParam2 = uParam0->f_81;
	*uParam3 = uParam0->f_82;
	*uParam4 = uParam0->f_83;
	*uParam5 = uParam0->f_84;
}

void func_175(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)//Position - 0x7BA9
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		iVar1 = func_278(&(uParam1->f_189), uParam2, uParam3, &(uParam1->f_1658), uParam4, uParam5, uParam6, iParam7, 0, 0.03333334f, 0, 0.1f, 0);
		if (iVar1 == 1)
		{
			if (func_227(&(uParam0->f_4), 32) && func_168(uParam0) == 0f)
			{
				func_165(uParam0);
				func_173(uParam0, (SYSTEM::TO_FLOAT(iVar0) * MISC::GET_FRAME_TIME()));
			}
		}
		if (!func_172(*uParam2))
		{
			uParam1->f_1583[iVar0 /*3*/] = { *uParam2 };
		}
		else
		{
			uParam1->f_1583[iVar0 /*3*/] = { func_282(&(uParam1->f_247)) };
		}
		iVar0++;
	}
	func_171(uParam0, *uParam3, *uParam4, *uParam5, *uParam6, *iParam7);
	if (!func_104(uParam0, 32768))
	{
		func_58(uParam0, 32768);
		uParam1->f_247.f_33 = 0.03333334f;
	}
}

bool func_176(var uParam0)//Position - 0x7C8D
{
	return uParam0->f_26;
}

int func_177(var uParam0)//Position - 0x7C99
{
	return uParam0->f_1;
}

void func_178(var uParam0, var uParam1, bool bParam2)//Position - 0x7CA5
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (bParam2)
		{
			if (!PED::IS_PED_INJURED(func_264(uParam0)))
			{
				BRAIN::TASK_LOOK_AT_ENTITY(func_264(uParam0), *uParam1, -1, 6, 2);
			}
		}
		else if (!PED::IS_PED_INJURED(func_264(uParam0)))
		{
			BRAIN::TASK_CLEAR_LOOK_AT(func_264(uParam0));
		}
	}
}

void func_179(var uParam0, int iParam1)//Position - 0x7CF5
{
	uParam0->f_1 = iParam1;
}

void func_180(var uParam0, int iParam1)//Position - 0x7D03
{
	func_181(uParam0, iParam1);
}

void func_181(var uParam0, var uParam1)//Position - 0x7D13
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_182(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x7D24
{
	int iVar0;
	struct<2> Var1;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;
	
	if (!bParam3)
	{
		if (((func_252(uParam0) > func_191(uParam1) && func_75(uParam2) == 75) && uParam0->f_1657 != 1) || (((func_252(uParam0) > func_191(uParam1) && func_75(uParam2) == 75) && uParam0->f_1657 == 1) && CAM::IS_SCREEN_FADED_IN()))
		{
			func_233(uParam2, 74);
			func_214(uParam0, 0);
		}
	}
	else if (func_193(2))
	{
		func_233(uParam2, 74);
		func_214(uParam0, 0);
	}
	if (func_104(uParam2, 4))
	{
		if (func_271(uParam1) == 1)
		{
			if (uParam2->f_1 == 0)
			{
				vVar6 = { uParam0->f_189.f_3[3 /*3*/] + uParam2->f_43 };
				vVar9 = { uParam0->f_189.f_3[3 /*3*/] };
			}
			else
			{
				vVar6 = { uParam0->f_189.f_3[1 /*3*/] + uParam2->f_43 };
				vVar9 = { uParam0->f_189.f_3[1 /*3*/] };
			}
		}
		else if (uParam2->f_1 == 0)
		{
			vVar6 = { uParam0->f_189.f_3[2 /*3*/] - uParam2->f_43 };
			vVar9 = { uParam0->f_189.f_3[2 /*3*/] };
		}
		else
		{
			vVar6 = { uParam0->f_189.f_3[0 /*3*/] - uParam2->f_43 };
			vVar9 = { uParam0->f_189.f_3[0 /*3*/] };
		}
		if (uParam0->f_1657 == 1)
		{
			iVar0 = 2;
		}
		else if (uParam2->f_4.f_20 == 0)
		{
			iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(2, 6);
			iVar0 = func_50(MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.2f, 6, iVar12);
		}
		else if (uParam2->f_4.f_20 == 1)
		{
			iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
			iVar0 = func_50(MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.1f, 6, iVar12);
		}
		else if (uParam2->f_4.f_20 == 2)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		}
		vVar6 = { func_122(vVar9, vVar6, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f)) };
		fVar3 = func_190(uParam2->f_37, vVar6);
		fVar4 = func_190(uParam2->f_37, uParam2->f_37 + uParam2->f_40);
		fVar5 = (fVar3 - fVar4);
		if (bParam3)
		{
			iVar0 = 2;
		}
		Var1 = { uParam0->f_282[iVar0 /*2*/] };
		*uParam2 = fVar5;
		func_229(uParam2, 6);
		if (iVar0 == 1 || iVar0 == 0)
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_195(uParam0->f_1657 == 1, "TENNIS_AMB_SMASH_MASTER", "TENNIS_NPC_SMASH_MASTER"), func_264(uParam2), 0, false, 0);
		}
		else
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_195(uParam0->f_1657 == 1, "TENNIS_AMB_SERVE_MASTER", "TENNIS_NPC_SERVE_MASTER"), func_264(uParam2), 0, false, 0);
		}
		ENTITY::DETACH_ENTITY(uParam0->f_247, 0, true);
		func_183(uParam0, uParam2, &Var1);
		func_276(uParam2, 4);
		return 1;
	}
	return 0;
}

void func_183(var uParam0, var uParam1, var uParam2)//Position - 0x7FDB
{
	float fVar0;
	vector3 vVar1;
	
	fVar0 = *uParam1;
	vVar1 = { func_184(SYSTEM::TO_FLOAT(*uParam2), SYSTEM::TO_FLOAT(uParam2->f_1), fVar0, &(uParam1->f_40), &(uParam1->f_43)) };
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_247))
	{
		if (uParam0->f_1657 != 1 && !func_274(&(uParam0->f_247)))
		{
			func_273(&(uParam0->f_247));
			func_119(&(uParam0->f_247));
		}
		uParam0->f_247.f_10 = { vVar1 };
		func_275(&(uParam0->f_247), ENTITY::GET_ENTITY_COORDS(uParam0->f_247, true));
		uParam0->f_247.f_16 = { func_282(&(uParam0->f_247)) };
		func_118(&(uParam0->f_247), MISC::GET_FRAME_COUNT() + 5);
		func_117(&(uParam0->f_247));
		func_115(&(uParam0->f_247), 1);
		func_114(uParam0->f_247, 1);
	}
	func_286(&(uParam0->f_247), 4);
}

Vector3 func_184(float fParam0, float fParam1, float fParam2, var uParam3, var uParam4)//Position - 0x809C
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { func_189(*uParam3) };
	func_185(&vVar0, fParam2, 0f, 0f, 1f);
	vVar3 = { func_189(*uParam4) };
	func_185(&vVar0, fParam1, vVar3);
	vVar0 = { vVar0 * Vector(fParam0, fParam0, fParam0) };
	return vVar0;
}

void func_185(var uParam0, float fParam1, vector3 vParam2)//Position - 0x80E3
{
	float fVar0;
	float fVar1;
	
	vParam2 = { func_189(vParam2) };
	fVar0 = SYSTEM::COS(fParam1);
	fVar1 = SYSTEM::SIN(fParam1);
	*uParam0 = { func_188(*uParam0, vParam2) * Vector(fVar0, fVar0, fVar0) + func_187(vParam2, *uParam0) * Vector(fVar1, fVar1, fVar1) + func_186(*uParam0, vParam2) };
}

Vector3 func_186(vector3 vParam0, vector3 vParam3)//Position - 0x8139
{
	vector3 vVar0;
	
	vVar0 = { vParam3 * FtoV(func_69(vParam0, vParam3)) };
	return vVar0;
}

Vector3 func_187(vector3 vParam0, vector3 vParam3)//Position - 0x815B
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

Vector3 func_188(vector3 vParam0, vector3 vParam3)//Position - 0x8194
{
	vector3 vVar0;
	
	vVar0 = { vParam0 - func_186(vParam0, vParam3) };
	return vVar0;
}

Vector3 func_189(vector3 vParam0)//Position - 0x81B5
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

float func_190(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5)//Position - 0x81F4
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

int func_191(var uParam0)//Position - 0x820E
{
	return uParam0->f_27;
}

void func_192(int iParam0)//Position - 0x821A
{
	Global_105651 = (Global_105651 || iParam0);
}

bool func_193(int iParam0)//Position - 0x822D
{
	return (Global_105651 && iParam0) != 0;
}

void func_194(var uParam0, var uParam1)//Position - 0x823E
{
	int iVar0;
	
	iVar0 = func_264(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1) && ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(*uParam1, iVar0, PED::GET_PED_BONE_INDEX(iVar0, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
		func_114(*uParam1, 1);
	}
}

char* func_195(bool bParam0, char* sParam1, char* sParam2)//Position - 0x828A
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_196(var uParam0)//Position - 0x82A1
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_59 == 2)
	{
		iVar0 = func_264(uParam0);
		iVar1 = func_45(iVar0);
		if (iVar1 == 145)
		{
			iVar1 = func_197(iVar0);
		}
		iVar2 = PLAYER::PLAYER_PED_ID();
		if (((iVar1 == 0 || iVar1 == 1) || iVar1 == 2) || iVar0 == iVar2)
		{
			uParam0->f_59 = 1;
		}
		else if (PED::IS_PED_MALE(iVar0) && iVar1 != 14)
		{
			uParam0->f_59 = 1;
		}
		else
		{
			uParam0->f_59 = 0;
		}
	}
	return uParam0->f_59 == 1;
}

int func_197(int iParam0)//Position - 0x832A
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 3;
		while (iVar0 <= (161 - 1))
		{
			if (func_328(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_198(var uParam0, var uParam1, int iParam2, var uParam3, bool bParam4)//Position - 0x836A
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_247))
	{
		func_158(uParam0);
		if ((PAD::IS_CONTROL_JUST_PRESSED(0, 223) && !bParam4) || (func_160(uParam0) > 30f && uParam1->f_1657 == 4))
		{
			if ((((func_75(uParam0) == 74 && func_211(&(uParam0->f_73))) && !func_210(&(uParam0->f_73))) && func_209(&(uParam0->f_73)) > (1.1f + 1.25f)) && !func_104(uParam0, 64))
			{
				func_58(uParam0, 64);
				func_128(&iVar0, &iVar1, &iVar1, &iVar1, 1, 1);
				if (PAD::_IS_INPUT_JUST_DISABLED(2))
				{
					iVar0 = (SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(2, 239) * 256f)) - 128);
				}
				func_208(uParam0, iVar0);
			}
			func_233(uParam0, 74);
			if (!func_211(&(uParam0->f_73)))
			{
				func_206(&(uParam0->f_73));
			}
			if (func_210(&(uParam0->f_73)))
			{
				func_206(&(uParam0->f_73));
				func_205(&(uParam0->f_73));
			}
		}
		if (func_104(uParam0, 4))
		{
			if (func_104(uParam0, 64))
			{
				if (func_204(uParam0) > 0.965f)
				{
					*uParam3 = { uParam1->f_282[0 /*2*/] };
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_PLYR_SMASH_MASTER", func_264(uParam0), 0, false, 0);
					PAD::SET_PAD_SHAKE(0, 450, 256);
					if (func_204(uParam0) >= 0.995f && 1)
					{
						func_277(&(uParam1->f_247), 32);
						func_277(&(uParam1->f_247), 64);
					}
				}
				else if (func_204(uParam0) > 0.9f)
				{
					*uParam3 = { uParam1->f_282[1 /*2*/] };
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_PLYR_SMASH_MASTER", func_264(uParam0), 0, false, 0);
					PAD::SET_PAD_SHAKE(0, 250, 256);
				}
				else if (func_204(uParam0) > 0.7f)
				{
					*uParam3 = { uParam1->f_282[2 /*2*/] };
					PAD::SET_PAD_SHAKE(0, 200, 256);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_PLYR_SERVE_MASTER", func_264(uParam0), 0, false, 0);
				}
				else if (func_204(uParam0) > 0.45f)
				{
					*uParam3 = { uParam1->f_282[3 /*2*/] };
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_PLYR_SERVE_MASTER", func_264(uParam0), 0, false, 0);
					PAD::SET_PAD_SHAKE(0, 150, 256);
				}
				else if (func_204(uParam0) > 0.2f)
				{
					*uParam3 = { uParam1->f_282[4 /*2*/] };
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_PLYR_SERVE_MASTER", func_264(uParam0), 0, false, 0);
					PAD::SET_PAD_SHAKE(0, 100, 256);
				}
				else if (func_204(uParam0) >= 0f)
				{
					*uParam3 = { uParam1->f_282[5 /*2*/] };
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_PLYR_SERVE_MASTER", func_264(uParam0), 0, false, 0);
					PAD::SET_PAD_SHAKE(0, 70, 256);
				}
			}
			else
			{
				*uParam3 = { uParam1->f_282[6 /*2*/] };
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_PLYR_SERVE_MASTER", func_264(uParam0), 0, false, 0);
				PAD::SET_PAD_SHAKE(0, 50, 256);
			}
			if (!func_202(uParam0, uParam1, iParam2, func_203(uParam0)))
			{
				*uParam3 = { uParam1->f_282[7 /*2*/] };
			}
			ENTITY::DETACH_ENTITY(uParam1->f_247, 0, true);
			func_183(uParam1, uParam0, uParam3);
			func_199(&(uParam0->f_73));
			func_276(uParam0, 64);
			func_229(uParam0, 0);
			func_56(uParam0);
			func_159(uParam0);
			return 1;
		}
		if (func_160(uParam0) > 30f || (PAD::IS_CONTROL_JUST_PRESSED(0, 223) && !bParam4))
		{
			func_159(uParam0);
		}
	}
	return 0;
}

void func_199(int iParam0)//Position - 0x86CA
{
	func_200(iParam0);
}

void func_200(int iParam0)//Position - 0x86D8
{
	if (func_211(iParam0))
	{
		if (!func_210(iParam0))
		{
			iParam0->f_2 = (func_201(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
			MISC::SET_BIT(iParam0, 2);
		}
	}
}

float func_201(bool bParam0)//Position - 0x8712
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

int func_202(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x876A
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	int iVar24;
	
	vVar1 = { 0f, 0f, 0f };
	fVar20 = 1f;
	vVar16 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_247, true) };
	if (MISC::ABSI(iParam3) > 125)
	{
		fVar21 = 2.5f;
		fVar22 = 0.5f;
		fVar23 = 0.75f;
		iVar24 = 0;
	}
	else
	{
		fVar21 = 0.55f;
		fVar22 = 0f;
		fVar23 = 0f;
		iVar24 = 1;
	}
	vVar13 = { func_189(uParam1->f_1661) };
	fVar19 = ((SYSTEM::TO_FLOAT(iParam3) + 128f) / 256f);
	if (uParam0->f_1 == 0)
	{
		if (iParam2 == 1)
		{
			vVar7 = { uParam1->f_189.f_16[3 /*3*/] - vVar13 * Vector(fVar21, fVar21, fVar21) };
			vVar10 = { uParam1->f_189.f_16[3 /*3*/] + uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f) + vVar13 * Vector(fVar22, fVar22, fVar22) };
			vVar1 = { func_122(vVar7, vVar10, fVar19) };
			if (func_69(uParam0->f_43, vVar1 - vVar16) > 0f)
			{
				fVar20 = -1f;
			}
		}
		else if (iParam2 == 0)
		{
			vVar10 = { uParam1->f_189.f_16[2 /*3*/] + vVar13 * Vector(fVar21, fVar21, fVar21) };
			vVar7 = { uParam1->f_189.f_16[2 /*3*/] - uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f) - vVar13 * Vector(fVar23, fVar23, fVar23) };
			vVar1 = { func_122(vVar7, vVar10, fVar19) };
			if (func_69(uParam0->f_43, vVar1 - vVar16) < 0f)
			{
				fVar20 = -1f;
			}
		}
	}
	else if (iParam2 == 1)
	{
		vVar7 = { uParam1->f_189.f_16[1 /*3*/] + vVar13 * Vector(fVar21, fVar21, fVar21) };
		vVar10 = { uParam1->f_189.f_16[1 /*3*/] - uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f) - vVar13 * Vector(fVar22, fVar22, fVar22) };
		vVar1 = { func_122(vVar7, vVar10, fVar19) };
		if (func_69(uParam0->f_43, vVar1 - vVar16) > 0f)
		{
			fVar20 = -1f;
		}
	}
	else if (iParam2 == 0)
	{
		vVar10 = { uParam1->f_189.f_16[0 /*3*/] - vVar13 * Vector(fVar21, fVar21, fVar21) };
		vVar7 = { uParam1->f_189.f_16[0 /*3*/] + uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f) + vVar13 * Vector(fVar23, fVar23, fVar23) };
		vVar1 = { func_122(vVar7, vVar10, fVar19) };
		if (func_69(uParam0->f_43, vVar1 - vVar16) < 0f)
		{
			fVar20 = -1f;
		}
	}
	vVar1.z = uParam0->f_37.f_2;
	vVar4 = { func_189(vVar1 - vVar16) };
	fVar0 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(uParam0->f_40, uParam0->f_40.f_1, vVar4.x, vVar4.y);
	fVar0 = (fVar0 * fVar20);
	*uParam0 = fVar0;
	if (iParam2 == 0)
	{
		*uParam0 = (*uParam0 * -1f);
	}
	return iVar24;
}

int func_203(var uParam0)//Position - 0x8A08
{
	return uParam0->f_76;
}

float func_204(var uParam0)//Position - 0x8A14
{
	return uParam0->f_60;
}

void func_205(int iParam0)//Position - 0x8A20
{
	if (func_211(iParam0))
	{
		if (func_210(iParam0))
		{
			iParam0->f_1 = (func_201(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_2);
			iParam0->f_2 = 0f;
			MISC::CLEAR_BIT(iParam0, 2);
		}
	}
}

void func_206(int iParam0)//Position - 0x8A5E
{
	func_207(iParam0, 0f);
}

void func_207(int iParam0, float fParam1)//Position - 0x8A6D
{
	iParam0->f_1 = (func_201(MISC::IS_BIT_SET(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_208(var uParam0, int iParam1)//Position - 0x8A9B
{
	uParam0->f_76 = iParam1;
}

float func_209(var uParam0)//Position - 0x8AA9
{
	if (func_211(uParam0))
	{
		if (func_210(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_201(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_210(var uParam0)//Position - 0x8AE8
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

bool func_211(var uParam0)//Position - 0x8AF8
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

void func_212(var uParam0, var uParam1)//Position - 0x8B08
{
	vector3 vVar0;
	float fVar3;
	
	if (uParam0->f_31 != 4)
	{
		if (!func_227(&(uParam0->f_4), 256) && !func_227(&(uParam0->f_4), 16))
		{
			if (func_75(uParam0) == 75)
			{
				if (((PAD::IS_CONTROL_JUST_PRESSED(0, 223) || PAD::IS_CONTROL_JUST_PRESSED(0, 224)) || PAD::IS_CONTROL_JUST_PRESSED(0, 225)) || PAD::IS_CONTROL_JUST_PRESSED(0, 222))
				{
					vVar0 = { func_282(uParam1) - uParam0->f_37 };
					fVar3 = func_69(uParam0->f_43, vVar0);
					if (fVar3 >= 0f)
					{
						func_233(uParam0, 13);
					}
					else
					{
						func_233(uParam0, 1);
					}
					func_149(uParam0, 0);
					func_58(uParam0, 65536);
				}
			}
		}
	}
}

int func_213(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x8BBE
{
	if (!PED::IS_PED_INJURED(func_264(uParam0[iParam1 /*94*/])) && BRAIN::GET_SCRIPT_TASK_STATUS(func_264(uParam0[iParam1 /*94*/]), 242628503) != 7)
	{
		return 0;
	}
	else if ((!PED::IS_PED_INJURED(func_264(uParam0[iParam1 /*94*/])) && ((bParam4 || iParam3 == 4) || iParam3 == 1)) && !func_104(uParam0[iParam1 /*94*/], 8192))
	{
		if (iParam1 == iParam2)
		{
			func_28(uParam0[iParam1 /*94*/], "TennisServeSet", 0f);
		}
		func_260(func_264(uParam0[iParam1 /*94*/]), 1);
		PED::_0x2208438012482A1A(func_264(uParam0[iParam1 /*94*/]), 0, 0);
		func_58(uParam0[iParam1 /*94*/], 8192);
	}
	else if (func_104(uParam0[iParam1 /*94*/], 8192) && iParam1 == iParam2)
	{
		if (!PED::IS_PED_INJURED(func_264(uParam0[iParam1 /*94*/])) && BRAIN::_0x921CE12C489C4C41(func_264(uParam0[iParam1 /*94*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(BRAIN::_0x717E4D1F2048376D(func_264(uParam0[iParam1 /*94*/])), "Intro") && BRAIN::_0x30ED88D5E0C56A37(func_264(uParam0[iParam1 /*94*/])))
			{
				BRAIN::_0xD01015C7316AE176(func_264(uParam0[iParam1 /*94*/]), "running");
			}
		}
	}
	return 1;
}

void func_214(var uParam0, int iParam1)//Position - 0x8CFA
{
	uParam0->f_1672 = iParam1;
}

void func_215(var uParam0)//Position - 0x8D09
{
	uParam0->f_22 = 0;
}

void func_216(var uParam0, int iParam1)//Position - 0x8D16
{
	func_254(&(uParam0->f_25), iParam1);
}

void func_217(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x8D28
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	bool bVar8;
	bool bVar9;
	int iVar10;
	vector3 vVar11;
	char* sVar14;
	
	if ((uParam0->f_31 != 4 && !PED::IS_PED_INJURED(func_264(uParam0))) && !bParam5)
	{
		func_231(uParam1->f_1657, 1);
	}
	if (!bParam5)
	{
		func_276(uParam0, 128);
	}
	func_216(&(uParam0->f_4), 4);
	func_216(&(uParam0->f_4), 2);
	func_233(uParam0, 75);
	if ((uParam0->f_31 == 4 && !bParam5) && uParam1->f_1657 != 1)
	{
		func_234(&(uParam0->f_4), 0);
		func_260(func_264(uParam0), 1);
	}
	switch (iParam2)
	{
		case 0:
			if (uParam0->f_31 == 4)
			{
				if (uParam0->f_1 != 0)
				{
					func_81(&(uParam0->f_4), uParam1->f_189.f_3[2 /*3*/]);
				}
				else
				{
					func_81(&(uParam0->f_4), uParam1->f_189.f_3[0 /*3*/]);
				}
			}
			break;
		
		case 1:
			if (uParam0->f_31 == 4)
			{
				if (uParam0->f_1 != 0)
				{
					func_81(&(uParam0->f_4), uParam1->f_189.f_3[3 /*3*/]);
				}
				else
				{
					func_81(&(uParam0->f_4), uParam1->f_189.f_3[1 /*3*/]);
				}
			}
			break;
	}
	if (!PED::IS_PED_INJURED(uParam0->f_32) && uParam0->f_36 == 75)
	{
		vVar1 = { func_269(&(uParam1->f_189), iParam2, uParam1->f_1661, uParam1->f_1658, 0, uParam0->f_1) };
		if (uParam0->f_31 == 4)
		{
			vVar1 = { vVar1 + uParam0->f_43 * FtoV(func_225(&(uParam0->f_4))) * FtoV(func_144(iParam2 == 1, 1f, -1f)) };
		}
		if ((uParam1->f_1657 != 1 && !bParam5) && !func_223(PLAYER::PLAYER_ID(), 0))
		{
			func_222(uParam1, iParam3, 1);
			ENTITY::SET_ENTITY_COORDS(uParam0->f_32, vVar1, 1, false, 0, 1);
			fVar0 = MISC::GET_HEADING_FROM_VECTOR_2D(-uParam1->f_1658, -uParam1->f_1658.f_1);
			if (uParam0->f_1 == 0)
			{
				fVar0 = (fVar0 + 180f);
			}
			ENTITY::SET_ENTITY_HEADING(uParam0->f_32, fVar0);
		}
		else
		{
			ENTITY::SET_ENTITY_HEADING(uParam0->f_32, ENTITY::GET_ENTITY_HEADING(uParam0->f_32));
			func_58(uParam0, 16384);
			fVar4 = (MISC::GET_HEADING_FROM_VECTOR_2D(uParam0->f_40, uParam0->f_40.f_1) + func_144(bParam6, 180f, 0f));
			vVar5 = { uParam1->f_189.f_29 - ENTITY::GET_ENTITY_COORDS((uParam1[iParam3 /*94*/])->f_32, true) };
			bVar8 = func_69(vVar5, uParam0->f_40) < 0f;
			bVar9 = func_69(vVar5, uParam0->f_43) < 0f;
			iVar10 = 0;
			func_221(uParam0, 0);
			BRAIN::CLEAR_SEQUENCE_TASK(&(uParam0->f_54));
			BRAIN::OPEN_SEQUENCE_TASK(&(uParam0->f_54));
			if (!bParam6 && bParam7)
			{
				func_221(uParam0, func_27(uParam0) + 1);
				iVar10 = MISC::GET_RANDOM_INT_IN_RANGE(800, 1200);
				BRAIN::TASK_PLAY_ANIM(0, func_195(func_196(uParam0), "mini@tennis", "mini@tennis@female"), "idle", 1.5f, -8f, iVar10, 0, 0, 0, 0, 0);
			}
			if (!bParam8)
			{
				BRAIN::TASK_PLAY_ANIM(0, "mini@tennis", "ready_2_idle", 1.5f, -8f, -1, 0, 0, 0, 0, 0);
				func_221(uParam0, func_27(uParam0) + 1);
			}
			if ((bParam6 && !bVar8) || (!bParam6 && bVar8))
			{
				vVar11 = { uParam1->f_189.f_29 + uParam0->f_43 * Vector(7.2f, 7.2f, 7.2f) };
				if (!bVar9 && (!bParam6 && bVar8))
				{
					vVar11 = { uParam1->f_189.f_29 + uParam0->f_43 * Vector(-7.2f, -7.2f, -7.2f) };
				}
				if (func_219(uParam1, uParam0))
				{
					BRAIN::TASK_GO_STRAIGHT_TO_COORD(0, vVar11, 1f, 20000, 1193033728, 1056964608);
				}
				else
				{
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar11, 1f, 20000, 1048576000, 1, 1193033728);
				}
				func_221(uParam0, func_27(uParam0) + 1);
			}
			if (func_218(ENTITY::GET_ENTITY_COORDS(uParam0->f_32, true), vVar1, 0.1f))
			{
				BRAIN::TASK_ACHIEVE_HEADING(0, fVar4, 2500);
				func_221(uParam0, func_27(uParam0) + 1);
			}
			else
			{
				BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1f, 20000, 1048576000, 0, fVar4);
				func_221(uParam0, func_27(uParam0) + 1);
			}
			sVar14 = func_195(func_196(uParam0), "mini@tennis", "mini@tennis@female");
			BRAIN::TASK_PLAY_ANIM(0, sVar14, "idle_2_ready", 8f, -8f, -1, 0, 0, 0, 0, 0);
			func_221(uParam0, func_27(uParam0) + 1);
			BRAIN::CLOSE_SEQUENCE_TASK(uParam0->f_54);
			BRAIN::TASK_PERFORM_SEQUENCE(func_264(uParam0), uParam0->f_54);
			PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(func_264(uParam0), "weapons@tennis@male");
			func_80(&(uParam0->f_4), 4);
		}
	}
	if (bParam4 && ENTITY::DOES_ENTITY_EXIST(func_264(uParam0)))
	{
		PED::_0x2208438012482A1A(func_264(uParam0), 0, 0);
	}
}

int func_218(struct<2> Param0, float fParam2, struct<2> Param3, var uParam5, float fParam6)//Position - 0x91AD
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((Param0 - Param3)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_219(var uParam0, var uParam1)//Position - 0x91E6
{
	if (func_220(&(uParam0->f_189)) != 2)
	{
		return 0;
	}
	if (uParam1->f_1 != 1)
	{
		return 0;
	}
	return 1;
}

int func_220(var uParam0)//Position - 0x920B
{
	return *uParam0;
}

void func_221(var uParam0, int iParam1)//Position - 0x9216
{
	uParam0->f_55 = iParam1;
}

void func_222(var uParam0, int iParam1, bool bParam2)//Position - 0x9224
{
	if (bParam2)
	{
		BRAIN::CLEAR_PED_TASKS_IMMEDIATELY((uParam0[iParam1 /*94*/])->f_32);
	}
	else
	{
		BRAIN::CLEAR_PED_TASKS((uParam0[iParam1 /*94*/])->f_32);
	}
}

bool func_223(int iParam0, int iParam1)//Position - 0x924C
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_224(-1, 0) == 8;
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

int func_224(int iParam0, bool bParam1)//Position - 0x9297
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_39();
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

float func_225(var uParam0)//Position - 0x92D8
{
	return uParam0->f_23;
}

void func_226(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0x92E4
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	bool bVar8;
	bool bVar9;
	vector3 vVar10;
	bool bVar13;
	char* sVar14;
	
	if ((uParam0->f_31 != 4 && !PED::IS_PED_INJURED(func_264(uParam0))) && !bParam7)
	{
		func_231(uParam1->f_1657, 1);
	}
	func_233(uParam0, 75);
	if (func_104(uParam0, 4))
	{
		func_276(uParam0, 4);
	}
	func_216(&(uParam0->f_4), 4);
	if (bParam6)
	{
		func_194(uParam0, &(uParam1->f_247));
	}
	if (uParam0->f_31 == 4)
	{
		func_234(&(uParam0->f_4), 0);
		if (uParam0->f_1 != 0)
		{
			func_81(&(uParam0->f_4), uParam1->f_189.f_3[2 /*3*/] + uParam1->f_189.f_3[3 /*3*/] * Vector(0.5f, 0.5f, 0.5f));
		}
		else
		{
			func_81(&(uParam0->f_4), uParam1->f_189.f_3[0 /*3*/] + uParam1->f_189.f_3[1 /*3*/] * Vector(0.5f, 0.5f, 0.5f));
		}
	}
	if (!PED::IS_PED_INJURED(uParam0->f_32) && uParam0->f_36 == 75)
	{
		vVar1 = { func_269(&(uParam1->f_189), iParam2, uParam1->f_1661, uParam1->f_1658, 1, uParam0->f_1) };
		if ((uParam1->f_1657 != 1 && !bParam7) && !func_223(PLAYER::PLAYER_ID(), 0))
		{
			if (!((!PED::IS_PED_INJURED(func_264(uParam0)) && BRAIN::_0x921CE12C489C4C41(func_264(uParam0))) && MISC::ARE_STRINGS_EQUAL(BRAIN::_0x717E4D1F2048376D(func_264(uParam0)), "running")))
			{
				func_222(uParam1, iParam3, 1);
			}
			ENTITY::SET_ENTITY_COORDS(uParam0->f_32, vVar1, 1, true, 0, 1);
			fVar0 = MISC::GET_HEADING_FROM_VECTOR_2D(-uParam1->f_1658, -uParam1->f_1658.f_1);
			if (uParam0->f_1 == 0)
			{
				fVar0 = (fVar0 + 180f);
			}
			ENTITY::SET_ENTITY_HEADING(uParam0->f_32, fVar0);
		}
		else
		{
			ENTITY::SET_ENTITY_HEADING(uParam0->f_32, ENTITY::GET_ENTITY_HEADING(uParam0->f_32));
			func_58(uParam0, 16384);
			fVar4 = (MISC::GET_HEADING_FROM_VECTOR_2D(uParam0->f_40, uParam0->f_40.f_1) + func_144(bParam8, 180f, 0f));
			vVar5 = { uParam1->f_189.f_29 - ENTITY::GET_ENTITY_COORDS((uParam1[iParam3 /*94*/])->f_32, true) };
			bVar8 = func_69(vVar5, uParam0->f_40) < 0f;
			bVar9 = func_69(vVar5, uParam0->f_43) < 0f;
			func_221(uParam0, 0);
			BRAIN::CLEAR_SEQUENCE_TASK(&(uParam0->f_54));
			BRAIN::OPEN_SEQUENCE_TASK(&(uParam0->f_54));
			if (!bParam9)
			{
				BRAIN::TASK_PLAY_ANIM(0, "mini@tennis", "ready_2_idle", 1.5f, -8f, -1, 0, 0, 0, 0, 0);
				func_221(uParam0, func_27(uParam0) + 1);
			}
			if ((bParam8 && !bVar8) || (!bParam8 && bVar8))
			{
				vVar10 = { uParam1->f_189.f_29 + uParam0->f_43 * Vector(7.2f, 7.2f, 7.2f) };
				if (!bVar9 && (!bParam8 && bVar8))
				{
					vVar10 = { uParam1->f_189.f_29 + uParam0->f_43 * Vector(-7.2f, -7.2f, -7.2f) };
				}
				if (func_219(uParam1, uParam0))
				{
					BRAIN::TASK_GO_STRAIGHT_TO_COORD(0, vVar10, 1f, 20000, 1193033728, 1056964608);
				}
				else
				{
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar10, 1f, 20000, 1048576000, 1, 1193033728);
				}
				func_221(uParam0, func_27(uParam0) + 1);
			}
			BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1f, 20000, 1048576000, 0, fVar4);
			func_221(uParam0, func_27(uParam0) + 1);
			BRAIN::TASK_PLAY_ANIM(0, "mini@tennis", "idle_2_serve", 8f, -8f, -1, 0, 0, 0, 0, 0);
			func_221(uParam0, func_27(uParam0) + 1);
			BRAIN::CLOSE_SEQUENCE_TASK(uParam0->f_54);
			BRAIN::TASK_PERFORM_SEQUENCE(uParam0->f_32, uParam0->f_54);
			PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(uParam0->f_32, "weapons@tennis@male");
			func_80(&(uParam0->f_4), 4);
		}
	}
	if (!bParam7 && uParam1->f_1657 != 1)
	{
		if (!func_227(&(uParam0->f_4), 4))
		{
			bVar13 = (uParam1->f_1657 != 1 && !bParam7);
			sVar14 = func_195(bVar13, "TennisServeSet", "TennisServeSetWithIntro");
			func_28(uParam0, sVar14, 0f);
			bParam5 = bParam5;
		}
		else
		{
			func_260(func_264(uParam0), 1);
		}
	}
	if (bParam4 && ENTITY::DOES_ENTITY_EXIST(func_264(uParam0)))
	{
		PED::_0x2208438012482A1A(func_264(uParam0), 0, 0);
	}
	uParam0->f_37 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_32, false) };
}

bool func_227(var uParam0, int iParam1)//Position - 0x96F2
{
	return func_256(uParam0->f_25, iParam1);
}

bool func_228(var uParam0, int iParam1)//Position - 0x9704
{
	return (uParam0->f_1673 && iParam1) != 0;
}

void func_229(var uParam0, int iParam1)//Position - 0x9716
{
	uParam0->f_34 = iParam1;
}

void func_230(var uParam0, int iParam1)//Position - 0x9724
{
	uParam0->f_1673 = (uParam0->f_1673 - (uParam0->f_1673 && iParam1));
}

void func_231(int iParam0, bool bParam1)//Position - 0x973F
{
	if (iParam0 != 1)
	{
		if (bParam1)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0);
		}
	}
}

void func_232(var uParam0)//Position - 0x979C
{
	func_216(&(uParam0->f_4), 2);
	func_216(&(uParam0->f_4), 32);
	func_216(&(uParam0->f_4), 64);
	func_216(&(uParam0->f_4), 8);
	func_216(&(uParam0->f_4), 128);
	func_216(&(uParam0->f_4), 1);
	func_216(&(uParam0->f_4), 512);
	func_276(uParam0, 16);
	func_276(uParam0, 256);
	func_276(uParam0, 8);
	func_276(uParam0, 128);
	func_276(uParam0, 2);
	func_276(uParam0, 512);
	func_276(uParam0, 4);
}

void func_233(var uParam0, int iParam1)//Position - 0x9821
{
	if (uParam0->f_36 == 75 && iParam1 != 75)
	{
		uParam0->f_36 = iParam1;
		func_276(uParam0, 128);
	}
	else if (uParam0->f_36 != 75 && iParam1 == 75)
	{
		uParam0->f_36 = iParam1;
	}
}

void func_234(var uParam0, int iParam1)//Position - 0x9868
{
	uParam0->f_19 = iParam1;
}

void func_235(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x9876
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	vector3 vVar11;
	float fVar14;
	float fVar15;
	float fVar16;
	
	if (((uParam0->f_31 != 3 && !bParam4) && !PED::IS_PED_INJURED(func_264(uParam0))) && !PED::IS_PED_RAGDOLL(func_264(uParam0)))
	{
		if ((MISC::IS_TENNIS_MODE(func_264(uParam0)) && !func_196(uParam0)) && !func_104(uParam0, 16384))
		{
			PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(func_264(uParam0), "TENNIS_LOCOMOTION_FEMALE");
		}
		func_128(&iVar0, &iVar1, &uVar2, &uVar2, 1, 1);
		fVar3 = MISC::ABSF(SYSTEM::TO_FLOAT(iVar0));
		if ((fVar3 > 0f || MISC::ABSF(SYSTEM::TO_FLOAT(iVar1)) > 0f) && uParam0->f_31 != 4)
		{
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(func_264(uParam0), 2f);
		}
		if ((func_75(uParam0) != 74 && uParam0->f_31 != 4) && fVar3 > 15f)
		{
			func_249(uParam0, (func_250(uParam0) + MISC::GET_FRAME_TIME()));
		}
		else
		{
			func_249(uParam0, 0f);
		}
		if (!func_163(uParam0))
		{
			func_248(uParam0);
		}
		bVar4 = func_247(uParam0, uParam1);
		if (uParam0->f_31 != 4 && !bVar4)
		{
			func_128(&iVar0, &iVar1, &uVar2, &uVar2, 1, 1);
			func_231(uParam1->f_1657, 1);
		}
		else if (!func_104(uParam0, 32))
		{
			func_238(uParam0, &iVar0, &iVar1, uParam1[(1 - iParam3) /*94*/], &(uParam1->f_247));
			if (func_227(&(uParam0->f_4), 4) && func_227(&(uParam0->f_4), 2))
			{
				func_233(uParam0, 75);
			}
		}
		if (uParam1->f_1657 != 1)
		{
			func_237(uParam0, iVar0, iVar1);
		}
		fVar5 = func_69(uParam0->f_40, uParam1->f_247.f_10);
		if (MISC::IS_TENNIS_MODE(func_264(uParam0)) && fVar5 < 0f)
		{
			fVar6 = func_69(uParam0->f_43, func_282(&(uParam1->f_247)) - uParam0->f_37);
			MISC::_0x54F157E0336A3822(func_264(uParam0), "ForcedStopDirection", fVar6);
		}
	}
	else if (uParam0->f_31 != 3)
	{
		if (uParam0->f_31 != 4)
		{
			func_236(&fVar8, &uVar7, &uVar7, &uVar7, 1);
		}
		else
		{
			func_238(uParam0, &iVar9, &iVar10, uParam1[(1 - iParam3) /*94*/], &(uParam1->f_247));
		}
		if (!PED::IS_PED_INJURED(func_264(uParam0)) && BRAIN::_0x921CE12C489C4C41(func_264(uParam0)))
		{
			if (MISC::ARE_STRINGS_EQUAL(BRAIN::_0x717E4D1F2048376D(func_264(uParam0)), "Intro") && BRAIN::_0x30ED88D5E0C56A37(func_264(uParam0)))
			{
				BRAIN::_0xD01015C7316AE176(func_264(uParam0), "running");
			}
			if (uParam0->f_1 == 0 && iParam2 == 1)
			{
				vVar11 = { uParam1->f_189.f_3[1 /*3*/] };
				fVar14 = (4.425f - 1f);
				fVar15 = 1.3f;
			}
			else if (uParam0->f_1 == 0 && iParam2 == 0)
			{
				vVar11 = { uParam1->f_189.f_3[1 /*3*/] };
				fVar14 = 7.783f;
				fVar15 = (4.425f + 0.7f);
			}
			else if (uParam0->f_1 != 0 && iParam2 == 1)
			{
				vVar11 = { uParam1->f_189.f_3[3 /*3*/] };
				fVar14 = (4.425f - 1f);
				fVar15 = 1.3f;
			}
			else if (uParam0->f_1 != 0 && iParam2 == 0)
			{
				vVar11 = { uParam1->f_189.f_3[3 /*3*/] };
				fVar14 = 7.783f;
				fVar15 = (4.425f + 0.7f);
			}
			if ((fVar8 > 0.75f && SYSTEM::VDIST2(uParam0->f_37, vVar11) > (fVar15 * fVar15)) || (fVar8 < 0.25f && SYSTEM::VDIST2(uParam0->f_37, vVar11) < (fVar14 * fVar14)))
			{
				uParam0->f_62 = fVar8;
			}
			else if ((((fVar8 >= 0.25f && fVar8 <= 0.75f) || (fVar8 > 0.75f && SYSTEM::VDIST2(uParam0->f_37, vVar11) < (fVar15 * fVar15))) || (fVar8 < 0.25f && SYSTEM::VDIST2(uParam0->f_37, vVar11) > (fVar14 * fVar14))) || iParam5)
			{
				uParam0->f_62 = 0.5f;
			}
			if (BRAIN::_0xB4F47213DF45A64C(func_264(uParam0), "IdleStarted"))
			{
				fVar16 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
				StringCopy(&(uParam1->f_1670), func_195(fVar16 < 0.33f, "Idle3", func_195(fVar16 < 0.66f, "Idle4", "Idle1")), 8);
			}
			BRAIN::_0xB0A6CFD2C69C1088(func_264(uParam0), &(uParam1->f_1670), 1);
			BRAIN::_0xD5BB4025AE449A4E(func_264(uParam0), "Speed", uParam0->f_62);
		}
	}
	if (((func_75(uParam0) == 75 && ENTITY::DOES_ENTITY_EXIST(uParam1->f_247)) && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam1->f_247)) && SYSTEM::VDIST2(uParam0->f_37, func_282(&(uParam1->f_247))) < (0.88f * 0.88f))
	{
		func_58(uParam0, 256);
		func_277(&(uParam1->f_247), 4);
	}
}

void func_236(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x9D4E
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (bParam4)
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(0, 30);
		fVar1 = PAD::GET_CONTROL_NORMAL(0, 31);
		fVar2 = PAD::GET_CONTROL_NORMAL(0, 1);
		fVar3 = PAD::GET_CONTROL_NORMAL(0, 2);
	}
	else
	{
		fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 30);
		fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 31);
		fVar2 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 1);
		fVar3 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 2);
	}
	*uParam0 = ((fVar0 + 1f) / 2f);
	*uParam1 = ((fVar1 + 1f) / 2f);
	*uParam2 = ((fVar2 + 1f) / 2f);
	*uParam3 = ((fVar3 + 1f) / 2f);
}

void func_237(var uParam0, int iParam1, int iParam2)//Position - 0x9DC6
{
	if ((MISC::GET_RAIN_LEVEL() <= 0f && MISC::GET_SNOW_LEVEL() <= 0f) && func_75(uParam0) == 75)
	{
		if (MISC::ABSF(SYSTEM::TO_FLOAT(iParam1)) >= MISC::ABSF(SYSTEM::TO_FLOAT(iParam2)))
		{
			if (iParam1 > 15)
			{
				if (uParam0->f_35 != 3 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.08f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_264(uParam0), 0, false, 0);
				}
				else if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.1f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_264(uParam0), 0, false, 0);
				}
				uParam0->f_35 = 3;
			}
			else if (iParam1 < -15)
			{
				if (uParam0->f_35 != 2 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.08f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_264(uParam0), 0, false, 0);
				}
				else if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.1f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_264(uParam0), 0, false, 0);
				}
				uParam0->f_35 = 2;
			}
			else
			{
				if (uParam0->f_35 != 4 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.08f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_264(uParam0), 0, false, 0);
				}
				uParam0->f_35 = 4;
			}
		}
		else if (MISC::ABSF(SYSTEM::TO_FLOAT(iParam1)) < MISC::ABSF(SYSTEM::TO_FLOAT(iParam2)))
		{
			if (iParam2 > 15)
			{
				if (uParam0->f_35 != 1 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.08f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_264(uParam0), 0, false, 0);
				}
				else if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.1f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_264(uParam0), 0, false, 0);
				}
				uParam0->f_35 = 1;
			}
			else if (iParam2 < -15)
			{
				if (uParam0->f_35 != 0 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.08f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_264(uParam0), 0, false, 0);
				}
				else if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.1f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_264(uParam0), 0, false, 0);
				}
				uParam0->f_35 = 0;
			}
			else
			{
				if (uParam0->f_35 != 4 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.08f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_264(uParam0), 0, false, 0);
				}
				uParam0->f_35 = 4;
			}
		}
	}
}

void func_238(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)//Position - 0xA02E
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	vector3 vVar19;
	float fVar22;
	vector3 vVar23;
	vector3 vVar26;
	float fVar29;
	float fVar30;
	bool bVar31;
	bool bVar32;
	
	vVar3 = { func_70(&(uParam0->f_4)) };
	if (func_250(uParam3) > 0.5f && !func_227(&(uParam0->f_4), 128))
	{
		func_80(&(uParam0->f_4), 128);
	}
	else if (func_227(&(uParam0->f_4), 128))
	{
		func_216(&(uParam0->f_4), 128);
	}
	switch (func_147(&(uParam0->f_4)))
	{
		case 0:
			*iParam1 = 0;
			*iParam2 = 0;
			if (func_34(&(uParam0->f_4)) == 2)
			{
				func_244(uParam0, uParam3);
			}
			break;
		
		case 5:
			if (func_75(uParam0) == 75)
			{
				vVar6 = { 0.1f, 0.1f, 0.5f };
				if (func_242(uParam0, &vVar3, &vVar6))
				{
					BRAIN::TASK_GO_STRAIGHT_TO_COORD(func_264(uParam0), vVar3, 2f, -1, 1193033728, 1056964608);
					func_241(&(uParam0->f_4), vVar3);
					func_80(&(uParam0->f_4), 4);
					vVar0 = { vVar3 - uParam0->f_37 };
					vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
					*iParam1 = SYSTEM::ROUND((vVar0.x * 128f));
					*iParam2 = SYSTEM::ROUND((vVar0.y * 128f));
				}
				else if ((ENTITY::IS_ENTITY_AT_COORD(uParam0->f_32, func_70(&(uParam0->f_4)), vVar6, false, true, 0) || BRAIN::GET_SCRIPT_TASK_STATUS(func_264(uParam0), 2106541073) == 7) && !func_227(&(uParam0->f_4), 256))
				{
					func_234(&(uParam0->f_4), 0);
					func_216(&(uParam0->f_4), 4);
				}
				else if (uParam0->f_4.f_20 == 0 && !func_227(&(uParam0->f_4), 256))
				{
					func_234(&(uParam0->f_4), 0);
					func_216(&(uParam0->f_4), 4);
				}
				if (func_34(&(uParam0->f_4)) == 2)
				{
					func_244(uParam0, uParam3);
				}
			}
			break;
		
		case 6:
			if (func_240(&(uParam0->f_4)) <= 0f)
			{
				func_216(&(uParam0->f_4), 4);
				func_234(&(uParam0->f_4), 1);
			}
			func_239(&(uParam0->f_4));
			break;
		
		case 1:
			if (func_75(uParam0) == 75)
			{
				MISC::_0xF56DFB7B61BE7276(func_282(uParam4), func_282(uParam4) + uParam4->f_10, uParam0->f_37, uParam0->f_40, &fVar9);
				vVar19 = { func_282(uParam4) - func_282(uParam4) + uParam4->f_10 * Vector(fVar9, fVar9, fVar9) };
				vVar16 = { func_282(uParam4) + vVar19 };
				vVar10 = { vVar3 - uParam0->f_37 };
				fVar22 = func_69(vVar10, uParam0->f_40);
				if (!func_227(&(uParam0->f_4), 4))
				{
					if (func_52(uParam3) != 2)
					{
						if (fVar22 < 0f)
						{
							vVar23 = { uParam0->f_37 - vVar16 };
							vVar26 = { vVar16 + vVar23 * Vector(0.15f, 0.15f, 0.15f) };
							func_81(&(uParam0->f_4), vVar26);
							func_241(&(uParam0->f_4), vVar26);
							fVar22 = 0f;
						}
					}
				}
				if (func_52(uParam3) != 2)
				{
					vVar13 = { vVar16 - uParam0->f_37 };
					fVar29 = func_69(vVar10, uParam0->f_43);
					fVar30 = func_69(vVar13, uParam0->f_43);
					bVar31 = fVar29 > 0f;
					bVar32 = fVar30 > 0f;
					if ((SYSTEM::VDIST2(uParam0->f_37, vVar3) < 50f && bVar31 != bVar32) && fVar22 < 0f)
					{
						BRAIN::CLEAR_PED_TASKS(func_264(uParam0));
						func_80(&(uParam0->f_4), 4);
					}
				}
				if (((!PED::IS_PED_INJURED(func_264(uParam0)) && !SYSTEM::VDIST2(uParam0->f_37, vVar3) <= (0f * 0f)) && !func_227(&(uParam0->f_4), 4)) && !func_104(uParam0, 1024))
				{
					BRAIN::TASK_GO_STRAIGHT_TO_COORD(uParam0->f_32, func_70(&(uParam0->f_4)), 2f, -1, 1193033728, 1056964608);
					vVar3 = { func_70(&(uParam0->f_4)) };
					func_241(&(uParam0->f_4), vVar3);
					func_80(&(uParam0->f_4), 4);
					vVar0 = { func_70(&(uParam0->f_4)) - uParam0->f_37 };
					vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
					*iParam1 = SYSTEM::ROUND((vVar0.x * 128f));
					*iParam2 = SYSTEM::ROUND((vVar0.y * 128f));
				}
				else if (SYSTEM::VDIST2(uParam0->f_37, vVar3) <= (0f * 0f) || BRAIN::GET_SCRIPT_TASK_STATUS(func_264(uParam0), 2106541073) == 7)
				{
					func_234(&(uParam0->f_4), 2);
					func_216(&(uParam0->f_4), 4);
				}
			}
			break;
		
		case 2:
			*iParam1 = 0;
			*iParam2 = 0;
			break;
	}
}

void func_239(var uParam0)//Position - 0xA4A1
{
	uParam0->f_24 = (uParam0->f_24 - MISC::GET_FRAME_TIME());
}

float func_240(var uParam0)//Position - 0xA4B6
{
	return uParam0->f_24;
}

void func_241(var uParam0, vector3 vParam1)//Position - 0xA4C2
{
	uParam0->f_3 = { vParam1 };
}

int func_242(var uParam0, var uParam1, var uParam2)//Position - 0xA4D4
{
	if (func_104(uParam0, 1024))
	{
		return 0;
	}
	if (func_227(&(uParam0->f_4), 256))
	{
		return 0;
	}
	if (func_227(&(uParam0->f_4), 4))
	{
		return 0;
	}
	if (func_227(&(uParam0->f_4), 16))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(func_264(uParam0)))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_32, *uParam1, *uParam2, false, true, 0))
	{
		return 0;
	}
	if (!func_243(&(uParam0->f_4)))
	{
		return 0;
	}
	return 1;
}

int func_243(var uParam0)//Position - 0xA55B
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST(*uParam0, uParam0->f_3);
	if (fVar0 > 0.1f)
	{
		return 1;
	}
	return 0;
}

void func_244(var uParam0, var uParam1)//Position - 0xA586
{
	int iVar0;
	
	if (MISC::GET_GAME_TIMER() > func_246(&(uParam0->f_4)))
	{
		iVar0 = func_52(uParam1);
		if (iVar0 == 3 || iVar0 == 4)
		{
			func_81(&(uParam0->f_4), uParam0->f_4.f_6[0 /*3*/]);
			func_234(&(uParam0->f_4), 5);
			func_216(&(uParam0->f_4), 4);
		}
		func_245(&(uParam0->f_4), MISC::GET_GAME_TIMER() + 500);
	}
}

void func_245(var uParam0, var uParam1)//Position - 0xA5EA
{
	uParam0->f_26 = uParam1;
}

int func_246(var uParam0)//Position - 0xA5F8
{
	return uParam0->f_26;
}

int func_247(var uParam0, var uParam1)//Position - 0xA604
{
	float fVar0;
	
	if (uParam0->f_31 == 4)
	{
		return 0;
	}
	if (!func_104(uParam0, 512))
	{
		return 0;
	}
	if (func_104(uParam0, 1024))
	{
		return 0;
	}
	if (!func_104(uParam0, 16))
	{
		return 0;
	}
	if (SYSTEM::VDIST2(func_70(&(uParam0->f_4)) + Vector(1f, 0f, 0f), uParam0->f_37) > (4f * 4f))
	{
		return 0;
	}
	fVar0 = func_69(uParam0->f_40, func_282(&(uParam1->f_247)) - uParam0->f_37);
	if (fVar0 < 0f)
	{
		return 0;
	}
	return 1;
}

void func_248(var uParam0)//Position - 0xA691
{
	uParam0->f_63 = (uParam0->f_63 + MISC::GET_FRAME_TIME());
}

void func_249(var uParam0, float fParam1)//Position - 0xA6A6
{
	uParam0->f_72 = fParam1;
}

float func_250(var uParam0)//Position - 0xA6B4
{
	return uParam0->f_72;
}

int func_251(var uParam0, int iParam1, int iParam2)//Position - 0xA6C0
{
	int iVar0;
	
	iVar0 = 0;
	if (func_104(uParam0[iParam1 /*94*/], 1024))
	{
		iVar0 = 5000;
		if (func_75(uParam0[iParam1 /*94*/]) == 72 || func_75(uParam0[iParam1 /*94*/]) == 73)
		{
			iVar0 = 2500;
		}
	}
	if (func_104(uParam0[iParam2 /*94*/], 1024))
	{
		iVar0 = 5000;
		if (func_75(uParam0[iParam2 /*94*/]) == 72 || func_75(uParam0[iParam2 /*94*/]) == 73)
		{
			iVar0 = 2500;
		}
	}
	return iVar0;
}

int func_252(var uParam0)//Position - 0xA747
{
	return uParam0->f_1672;
}

int func_253(var uParam0)//Position - 0xA754
{
	return uParam0->f_77;
}

void func_254(var uParam0, int iParam1)//Position - 0xA760
{
	func_255(uParam0, iParam1);
}

void func_255(var uParam0, var uParam1)//Position - 0xA770
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

bool func_256(var uParam0, int iParam1)//Position - 0xA785
{
	return (uParam0 && iParam1) != 0;
}

void func_257(var uParam0)//Position - 0xA794
{
	uParam0->f_1 = 0;
}

void func_258(var uParam0)//Position - 0xA7A1
{
	func_259(&((uParam0[0 /*94*/])->f_32), 1862763509);
	func_259(&((uParam0[1 /*94*/])->f_32), 1862763509);
}

void func_259(var uParam0, int iParam1)//Position - 0xA7C9
{
	PED::SET_PED_CAN_BE_TARGETTED(*uParam0, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 20, true);
	PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(*uParam0, 16);
	if (iParam1 != -86095805)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iParam1);
	}
}

void func_260(int iParam0, int iParam1)//Position - 0xA7FF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_45(iParam0);
		if (iVar0 == 145)
		{
			iVar0 = func_197(iParam0);
		}
		iVar2 = PLAYER::PLAYER_PED_ID();
		if (((iVar0 == 0 || iVar0 == 1) || iVar0 == 2) || iParam0 == iVar2)
		{
			iVar1 = 0;
		}
		else if (PED::IS_PED_MALE(iParam0) && iVar0 != 14)
		{
			iVar1 = 0;
		}
		else
		{
			iVar1 = 1;
		}
		MISC::ENABLE_TENNIS_MODE(iParam0, iParam1, iVar1);
	}
}

void func_261(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xA88B
{
	if (!PED::IS_PED_INJURED(func_264(uParam0[iParam1 /*94*/])) && !PED::IS_PED_INJURED(func_264(uParam0[iParam2 /*94*/])))
	{
		if (!bParam3)
		{
			if (!bParam4)
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY((uParam0[iParam1 /*94*/])->f_33, func_264(uParam0[iParam1 /*94*/]), PED::GET_PED_BONE_INDEX(func_264(uParam0[iParam1 /*94*/]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			ENTITY::ATTACH_ENTITY_TO_ENTITY((uParam0[iParam2 /*94*/])->f_33, func_264(uParam0[iParam2 /*94*/]), PED::GET_PED_BONE_INDEX(func_264(uParam0[iParam2 /*94*/]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		}
		else
		{
			if (!bParam4)
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY((uParam0[iParam1 /*94*/])->f_33, func_264(uParam0[iParam1 /*94*/]), PED::GET_PED_BONE_INDEX(func_264(uParam0[iParam1 /*94*/]), 28422), vLocal_309, vLocal_312, 0, 0, 0, 0, 2, 1);
			}
			ENTITY::ATTACH_ENTITY_TO_ENTITY((uParam0[iParam2 /*94*/])->f_33, func_264(uParam0[iParam2 /*94*/]), PED::GET_PED_BONE_INDEX(func_264(uParam0[iParam2 /*94*/]), 28422), vLocal_309, vLocal_312, 0, 0, 0, 0, 2, 1);
		}
	}
}

void func_262(var uParam0, int iParam1)//Position - 0xA9A2
{
	*uParam0 = iParam1;
}

void func_263(var uParam0, int iParam1)//Position - 0xA9AF
{
	uParam0->f_29 = iParam1;
}

int func_264(var uParam0)//Position - 0xA9BD
{
	return uParam0->f_32;
}

void func_265(var uParam0, int iParam1)//Position - 0xA9C9
{
	uParam0->f_32 = iParam1;
}

void func_266(var uParam0, int iParam1)//Position - 0xA9D7
{
	vector3 vVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_247))
	{
		if (iParam1 || !ENTITY::IS_ENTITY_VISIBLE(uParam0->f_247))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_247));
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_247));
		}
	}
	vVar0 = { uParam0->f_189.f_29 };
	uParam0->f_247 = OBJECT::CREATE_OBJECT(joaat("prop_tennis_ball"), vVar0, false, false, false);
	OBJECT::_0xB2D0BDE54F0E8E5A(uParam0->f_247, true);
	ENTITY::SET_ENTITY_RECORDS_COLLISIONS(uParam0->f_247, 1);
	func_114(uParam0->f_247, 0);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_247, false);
	func_275(&(uParam0->f_247), uParam0->f_189.f_29);
	if (func_274(&(uParam0->f_247)))
	{
		func_273(&(uParam0->f_247));
	}
}

int func_267(var uParam0)//Position - 0xAA78
{
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Tennis", false, -1))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\TENNIS_VER2_A", false, -1))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_tennis_ball")))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_1668))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (uParam0->f_1657 == 1 && !STREAMING::HAS_MODEL_LOADED(uParam0->f_1669))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_tennis_rack_01b")))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("mini@tennis"))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (uParam0->f_1657 == 1)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED("mini@tennis@female"))
		{
			if (uParam0->f_1657 != 1)
			{
			}
			return 0;
		}
	}
	if (uParam0->f_1657 != 1)
	{
		if (uParam0->f_1657 != 1 && !STREAMING::HAS_MODEL_LOADED(joaat("prop_vb_34_tencrt_lighting")))
		{
			return 0;
		}
		if (uParam0->f_1657 != 1 && !STREAMING::HAS_ANIM_DICT_LOADED("mini@triathlon"))
		{
		}
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("weapons@tennis@male"))
	{
		return 0;
	}
	return 1;
}

void func_268(var uParam0, int iParam1)//Position - 0xABB1
{
	if (iParam1 == 21 || func_306(uParam0) == 21)
	{
	}
	else if (func_306(uParam0) != iParam1)
	{
		uParam0->f_5 = func_306(uParam0);
		uParam0->f_4 = iParam1;
	}
}

Vector3 func_269(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, bool bParam8, int iParam9)//Position - 0xABF1
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	int iVar8;
	
	iVar8 = iParam9;
	if ((bParam8 && iParam1 == 1) && iVar8 == 0)
	{
		fVar6 = 0.75f;
		fVar7 = -0.025f;
		vVar3 = { uParam0->f_3[0 /*3*/] };
	}
	else if ((bParam8 && iParam1 == 0) && iVar8 == 0)
	{
		fVar6 = 0.25f;
		fVar7 = -0.025f;
		vVar3 = { uParam0->f_3[0 /*3*/] };
	}
	else if ((bParam8 && iParam1 == 1) && iVar8 == 1)
	{
		fVar6 = 0.25f;
		fVar7 = 0.025f;
		vVar3 = { uParam0->f_3[3 /*3*/] };
	}
	else if ((bParam8 && iParam1 == 0) && iVar8 == 1)
	{
		fVar6 = 0.75f;
		fVar7 = 0.025f;
		vVar3 = { uParam0->f_3[3 /*3*/] };
	}
	else if ((!bParam8 && iParam1 == 1) && iVar8 == 0)
	{
		fVar6 = 0.75f;
		fVar7 = 0f;
		vVar3 = { uParam0->f_3[0 /*3*/] };
	}
	else if ((!bParam8 && iParam1 == 0) && iVar8 == 0)
	{
		fVar6 = 0.25f;
		fVar7 = 0f;
		vVar3 = { uParam0->f_3[0 /*3*/] };
	}
	else if ((!bParam8 && iParam1 == 1) && iVar8 == 1)
	{
		fVar6 = 0.25f;
		fVar7 = 0f;
		vVar3 = { uParam0->f_3[3 /*3*/] };
	}
	else if ((!bParam8 && iParam1 == 0) && iVar8 == 1)
	{
		fVar6 = 0.75f;
		fVar7 = 0f;
		vVar3 = { uParam0->f_3[3 /*3*/] };
	}
	vVar0 = { vVar3 + vParam2 * Vector(fVar6, fVar6, fVar6) + vParam5 * Vector(fVar7, fVar7, fVar7) };
	return vVar0;
}

int func_270(var uParam0)//Position - 0xADB7
{
	return *uParam0;
}

int func_271(var uParam0)//Position - 0xADC2
{
	return uParam0->f_3;
}

void func_272(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0xADCE
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_270(uParam1);
	iVar1 = (1 - iVar0);
	if (!PED::IS_PED_INJURED(func_264(uParam0[iVar0 /*94*/])) && BRAIN::GET_SCRIPT_TASK_STATUS(func_264(uParam0[iVar0 /*94*/]), 242628503) == 1)
	{
		*uParam2 = BRAIN::GET_SEQUENCE_PROGRESS(func_264(uParam0[iVar0 /*94*/]));
	}
	if (!PED::IS_PED_INJURED(func_264(uParam0[iVar1 /*94*/])) && BRAIN::GET_SCRIPT_TASK_STATUS(func_264(uParam0[iVar1 /*94*/]), 242628503) == 1)
	{
		*uParam3 = BRAIN::GET_SEQUENCE_PROGRESS(func_264(uParam0[iVar1 /*94*/]));
	}
	if (func_104(uParam0[iVar0 /*94*/], 16384) && *uParam2 > 0)
	{
		func_276(uParam0[iVar0 /*94*/], 16384);
		func_260(func_264(uParam0[iVar0 /*94*/]), 0);
		PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(func_264(uParam0[iVar0 /*94*/]), "weapons@tennis@male");
	}
	if (func_104(uParam0[iVar1 /*94*/], 16384) && *uParam3 > 0)
	{
		func_276(uParam0[iVar1 /*94*/], 16384);
		func_260(func_264(uParam0[iVar1 /*94*/]), 0);
		PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(func_264(uParam0[iVar1 /*94*/]), "weapons@tennis@male");
	}
}

void func_273(var uParam0)//Position - 0xAEEE
{
	if (func_274(uParam0))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0->f_23, 1);
		func_286(uParam0, 1);
	}
}

bool func_274(var uParam0)//Position - 0xAF0F
{
	return GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_23);
}

void func_275(var uParam0, vector3 vParam1)//Position - 0xAF1F
{
	uParam0->f_7 = { vParam1 };
}

void func_276(var uParam0, int iParam1)//Position - 0xAF31
{
	func_254(&(uParam0->f_2), iParam1);
}

void func_277(var uParam0, int iParam1)//Position - 0xAF43
{
	func_180(&(uParam0->f_24), iParam1);
}

int func_278(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, bool bParam8, float fParam9, bool bParam10, float fParam11, bool bParam12)//Position - 0xAF55
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	float fVar24;
	vector3 vVar25;
	vector3 vVar28;
	vector3 vVar31;
	float fVar34;
	vector3 vVar35;
	
	vVar0 = { 0f, 0f, 1f };
	fVar3 = func_144(fParam9 == -1f, MISC::GET_FRAME_TIME(), fParam9);
	iVar4 = 0;
	fVar5 = (fVar3 / 0.03333334f);
	vVar0 = { vVar0 * Vector(fVar5, fVar5, fVar5) };
	if (bParam10)
	{
		fVar3 = (fVar3 + (fVar3 * 0.75f));
		vVar0 = { vVar0 + vVar0 * Vector(0.75f, 0.75f, 0.75f) };
	}
	if ((*uParam5 == 1 && *uParam4 > 0.455f) && *uParam6 < 0.1f)
	{
		vVar0 = { vVar0 * Vector(-1f, -1f, -1f) };
		*uParam6 = (*uParam6 + fVar3);
		*uParam2 = { *uParam2 + vVar0 };
	}
	else if (*uParam5 == 2)
	{
		if (*uParam4 > 0.05f && *iParam7 < 1)
		{
			vVar0 = { *uParam2 * Vector(fVar5, fVar5, fVar5) * Vector(0.015f, 0.015f, 0.015f) };
			vVar0.z = 0f;
			*uParam2 = { *uParam2 + vVar0 };
		}
		else if (*iParam7 >= 1)
		{
			vVar0 = { *uParam2 * Vector(fVar5, fVar5, fVar5) * Vector(-0.1f, -0.1f, -0.1f) };
			*uParam2 = { *uParam2 + vVar0 };
			*uParam5 = 0;
		}
	}
	*uParam4 = (*uParam4 + fVar3);
	vVar6 = { *uParam3 / FtoV(SYSTEM::VMAG(*uParam3)) };
	GRAPHICS::_0x7FDFADE676AA3CB0(uParam0->f_29 + Vector(1f, 0f, 0f), uParam0->f_29 + Vector(1f, 0f, 0f) + vVar6, 0, 0, 255, 255);
	GRAPHICS::_0x7FDFADE676AA3CB0(uParam0->f_29 + Vector(1f, 0f, 0f), uParam0->f_29 + Vector(2f, 0f, 0f), 0, 255, 0, 255);
	vVar9 = { *uParam1 + *uParam2 * Vector(fVar3, fVar3, fVar3) };
	iVar4 = func_281(uParam0, uParam1, &vVar9, uParam3, &vVar15, &vVar12, fParam11);
	if (iVar4 == 2)
	{
		if (bParam8)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "TENNIS_NET_BALL_MEDIUM_MASTER", *uParam1, 0, 0, 0, 1);
			vVar18 = { *uParam1 + *uParam2 };
			PHYSICS::APPLY_IMPULSE_TO_CLOTH(*uParam1, vVar18, 2f);
		}
		vVar21 = { *uParam3 / FtoV(SYSTEM::VMAG(*uParam3)) };
		fVar24 = func_69(vVar21, *uParam2);
		vVar25 = { vVar21 * Vector(fVar24, fVar24, fVar24) };
		*uParam2 = { *uParam2 - vVar25 * Vector(1.4f, 1.4f, 1.4f) };
		uParam2->f_2 = (uParam2->f_2 * 0.4f);
	}
	else if (iVar4 == 3 && !bParam12)
	{
		if (bParam8)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "TENNIS_NET_BALL_SKIM_MASTER", *uParam1, 0, 0, 0, 1);
			vVar28 = { *uParam1 + *uParam2 };
			PHYSICS::APPLY_IMPULSE_TO_CLOTH(*uParam1, vVar28, 2f);
		}
		*uParam1 = { vVar15 };
		*uParam2 = { *uParam2 - vVar12 * FtoV(func_69(vVar12, *uParam2)) * Vector(1.4f, 1.4f, 1.4f) };
	}
	vVar31 = { *uParam1 };
	*uParam1 = { *uParam1 + *uParam2 * Vector(fVar3, fVar3, fVar3) };
	if (uParam1->f_2 < uParam0->f_29.f_2)
	{
		MISC::_0xF56DFB7B61BE7276(vVar31, *uParam1, uParam0->f_29, 0f, 0f, 1f, &fVar34);
		vVar35 = { *uParam2 * Vector(fVar3, fVar3, fVar3) * Vector(fVar34, fVar34, fVar34) };
		*uParam1 = { vVar31 + vVar35 };
		uParam1->f_2 = (uParam1->f_2 + 0.05f);
		*uParam2 = { func_280(*uParam2) };
		*iParam7++;
		iVar4 = 1;
		if (bParam8 && *iParam7 == 1)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "TENNIS_CLS_BALL_HARD_MASTER", *uParam1, 0, 0, 0, 1);
		}
		else if ((bParam8 && *iParam7 > 1) && *iParam7 < 4)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "TENNIS_CLS_BALL_MASTER", *uParam1, 0, 0, 0, 1);
		}
	}
	*uParam2 = { *uParam2 + func_279(*uParam2, fVar3) };
	GRAPHICS::DRAW_DEBUG_TEXT("ScriptedMotion", *uParam1, 0, 0, 255, 255);
	return iVar4;
}

Vector3 func_279(vector3 vParam0, float fParam3)//Position - 0xB2CF
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	
	vVar0 = { 0f, 0f, -9.8f };
	fVar3 = SYSTEM::VMAG(vParam0);
	vVar4 = { -vParam0 * FtoV((fVar3 * 0.065f)) };
	vVar4 = { vVar4 + vVar0 };
	vVar4 = { vVar4 * Vector(fParam3, fParam3, fParam3) };
	return vVar4;
}

Vector3 func_280(vector3 vParam0)//Position - 0xB31C
{
	vParam0 = { vParam0 * Vector(1f, 1f, 1f) };
	vParam0.z = -vParam0.z;
	if (vParam0.z < 0.01f)
	{
		vParam0.z = 0f;
	}
	return vParam0;
}

int func_281(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6)//Position - 0xB34E
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;
	float fVar9;
	vector3 vVar10;
	float fVar13;
	
	MISC::_0xF56DFB7B61BE7276(*uParam1, *uParam2, uParam0->f_29, *uParam3, &fVar0);
	if (fVar0 >= 0f && fVar0 <= 1f)
	{
		vVar1 = { *uParam1 + *uParam2 - *uParam1 * Vector(fVar0, fVar0, fVar0) };
		fVar7 = MISC::_0x7F8F6405F4777AF6(vVar1, uParam0->f_39[0 /*3*/], uParam0->f_39[1 /*3*/], 0);
		fVar8 = MISC::_0x7F8F6405F4777AF6(vVar1, uParam0->f_39[1 /*3*/], uParam0->f_39[2 /*3*/], 0);
		if (fVar7 > 0f && fVar7 < 1f)
		{
			vVar4 = { uParam0->f_39[0 /*3*/] + uParam0->f_39[1 /*3*/] - uParam0->f_39[0 /*3*/] * Vector(fVar7, fVar7, fVar7) };
		}
		else if ((fVar8 > 0f && fVar8 < 1f) && fVar7 > 0f)
		{
			vVar4 = { uParam0->f_39[1 /*3*/] + uParam0->f_39[2 /*3*/] - uParam0->f_39[1 /*3*/] * Vector(fVar8, fVar8, fVar8) };
		}
		fVar9 = (vVar1.z - vVar4.z);
		if (fVar9 <= func_12((0.025f - fParam6), -1f, 0f))
		{
			return 2;
		}
		else if (fVar9 > 0f && fVar9 <= (0.025f - fParam6))
		{
			vVar10 = { *uParam3 / FtoV(SYSTEM::VMAG(*uParam3)) };
			if (func_69(*uParam2 - *uParam1, vVar10) > 0f)
			{
				vVar10 = { vVar10 * Vector(-1f, -1f, -1f) };
			}
			fVar13 = SYSTEM::SQRT(((0.025f * 0.025f) - (fVar9 * fVar9)));
			*uParam4 = { vVar1 + vVar10 * Vector(fVar13, fVar13, fVar13) };
			*uParam5 = { *uParam4 - vVar4 };
			*uParam5 = { *uParam5 / FtoV(SYSTEM::VMAG(*uParam5)) };
			return 3;
		}
	}
	return 0;
}

Vector3 func_282(var uParam0)//Position - 0xB501
{
	return uParam0->f_7;
}

int func_283(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0xB50F
{
	if (iParam3 < 8)
	{
		return 0;
	}
	if (func_228(uParam0, 1))
	{
		return 0;
	}
	if (iParam1 >= 2)
	{
		return 0;
	}
	if (func_256(uParam2, 4194304))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_247))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_247))
	{
		return 0;
	}
	if (!func_284(&(uParam0->f_247), &(uParam0->f_189), &(uParam0->f_1658), &(uParam0->f_1661)))
	{
		if (!func_287(&(uParam0->f_247), 16))
		{
			func_277(&(uParam0->f_247), 16);
		}
		return 0;
	}
	if (func_287(&(uParam0->f_247), 2))
	{
		return 0;
	}
	if (func_287(&(uParam0->f_247), 4))
	{
		return 0;
	}
	return 1;
}

bool func_284(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0xB5C1
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	
	vVar0 = { uParam1->f_3[0 /*3*/] + *uParam3 * Vector(0.5f, 0.5f, 0.5f) };
	vVar3 = { uParam1->f_3[3 /*3*/] + *uParam3 * Vector(0.5f, 0.5f, 0.5f) };
	vVar6 = { *uParam2 * Vector(0.191f, 0.191f, 0.191f) };
	fVar9 = (uParam1->f_1 * 1.8f);
	vVar0 = { vVar0 - vVar6 };
	vVar3 = { vVar3 + vVar6 };
	return func_76(func_282(uParam0), vVar0, vVar3, fVar9);
}

int func_285(var uParam0)//Position - 0xB644
{
	return uParam0->f_1;
}

void func_286(var uParam0, int iParam1)//Position - 0xB650
{
	func_254(&(uParam0->f_24), iParam1);
}

bool func_287(var uParam0, int iParam1)//Position - 0xB662
{
	return func_256(uParam0->f_24, iParam1);
}

void func_288(var uParam0)//Position - 0xB674
{
	uParam0->f_1667 = !uParam0->f_1667;
}

void func_289(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)//Position - 0xB687
{
	bool bVar0;
	
	PAD::_DISABLE_INPUT_GROUP(0);
	if (iParam1 >= 12 && iParam1 < 14)
	{
		func_300(&(uParam0->f_247));
	}
	if (uParam0->f_1657 != 1)
	{
		func_291();
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
		}
	}
	func_290(&(uParam0->f_247), func_282(&(uParam0->f_247)));
	if (!func_228(uParam0, 1))
	{
		bVar0 = !PED::IS_PED_INJURED(func_264(uParam0[iParam3 /*94*/]));
		if (((bVar0 && !bParam5) && !func_227(&((uParam0[iParam3 /*94*/])->f_4), 256)) || ((bVar0 && func_104(uParam0[iParam3 /*94*/], 8192)) && uParam0->f_1657 == 1))
		{
			(uParam0[iParam3 /*94*/])->f_37 = { ENTITY::GET_ENTITY_COORDS(func_264(uParam0[iParam3 /*94*/]), true) };
			func_21(iParam1, uParam0[iParam3 /*94*/], uParam2, func_104(uParam0[iParam3 /*94*/], 8192));
		}
		bVar0 = (!PED::IS_PED_INJURED(func_264(uParam0[iParam4 /*94*/])) && ENTITY::DOES_ENTITY_EXIST(func_264(uParam0[iParam4 /*94*/])));
		if (((bVar0 && !bParam5) && !func_227(&((uParam0[iParam4 /*94*/])->f_4), 256)) || ((bVar0 && func_104(uParam0[iParam4 /*94*/], 8192)) && uParam0->f_1657 == 1))
		{
			(uParam0[iParam4 /*94*/])->f_37 = { ENTITY::GET_ENTITY_COORDS(func_264(uParam0[iParam4 /*94*/]), true) };
			func_21(iParam1, uParam0[iParam4 /*94*/], uParam2, func_104(uParam0[iParam4 /*94*/], 8192));
		}
	}
}

void func_290(var uParam0, vector3 vParam1)//Position - 0xB82E
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (func_287(uParam0, 1))
	{
		if (!func_274(uParam0))
		{
			uParam0->f_23 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_tennis_ball_trail", vParam1, 0f, 0f, 0f, 1065353216, 0, 0, 0, 1);
			HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(uParam0->f_23, (SYSTEM::TO_FLOAT(iVar0) / 255f), (SYSTEM::TO_FLOAT(iVar1) / 255f), (SYSTEM::TO_FLOAT(iVar2) / 255f), 0);
			uVar3 = uVar3;
		}
		GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(uParam0->f_23, vParam1, 0f, 0f, 0f);
	}
}

void func_291()//Position - 0xB8B4
{
	PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 27, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 12, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 13, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 14, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 15, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 16, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 17, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 19, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 20, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
	if (!func_299())
	{
		func_292(1);
	}
}

void func_292(bool bParam0)//Position - 0xB9A1
{
	if (bParam0)
	{
		func_298();
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
		{
			MISC::SET_BIT(&Global_2424, 16);
		}
		Global_14553.f_1 = 1;
		if (func_297(0))
		{
			func_293(0);
		}
	}
	else if (Global_14553.f_1 == 1)
	{
		if (!Global_14553.f_1 == 0)
		{
			Global_14553.f_1 = 3;
		}
	}
}

void func_293(int iParam0)//Position - 0xBA04
{
	if (func_296())
	{
		return;
	}
	if (Global_14725)
	{
		func_295(0, 0);
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
	if (!func_294())
	{
		Global_14553.f_1 = 3;
	}
}

int func_294()//Position - 0xBA7E
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_295(bool bParam0, bool bParam1)//Position - 0xBAA5
{
	if (bParam0)
	{
		if (func_297(0))
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

bool func_296()//Position - 0xBB19
{
	return MISC::IS_BIT_SET(Global_1681628, 19);
}

int func_297(int iParam0)//Position - 0xBB2B
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

void func_298()//Position - 0xBB85
{
	if (Global_14553.f_1 == 9 || Global_14553.f_1 == 10)
	{
		Global_15919 = 0;
		Global_15915 = 1;
	}
}

int func_299()//Position - 0xBBAE
{
	if (Global_14553.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_300(var uParam0)//Position - 0xBBC7
{
	uParam0->f_6 = (uParam0->f_6 + MISC::GET_FRAME_TIME());
}

void func_301(int iParam0, int iParam1)//Position - 0xBBDC
{
	func_303(iParam0);
	Global_88718[iParam0] = iParam1;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_302(1, iParam1);
					func_302(2, iParam1);
					break;
				
				case 1:
					func_302(0, iParam1);
					func_302(2, iParam1);
					break;
				
				case 2:
					func_302(0, iParam1);
					func_302(1, iParam1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_302(1, iParam1);
					func_302(2, iParam1);
					break;
				
				case 1:
					func_302(0, iParam1);
					func_302(2, iParam1);
					break;
				
				case 2:
					func_302(0, iParam1);
					func_302(1, iParam1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					func_302(1, iParam1);
					func_302(2, iParam1);
					break;
				
				case 1:
					func_302(0, iParam1);
					func_302(2, iParam1);
					break;
				
				case 2:
					func_302(0, iParam1);
					func_302(1, iParam1);
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					func_302(1, iParam1);
					func_302(2, iParam1);
					break;
				
				case 1:
					func_302(0, iParam1);
					func_302(2, iParam1);
					break;
				
				case 2:
					func_302(0, iParam1);
					func_302(1, iParam1);
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					func_302(1, iParam1);
					func_302(2, iParam1);
					break;
				
				case 1:
					func_302(0, iParam1);
					func_302(2, iParam1);
					break;
				
				case 2:
					func_302(0, iParam1);
					func_302(1, iParam1);
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
					func_302(1, iParam1);
					break;
				
				case 1:
					func_302(0, iParam1);
					break;
			}
			break;
		
		case 13:
			switch (iParam0)
			{
				case 0:
					func_302(1, iParam1);
					break;
				
				case 1:
					func_302(0, iParam1);
					break;
			}
			break;
		
		case 14:
			switch (iParam0)
			{
				case 0:
					func_302(1, iParam1);
					break;
				
				case 1:
					func_302(0, iParam1);
					break;
			}
			break;
		
		case 15:
			switch (iParam0)
			{
				case 0:
					func_302(1, iParam1);
					break;
				
				case 1:
					func_302(0, iParam1);
					break;
			}
			break;
		
		case 25:
			switch (iParam0)
			{
				case 0:
					func_302(1, iParam1);
					break;
				
				case 1:
					func_302(0, iParam1);
					break;
			}
			break;
		
		case 47:
			switch (iParam0)
			{
				case 2:
					func_302(3, iParam1);
					break;
				
				case 3:
					func_302(2, iParam1);
					break;
			}
			break;
		
		case 56:
			switch (iParam0)
			{
				case 2:
					func_302(0, iParam1);
					break;
				
				case 0:
					func_302(2, iParam1);
					break;
			}
			break;
		
		case 57:
			switch (iParam0)
			{
				case 2:
					func_302(0, iParam1);
					break;
				
				case 0:
					func_302(2, iParam1);
					break;
			}
			break;
		
		case 58:
			switch (iParam0)
			{
				case 2:
					func_302(1, iParam1);
					break;
				
				case 1:
					func_302(2, iParam1);
					break;
			}
			break;
		
		case 74:
			switch (iParam0)
			{
				case 2:
					func_302(1, iParam1);
					break;
				
				case 1:
					func_302(2, iParam1);
					break;
			}
			break;
		
		case 99:
			switch (iParam0)
			{
				case 6:
					func_302(7, iParam1);
					break;
				
				case 7:
					func_302(6, iParam1);
					break;
			}
			break;
		
		case 116:
			switch (iParam0)
			{
				case 9:
					func_302(11, iParam1);
					break;
				
				case 11:
					func_302(9, iParam1);
					break;
			}
			break;
		
		case 117:
			switch (iParam0)
			{
				case 9:
					func_302(11, iParam1);
					break;
				
				case 11:
					func_302(9, iParam1);
					break;
			}
			break;
		
		case 124:
			switch (iParam0)
			{
				case 11:
					func_302(8, iParam1);
					break;
				
				case 8:
					func_302(11, iParam1);
					break;
			}
			break;
		
		case 136:
			switch (iParam0)
			{
				case 13:
					func_302(14, iParam1);
					break;
				
				case 14:
					func_302(13, iParam1);
					break;
			}
			break;
	}
}

void func_302(int iParam0, int iParam1)//Position - 0xC085
{
	func_303(iParam0);
	Global_88718[iParam0] = iParam1;
}

void func_303(int iParam0)//Position - 0xC09D
{
	switch (Global_88718[iParam0])
	{
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
			break;
		
		default:
			Global_106565.f_18508[iParam0] = Global_88718[iParam0];
			break;
	}
}

int func_304(var uParam0, int iParam1, int iParam2)//Position - 0xC0E9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_264(uParam0[iParam1 /*94*/]);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(iVar0))
		{
			BRAIN::TASK_SEEK_COVER_FROM_PED(iVar0, PLAYER::PLAYER_PED_ID(), -1, 0);
		}
		if (!PED::IS_PED_INJURED(func_264(uParam0[(1 - iParam1) /*94*/])))
		{
			BRAIN::TASK_SEEK_COVER_FROM_PED(func_264(uParam0[(1 - iParam1) /*94*/]), PLAYER::PLAYER_PED_ID(), -1, 0);
		}
		return 1;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iVar0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_MELEE_COMBAT(iVar0))
	{
		return 1;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(iVar0, 0) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	if (uParam0->f_1657 != 1 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		func_305("TENN_WANTED", 7500, 0);
		func_180(iParam2, 1073741824);
		return 1;
	}
	if (PED::IS_PED_RAGDOLL(iVar0))
	{
		return 1;
	}
	iVar2 = (1 - iParam1);
	iVar1 = func_264(uParam0[iVar2 /*94*/]);
	if (PED::IS_PED_INJURED(iVar1))
	{
		return 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iVar1))
	{
		return 1;
	}
	if (PED::IS_PED_IN_MELEE_COMBAT(iVar1))
	{
		return 1;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(iVar1, 0) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 1;
	}
	if (PED::IS_PED_RAGDOLL(iVar1))
	{
		return 1;
	}
	if (uParam0->f_1657 == 1 && (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iVar0) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iVar1)))
	{
		return 1;
	}
	return 0;
}

void func_305(char* sParam0, int iParam1, int iParam2)//Position - 0xC2AD
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

int func_306(var uParam0)//Position - 0xC2C6
{
	return uParam0->f_4;
}

void func_307(var uParam0)//Position - 0xC2D2
{
	if (ENTITY::DOES_ENTITY_EXIST((uParam0[0 /*94*/])->f_33))
	{
		ENTITY::DETACH_ENTITY((uParam0[0 /*94*/])->f_33, 1, true);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&((uParam0[0 /*94*/])->f_33));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_247))
	{
		ENTITY::DETACH_ENTITY(uParam0->f_247, 1, true);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_247));
	}
	if (ENTITY::DOES_ENTITY_EXIST((uParam0[1 /*94*/])->f_33))
	{
		ENTITY::DETACH_ENTITY((uParam0[1 /*94*/])->f_33, 1, true);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&((uParam0[1 /*94*/])->f_33));
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_tennis_ball"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_1668);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_1669);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_tennis_rack_01b"));
	STREAMING::REMOVE_ANIM_DICT("mini@tennis");
	STREAMING::REMOVE_ANIM_DICT("mini@tennis@female");
	if (func_193(1))
	{
		func_310(1);
	}
	if (func_193(2))
	{
		func_310(2);
	}
	if (!func_308(-1))
	{
		PLAYER::_0xFF300C7649724A0B(PLAYER::PLAYER_ID(), 1);
	}
	else
	{
		PLAYER::_0xFF300C7649724A0B(PLAYER::PLAYER_ID(), 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD((uParam0[0 /*94*/])->f_32, 0) && !PED::IS_PED_BEING_STEALTH_KILLED((uParam0[0 /*94*/])->f_32))
	{
		func_222(uParam0, 0, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD((uParam0[1 /*94*/])->f_32, 0) && !PED::IS_PED_BEING_STEALTH_KILLED((uParam0[1 /*94*/])->f_32))
	{
		func_222(uParam0, 1, 1);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_308(int iParam0)//Position - 0xC402
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iVar0 = PLAYER::PLAYER_ID();
	}
	else
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	}
	if (func_223(iVar0, 0))
	{
		return 1;
	}
	if (func_309(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_309(int iParam0)//Position - 0xC43D
{
	return MISC::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_39.f_18, 14);
}

void func_310(int iParam0)//Position - 0xC458
{
	Global_105651 = (Global_105651 - (Global_105651 && iParam0));
}

void func_311(float fParam0, var uParam1, var uParam2)//Position - 0xC470
{
	int iVar0;
	char* sVar1;
	float fVar2;
	struct<8> Var3;
	
	iVar0 = func_41();
	sVar1 = func_195(iVar0 == 0, "DISMISS_MICHAEL", func_195(iVar0 == 2, "GENERIC_CURSE_HIGH", func_195(iVar0 == 1, "GENERIC_INSULT_MALE", "GENERIC_INSULT_MED")));
	fVar2 = func_77(uParam1);
	*fParam0 = (*fParam0 + MISC::GET_FRAME_TIME());
	if ((((*fParam0 > (5f + MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 5f)) && func_75(uParam2) == 75) && !PED::IS_PED_INJURED(func_264(uParam2))) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && func_76(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uParam1->f_3[0 /*3*/] + FtoV((fVar2 * 0.5f)) * uParam1->f_52, uParam1->f_3[3 /*3*/] + FtoV((fVar2 * 0.5f)) * uParam1->f_52, (fVar2 * 1.5f)))
	{
		StringCopy(&Var3, "AMANDA_NORMAL", 32);
		func_109(uParam2, sVar1, Var3, 9);
		*fParam0 = 0f;
	}
}

void func_312(var uParam0)//Position - 0xC55F
{
	uParam0->f_1672 = (uParam0->f_1672 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
}

void func_313(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0xC580
{
	func_321(&(uParam0->f_189), uParam0, 9);
	func_318(uParam0[iParam3 /*94*/], iParam3, 4, uParam0->f_1658, uParam0->f_1661);
	func_318(uParam0[iParam4 /*94*/], iParam4, 4, -uParam0->f_1658, -uParam0->f_1661);
	func_317(&(uParam0->f_247));
	StringCopy(&(uParam0->f_1670), "Idle1", 8);
	uParam1->f_4 = 4;
	uParam0->f_1657 = iParam2;
	(uParam0[iParam3 /*94*/])->f_4.f_20 = 1;
	(uParam0[iParam4 /*94*/])->f_4.f_20 = 1;
	func_316(uParam0);
	func_315(uParam0);
	func_314(uParam0);
}

void func_314(var uParam0)//Position - 0xC613
{
	uParam0->f_535[3 /*12*/] = 0f;
	uParam0->f_535[3 /*12*/].f_1 = 0.167f;
	uParam0->f_535[3 /*12*/].f_2 = 0.633f;
	uParam0->f_535[3 /*12*/].f_3 = 48;
	StringCopy(&(uParam0->f_535[3 /*12*/].f_4), "backhand_bs_hi", 32);
	uParam0->f_535[5 /*12*/] = 0f;
	uParam0->f_535[5 /*12*/].f_1 = 0.143f;
	uParam0->f_535[5 /*12*/].f_2 = 0.633f;
	uParam0->f_535[5 /*12*/].f_3 = 56;
	StringCopy(&(uParam0->f_535[5 /*12*/].f_4), "backhand_bs_lo", 32);
	uParam0->f_535[4 /*12*/] = 0f;
	uParam0->f_535[4 /*12*/].f_1 = 0.15f;
	uParam0->f_535[4 /*12*/].f_2 = 0.633f;
	uParam0->f_535[4 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[4 /*12*/].f_4), "backhand_bs_md", 32);
	uParam0->f_535[0 /*12*/] = 0f;
	uParam0->f_535[0 /*12*/].f_1 = 0.14f;
	uParam0->f_535[0 /*12*/].f_2 = 0.53f;
	uParam0->f_535[0 /*12*/].f_3 = 58;
	StringCopy(&(uParam0->f_535[0 /*12*/].f_4), "backhand_ts_hi", 32);
	uParam0->f_535[2 /*12*/] = 0f;
	uParam0->f_535[2 /*12*/].f_1 = 0.15f;
	uParam0->f_535[2 /*12*/].f_2 = 0.535f;
	uParam0->f_535[2 /*12*/].f_3 = 54;
	StringCopy(&(uParam0->f_535[2 /*12*/].f_4), "backhand_ts_lo", 32);
	uParam0->f_535[1 /*12*/] = 0f;
	uParam0->f_535[1 /*12*/].f_1 = 0.17f;
	uParam0->f_535[1 /*12*/].f_2 = 0.665f;
	uParam0->f_535[1 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[1 /*12*/].f_4), "backhand_ts_md", 32);
	uParam0->f_535[9 /*12*/] = 0.125f;
	uParam0->f_535[9 /*12*/].f_1 = 0.167f;
	uParam0->f_535[9 /*12*/].f_2 = 0.633f;
	uParam0->f_535[9 /*12*/].f_3 = 48;
	StringCopy(&(uParam0->f_535[9 /*12*/].f_4), "backhand_bs_hi", 32);
	uParam0->f_535[11 /*12*/] = 0.089f;
	uParam0->f_535[11 /*12*/].f_1 = 0.143f;
	uParam0->f_535[11 /*12*/].f_2 = 0.633f;
	uParam0->f_535[11 /*12*/].f_3 = 56;
	StringCopy(&(uParam0->f_535[11 /*12*/].f_4), "backhand_bs_lo", 32);
	uParam0->f_535[10 /*12*/] = 0.108f;
	uParam0->f_535[10 /*12*/].f_1 = 0.15f;
	uParam0->f_535[10 /*12*/].f_2 = 0.633f;
	uParam0->f_535[10 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[10 /*12*/].f_4), "backhand_bs_md", 32);
	uParam0->f_535[6 /*12*/] = 0.086f;
	uParam0->f_535[6 /*12*/].f_1 = 0.12f;
	uParam0->f_535[6 /*12*/].f_2 = 0.53f;
	uParam0->f_535[6 /*12*/].f_3 = 58;
	StringCopy(&(uParam0->f_535[6 /*12*/].f_4), "backhand_ts_hi", 32);
	uParam0->f_535[8 /*12*/] = 0.0925f;
	uParam0->f_535[8 /*12*/].f_1 = 0.15f;
	uParam0->f_535[8 /*12*/].f_2 = 0.535f;
	uParam0->f_535[8 /*12*/].f_3 = 54;
	StringCopy(&(uParam0->f_535[8 /*12*/].f_4), "backhand_ts_lo", 32);
	uParam0->f_535[7 /*12*/] = 0.108f;
	uParam0->f_535[7 /*12*/].f_1 = 0.16f;
	uParam0->f_535[7 /*12*/].f_2 = 0.665f;
	uParam0->f_535[7 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[7 /*12*/].f_4), "backhand_ts_md", 32);
	uParam0->f_535[35 /*12*/] = 0f;
	uParam0->f_535[35 /*12*/].f_1 = 0.3f;
	uParam0->f_535[35 /*12*/].f_2 = 0.58f;
	uParam0->f_535[35 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[35 /*12*/].f_4), "close_bh_bs_lo", 32);
	uParam0->f_535[34 /*12*/] = 0f;
	uParam0->f_535[34 /*12*/].f_1 = 0.3f;
	uParam0->f_535[34 /*12*/].f_2 = 0.585f;
	uParam0->f_535[34 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[34 /*12*/].f_4), "close_bh_bs_md", 32);
	uParam0->f_535[33 /*12*/] = 0f;
	uParam0->f_535[33 /*12*/].f_1 = 0.29f;
	uParam0->f_535[33 /*12*/].f_2 = 0.63f;
	uParam0->f_535[33 /*12*/].f_3 = 48;
	StringCopy(&(uParam0->f_535[33 /*12*/].f_4), "close_bh_bs_hi", 32);
	uParam0->f_535[32 /*12*/] = 0f;
	uParam0->f_535[32 /*12*/].f_1 = 0.28f;
	uParam0->f_535[32 /*12*/].f_2 = 0.708f;
	uParam0->f_535[32 /*12*/].f_3 = 50;
	StringCopy(&(uParam0->f_535[32 /*12*/].f_4), "close_bh_ts_lo", 32);
	uParam0->f_535[31 /*12*/] = 0f;
	uParam0->f_535[31 /*12*/].f_1 = 0.26f;
	uParam0->f_535[31 /*12*/].f_2 = 0.71f;
	uParam0->f_535[31 /*12*/].f_3 = 54;
	StringCopy(&(uParam0->f_535[31 /*12*/].f_4), "close_bh_ts_md", 32);
	uParam0->f_535[30 /*12*/] = 0f;
	uParam0->f_535[30 /*12*/].f_1 = 0.26f;
	uParam0->f_535[30 /*12*/].f_2 = 0.643f;
	uParam0->f_535[30 /*12*/].f_3 = 54;
	StringCopy(&(uParam0->f_535[30 /*12*/].f_4), "close_bh_ts_hi", 32);
	uParam0->f_535[47 /*12*/] = 0.174f;
	uParam0->f_535[47 /*12*/].f_1 = uParam0->f_535[35 /*12*/].f_1;
	uParam0->f_535[47 /*12*/].f_2 = uParam0->f_535[35 /*12*/].f_2;
	uParam0->f_535[47 /*12*/].f_3 = uParam0->f_535[35 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[47 /*12*/].f_4), "close_bh_bs_lo", 32);
	uParam0->f_535[46 /*12*/] = 0.217f;
	uParam0->f_535[46 /*12*/].f_1 = uParam0->f_535[34 /*12*/].f_1;
	uParam0->f_535[46 /*12*/].f_2 = uParam0->f_535[34 /*12*/].f_2;
	uParam0->f_535[46 /*12*/].f_3 = uParam0->f_535[34 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[46 /*12*/].f_4), "close_bh_bs_md", 32);
	uParam0->f_535[45 /*12*/] = 0.208f;
	uParam0->f_535[45 /*12*/].f_1 = uParam0->f_535[33 /*12*/].f_1;
	uParam0->f_535[45 /*12*/].f_2 = uParam0->f_535[33 /*12*/].f_2;
	uParam0->f_535[45 /*12*/].f_3 = uParam0->f_535[33 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[45 /*12*/].f_4), "close_bh_bs_hi", 32);
	uParam0->f_535[44 /*12*/] = 0.12f;
	uParam0->f_535[44 /*12*/].f_1 = uParam0->f_535[32 /*12*/].f_1;
	uParam0->f_535[44 /*12*/].f_2 = uParam0->f_535[32 /*12*/].f_2;
	uParam0->f_535[44 /*12*/].f_3 = uParam0->f_535[32 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[44 /*12*/].f_4), "close_bh_ts_lo", 32);
	uParam0->f_535[43 /*12*/] = 0.148f;
	uParam0->f_535[43 /*12*/].f_1 = uParam0->f_535[31 /*12*/].f_1;
	uParam0->f_535[43 /*12*/].f_2 = uParam0->f_535[31 /*12*/].f_2;
	uParam0->f_535[43 /*12*/].f_3 = uParam0->f_535[31 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[43 /*12*/].f_4), "close_bh_ts_md", 32);
	uParam0->f_535[42 /*12*/] = 0.09f;
	uParam0->f_535[42 /*12*/].f_1 = uParam0->f_535[30 /*12*/].f_1;
	uParam0->f_535[42 /*12*/].f_2 = uParam0->f_535[30 /*12*/].f_2;
	uParam0->f_535[42 /*12*/].f_3 = uParam0->f_535[30 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[42 /*12*/].f_4), "close_bh_ts_hi", 32);
	uParam0->f_535[41 /*12*/] = 0f;
	uParam0->f_535[41 /*12*/].f_1 = 0.27f;
	uParam0->f_535[41 /*12*/].f_2 = 0.613f;
	uParam0->f_535[41 /*12*/].f_3 = 56;
	StringCopy(&(uParam0->f_535[41 /*12*/].f_4), "close_fh_bs_lo", 32);
	uParam0->f_535[40 /*12*/] = 0f;
	uParam0->f_535[40 /*12*/].f_1 = 0.27f;
	uParam0->f_535[40 /*12*/].f_2 = 0.533f;
	uParam0->f_535[40 /*12*/].f_3 = 57;
	StringCopy(&(uParam0->f_535[40 /*12*/].f_4), "close_fh_bs_md", 32);
	uParam0->f_535[39 /*12*/] = 0f;
	uParam0->f_535[39 /*12*/].f_1 = 0.28f;
	uParam0->f_535[39 /*12*/].f_2 = 0.69f;
	uParam0->f_535[39 /*12*/].f_3 = 53;
	StringCopy(&(uParam0->f_535[39 /*12*/].f_4), "close_fh_bs_hi", 32);
	uParam0->f_535[38 /*12*/] = 0f;
	uParam0->f_535[38 /*12*/].f_1 = 0.26f;
	uParam0->f_535[38 /*12*/].f_2 = 0.665f;
	uParam0->f_535[38 /*12*/].f_3 = 57;
	StringCopy(&(uParam0->f_535[38 /*12*/].f_4), "close_fh_ts_lo", 32);
	uParam0->f_535[37 /*12*/] = 0f;
	uParam0->f_535[37 /*12*/].f_1 = 0.28f;
	uParam0->f_535[37 /*12*/].f_2 = 0.782f;
	uParam0->f_535[37 /*12*/].f_3 = 55;
	StringCopy(&(uParam0->f_535[37 /*12*/].f_4), "close_fh_ts_md", 32);
	uParam0->f_535[36 /*12*/] = 0f;
	uParam0->f_535[36 /*12*/].f_1 = 0.24f;
	uParam0->f_535[36 /*12*/].f_2 = 0.698f;
	uParam0->f_535[36 /*12*/].f_3 = 62;
	StringCopy(&(uParam0->f_535[36 /*12*/].f_4), "close_fh_ts_hi", 32);
	uParam0->f_535[53 /*12*/] = 0.135f;
	uParam0->f_535[53 /*12*/].f_1 = uParam0->f_535[41 /*12*/].f_1;
	uParam0->f_535[53 /*12*/].f_2 = uParam0->f_535[41 /*12*/].f_2;
	uParam0->f_535[53 /*12*/].f_3 = uParam0->f_535[41 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[53 /*12*/].f_4), "close_fh_bs_lo", 32);
	uParam0->f_535[52 /*12*/] = 0.173f;
	uParam0->f_535[52 /*12*/].f_1 = uParam0->f_535[40 /*12*/].f_1;
	uParam0->f_535[52 /*12*/].f_2 = uParam0->f_535[40 /*12*/].f_2;
	uParam0->f_535[52 /*12*/].f_3 = uParam0->f_535[40 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[52 /*12*/].f_4), "close_fh_bs_md", 32);
	uParam0->f_535[51 /*12*/] = 0.12f;
	uParam0->f_535[51 /*12*/].f_1 = uParam0->f_535[39 /*12*/].f_1;
	uParam0->f_535[51 /*12*/].f_2 = uParam0->f_535[39 /*12*/].f_2;
	uParam0->f_535[51 /*12*/].f_3 = uParam0->f_535[39 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[51 /*12*/].f_4), "close_fh_bs_hi", 32);
	uParam0->f_535[50 /*12*/] = 0.148f;
	uParam0->f_535[50 /*12*/].f_1 = uParam0->f_535[38 /*12*/].f_1;
	uParam0->f_535[50 /*12*/].f_2 = uParam0->f_535[38 /*12*/].f_2;
	uParam0->f_535[50 /*12*/].f_3 = uParam0->f_535[38 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[50 /*12*/].f_4), "close_fh_ts_lo", 32);
	uParam0->f_535[49 /*12*/] = 0.16f;
	uParam0->f_535[49 /*12*/].f_1 = uParam0->f_535[37 /*12*/].f_1;
	uParam0->f_535[49 /*12*/].f_2 = uParam0->f_535[37 /*12*/].f_2;
	uParam0->f_535[49 /*12*/].f_3 = uParam0->f_535[37 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[49 /*12*/].f_4), "close_fh_ts_md", 32);
	uParam0->f_535[48 /*12*/] = 0.155f;
	uParam0->f_535[48 /*12*/].f_1 = uParam0->f_535[36 /*12*/].f_1;
	uParam0->f_535[48 /*12*/].f_2 = uParam0->f_535[36 /*12*/].f_2;
	uParam0->f_535[48 /*12*/].f_3 = uParam0->f_535[36 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[48 /*12*/].f_4), "close_fh_ts_hi", 32);
	uParam0->f_535[15 /*12*/] = 0f;
	uParam0->f_535[15 /*12*/].f_1 = 0.21f;
	uParam0->f_535[15 /*12*/].f_2 = 0.7f;
	uParam0->f_535[15 /*12*/].f_3 = 43;
	StringCopy(&(uParam0->f_535[15 /*12*/].f_4), "forehand_bs_hi", 32);
	uParam0->f_535[17 /*12*/] = 0f;
	uParam0->f_535[17 /*12*/].f_1 = 0.16f;
	uParam0->f_535[17 /*12*/].f_2 = 0.67f;
	uParam0->f_535[17 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[17 /*12*/].f_4), "forehand_bs_lo", 32);
	uParam0->f_535[16 /*12*/] = 0f;
	uParam0->f_535[16 /*12*/].f_1 = 0.18f;
	uParam0->f_535[16 /*12*/].f_2 = 0.6f;
	uParam0->f_535[16 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[16 /*12*/].f_4), "forehand_bs_md", 32);
	uParam0->f_535[24 /*12*/] = 0.136f;
	uParam0->f_535[24 /*12*/].f_1 = 0.21f;
	uParam0->f_535[24 /*12*/].f_2 = 0.7f;
	uParam0->f_535[24 /*12*/].f_3 = 43;
	StringCopy(&(uParam0->f_535[24 /*12*/].f_4), "forehand_bs_hi", 32);
	uParam0->f_535[26 /*12*/] = 0.108f;
	uParam0->f_535[26 /*12*/].f_1 = 0.16f;
	uParam0->f_535[26 /*12*/].f_2 = 0.67f;
	uParam0->f_535[26 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[26 /*12*/].f_4), "forehand_bs_lo", 32);
	uParam0->f_535[25 /*12*/] = 0.108f;
	uParam0->f_535[25 /*12*/].f_1 = 0.18f;
	uParam0->f_535[25 /*12*/].f_2 = 0.6f;
	uParam0->f_535[25 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[25 /*12*/].f_4), "forehand_bs_md", 32);
	uParam0->f_535[18 /*12*/] = 0f;
	uParam0->f_535[18 /*12*/].f_1 = 0.17f;
	uParam0->f_535[18 /*12*/].f_2 = 0.722f;
	uParam0->f_535[18 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[18 /*12*/].f_4), "forehand_smash", 32);
	uParam0->f_535[19 /*12*/] = 0f;
	uParam0->f_535[19 /*12*/].f_1 = 0.17f;
	uParam0->f_535[19 /*12*/].f_2 = 0.614f;
	uParam0->f_535[19 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[19 /*12*/].f_4), "forehand_smash_lt", 32);
	uParam0->f_535[20 /*12*/] = 0f;
	uParam0->f_535[20 /*12*/].f_1 = 0.17f;
	uParam0->f_535[20 /*12*/].f_2 = 0.7f;
	uParam0->f_535[20 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[20 /*12*/].f_4), "forehand_smash_rt", 32);
	uParam0->f_535[27 /*12*/] = 0.108f;
	uParam0->f_535[27 /*12*/].f_1 = 0.17f;
	uParam0->f_535[27 /*12*/].f_2 = 0.722f;
	uParam0->f_535[27 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[27 /*12*/].f_4), "forehand_smash", 32);
	uParam0->f_535[28 /*12*/] = 0.108f;
	uParam0->f_535[28 /*12*/].f_1 = 0.17f;
	uParam0->f_535[28 /*12*/].f_2 = 0.614f;
	uParam0->f_535[28 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[28 /*12*/].f_4), "forehand_smash_lt", 32);
	uParam0->f_535[29 /*12*/] = 0.108f;
	uParam0->f_535[29 /*12*/].f_1 = 0.17f;
	uParam0->f_535[29 /*12*/].f_2 = 0.7f;
	uParam0->f_535[29 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[29 /*12*/].f_4), "forehand_smash_rt", 32);
	uParam0->f_535[12 /*12*/] = 0f;
	uParam0->f_535[12 /*12*/].f_1 = 0.14f;
	uParam0->f_535[12 /*12*/].f_2 = 0.615f;
	uParam0->f_535[12 /*12*/].f_3 = 62;
	StringCopy(&(uParam0->f_535[12 /*12*/].f_4), "forehand_ts_hi", 32);
	uParam0->f_535[14 /*12*/] = 0f;
	uParam0->f_535[14 /*12*/].f_1 = 0.16f;
	uParam0->f_535[14 /*12*/].f_2 = 0.643f;
	uParam0->f_535[14 /*12*/].f_3 = 52;
	StringCopy(&(uParam0->f_535[14 /*12*/].f_4), "forehand_ts_lo", 32);
	uParam0->f_535[13 /*12*/] = 0f;
	uParam0->f_535[13 /*12*/].f_1 = 0.18f;
	uParam0->f_535[13 /*12*/].f_2 = 0.779f;
	uParam0->f_535[13 /*12*/].f_3 = 45;
	StringCopy(&(uParam0->f_535[13 /*12*/].f_4), "forehand_ts_md", 32);
	uParam0->f_535[21 /*12*/] = 0.08f;
	uParam0->f_535[21 /*12*/].f_1 = 0.14f;
	uParam0->f_535[21 /*12*/].f_2 = 0.615f;
	uParam0->f_535[21 /*12*/].f_3 = 62;
	StringCopy(&(uParam0->f_535[21 /*12*/].f_4), "forehand_ts_hi", 32);
	uParam0->f_535[23 /*12*/] = 0.094f;
	uParam0->f_535[23 /*12*/].f_1 = 0.16f;
	uParam0->f_535[23 /*12*/].f_2 = 0.643f;
	uParam0->f_535[23 /*12*/].f_3 = 52;
	StringCopy(&(uParam0->f_535[23 /*12*/].f_4), "forehand_ts_lo", 32);
	uParam0->f_535[22 /*12*/] = 0.108f;
	uParam0->f_535[22 /*12*/].f_1 = 0.18f;
	uParam0->f_535[22 /*12*/].f_2 = 0.779f;
	uParam0->f_535[22 /*12*/].f_3 = 45;
	StringCopy(&(uParam0->f_535[22 /*12*/].f_4), "forehand_ts_md", 32);
	uParam0->f_535[54 /*12*/] = 0.28f;
	uParam0->f_535[54 /*12*/].f_1 = 0.37f;
	uParam0->f_535[54 /*12*/].f_2 = 0.708f;
	uParam0->f_535[54 /*12*/].f_3 = 57;
	StringCopy(&(uParam0->f_535[54 /*12*/].f_4), "lunge_bh_hi", 32);
	uParam0->f_535[56 /*12*/] = 0.275f;
	uParam0->f_535[56 /*12*/].f_1 = 0.37f;
	uParam0->f_535[56 /*12*/].f_2 = 0.695f;
	uParam0->f_535[56 /*12*/].f_3 = 58;
	StringCopy(&(uParam0->f_535[56 /*12*/].f_4), "lunge_bh_lo", 32);
	uParam0->f_535[55 /*12*/] = 0.27f;
	uParam0->f_535[55 /*12*/].f_1 = 0.37f;
	uParam0->f_535[55 /*12*/].f_2 = 0.688f;
	uParam0->f_535[55 /*12*/].f_3 = 58;
	StringCopy(&(uParam0->f_535[55 /*12*/].f_4), "lunge_bh_mid", 32);
	uParam0->f_535[57 /*12*/] = 0.26f;
	uParam0->f_535[57 /*12*/].f_1 = 0.41f;
	uParam0->f_535[57 /*12*/].f_2 = 0.705f;
	uParam0->f_535[57 /*12*/].f_3 = 54;
	StringCopy(&(uParam0->f_535[57 /*12*/].f_4), "lunge_fh_hi", 32);
	uParam0->f_535[59 /*12*/] = 0.26f;
	uParam0->f_535[59 /*12*/].f_1 = 0.42f;
	uParam0->f_535[59 /*12*/].f_2 = 0.738f;
	uParam0->f_535[59 /*12*/].f_3 = 52;
	StringCopy(&(uParam0->f_535[59 /*12*/].f_4), "lunge_fh_lo", 32);
	uParam0->f_535[58 /*12*/] = 0.263f;
	uParam0->f_535[58 /*12*/].f_1 = 0.43f;
	uParam0->f_535[58 /*12*/].f_2 = 0.695f;
	uParam0->f_535[58 /*12*/].f_3 = 50;
	StringCopy(&(uParam0->f_535[58 /*12*/].f_4), "lunge_fh_mid", 32);
	uParam0->f_535[72 /*12*/] = 0.073f;
	uParam0->f_535[72 /*12*/].f_1 = 0.17f;
	uParam0->f_535[72 /*12*/].f_2 = 0.77f;
	uParam0->f_535[72 /*12*/].f_3 = 102;
	StringCopy(&(uParam0->f_535[72 /*12*/].f_4), "dive_bh", 32);
	uParam0->f_535[73 /*12*/] = 0.053f;
	uParam0->f_535[73 /*12*/].f_1 = 0.17f;
	uParam0->f_535[73 /*12*/].f_2 = 0.781f;
	uParam0->f_535[73 /*12*/].f_3 = 102;
	StringCopy(&(uParam0->f_535[73 /*12*/].f_4), "dive_fh", 32);
	uParam0->f_535[60 /*12*/] = 0f;
	uParam0->f_535[60 /*12*/].f_1 = 0.15f;
	uParam0->f_535[60 /*12*/].f_2 = 0.95f;
	uParam0->f_535[60 /*12*/].f_3 = 65;
	StringCopy(&(uParam0->f_535[60 /*12*/].f_4), "forehand_ts_lo_far", 32);
	uParam0->f_535[61 /*12*/] = 0f;
	uParam0->f_535[61 /*12*/].f_1 = 0.17f;
	uParam0->f_535[61 /*12*/].f_2 = 0.95f;
	uParam0->f_535[61 /*12*/].f_3 = 58;
	StringCopy(&(uParam0->f_535[61 /*12*/].f_4), "forehand_ts_md_far", 32);
	uParam0->f_535[62 /*12*/] = 0f;
	uParam0->f_535[62 /*12*/].f_1 = 0.13f;
	uParam0->f_535[62 /*12*/].f_2 = 0.95f;
	uParam0->f_535[62 /*12*/].f_3 = 74;
	StringCopy(&(uParam0->f_535[62 /*12*/].f_4), "forehand_ts_hi_far", 32);
	uParam0->f_535[63 /*12*/] = 0f;
	uParam0->f_535[63 /*12*/].f_1 = 0.2f;
	uParam0->f_535[63 /*12*/].f_2 = 0.95f;
	uParam0->f_535[63 /*12*/].f_3 = 40;
	StringCopy(&(uParam0->f_535[63 /*12*/].f_4), "close_bh_lo", 32);
	uParam0->f_535[64 /*12*/] = 0f;
	uParam0->f_535[64 /*12*/].f_1 = 0.2f;
	uParam0->f_535[64 /*12*/].f_2 = 0.95f;
	uParam0->f_535[64 /*12*/].f_3 = 40;
	StringCopy(&(uParam0->f_535[64 /*12*/].f_4), "close_bh_md", 32);
	uParam0->f_535[65 /*12*/] = 0f;
	uParam0->f_535[65 /*12*/].f_1 = 0.2f;
	uParam0->f_535[65 /*12*/].f_2 = 0.95f;
	uParam0->f_535[65 /*12*/].f_3 = 40;
	StringCopy(&(uParam0->f_535[65 /*12*/].f_4), "close_bh_hi", 32);
	uParam0->f_535[66 /*12*/] = 0f;
	uParam0->f_535[66 /*12*/].f_1 = 0.174f;
	uParam0->f_535[66 /*12*/].f_2 = 0.95f;
	uParam0->f_535[66 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[66 /*12*/].f_4), "close_fh_lo", 32);
	uParam0->f_535[67 /*12*/] = 0f;
	uParam0->f_535[67 /*12*/].f_1 = 0.174f;
	uParam0->f_535[67 /*12*/].f_2 = 0.95f;
	uParam0->f_535[67 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[67 /*12*/].f_4), "close_fh_md", 32);
	uParam0->f_535[68 /*12*/] = 0f;
	uParam0->f_535[68 /*12*/].f_1 = 0.174f;
	uParam0->f_535[68 /*12*/].f_2 = 0.95f;
	uParam0->f_535[68 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[68 /*12*/].f_4), "close_fh_hi", 32);
	uParam0->f_535[69 /*12*/] = 0f;
	uParam0->f_535[69 /*12*/].f_1 = 0.25f;
	uParam0->f_535[69 /*12*/].f_2 = 0.95f;
	uParam0->f_535[69 /*12*/].f_3 = 48;
	StringCopy(&(uParam0->f_535[69 /*12*/].f_4), "mid_bh_lo", 32);
	uParam0->f_535[70 /*12*/] = 0f;
	uParam0->f_535[70 /*12*/].f_1 = 0.231f;
	uParam0->f_535[70 /*12*/].f_2 = 0.95f;
	uParam0->f_535[70 /*12*/].f_3 = 52;
	StringCopy(&(uParam0->f_535[70 /*12*/].f_4), "mid_bh_md", 32);
	uParam0->f_535[71 /*12*/] = 0f;
	uParam0->f_535[71 /*12*/].f_1 = 0.231f;
	uParam0->f_535[71 /*12*/].f_2 = 0.95f;
	uParam0->f_535[71 /*12*/].f_3 = 52;
	StringCopy(&(uParam0->f_535[71 /*12*/].f_4), "mid_bh_hi", 32);
}

void func_315(var uParam0)//Position - 0xDC15
{
	int iVar0;
	int iVar1;
	
	uParam0->f_303[5 /*3*/] = { -0.8036f, 0.6726f, -0.6097f };
	uParam0->f_303[4 /*3*/] = { -0.8147f, 0.6746f, -0.0154f };
	uParam0->f_303[3 /*3*/] = { -0.8298f, 0.6483f, 0.615f };
	uParam0->f_303[2 /*3*/] = { -0.8254f, 0.6648f, -0.6352f };
	uParam0->f_303[1 /*3*/] = { -0.8217f, 0.6774f, -0.012f };
	uParam0->f_303[0 /*3*/] = { -0.8072f, 0.6576f, 0.5741f };
	uParam0->f_303[17 /*3*/] = { 0.813f, 0.6795f, -0.5939f };
	uParam0->f_303[16 /*3*/] = { 0.8651f, 0.6928f, 0.0177f };
	uParam0->f_303[15 /*3*/] = { 0.8592f, 0.6398f, 0.585f };
	uParam0->f_303[14 /*3*/] = { 0.8073f, 0.6708f, -0.5718f };
	uParam0->f_303[13 /*3*/] = { 0.831f, 0.6645f, 0.0059f };
	uParam0->f_303[12 /*3*/] = { 0.8462f, 0.6823f, 0.6137f };
	uParam0->f_303[18 /*3*/] = { 0.0038f, 0.571f, 1.4844f };
	uParam0->f_303[19 /*3*/] = { -0.6106f, 0.6003f, 1.4926f };
	uParam0->f_303[20 /*3*/] = { 0.5791f, 0.6003f, 1.4524f };
	uParam0->f_303[35 /*3*/] = { -0.1276f, 0.6496f, -0.6081f };
	uParam0->f_303[34 /*3*/] = { -0.1219f, 0.6858f, -0.0039f };
	uParam0->f_303[33 /*3*/] = { -0.158f, 0.6565f, 0.5989f };
	uParam0->f_303[32 /*3*/] = { -0.1302f, 0.6646f, -0.6002f };
	uParam0->f_303[31 /*3*/] = { -0.1243f, 0.6686f, 0.0104f };
	uParam0->f_303[30 /*3*/] = { -0.1614f, 0.6659f, 0.6349f };
	uParam0->f_303[41 /*3*/] = { 0.2654f, 0.7156f, -0.6474f };
	uParam0->f_303[40 /*3*/] = { 0.2594f, 0.6587f, -0.0193f };
	uParam0->f_303[39 /*3*/] = { 0.2755f, 0.6588f, 0.5959f };
	uParam0->f_303[38 /*3*/] = { 0.2617f, 0.701f, -0.6222f };
	uParam0->f_303[37 /*3*/] = { 0.2718f, 0.6637f, -0.0077f };
	uParam0->f_303[36 /*3*/] = { 0.269f, 0.6677f, 0.6025f };
	uParam0->f_303[11 /*3*/] = { -0.7118f, 0.5888f, -0.6097f };
	uParam0->f_303[10 /*3*/] = { -0.7944f, 0.5983f, -0.0154f };
	uParam0->f_303[9 /*3*/] = { -0.7291f, 0.5708f, 0.615f };
	uParam0->f_303[8 /*3*/] = { -0.6591f, 0.4535f, -0.6352f };
	uParam0->f_303[7 /*3*/] = { -0.7722f, 0.6042f, -0.012f };
	uParam0->f_303[6 /*3*/] = { -0.8057f, 0.6484f, 0.5741f };
	uParam0->f_303[26 /*3*/] = { 0.7679f, 0.5793f, -0.5939f };
	uParam0->f_303[25 /*3*/] = { 0.7837f, 0.616f, 0.0177f };
	uParam0->f_303[24 /*3*/] = { 0.6994f, 0.5786f, 0.585f };
	uParam0->f_303[23 /*3*/] = { 0.8024f, 0.5107f, -0.5718f };
	uParam0->f_303[22 /*3*/] = { 0.8475f, 0.4297f, 0.0059f };
	uParam0->f_303[21 /*3*/] = { 0.8012f, 0.6051f, 0.6137f };
	uParam0->f_303[27 /*3*/] = { -0.0045f, 0.4354f, 1.4844f };
	uParam0->f_303[28 /*3*/] = { -0.5737f, 0.4354f, 1.4926f };
	uParam0->f_303[29 /*3*/] = { 0.5691f, 0.4354f, 1.4524f };
	uParam0->f_303[47 /*3*/] = { -0.4511f, 0.4966f, -0.6081f };
	uParam0->f_303[46 /*3*/] = { -0.5103f, 0.51f, -0.0039f };
	uParam0->f_303[45 /*3*/] = { -0.4779f, 0.3857f, 0.5989f };
	uParam0->f_303[44 /*3*/] = { -0.3778f, 0.5049f, -0.6002f };
	uParam0->f_303[43 /*3*/] = { -0.3224f, 0.5942f, 0.0104f };
	uParam0->f_303[42 /*3*/] = { -0.3764f, 0.6902f, 0.6349f };
	uParam0->f_303[53 /*3*/] = { 0.4805f, 0.7156f, -0.6474f };
	uParam0->f_303[52 /*3*/] = { 0.7625f, 0.6532f, -0.0193f };
	uParam0->f_303[51 /*3*/] = { 0.6043f, 0.6588f, 0.5959f };
	uParam0->f_303[50 /*3*/] = { 0.473f, 0.6992f, -0.6222f };
	uParam0->f_303[49 /*3*/] = { 0.5413f, 0.6353f, -0.0077f };
	uParam0->f_303[48 /*3*/] = { 0.714f, 0.6593f, 0.6025f };
	uParam0->f_303[56 /*3*/] = { -1.3525f, 0.6005f, -0.7221f };
	uParam0->f_303[55 /*3*/] = { -1.5755f, 0.4699f, -0.0379f };
	uParam0->f_303[54 /*3*/] = { -1.318f, 0.4631f, 0.7024f };
	uParam0->f_303[59 /*3*/] = { 1.9622f, 0.2122f, -0.6432f };
	uParam0->f_303[58 /*3*/] = { 1.9598f, 0.5945f, -0.0585f };
	uParam0->f_303[57 /*3*/] = { 1.8166f, 0.3588f, 0.7322f };
	uParam0->f_303[73 /*3*/] = { 2.2269f, -0.0119f, 0.0417f };
	uParam0->f_303[72 /*3*/] = { -2.2644f, -0.1467f, 0.0997f };
	uParam0->f_303[60 /*3*/] = { 1.4174f, 0.6731f, -0.5824f };
	uParam0->f_303[61 /*3*/] = { 1.4134f, 0.6671f, 0.0059f };
	uParam0->f_303[62 /*3*/] = { 1.4031f, 0.6845f, 0.6133f };
	uParam0->f_303[63 /*3*/] = { -0.1726f, 0.6642f, -0.6095f };
	uParam0->f_303[64 /*3*/] = { -0.2261f, 0.7049f, 0.0018f };
	uParam0->f_303[65 /*3*/] = { -0.1558f, 0.6787f, 0.6703f };
	uParam0->f_303[66 /*3*/] = { 0.2443f, 0.6567f, -0.5885f };
	uParam0->f_303[67 /*3*/] = { 0.2594f, 0.6587f, -0.0193f };
	uParam0->f_303[68 /*3*/] = { 0.2594f, 0.6387f, 0.6221f };
	uParam0->f_303[69 /*3*/] = { -0.4975f, 0.6646f, -0.6002f };
	uParam0->f_303[70 /*3*/] = { -0.4998f, 0.6686f, 0.0104f };
	uParam0->f_303[71 /*3*/] = { -0.4952f, 0.6659f, 0.6349f };
	uParam0->f_303[74 /*3*/] = { 1000f, 1000f, 1000f };
	uParam0->f_303[76 /*3*/] = { 1000f, 1000f, 1000f };
	uParam0->f_303[75 /*3*/] = { 1000f, 1000f, 1000f };
	uParam0->f_1571[0] = -2.2644f;
	uParam0->f_1571[1] = -0.826f;
	uParam0->f_1571[2] = -0.6969f;
	uParam0->f_1571[3] = -0.4494f;
	uParam0->f_1571[4] = -0.2019f;
	uParam0->f_1571[5] = 0.0456f;
	uParam0->f_1571[6] = 0.2931f;
	uParam0->f_1571[7] = 0.5406f;
	uParam0->f_1571[8] = 0.7881f;
	uParam0->f_1571[9] = 1.0356f;
	uParam0->f_1571[10] = 2.6669f;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			uParam0->f_1460[iVar0 /*11*/][iVar1] = 75;
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_1460[0 /*11*/][0] = 3;
	uParam0->f_1460[0 /*11*/][1] = 54;
	uParam0->f_1460[0 /*11*/][2] = 55;
	uParam0->f_1460[0 /*11*/][3] = 56;
	uParam0->f_1460[0 /*11*/][4] = 72;
	uParam0->f_1460[1 /*11*/][0] = 0;
	uParam0->f_1460[1 /*11*/][1] = 1;
	uParam0->f_1460[1 /*11*/][2] = 2;
	uParam0->f_1460[1 /*11*/][3] = 4;
	uParam0->f_1460[1 /*11*/][4] = 5;
	uParam0->f_1460[1 /*11*/][5] = 6;
	uParam0->f_1460[1 /*11*/][6] = 7;
	uParam0->f_1460[1 /*11*/][7] = 9;
	uParam0->f_1460[1 /*11*/][8] = 10;
	uParam0->f_1460[1 /*11*/][9] = 11;
	uParam0->f_1460[2 /*11*/][0] = 8;
	uParam0->f_1460[2 /*11*/][1] = 19;
	uParam0->f_1460[2 /*11*/][2] = 28;
	uParam0->f_1460[2 /*11*/][3] = 45;
	uParam0->f_1460[2 /*11*/][4] = 46;
	uParam0->f_1460[2 /*11*/][5] = 47;
	uParam0->f_1460[2 /*11*/][6] = 69;
	uParam0->f_1460[2 /*11*/][7] = 70;
	uParam0->f_1460[2 /*11*/][8] = 71;
	uParam0->f_1460[3 /*11*/][0] = 42;
	uParam0->f_1460[3 /*11*/][1] = 43;
	uParam0->f_1460[3 /*11*/][2] = 44;
	uParam0->f_1460[3 /*11*/][3] = 64;
	uParam0->f_1460[4 /*11*/][0] = 18;
	uParam0->f_1460[4 /*11*/][1] = 27;
	uParam0->f_1460[4 /*11*/][2] = 30;
	uParam0->f_1460[4 /*11*/][3] = 31;
	uParam0->f_1460[4 /*11*/][4] = 32;
	uParam0->f_1460[4 /*11*/][5] = 33;
	uParam0->f_1460[4 /*11*/][6] = 34;
	uParam0->f_1460[4 /*11*/][7] = 35;
	uParam0->f_1460[4 /*11*/][8] = 63;
	uParam0->f_1460[4 /*11*/][9] = 65;
	uParam0->f_1460[5 /*11*/][0] = 36;
	uParam0->f_1460[5 /*11*/][1] = 37;
	uParam0->f_1460[5 /*11*/][2] = 38;
	uParam0->f_1460[5 /*11*/][3] = 39;
	uParam0->f_1460[5 /*11*/][4] = 40;
	uParam0->f_1460[5 /*11*/][5] = 41;
	uParam0->f_1460[5 /*11*/][6] = 66;
	uParam0->f_1460[5 /*11*/][7] = 67;
	uParam0->f_1460[5 /*11*/][8] = 68;
	uParam0->f_1460[6 /*11*/][0] = 50;
	uParam0->f_1460[6 /*11*/][1] = 53;
	uParam0->f_1460[7 /*11*/][0] = 20;
	uParam0->f_1460[7 /*11*/][1] = 24;
	uParam0->f_1460[7 /*11*/][2] = 25;
	uParam0->f_1460[7 /*11*/][3] = 26;
	uParam0->f_1460[7 /*11*/][4] = 29;
	uParam0->f_1460[7 /*11*/][5] = 48;
	uParam0->f_1460[7 /*11*/][6] = 49;
	uParam0->f_1460[7 /*11*/][7] = 51;
	uParam0->f_1460[7 /*11*/][8] = 52;
	uParam0->f_1460[8 /*11*/][0] = 12;
	uParam0->f_1460[8 /*11*/][1] = 13;
	uParam0->f_1460[8 /*11*/][2] = 14;
	uParam0->f_1460[8 /*11*/][3] = 15;
	uParam0->f_1460[8 /*11*/][4] = 16;
	uParam0->f_1460[8 /*11*/][5] = 17;
	uParam0->f_1460[8 /*11*/][6] = 21;
	uParam0->f_1460[8 /*11*/][7] = 22;
	uParam0->f_1460[8 /*11*/][8] = 23;
	uParam0->f_1460[9 /*11*/][0] = 57;
	uParam0->f_1460[9 /*11*/][1] = 58;
	uParam0->f_1460[9 /*11*/][2] = 59;
	uParam0->f_1460[9 /*11*/][3] = 60;
	uParam0->f_1460[9 /*11*/][4] = 61;
	uParam0->f_1460[9 /*11*/][5] = 62;
	uParam0->f_1460[9 /*11*/][6] = 73;
}

void func_316(var uParam0)//Position - 0xE877
{
	uParam0->f_282[0 /*2*/] = 45;
	uParam0->f_282[1 /*2*/] = 40;
	uParam0->f_282[2 /*2*/] = 35;
	uParam0->f_282[3 /*2*/] = 30;
	uParam0->f_282[4 /*2*/] = 25;
	uParam0->f_282[5 /*2*/] = 20;
	uParam0->f_282[6 /*2*/] = 30;
	uParam0->f_282[7 /*2*/] = 35;
	uParam0->f_282[8 /*2*/] = 24;
	uParam0->f_282[9 /*2*/] = 27;
	uParam0->f_282[0 /*2*/].f_1 = 355;
	uParam0->f_282[1 /*2*/].f_1 = 356;
	uParam0->f_282[2 /*2*/].f_1 = 358;
	uParam0->f_282[3 /*2*/].f_1 = 2;
	uParam0->f_282[4 /*2*/].f_1 = 5;
	uParam0->f_282[5 /*2*/].f_1 = 9;
	uParam0->f_282[6 /*2*/].f_1 = 354;
	uParam0->f_282[7 /*2*/].f_1 = 2;
	uParam0->f_282[8 /*2*/].f_1 = 15;
	uParam0->f_282[9 /*2*/].f_1 = 4;
}

void func_317(var uParam0)//Position - 0xE95C
{
	uParam0->f_1 = 0;
}

void func_318(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6)//Position - 0xE969
{
	uParam0->f_36 = 75;
	uParam0->f_1 = iParam1;
	uParam0->f_40 = { vParam3 / FtoV(SYSTEM::VMAG(vParam3)) };
	uParam0->f_43 = { vParam6 / FtoV(SYSTEM::VMAG(vParam6)) };
	uParam0->f_63 = (3f + 1f);
	switch (iParam2)
	{
		case 0:
			uParam0->f_31 = iParam2;
			break;
		
		case 1:
			uParam0->f_31 = iParam2;
			break;
		
		case 2:
			uParam0->f_31 = iParam2;
			break;
		
		case 3:
			uParam0->f_31 = iParam2;
			break;
		
		case 4:
			func_319(&(uParam0->f_4));
			uParam0->f_31 = iParam2;
			break;
	}
}

void func_319(var uParam0)//Position - 0xEA06
{
	func_234(uParam0, 0);
	func_320(uParam0, 0);
}

void func_320(var uParam0, int iParam1)//Position - 0xEA1C
{
	uParam0->f_20 = iParam1;
}

void func_321(var uParam0, var uParam1, int iParam2)//Position - 0xEA2A
{
	float fVar0;
	float fVar1;
	
	func_326(&(uParam1->f_1656));
	fVar0 = 0.46f;
	fVar1 = 0.5f;
	if (uParam1->f_1656 == 16 && uParam1->f_1657 != 1)
	{
		uParam0->f_3[0 /*3*/] = { -768.966f, 165.352f, 66.474f };
		uParam0->f_3[1 /*3*/] = { -777.028f, 165.364f, 66.474f };
		uParam0->f_3[2 /*3*/] = { -777.045f, 141.573f, 66.474f };
		uParam0->f_3[3 /*3*/] = { -768.972f, 141.566f, 66.475f };
		fVar1 = 0.474f;
		uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
		uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
		uParam1->f_1664 = { func_187(uParam1->f_1661, uParam1->f_1658) };
		func_325(uParam0, SYSTEM::VMAG(uParam1->f_1661));
		uParam0->f_49 = { uParam1->f_1658 / FtoV(SYSTEM::VMAG(uParam1->f_1658)) };
		uParam0->f_52 = { uParam1->f_1661 / FtoV(SYSTEM::VMAG(uParam1->f_1661)) };
		uParam0->f_16[0 /*3*/] = { -768.994f, 160.238f, 66.474f };
		uParam0->f_16[1 /*3*/] = { -777.009f, 160.23f, 66.474f };
		uParam0->f_16[2 /*3*/] = { -776.999f, 146.539f, 66.474f };
		uParam0->f_16[3 /*3*/] = { -768.988f, 146.552f, 66.474f };
		uParam0->f_29 = { -773.017f, 153.584f, 66.474f };
		uParam0->f_32[0 /*3*/] = { -768.981f, 153.584f, 66.474f };
		uParam0->f_32[1 /*3*/] = { -777.006f, 153.584f, 66.474f };
		uParam0->f_39[0 /*3*/] = { uParam0->f_29 + uParam1->f_1661 * Vector(-0.834f, -0.834f, -0.834f) };
		uParam0->f_39[0 /*3*/].f_2 = (uParam0->f_39[0 /*3*/].f_2 + 1.148f);
		uParam0->f_39[1 /*3*/] = { uParam0->f_29 };
		uParam0->f_39[1 /*3*/].f_2 = (uParam0->f_39[1 /*3*/].f_2 + 0.928f);
		uParam0->f_39[2 /*3*/] = { uParam0->f_29 + uParam1->f_1661 * Vector(0.834f, 0.834f, 0.834f) };
		uParam0->f_39[2 /*3*/].f_2 = (uParam0->f_39[2 /*3*/].f_2 + 1.148f);
		func_324(uParam0, 0);
		func_323(uParam0, 0.43f);
		uParam0->f_55 = { -780.4614f, 156.5187f, 66.4744f };
	}
	else if (uParam1->f_1656 == 13 && uParam1->f_1657 != 1)
	{
		uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
		uParam0->f_3[0 /*3*/] = { -1173.349f, -1604.72f, 3.3738f };
		uParam0->f_3[1 /*3*/] = { -1180.108f, -1609.459f, 3.3738f };
		uParam0->f_3[2 /*3*/] = { -1166.443f, -1628.969f, 3.3738f };
		uParam0->f_3[3 /*3*/] = { -1159.67f, -1624.238f, 3.3738f };
		func_322(uParam0, uParam1, 0.5f, 0.46f, 1);
		func_324(uParam0, 1);
	}
	else if (uParam1->f_1656 == 19 && uParam1->f_1657 != 1)
	{
		uParam0->f_55 = { 487.5186f, -217.7697f, 52.7864f };
		uParam0->f_3[0 /*3*/] = { 479.669f, -227.811f, 52.787f };
		uParam0->f_3[1 /*3*/] = { 487.252f, -230.572f, 52.787f };
		uParam0->f_3[2 /*3*/] = { 495.403f, -208.181f, 52.787f };
		uParam0->f_3[3 /*3*/] = { 487.807f, -205.4f, 52.787f };
		func_322(uParam0, uParam1, 0.5f, 0.428f, 0);
		func_324(uParam0, 2);
	}
	else if (uParam1->f_1656 == 23 && uParam1->f_1657 != 1)
	{
		uParam0->f_55 = { -49.912f, 942.5634f, 231.1741f };
		uParam0->f_3[0 /*3*/] = { -54.665f, 947.136f, 231.174f };
		uParam0->f_3[1 /*3*/] = { -55.353f, 939.187f, 231.174f };
		uParam0->f_3[2 /*3*/] = { -31.706f, 937.116f, 231.174f };
		uParam0->f_3[3 /*3*/] = { -31.008f, 945.056f, 231.174f };
		func_322(uParam0, uParam1, 0.5f, 0.428f, 0);
		func_324(uParam0, 8);
	}
	else if (uParam1->f_1656 == 17 && uParam1->f_1657 != 1)
	{
		uParam0->f_55 = { -1225.454f, 344.8268f, 78.9859f };
		uParam0->f_3[0 /*3*/] = { -1223.264f, 351.306f, 78.9867f };
		uParam0->f_3[1 /*3*/] = { -1231.37f, 348.946f, 78.9867f };
		uParam0->f_3[2 /*3*/] = { -1224.658f, 325.996f, 78.9867f };
		uParam0->f_3[3 /*3*/] = { -1216.553f, 328.359f, 78.9867f };
		func_322(uParam0, uParam1, 0.5f, 0.46f, 1);
		func_324(uParam0, 3);
	}
	else if (uParam1->f_1656 == 15 && uParam1->f_1657 != 1)
	{
		uParam0->f_55 = { -1623.454f, 257.1566f, 58.5552f };
		uParam0->f_3[0 /*3*/] = { -1627.471f, 275.479f, 58.5552f };
		uParam0->f_3[1 /*3*/] = { -1634.971f, 271.977f, 58.5552f };
		uParam0->f_3[2 /*3*/] = { -1624.893f, 250.367f, 58.5552f };
		uParam0->f_3[3 /*3*/] = { -1617.398f, 253.864f, 58.5552f };
		func_322(uParam0, uParam1, 0.5f, 0.46f, 1);
		func_324(uParam0, 4);
	}
	else if (uParam1->f_1656 == 18 && uParam1->f_1657 != 1)
	{
		uParam0->f_55 = { -939.6168f, -1255.732f, 6.9773f };
		uParam0->f_3[1 /*3*/] = { -945.684f, -1253.143f, 6.9773f };
		uParam0->f_3[2 /*3*/] = { -933.813f, -1273.726f, 6.9773f };
		uParam0->f_3[3 /*3*/] = { -926.823f, -1269.7f, 6.9773f };
		uParam0->f_3[0 /*3*/] = { -938.693f, -1249.116f, 6.9773f };
		func_322(uParam0, uParam1, 0.5f, 0.428f, 1);
		func_324(uParam0, 5);
	}
	else if (uParam1->f_1656 == 20 && uParam1->f_1657 != 1)
	{
		uParam0->f_55 = { -1371.275f, -107.9437f, 49.7046f };
		uParam0->f_3[0 /*3*/] = { -1374.66f, -114.005f, 49.7046f };
		uParam0->f_3[1 /*3*/] = { -1366.627f, -113.082f, 49.7046f };
		uParam0->f_3[2 /*3*/] = { -1369.309f, -89.432f, 49.7046f };
		uParam0->f_3[3 /*3*/] = { -1377.338f, -90.342f, 49.7046f };
		func_322(uParam0, uParam1, 0.5f, 0.43f, 1);
		func_324(uParam0, 6);
	}
	else if (uParam1->f_1656 == 14 && uParam1->f_1657 != 1)
	{
		uParam0->f_55 = { -2869.991f, 9.2297f, 10.6083f };
		uParam0->f_3[0 /*3*/] = { -2875.503f, 5.33f, 10.6083f };
		uParam0->f_3[1 /*3*/] = { -2867.721f, 3.09f, 10.6083f };
		uParam0->f_3[2 /*3*/] = { -2861.163f, 25.966f, 10.6083f };
		uParam0->f_3[3 /*3*/] = { -2868.95f, 28.198f, 10.6083f };
		func_322(uParam0, uParam1, 0.5f, 0.458f, 1);
		func_324(uParam0, 7);
	}
	else if (uParam1->f_1657 == 1)
	{
		func_324(uParam0, 9);
	}
	switch (iParam2)
	{
		case 0:
			uParam0->f_3[0 /*3*/] = { -1173.374f, -1604.762f, 3.1734f };
			uParam0->f_3[1 /*3*/] = { -1180.065f, -1609.454f, 3.1734f };
			uParam0->f_3[2 /*3*/] = { -1166.428f, -1628.932f, 3.1734f };
			uParam0->f_3[3 /*3*/] = { -1159.739f, -1624.236f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_187(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 1:
			uParam0->f_3[0 /*3*/] = { -1157.2f, -1627.22f, 3.1734f };
			uParam0->f_3[1 /*3*/] = { -1163.84f, -1632.52f, 3.1734f };
			uParam0->f_3[2 /*3*/] = { -1150.21f, -1652.12f, 3.1734f };
			uParam0->f_3[3 /*3*/] = { -1143.55f, -1647.38f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_187(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 2:
			uParam0->f_3[0 /*3*/] = { -1186.49f, -1613.97f, 3.1734f };
			uParam0->f_3[1 /*3*/] = { -1193.2f, -1618.66f, 3.1734f };
			uParam0->f_3[2 /*3*/] = { -1179.52f, -1638.12f, 3.1734f };
			uParam0->f_3[3 /*3*/] = { -1172.85f, -1633.42f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_187(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 3:
			uParam0->f_3[0 /*3*/] = { -1170.43f, -1637.13f, 3.1734f };
			uParam0->f_3[1 /*3*/] = { -1177.05f, -1641.73f, 3.1734f };
			uParam0->f_3[2 /*3*/] = { -1163.35f, -1661.24f, 3.1734f };
			uParam0->f_3[3 /*3*/] = { -1156.67f, -1656.57f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_187(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 4:
			uParam0->f_3[0 /*3*/] = { -1199.63f, -1623.2f, 3.1734f };
			uParam0->f_3[1 /*3*/] = { -1206.29f, -1627.84f, 3.1734f };
			uParam0->f_3[2 /*3*/] = { -1192.65f, -1647.33f, 3.1734f };
			uParam0->f_3[3 /*3*/] = { -1185.96f, -1642.67f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_187(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 5:
			uParam0->f_3[0 /*3*/] = { -1183.47f, -1646.29f, 3.1734f };
			uParam0->f_3[1 /*3*/] = { -1190.16f, -1650.97f, 3.1734f };
			uParam0->f_3[2 /*3*/] = { -1176.48f, -1670.47f, 3.1734f };
			uParam0->f_3[3 /*3*/] = { -1169.79f, -1665.81f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_187(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 6:
			uParam0->f_3[0 /*3*/] = { -1196.58f, -1655.5f, 3.1734f };
			uParam0->f_3[1 /*3*/] = { -1203.27f, -1660.14f, 3.1734f };
			uParam0->f_3[2 /*3*/] = { -1189.58f, -1679.62f, 3.1734f };
			uParam0->f_3[3 /*3*/] = { -1182.9f, -1674.99f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_187(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 7:
			uParam0->f_3[0 /*3*/] = { -1212.78f, -1632.34f, 3.1734f };
			uParam0->f_3[1 /*3*/] = { -1219.5f, -1636.97f, 3.1734f };
			uParam0->f_3[2 /*3*/] = { -1205.75f, -1656.57f, 3.1734f };
			uParam0->f_3[3 /*3*/] = { -1199.12f, -1651.88f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_187(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 8:
			uParam0->f_3[0 /*3*/] = { -54.61f, 947f, 231.19f };
			uParam0->f_3[1 /*3*/] = { -55.26f, 939.3f, 231.19f };
			uParam0->f_3[2 /*3*/] = { -31.67f, 937.09f, 231.18f };
			uParam0->f_3[3 /*3*/] = { -31.11f, 945.09f, 231.19f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_187(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -43.02f, 942.03f, 232.19f };
			break;
		
		default:
			break;
	}
}

void func_322(var uParam0, var uParam1, float fParam2, float fParam3, bool bParam4)//Position - 0x10116
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fParam2, fParam2, fParam2) };
	uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
	uParam1->f_1664 = { func_187(uParam1->f_1661, uParam1->f_1658) };
	uParam0->f_49 = { uParam1->f_1658 / FtoV(SYSTEM::VMAG(uParam1->f_1658)) };
	uParam0->f_52 = { uParam1->f_1661 / FtoV(SYSTEM::VMAG(uParam1->f_1661)) };
	uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fParam3, fParam3, fParam3) };
	uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fParam3, fParam3, fParam3) };
	uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fParam3, fParam3, fParam3) };
	uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fParam3, fParam3, fParam3) };
	uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
	uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
	uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
	func_325(uParam0, SYSTEM::VMAG(uParam1->f_1661));
	func_323(uParam0, fParam3);
	if (bParam4)
	{
		fVar0 = -0.694f;
		fVar1 = 0.693f;
		fVar2 = 1.075f;
		fVar3 = 0.87f;
	}
	else
	{
		fVar0 = -0.834f;
		fVar1 = 0.834f;
		fVar2 = 1.148f;
		fVar3 = 0.928f;
	}
	uParam0->f_39[0 /*3*/] = { uParam0->f_29 + uParam1->f_1661 * Vector(fVar0, fVar0, fVar0) };
	uParam0->f_39[0 /*3*/].f_2 = (uParam0->f_39[0 /*3*/].f_2 + fVar2);
	uParam0->f_39[1 /*3*/] = { uParam0->f_29 };
	uParam0->f_39[1 /*3*/].f_2 = (uParam0->f_39[1 /*3*/].f_2 + fVar3);
	uParam0->f_39[2 /*3*/] = { uParam0->f_29 + uParam1->f_1661 * Vector(fVar1, fVar1, fVar1) };
	uParam0->f_39[2 /*3*/].f_2 = (uParam0->f_39[2 /*3*/].f_2 + fVar2);
}

void func_323(var uParam0, float fParam1)//Position - 0x1034C
{
	uParam0->f_2 = fParam1;
}

void func_324(var uParam0, int iParam1)//Position - 0x1035A
{
	*uParam0 = iParam1;
}

void func_325(var uParam0, float fParam1)//Position - 0x10367
{
	uParam0->f_1 = fParam1;
}

var func_326(var uParam0)//Position - 0x10375
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	bool bVar5;
	
	fVar0 = 1E+08f;
	bVar5 = ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0);
	if (func_223(PLAYER::PLAYER_ID(), 0))
	{
		bVar5 = ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())), 0);
	}
	if (!bVar5)
	{
		if (func_223(PLAYER::PLAYER_ID(), 0))
		{
			vVar2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())), true) };
		}
		else
		{
			vVar2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		fVar1 = SYSTEM::VDIST2(vVar2, -769.058f, 165.294f, 66.474f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 16;
		}
		fVar1 = SYSTEM::VDIST2(vVar2, -1171.28f, -1599.59f, 3.34f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 13;
		}
		fVar1 = SYSTEM::VDIST2(vVar2, 487.5186f, -217.7697f, 52.7864f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 19;
		}
		fVar1 = SYSTEM::VDIST2(vVar2, -49.912f, 942.5634f, 231.1741f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 23;
		}
		fVar1 = SYSTEM::VDIST2(vVar2, -1225.454f, 344.8268f, 78.9859f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 17;
		}
		fVar1 = SYSTEM::VDIST2(vVar2, -1623.454f, 257.1566f, 58.5552f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 15;
		}
		fVar1 = SYSTEM::VDIST2(vVar2, -939.6168f, -1255.732f, 6.9773f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 18;
		}
		fVar1 = SYSTEM::VDIST2(vVar2, -1371.275f, -107.9437f, 49.7046f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 20;
		}
		fVar1 = SYSTEM::VDIST2(vVar2, -2869.991f, 9.2297f, 10.6083f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 14;
		}
	}
	return *uParam0;
}

void func_327(var uParam0, int iParam1, int iParam2)//Position - 0x10562
{
	STREAMING::REQUEST_MODEL(joaat("prop_tennis_ball"));
	STREAMING::REQUEST_MODEL(iParam1);
	STREAMING::REQUEST_MODEL(iParam2);
	STREAMING::REQUEST_MODEL(joaat("prop_tennis_rack_01b"));
	STREAMING::REQUEST_ANIM_DICT("mini@tennis");
	STREAMING::REQUEST_ANIM_DICT("mini@tennis@female");
	STREAMING::REQUEST_ANIM_DICT("weapons@tennis@male");
	uParam0->f_1668 = iParam1;
	uParam0->f_1669 = iParam2;
}

int func_328(int iParam0)//Position - 0x105AB
{
	if (!func_44(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_329()//Position - 0x105D6
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_106565.f_9079 || func_338(0))
	{
		if (!func_337())
		{
			iVar0 = func_336();
			if (iVar0 != -1)
			{
				if (!func_331(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_84464[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_330();
		}
	}
}

void func_330()//Position - 0x10647
{
	Global_93717 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_71822))
		{
			switch (func_41())
			{
				case 0:
					StringCopy(&Global_71822, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_71822, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_71822, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_71826, "", 16);
		}
		Global_93717 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_71822))
		{
			switch (func_41())
			{
				case 0:
					StringCopy(&Global_71822, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_71822, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_71822, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_71826, "", 16);
		}
		Global_93717 = 0;
		MISC::SET_BIT(&(Global_93682.f_20), 25);
	}
}

int func_331(int iParam0)//Position - 0x10736
{
	int iVar0;
	int iVar1;
	
	func_330();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_84464[iParam0 /*5*/];
	iVar1 = Global_71859.f_109[iVar0 /*4*/];
	func_335(iVar1, 1);
	PLAYER::_0xC9A763D8FE87436A(PLAYER::PLAYER_ID());
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
	func_332(&(Global_106565.f_2357.f_539), iVar1);
	if (Global_87887 == Global_93719)
	{
		Global_106565.f_9079.f_330[iVar1 /*6*/].f_1++;
	}
	if (!MISC::IS_BIT_SET(Global_84500[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
		}
	}
	Global_106565.f_9079.f_330[iVar1 /*6*/].f_2++;
	Global_87887 = Global_93719;
	if (iParam0 == -1)
	{
		if (Global_106565.f_9079)
		{
		}
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_84464[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_84464[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_332(var uParam0, int iParam1)//Position - 0x1084D
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_106565.f_18527[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !MISC::IS_BIT_SET(Global_106565.f_9079.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_334(Global_106565.f_18527[iVar0], &vVar2, &fVar5))
			{
				Global_106565.f_18527[iVar0] = 318;
				func_333(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_91102[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_9 = 0f;
				Global_91102[iVar0 /*29*/].f_12 = 0f;
				Global_91102[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_10 = 0f;
				Global_91102[iVar0 /*29*/].f_13 = 0f;
				Global_91102[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_11 = 0f;
				Global_91102[iVar0 /*29*/].f_14 = 0f;
				Global_91102[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_26 = 0f;
				Global_91102[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_27 = 0f;
				Global_91102[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_333(var uParam0)//Position - 0x10A16
{
	*uParam0 = -15;
}

int func_334(int iParam0, var uParam1, float fParam2)//Position - 0x10A24
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_334(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_334(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_335(int iParam0, bool bParam1)//Position - 0x11393
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

int func_336()//Position - 0x113D1
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (MISC::IS_BIT_SET(Global_84464[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_337()//Position - 0x11406
{
	if (((Global_93682 == 13 || Global_93682 == 10) || Global_93682 == 11) || Global_93682 == 12)
	{
		return 0;
	}
	return 1;
}

bool func_338(bool bParam0)//Position - 0x11444
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71838, 0);
}

