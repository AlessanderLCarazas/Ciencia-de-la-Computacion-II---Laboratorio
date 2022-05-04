#include <iostream>

using namespace std;

int main()
{
    string nombre[10];
    int precio[10];
    int stock[10];
    int opc,i=0;
    do
    {
        cout<<"============================================\n";
        cout<<"(1)Ingresar producto nuevo\n";
        cout<<"(2)Buscar producto por el nombre\n";
        cout<<"(3)Modificar el stock y precio de un producto dado.\n";
        cout<<"(4)Mostrar Lista de Productos:\n";
        cout<<"(5)Salir\n";
        cout<<"Opción? ";
        cin>>opc;
        if(opc==1)
        {
            cout << "\n******* PRODUCTO " << i + 1 << "********:\n";
            cout << "Nombre del Producto: ";
            cin.ignore();
            getline(cin, nombre[i]);
            cout << "Precio: ";
            cin>> precio[i];
            cout << "Stock: ";
            cin>> stock[i];
            i++;
        }
        else if(opc==2)
        {
            cout<<"============================================\n";
            string bus;
            cout<<"Ingrese el nombre del producto que desea buscar: ";
            cin.ignore();
            getline(cin,bus);
            for(int j=0; j<i; j++)
            {
                cout<<"============================================\n";
                if(nombre[j]==bus)
                {
                    cout<<endl;
                    cout<<"\tPRODUCTO ENCONTRADO: "<<endl;
                    cout << "Nombre del Producto: "<<nombre[j]<<endl;
                    cout << "Precio: "<< precio[j]<<endl;
                    cout << "Stock: " << stock[j]<<endl;
                }
            }
        }
        else if(opc==3)
        {
            cout<<"============================================\n";
            string bus;
            cout<<"Ingrese el nombre del producto para cambiar el precio y stock: ";
            cin.ignore();
            getline(cin,bus);
            int precio_nuevo,stock_nuevo;
            cout<<"Ingrese el precio nuevo: ";
            cin>>precio_nuevo;
            cout<<"Ingrese el stock nuevo: ";
            cin>>stock_nuevo;
            for(int j=0; j<i; j++)
            {
                if(nombre[j]==bus)
                {
                    precio[j]=precio_nuevo;
                    stock[j]=stock_nuevo;
                }
            }
            cout<<"Cambio completado."<<endl;
        }
        else if(opc==4)
        {
            cout<<"============================================\n";
            cout<<"Listado de Productos\n";
            for(int j=0; j<i; j++)
            {
                cout << "Nombre del Producto: "<<nombre[j]<<endl;
                cout << "Precio: "<< precio[j]<<endl;
                cout << "Stock: " << stock[j]<<endl;
            }
        }
    }while(opc!=5);
    return 0;
}
