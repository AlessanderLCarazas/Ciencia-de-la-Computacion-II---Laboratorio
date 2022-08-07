#include <iostream>
#include <math.h>

using namespace std;

template<int n>

struct trans_hexadecimal
{
    enum
    {
        value_a = (n%16>=0 && n%16<=9) ? (48+n%16):(55+n%16),
        value = value_a + trans_hexadecimal<n/16>::value*100
    };
};

template<>
struct trans_hexadecimal<0>
{
    enum
    {
        value = 0
    };
};

int contar_digi(int num)
{
    int contador=0;
    while(num>0)
    {
        num /= 10;
        contador++;
    }
    return contador;
}

string convertidor_cadena(int num)
{
    int aux = num;
    int tam = contar_digi(num)/2;
    string cadena_conver;
    for(int i = pow(100,tam)/10;i>=1;i/=100)
    {
        int x = (aux/i)*10 + aux/(i/10)%10;
        aux -= x * (i/10);
        cadena_conver += char(x);
    }
    return cadena_conver;
}

int main()
{
    int x = trans_hexadecimal<2545>::value;
    string transformada_x = convertidor_cadena(x);
    cout << "El resultado transformado en hexadecimal es: " << transformada_x << endl;
    int y = trans_hexadecimal<15452>::value;
    string transformada_y = convertidor_cadena(y);
    cout << "\nEl resultado transformado en hexadecimal es: " << transformada_y << endl;
    int z = trans_hexadecimal<1032>::value;
    string transformada_z = convertidor_cadena(z);
    cout << "\nEl resultado transformado en hexadecimal es: " << transformada_z << endl;

    return 0;
}
