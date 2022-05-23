#ifndef PERSONA_H
#define PERSONA_H
#include<iostream>
using namespace std;

class Persona {
	public:
		Persona();
		~Persona();
		void edad_nom();
	protected:
		int edad;
		string nombre;
};

#endif
