#include<iostream>
#include "Elemento.h"
#include "Lista.h"

using namespace std;

int main(){
    Elemento E1(1,2);
    Elemento E2(2,2);
    Elemento E3(3,2);
    Elemento E4(5,2);

    Lista lista;

    lista.INSERIR(E1);
    lista.Imprimir();

    lista.INSERIR(E2);
    lista.Imprimir();

    lista.INSERIR(E3);
    lista.Imprimir();


    lista.BUSCAR(E1.Obterid(), 0, lista.ObternElementos());





    return 0;
}


