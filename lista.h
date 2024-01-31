#pragma once

#include <vector>
#include "ente.h"

using namespace std;

class Lista
{
    private:
        vector<Ente*> vetor;
        vector<Ente*>::iterator it;
    public:
        Lista();
        ~Lista();

        void incluir(Ente* pE);
        void remover(const int posicao);

        void exibeDados(const int posicao);
        void exibeNomes(const int posicao);

        int getTamanho() const;
        const vector<Ente*> getLista() const;
};