#pragma once

enum typeComp {typeA, typeB, typeC};

class component
{
private:
	typeComp _typeComp;
protected:
	int workTimeSec;//������ ���������� � ��������
	int var;//��������� ����������
public:
	typeComp Set_rand_type();
	component();
	~component();
};

