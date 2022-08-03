#include <iostream>

using namespace std;

template <class T>

class Contenedor{
    T elemento;
    public:
        Contenedor (T arg)
        {
            elemento = arg;
        }
        T add(){ return ++elemento;}
};

template <>

class Contenedor<char>{
    char elemento;
    public:
        Contenedor (char arg)
        {
            elemento = arg;
        }
        char uppercase(){
            if (elemento >= 'a' && elemento <= 'z')
            {
                elemento+='A'-'a';
            }
            return elemento;
        }

};

int main()
{
    Contenedor<int> cint(10);
    Contenedor<char> cchar('P');
    cout << cint.add() << endl;
    cout << cchar.uppercase() << endl;
    return 0;
}

/*  •	La primera clase “Contenedor” con la plantilla “T”, declara una variable elemento de tipo “T”, Constructor
        que inicializa la variable elemento y la función “add” que retorna “++elemento”, o sea el siguiente elemento.
    •	La segunda clase “Contenedor” con una plantilla vacía solo recibe tipos de dato solamente “char”, declara la variable
        elemento de tipo char, de igual manera el constructor que inicializa la variable y la función “uppercase” que compara si el
        elemento esta entre el rango del abecedario de MINUSCULAS, y si es así, la variable elemento se actualiza por su mayúscula, y
        retorna dicha mayúscula. Y si no se cumple ese if quiere decir que el char ingresado a la función ya es mayúscula y solamente lo retorna.
    •	En la Función main declara contenedor de tipo int que se llamara “cint” con valor 5, y otro contenedor de tipo char
        que se llamara “cchar” con valor ‘t’.
        o	Después imprime cint con la función “add” del primer contenedor ya que el segundo solo recibe char,
            se actualiza el 5, ahora es 6 por la función add.
        o	Y de igual manera imprime cchar con la función “uppercase”, dicha función, actualiza el elemento, si
            es minúscula gracias al if que compara si esta en el abecedario de las minúsculas, actualiza dicho elemento, en
            caso de que no, quiere decir que el elemento(char) ya es una mayúscula y no hay necesidad de actualizar, en resumen,
            solamente retorna la mayúscula del elemento.
*/
