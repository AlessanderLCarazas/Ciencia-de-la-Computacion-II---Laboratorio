#include <iostream>

using namespace std;

void fibo(int n, unsigned long long *v)
{
    int a=0,b=1;
    v[0]=a;
    v[1]=b;
    for(int i=2; i<n; i++)
    {
        int c=a+b;
        v[i]=c;
        a=b;
        b=c;
    }
}

void print(int n, unsigned long long *v)
{
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
}

int main()
{
    int n;
    cout<<"Ingrese los primeros n numeros de Fibonacci: ";
    cin>>n;
    unsigned long long v[n];
    fibo(n,v);
    print(n,v);
    return 0;
}
