#include "_Menu.h"
#include "Hamburguesa.h"
#include "Sandwich.h"
#include "Chalupa.h"

menu::menu()
{
	char opc;
	cout << "\t\t-------Menu-------\n" << endl;
	cout << "\t\t1. Hamburguesa\t\t" << endl;
	cout << "\t\t2. Sandwich\t\t" << endl;
	cout << "\t\t3. Chalupa\t\t" << endl;
	cout << "\n\t\tOpcion:";
	cin >> opc;
	switch (opc) {
	case '1':
		delete comboMenu;
		comboMenu = new Hamburguesa();
		this->precio = comboMenu->precio;
		break;
	case '2':
		delete comboMenu;
		comboMenu = new Sandwich();
		this->precio = comboMenu->precio;
		break;
	case '3':
		delete comboMenu;
		comboMenu = new Chalupa();
		this->precio = comboMenu->precio;
		break;
	}
}

float menu::costo()
{
	return precio;
}

string menu::toString()
{
	stringstream s;
	s << comboMenu->toString();
	return s.str();
}

menu::~menu()
{
}
