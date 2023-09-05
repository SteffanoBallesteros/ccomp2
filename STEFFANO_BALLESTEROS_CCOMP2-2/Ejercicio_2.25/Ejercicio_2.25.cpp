//ejercicio 2.25

#include <iostream>
using namespace std;

int main() {
	int num1, num2, num3;
	cout << "Digite un numero: ";
	cin >> num1;
	cout << "Digite el segundo numero: ";
	cin >> num2;
	cout << "Digite el tercer numero: ";
	cin >> num3;

	if ((num3 % num1 == 0) && (num3 % num2 == 0)) {
		cout << "El numero " << num1 << " y el numero " << num2 << " son factores de " << num3 << endl;
	}
	else {
		cout << "El numero " << num1 << " y el numero " << num2 << " no son factores de " << num3 << endl;
	}
	return 0;
}