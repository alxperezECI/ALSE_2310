#include <iostream>
#include <math.h>
using namespace std;

struct Punto{
  double x,y;
};

struct Linea{
  Punto p1,p2;
};

ostream& operator<< (ostream& out, Punto &a){
  out << "(" << a.x << ", " << a.y << ")";
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


double longitud(Linea a){
  return  distancia( a.p1, a.p2) ;
}

int main(int argc, char** argv){
  Punto a, b;
  double dist;
  a.x = 3.14;
  a.y = 4.68;
  b.x = 8.55;
  b.y = 6.68;

  dist = distancia(a,b);
  cout << "Entre " << a << " y " << b;
  cout << " la distancia es: " << dist << endl;

  Linea c;
  c.p1.x = 3.2;
  c.p1.y = 6.666;
  c.p2.x = 4.4;
  c.p2.y = 8.8;

  cout << "La línea es de longitud: " << longitud( c ) << endl;

  return 0;
}
