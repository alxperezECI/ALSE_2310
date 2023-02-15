#include <iostream>
using namespace std;
int main(){

float arreglo[10];
float s;
float prom;
s = 0;
cout <<"Ingresar 10 números para obtener el promedio. \n";

for (int i=0; i<=9;i=i+1){
cout <<"Ingrese el número "<<i+1<<":";
cin >> arreglo[i];
s = s + arreglo[i];
}

prom = s/10;
cout<<"El promedio de los números ingresados es:"<<prom<<"\n";
return 0;
}
