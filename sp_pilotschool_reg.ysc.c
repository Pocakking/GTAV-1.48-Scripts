void __EntryFunction__()
{
	MISC::START_SAVE_DATA(&Global_2883584, 1, 1);
	func_1();
	MISC::STOP_SAVE_DATA();
	MISC::SET_BIT(&Global_4270166, 1);
}

void func_1()
{
	MISC::REGISTER_INT_TO_SAVE(&Global_2883584, "PILOT_SCHOOL_DUMMY_DATA");
}

