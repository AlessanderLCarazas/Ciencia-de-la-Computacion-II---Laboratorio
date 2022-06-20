#include "Cola.h"

#include<iostream>
using namespace std;

Cola::Cola()
{
    this->ultimo = nullptr;
    this->primero = nullptr;
}

Cola::~Cola()
{
    //dtor
}

void Cola::pull(int a)
{

    Nodo *nuevo = new Nodo();
    nuevo->dato = a;
    nuevo->siguiente = nullptr;

    if(primero==nullptr){
        primero = nuevo;
    }else{
        ultimo->siguiente = nuevo;
    }
    ultimo = nuevo;
    cout<<"\nEL numero: "<<a<<" fue ingresado a la Cola con exito."<<endl;
}

void Cola::imprimir()
{
    if (primero==0)
    {
        cout<<"No hay elementos en la Cola para mostrar. "<<endl;;
    }
    else
    {
        cout<<"MOSTRANDO COLA: ";
        Nodo *aux = new Nodo();
        aux = primero;
        cout<<endl;
        cout<<"\n\t";
        while (aux != nullptr)
        {
            cout << aux->dato << " -> ";
            aux = aux->siguiente;
        }
        cout<<endl;
    }
}
