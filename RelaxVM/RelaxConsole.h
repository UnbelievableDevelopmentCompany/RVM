#pragma once
#include "Object.h"
#include "RelaxString.h"
#include "RelaxInt32.h"
#include "RelaxFloat.h"
#include "RelaxBool.h"
#include "RelaxNull.h"
#include "ConsoleTextStream.h"
#include "Args.h"

class RelaxConsole : public Object
{
public:
	RelaxConsole() {}
	QString GetDataType() override;

	static Object* Write(RelaxString* data);
	static Object* Write(RelaxInt32* data);
	static Object* Write(RelaxFloat* data);
	static Object* Write(RelaxBool* data);

	static RelaxString* Read();
};

