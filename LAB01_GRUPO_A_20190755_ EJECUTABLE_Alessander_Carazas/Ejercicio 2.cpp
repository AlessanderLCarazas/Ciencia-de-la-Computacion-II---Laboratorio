#include <iostream>

using namespace std;

int main()
{
    string nom,ape_pater,ape_mater,codigo;
    char carac1,carac2;
    cout<<"Ingrese el Nombre: ";
    cin>>nom;
    cout<<"Ingrese el Apellido paterno: ";
    cin>>ape_pater;
    cout<<"Ingrese el Apellido Materno: ";
    cin>>ape_mater;
    carac1=nom[0];
    carac2=ape_mater[0];
    codigo=carac1+ape_pater+carac2+"@unsa.edu.pe";
    cout<<"El correo UNSA es: "<<codigo<<endl;
    return 0;
}
