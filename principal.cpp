#include "principal.h"

Principal::Principal() : menu()
{
    Executar();
}

Principal::~Principal()
{

}

void Principal::Executar()
{
    menu.rodaMenu();
}