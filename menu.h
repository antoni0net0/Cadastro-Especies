#pragma once

#include "lista.h"
#include "pessoa.h"
#include "especie.h"

class Menu
{
    private:
        string nome, email, endereco;

        int cpf;
        double nivelPotassio, nivelFosforo, nivelNitrogenio;
        
        Pessoa pessoa;
        Especie especie;
        Lista listaClientes, listaEspecies;
    public:
        Menu();
        ~Menu();

        void pegaEmail();
        void pegaEndereco();
        void pegaCPF();
        void pegaNome();
        void pegaNivelPotassio();
        void pegaNivelNitrogenio();
        void pegaNivelFosforo();

        void rodaMenu();

        void rodaClientes();
        void rodaEspecies();

        void cadastrarCliente();
        void cadastrarEspecie();
};