#include <iostream>

using namespace std;

int main()
{
    int nume,cont=0;
    string bin="";
    cout<<"Ingrese un numero entre 100 < x < 999: ";
    cin>>nume;
    if (nume>100 && nume<999)
    {
        while (nume>0)
        {
            if (nume%2==0)
                bin="0"+bin;
            else
                bin="1"+bin;
            nume=(int)nume/2;
        }
        cout<<"El numero a binario es: "<<bin;
    }
    else
        cout<<"Ingrese un numero entre 100 < x < 999."<<endl;
    return 0;
}
