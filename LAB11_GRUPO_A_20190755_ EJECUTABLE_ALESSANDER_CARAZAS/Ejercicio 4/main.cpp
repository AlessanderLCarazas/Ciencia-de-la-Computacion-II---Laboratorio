#include <iostream>
#include <math.h>

using namespace std;

#include "Nodo.h"
#include "Pila.h"


void llenarOrigen(int n, Pila &Origen)
{
    for (int i=n; i>0; i--)
    {
        Origen.push(i);
    }
}

void mostrarPilas(Pila &Origen, Pila &Final, Pila &Auxiliar)
{
    Pila Arr[3]={Origen,Final,Auxiliar};
    Arr[0]=Origen;
    Arr[1]=Final;
    Arr[2]=Auxiliar;
    for(int i=0; i<3; i++)
    {
        string aux = Arr[i].getNombre();
        if(aux=="Origen")
        {
            Arr[i].mostrarPila();
        }
    }
    for(int i=0; i<3; i++)
    {
        string aux = Arr[i].getNombre();
        if(aux=="Auxiliar")
        {
            Arr[i].mostrarPila();
        }
    }
    for(int i=0; i<3; i++)
    {
        string aux = Arr[i].getNombre();
        if(aux=="Destino")
        {
            Arr[i].mostrarPila();
        }
    }
    cout<<endl;
}

void hanoi(int n, Pila &Origen, Pila &Final, Pila &Auxiliar)
{
    if (n == 1)
    {
        int aux = Origen.top();
        Origen.pop();
        Final.push(aux);
        mostrarPilas(Origen,Final,Auxiliar);
    }
    else
    {
        hanoi(n-1, Origen, Auxiliar, Final);
        int aux = Origen.top();
        Origen.pop();
        Final.push(aux);
        mostrarPilas(Origen,Final,Auxiliar);
        hanoi(n-1,Auxiliar, Final, Origen);
    }
}

int main(){
    int n=1;
    cout<<"Ingrese la cantidad de discos: ";
    cin>>n;
    cout<<endl;
    Pila Origen("Origen");
    Pila Auxiliar("Auxiliar");
    Pila Destino("Destino");
    llenarOrigen(n, Origen);
    mostrarPilas(Origen,Destino,Auxiliar);
    hanoi(n, Origen, Destino, Auxiliar);

  return 0;
}
