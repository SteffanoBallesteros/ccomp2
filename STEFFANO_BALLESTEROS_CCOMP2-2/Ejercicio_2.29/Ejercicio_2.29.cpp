//ejercicio 2.29

#include <iostream>
using namespace std;
int main() {
	int lado1 = 0, lado2 = 1, lado3 = 2, lado4 = 3, lado5 = 4;
	int area_cubo = 0, volumen_cubo = 0;
	//cuando el lado es 0
	area_cubo = 6 * (lado1*lado1);
	volumen_cubo = lado1 * lado1 * lado1;
	cout << "El area del cubo cuando el lado mide 0 es: " << area_cubo << endl;
	cout << "El volumen del cubo cuando el lado mide 0 es: " << volumen_cubo << endl;
	cout << endl;
	//cuando el lado es 1
	area_cubo = 6 * (lado2 * lado2); 
	volumen_cubo = lado2 * lado2 * lado2;
	cout << "El area del cubo cuando el lado mide 1 es: " << area_cubo << endl;
	cout << "El volumen del cubo cuando el lado mide 1 es: " << volumen_cubo << endl;
	cout << endl;
	//cuando el lado es 2
	area_cubo = 6 * (lado3 * lado3); 
	volumen_cubo = lado3 * lado3 * lado3; 
	cout << "El area del cubo cuando el lado mide 2 es: " << area_cubo << endl;
	cout << "El volumen del cubo cuando el lado mide 2 es: " << volumen_cubo << endl;
	cout << endl;
	//cuando el lado es 3
	area_cubo = 6 * (lado4 * lado4); 
	volumen_cubo = lado4 * lado4 * lado4;
	cout << "El area del cubo cuando el lado mide 3 es: " << area_cubo << endl;
	cout << "El volumen del cubo cuando el lado mide 3 es: " << volumen_cubo << endl;
	cout << endl;
	//cuando el lado es 4
	area_cubo = 6 * (lado5 * lado5); 
	volumen_cubo = lado5 * lado5 * lado5;
	cout << "El area del cubo cuando el lado mide 4 es: " << area_cubo << endl;
	cout << "El volumen del cubo cuando el lado mide 4 es: " << volumen_cubo << endl;

	return 0;
}