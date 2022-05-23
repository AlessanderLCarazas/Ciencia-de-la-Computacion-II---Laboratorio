#ifndef OBJETOS_H
#define OBJETOS_H

#include <iostream>
#include <Color.h>
#include <Material.h>

using namespace std;

class Objetos : public Color, public Material
{
    public:
        Objetos(string, string, string);
        virtual ~Objetos();
         void Objeto();

    protected:

    private:
        string objeto;
};

#endif // OBJETOS_H

