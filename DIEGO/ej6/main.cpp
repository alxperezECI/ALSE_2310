#include <iostream>

using namespace std;

float promedio( int v[], int cant )
{
  float prom = 0.;  
  for( int i = 0; i < cant; i++){
    prom += v[i];
  }
  
  return prom / ((float)cant-1);
}


int main(int argc, char** argv)
{
  cout << "Cantidad de argumentos: " << argc << endl;


  int vec[10];
  float prom=0.;
  float qtyNumbers = 0;
  // Creación de un puntero

  float* dirProm;

	prom = promedio( vec, 10 );
	
	if((argc < 11)||
 	   (argc > 11))
	{
		cout<< "Error, debe ingresar 10 números"<<" /n";
		return 0;
	}

	for(int i = 1;i<=10;i++)
	{
		vec[i] = atoi(argv[i]);
	}
	
	prom = promedio( vec , argc);

  	cout << "El promedio de los datos ingresados es: " << prom << "\n";
	cout <<"primer elemento"<< vec[0] + 2;

	return 0;
}

