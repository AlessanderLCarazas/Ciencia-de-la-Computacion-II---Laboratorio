#include <iostream>
#include<ctime>

using namespace std;

template <typename T>

T insertar_datos_int_float(T A[])
{
    T num;
    for(int i=0; i<50; i++)
    {
        num=rand()%200+1;
        A[i] = num;
    }
    for(int i=50; i<100; i++)
    {
        num=(float)(1+rand()%100)/100;
        num=num+rand()%200+1;
        A[i] = num;
    }
}

template <typename T>

T ordenar(T A[])
{
    T aux;
    for(int i=1;i<100;i++)
    {
        for(int j=0;j<100-1;j++)
        {
            if(A[j]>A[j+1])
            {
                aux=A[j];
                A[j]=A[j+1];
                A[j+1]=aux;
			}
		}
    }
}

template <typename T>

T imprimir(T A[])
{
    for(int i=0; i<100; i++)
    {
        cout << A[i] << "\n";
    }
}


int main()
{
    srand(time(0));
    float A[100];
    insertar_datos_int_float(A);
    ordenar(A);
    imprimir(A);
    return 0;
}
