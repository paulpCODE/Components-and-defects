#include "pch.h"
#include "function.h"
#include <ctime>


void function::funcChecking(function & temp)
{
	if (temp._existDef) {
		srand(time(NULL));
		int chance;
		if (temp.typeFuncDefect == 0) {
			chance = rand() % 53;
			if ((chance > 35) && (chance < 46)) {
				temp.sumFuncWorkTimeSec += 12;
				temp._existDef = false;
				temp.function_work = true;
			}
		}
		else if (temp.typeFuncDefect == 1) {
			chance = rand() % 67;
			if ((chance > 18) && (chance < 34)) {
				temp.sumFuncWorkTimeSec += 8;
				temp._existDef = false;
				temp.function_work = true;
			}
		}
	}
	else {
		temp.function_work = true;
	}
}

void function::funcWorking(function &temp)
{
	temp.funcVar = 0;
	if (temp.function_work) {
		temp._existDef = temp.existDef(temp.funcWorkTimeSec, temp.typeFuncDefect);
		if (temp._existDef) {
			temp.function_work = false;
		}
		else {
			temp.funcVar += temp.funcWorkTimeSec;
		}
	}
}

bool function::existDef(int timeWork, typeDef type)
{
	bool exist = false;
	srand(time(NULL));
	int chance;
	for (int i = 0; i < timeWork; i++) {
		if (type == 0) {
			chance = rand() % 44;
			if ((chance > 4) && (chance < 7)) {//4.5% to find a defect
				exist = true;
			}
		}
		else if (type == 1) {
			chance = rand() % 68;
			if ((chance > 11) && (chance < 16)) {//5.8% to find a defect
				exist = true;
			}
		}
	}
	return exist;
}

function function::operator=(function alfa)
{
	_existDef = alfa._existDef;
	function_work = alfa.function_work;
	funcVar = alfa.funcVar;
	funcWorkTimeSec = alfa.funcWorkTimeSec;
	return *this;
}

function::function()
{
	function_work = true;
	_existDef = false;
	funcVar = 0;
	typeFuncDefect = _funcDefect.Get_typeDef();
	srand(time(NULL));
	funcWorkTimeSec = rand() % 15 + 1;
}


function::~function()
{
}
