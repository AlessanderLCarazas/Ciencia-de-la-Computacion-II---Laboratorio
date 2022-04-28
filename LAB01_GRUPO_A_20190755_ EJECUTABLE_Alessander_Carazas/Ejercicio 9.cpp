#include <iostream>

using namespace std;

int main()
{
    int a[10],sum=0;
    for (int i=0;i<10;i++)
    {
        cout<<"Ingrese dato: ";
        cin>>a[i];
        if (a[i]<0)
            sum+=a[i];
    }
    cout << "La suma de los valores negativos es: "<<sum<<endl;
    return 0;
}
