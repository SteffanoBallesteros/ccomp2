//ejercicio 2.20
#include <iostream>

using namespace std;

int main() {
	float pi = 3.14159;
	float diametro_circulo = 0;
	float circunferencia = 0;
	float area_circulo = 0;
	float radio;
	cout << "Digite el radio del circulo: ";
	cin >> radio;
	area_circulo = pi * (radio*radio);
	cout << "El area del circulo es: " << area_circulo << endl;
	diametro_circulo = radio * 2;
	cout << "El diametro del circulo es: " << diametro_circulo << endl;
	circunferencia = (2 * pi) * radio;
	cout << "La circunferencia del circulo es: " << circunferencia << endl;
	return 0;
}