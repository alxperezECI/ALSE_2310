#include <iostream>
#include <cstdlib>

using namespace std;

float promedio( int v[], int cant ){
  float prom = 0.;
  
  for( int i = 0; i < cant; i++){
    prom += v[i];
  }
  
  return prom / (float)cant;
}
/*
float promedio( float v[], int cant ){
  float prom = 0.;
  
  for( int i = 0; i < cant; i++){
    prom += v[i];
  }
  
  return prom / (float)cant;
}
*/


int main(int argc, char** argv){
	if (argc != 11){
		cout << "(ERROR) La cantidad de argumentos no es la deseada." << endl;
		exit (1);
	}
  int vec[10];
  float prom=0.;


  for ( int i = 0; i < argc-1; i++)
	vec[i] = atoi(argv[i+1]);


  // Creación de un puntero

  float* dirProm;

  cout << "Vector creado en dirección: " << vec << endl;
  cout << "Dirección de v[9]: " << &vec[9] << endl;

  dirProm = &prom;
  cout << "Dirección de prom: " << dirProm << " almacenado en: " << &dirProm << endl;
  cout << "Ingresar diez (10) número enteros: ";

  prom = promedio( vec, argc - 1 );

  cout << "El promedio de los datos ingresados es: " << prom << "\n";
  return 0;
}
