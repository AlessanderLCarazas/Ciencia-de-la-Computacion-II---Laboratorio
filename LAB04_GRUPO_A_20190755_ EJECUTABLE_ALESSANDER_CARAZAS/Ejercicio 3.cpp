#include <iostream>

using namespace std;

void ingresar(int M[][3])
{
    for(int i=0;i<5;i++)
        for(int j=0;j<3;j++)
        {
            cout<<"Ingrese valor: ";
            cin>>M[i][j];
        }
}

void mostrar(int M[][3])
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
            cout<<M[i][j]<<"\t";
        cout<<endl;
    }
}
void sum_par(int M[][3])
{
    for(int i=0;i<5;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            if (i%2!=0)
            {
                sum=sum+M[i][j];
            }
        }
        if (i%2!=0)
            cout<<"La suma de la fila "<<i+1<<" es: " << sum<<endl;
    }
}
int main()
{
    int M[5][3];
    cout<<"Ingresando los datos:"<<endl;
    ingresar(M);
    cout<<"\nContenido de la Matriz 5x3:"<<endl;
    mostrar(M);
    sum_par(M);
    return 0;
}
