#pragma once
#include <iostream>
#include "function.h"
#include"component.h"

class System
{
private:
	int _SystemVar;
	int _SystemWorkSec;
	typeComp _typeComp1;
	//typeComp _typeComp2;
	//typeComp _typeComp3;
public:
	void SystemWorking();
	component comp1;
	//component comp2;
	//component comp3;
	System();
	~System();
};

