
 #include <iostream>
#include <math.h>
#include "complejo.h"


using namespace std;
// Utilizando los parámetros del main admita 4 valores el primero dos caracteres
// y luego cuatro valores reales que correspondan a dos números complejos
// ejemplo:  $> ./ej8 -a 3.14 4.68 8.55 6.68
//  los caracteres podrán ser -a -r -i -c para adición, resta, inverso y
//  conjugado. Dependiendo de estos dos caracteres, se debe ejecutar la 
//  operación correspondiente en el main y mostrar su resultado en pantalla 
//  hacendo uso de la estructura switch. Para convertir de cadena de texto a 
//  número real se puede utilizar la función atof.
//
//  Deberán implementar correctamente en el archivo complejo.cpp todos 
//  los métodos definidos en el archivo complejo.h
int main(int argc, char** argv){
  Complejo a, b, tercero;
  double dist;
  a.setRe ( 3.14 );
  a.setIm( 4.68 );
  b.setRe( 8.55 );
  b.setIm( 6.68 );
  dist = a.distancia( b );
  tam = tamaño (atof argv[1])
  cout << " la distancia es: " << dist << endl;

  tercero = a + b;

  cout << "La suma de " << a << " + " << b << "es igual a " << tercero << endl;

  return 0;
}
