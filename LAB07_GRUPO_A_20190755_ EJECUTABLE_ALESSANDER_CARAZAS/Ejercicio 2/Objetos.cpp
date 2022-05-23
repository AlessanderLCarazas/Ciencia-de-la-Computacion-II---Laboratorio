#include "Objetos.h"

Objetos::Objetos(string rgb1, string material1, string objeto1) : Color ( rgb1), Material(material1)
{
    objeto = objeto1;
}

Objetos::~Objetos()
{
    //dtor
}

void Objetos::Objeto(){
    cout<<objeto<<" de color ";
    printcol();
    cout<<" y material de ";
    printmate();
}
