/*4. Implemente un programa que haga uso de plantillas para determinar el mínimo y
máximo valor de un arreglo de elementos dado. Debe de existir dos funciones, la
primera que retorne el mayor de los valores y la segunda que retorne el menor de
los valores. Asimismo, en la función main, se hace una prueba de estas funciones,
con arreglos de enteros y flotantes.
	int ArrayEntero [5] = {10,7,2, 8, 6};
	float ArrayFloat [5] = {12.1, 8.7, 5.6, 8.4, 1.2};*/


#include <iostream>

using namespace std;

template <class T>

T mayor_arreglo(T arreglo[])
{
    T may=arreglo[0];
    for(int i=0;i<5;i++)
    {
        if (arreglo[i]>may)
        {
            may=arreglo[i];
        }
    }
    cout<<"El mayor elemento del arreglo es: "<<may<<endl;
}

template <class U>

U menor_arreglo(U arreglo[])
{
    U men=arreglo[0];
    for(int i=0;i<5;i++)
    {
        if (arreglo[i]<men)
        {
            men=arreglo[i];
        }
    }
    cout<<"El menor elemento del arreglo es: "<<men<<endl;
}

int main()
{
    cout<<"Array Entero: "<<endl;
    int ArrayEntero [5] = {10,7,2, 8, 6};
    mayor_arreglo(ArrayEntero);
    menor_arreglo(ArrayEntero);
    cout<<"\nArray Float: "<<endl;
    float ArrayFloat [5] = {12.1, 8.7, 5.6, 8.4, 1.2};
    mayor_arreglo(ArrayFloat);
    menor_arreglo(ArrayFloat);
    return 0;
}
