#ifndef ALUMNO_H
#define ALUMNO_H

#include <Persona.h>

#include<iostream>
using namespace std;

class Alumno : public Persona
{
    public:
        Alumno(int,string);
        ~Alumno();
        void edad_nom1();
    private:
};

#endif // ALUMNO_H
