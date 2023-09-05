//ejercicio 2.30

#include <iostream>
using namespace std;

int main() {
	float peso, altura;
	cout << "Digite su peso en kg: ";
	cin >> peso;
	cout << "Digite su altura en metros: ";
	cin >> altura;
	float BMI = 0;
	BMI = peso / (altura * altura);
	cout << "Su indice de masa corporal es de " << BMI << endl;
	if (BMI < 18.5) {
		cout << "Su peso es bajo" << endl;
	}
	else if ((BMI >= 18.5) && (BMI <= 24.9)) {
		cout << "Su peso es normal" << endl;
	}
	else if ((BMI >= 25) && (BMI <= 29.9)) {
		cout << "Usted tiene sobrepeso" << endl;
	}
	else {
		cout << "Su peso no es normal, tiene obesidad" << endl;
	}

	return 0;
}