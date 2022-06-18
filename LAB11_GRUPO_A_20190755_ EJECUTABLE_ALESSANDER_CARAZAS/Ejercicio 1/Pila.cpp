#include "Pila.h"

#include<iostream>
using namespace std;

Pila::Pila()
{
    this->longitud = nullptr;
}

Pila::~Pila()
{
    //dtor
}

void Pila::push(int a)
{
    Nodo *nuevo = new Nodo();
    nuevo->dato = a;
    nuevo->siguiente = this->longitud;
    this->longitud = nuevo;
    cout<<"\nEL numero: "<<a<<" fue ingresado a la pila con exito."<<endl;
}

void Pila::imprimir()
{
    if (longitud==0)
    {
        cout<<"No hay elementos en la pila. "<<endl;;
    }
    else
    {
        cout<<"MOSTRANDO PILA: ";
        Nodo *aux = longitud;
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
