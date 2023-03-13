#include <iostream>
#include <math.h>
#include <complex>
#include <fstream>//ifstream

using namespace std;

/*La forma de ejecutar el proceso sería mandando en el main un archivo
 * ejm:  eje10 ../datos.txt
 */
int main(int argc, char** argv)
{
   //cout << argc << endl;
  if( argc != 2)
  {
    cout << "Debe ingresar la url del archivo a leer.\n";
    return 1;
  }

  //Código para leer un archivo
  int       lineas = 0              ;
  string    texto,realNum,imagNum   ;
  ifstream  archivo;//( argv[1])       ;
  archivo.open(argv[1]);
 // while (getline(archivo, texto))
  while (!archivo.eof())
  {
      lineas++;//Cantidad de líneas del archivo
  }
  archivo.close();
    cout<<"Numero de lineas: "<<lineas;
  //Creación de puntero para que me indique la cantidad de lineas de un archivo
  complex<double> *vec = new complex<double>[lineas];//Forma de crear un puntero al momento de ejecutar el cod

  for(int  i = 0; i < lineas; i++ )
  {
      archivo.open(argv[1]);//Abrir el archivo para empezar desde el primer registro
      if(archivo.fail())
      {
          cout<<"No fue posible abrir el archivo.\n";
          exit(1);
          return 1;
      }

      while (getline(archivo,texto))
      {
           getline(getline(archivo,texto), realNum, ' ');
           vec[i].real( stof( realNum ) );

           getline(getline(archivo,texto), imagNum, ' ');
           vec[i].imag( stof( imagNum ) );

           imagNum = "";
           realNum = "";
          /*vec[i].real( atof( argv[2*i + 1] ) );
          vec[i].imag( atof( argv[2*i + 2] ) );*/
      }
  }

  bool again;
  complex<double> aux;

  do{
    again = false;

    for( int i = 0; i < 4; i++)
    {
      if ( arg(vec[i]) > arg(vec[i+1]) )
      {
            aux = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = aux;
            again = true;
      }
      else
      {
            if( arg(vec[i]) == arg(vec[i+1]) )
            {
                if( norm(vec[i]) > norm(vec[i+1]) )
                {
                    aux      = vec[i];
                    vec[i]   = vec[i+1];
                    vec[i+1] = aux;
                    again    = true;
                }
        }
      }
    }
  }while( again == true ); 


  //Para crear un nuevo archivo para sacar lo que se solicita
  ofstream output("Nuevoarchivo.txt");

  for(int  i = 0; i < lineas; i++ )
  {
      output << vec[i].real() << (vec[i].imag() < 0 ? " - " : " + ") << vec[i].imag() <<"j" << endl;
      //cout << vec[i].real() << (vec[i].imag() < 0 ? " - " : " + ") << vec[i].imag() <<"j" << endl;

  }

  return 0;
}

