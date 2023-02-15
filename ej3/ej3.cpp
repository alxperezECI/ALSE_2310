#include <iostream>
using namespace std;

int main ()
{
  int n[10];
  float sum;
 cout << "Te pedire 10 numeros: "<< endl;
 for (int i=0; i<=9; i++)
 {
  
   cout << "Ingrese el numero "<< i+1 << " ";
   cin >> n[i];
   sum = sum + n[i];
 }
 sum=sum/10.;
 cout << "el resultado es " << sum << endl;
return 0;
}
