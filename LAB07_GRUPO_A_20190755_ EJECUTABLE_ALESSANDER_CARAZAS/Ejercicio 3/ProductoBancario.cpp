#include "ProductoBancario.h"

ProductoBancario::ProductoBancario(string cliente1, double saldo1, int numproduc1)
{
    cliente=cliente1;
    saldo=saldo1;
    numProduc=numproduc1;
}

ProductoBancario::~ProductoBancario()
{
    //dtor
}
void ProductoBancario::imprimir(){
    cout<<"Cliente: "<<cliente<<endl;
    cout<<"Saldo: "<<saldo<<endl;
    cout<<"Numero de productos: "<<numProduc<<endl;
}
