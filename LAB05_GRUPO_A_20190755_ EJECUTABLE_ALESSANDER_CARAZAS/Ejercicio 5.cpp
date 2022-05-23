#include <iostream>

using namespace std;
void concatenacion(string *a,string *b)
{
	string *aux=b;
	*b=*b+*a;
	*a=*b;
	*b=*aux;
	cout<<"\nCadena Concatenada: "<<*a<<endl;
}

int main()
{
    string a,b;
    cout<<"Ingrese la primera cadena: ";
    getline(cin,a);
    cout<<"Ingrese la segunda cadena: ";
    getline(cin,b);
    int lon1=a.length(),lon2=b.length();
    int lont=lon1+lon2;
    string *ptr=&a;
    string *ptr2=&b;
    concatenacion(ptr,ptr2);
    return 0;
}
