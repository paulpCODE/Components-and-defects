#pragma once
#include <iostream>
#include "function.h"
#include"component.h"
#include <list>

class System
{
private:
	int _SystemVar;
	int _SystemWorkSec;
	std::list<component> _complist;
	void _createCompList();
public:
	void SystemWorking();
	System();
	~System();
};

