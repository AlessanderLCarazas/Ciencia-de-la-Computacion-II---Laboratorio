#include <iostream>
#include <time.h>
#include <vector>
#include <algorithm>

using namespace std;

class conjunto_pares
{
    public:
        int a;
        int b;
        conjunto_pares(int x, int y) : a(x),b(y){}
};

class Sort
{
    public:
        bool operator()(const conjunto_pares& obj1, const conjunto_pares& obj2)
        {
            return obj1.a < obj2.b;
        }

        void imprimir(vector<conjunto_pares> arreglo);
};

void Sort::imprimir(vector<conjunto_pares> arreglo)
{
    cout << "[ ";
    for(int i=0; i<arreglo.size(); i++)
    {
        cout << "(" << arreglo[i].a << "," << arreglo[i].b << ") ";
    }
    cout << "]" << endl;
}


int main()
{
	srand(time(NULL));

	vector<conjunto_pares> arreglo = {};

	for (int i = 0; i < 20; i++)
    {
		int x_random=1+rand()%99;
		int y_random=1+rand()%99;
		arreglo.push_back(conjunto_pares(x_random,y_random));
    }
	Sort prueba5;
    cout << "Arreglo INICIAL: "<<endl;
	prueba5.imprimir(arreglo);

	cout << endl;

	cout << "Arreglo FINAL: "<<endl;
	sort(arreglo.begin(),arreglo.end(),prueba5);
	prueba5.imprimir(arreglo);

	return 0;
}
