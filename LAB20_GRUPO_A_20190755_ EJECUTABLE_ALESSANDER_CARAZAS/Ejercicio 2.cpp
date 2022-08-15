#include <iostream>
#include <memory>

using namespace std;

class Point
{
    public:
        Point(double x1,double y1)
        {
            x = x1;
            y = y1;
        }
        ~Point()
        {
        }
        void X(double x)
        {
            this->x = x;
        }
        void Y(double y)
        {
            this->y = y;
        }
        void imprimir()
        {
            cout << "Valor de x: " << x << endl;
            cout << "Valor de y: " << y << endl;
        }
    protected:
        double x, y;
};

int main()
{
    unique_ptr <double> d = make_unique<double>(1.0);
	unique_ptr <Point> pt = make_unique<Point>(1.0,2.0);
    cout << "Valor actual de *d: " << *d << endl;
    pt->imprimir();

    *d = 2.0;
    (*pt).X(3.0);
    (*pt).Y(3.0);
    cout << "\nValor actual de *d: " << *d << endl;
    (*pt).imprimir();

    pt->X(3.0);
    pt->Y(3.0);
    cout << "\nValor actual de *d: " << *d << endl;
	pt->imprimir();

	/*En el momento de declarar los objetos con el std::unique_ptr,
	ya no necesitaremos el "delete" para liberar la memoria*/

	//delete d;
    //delete pt;

    return 0;
}
