#ifndef MATERIAL_H
#define MATERIAL_H

#include <iostream>
using namespace std;

class Material
{
    public:
        Material(string);
        ~Material();
        void printmate();

    protected:

    private:
        string material;
};

#endif // MATERIAL_H
