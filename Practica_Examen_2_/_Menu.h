#pragma once
#include "Menu.h"

class menu:public Menu{
protected:
	Menu* comboMenu;
	float precio;
public:
	menu();
	float costo();
	string toString();
	~menu();


};