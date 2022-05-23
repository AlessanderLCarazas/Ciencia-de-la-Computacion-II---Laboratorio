#include "Hipoteca.h"

Hipoteca::Hipoteca(string cliente1, double saldo1, int numproduc1):Prestamo(cliente1, saldo1, numproduc1)
{
    //ctor
}

Hipoteca::~Hipoteca()
{
    //dtor
}
void Hipoteca::imprimir(){
    ProductoBancario::imprimir();
}
