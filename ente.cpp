#include "ente.h"

Ente::Ente()
{
   nome = "";
}

Ente::~Ente()
{
    nome = "";
}

const string Ente::getNome() const
{
    return nome;
}

void Ente::pegaNome()
{
    cout << "Digite seu nome: ";
    cin >> nome;
}

void Ente::setNome(const string nome_)
{
    nome = nome_;
}