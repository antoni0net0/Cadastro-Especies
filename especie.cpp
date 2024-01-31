#include "especie.h"

Especie::Especie(const double np, const double nn, const double nf) : nivel_pot(np), nivel_nit(nn), nivel_fosf(nf)
{

}

Especie::~Especie()
{

}

void Especie::setNivelIdealFosforo(const double niv)
{
    nivel_ideal_fosforo = niv;
}

void Especie::setNivelIdealNitrogenio(const double niv)
{
    nivel_ideal_nitrogenio = niv;
}

void Especie::setNivelIdealPotassio(const double niv)
{
    nivel_ideal_potassio = niv;
}

double Especie::getNivelIdealFosforo() const
{
    return nivel_ideal_fosforo;
}

double Especie::getNivelIdealPotassio() const
{
    return nivel_ideal_potassio;
}

double Especie::getNivelIdealNitrogenio() const
{
    return nivel_ideal_nitrogenio;
}

void Especie::exibeDados()
{
    cout << "Nome: " << nome << endl;
    cout << "Nivel ideal de Nitrogenio: " << nivel_ideal_nitrogenio << endl;
    cout << "Nivel ideal de Fosforo: " << nivel_ideal_fosforo << endl;
    cout << "Nivel ideal de Potassio: " << nivel_ideal_potassio << endl;
    cout << endl;
}