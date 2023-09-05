//ejercicio 2.24

#include <iostream>
using namespace std;

int main() {
	int numero_1;
	int numero_2;
	int suma = 0;
	cout << "Digite un numero: ";
	cin >> numero_1;
	cout << "Digite otro numero: ";
	cin >> numero_2;
	suma = numero_1 + numero_2;

	if (numero_1 % 2 == 0) {
		cout << "El primer numero: " << numero_1 << " es par." << endl;
	}
	else {
		cout << "El primer numero: " << numero_1 << " es impar." << endl;
	}

	if (numero_2 % 2 == 0) {
		cout << "El segundo numero: " << numero_2 << " es par." << endl;
	}
	else {
		cout << "El segundo numero: " << numero_2 << " es impar." << endl;
	}

	if (suma % 2 == 0) {
		cout << "La suma de los dos numeros: "<< suma << " es par." << endl;
	}
	else {
		cout << "La suma de los dos numeros " << suma << " es impar." << endl;
	}
	return 0;
}