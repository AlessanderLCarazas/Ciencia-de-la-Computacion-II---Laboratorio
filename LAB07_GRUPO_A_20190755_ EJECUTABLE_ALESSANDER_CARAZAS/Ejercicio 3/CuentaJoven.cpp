#include "CuentaJoven.h"
#include "ProductoBancario.h"

CuentaJoven::CuentaJoven(string cliente1, double saldo1, int numproduc1):Cuenta(cliente1, saldo1, numproduc1)
{
    //ctor
}

CuentaJoven::~CuentaJoven()
{
    //dtor
}
void CuentaJoven::imprimir(){
    ProductoBancario::imprimir();
}
