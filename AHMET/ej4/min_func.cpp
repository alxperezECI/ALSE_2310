#include <iostream>

using namespace std;

float minimo(int v[]){
    float min = v[0];

      for(int p=0; p<10; ++p){
          if(v[p]<min){
               min = v[p];
          }
      }
<<<<<<< HEAD
    return 0;
=======
  return 0;
>>>>>>> 2f122223d3ef7543dacaafe857802cba927e4ca2
}

int main(){
  int vector[10];
  int min=0;
  cout << "Ingerese 10 numeros: ";
  for(int i=0; i<10; ++i){
     cin >> vector[i];
  }
  min = vector[0];
  cout << "Los numeros son: ";
  for(int n=0; n<10; ++n){
     cout<< vector[n] << " ";
  }

  min = minimo(vector);
  cout<< endl << "El valor minimo es: " << min << " ";
  return 0;
}

<<<<<<< HEAD
=======
//No entendí el uso de la función pero la programa "minimo.cpp" funciona bien! 
>>>>>>> 2f122223d3ef7543dacaafe857802cba927e4ca2
