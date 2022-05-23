#ifndef CUENTAJOVEN_H
#define CUENTAJOVEN_H

#include <Cuenta.h>

#include <iostream>
using namespace std;

class CuentaJoven : private Cuenta
{
    public:
        CuentaJoven(string, double, int);
        virtual ~CuentaJoven();
        void imprimir();

    protected:

    private:
};

#endif // CUENTAJOVEN_H
