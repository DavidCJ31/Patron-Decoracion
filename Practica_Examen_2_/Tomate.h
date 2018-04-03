#pragma once
#include "Ingrediente.h"

class Tomate :public Ingrediente {
public:
	Tomate(AbstractCombo* combo);
	float costo();
	string toString();
	~Tomate(void);
};