#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string pala;
    cout<<"Ingrese palabra para invertir: ";
    cin>>pala;
    for(int i=pala.size();i>=0;i--)
        cout<<pala[i];
    return 0;
}
