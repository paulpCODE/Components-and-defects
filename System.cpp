#include "pch.h"
#include "System.h"

using std::cout;

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

void System::_printSystem(int SysVar, int SysVarDefDel, int SysTime)
{
	cout << "\nSystem's cost: " << SysVar;
	cout << "\n\nSystem's cost that was spent on deleting defects : " << SysVarDefDel;
	cout << "\n\nSystem's work time: " << SysTime << std::endl;
}

void System::SystemWorking()
{
	int SystemWorkTimeSec = 0;
	int SystemVarDefectDelete = 0;
	while ((SystemWorkTimeSec < _SystemWorkSecLIMIT) && (SystemVarDefectDelete < _SystemVarDefectDeleteLIMIT)) {
		for (auto i = _complist.begin(); i != _complist.end(); i++) {
			if (i._Ptr->_Myval.comp_checks) {
				i._Ptr->_Myval.compChecking();
			}
			else {
				i._Ptr->_Myval.compWorking();
			}
			SystemWorkTimeSec += i._Ptr->_Myval.CompWorkTimeSec;
			SystemVarDefectDelete += i._Ptr->_Myval.compVarDefectDelete;
			_SystemVar += i._Ptr->_Myval.compVar;
			i._Ptr->_Myval.CompWorkTimeSec = 0;
			i._Ptr->_Myval.compVarDefectDelete = 0;
			i._Ptr->_Myval.compVar = 0;
		}
	}
	_printSystem(_SystemVar, SystemVarDefectDelete, SystemWorkTimeSec);
}

System::System()
{
	_SystemWorkSecLIMIT = 5000;
	_SystemVarDefectDeleteLIMIT = 2000;
	_SystemVar = 0;
	_createCompList();
}


System::~System()
{
}
