#include <iostream>

using namespace std;

int main(){
  int vec[10];
  float prom=0.;

  cout << "Ingresar diez (10) número enteros: ";

  for( int i = 0; i < 10; i++){
    cin >> vec[i];
  }

  for( int i = 0; i < 10; i++){
    prom += vec[i];
  }

  cout << "El promedio de los datos ingresados es: " << prom/10. << "\n";
  return 0;
}
