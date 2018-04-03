#pragma once
#include "Ingrediente.h"

class Lechuga :public Ingrediente {
private:
	//string nombre;
public:
	Lechuga(AbstractCombo* combo);
	float costo();
	string toString();
	~Lechuga(void);

};