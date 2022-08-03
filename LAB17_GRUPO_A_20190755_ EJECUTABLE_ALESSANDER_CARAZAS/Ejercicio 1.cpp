#include <iostream>

using namespace std;

template <typename T>

T calculadora(T x, T y)
{
    cout << "Datos: " <<x <<", "<< y<< endl;
    int opcion;
    cout << "[1]Sumar " << endl;
    cout << "[2]Restar " << endl;
    cout << "[3]Multiplicar " << endl;
    cout << "[4]Dividir " << endl;
    cout << "Ingrese Opcion: ";
    cin >> opcion;
    if (opcion == 1)
    {
        return x+y;
    }
    else if (opcion == 2)
    {
        return x-y;
    }
    else if (opcion == 3)
    {
        return x*y;
    }
    else
    {
        return x/y;
    }
}

int main()
{
    cout << calculadora<int>(50, 5) << endl;
    cout << "\n" << calculadora<float>(10.2, 5.7) << endl;
    cout << "\n" << calculadora<double>(50.232, 100.245) << endl;
    cout << "\n" << calculadora<char>('a', 'e') << endl;
    return 0;
}
