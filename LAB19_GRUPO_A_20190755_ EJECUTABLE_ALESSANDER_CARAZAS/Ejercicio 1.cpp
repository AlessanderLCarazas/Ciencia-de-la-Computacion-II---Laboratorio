#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class ecu_regresion_lineal_simple
{
    public:
        float operator()(float x, float y,int n)
        {
            int x_2= pow(x,2);
            float x_y=x*y;
            float b =(((n*x_y)-(x_y))/(n*x_2-x_2));
            float a =((y-(b*x))/n);
            cout<<"x0: "<<a;
            cout<<"º\ty0: "<<b;
            return a + b;
        }
};

int main()
{
    vector<double> x = {5.41, 10.45, 10.245, 50.124, 111.231, 5120.212, 1.215};
    vector<double> y = {14.75, 19.158, 63.20, 41.23, 50.213, 12.10, 740.21};
    ecu_regresion_lineal_simple prueba_ec;
    int tam=x.size();
    double resul;
    cout<<"--------------------------------------------"<<endl;
    for (int i=0; i<tam; i++)
    {
        cout<<"DATOS: "<<i+1<<endl;
        cout<<"Coordenadas: ("<<x[i]<<", "<<y[i]<<")"<<endl;
        resul = prueba_ec(x[i], y[i],tam);
        cout << "\nResultado Suma (x0, y0): " << resul <<endl;
        cout<<"--------------------------------------------"<<endl;
    }
    return 0;
}
