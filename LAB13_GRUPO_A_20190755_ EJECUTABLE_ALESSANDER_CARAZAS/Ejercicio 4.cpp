/*4. Implemente un programa que maneje un arreglo de estructuras que solicite
nombre, sexo y sueldo de los empleados de una empresa y debe mostrar por
pantalla el menor y mayor sueldo.*/

#include <iostream>

using namespace std;

struct empleado{

    string nombres;
    char sexo;
    float sueldo;
};

int main()
{
    int n;
    cout << "Ingrese la cantidad de Empleados: ";
    cin>>n;
    empleado emple[n];
    for (int i=0;i<n;i++)
    {
        cout<<"\nEMPLEADO: "<<i+1<<endl;
        cout<<"\nIngrese los Nombres: ";
        cin.ignore();
        getline(cin, emple[i].nombres);
        cout<<"Ingrese el Sexo: ";
        cin>>emple[i].sexo;
        cout<<"Ingrese el Sueldo: ";
        cin>>emple[i].sueldo;
    }

    float may = emple[0].sueldo;
    float men = emple[0].sueldo;

    for (int i=0;i<n;i++)
    {
        if (emple[i].sueldo>may)
        {
            may = emple[i].sueldo;
        }
        if (emple[i].sueldo<men)
        {
            men = emple[i].sueldo;
        }
    }

    for (int i=0;i<n;i++)
    {
        if (emple[i].sueldo==may)
        {
            cout<<"\nEl empleado con MAYOR sueldo es: "<<endl;
            cout<<"Nombre: "<<emple[i].nombres<<endl;
            cout<<"Sexo: "<<emple[i].sexo<<endl;
            cout<<"Sueldo: "<<emple[i].sueldo<<endl;
        }
    }
    for (int i=0;i<n;i++)
    {
        if (emple[i].sueldo==men)
        {
            cout<<"\nEl empleado con MENOR sueldo es: "<<endl;
            cout<<"Nombre: "<<emple[i].nombres<<endl;
            cout<<"Sexo: "<<emple[i].sexo<<endl;
            cout<<"Sueldo: "<<emple[i].sueldo<<endl;
        }
    }

    return 0;
}
