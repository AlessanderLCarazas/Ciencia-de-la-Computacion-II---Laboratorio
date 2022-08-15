#include <iostream>
#include <memory>

using namespace std;

class Point // Clase Point
{
    public:
        Point(double x1,double y1) //Constructor
        {
            x = x1; //Inicializacion de la variable "x"
            y = y1; //Inicializacion de la variable "y"
        }
        ~Point() //Destructor
        {
        }
        void X(double x) //Funcion "X" para inicializar la unica variable
        {
            this->x = x; //Inicializacion de la variable "X"
        }
        void Y(double y) //Funcion "Y" para inicializar la unica variable
        {
            this->y = y; //Inicializacion de la variable "Y"
        }
        void imprimir() // Funcion para imprimir las variables "x", "y"
        {
            cout << "Valor de x: " << x << endl; //Imprime "x"
            cout << "Valor de y: " << y << endl; //Imprime "y"
        }
    protected:
        double x, y; //Declaracion de las variables x, y de tipo double
};

int main()
{
    double* d = new double(1.0); // "d" es un puntero de tipo double, asigna un espacio de tipo double de memoria para 1.0
    Point* pt = new Point(1.0, 2.0); // se crea el objeto de tipo Point "pt" que asigna un espacio de memoria con 2 valores (1.0 y 2.0)
    cout << "Valor actual de *d: " << *d << endl; // Imprimi el contenido del valor acutal del puntero d
    pt->imprimir();// Imprimie valor actual de x, y

    *d = 2.0; // El puntero "d" cambia de 1.0 a 2.0. Se actualiza
    (*pt).X(3.0);// El puntero "pt" que se le asigno a "x" cambia de 1.0 a 3.0. Gracias a la funcion "void X"
    (*pt).Y(3.0);// El puntero "pt" que se le asigno a "y" cambia de 2.0 a 3.0. Gracias a la funcion "void Y"
    cout << "\nValor actual de *d: " << *d << endl; // Imprimi el contenido del valor actualizado del puntero d. Paso de 1.0 a 2.0
    (*pt).imprimir();// Imprimie valor actualizado de x, y

    pt->X(3.0); // "pt" Se actualiza SOLO para X en 3.0
    pt->Y(3.0);// "pt" Se actualiza SOLO para Y en 3.0
    cout << "\nValor actual de *d: " << *d << endl;// d no se actualizo por lo tanto seguira imprimiendo 2.0
	pt->imprimir();// Se imprime el valor de x, y

    delete d; // Liberaciion de memoria de d
    delete pt;// Liberaciion de memoria de pt

    return 0;
}
