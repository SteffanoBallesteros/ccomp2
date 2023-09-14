#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Ingrese un numero XD: ";
	cin >> n;
	int x = 0;
	int y = 1;
	int aux = 0;
	for (int i = 1; i <= n; i++) {
		x = y;
		y = aux;
		aux = x + y;
		cout << aux << " ";
	}

	return 0;
}