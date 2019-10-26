#include "pch.h"
#include <iostream>
#include "component.h"
#include <ctime>

using std::cout;

typeComp component::Set_rand_type()//returns random type of comp
{
	srand(time(NULL));//srand dont works//Every run program randomize 2
	unsigned int rand_num;
	rand_num = rand() % 3;
	typeComp rand_type;
	switch (rand_num) {
	case 0: rand_type = typeA; break;
	case 1: rand_type = typeB; break;
	case 2: rand_type = typeC; break;
	default:
		break;
	}
	return rand_type;
}

component::component()
{
	var = 0;
	_typeComp = Set_rand_type();
	cout << _typeComp;
}


component::~component()
{
}
