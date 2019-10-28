#include "pch.h"
#include "System.h"



void System::SystemWorking()
{
	int sumCompWorkTimeSec = 0;
	while (sumCompWorkTimeSec < _SystemWorkSec) {
		if (comp1.comp_checks) {
			comp1.compCheking();
		}
		else {
			comp1.compWorking();
		}
		sumCompWorkTimeSec += comp1.CompWorkTimeSec;
		_SystemVar += comp1.compVar;
		comp1.CompWorkTimeSec = 0;
		comp1.compVar = 0;
	}
	std::cout << _SystemVar;
}

System::System()
{
	_SystemWorkSec = 1000;
	_SystemVar = 0;
	_typeComp1 = comp1.Get_type();
	//_typeComp2 = comp2.Get_type();
	//_typeComp3 = comp3.Get_type();
}


System::~System()
{
}
