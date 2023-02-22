#include <iostream>
#include <math.h>
using namespace std;

struct Punto{
  double x,y;
};

double distancia( Punto a, Punto b){
  return sqrt(pow((b.y - a.y),2) + pow((b.x - a.x),2));
}

int main(int argc, char** argv){
  Punto a, b;
  double dist;
  a.x = 3.;
  a.y = 4.;
  b.x = 8.;
  b.y = 6.;

  dist = distancia(a,b);

  cout << "La distancia entre ellos es: " << dist << endl;
  return 0;
}
