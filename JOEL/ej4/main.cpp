#include <iostream>

using namespace std;

//Funciones:
// 1. float maximos(int vec[])
// 2. float minimos(int vec[])
// 3. float mediana(int vec[]) [√]
// 4. float suma(int vec[])
// 5. float promedio(int vec[])

float promedio( int v[], float len ){
   float prom = 0.;

   for( int i = 0; i < len; i++){
     prom += v[i];
   }

   return prom / len;
 }

int printvec(int vec[], int len, string msg)
{
    // flush(cout);
    cout<<"\n"<<msg<<endl;
    for(int i=0;i<len;i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    return 0;
}

float mediana(int vec[],int len, bool imprimir_ordenado)
{
    int v_org[len]; 
    int aux;

    // Copiar vec en v_org
    for(int i=0;i<len;i++)
    {
        v_org[i]=vec[i];
    }
    
    // Ordenar el vector
    for(int j=0; j<len;j++)
    {
        for(int i=0;i<len;i++)
        {
            if(i+1==len)
                break;
            else
            {
                if(v_org[i]>v_org[i+1])
                {
                    aux=v_org[i];
                    v_org[i]=v_org[i+1];
                    v_org[i+1]=aux;
                }
                else
                {
                    continue;  
                }      
            }
        }
    }

    // Imprimir vector ordenado
    if(imprimir_ordenado)
    {
        printvec(v_org,len,"Vector ordenado: ");
    }
    // Calcular mediana

    if (len%2==0)
    {
        return (vec[len/2-1]+vec[len/2])/2.0;
    }
    else
    {
        return vec[len/2];
    }


    
    // return vec;
}



int main(){

  int vec[10];
  float prom=0.;
  float med;
  int len=10;

  cout << "Ingresar diez ("<<len<<") número enteros:\n";

  for( int i = 0; i < 10; i++){
   
    cout<<"Numero "<<i+1<<": ";
    cin >> vec[i];
  }

  printvec(vec,len,"Vector original: ");

  prom = promedio( vec,len );

  cout << "\nEl promedio de los datos ingresados es: " << prom << "\n";

  med=mediana(vec,len,true);

  cout << "\nLa mediana de los datos ingresados es: " << med << "\n";
  
  return 0;
}
