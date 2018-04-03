#include "Tomate.h"

Tomate::Tomate(AbstractCombo * combo)
{
	this->ptrCombo = combo;
	this->nombre = "Tomate";
	this->precio = 75;
}

float Tomate::costo()
{
	return (this->ptrCombo->costo()+precio);
}

string Tomate::toString()
{
	stringstream s;
	s << ptrCombo->toString() << endl;
	s <<"\t\t"<< this->nombre << "\t\t" << this->precio;
	return s.str();
}

Tomate::~Tomate(void)
{
}
