#include "Jamon.h"

Jamon::Jamon(AbstractCombo * combo)
{
	this->ptrCombo = combo;
	this->nombre = "Jamon";
	this->precio = 450;
}

float Jamon::costo()
{
	return (this->ptrCombo->costo()+precio);
}

string Jamon::toString()
{
	stringstream s;
	s << this->ptrCombo->toString() << endl;
	s << "\t\t" << this->nombre << "\t\t" << this->precio << endl;
	return s.str();
}

Jamon::~Jamon(void)
{
}
