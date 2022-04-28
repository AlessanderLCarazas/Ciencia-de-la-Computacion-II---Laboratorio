#include <iostream>

using namespace std;

int main()
{
    int nume;
    cout<<"Ingrese numero para el triangulo :";
    cin>>nume;
    for (int i=1;i<nume+1;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
