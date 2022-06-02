/*1. Se pide escribir una función utilizando plantillas que tome tres argumentos
genéricos y devuelva el menor y el máximo de ellos como valor de retorno. La
función debe ser capaz de dar este tipo de resultados.*/


#include <iostream>

using namespace std;

template <typename T, typename U, typename V>

T mayor_menor(T a, U b, V c)
{
    V mayor, menor;
    if (a>b && a>c)
    {
        mayor=a;
    }
    else if (b>a && b>c)
    {
        mayor=b;
    }
    else
    {
        mayor=c;
    }
    if (a<b && a<c)
    {
        menor=a;
    }
    else if (b<a && b<c)
    {
        menor=b;
    }
    else
    {
        menor=c;
    }
    cout<<"\nEl mayor valor es: "<<mayor<<" Y el menor es: "<<menor<<endl;
}

int main()
{
    int a;
    float b;
    double c;
    cout<<"Ingrese el valor para el entero: ";
    cin>>a;
    cout<<"Ingrese el valor para el flotante: ";
    cin>>b;
    cout<<"Ingrese el valor para el double: ";
    cin>>c;
    mayor_menor(a,b,c);
    return 0;
}
