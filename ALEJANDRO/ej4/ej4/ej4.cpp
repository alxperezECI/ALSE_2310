#include <iostream>

using namespace std;
float minimo (int v[]){
	float  min = v[0];
	for(int i=0; i<=9 ; i=i+1){
		if  (min > v[i]){
		min = v[i];
	}
}
return 0;
}
int main(){
  int Vector [11],min,i;
 	 cout << "Ingresar 11 números enteros: ";
 	for (int i=0; i<=9 ; i=i+1){
	 cin >> Vector[i];
  	};
	min= minimo(Vector);
  cout << "El menor valor del vector es:"<< min<<  "\n";
  return 0;
}
