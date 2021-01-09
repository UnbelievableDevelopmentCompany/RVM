#pragma once
enum Instruction
{
	CREATE_MAIN_CLASS = 1,
	NEW,
	CREATE_CLASS,
	CREATE_METHOD,
	CALL_METHOD,
	GET,
	PUSH_STR,
	PUSH_INT32,
	RETURN,
	SET,
	LOCAL
};