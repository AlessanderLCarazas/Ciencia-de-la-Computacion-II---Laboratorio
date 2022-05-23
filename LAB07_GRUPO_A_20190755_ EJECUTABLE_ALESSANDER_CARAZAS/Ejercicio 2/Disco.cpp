#include "Disco.h"

Disco::Disco(string musica1,string video1, string estado1) : ClaseMultimedia(musica1,video1)
{
    estado=estado1;
}

Disco::~Disco()
{
    //dtor
}
void ClaseDisco::print(){
    cout<<"El disco "<<estado<<" contiene: "<<endl;
    mostrarMultimedia();

}
