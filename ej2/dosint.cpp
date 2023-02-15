#include <iostream>

using namespace std;

int main(){
	int vec[10];
	float suma=0;
	float prom = 0.0;
	cout << "Ingrese 10 valores enteros: \n";
	for (int vc = 0; vc < 10; vc++){
		cin >> vec[vc];
	}
	for (int vc = 0; vc < 10; vc++){
		suma = vec[vc] + suma;
	}
	prom = suma/10;
	cout << "La suma es: " << suma << "\n"<<"El promedio es: "<< prom << "\n";
	return 0;
}
