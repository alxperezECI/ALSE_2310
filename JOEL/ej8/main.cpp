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

int main(int argc, char **argv)
{
  Complejo a, b, tercero;
  float dist;
  a.setRe(atof(argv[2]));
  a.setIm(atof(argv[3]));
  b.setRe(atof(argv[4]));
  b.setIm(atof(argv[5]));

  cout << "a: " << a << endl;
  cout << "b: " << b << endl;

  /*   if (argc != 5)
    {
      cout << "Error en los parámetros" << endl;
      return 1;
    } */

  // string test = "-a";

  switch (argv[1][1])
  {
  case 'a':
    cout << "a + b" << endl;
    tercero = a + b;

    cout << "(" << a << ") + (" << b << ") = " << tercero << endl;
    break;
  case 'r':
    cout << "a - b" << endl;
    tercero = a - b;
    cout << "(" << a << ") - (" << b << ") = " << tercero << endl;
    break;
  case 'm':
    cout << "a * b" << endl;
    tercero = a * b;
    cout << "(" << a << ") * (" << b << ") = " << tercero << endl;
    break;
  case 'i':
    cout << "a^-1" << endl;
    tercero = a.inverso();
    cout << "(" << a << ")^-1 = " << tercero << endl;
    break;
  case 'c':
    cout << "|| a ||" << endl;
    tercero = a.conjugado();
    cout << "||" << a << "|| = " << tercero << endl;
    break;
  case 'h':
    cout << "ayuda:" << endl;
    cout << "-a para suma" << endl;
    cout << "-r para resta" << endl;
    cout << "-m para multiplicacion" << endl;
    cout << "-i para inverso" << endl;
    cout << "-c para conjugado" << endl;
    break;

  default:
    cout << "No hace parte de las funciones" << endl;
    return 1;
  }

  return 0;
}
