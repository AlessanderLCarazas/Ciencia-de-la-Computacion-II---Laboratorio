#ifndef AREA_H
#define AREA_H
#include <iostream>
using namespace std;


class Area
{
    public:
        Area(float,float);
        ~Area();
        void area_rec();
        void perim_rec();

    private:
        float base;
        float altura;
};

#endif // AREA_H
