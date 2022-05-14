#ifndef ALUMNO_H
#define ALUMNO_H
#include<iostream>
using namespace std;

class Alumno
{
    public:
        Alumno(string,int,float,float,float);
        virtual ~Alumno();
        void prom_not();

    private:
        string nom_ape;
        int CUI;
        int not1;
        int not2;
        int not3;
};

#endif // ALUMNO_H
