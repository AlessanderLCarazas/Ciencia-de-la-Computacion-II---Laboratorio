#include "Disco.h"

Disco::Disco(string nombre1,string genero1, string cantante1) : ClaseMultimedia(nombre1,genero1)
{
    cantante=cantante1;
}

Disco::~Disco()
{
    //dtor
}
void Disco::print(){
    cout<<"El cantante es: "<<cantante<<" : "<<endl;
    printMultimedia();

}
