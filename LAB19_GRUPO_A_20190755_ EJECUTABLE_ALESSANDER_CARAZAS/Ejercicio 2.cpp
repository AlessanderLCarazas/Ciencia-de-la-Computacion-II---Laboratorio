#include <iostream>
#include <vector>

using namespace std;

class Find
{
    protected:
        vector<int> arreglo = {5,4,5,2,1,7,8,9,5,4,8,6,2,1,4,8,5,2,4,7,8,5,2,4,7,5,3,2,1,4,5,2,1,5};
    public:
        vector<int> operator()(int inicial, int finall, int buscar)
        {
            int cont = 0;
            vector<int> arreglo_coinci = {};
            for (int i=inicial; i<finall+1; i++)
            {
                if (arreglo[i] == buscar)
                {
                    cont++;
                    arreglo_coinci.push_back(i);
                }
            }
            return arreglo_coinci;
        }

        void imprimir(vector<int> arre);
        void mostrar();
};

void Find::imprimir(vector<int> arre)
{
    cout << "[ ";
    for(int i=0; i<arre.size(); i++)
    {
        cout << arre[i] << " ";
    }
    cout << "]"<<endl;
}

void Find::mostrar()
{
    imprimir(this->arreglo);
}

int main()
{
	int posicion_inicial, posicion_final, dato_busqueda;
	cout<<"Ingrese indice Posicion Inicial: ";
	cin>>posicion_inicial;
	cout<<"Ingrese indice Posicion Final: ";
	cin>>posicion_final;
	cout<<"Ingrese el Dato a Buscar: ";
	cin>>dato_busqueda;

	Find prueba3;
	vector<int> coincidencias = prueba3(posicion_inicial,posicion_final,dato_busqueda);
    cout<<"\n";
	prueba3.mostrar();
	cout << "\nOcurrencias con el dato a buscar (indices): " << endl;
	prueba3.imprimir(coincidencias);
	return 0;
}
