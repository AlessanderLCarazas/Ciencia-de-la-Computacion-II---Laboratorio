#ifndef HIPOTECA_H
#define HIPOTECA_H

#include <Prestamo.h>

#include <iostream>
using namespace std;

class Hipoteca : public Prestamo
{
    public:
        Hipoteca(string, double, int);
        virtual ~Hipoteca();
        void imprimir();

    protected:

    private:
};

#endif // HIPOTECA_H

