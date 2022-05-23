#ifndef PRODUCTOBANCARIO_H
#define PRODUCTOBANCARIO_H

#include <iostream>
using namespace std;

class ProductoBancario
{
    public:
        int numProduc;
        ProductoBancario(string, double, int);
        virtual ~ProductoBancario();
        void imprimir();

    protected:
        double saldo;
    private:
        string cliente;
};

#endif // PRODUCTOBANCARIO_H
