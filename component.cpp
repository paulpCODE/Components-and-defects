#include "pch.h"
#include <iostream>
#include "component.h"
#include <list>
#include <ctime>

using std::list;

typeComp component::_Set_rand_type()//returns random type of comp
{
	srand(time(NULL));
	unsigned int rand_num;
	rand_num = rand() % 3;
	typeComp rand_type;
	switch (rand_num) {
	case 0: rand_type = typeA; break;
	case 1: rand_type = typeB; break;
	case 2: rand_type = typeC; break;
	default:
		break;
	}
	return rand_type;
}

void component::compCheking()
{
	function tmp;
	for (auto i = funclist.begin(); i != funclist.end(); i++) {
		tmp = *i;
		tmp.funcChecking(tmp);
		sumCompWorkTimeSec += tmp.funcCheckingTimeSec;
		compVar += tmp.funcVar;
	}
}

void component::createFuncList()
{
	srand(time(NULL));
	_num_of_functions = rand() % 4 + 3;
	for (int i = 0; i < _num_of_functions; i++) {
		function temp;
		funclist.push_back(temp);
	}
}

void component::compWorking()
{
	function tmp;
	for (auto i = funclist.begin(); i != funclist.end(); i++) {
		tmp = *i;
		tmp.funcWorking(tmp);
		if (tmp.funcVar == 0) {
			comp_cheks = true;
		}
		else {
			compVar += tmp.funcVar;
		}
		sumCompWorkTimeSec += tmp.sumFuncWorkTimeSec;
	}
}

typeComp component::Get_type()
{
	return _typeComp;
}

component::component()
{
	compVar = 0;
	comp_cheks = false;
	_typeComp = _Set_rand_type();
	createFuncList();
	compWorking();
}


component::~component()
{
}
