#ifndef CLASEMULTIMEDIA_H
#define CLASEMULTIMEDIA_H

#include <iostream>
using namespace std;
class ClaseMultimedia
{
    public:
        ClaseMultimedia(string, string);
        virtual ~ClaseMultimedia();
        void printMultimedia();
    protected:

    private:
        string nombre;
        string genero;
};

#endif // CLASEMULTIMEDIA_H
