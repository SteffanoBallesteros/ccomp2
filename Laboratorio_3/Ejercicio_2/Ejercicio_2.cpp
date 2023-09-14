#include <iostream>
using namespace std;

bool NumeroPerfecto(int numero) {
    int sumaDivisores = 1; 
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            sumaDivisores += i;
            if (i != numero / i) {
                sumaDivisores += numero / i;
            }
        }
    }
    return sumaDivisores == numero;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de numeros perfectos para hallar: ";
    cin >> n;

    cout << "Los primeros " << n << " numeros perfectos son:" << endl;

    int numero = 2; // Comenzamos desde el primer número par
    int encontrados = 0;

    while (encontrados < n) {
        if (NumeroPerfecto(numero)) {
            cout << numero << " ";
            encontrados++;
        }
        numero++;
    }

    cout << endl;
    return 0;
}