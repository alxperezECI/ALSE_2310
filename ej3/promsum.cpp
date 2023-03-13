#include <iostream>

using namespace  std;
int main()
{
    float suma=0;
    float promedio=0.0;
    float vec[10];

    for (int i = 1; i <= 10; i++)
    {
        cout<<"Ingrese el valor " <<i<<" a promediar: \n ";
        cin>>vec[i-1];
    }

    for(int x = 0; x < 10; x++)
    {
       suma =suma+ vec[x];
    }

        promedio= suma/10;

        cout<<"El valor promedio es: "<<promedio<<"\n La suma es: "<<suma;

        return 0;
}
