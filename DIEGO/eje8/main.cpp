
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

int main(int argc, char** argv)
{
  Complejo a, b, tercero,z;
  double dist;

  int select = 0;
  if (argc == 6)
  {
    a.setRe( atof(argv[2]) );
    a.setIm( atof(argv[3]) );
    b.setRe( atof(argv[4]) );
    b.setIm( atof(argv[5]) );
  }
  else
  {
	cout<<"No ingresó la cantidad necesaria de datos"<<endl;
	return 0;
  }
  //dist = a.distancia( b );
  //cout << " la distancia es: " << dist << endl;
  //tercero = a + b;
  if (atof(argv[1]) == (atof("-a"))){
        select = 0;
  }else if(atof(argv[1]) == (atof("-r"))){
        select=1;
  }else if(atof(argv[1])== (atof("-i"))){
        select=2;
  }else if(atof(argv[1])==(atof("-c"))){
        select=3;
  }
  

switch(select)
 {
    case 0:
      cout<<"la suma de " << a << " + " << b << "es igual a " << tercero << endl;
      tercero = a + b;
    break;
    case 1:
      tercero = a - b;
      cout<<"la resta de " << a << " - " << b << "es igual a " << tercero << endl;
    break;
    case 2:
      
      //z = a.conjugado();
      tercero = a.inverso();
      cout<<"el inverso de " << a << " es igual a "<< tercero << endl;
    break;
    case 3:
      tercero = a.conjugado();
      cout<<"el conjugado de " << a << " es igual a:  "<< tercero << endl;
    break;
    default:
      cout<<"No ingresó ninguna operación válida"<<endl;
 	return 0;     
 }

return 0;
}
