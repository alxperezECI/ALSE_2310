#include <iostream>

using namespace std;

float promedio( int v[], int cant ){
  float prom = 0.;
  
  for( int i = 0; i < cant; i++){
    prom += v[i];
  }
  
  return prom / (float)cant;
}

void printvec(int vec[], int len, string msg)
{
    // flush(cout);
    cout<<"\n"<<msg<<endl;
    for(int i=0;i<len;i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}

float mediana(int vec[],int len, bool imprimir_ordenado)
{
    int v_org[len]; 
    int aux;

    // Copiar vec en v_org.
   for(int i=0;i<len;i++)
    {
        v_org[i]=vec[i];
    }
    
    // Ordenar el vector v_org.
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

    // Imprimir vector v_org ordenado.
    if(imprimir_ordenado)
    {
        printvec(v_org,len,"Vector ordenado: ");
    }
    
    // Calcular mediana.
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

/*
float promedio( float v[], int cant ){
  float prom = 0.;
  
  for( int i = 0; i < cant; i++){
    prom += v[i];
  }
  
  return prom / (float)cant;
}
*/

int main(int argc, char** argv){

  int len=10;
  
  if(argc!=len+1){
    cout << "Cantidad de argumentos incorrecta" << endl;
    return 1;
  }

  cout << "Cantidad de argumentos: " << argc << endl;

  for(int i=0; i< argc; i++)  
    cout << argv[i] << endl;

  int vec[len];
  float prom=0.;

  // Creación de un puntero
  /*
  float* dirProm;

  cout << "Vector creado en dirección: " << vec << endl;
  cout << "Dirección de v[9]: " << &vec[9] << endl;
  
  dirProm = &prom;
  cout << "Dirección de prom: " << dirProm << " almacenado en: " << &dirProm << endl;
  cout << "Ingresar diez (10) número enteros: ";
  */

  // leer argumentos de main en vec y convertirlos a enteros
  for( int i = 1; i < len; i++){
    // cin >> vec[i];
    vec[i]=stoi(argv[i]);
  }

  prom = promedio( vec, len );

  cout << "El promedio de los datos ingresados es: " << prom << "\n";

  return 0;
}
