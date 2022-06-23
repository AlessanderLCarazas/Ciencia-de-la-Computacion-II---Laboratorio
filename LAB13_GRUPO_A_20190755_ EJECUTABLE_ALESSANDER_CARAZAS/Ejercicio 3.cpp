/*3. Implemente un programa que maneje un arreglo de estructuras que solicite el
nombre, edad y talla de 10 jugadores, debe mostrar por pantalla los que son
menores de 20 años y tienen una talla mayor a 1,70 mts de altura.*/

#include <iostream>

using namespace std;

struct jugadores{
    string nombres;
    int edad;
    float talla;
};

int main()
{
    jugadores num[10];
    for (int i=0;i<10;i++)
    {
        cout<<"\nJUGADOR: "<<i+1<<endl;
        cout<<"\nIngrese los Nombres: ";
        cin.ignore();
        getline(cin, num[i].nombres);
        cout<<"Ingrese La Edad: ";
        cin>>num[i].edad;
        cout<<"Ingrese la Talla: ";
        cin>>num[i].talla;
    }
    cout<<"\nJUGADORES MENORES A 20 AÑOS Y MAYOR A 1.7 MTS: "<<endl;
    for(int i=0; i<10; i++)
    {
		if (num[i].edad<20 && num[i].talla>1.70)
        {
            cout<<"\nJugador que cumple los requisitos: "<<endl;
            cout<<"Nombre: "<<num[i].nombres<<endl;
            cout<<"Edad: "<<num[i].edad<<endl;
            cout<<"Talla: "<<num[i].talla<<endl;
        }
	}
    return 0;
}
