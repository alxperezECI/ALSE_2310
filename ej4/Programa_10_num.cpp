#include <iostream>

using namespace std;

int main ()
{
    int pos; 
    float n, vec[10];
    float prom;
    float suma = 0;
    cout << "Ingrese 10 numeros:";
    for (pos=0; pos<10; pos++){
        cin >> n;
        vec[pos] = n;
        suma = suma + n;
    }
    prom = suma/10;
    cout << "El promedio es " << prom << endl;
    return 0;

}
