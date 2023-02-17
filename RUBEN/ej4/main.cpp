#include <iostream>

using namespace std;

float promedio(int x[], int tam);

int main()
{
    int tam = 10, numeros[tam];

    
    cout<<"\n .Digite 10 numeros enteros: " << endl;

    for(int i=0; i <tam ; i++)
        {
            cout<<"\n Digite un numero entero: " << endl;
            cin >>numeros[i];
        }
        
        
    cout<<"\n El promedio de los numeros ingresados es: " << promedio(numeros, tam) << endl;
        
        
        
    return 0;
}


float promedio(int x[], int tam)
{
    float suma;
    
    for(int i=0; i <=tam ; i++)
            suma = suma + x[i];
            
    return suma/tam;
}
