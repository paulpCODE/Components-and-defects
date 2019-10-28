#include "pch.h"
#include <iostream>
#include "component.h"
#include <ctime>

using std::cout;
using std::list;

typeComp component::_Set_rand_type()
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

void component::compChecking()
{
	for (auto i = _funclist.begin(); i != _funclist.end(); i++) { //While the list not over
		if (!i._Ptr->_Myval.function_work) { // if function dont works
			i._Ptr->_Myval.funcChecking(*i);
			CompWorkTimeSec += i._Ptr->_Myval.sumFuncWorkTimeSec;
			if (_typeComp == 0) { //if component's type is typeA
				compVar += i._Ptr->_Myval.funcVar + 4;
				compVarDefectDelete += compVar * -1;
			}
			else if (_typeComp == 1) { //if component's type is typeB
				compVar += i._Ptr->_Myval.funcVar;
				compVarDefectDelete += compVar * -1;
			}
			else { //else component's type is typeC
				compVar += i._Ptr->_Myval.funcVar - 4;
				compVarDefectDelete += compVar * -1;
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
	for (auto i = _funclist.begin(); i != _funclist.end(); i++) { //While the list not over
		
		i._Ptr->_Myval.funcWorking(*i);
		if (!i._Ptr->_Myval.function_work) { // if function don't works then comoponent stops and checks. Else cost of function plus to cost of component
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
void component::compGeneration()
{
	_typeComp = _Set_rand_type();
	_createFuncList();
}

component::component()
{
	compVar = CompWorkTimeSec = compVarDefectDelete = 0;
	comp_checks = false;
}


component::~component()
{
}
