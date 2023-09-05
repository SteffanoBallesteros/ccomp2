//ejercicio 2.31

#include <iostream>
using namespace std;

int main() {
	int total_millas_por_dia;
	int costo_por_galon_de_gasolina;
	int millas_por_galon;
	int tarifas_Estacionamiento;
	int peajes;
	
	cout << "Ingrese el total de millas que recorre por dia: ";
	cin >> total_millas_por_dia;
	cout << "Ingrese el costo por galon de gasolina: ";
	cin >> costo_por_galon_de_gasolina;
	cout << "Ingrese el promedio de millas por galon: ";
	cin >> millas_por_galon;
	cout << "Ingrese las tarifas de estacionamiento por dia: ";
	cin >> tarifas_Estacionamiento;
	cout << "Ingrese el costo de los peajes por dia: ";
	cin >> peajes;

	int total_galon = (total_millas_por_dia / millas_por_galon); //Para saber cuantos galones se usa al dia
	int costo_galon = total_galon * costo_por_galon_de_gasolina; //Para saber el costo de galones usados por dia
	int costo_total = costo_galon + tarifas_Estacionamiento + peajes; //saber gasto total

	cout << "El costo diario cuando conduce a su trabajo es de: $" << costo_total << endl;

	return 0;
}