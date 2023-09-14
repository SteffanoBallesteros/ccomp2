#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero limite: ";
    cin >> n;

    cout << "Numeros primos hasta " << n << ":" << endl;

    for (int i = 2; i <= n; i++) {
        bool esPrimo = true;

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                esPrimo = false;
                break;
            }
        } 
        if (esPrimo) { 
            cout << i << " ";
        } 
    }
    cout << endl;
    return 0;
}