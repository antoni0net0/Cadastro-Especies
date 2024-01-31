#pragma once

#include "ente.h"

class Pessoa : public Ente
{
    private:
        string email, endereco;
        int cpf;

    public:
        Pessoa() : cpf(0){email = endereco = "";}
        Pessoa(const string nome_, const int cpf_, const string email_, const string endereco_);
        ~Pessoa();

        const string getEmail() const;
        const string getEndereco() const;
        int getCPF() const;

        void exibeDados();
};