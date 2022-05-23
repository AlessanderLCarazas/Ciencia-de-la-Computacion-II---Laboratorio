#ifndef COLOR_H
#define COLOR_H

#include <iostream>
using namespace std;

class Color
{
    public:
        Color(string);
        ~Color();
        void printcol();

    protected:

    private:
        string rgb;
};

#endif // COLOR_H
