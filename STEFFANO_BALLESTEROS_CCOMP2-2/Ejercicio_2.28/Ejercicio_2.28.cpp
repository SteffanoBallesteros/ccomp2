//ejercicio 2.28

#include <iostream>
using namespace std;

int main() {
	int digito_4 = 1239;
	int unidad = 0, decena = 0, centena = 0, millar = 0;
	millar = digito_4 / 1000;
	centena = (digito_4 % 1000)/100;
	decena = (digito_4 % 100) / 10;
	unidad = digito_4 % 10;

	cout << unidad << "  " << decena << "  " << centena << "  " << millar << endl;
	return 0;
}