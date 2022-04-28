#include <iostream>

using namespace std;

bool validar_num(int x)
{
    if (x>=0 && x<=100)
        return true;
    else
        return false;
}

string validar_par(int x)
{
    if (x%2==0)
        return "si";
    else
        return "no";
}

int sum_imp(int x)
{
    int sum=0;
    for (int i=0;i<=x;i++)
        if (i%2!=0)
            sum+=i;
    return sum;
}

int main()
{
    int x;
    cout<<"Ingrese el valor de x: ";
    cin>>x;
    if (validar_num(x)==true)
        cout <<"El numero si esta comprendido entre 0 y 100"<<endl;
    else
        cout <<"El numero NO esta comprendido entre 0 y 100"<<endl;
    if (validar_par(x)=="si")
        cout <<"El numero si es par"<<endl;
    else
        cout <<"El numero NO es par"<<endl;
    cout << "La suma de los elementos impares es: " << sum_imp(x) <<endl;
    return 0;
}
