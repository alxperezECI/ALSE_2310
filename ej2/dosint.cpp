#include <iostream>

using namespace std;

int main(){
	int x, y, z;
	cout << "Ingresar dos número enteros: ";
	cin >> x >> y;
	z = x;
	x = y;
	y = z;
	cout << "Impresos en orden inverso: " << x << " y " << y << " " << z << "\n";

	return 0;
}
