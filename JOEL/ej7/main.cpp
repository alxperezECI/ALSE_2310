#include <iostream>
#include <math.h>
using namespace std;

struct Punto{
  double x,y;
};

double distancia( Punto a, Punto b){
  return sqrt(pow((b.y - a.y),2) + pow((b.x - a.x),2));
};

float pendiente( Punto a, Punto b){
  return (b.y - a.y)/(b.x - a.x);
};

int main(int argc, char** argv){
  Punto a, b;
  double dist;
  float m;
  a.x = 3.;
  a.y = 4.;
  b.x = 8.;
  b.y = 6.;

  dist = distancia(a,b);
  m=pendiente(a,b);

  cout << "La distancia entre ellos es: " << dist << endl;
  cout << "La pendiente entre ellos es: " << m << endl;
  return 0;
}
