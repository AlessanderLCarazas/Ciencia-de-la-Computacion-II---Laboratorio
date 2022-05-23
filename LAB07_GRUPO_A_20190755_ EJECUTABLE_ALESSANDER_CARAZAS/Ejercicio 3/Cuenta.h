#ifndef CUENTA_H
#define CUENTA_H

#include <ProductoBancario.h>

#include <iostream>
using namespace std;

class Cuenta : public ProductoBancario
{
    public:
        Cuenta(string, double, int);
        virtual ~Cuenta();
        void imprimir();

    protected:

    private:
};

#endif // CUENTA_H

