#include <iostream>
#include <math.h>
using namespace std;

struct Punto{
  double x,y;
};

struct Linea{
  Punto a,b;
};

ostream& operator<< (ostream& out, Punto &a){
  out << "El punto es (" << a.x << ", " << a.y << ")" << endl;
  return out;
}
  
double pendiente(const Punto &a, const Punto &b ){
  double x = b.x - a.x;
  double y = b.y - a.y;
  return y / x;
}

double distancia( const Punto &a, const Punto &b ){
  double x = b.x - a.x;
  double y = b.y - a.y;
  return sqrt( x * x  + y * y );
}

/*
double longitud(Linea a){
  double a = distancia( a.a, a.b) ;
  return a;
}
*/
int main(int argc, char** argv){
  Punto a, b;
  double dist;
  a.x = 3.;
  a.y = 4.;
  b.x = 8.;
  b.y = 6.;

  dist = distancia(a,b);
  cout << "Entre " << a << " y  " << b;
  cout << "La distancia entre ellos es: " << dist << endl;
  return 0;
}
