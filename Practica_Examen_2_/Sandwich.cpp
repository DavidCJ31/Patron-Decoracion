#include "Sandwich.h"

Sandwich::Sandwich(void)
{
	this->precio = 800;
}

float Sandwich::costo()
{
	return this->precio;
}

string Sandwich::toString()
{
	stringstream s;
	s << "\t\tSandwich\t" << this->costo() << endl;
	return s.str();
}

Sandwich::~Sandwich(void)
{
}
