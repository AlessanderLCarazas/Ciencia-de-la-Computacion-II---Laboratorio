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
    ultimo = nuevo;;
}

void Cola::imprimir()
{
    Nodo *aux = new Nodo();
    aux = primero;
    cout<<"\n\t";
    while (aux != nullptr)
    {
        cout << aux->dato << " -> ";
        aux = aux->siguiente;
    }
}

void Cola::eliminar_elemento()
{
    Nodo *aux = primero;
    if(primero == ultimo)
    {
        primero = nullptr;
        ultimo = nullptr;
    }
    else
    {
        primero = primero->siguiente;
    }
    delete aux;
}
int Cola::valor_ret()
{
    return primero->dato;
}
