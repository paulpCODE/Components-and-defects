#include "pch.h"
#include "System.h"



void System::SystemWorking()
{
	int SumSec = 0;
	while (SumSec < _SystemWorkSec) {
		if (comp1.comp_cheks) {
			comp1.compCheking();
		}
		else {
			comp1.compWorking();
		}
		SumSec += comp1.sumCompWorkTimeSec;
	}
}

System::System()
{
	_SystemWorkSec = 500;
	_typeComp1 = comp1.Get_type();
	//_typeComp2 = comp2.Get_type();
	//_typeComp3 = comp3.Get_type();
}


System::~System()
{
}
