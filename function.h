#pragma once
#include <iostream>
#include "defect.h"
class function
{
private:
	bool _existDef;
	defect _funcDefect; // defect which can detects in function
	//returns true or false of defect's existence. Uses in funcWorking(function &temp)
	bool _chanceDef(int timeWork, typeDef type);
	int _funcWorkTimeSec; //function's work time in seconds.
public:
	typeDef typeFuncDefect; // type of defect which can detects in function
	// if component dont works then all functions cheks.
	void funcChecking(function &temp);
	void funcWorking(function &temp);
	// Generate random function
	void funcGeneration();
	int funcVar; // function's cost (updates after each cycle)
	int sumFuncWorkTimeSec; // sum of function's work and check time in seconds (updates after each cycle)
	bool function_work;
//	function operator = (function alfa);
	function();
	~function();
};

