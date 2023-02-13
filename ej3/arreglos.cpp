#include <iostream>

using namespace std;

int main()
{
    int len = 10;
    
    float suma=0;
    
    int entradas[len];
    // int entradas[]={1,2,3,4,5,6,7,8,9,10};

    cout << "Ingresar 10 numeros"<<endl;

    for (int i=0;i<len;i++)
    { 
        cout<<"Numero "<<i+1<<": ";
        cin>>entradas[i];
        suma=suma+entradas[i];
    }
    
    for(int i=0;i<len;i++)
    {
        cout<<entradas[i]<<" ";
    }
    
    cout << "\nEl promedio de las entradas es: " << suma/len <<endl;
    return 0;
}
