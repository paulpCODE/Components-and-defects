#pragma once
#include"function.h"
#include <list>
enum typeComp {typeA, typeB, typeC};

class component
{
private:
	typeComp _typeComp;
	typeComp _Set_rand_type();
	std::list<function> _funclist;
	void _createFuncList();
public:
	int compVar;//��������� ����������
	int CompWorkTimeSec;
	bool comp_checks;
	void compCheking();
	void compWorking();
	//void printCompFuncList();
	typeComp Get_type();
	component();
	~component();
};

