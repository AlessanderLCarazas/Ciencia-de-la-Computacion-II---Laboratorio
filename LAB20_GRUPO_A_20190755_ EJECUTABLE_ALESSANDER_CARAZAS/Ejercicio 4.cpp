#include <iostream>
#include <memory>

using namespace std;

class Point
{
    public:
        double x, y;
        Point(double x1,double y1)
        {
            x = x1;
            y = y1;
        }
        void X(double X2)
        {
            x = X2;
        }
        void Y(double Y2)
        {
            y = Y2;
        }
        ~Point()
        {
        }
};

class C1
{
    private:
        std::shared_ptr<double> d;
        std::shared_ptr<Point> pt;
    public:
        C1(std::shared_ptr<double> value) : d(value) {}
        void setPoint(std::shared_ptr<Point> x)
        {
            pt = x;
            cout<<"Punto ("<<pt->x<<","<<pt->y<<")"<<endl;
        };
        virtual ~C1() { cout << "\nC1 destructor\n"; }
        void print() const { cout << "Valor en C1: " << *d<<endl; }
};

class C2{
    private:
        std::shared_ptr<C1> d;
        std::shared_ptr<double> d1;
        std::shared_ptr<Point> pt;
    public:
        C2(std::shared_ptr<C1> value) {
            d = value;
        }
        C2(std::shared_ptr<double> value) : d1(value) {}
        void setPoint(std::shared_ptr<Point> value)
        {
            pt = value;
        }
        void setC1(std::shared_ptr<C1> value)
        {
            d = value;
        }
        void set_Pun(std::shared_ptr<Point> value)
        {
            pt = value;
            cout<<"Punto ("<<pt->x<<","<<pt->y<<")"<<endl;
        }
        virtual ~C2() { cout << "\nC2 destructor\n"; }
        void print() const {
            cout << "Valor en C2: " << *d1<<endl;
        }
        void print_1()
        {
            cout<<"C1 en C2: ";
            d->print();
        }
};
int main() {
    shared_ptr<double> prueba2 = make_shared<double>(152.1023);
    shared_ptr<Point> prueba4 = make_shared<Point>(*prueba2,93.12);
    shared_ptr<C1> c1 = make_shared<C1>(prueba2);
    c1->setPoint(prueba4);
    shared_ptr<C2> c2 = make_shared<C2>(prueba2);
    c2->set_Pun(prueba4);
    c2->setC1(c1);


    return 0;
}
