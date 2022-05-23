#include "Material.h"

Material::Material(string material1)
{
    material=material1;
}

Material::~Material()
{
    //dtor
}

void Material::printmate(){
    cout<<material;
}
