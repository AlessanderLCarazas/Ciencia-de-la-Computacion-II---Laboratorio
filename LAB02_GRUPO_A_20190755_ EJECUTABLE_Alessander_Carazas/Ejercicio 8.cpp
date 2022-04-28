#include <iostream>

using namespace std;

int main()
{
    int nume;
    cout<< "Ingrese numero para la tabla de multiplicar: ";
    cin>>nume;
    for (int i=1;i<21;i++)
        cout<<nume<<" * "<<i<<" = "<<nume*i<<endl;
    return 0;
}
