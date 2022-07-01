#include <iostream>

using namespace std;

int main()
{
    string codigo, nombre, precio,stock;
    string **productos;
    int col=4;
    int opc,i=0;
    do
    {
        cout<<"============================================\n";
        cout<<"(1)Dar de alta un producto nuevo\n";
        cout<<"(2)Buscar un Producto (nombre o codigo)\n";
        cout<<"(3)Mostrar Lista de Productos:\n";
        cout<<"(4)Salir\n";
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
                int aux;
                cout<<"(1)Buscar por nombre\n";
                cout<<"(2)Buscar por codigo\n";
                cin>>aux;
                if (i==1)
                {
                    string nombre_bus;
                    cout<<"Ingrese el nombre a buscar"<<endl;
                    cin.ignore();
                    getline(cin, nombre_bus);
                    for (int j=0;j<i;j++)
                    {
                        if (productos[i][1] == nombre_bus)
                        {
                            cout<<"Producto "<<productos[i][1]<<" encontrado."<<endl;
                        }
                    }
                }
                else if (i==2)
                {
                    string codigo_buscar;
                    cout<<"Ingrese el nombre a buscar"<<endl;
                    cin>>codigo_buscar;
                    for (int j=0;j<i;j++)
                    {
                        if (productos[i][0] == codigo_buscar)
                        {
                            cout<<"Producto "<<productos[i][0]<<" encontrado."<<endl;
                        }
                    }
                }
                else
                    cout<<"Opcion no valida."<<endl;
            }
        }
        else if(opc==3)
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
    }while(opc!=4);

    delete [] productos;
    return 0;
}
