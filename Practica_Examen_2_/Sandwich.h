#pragma once
#include "Menu.h"

class Sandwich : public Menu {
public:
	Sandwich(void);
	virtual float costo();
	virtual string toString();
	~Sandwich(void);
};