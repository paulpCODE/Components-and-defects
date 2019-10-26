#pragma once

enum typeComp {typeA, typeB, typeC};

class component
{
private:
	typeComp _typeComp;
protected:
	int workTimeSec;//Работа компонента в секундах
	int var;//Стоимость компонента
public:
	typeComp Set_rand_type();
	component();
	~component();
};

