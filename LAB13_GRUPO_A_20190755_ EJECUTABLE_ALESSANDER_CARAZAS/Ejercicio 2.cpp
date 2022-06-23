/*2. Implementar un programa que maneje un arreglo de estructuras que calcule la
nota final del Ciencia de la Computación. El programa debe permitir el ingreso
de cualquier cantidad de alumnos y para cada alumno, se podrá ingresar nombre,
grupo, nota de la primera fase, segunda fase, tercera fase y proyecto final. El
porcentaje de cada ítem es 15%, 20%, 25% y 40% respectivamente.*/

#include <iostream>

using namespace std;

struct not_final{
    string nombres;
    char grupo;
    float not_1, not_2, not_3, pro_final;
};

float promedio(float a, float b, float c, float d)
{
    float pro=(a*0.15)+(b*0.2)+(c*0.25)+(d*0.4);
    return pro;
}

int main()
{
    int n;
    cout << "Ingrese la cantidad de Alumnos de la clase: ";
    cin>>n;
    not_final notasfin[n];
    for (int i=0;i<n;i++)
    {
        cout<<"\nAlumno: "<<i+1<<endl;
        cout<<"\nIngrese los Nombres: ";
        cin.ignore();
        getline(cin, notasfin[i].nombres);
        cout<<"Ingrese el Grupo: ";
        cin>>notasfin[i].grupo;
        cout<<"Ingrese la Nota de la Primera Fase: ";
        cin>>notasfin[i].not_1;
        cout<<"Ingrese la Nota de la Segunda Fase: ";
        cin>>notasfin[i].not_2;
        cout<<"Ingrese la Nota de la Tercer Fase: ";
        cin>>notasfin[i].not_3;
        cout<<"Ingrese la Nota del Proyecto Final: ";
        cin>>notasfin[i].pro_final;
    }
    for (int i=0;i<n;i++)
    {
        cout<<"\nEl promedio del Alumno "<<notasfin[i].nombres<<" Grupo "<<notasfin[i].grupo<<" es: "<<endl;
        cout<<promedio(notasfin[i].not_1,notasfin[i].not_2,notasfin[i].not_3,notasfin[i].pro_final)<<endl;
    }
    return 0;
}
