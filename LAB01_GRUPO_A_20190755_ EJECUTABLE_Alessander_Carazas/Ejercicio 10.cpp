#include <iostream>

using namespace std;

int main()
{
    string contra="soyguapo",validar;
    do
    {
        cout<<"Ingrese la Contraseņa: ";
        cin>>validar;
    }
    while (validar!=contra);
    cout<<"Contraseņa correcta! "<<endl;
    return 0;
}
