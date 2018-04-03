#pragma once
#include "Menu.h"
class Hamburguesa : public Menu {
public:
	Hamburguesa(void);
	virtual float costo();
	virtual string toString();
	~Hamburguesa(void);
};