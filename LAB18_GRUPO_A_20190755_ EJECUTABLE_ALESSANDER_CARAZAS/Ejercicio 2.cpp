#include <iostream>

using namespace std;

template <int n>
struct Fibonacci
{
    enum
    {
        value =Fibonacci <n - 1>::value + Fibonacci <n - 2>::value
    };
};

template <>
struct Fibonacci <1>
{
    enum{
        value = 1
    };
};

template <>
struct Fibonacci <0>
{
    enum{
        value = 0
    };
};

int main()
{
    int x = Fibonacci<3>::value;
    cout << "El Valor de la posicion: " << x << endl;
    int y = Fibonacci<4>::value;
    cout << "\nEl Valor de la posicion: " << y << endl;
    int z = Fibonacci<5>::value;
    cout << "\nEl Valor de la posicion: " << z << endl;
    return 0;
}
