#pragma once

#include "ente.h"
#include <vector>

class Especie : public Ente
{
    private:
        double nivel_ideal_fosforo, nivel_ideal_nitrogenio, nivel_ideal_potassio;
        double nivel_pot, nivel_nit, nivel_fosf;
    public:
        Especie(){}
        Especie(const double np, const double nn, const double nf);
        ~Especie();

        void exibeDados();  

        double getNivelIdealFosforo() const;
        void setNivelIdealFosforo(const double niv);

        double getNivelIdealNitrogenio() const;
        void setNivelIdealNitrogenio(const double niv);

        double getNivelIdealPotassio() const;
        void setNivelIdealPotassio(const double niv);
};