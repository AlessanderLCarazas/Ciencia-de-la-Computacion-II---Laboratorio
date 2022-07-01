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
        cout<<"(2)Modificar el nombre, precio o cantidad de un producto.\n";
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
                string cod_aux;
                cout<<"Que producto desea cambiar Ingrese su codigo: ";
                cin>>cod_aux;
                for (int j=0;j<i;j++)
                {
                    if (productos[i][0] == cod_aux)
                    {
                        int aux;
                        cout<<"(1)Modificar nombre\n";
                        cout<<"(2)Modificar Precio\n";
                        cout<<"(3)Modificar stock\n";
                        cin>>aux;
                        if (aux==1)
                        {
                            string nombre_new;
                            cout<<"Ingrese el nombre nuevo"<<endl;
                            cin.ignore();
                            getline(cin, nombre_new);
                            productos[i][1] = nombre_new;
                            cout<<"Cambio Completado"<<endl;
                        }
                        else if (aux==2)
                        {
                            string precio_new;
                            cout<<"Ingrese el precio nuevo"<<endl;
                            cin>>precio_new;
                            productos[i][2] = precio_new;
                            cout<<"Cambio Completado"<<endl;
                        }
                        else if (aux==3)
                        {
                            string stock_new;
                            cout<<"Ingrese el stock nuevo"<<endl;
                            cin>>stock_new;
                            productos[i][3] = stock_new;
                            cout<<"Cambio Completado"<<endl;
                        }
                        else
                            cout<<"Opcion no valida."<<endl;
                    }
                }
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
