#include "Lechuga.h"

Lechuga::Lechuga(AbstractCombo * combo)
{
	this->ptrCombo = combo;
	this->nombre = "Lechuga";
	this->precio = 100;
}

float Lechuga::costo()
{
	return (this->ptrCombo->costo() + precio);
}

string Lechuga::toString()
{
	stringstream s;
	s << this->ptrCombo->toString() << endl;
	s << "\t\t" << this->nombre << "\t\t" << this->precio << endl;
	return s.str();
}

Lechuga::~Lechuga(void)
{
}
