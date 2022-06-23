/*1. Implementar un programa que maneje un arreglo de estructuras para almacenar
los nombres y las fechas de cumpleaños de sus n compañeros. Y debe mostrarse
por pantalla quienes cumplen años en este mes.*/

#include <iostream>

using namespace std;

struct companiero{
    string nombres;
    int dia, mes;
};



int main()
{
    int n;
    cout << "Ingrese la cantidad de compañeros de la clase: ";
    cin>>n;
    companiero compa[n];
    for (int i=0;i<n;i++)
    {
        cout<<"\nCOMPAÑERO: "<<i+1;
        cout<<"\nIngrese los Nombres: ";
        cin.ignore();
        getline(cin, compa[i].nombres);
        cout<<"Ingrese el Dia de su Cumpleaños: ";
        cin>>compa[i].dia;
        cout<<"Ingrese el Mes de su Cumpleaños: ";
        cin>>compa[i].mes;
    }

    cout << "\nCompañeros que cumplen años en junio: "<<endl;
    int contador = 0;
    for (int i=0;i<n;i++)
    {
        if (compa[i].mes == 6)
        {
            cout << "\nNombre: " << compa[i].nombres<<endl;
            cout << "Cumpleaños: " <<compa[i].dia << "/" << compa[i].mes <<endl;
            contador++;
        }
    }
    if (contador == 0) {
        cout << "Nadie cumple años el mes de junio." << endl;
    }
    return 0;
}
