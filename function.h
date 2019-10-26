#pragma once
#include <iostream>
#include "component.h"
#include "defect.h"
class function : public component, public defect
{
public:
	bool funcWorking(int timeWork, typeDef type);
	int funcWorkTime;
	bool function_work;
	function();
	~function();
};

