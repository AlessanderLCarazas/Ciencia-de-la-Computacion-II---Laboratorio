#include <iostream>

using namespace std;

void edad(int an_ac,int mes_ac,int dia_ac,int an_naci,int mes_naci,int dia_naci)
{
    int dia,mes,an;
    an=an_ac-an_naci;
    if (dia_ac<dia_naci)
    {
        dia_ac =dia_ac+30;
        mes_ac=mes_ac-1;
        dia=dia_ac-dia_naci;
    }
    else
        dia=dia_ac-dia_naci;
    if(mes_ac<mes_naci)
    {
        mes_ac=mes_ac+12;
        an_ac=an_ac-1;
        mes=mes_ac-mes_naci;
    }
    else
        mes=mes_ac-mes_naci;
    cout<<"La edad es: "<< an<<" años con "<<mes<<" meses con "<<dia<<" dias"<<endl;

}

int main()
{
    int an_ac,mes_ac,dia_ac,an_naci,mes_naci,dia_naci;
    cout<<"DATOS ACTUALES: "<<endl;
    cout<<"Ingrese año actual: ";
    cin>>an_ac;
    cout<<"Ingrese mes actual: ";
    cin>>mes_ac;
    cout<<"Ingrese dia actual: ";
    cin>>dia_ac;
    cout<<endl;
    cout<<"DATOS DE NACIMIENTO: "<<endl;
    cout<<"Ingrese año nacimiento: ";
    cin>>an_naci;
    cout<<"Ingrese mes de nacimiento: ";
    cin>>mes_naci;
    cout<<"Ingrese dia de nacimiento: ";
    cin>>dia_naci;
    cout<<endl;
    edad(an_ac,mes_ac,dia_ac,an_naci,mes_naci,dia_naci);

    return 0;
}
