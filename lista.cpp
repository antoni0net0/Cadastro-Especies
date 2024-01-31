#include "lista.h"

Lista::Lista() : vetor(), it()
{

}

Lista::~Lista()
{
    Ente* pE;
    for(int i = 0; i < getTamanho(); i++)
    {
        pE = vetor[i];
        delete pE;
    }

    vetor.clear();    
}

void Lista::incluir(Ente* pE)
{
    if(pE)
        vetor.push_back(pE);
}

void Lista::remover(const int posicao)
{
    *it = (vetor[posicao-1]);
    vetor.erase(it);
}

int Lista::getTamanho() const
{
    return vetor.size();
}

const vector<Ente*> Lista::getLista() const
{
    return vetor;
}

void Lista::exibeDados(const int posicao)
{
    Ente* pE = vetor[posicao];
    pE->exibeDados();
}

void Lista::exibeNomes(const int posicao)
{
    Ente* pE = vetor[posicao];
    pE->getNome();
}