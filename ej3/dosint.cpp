#include <iostream>

using namespace std;

int main(){
  int Vector[10],sum,i;
	float prom=0;
	for (int i=0; i<=9 ; i=i+1)
	{ 
 	 cout << "Ingresar 1 número entero: ";
 	 cin >> Vector[i];
	sum = sum + Vector[i];
  	};
	prom=sum/10.;
  cout << "El promedio de valores del vector es:"<< prom<<  "\n";
  return 0;
}
  
