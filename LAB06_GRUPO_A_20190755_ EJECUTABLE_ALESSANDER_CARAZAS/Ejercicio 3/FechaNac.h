#ifndef FECHANAC_H
#define FECHANAC_H
#include <iostream>
using namespace std;

class FechaNac
{
    public:
        FechaNac(string, int, int, int, int, int, int);
        virtual ~FechaNac();
        void edad();

    private:
        string nombre;
        int dia;
        int mes;
        int anio;
        int diaAct;
        int mesAct;
        int anioAct;
};

#endif // FECHANAC_H
