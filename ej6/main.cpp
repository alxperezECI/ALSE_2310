#include <iostream>
#include <stdlib.h>

using namespace std;

float promedio( int v[], const int &cant ){
  float prom = 0.;
  
  for( int i = 0; i < cant; i++){
    prom += v[i];
  }

  cout  << "Valor de la variable interna: " << cant << endl; 
  return prom / (float) cant ;
}

float promedio( float v[], int cant ){
  float prom = 0.;
  
  for( int i = 0; i < cant; i++){
    prom += v[i];
  }
  
  return prom / (float)cant;
}



int main(int argc, char** argv){
  cout << "Cantidad de argumentos: " << argc << endl;
/*
  if( argc != 11 ){
    cout << "Cantidad errónea de parámetros." << endl;
    return 1;
  }
  
  for(int i=0; i< argc; i++)  
    cout << argv[i] << endl;

*/

  int vec[10];
  float prom=0.;

  // Creación de un puntero

  float* dirProm;
/*
  cout << "Vector creado en dirección: " << vec << endl;
  cout << "Dirección de v[9]: " << &vec[9] << endl;
  
  dirProm = &prom;
  cout << "Dirección de prom: " << dirProm << " almacenado en: " << &dirProm << endl;
//  cout << "Ingresar diez (10) número enteros: ";
*/
  for( int i = 0; i < argc -1; i++){
    vec[i] = atoi(  argv[i+1] );
  }

  prom = promedio( vec, argc -1 );

  cout << "valor de la variable del main: " << cant << endl;
  cout << "El promedio de los datos ingresados es: " << prom << "\n";
  return 0;
}
