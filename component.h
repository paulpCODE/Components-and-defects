#pragma once
#include"function.h"
#include<list>
enum typeComp {typeA, typeB, typeC};

class component
{
private:
	typeComp _typeComp;
	typeComp _Set_rand_type();
	int _num_of_functions;
protected:
	std::list<function> funclist;
	void createFuncList();
	int compVar;//��������� ����������
public:
	bool comp_cheks;
	int sumCompWorkTimeSec;
	void compCheking();
	void compWorking();
	typeComp Get_type();
	component();
	~component();
};

