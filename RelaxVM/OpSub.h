#pragma once
#include "OpBase.h"
#include "StdClassList.h"

class OpSub : public OpBase
{
public:
	void Run() override;
	void Parse(QIODevice& device) override;
};