#include "pch.h"
#include "System.h"



void System::SystemWorking()
{
	int SumSec = 0;
	while (SumSec < _SystemWorkSec) {
		comp1.compWorking();
	}
}

System::System()
{
	_SystemWorkSec = 100;
	_typeComp1 = comp1.Get_type();
	_typeComp2 = comp2.Get_type();
	_typeComp3 = comp3.Get_type();
}


System::~System()
{
}
