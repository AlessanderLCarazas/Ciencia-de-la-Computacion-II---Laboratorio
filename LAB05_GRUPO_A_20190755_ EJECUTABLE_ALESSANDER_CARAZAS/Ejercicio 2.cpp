#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    for (int j=0;j=1000000;j++)
    {
        int *vec1,*vec2;
        int lon,cont=0;
        lon=rand()%10+1;
        vec1=new int[lon];
        vec2=new int[lon];
        for (int i=0; i<lon; i++)
        {
            vec1[i]=rand()%10+1;
        }
        cout<<"Vector 1: "<<endl;
        for (int i=0;i<lon;i++)
        {
            cout<<vec1[i]<<"\t";
        }
        cout<<"\nVector 2: "<<endl;
        for (int i=0;i<lon;i++)
        {
            vec2[i]=rand()%10+1;
        }
        for (int i=0;i<lon;i++)
        {
            cout<<vec2[i]<<"\t";
        }
        cout<<"\nProducto Punto: "<<endl;
        for (int i=0;i<lon;i++)
        {
            cont=cont+vec1[i]*vec2[i];
        }
        cout<<"El producto Punto de los 2 vectores es: "<<cont<<endl;
        delete [] vec1;
        delete [] vec2;
    }
    return 0;
}
