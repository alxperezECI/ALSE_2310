#include <iostream>

using namespace std;
float sumatoria (int v[]){
        float suma = 0;
        for (int vc = 0; vc < 10; vc++){
                suma += v[vc];
        }
        return suma;

}
float maximo (int v[]){
        float max = 0;
        for (int vc = 0; vc < 10; vc++){
                if (max < v[vc]){
                        max = v[vc];
                }
        }
        return max;
}
float minimo (int v[]){
        float min = v[0];
        for (int vc = 0; vc < 10; vc++){
                if (min > v[vc]){
                        min = v[vc];
                }
        }
        return min;
}

float promedio( int v[] ){
  float prom = 0.;
  
  for( int i = 0; i < 10; i++){
    prom += v[i];
  }
  
  return prom / 10.;
}

int main(){
  int vec[10];
  float prom=0.;
  float sum=0;
  float min=0;
  float max=0;
  cout << "Ingresar diez (10) número enteros: ";

  for( int i = 0; i < 10; i++){
    cin >> vec[i];
  }

  prom = promedio( vec );
  sum = sumatoria ( vec );
  min = minimo ( vec );
  max = maximo ( vec );
  cout << "El promedio de los datos ingresados es: " << prom << "\n"<< "El mínimo es: "<< min<<"\n";
  cout << "El máximo es: "<<max<<"\n"<<"La sumatoria es: "<<sum<<"\n";
  return 0;
}

