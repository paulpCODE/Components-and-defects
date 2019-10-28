#include "pch.h"
#include <iostream>
#include "component.h"
#include <ctime>

using std::cout;
using std::list;

typeComp component::_Set_rand_type()//returns random type of comp
{
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
	for (auto i = _funclist.begin(); i != _funclist.end(); i++) {
		if (!i._Ptr->_Myval.function_work) {
			i._Ptr->_Myval.funcChecking(*i);
			CompWorkTimeSec += i._Ptr->_Myval.sumFuncWorkTimeSec;
			if (_typeComp == 0) {
				compVar += i._Ptr->_Myval.funcVar + 4;
			}
			else if (_typeComp == 1) {
				compVar += i._Ptr->_Myval.funcVar;
			}
			else {
				compVar += i._Ptr->_Myval.funcVar - 4;
			}
		}
		i._Ptr->_Myval.sumFuncWorkTimeSec = 0;
		i._Ptr->_Myval.funcVar = 0;
	}
	comp_checks = false;
}

void component::_createFuncList()
{
	function temp;
	int numOfFunc;
	numOfFunc = rand() % 4 + 3;
	for (int i = 0; i < numOfFunc; i++) {
		temp.funcGeneration();
		_funclist.push_back(temp);
	}
}

void component::compWorking()
{
	for (auto i = _funclist.begin(); i != _funclist.end(); i++) {
		
		i._Ptr->_Myval.funcWorking(*i);
		if (!i._Ptr->_Myval.function_work) {
			comp_checks = true;
		}
		else {
			compVar += i._Ptr->_Myval.funcVar;
		}
		CompWorkTimeSec += i._Ptr->_Myval.sumFuncWorkTimeSec;
		i._Ptr->_Myval.sumFuncWorkTimeSec = 0;
		i._Ptr->_Myval.funcVar = 0;
	}
}
/*
void component::printCompFuncList()
{
	for (auto i = _funclist.begin(); i != _funclist.end(); i++) {
		cout << "\nType: " << i._Ptr->_Myval.typeFuncDefect;
	}
}
*/
typeComp component::Get_type()
{
	return _typeComp;
}

component::component()
{
	compVar = CompWorkTimeSec = 0;
	comp_checks = false;
	_typeComp = _Set_rand_type();
	_createFuncList();
}


component::~component()
{
}
