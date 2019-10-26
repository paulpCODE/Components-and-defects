#include "pch.h"
#include <iostream>
#include <ctime>
#include "defect.h"

typeDef defect::Get_typeDef()
{
	return _typeDef;
}

typeDef defect::_Set_rand_typeDef()
{
	srand(time(NULL));
	int rand_num;
	rand_num = rand() % 3;
	typeDef type;
	switch (rand_num) {
	case 0: type = typeAlfa; break;
	case 1: type = typeBeta; break;
	case 2: type = typeGamma; break;
	default:
		break;
	}
	return type;
}

defect::defect()
{
}


defect::~defect()
{
}
