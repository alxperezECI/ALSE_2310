#include <iostream>

using namespace std;

int main(){
  int vector[10];
  int suma=0;
  int i,n=0;
  cout << "Ingerese 10 numeros: ";
  for(i=0; i<10; ++i){
     cin >> vector[i];
     suma=suma + vector[i];
}
  cout << "Los numeros son: ";
  for(n=0; n<10; ++n){
     cout<< vector[n] << " ";

}
  cout<<endl << "Suma de los numeros es: " << suma << " ";
  return 0;
}
