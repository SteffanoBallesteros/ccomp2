//ejercicio 2.27

#include <iostream>
using namespace std;
int main() {
	char input;
	cout << "Ingrese un caracter: ";
	cin >> input;
	cout << input << endl;  
	cout<< "El caracter esta en la posicion " << static_cast<int>(input) << " de la tabla ASCII" << endl;
	return 0;
}