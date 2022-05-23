#ifndef DISCO_H
#define DISCO_H

#include <ClaseMultimedia.h>


class Disco : public ClaseMultimedia
{
    public:
        ClaseDisco(string,string,string);
        virtual ~ClaseDisco();
        void print();

    protected:

    private:
        string estado;
};

#endif // DISCO_H
