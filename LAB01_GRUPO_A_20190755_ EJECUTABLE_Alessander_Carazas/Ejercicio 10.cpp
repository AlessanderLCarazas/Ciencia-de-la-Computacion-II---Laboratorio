#include <iostream>

using namespace std;

int main()
{
    string contra="soyguapo",validar;
    do
    {
        cout<<"Ingrese la Contraseña: ";
        cin>>validar;
    }
    while (validar!=contra);
    cout<<"Contraseña correcta! "<<endl;
    return 0;
}
