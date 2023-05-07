#include "Lista.h"
#include "Elemento.h"
#include<iostream>
#define TAM_MAX 100

using namespace std;

Lista::Lista()
{
    //ctor
}

Lista::~Lista()
{
    //dtor
}

int Lista::ObternElementos() const
{
    return nElementos;
}
int Lista::ListaCheia() const
{
    if(nElementos == TAM_MAX){
        return 1;
    }
    return 0;

}

 Lista::AbreEspaco(int verifica_pos)
{
    for (int i = nElementos; i > verifica_pos; i--) {//começa do final da lista, colocando cada termo um a frente até a posição onde será inserido o novo funcionario
        lista[i] = lista[i-1];

    }

}


int Lista::ListaVazia() const
{
    if(nElementos == 0){
        return 1;
    }
    return 0;

}

 Lista::FechaEspaco(int verifica_pos)
{
    for (int i = verifica_pos; i < nElementos - 1; i++){
        lista[i] = lista[i+1];

    }

    }




int Lista::INSERIR(Elemento E1)
{
    if(ListaCheia() == 1){
        return 0;
    }
    if(ListaVazia()== 1){
        lista[nElementos]= E1;
        nElementos = nElementos +1;
        cout<<"Adicionado"<<endl;
        return 1;
    }

    int verifica_pos = BUSCAR(E1.Obterid(), 0, ObternElementos());

    if (verifica_pos >= nElementos) { // id maior que todos que já estão na lista, ou seja, vai pra última posição
        lista[nElementos] = E1;
        nElementos = nElementos + 1;
        cout<<"Adicionado"<<endl;
        return 1;
    }
    if (lista[verifica_pos].Obterid() == E1.Obterid()) { //funcionário já esta na lista
        cout << "Esse funcionario ja esta na lista" <<endl;
        return 0;
    } else {
        AbreEspaco(verifica_pos);
        lista[verifica_pos] = E1;
        nElementos = nElementos + 1;
        cout<<"Adicionado"<<endl;
        return 1;
    }
}

int Lista::BUSCAR(int id, int ini, int fim)
{
    if (ini >= fim) { //nao encontrou o funcionario, mas a posição a ser adicionado

        return -1;
    } else {

        int meio = (ini + fim) / 2;

        cout<<"id:"<<id<<endl;
        cout<<"meio:"<<meio<<endl;
        cout<<"valor na posicao meio: "<<lista[meio].Obterid()<<endl;

        if (lista[meio].Obterid() == id) { //encontrou o funcionário
            cout << "Funcionário encontrado na posição " << meio << endl;
            return meio;
        }

        if (id > lista[meio].Obterid()) { //recursividade pra dividir ao meio e buscar novamente só que do meio pra frente
            return BUSCAR(id, meio + 1, fim);
        }

        if (id < lista[meio].Obterid()) { //recursividade pra dividir ao meio e buscar novamente só que do meio pra trás
            return BUSCAR(id, ini, meio);
        }
    }
}


int Lista::REMOVER(int id)
{
    if(ListaVazia()== 1){
        cout<<"LISTA VAZIA NAO EH POSSIVEL REMOVER"<<endl;
        return 1;
    }
    else{
        int n_Elementos = ObternElementos();
        int verifica_pos = BUSCAR(id, 0, n_Elementos);
        if (lista[verifica_pos].Obterid() == id) { //encontrou o funcionário a ser removido
            FechaEspaco(verifica_pos); //reorganiza a lista com a remoção
            nElementos = nElementos - 1;
            cout<<"Removido da lista com sucesso\n"<<endl;
            return 1;
        } else {
            cout<<"Nao esta cadastrado\n"<<endl;
            return 0;
        }
    }
}





