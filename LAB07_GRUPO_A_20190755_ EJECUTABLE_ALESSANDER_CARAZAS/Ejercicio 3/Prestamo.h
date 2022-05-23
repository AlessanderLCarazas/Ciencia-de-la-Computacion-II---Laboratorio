#ifndef PRESTAMO_H
#define PRESTAMO_H

#include <ProductoBancario.h>

#include <iostream>
using namespace std;

class Prestamo : protected ProductoBancario
{
    public:
        Prestamo(string, double, int);
        virtual ~Prestamo();
        void imprimir();

    protected:

    private:
};

#endif // PRESTAMO_H
