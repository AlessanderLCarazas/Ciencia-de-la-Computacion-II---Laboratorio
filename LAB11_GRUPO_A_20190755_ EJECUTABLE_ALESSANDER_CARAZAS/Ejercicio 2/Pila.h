#ifndef PILA_H
#define PILA_H
#include "Nodo.h"

class Pila
{
    public:
        Pila();
        ~Pila();
        Nodo *longitud;
        void push(int a);
        void imprimir();
        void pop();
};

#endif // PILA_H
