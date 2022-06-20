#include<iostream>
#include "Nodo.h"
#include "Cola.h"

using namespace std;

int main() {
    Cola hombre=Cola();
    Cola mujer=Cola();
    int num_hombres, edades_hom;
    cout<<"Cantidad de hombres en la COLA: ";
    cin>>num_hombres;
    for(int i=0;i<num_hombres;i++){
        cout<<"Edad: "<<i+1<<": ";
        cin>>edades_hom;
        hombre.pull(edades_hom);
    }
    int num_mujeres, edades_muje;
    cout<<"\nCantidad de mujeres en la COLA: ";
    cin>>num_mujeres;
    for(int i=0;i<num_mujeres;i++){
        cout<<"Edad: "<<i+1<<": ";
        cin>>edades_muje;
        mujer.pull(edades_muje);
    }
    int h=0,m=0, itera;
    cout<<"\nNumero de iteraciones: ";
    cin>>itera;

    for(int i=0;i < itera;i++)
    {
        cout<<"------------------------------------------------------------"<<endl;
        cout<<"\tITERACION: "<<i+1<<endl;
        cout<<"\nCola Hombres: ";
        hombre.imprimir();
        cout<<"\nCola Mujeres: ";
        mujer.imprimir();
        cout<<endl;
        cout<<"\nLa Edad MAYOR es ";
        if (hombre.valor_ret() > mujer.valor_ret())
        {
            cout<<"del hombre: "<<hombre.valor_ret()<<" años."<<endl;
        }
        else
        {
            cout<<"de la mujer: "<<mujer.valor_ret()<<" años."<<endl;
        }
        cout<<"La Edad MENOR es ";
        if (hombre.valor_ret() < mujer.valor_ret())
        {
            cout<<"del hombre: "<<hombre.valor_ret()<<" años."<<endl;
        }
        else
        {
            cout<<"de la mujer: "<<mujer.valor_ret()<<" años."<<endl;
        }
        if(hombre.valor_ret() > mujer.valor_ret())
        {
            h++;
            hombre.pull(hombre.valor_ret());
            hombre.eliminar_elemento();
            mujer.pull(mujer.valor_ret());
            mujer.eliminar_elemento();
        }
        else if(hombre.valor_ret() < mujer.valor_ret())
        {
            m++;
            hombre.pull(hombre.valor_ret());
            hombre.eliminar_elemento();
            mujer.pull(mujer.valor_ret());
            mujer.eliminar_elemento();
        }
        cout<<"\nPuntaje: "<<endl;
        cout<<"Hombres: "<<h<<endl;
        cout<<"Mujeres: "<<m<<endl;
    }
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"\nRESULTADOS FINALES: "<<endl;
    cout<<"Hombres: "<<h<<endl;
    cout<<"Mujeres: "<<m<<endl;
    cout<<"\n------------------------------------------------------------"<<endl;
    cout<<"\nCONCLUSION: "<<endl;
    if(h>m)
    {
        cout<<"\nLa edad de los hombres es mayor que  la edad las mujeres en: "<<itera<<" iteraciones."<<endl;
    }
    else if(m>h)
    {
        cout<<"\nLa edad de los mujeres es mayor que la edad los hombres en: "<<itera<<" iteraciones."<<endl;
    }
    else
    {
        cout<<"\nLa edad de los hombres y las mujeres es igual en "<<itera<<" iteraciones."<<endl;
    }
    return 0;
}
