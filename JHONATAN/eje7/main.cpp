
#include <iostream>
#include <math.h>

using namespace std;

struct Punto{
  double x,y;
};

double distancia( const Punto &a, const Punto &b){
  return sqrt(pow((b.y - a.y),2) + pow((b.x - a.x),2));
}

double distanciaeje( double a, double b){
  return  sqrt((b-a) * (b-a));
}

double angulo (const double &distx, const double &dist )
{
 return  acos(distx/dist);
}


int main(int argc, char** argv){
  Punto a, b;
  double dist;
  double distx;
  double angul;
  a.x = 3.;
  a.y = 4.;
  b.x = 8.;
  b.y = 6.;

  dist = distancia(a,b);
  distx = distanciaeje (a.x,b.x);
  angul = angulo (distx, dist);
  cout << "La distancia entre ellos es: " << dist << endl;
  cout << "La distancia horizontal entre ellos es: " << distx << endl;
  cout << "El angulo entre la linea y la horizontal es: " << angul << " en radianes " << endl;
  cout << "El angulo entre la linea y la horizontal es: " << (angul * 180.)/3.1416 << " en grados" << endl;
  return 0;
}

