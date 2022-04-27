#include <iostream>

using namespace std;

int main()
{
    int a,b,resul;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    if (a%b==0)
        cout << "El numero: "<<a<<" si es divisor de "<<b<<endl;
    else if(b%a==0)
            cout << "El numero "<<b<<" si es divisor de "<<a<<endl;
    else
        cout << "Ninguno de los numeros es divisor del otro"<<endl;
    return 0;
}
