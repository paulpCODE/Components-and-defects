#include "pch.h"
#include "function.h"
#include <ctime>


function::function()
{
	defect funcDefect;
	typeDef typeFuncDefect = funcDefect.Get_typeDef();
	srand(time(NULL));
	funcWorkTime = rand() % 15 + 1;
	bool existDef;
	existDef = funcDefect.existDefect(funcWorkTime, typeFuncDefect);
	if (existDef) {

	}
}


function::~function()
{
}
