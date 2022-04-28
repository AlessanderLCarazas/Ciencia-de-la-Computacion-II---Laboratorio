#include <iostream>

using namespace std;

int main()
{
    int n;
    float sum;
    cout << "Ingrese el numero de estudiantes: ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        sum=0;
        float a,b,c;
        cout<<"Ingrese las 3 notas: "<<endl;
        cin>>a;
        cin>>b;
        cin>>c;
        sum=(a+b+c)/3;
        cout<<"El promedio es: "<<sum<<endl;
    }
    return 0;
}
