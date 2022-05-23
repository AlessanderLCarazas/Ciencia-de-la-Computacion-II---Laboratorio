#include "ClaseMultimedia.h"

ClaseMultimedia::ClaseMultimedia(string nombre1,string genero1)
{
    nombre=nombre1;
    genero=genero1;
}

ClaseMultimedia::~ClaseMultimedia()
{
    //dtor
}
void ClaseMultimedia::printMultimedia()
{
    cout<<"Nombre: "<<nombre<<" y Genero: "<<genero<<endl;
}
