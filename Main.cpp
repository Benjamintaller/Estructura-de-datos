#include <iostream>
#include "Vector.h"

#define MAX 10

using namespace std;

int main(){

	int vec[MAX], n, op;
	Vector vector1;

	do {
		cout<<"Ingrese el tamanio del vector : ";
		cin>>n;
	} while ((n>MAX) || (n<=0));

	do{
		cout<<"-----       M E N U        -----"<<endl;
		cout<<"|1.- Cargar Vector.            |"<<endl;
		cout<<"|2.- Mostrar Vector.           |"<<endl;
		cout<<"|3.- Ordenar Vector.           |"<<endl;
		cout<<"|4.- Eliminar duplicados.      |"<<endl;
		cout<<"|0.- Salir                     |"<<endl;
		cout<<"--------------------------------"<<endl;
		cout<<"Elija una opcion: ";
		cin>>op;

		switch(op){

		case 1:
			vector1.cargarVector(vec, n);
			break;

		case 2:
			vector1.mostrarVector(vec, n);
			break;

		case 3:
			vector1.ordenarVector(vec, n);
			break;

		case 4:
			vector1.eliminarDuplicados(vec, n);
			break;

		case 0:
			cout<<"Salir"<<endl;
			break;

		default:
			cout<<"Error: Opcion no valida..."<<endl;
		}

	}while(op!=0);

	return 0;
}
