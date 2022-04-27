#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    int hora,minutos,agregar;
    string a_o_p;
    cout << "Ingrese la Hora: ";
    cin>>hora;
    if (hora>12)
    {
        a_o_p="pm";
        hora=hora-12;
    }
    else
        a_o_p="am";
    cout << "Ingrese minutos: ";
    cin>>minutos;
    cout << "Ingrese cantidad de minutos a agregar: ";
    cin>>agregar;
    int min_actual=minutos+agregar;
    if (min_actual>60)
    {
        hora+=1;
        min_actual=abs(minutos-agregar);
        if (min_actual<10)
            cout<<"La hora es: "<<hora<<" : 0"<<min_actual<<" "<<a_o_p;
        else
            cout<<"La hora es: "<<hora<<" : "<<min_actual<<" "<<a_o_p;
    }
    else
    {
        cout<<"La hora es: "<<hora<<" : "<<min_actual<<" "<<a_o_p;
    }
    return 0;
}
