#pragma once

enum typeComp {typeA, typeB, typeC};

class component
{
private:
	typeComp _typeComp;
protected:
	unsigned int workTimeSec;//������ ���������� � ��������
	float var;//��������� ����������
public:
	typeComp Set_rand_type();
	component();
	~component();
};

