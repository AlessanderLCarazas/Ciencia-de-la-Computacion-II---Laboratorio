#include <iostream>

using namespace std;

int main()
{
    string contra="soyguapo",validar;
    do
    {
        cout<<"Ingrese la Contrase�a: ";
        cin>>validar;
    }
    while (validar!=contra);
    cout<<"Contrase�a correcta! "<<endl;
    return 0;
}
