	#include <iostream>

using namespace std;

float mediana( int v[] ){
  float med = 0.;
  
  med = (v[4]+v[5])/2.;
  return med;
}

int main(){
  int vec[10];
  float med=0.;

  cout << "Ingresar diez (10) número enteros: " << endl;

  for( int i = 0; i < 10; i++){
    cout << "Ingrese el numero " << i+1 << ":";
    cin >> vec[i];
  }

  med = mediana( vec );

  cout << "La mediana de los datos ingresados es: " << med << "\n";
  return 0;
}
