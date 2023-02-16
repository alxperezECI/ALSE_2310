#include<iostream>

using namespace std;
float promedio (int v[]){			//en este ciclo hallo el promedio del vector
	float suma = 0;
	for (int vc = 0; vc < 10; vc++){	//vc es variable de control
                suma += v[vc];
        }
	return suma/10. ;
}
float sumatoria (int v[]){
	float suma = 0;
        for (int vc = 0; vc < 10; vc++){
                suma += v[vc];
        }
	return suma;

}
float maximo (int v[]){
	float max = 0;
	for (int vc = 0; vc < 10; vc++){
		if (max < v[vc]){
			max = v[vc];
		}
	}
	return max;
}
float minimo (int v[]){
	float min = v[0];
	for (int vc = 0; vc < 10; vc++){
		if (min > v[vc]){
			min = v[vc];
		}
	}
	return min;
}
float mediana(int v[]){
	float med = 0;
	
	return ;
}
int main(){
	int vec[10];
	float prom = 0;
	float suma = 0;
	float max = 0;
	float min = 0;
	cout << "Ingrese 10 valores enteros: \n";
	for (int vc = 0; vc < 10; vc++){
		cin >> vec[vc];
	}
	sumatoria (vec);
	prom = promedio (vec);
	suma = sumatoria(vec);
	max = maximo(vec);
	min = minimo(vec);
	cout << "La suma es: " << suma << "\n"<<"El promedio es: "<< prom << "\n";
	cout << "El valor máximo es: "<< max <<"\n"<<"El valor minimo es: "<<min<<"\n";
	return 0;
}
