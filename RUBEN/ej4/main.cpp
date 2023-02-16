#include <iostream>

using namespace std;

float promedio( int v[] ){
  float prom = 0.;
  
  for( int i = 0; i < 10; i++){
    prom += v[i];
  }
  
  return prom / 10.;
}

int main(){
  int vec[10];
  float prom=0.;

  cout << "Ingresar diez (10) número enteros: ";

  for( int i = 0; i < 10; i++){
    cin >> vec[i];
  }

  prom = promedio( vec );

  cout << "El promedio de los datos ingresados es: " << prom << "\n";
  return 0;
}
