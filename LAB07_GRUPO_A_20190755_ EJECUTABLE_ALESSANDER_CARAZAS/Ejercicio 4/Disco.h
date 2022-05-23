#ifndef DISCO_H
#define DISCO_H

#include <ClaseMultimedia.h>
#include <iostream>
using namespace std;

class Disco : public ClaseMultimedia
{
    public:
        Disco(string,string,string);
        ~Disco();
        void print();

    protected:

    private:
        string cantante;
};

#endif // DISCO_H
