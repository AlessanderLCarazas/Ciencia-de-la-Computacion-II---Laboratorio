#include "Matriz.h"
#include <iostream>
#include <time.h>

using namespace std;

Matriz::Matriz(int busca1)
{
    busca=busca1;
}

Matriz::~Matriz()
{

}

void Matriz::llenarMa()
{
    srand(time(NULL));
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            M[i][j]=rand()%9+1;
        }
    }
}

void Matriz::mostrarMa()
{
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<M[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void Matriz::busc_bus()
{
    int bus_s=0, a, b;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            if (M[i][j]==busca)
            {
                bus_s=bus_s+1;
                a=i;
                b=j;
            }
        }
    }
    if (bus_s>0)
    {
        cout<<"\nEl numero "<<busca<<" si se encuentra en la Matriz"<< endl;
        cout<<"y se encuentra en la fila :"<<a+1<<" y columna: "<<b+1<< endl;
    }
    else
        cout<<"\nEl numero "<<busca<<" NO se encuentra en la Matriz"<< endl;
}
