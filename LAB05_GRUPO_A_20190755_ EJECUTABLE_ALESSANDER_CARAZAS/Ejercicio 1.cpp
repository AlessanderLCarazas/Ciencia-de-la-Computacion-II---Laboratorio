#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout<<"Ingrese el valor del primer numero: ";
    cin>>a;
    cout<<"Ingrese el valor del segundo numero: ";
    cin>>b;
    cout<<"\nEl valor del primer es: "<<a<<" y del segundo numero es: "<< b;
    int *ptr=&a;
    int *ptr2=&b;
    int auxi;
    auxi=*ptr;
    *ptr=*ptr2;
    *ptr2=auxi;
    cout<<"\nEl valor del primer numero AHORA es: "<<a<<" y del segundo numero AHORA es: "<< b<<endl;
    return 0;
}
