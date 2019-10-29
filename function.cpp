#include "pch.h"
#include "function.h"


void function::funcChecking(function & temp)
{
	int chance;
	while (temp._existDef) {

		temp.sumFuncWorkTimeSec++;

		if (temp.typeFuncDefect == 0) {
			chance = rand() % 53;
			if ((chance > 35) && (chance < 46)) {// 18% to find a defect
				temp.sumFuncWorkTimeSec += 8;
				temp.funcVar -= 12;
				temp._existDef = false;
				temp.function_work = true;
			}
		}
		else if (temp.typeFuncDefect == 1) {
			chance = rand() % 67;
			if ((chance > 18) && (chance < 32)) {// 22% to find a defect
				temp.sumFuncWorkTimeSec += 4;
				temp.funcVar -= 8;
				temp._existDef = false;
				temp.function_work = true;
			}
		}
	}
}

void function::funcWorking(function &temp)
{
	if (temp.function_work) {
		temp._existDef = temp._chanceDef(temp._funcWorkTimeSec, temp.typeFuncDefect);
		if (temp._existDef) {
			temp.function_work = false;
		}
		else {
			temp.funcVar += temp._funcWorkTimeSec;
		}
	}
}

void function::funcGeneration()
{
	
	_funcWorkTimeSec = rand() % 15 + 1;
	_funcDefect = defect();
	typeFuncDefect = _funcDefect.Get_typeDef();
}

bool function::_chanceDef(int timeWork, typeDef type)
{
	bool existDef = false;
	int chance;
	for (int i = 0; i < timeWork; i++) {
		if (type == 0) {
			chance = rand() % 53;
			if ((chance > 5) && (chance < 7)) {//1.8% to emersion a defect
				existDef = true;
			}
		}
		else if (type == 1) {
			chance = rand() % 72;
			if ((chance > 13) && (chance < 16)) {//2.7% to emersion a defect
				existDef = true;
			}
		}
		sumFuncWorkTimeSec++;
		if (existDef) {
			return existDef;
		}
	}
	return existDef;
}

function::function()
{
	function_work = true;
	_existDef = false;
	funcVar = sumFuncWorkTimeSec = 0;
}


function::~function()
{
}
