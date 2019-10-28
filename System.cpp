#include "pch.h"
#include "System.h"



void System::_createCompList()
{
	component temp;
	int numOfComp;
	numOfComp = rand() % 3 + 3;
	for (int i = 0; i < numOfComp; i++) {
		temp.compGeneration();
		_complist.push_back(temp);
	}
}

void System::SystemWorking()
{
	int SystemWorkTimeSec = 0;
	while (SystemWorkTimeSec < _SystemWorkSec) {
		for (auto i = _complist.begin(); i != _complist.end(); i++) {
			if (i._Ptr->_Myval.comp_checks) {
				i._Ptr->_Myval.compChecking();
			}
			else {
				i._Ptr->_Myval.compWorking();
			}
			SystemWorkTimeSec += i._Ptr->_Myval.CompWorkTimeSec;
			_SystemVar += i._Ptr->_Myval.compVar;
			i._Ptr->_Myval.CompWorkTimeSec = 0;
			i._Ptr->_Myval.compVar = 0;
		}
	}
	std::cout << _SystemVar;
}

System::System()
{
	_SystemWorkSec = 5000;
	_SystemVar = 0;
	_createCompList();
}


System::~System()
{
}
