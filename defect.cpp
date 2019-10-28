#include "pch.h"
#include <iostream>
#include <ctime>
#include <random>
#include "defect.h"

typeDef defect::Get_typeDef()
{
	return _typeDef;
}

typeDef defect::_Set_rand_typeDef()
{
	int rand_num;
	rand_num = rand() % 2;
	typeDef type;
	switch (rand_num) {
	case 0: type = typeAlfa; break;
	case 1: type = typeBeta; break;
	default:
		break;
	}
	return type;
}

defect::defect()
{
	_typeDef = _Set_rand_typeDef();
}


defect::~defect()
{
}
