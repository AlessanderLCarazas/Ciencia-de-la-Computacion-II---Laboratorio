#include<iostream>
#include "Nodo.h"
#include "Cola.h"

using namespace std;

int main() {
    Cola prueba1=Cola();
    int opcion;
    do{
		cout<<"------------------------------------------------------------"<<endl;
		cout<<"\tIngrese Opcion"<<endl;
		cout<<"[1] PULL COLA"<<endl;
		cout<<"[2] MOSTRAR COLA"<<endl;
		cout<<"[3] SALIR"<<endl;
		cout<<"------------------------------------------------------------"<<endl;

		cout<<"Ingrese opcion: ";
		cin>>opcion;
		int x;
		if (opcion==1)
		{
			cout<<"------------------------------------------------------------"<<endl;
			cout<<"\nIngrese elemento para insertar a la Cola: ";
			cin>>x;
			prueba1.pull(x);
		}
		else if (opcion==2)
		{
            cout<<"------------------------------------------------------------"<<endl;
            prueba1.imprimir();
		}
	} while(opcion!=3);
    return 0;
}
