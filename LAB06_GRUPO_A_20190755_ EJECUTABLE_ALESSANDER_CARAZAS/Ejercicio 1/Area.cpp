#include "Area.h"

Area::Area(float base1,float altura1) {
	base=base1;
	altura=altura1;
}

Area::~Area()
{
    //dtor
}
void Area::area_rec(){
	cout<<"El area del rectangulo es: "<<base*altura<<endl;
}
void Area::perim_rec(){
	cout<<"El perimetro del rectangulo es: "<<2*(base+altura)<<endl;
}

