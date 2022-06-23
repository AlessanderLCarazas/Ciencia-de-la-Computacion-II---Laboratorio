/*1. Implementar un programa que maneje un arreglo de estructuras para almacenar
los nombres y las fechas de cumplea�os de sus n compa�eros. Y debe mostrarse
por pantalla quienes cumplen a�os en este mes.*/

#include <iostream>

using namespace std;

struct companiero{
    string nombres;
    int dia, mes;
};



int main()
{
    int n;
    cout << "Ingrese la cantidad de compa�eros de la clase: ";
    cin>>n;
    companiero compa[n];
    for (int i=0;i<n;i++)
    {
        cout<<"\nCOMPA�ERO: "<<i+1;
        cout<<"\nIngrese los Nombres: ";
        cin.ignore();
        getline(cin, compa[i].nombres);
        cout<<"Ingrese el Dia de su Cumplea�os: ";
        cin>>compa[i].dia;
        cout<<"Ingrese el Mes de su Cumplea�os: ";
        cin>>compa[i].mes;
    }

    cout << "\nCompa�eros que cumplen a�os en junio: "<<endl;
    int contador = 0;
    for (int i=0;i<n;i++)
    {
        if (compa[i].mes == 6)
        {
            cout << "\nNombre: " << compa[i].nombres<<endl;
            cout << "Cumplea�os: " <<compa[i].dia << "/" << compa[i].mes <<endl;
            contador++;
        }
    }
    if (contador == 0) {
        cout << "Nadie cumple a�os el mes de junio." << endl;
    }
    return 0;
}
