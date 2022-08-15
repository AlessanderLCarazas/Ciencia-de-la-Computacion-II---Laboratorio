#include <iostream>
#include <memory>

using namespace std;
class C1
{
    private:
        std::shared_ptr<double> d;
    public:
        C1(std::shared_ptr<double> value) : d(value) {}
        virtual ~C1() { cout << "\nC1 destructor\n"; }
        void print() const { cout << "Valor en C1: " << *d<<endl; }
};

class C2{
    private:
        C1 *d;
        std::shared_ptr<double> d1;
    public:
        C2(C1 *value) {
            d = value;
        }
        C2(std::shared_ptr<double> value) : d1(value) {}
        virtual ~C2() { cout << "\nC2 destructor\n"; }
        void print() const { cout << "Valor en C2: " << *d1<<endl;}
};
int main() {
    shared_ptr<double> num1 = make_shared<double>(152.1023);
    C1 *c1 = new C1(num1);
    C2 *c_2 = new C2(num1);
    C2 *c2 = new C2(c1);

    c1->print();
    c_2->print();

    delete c1;
    delete c_2;
    delete c2;

    return 0;
}
