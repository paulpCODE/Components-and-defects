#pragma once
#include <iostream>
#include "defect.h"
class function
{
private:
	bool _existDef;
	defect _funcDefect;
public:
	typeDef typeFuncDefect;
	void funcChecking(function &temp);
	int funcCheckingTimeSec;
	void funcWorking(function &temp);
	bool existDef(int timeWork, typeDef type);
	int funcVar;
	int funcWorkTimeSec;
	int sumFuncWorkTimeSec;
	bool function_work;
	function operator = (function alfa);
	function();
	~function();
};

