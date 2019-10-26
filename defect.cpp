#include "pch.h"
#include <iostream>
#include <ctime>
#include "defect.h"

typeDef defect::Get_typeDef()
{
	return _typeDef;
}

bool defect::existDefect(int timeWork, typeDef type) //random chance to find defect in function(depend on time). timeWork - time during work function in sec 
{
	bool exist = false;
	srand(time(NULL));
	float chance;
	for (int i = 0; i < timeWork; i++) {
		if (type == 0) {
			chance = rand() % 11;
			if ((chance > 5) && (chance < 5.1)) {
				exist = true;
			}
		}
		else if (type == 1) {
			chance = rand() % 12;
			if ((chance > 3) && (chance < 3.4)) {
				exist = true;
			}
		}
		else if (type == 2) {
			chance = rand() % 13;
			if ((chance > 10) && (chance < 10.5)) {
				exist = true;
			}
		}
	}
	if (exist) {
		return true;
	}
	else {
		return false;
	}
}

typeDef defect::Set_rand_typeDef()
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
