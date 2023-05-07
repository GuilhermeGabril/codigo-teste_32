#ifndef LISTA_H
#define LISTA_H
#define TAM_MAX 100
#include "Elemento.h"

class Lista
{
    public:
        Lista();
        virtual ~Lista();
        int ListaCheia() const;
        int ListaVazia() const;
        AbreEspaco(int verifica_pos);
        FechaEspaco(int verifica_pos);
        int INSERIR(Elemento E1);
        int ObternElementos() const;
        int BUSCAR(int id, int ini, int fim);
        int REMOVER(int id);
        void Imprimir() const;


    protected:
    private:
        int nElementos=0;
        Elemento lista[TAM_MAX];
};

#endif // LISTA_H

