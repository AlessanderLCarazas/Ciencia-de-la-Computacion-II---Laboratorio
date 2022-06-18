/*2. Sobre el ejercicio anterior, adecue el programa para eliminar elementos de una
Pila.*/

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
		cout<<"[2] DESAPILAR"<<endl;
		cout<<"[3] MOSTRAR PILA"<<endl;
		cout<<"[4] SALIR"<<endl;
		cout<<"------------------------------------------------------------"<<endl;

		cout<<"Ingrese opcion: ";
		cin>>opcion;
		Pila pila;
		int x;
		if (opcion==1)
		{
			cout<<"------------------------------------------------------------"<<endl;
			cout<<"Ingrese elemento para insertar a la pila: ";
			cin>>x;
			prueba1.push(x);
		}
		else if (opcion==2)
		{
            cout<<"------------------------------------------------------------"<<endl;
            prueba1.pop();
		}
		else if (opcion==3)
		{
            cout<<"------------------------------------------------------------"<<endl;
            prueba1.imprimir();
		}
	} while(opcion!=4);
    return 0;
}
