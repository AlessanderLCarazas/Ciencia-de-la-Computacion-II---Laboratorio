/*5. Realizar la implementación de un programa que haga uso de plantillas, para
elaborar una función que permita ordenar ascendentemente y descendentemente
los elementos de un arreglo de valores enteros y otro arreglo de valores flotantes.
Las funciones deben recibir como parámetros, un puntero al tipo de elemento
dado, y dos enteros que indican los índices del primero y último elemento.
	int ArrayEntero [5] = {5,7,2,8,6,1,3,4,9};
	float ArrayFloat [5] = {10.1, 8.4, 3.6, 4.4, 11.2};*/


#include <iostream>

using namespace std;

template <class T>

void ascendente(T *arreglo,int ini, int fin)
{
    T temp;
    for (int i=ini+1; i<=fin; i++)
    {
        for(int j=ini ; j<=fin - 1; j++)
        {
            if (*(arreglo+j) > *(arreglo+j+1))
            {
                temp = *(arreglo+j);
                *(arreglo+j) = *(arreglo+j+1);
                *(arreglo+j+1) = temp;
            }
        }
    }
}

template <class T>

void imprimir(T *arreglo,int ini, int fin)
{
    for (int i=ini; i<=fin; i++)
    {
        cout<<*(arreglo+i)<<" ";
    }
    cout<<endl;
}

template <class T>

void descendente(T *arreglo,int ini, int fin)
{
    T temp;
    for (int i=ini+1; i<=fin; i++)
    {
        for(int j=ini ; j<=fin - 1; j++)
        {
            if (*(arreglo+j) < *(arreglo+j+1))
            {
                temp = *(arreglo+j);
                *(arreglo+j) = *(arreglo+j+1);
                *(arreglo+j+1) = temp;
            }
        }
    }
}

int main()
{
    cout<<"Array Entero: "<<endl;
    int ArrayEntero [9] = {5,7,2,8,9,1,3,4,6};
    ascendente(ArrayEntero,0,8);
    imprimir(ArrayEntero,0,8);
    cout<<endl;
    descendente(ArrayEntero,0,8);
    imprimir(ArrayEntero,0,8);
    cout<<"\nArray Float: "<<endl;
    float ArrayFloat [5] = {10.1, 8.4, 3.6, 4.4, 11.2};
    ascendente(ArrayFloat,0,4);
    imprimir(ArrayFloat,0,4);
    cout<<endl;
    descendente(ArrayFloat,0,4);
    imprimir(ArrayFloat,0,4);
    return 0;
}
