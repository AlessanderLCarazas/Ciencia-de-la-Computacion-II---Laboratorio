#include <iostream>

using namespace std;

template <int n, unsigned int x>
struct potencia
{
    enum
    {
        value = potencia<n, x / 2>::value * potencia<n, x / 2>::value * potencia<n, x % 2>::value
    };
};

template <int n>
struct potencia<n, 0>
{
    enum
    {
        value = 1
    };
};


template <int n>
struct potencia<n, 1>
{
    enum
    {
        value = n
    };
};

int main()
{
    int x = potencia<5,2>::value;
    cout << "El resultado es: " << x << endl;
    int y = potencia<3,4>::value;
    cout << "\nEl resultado es: " << y << endl;
    int z = potencia<2,8>::value;
    cout << "\nEl resultado es: " << z << endl;
    return 0;
}
