#pragma once
#include <QtCore>
#include "VirtualMachine.h"

class Program
{
public:
	Program();
	~Program();

	void Start();
	bool IsLaunch();
};