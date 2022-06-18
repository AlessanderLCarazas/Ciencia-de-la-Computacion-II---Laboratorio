/*1. Defina una Pila que permita insertar elementos utilizando clases.*/


#include<iostream>
#include "Nodo.h"
#include "Pila.h"

using namespace std;

int main() {
    Pila prueba1=Pila();
    int tama, opcion;
    do{
		cout<<"------------------------------------------------------------"<<endl;
		cout<<"\tIngrese Opcion"<<endl;
		cout<<"[1] APILAR"<<endl;
		cout<<"[2] MOSTRAR PILA"<<endl;
		cout<<"[3] SALIR"<<endl;
		cout<<"------------------------------------------------------------"<<endl;

		cout<<"Ingrese opcion: ";
		cin>>opcion;
		int x;
		if (opcion==1)
		{
			cout<<"------------------------------------------------------------"<<endl;
			cout<<"\nIngrese elemento para insertar a la pila: ";
			cin>>x;
			prueba1.push(x);
		}
		else if (opcion==2)
		{
            cout<<"------------------------------------------------------------"<<endl;
            prueba1.imprimir();
		}
	} while(opcion!=3);
    return 0;
}
