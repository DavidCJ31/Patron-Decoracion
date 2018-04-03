#pragma once
#include "Menu.h"

class Chalupa :public Menu {
public:
	Chalupa(void);
	float costo();
	string toString();
	~Chalupa(void);

};