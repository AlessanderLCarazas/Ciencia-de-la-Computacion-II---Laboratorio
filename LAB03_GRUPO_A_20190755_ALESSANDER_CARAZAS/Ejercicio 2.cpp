#include <iostream>

using namespace std;

bool bisiesto(int a)
{
    if (a%4==0)
    {
        if (a%100==0)
        {
            if (a%400==0)
                return true;
            else
                return false;
        }
        else
            return true;
    }
    else
        return false;
}

int main()
{
    int an;
    cout << "Ingrese año: ";
    cin>>an;
    if(bisiesto(an))
        cout << "El año: "<<an<<" SI es bisiesto"<<endl;
    else
        cout << "El año: "<<an<<" NO es bisiesto"<<endl;
    return 0;
}
