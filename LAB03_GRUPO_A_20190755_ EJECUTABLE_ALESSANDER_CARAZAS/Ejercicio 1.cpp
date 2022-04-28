#include <iostream>

using namespace std;

float potencia(float base, int potencia)
{
    float resul=1;
    for(int i=1;i<=potencia;i++)
        resul=resul*base;
    return resul;
}
int main()
{
    float bas;
    int pot;
    cout<<"Ingrese base: ";
    cin>>bas;
    cout<<"Ingrese potencia: ";
    cin>>pot;
    cout<<"El numero: "<<bas<<" elevado a "<<pot<<" es "<< potencia(bas,pot)<<endl;
    return 0;
}
