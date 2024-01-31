#include "menu.h"

void Menu::pegaCPF()
{
    cout << "Digite seu cpf: ";
    cin >> cpf;

    if(cpf/10 != 11)
    {
        system("cls");
        pegaCPF();
    }
}

void Menu::pegaEmail()
{  
    cout << "Digite seu email: ";
    cin >> email;
}

void Menu::pegaEndereco()
{
    cout << "Digite seu endereco: ";
    cin >> endereco;
}

void Menu::pegaNome()
{
    cout << "Digite seu nome: ";
    cin >> nome;
}

void Menu::pegaNivelFosforo()
{
    cout << "Digite o Nivel de Fosforo no solo: ";
    cin >> nivelFosforo;
}

void Menu::pegaNivelNitrogenio()
{
    cout << "Digite o Nivel de Nitrogenio no solo: ";
    cin >> nivelNitrogenio;
}

void Menu::pegaNivelPotassio()
{
    cout << "Digite o Nivel de Potassio no solo: ";
    cin >> nivelPotassio;
}

void Menu::cadastrarCliente()
{
   pegaNome();
   pegaCPF();
   pegaEmail();
   pegaEndereco();

   pessoa = Pessoa(nome, cpf, email, endereco);
   listaClientes.incluir(static_cast<Ente*>(&pessoa));
}



void Menu::cadastrarEspecie()
{
    pegaNome();
    pegaNivelFosforo();
    pegaNivelNitrogenio();
    pegaNivelPotassio();

    especie = Especie(nivelPotassio, nivelNitrogenio, nivelFosforo);
    listaEspecies.incluir(static_cast<Ente*>(&especie));
}

Menu::Menu()
{
    //executar();
    //pessoa = Pessoa(nome, cpf, email, endereco);
}

Menu::~Menu()
{
    
}

void Menu::rodaClientes()
{
    //pra ficar mais pratico a lista exibiria somente os nomes dos clientes e nao todas as informacoes sobre eles
    
    int num_clientes = 0;
    for(num_clientes = 0; num_clientes < listaClientes.getTamanho(); num_clientes++)
    {
        cout << num_clientes+1 << " - ";
        listaClientes.exibeNomes(num_clientes);
        cout << endl;
    }
}

void Menu::rodaEspecies()
{
    //mesma coisas para a exibicao de especies, sera apresentado somente os nomes delas e nao os niveis dos nutrientes no solo
    
    int num_especies;
    for(num_especies = 0; num_especies < listaEspecies.getTamanho(); num_especies++)
    {
        cout << num_especies+1 << " - ";
        listaEspecies.exibeNomes(num_especies);
        cout << endl;
    }
}

void Menu::rodaMenu()
{
    int opcao = 0;
    cout << "\t \t MENU PRINCIPAL" << endl << endl;
    while (opcao != 5)
    {
        cout << "1 - Cadastrar Cliente" << endl;
        cout << "2 - Cadastrar Especie" << endl;
        cout << "3 - Clientes Cadastrados" << endl;
        cout << "4 - Especies Cadastradas" << endl;
        cout << "5 - Sair" << endl;

        cout << "Escolha uma opcao: ";
        cin >> opcao;
        
        switch(opcao)
        {
            case 1:
                system("cls");
                cadastrarCliente();
                system("pause");
                system("cls");
                break;
            case 2:
                system("cls");
                cadastrarEspecie();
                system("pause");
                system("cls");
                break;
            case 3:
                system("cls");
                rodaClientes();
                system("pause");
                system("cls");
                break;
            case 4: 
                system("cls");
                rodaEspecies();
                system("pause");
                system("cls");
                break;
            case 5:
                system("cls");
                cout << "Fim do Programa" << endl;
                system("pause");
                exit(0);
                break;

            default:
                cout << "Opcao invalida!" << endl;
                system("pause");
                system("cls");
                break;
        }
    }
}
