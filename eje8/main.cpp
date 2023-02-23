#include <iostream>
#include <math.h>
#include "complejo.h"

using namespace std;


int main(int argc, char** argv){
  Complejo a, b, tercero;
  double dist;
  a.setRe ( 3.14 );
  a.setIm( 4.68 );
  b.setRe( 8.55 );
  b.setIm( 6.68 );
  dist = a.distancia( b );
  cout << " la distancia es: " << dist << endl;

  tercero = a + b;

  cout << "La suma de " << a << " + " << b << "es igual a " << tercero << endl;

  return 0;
}
