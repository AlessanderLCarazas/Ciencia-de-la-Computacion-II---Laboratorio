#ifndef PILA_H
#define PILA_H

#include "Nodo.h"

#include <iostream>
using namespace std;

class Pila{

  private:

    Nodo* pila = nullptr;
    string nombre;

  public:

    Pila();
    Pila(string);
    string getNombre();
    void push(int);
    void pop();
    int top();
    void mostrarPila();
};

#endif // PILA_H
