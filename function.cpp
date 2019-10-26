#include "pch.h"
#include "function.h"
#include <ctime>


bool function::funcWorking(int timeWork, typeDef type)
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
			chance = rand() % 56;
			if ((chance > 7) && (chance < 11)) {//5.3% to find a defect
				exist = true;
			}
		}
		else if (type == 2) {
			chance = rand() % 68;
			if ((chance > 11) && (chance < 16)) {//5.8% to find a defect
				exist = true;
			}
		}
	}
	if (exist) {
		return true;
	}
	else {
		return false;
	}
}

function::function()
{
	bool existDef;
	defect funcDefect;
	typeDef typeFuncDefect = funcDefect.Get_typeDef();
	do {
		function_work = true;
		srand(time(NULL));
		funcWorkTime = rand() % 15 + 1;
	} 
	while (function_work); {
		existDef = funcWorking(funcWorkTime, typeFuncDefect);
		if (existDef) {
			function_work = false;
		}
		else {
			var = var + funcWorkTime;
		}
	}
}


function::~function()
{
}
