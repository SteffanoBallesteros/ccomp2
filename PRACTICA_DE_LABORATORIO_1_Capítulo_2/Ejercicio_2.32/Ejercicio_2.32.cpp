//ejercicio 2.32

#include <iostream>
using namespace std;

int main() {
	int edad;
	cout << "Digite su edad: ";
	cin >> edad;

	float max=0, min=0;

	cout << "Usando la ecuacion comun." << endl;
	float Maximun_heart_rate_1 = 220 - edad;
	cout << Maximun_heart_rate_1 << endl;
	cout << "\nUsando la formula de Hence" << endl;
	float Maximun_heart_rate_2 = 208 - (0.7 * edad);
	cout << Maximun_heart_rate_2 << endl;
	cout << "\nUsando la formula de Gellish" << endl;
	float Maximun_heart_rate_3 = 207 - (0.7 * edad);
	cout << Maximun_heart_rate_3 << endl;
	cout << "\nUsando la formila de Nes" << endl;
	float Maximun_heart_rate_4 = 211 - (0.64 * edad);
	cout << Maximun_heart_rate_4 << endl;

	if ((Maximun_heart_rate_1 > Maximun_heart_rate_2) && (Maximun_heart_rate_1 > Maximun_heart_rate_3) && (Maximun_heart_rate_1 > Maximun_heart_rate_4)) {
		max = Maximun_heart_rate_1;
	}
	if ((Maximun_heart_rate_1 < Maximun_heart_rate_2) && (Maximun_heart_rate_1 < Maximun_heart_rate_3) && (Maximun_heart_rate_1 < Maximun_heart_rate_4)) {
		min = Maximun_heart_rate_1;
	}

	if ((Maximun_heart_rate_2 > Maximun_heart_rate_1) && (Maximun_heart_rate_2 > Maximun_heart_rate_3) && (Maximun_heart_rate_2 > Maximun_heart_rate_4)) {
		max = Maximun_heart_rate_2;
	}
	if ((Maximun_heart_rate_2 < Maximun_heart_rate_1) && (Maximun_heart_rate_2 < Maximun_heart_rate_3) && (Maximun_heart_rate_2 < Maximun_heart_rate_4)) {
		min = Maximun_heart_rate_2;
	}

	if ((Maximun_heart_rate_3 > Maximun_heart_rate_2) && (Maximun_heart_rate_3 > Maximun_heart_rate_1) && (Maximun_heart_rate_3 > Maximun_heart_rate_4)) {
		max = Maximun_heart_rate_3;
	}
	if ((Maximun_heart_rate_3 < Maximun_heart_rate_2) && (Maximun_heart_rate_3 < Maximun_heart_rate_1) && (Maximun_heart_rate_3 < Maximun_heart_rate_4)) {
		min = Maximun_heart_rate_3;
	}

	if ((Maximun_heart_rate_4 > Maximun_heart_rate_2) && (Maximun_heart_rate_4 > Maximun_heart_rate_3) && (Maximun_heart_rate_4 > Maximun_heart_rate_1)) {
		max = Maximun_heart_rate_4;
	}
	if ((Maximun_heart_rate_4 < Maximun_heart_rate_2) && (Maximun_heart_rate_4 < Maximun_heart_rate_3) && (Maximun_heart_rate_4 < Maximun_heart_rate_1)) {
		min = Maximun_heart_rate_4;
	}

	
	cout << "\nEl MRH mayor o maximo es: " << max << endl; 
	cout << "El MRH menor o minimo es: " << min << endl;
	return 0;
}
