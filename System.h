#pragma once
#include <iostream>
#include "function.h"
#include"component.h"
#include <list>

class System
{
private:
	int _SystemVar; // System's cost
	int _SystemVarDefectDeleteLIMIT; // System's cost that was spent on deleting defects
	int _SystemWorkSecLIMIT; // System's work time in seconds.
	// list of components
	std::list<component> _complist;
	// creates random count of components and adds to the _complist.
	void _createCompList();
	void _printSystem(int SysVar, int SysVarDefDel, int SysTime);
public:
	// System work.
	void SystemWorking();
	System();
	~System();
};

