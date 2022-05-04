#include <iostream>

using namespace std;

bool buscar(int a[],int x)
{
    for(int i=0;i<8;i++)
    {
        if (a[i]==x)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[8],bus;
    cout<<"Ingrese los valores: "<<endl;
    for(int i=0;i<8;i++)
    {
        cin>>arr[i];
    }
    cout<<"Ingrese el numero que desea buscar: ";
    cin>>bus;
    if (buscar(arr,bus)==true)
        cout<<"Si se encuentra el numero en el arreglo."<<endl;
    else
        cout<<"NO se encuentra el numero en el arreglo."<<endl;
    return 0;
}
