
 #include <iostream>
#include <math.h>
#include "complejo.h"
#include <cstring>
#include <stdlib.h>

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


int num_argumentos (int a)
{
  if (a != 6)
  return 1;
  return 0;
}


int main(int argc, char** argv){
  Complejo a, b, tercero, suma, resta, inverso1, inverso2, conjugado1, conjugado2;
  double dist;
  int op;
  int cant_arg;
  char operacion[2];
  strcpy (operacion, argv[1]);
  a.setRe ( atof(argv[2]) );
  a.setIm( atof(argv[3]) );
  b.setRe( atof(argv[4]));
  b.setIm( atof(argv[5]) );
  dist = a.distancia( b );
  
  if (operacion[1] == 'a')
  {
   op = 1;
  }
  else if (operacion[1] == 'r')
  {
   op = 2;
  }
  else if (operacion[1] == 'i')
  {
   op = 3;
  }
  else if (operacion[1] = 'c')
  {
   op = 4;
  }
  else 
  cout << "operacion invalida" << endl;

  cout << "op es :" << op << endl;
  
  switch (op)
  {
   case 1: suma = a + b;
	   cout << "La suma  de a " << a << " y " << " b " << b <<" es: " << suma << endl;
   break;
   case 2: resta = a - b;
           cout << "La resta  de a " << a << " y " << " b " << b <<" es: " << resta << endl;
   break;
   case 3: inverso1 = a.inverso();
           cout << "El inverso de a " << a << " es: " << inverso1 << endl;
           inverso2 = b.inverso();
           cout << "El inverso de b " << b << " es: " << inverso2 << endl;
   break;
   case 4: conjugado1 = a.conjugado();
           cout << "El conjugado  de a " << a << " es: " << conjugado1 << endl;
           conjugado2 = b.conjugado();
           cout << "El conjugado de b " << b << " es: " << conjugado2 << endl;
   break;
  }


  cant_arg = num_argumentos (argc);
  cout << "argv[1] es " << atoi(argv[1]) << " y cant_arg " << cant_arg <<endl;
  cout << " la distancia es: " << dist << endl;

  tercero = a + b;

  cout << "La suma de " << a << " + " << b << "es igual a " << tercero << endl;

  return 0;
}
