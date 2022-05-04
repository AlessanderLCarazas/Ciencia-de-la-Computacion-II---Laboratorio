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

void llenar_mos(int a[])
{
    int cont=0;
    for(int i=0;i<101;i++)
    {
        if(es_prim(i)==true)
        {
            a[cont]=i;
            cont+=1;
        }
    }
    for(int i=cont-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr_prim[100];
    llenar_mos(arr_prim);
    return 0;
}
