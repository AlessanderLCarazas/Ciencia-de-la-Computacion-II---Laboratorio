#include <iostream>

using namespace std;

template <int n>
struct sum_dig
{
    enum
    {
        value = (n%10) + sum_dig<n/10>::value
    };
};

template <>
struct sum_dig <0>
{
    enum{
        value = 0
    };
};

int main()
{
    int x = sum_dig<16>::value;
    cout << "Suma de digitos: " << x << endl;
    int y = sum_dig<25>::value;
    cout << "\nSuma de digitos: " << y << endl;
    int z = sum_dig<5321>::value;
    cout << "\nSuma de digitos: " << z << endl;
    return 0;
}
