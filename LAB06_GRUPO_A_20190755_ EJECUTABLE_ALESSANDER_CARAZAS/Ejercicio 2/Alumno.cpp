#include "Alumno.h"
#include <sstream>

Alumno::Alumno(string nom_ape1,int CUI1,float not11, float not21, float not31) {
	nom_ape= nom_ape1;
	CUI=CUI1;
	not1=not11;
	not2=not21;
	not3=not31;
}

Alumno::~Alumno()
{
    //dtor
}

void Alumno::prom_not(){
	float prom=(not1+not2+not3)/3.0;
	stringstream input_stringstream(nom_ape);
	string coutnombre;
	getline(input_stringstream, coutnombre,' ');
	cout<<"El nombre del alumno es: "<<coutnombre<< " su CUI es: "<< CUI<< " y su promedio es: "<<prom<<endl;
	if (prom<10.5)
		cout<<"NO aprobo"<< endl;
	else
		cout<<"SI aprobo"<< endl;
}

