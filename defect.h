#pragma once

enum typeDef {typeAlfa, typeBeta, typeGamma};

class defect
{
private:
	typeDef _typeDef;
public:
	bool existDefect(int timeWork, typeDef type);
	typeDef Get_typeDef();
	typeDef Set_rand_typeDef();
	defect();
	~defect();
};

