/*2. Se pide escribir una función utilizando plantillas que tome dos argumentos
genéricos de tipo entero y flotante que devuelva las cuatro operaciones básicas.*/



#include <iostream>

using namespace std;

template <typename T, typename U>

T operaciones_basicas(T a, U b)
{
    cout<<"\nSUMA: "<<a+b<<endl;
    cout<<"RESTA: "<<a-b<<endl;
    cout<<"MULTIPLICACION: "<<a*b<<endl;
    cout<<"DIVISION: "<<a/b<<endl;
}

int main()
{
    int a;
    float b;
    cout<<"Ingrese el valor para el entero: ";
    cin>>a;
    cout<<"Ingrese el valor para el flotante: ";
    cin>>b;
    operaciones_basicas(a,b);
    return 0;
}
