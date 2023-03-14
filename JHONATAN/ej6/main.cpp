#include <iostream>
#include <stdlib.h>

using namespace std;

float mediana( int v[], int cant ){
  float med = 0.;
  int prueba=0;
  prueba = (cant/2);
  prueba =prueba * 2;
 
  if (cant != prueba)
  {
     med = v[(cant/2)];
  }
  else
  {
    med = (v[(cant-1)/2]+v[cant/2])/2.;
  }
  return med;
}

int main(int argc, char** argv){
  int vec[10];
  float med=0.;


  //cout << "Ingresar diez (10) número enteros: " << endl;

 /* for( int i = 0; i < 10; i++){
    cout << "Ingrese el numero " << i+1 << ":";
    cin >> vec[i];
  } */
  
  for (int i=0; i < argc -1 ; i ++)
  {
   vec[i] = atof (argv[i+1]);
  } 

  med = mediana( vec, argc -1 );

  cout << "La mediana de los datos ingresados es: " << med << "\n";
 
//Creacion de puntero

  float* dirmed;
  cout << "direccion de vector " << vec << endl;
  cout << "direccion de vec[9] " << &vec[9] << endl;

  dirmed = &med;
  cout << "direccion de media: " << dirmed << "almacenado en: " << &dirmed << endl;

  return 0;
}
