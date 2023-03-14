#include <iostream>
#include <math.h>
#include "complejo.h"
#include <string>

using namespace std;

bool Complejo::setRe( double r ){ 
  re = r; 
  return true;
}

bool Complejo::setIm( double i ){ 
  im = i; 
  return true;
}

double Complejo::distancia( const Complejo &b ){
    double x = b.re - re;
    double y = b.im - im;
    return sqrt( x * x  + y * y );
  }

Complejo Complejo::operator+(Complejo &a){
    Complejo c;
    c.re = re + a.re;
    c.im = im + a.im;
    return c;
  }

ostream& operator<< (ostream& out, Complejo &a){
    out  << a.re << ( a.im < 0? " - ": " + ") << abs(a.im) << "j";
    return out;
  }
  

double   Complejo::getRe(){
  return re;
}

double    Complejo::getIm(){
  return im;
}


double Complejo::angulo()
{
   return atan2(im, re);
}

double Complejo::modulo()
{
    return sqrt(re*re + im*im);
}

Complejo  Complejo::operator-(Complejo &a){
  Complejo c;
  c.re = re - a.re;
  c.im = im - a.im;
  return c;
}

Complejo  Complejo::operator*(Complejo &a){
  Complejo c;
  c.re = re * a.re - im * a.im;
  c.im = re * a.im - im * a.re;
  return c;
}

Complejo  Complejo::conjugado(){
  Complejo c;
  c.re = re;
  c.im = -im;
  return c;
}

Complejo  Complejo::inverso(){
  Complejo c;
  c.re = re/(re*re + im*im);
  c.im = -im/(re*re + im*im);
  return c;

}
