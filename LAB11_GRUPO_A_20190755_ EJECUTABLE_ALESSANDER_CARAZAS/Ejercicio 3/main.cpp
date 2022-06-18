/*3. Implemente un algoritmo para buscar elementos de la Pila.*/

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
		cout<<"[2] BUSCAR ELEMENTO EN LA PILA"<<endl;
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
            int x;
            cout<<"Ingrese elemento para buscar en la Pila: ";
            cin>>x;
            if (prueba1.busqueda_elemento(x))
            {
                cout<<"El Elemento "<<x<<" SI se encontrada en la pila."<<endl;
            }
            else
            {
                cout<<"Elmento NO encontrado en la pila."<<endl;
            }
		}
		else if (opcion==3)
		{
            cout<<"------------------------------------------------------------"<<endl;
            prueba1.imprimir();
		}
	} while(opcion!=4);
    return 0;
}
