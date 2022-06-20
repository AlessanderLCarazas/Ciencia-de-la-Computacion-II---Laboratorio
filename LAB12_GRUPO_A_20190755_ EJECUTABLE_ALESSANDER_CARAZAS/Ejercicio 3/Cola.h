#ifndef COLA_H
#define COLA_H
#include "Nodo.h"

class Cola
{
    public:
        Cola();
        ~Cola();
        Nodo *ultimo;
        Nodo *primero;
        void pull(int a);
        void imprimir();
        void busqueda_elemento();
};

#endif // COLA_H
