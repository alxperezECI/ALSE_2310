#include <iostream>
#include <math.h>
#include <string>
using namespace std;

class Complejo{
  double re,im;

public:
  double   getRe();
  bool     setRe( double r );
  double   getIm();
  bool     setIm( double i );
  double   distancia( const Complejo &b );
  double angulo ();
  double modulo ();
  Complejo operator+(Complejo &a);
  Complejo operator-(Complejo &a);
  Complejo operator*(Complejo &a);
  Complejo conjugado();
  Complejo inverso();
  friend   ostream& operator<< (ostream& out, Complejo &a);
};

