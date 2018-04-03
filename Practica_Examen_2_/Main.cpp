#include "AbstractCombo.h"
#include "Hamburguesa.h"
#include "Ingrediente.h"
#include "Jamon.h"
#include "Lechuga.h"
#include "_Menu.h"
#include "Menu.h"
#include "Sandwich.h"
using namespace std;

int main() {
	char res;

	do {
		AbstractCombo* combo = new menu();
		cout << endl;
		AbstractCombo* jamon = new Jamon(combo);
		cout << endl;
		AbstractCombo* lechuga = new Lechuga(jamon);
		cout << endl;
		cout << lechuga->toString() << endl;
		cout << "\t\tPrecio total:\t" << lechuga->costo() << endl;
		cout << "\t\t---------------------";
		cout << "\n\t\tDesea pedir algo mas?" << endl;
		cout << "\t\ts/n" << endl << "\t\tRespuesta:";
		cin >> res;
		delete combo;
		system("cls");
	} while (res == 's');
	cin.get();
	return 0;
}