#pragma once
#include <iostream>
#include "defect.h"
class function : private defect
{
private:
	bool _existDef;
	defect _funcDefect;
public:
	typeDef typeFuncDefect;
	void funcChecking(function &temp);
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

