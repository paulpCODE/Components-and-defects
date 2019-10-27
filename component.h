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
	bool comp_cheks;
	std::list<function> funclist;
	void createFuncList();
	int compVar;//Стоимость компонента
public:
	bool compCheking();
	void compWorking();
	typeComp Get_type();
	component();
	~component();
};

