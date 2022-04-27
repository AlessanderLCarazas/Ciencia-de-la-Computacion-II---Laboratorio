#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Ingrese la cantidad de datos: ";
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++)
    {
        cout<<"Ingrese dato: ";
        cin>>a[i];
    }
    float sum;
    for(int i=0;i<x;i++)
        sum+=a[i];
    float media=sum/x;
    cout<<"La media es: "<<media<<endl;
    return 0;
}
