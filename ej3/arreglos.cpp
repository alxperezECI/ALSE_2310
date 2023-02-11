#include <iostream>

using namespace std;

int main()
{
    int len = 10;
    
    float suma=0;
    
    int entradas[10];

    cout << "Ingresar 10 numeros"<<endl;

    for (int i=0;i<=len;i++)
    { 
        cout<<"Numero "<<i+1<<": ";
        cin>>entradas[i];
        suma=suma+entradas[i];
    }

    cout << "El promedio de las entradas es: " << suma/len <<endl;
    return 0;
}
