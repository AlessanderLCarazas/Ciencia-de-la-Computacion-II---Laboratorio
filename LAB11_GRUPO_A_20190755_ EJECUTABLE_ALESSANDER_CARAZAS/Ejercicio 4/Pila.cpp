#include "Pila.h"

#include <iostream>
using namespace std;

Pila::Pila()
{
    //ctor
}

/*Pila::~Pila()
{
    //dtor
}*/

Pila::Pila(string nombre)
{
    this->nombre = nombre;
}

string Pila::getNombre()
{
    return nombre;
}

void Pila::push(int dato)
{
    Nodo* nuevoNodo = new Nodo();
    nuevoNodo->setDato(dato);
    nuevoNodo->setSiguiente(pila);
    pila = nuevoNodo;
}

void Pila::pop()
{
    if (pila==0)
    {
        cout<<"No hay elementos en la pila. "<<endl;;
    }
    else
    {
        Nodo* aux = pila;
        pila = aux->getSiguiente();
        delete aux;
    }
}

int Pila::top()
{
    return pila->getDato();
}

void Pila::mostrarPila()
{
    if(pila != nullptr)
    {
        Nodo* aux = pila;
        cout<<getNombre()<<" -> ";
        while (aux != nullptr)
        {
            if (aux->getSiguiente()==nullptr)
            {
                cout<<aux->getDato();
            }
            else
            {
                cout<<aux->getDato()<<" - ";
            }
        aux = aux->getSiguiente();
        }
    }
    else
    {
        cout<<getNombre()<<" -> Vacio";
    }
    cout<<endl;
}
