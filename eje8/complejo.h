#include <iostream>
#include <math.h>
using namespace std;

class Complejo{
  double re,im;

public:
  bool setRe( double r );
  bool setIm( double i );
  double distancia( const Complejo &b );
  Complejo operator+(Complejo &a);
  friend ostream& operator<< (ostream& out, Complejo &a);
};

