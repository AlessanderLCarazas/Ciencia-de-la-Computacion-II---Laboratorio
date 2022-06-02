/*3. Se pide escribir una función utilizando plantillas que tome dos valores genéricos
de tipo char y string (5 veces); char corresponde a una letra y string corresponde
al apellido. El programa debe mostrar por pantalla el siguiente formato de correo
electrónico: char/string@unsa.edu.pe.*/


#include <iostream>

using namespace std;

template <typename T, typename U>

void correo_unsa(T nom, U apel)
{
    cout<<"\nSu correo unsa es: "<<nom<<apel<<"@unsa.edu.pe\n"<<endl;
}

int main()
{
    for(int i=0;i<5;i++)
    {
        char nom;
        string apel;
        cout<<"Ingrese letra: ";
        cin>>nom;
        cout<<"Ingrese apellido: ";
        cin>>apel;
        correo_unsa(nom,apel);
    }
    return 0;
}
