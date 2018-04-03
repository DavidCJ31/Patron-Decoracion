#pragma once
#include "Ingrediente.h"

class Jamon :public Ingrediente {
public:
	Jamon(AbstractCombo* combo);
	float costo();
	string toString();
	~Jamon(void);

};