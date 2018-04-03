#pragma once
#include "AbstractCombo.h"
class Ingrediente :public AbstractCombo {
protected:
	AbstractCombo *ptrCombo;
	string nombre;
public:
	virtual float costo() = 0;
	virtual string toString() = 0;
	virtual ~Ingrediente(void);
};