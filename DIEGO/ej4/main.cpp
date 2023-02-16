#include <iostream>

using namespace  std;

float maximo(int vec[])
{
   float valumax = 0;
   float value   = 0;

   for(int x = 0; x < 10; x++)
    {
       value = vec[x];
       if(value >= valumax)
       {
          valumax = value;
       }
    }
    
    return valumax;
}

int main()
{
    
    float valmaximo=0.0;
    int vec[10];

    for (int i = 1; i <= 10; i++)
    {
        cout<<"Ingrese el valor " <<i<<" a promediar: \n ";
        cin>>vec[i-1];
    }

        valmaximo = maximo(vec);

        cout<<"El valor maximo es: "<<valmaximo<<"\n";

        return 0;
}
