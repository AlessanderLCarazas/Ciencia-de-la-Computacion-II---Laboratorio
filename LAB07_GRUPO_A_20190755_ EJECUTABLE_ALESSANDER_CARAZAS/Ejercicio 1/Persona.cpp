#include "Persona.h"
#include<iostream>
using namespace std;

Persona::Persona() {

}

Persona::~Persona() {

}

void Persona::edad_nom(){
	cout<<"El nombre del alumno es: "<< nombre << " y tiene: " << edad << " años."<<endl;
}
