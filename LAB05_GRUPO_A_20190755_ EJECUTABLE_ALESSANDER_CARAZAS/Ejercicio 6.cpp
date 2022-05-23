#include <iostream>

using namespace std;

void sumar(float a,float b)
{
	cout<<"La suma es: "<<a+b<<endl;
}

void restar(float a,float b)
{
	cout<<"La resta es: "<<a-b<<endl;
}

void multiplicar(float a,float b)
{
	cout<<"La multiplicacion es: "<<a*b<<endl;
}

void dividir(float a,float b)
{
	cout<<"La division es: "<<a/b<<endl;
}

int main()
{
    float a,b;
	cout<<"Ingrese el Primer numero: ";
	cin>>a;
	cout<<"Ingrese el Segundo numero: ";
	cin>>b;
    void (*funciones[])(float a,float b)={sumar,restar,multiplicar,dividir};
    cout<<endl;
    (*funciones[0])(a,b);
    (*funciones[1])(a,b);
    (*funciones[2])(a,b);
    (*funciones[3])(a,b);
    return 0;
}
