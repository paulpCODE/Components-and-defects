#pragma once

//types of defects
enum typeDef {typeAlfa, typeBeta};

class defect
{
private:
	typeDef _typeDef; // type of defect
public:
	// Returns random type of defect
	typeDef _Set_rand_typeDef();
	// Returns type of defect
	typeDef Get_typeDef();
	defect();
	~defect();
};

