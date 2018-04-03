#include "Chalupa.h"

Chalupa::Chalupa(void)
{
	this->precio = 500;
}

float Chalupa::costo()
{
	return this->precio;
}

string Chalupa::toString()
{
	stringstream s;
	s << "\t\tChalupa\t\t" << this->costo() << endl;
	return s.str();
}

Chalupa::~Chalupa(void)
{
}
