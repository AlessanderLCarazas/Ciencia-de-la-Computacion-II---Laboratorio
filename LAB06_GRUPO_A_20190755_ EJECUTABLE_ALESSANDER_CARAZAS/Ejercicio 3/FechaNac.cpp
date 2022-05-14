#include "FechaNac.h"

FechaNac::FechaNac(string nombre1,int dia1,int mes1,int anio1,int diaAct1,int mesAct1,int anioAct1) {
	nombre=nombre1;
	dia=dia1;
	mes=mes1;
	anio=anio1;
	diaAct=diaAct1;
	mesAct=mesAct1;
	anioAct=anioAct1;
}

FechaNac::~FechaNac()
{
    //dtor
}

void FechaNac::edad(){
	if (mesAct<=mes && diaAct<=dia)
		cout<<"El nombre de la persona es: "<<nombre<<" y tiene "<<anioAct-anio-1<<" años."<<endl;
	else
		cout<<"El nombre de la persona es: "<<nombre<<" y tiene "<<anioAct-anio<<" años."<<endl;
}
