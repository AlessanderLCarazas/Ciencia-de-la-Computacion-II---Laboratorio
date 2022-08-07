#include <iostream>

using namespace std;

template<int n>
struct trans_binario
{
    enum
    {
        value =(n%2) + 10*trans_binario<n/2>::value
    };
};

template <>
struct trans_binario<0>
{
    enum
    {
        value = 0
    };
};

int main ()
{
    int x = trans_binario<9>::value;
    cout << "El numero transformado en binario es: " << x << endl;
    int y = trans_binario<11>::value;
    cout << "\nEl numero transformado en binario es: " << y << endl;
    int z = trans_binario<15>::value;
    cout << "\nEl numero transformado en binario es: " << z << endl;
    return 0;
}
