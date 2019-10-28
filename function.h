#pragma once
#include <iostream>
#include "defect.h"
class function
{
private:
	bool _existDef;
	defect _funcDefect;
	bool _chanceDef(int timeWork, typeDef type);
	int _funcWorkTimeSec;
public:
	typeDef typeFuncDefect;
	void funcChecking(function &temp);
	void funcWorking(function &temp);
	void funcGeneration();
	int funcVar;
	int sumFuncWorkTimeSec;
	bool function_work;
//	function operator = (function alfa);
	function();
	~function();
};

