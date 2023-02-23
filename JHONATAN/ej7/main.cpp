#include <iostream>
#include <stdlib.h>
using namespace std;

float mediana( int v[], int cant ){
  float med = 0.;
  int prueba=0;

  med = (v[(cant-1)/2]+v[cant/2])/2.;
  return med;
}

int main(int argc, char** argv){
  int vec[10];
  float med=0.;

cout << "cantidad de argumentos: " << argc << endl;
  //cout << "Ingresar diez (10) número enteros: " << endl;

 /* for( int i = 0; i < 10; i++){
    cout << "Ingrese el numero " << i+1 << ":";
    cin >> vec[i];
  } */
  
  for (int i=0; i < 10 ; i ++)
  {
   vec[i] = atof (argv[i+1]);
  } 
  
  if (argc = 11)
  {
  med = mediana( vec, 10 );
  }
  else
  {
   med = 0.;
   cout << "número de parametros erroneo " << endl;
  }
  cout << "La mediana de los datos ingresados es: " << med << "\n";
 
//Creacion de puntero

  float* dirmed;
  cout << "direccion de vector " << vec << endl;
  cout << "direccion de vec[9] " << &vec[9] << endl;

  dirmed = &med;
  cout << "direccion de media: " << dirmed << "almacenado en: " << &dirmed << endl;

  return 0;
}
