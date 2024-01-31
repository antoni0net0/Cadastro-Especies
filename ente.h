#pragma once

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Ente
{
    protected:
        string nome;
    public:
        Ente();
        ~Ente();

        virtual void pegaNome();
        virtual void exibeDados() = 0;
        
        void setNome(const string nome_);
        const string getNome() const;
};