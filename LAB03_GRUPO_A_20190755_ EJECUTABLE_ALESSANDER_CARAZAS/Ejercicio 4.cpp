#include <iostream>

using namespace std;

bool es_prim(int a)
{
    int cont=0;
    for (int i=1;i<=a;i++)
    {
        if (a%i==0)
            cont+=1;
    }
    if (cont==2)
        return true;
    else
        return false;
}

void list_prim(int a)
{
    int con=0;
    while(true)
    {
        if(es_prim(con)==true)
        {
            cout<<con<<" ";
        }
        con+=1;
        if (con>a)
        {
            break;
        }
    }
}

int main()
{
    int x;
    cout<<"Ingrese limite de la lista de numeros primos: ";
    cin>>x;
    list_prim(x);
    cout<<endl;
    return 0;
}
