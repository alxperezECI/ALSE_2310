#include <iostream>
using namespace std;

int main ()
{
  float num=0, sum=0;
 cout << "Te pedire 10 numeros: "<< endl;
 for (int i=0; i<=9; i++)
 {
   sum =  num + sum;
   cout << "Ingrese el numero"<< i+1;
   cin >> num;
 }
 sum=sum/10;
 cout << "el resultado es" << sum << endl;
return 0;
}
