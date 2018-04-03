#include "Hamburguesa.h"

Hamburguesa::Hamburguesa(void)
{
	this->precio = 600;
}

float Hamburguesa::costo()
{
	return this->precio;
}

string Hamburguesa::toString()
{
	stringstream s;
	s << "\t\tHamburguesa\t" << this->costo() << endl;
	return s.str();
}

Hamburguesa::~Hamburguesa(void)
{
}
