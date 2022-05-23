#include "Color.h"

Color::Color(string rgb1)
{
    rgb=rgb1;
}

Color::~Color()
{
    //dtor
}

void Color::printcol(){
    cout<<rgb;
}

