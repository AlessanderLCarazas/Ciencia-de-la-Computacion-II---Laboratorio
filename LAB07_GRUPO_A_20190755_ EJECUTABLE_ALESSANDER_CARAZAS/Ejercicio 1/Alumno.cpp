#include "Alumno.h"
#include<iostream>
using namespace std;

Alumno::Alumno(int edad2, string nombre2) {
	edad=edad2;
	nombre=nombre2;
}

Alumno::~Alumno() {

}

void Alumno::edad_nom1(){
	cout<<"La edad del alumno es: "<<edad<<" y se llama: "<<nombre<<endl;
}

