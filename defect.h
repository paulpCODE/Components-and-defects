#pragma once

enum typeDef {typeAlfa, typeBeta};

class defect
{
protected:
	typeDef _typeDef;
public:
	typeDef _Set_rand_typeDef();
	typeDef Get_typeDef();
	defect();
	~defect();
};

