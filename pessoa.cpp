#include "pessoa.h"

const string Pessoa::getEmail() const
{
    return email;
}

const string Pessoa::getEndereco() const
{
    return endereco;
}

int Pessoa::getCPF() const
{
    return cpf;
}

Pessoa::Pessoa(const string nome_, const int cpf_, const string email_, const string endereco_) : Ente(), endereco(endereco_),
 email(email_), cpf(cpf_)
{
    setNome(nome_);
}

Pessoa::~Pessoa()
{
    endereco = "";
    cpf = 0;
    email = "";
}

void Pessoa::exibeDados()
{
    cout << "Nome: " << nome << endl;
    cout << "Endereco: " << endereco << endl;
    cout << "Email: " << email << endl;
    cout << "CPF: " << cpf << endl;
    cout << endl;
}