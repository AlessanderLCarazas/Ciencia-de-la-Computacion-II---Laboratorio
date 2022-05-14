#include <iostream>
#include "Matriz.h"

using namespace std;

int main()
{
    Matriz a1 = Matriz(5);
    a1.llenarMa();
    a1.mostrarMa();
    a1.busc_bus();
    return 0;
}
