#pragma once
#include "AbstractCombo.h"

class Menu :public AbstractCombo {
public:
	virtual float costo() = 0;
	virtual string toString() = 0;
	~Menu();
};