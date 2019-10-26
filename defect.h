#pragma once

enum typeDef {typeAlfa, typeBeta, typeGamma};

class defect
{
private:
	typeDef _typeDef;
	typeDef _Set_rand_typeDef();
public:
	typeDef Get_typeDef();
	defect();
	~defect();
};

