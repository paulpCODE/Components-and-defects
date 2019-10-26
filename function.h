#pragma once
#include<iostream>
#include "component.h"
#include "defect.h"
class function : public component, public defect
{
public:
	int funcWorkTime;
	bool function_work;//func work, if function dont works -> comp stops and checks.
	function();
	~function();
};

