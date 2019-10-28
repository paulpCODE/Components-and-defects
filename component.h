#pragma once
#include"function.h"
#include <list>

//types of components
enum typeComp {typeA, typeB, typeC};

class component
{
private:
	typeComp _typeComp; // Type of component
	// Returns random type of component
	typeComp _Set_rand_type();
	// List of functions
	std::list<function> _funclist;
	// Creates random count of functions and adds created functions to the _funclist
	void _createFuncList();
public:
	int compVar; //cost of component (updates after each cycle)
	int CompWorkTimeSec; // time of component's work (updates after each cycle)
	bool comp_checks;
	// if function detects a defect, component stops and checks
	void compChecking();
	// component works. Returns the update component's cost and time. 
	void compWorking();
	//Generate random component. Uses in _createFuncList()
	void compGeneration();
	component();
	~component();
};

