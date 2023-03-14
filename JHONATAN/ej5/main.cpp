	#include <iostream>

using namespace std;

float mediana( int v[], int cant ){
  float med = 0.;
  
  med = (v[4]+v[5])/2.;
  return med;
}

int main()
{

  int vec[10];
  float med=0.;


/*  cout << "Ingresar diez (10) número enteros: " << endl;

  for( int i = 0; i < 10; i++){
    cout << "Ingrese el numero " << i+1 << ":";
    cin >> vec[i];
  } */
  
  for (int i=0; i< 10; i++)
{
  cout << "ingrese el numero "<< i+1 << ":"; 
  cin >> vec[i];
}

  med = mediana( vec, 10 );

  cout << "La mediana de los datos ingresados es: " << med << "\n";

//Creacion de puntero

  float* dirmed;
  cout << "direccion de vector " << vec << endl;
  cout << "direccion de vec[9] " << &vec[9] << endl;

  dirmed = &med;
  cout << "direccion de media: " << dirmed << "almacenado en: " << &dirmed << endl;

  return 0;
}
