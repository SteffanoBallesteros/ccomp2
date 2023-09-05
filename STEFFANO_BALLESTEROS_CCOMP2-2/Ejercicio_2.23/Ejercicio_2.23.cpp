//ejercicio 2.23

#include <iostream>
using namespace std;

int main() {
	int a = 1;
	int b = 3;
	int c = -12;
	int d = 2;
	int e = 32;
	int mayor = 0, menor = 0;
	
	mayor = a;
	menor = a;

	if (b > mayor) {
		mayor = b;
	}
	else if (b < menor) {
		menor = b;
	}

	if (c > mayor) {
		mayor = c;
	}
	else if (c < menor) {
		menor = c;
	}

	if (d > mayor) {
		mayor = d;
	}
	else if (d < menor) {
		menor = d;
	}

	if (e > mayor) {
		mayor = e;
	}
	else if (e < menor) {
		menor =e;
	}

	cout << "El numero mayor es: " << mayor << endl;
	cout << "El numero menor es: " << menor << endl;
	return 0;
}