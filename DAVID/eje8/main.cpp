#include <iostream>
#include <math.h>
#include "complejo.h"
#include <cstring>

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
  a.setRe ( atof(argv[2]) );
  a.setIm ( atof(argv[3]) );
  b.setRe ( atof(argv[4]) );
  b.setIm ( atof(argv[5]) );

char op[2];
    
    strcpy(op, argv[1]);
    
    int x;
    
    if(op[1] == 'a')
    {
        x = 0;
    }
    else if(op[1] == 'r')
    {
        x = 1;
    }
    else if(op[1] == 'i')
    {
        x = 2;
    }
    else if(op[1] == 'c')
    {
        x = 3;
    }
    else
    {
        cout << "Argumento de operacion incorrecto" << endl;
        exit(1);
    }
    
    switch(x)
    {
        case 0:
            tercero = a + b;
            cout << "La suma de " << a << " + " << b << " es igual a " << tercero << endl;
            break;
        case 1:
            tercero = a - b;
            cout << "La resta de " << a << " - " << b << " es igual a " << tercero << endl;
            break;
        case 2:
            tercero = a.inverso();
            cout << "El inverso de " << a << " es igual a " << tercero << endl;
	    tercero = b.inverso();
	    cout << "El inverso de " << b << " es igual a " << tercero << endl;
            break;
        case 3:
            tercero = a.conjugado();
            cout << "El conjugado de " << a << " es igual a " << tercero << endl;
            tercero = b.conjugado();
            cout << "La el conjugado de " << b << " es igual a " << tercero << endl;
            break;
    }
  return 0;
}
