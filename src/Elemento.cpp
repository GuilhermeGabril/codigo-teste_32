#include <iostream>
#include "Elemento.h"

Elemento::Elemento()
{
    //ctor
}

Elemento::~Elemento()
{
    //dtor
}

Elemento::Elemento(int _id, int _idade)
{
   id = _id;
   idade = _idade;
}
int Elemento::Obterid() const
{
    return id;
}

