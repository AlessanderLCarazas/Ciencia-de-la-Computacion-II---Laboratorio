#include <iostream>

using namespace std;

int main()
{
    string codigo, nombre, precio, stock;
    string **productos;
    int col=4;
    int opc,i=0;
    do
    {
        cout<<"============================================\n";
        cout<<"(1)Dar de alta un producto nuevo.\n";
        cout<<"(2)Mostrar Lista de Productos:\n";
        cout<<"(3)Salir\n";
        cout<<"\nOpcion? ";
        cin>>opc;
        if(opc==1)
        {
            int aux=0;
            cout<<"============================================\n";
            cout << "\n******* PRODUCTO " << i + 1 << "********:\n";
            productos = new string *[i];
            productos[i] = new string[col];
            cout << "Codigo del Producto: ";
            cin>> codigo;
            productos[i][aux] = codigo;
            cout << "Nombre del Producto: ";
            cin.ignore();
            getline(cin, nombre);
            aux++;
            productos[i][aux] = nombre;
            cout << "Precio: ";
            cin>> precio;
            aux++;
            productos[i][aux] = precio;
            cout << "Stock: ";
            cin>> stock;
            aux++;
            productos[i][aux] = stock;
            i++;
        }
        else if(opc==2)
        {
            cout<<"============================================\n";
            if (i==0)
            {
                cout<<"Actualmente sin productos. "<<endl;
            }
            else
            {
                cout<<"Listado de Productos\n";

                for(int k=0; k<i; k++)
                {
                    cout << "Codigo del Producto: "<<productos[k][0]<<endl;
                    cout << "Nombre: "<<productos[k][1]<<endl;
                    cout << "Precio: "<< productos[k][2]<<endl;
                    cout << "Stock: " << productos[k][3]<<endl;
                }
            }
        }
    }while(opc!=3);

    delete [] productos;
    return 0;
}
