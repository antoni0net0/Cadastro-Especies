#pragma once

#include "ente.h"
#include "pessoa.h"
#include "menu.h"
#include "lista.h"
#include "especie.h"

class Principal
{
    private:
        Menu menu;

    public:
        Principal();
        ~Principal();
        void Executar();
};