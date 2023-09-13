#include<iostream>
#include <string>
#include "MotorVehicle.h"
using namespace std;

int main(){
    cout << "Hola, aqui tenemos distintos modelos de autos" << endl;
    MotorVehicle carro_1 ("Toyota","Gasolina premiun", 2015,"Rojo",5000);
    cout << "\nDetalles del primer auto" << endl;
    carro_1.displayCarDetails();
    cout << endl <<endl; 

    MotorVehicle carro_2 ("Ford","Gasolina normal", 2010,"Azul",2000);
    cout << "\nDetalles del segundo auto" << endl;
    carro_2.displayCarDetails();
    cout << endl <<endl;  

    MotorVehicle carro_3 ("Nissan","Gasolina low cost", 2014,"Verde",4000);
    cout << "\nDetalles del tercer auto" << endl;
    carro_3.displayCarDetails();
    cout << endl;
    return 0; 
}