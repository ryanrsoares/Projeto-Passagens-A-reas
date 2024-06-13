// Ryan Isabelly
#include <iostream>
#include <string>
#include <limits>
#include <vector>
using namespace std;
vector <string> passageiros;
vector <string> origens;
vector <string> destinos;
vector <string> datas;
void desenhaBoasVindas(){
    cout << "=========================" << endl;
    cout << "|                       |" << endl;
    cout << "| Bem vindo ao programa |" << endl;
    cout << "|          de           |" << endl;
    cout << "|    Passagens Aereas   |" << endl;
    cout << "|                       |" << endl;
    cout << "=========================" << endl;
    }
void menuDeOpcao(){
    cout << " ====================================== " << endl;
    cout << " |                                    |" << endl;
    cout << " |   Escolha uma opcao:               |" << endl;
    cout << " |     1) cadastrar passagem          |" << endl;
    cout << " |     2) Listar passagens            |" << endl;
    cout << " |     0) Sair                        |" << endl;
    cout << " |                                    |" << endl;
    cout << " ====================================== " << endl;
    cout << "Opcao :" ;
}
void limpaBufferDoCin(){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
    string nome, origem, destino, dataViagem;
void cadastrarPassagem(){
    limpaBufferDoCin();

    cout << "Digite o nome do passageiro: ";
    getline(cin, nome);
    cout << endl;
    passageiros.push_back(nome);

    cout << "Origem: ";
    cin >> (origem);
    cout << endl;
    origens.push_back(origem);

    cout << "Digite o destino da viagem: ";
    cin >> (destino);
    cout << endl;
    destinos.push_back(destino);

    cout << "Digite a data da viagem: ";
    cin >> (dataViagem);
    cout << endl;
    datas.push_back(dataViagem);
    
}
void listarPassagem(){
    cout << "============================= \n";
    cout << "|                           | \n";
    cout << "|   Bem vindo ao programa   | \n";
    cout << "|             de            | \n";
    cout << "|   lista de passageiros    | \n";
    cout << "|                           | \n";
    cout << "============================= \n";
    cout << "\n";
    cout << "\n";
    cout << "Quantidade de Passagens: " << passageiros.size() << endl << endl;

    for (int i = 0; i < passageiros.size(); i++ ){
        cout << "Passageiro: " << passageiros[i] << endl;
        cout << "Origem: " << origens[i] << endl;
        cout << "Destino: " << destinos[i] << endl;
        cout << "Data: " << datas[i] << endl << endl;
    }
}

int main()
{   
    int opcao = -1;
    string continua = "";
    desenhaBoasVindas ();

    do 
    {   
        menuDeOpcao();
        cin >> opcao;
        cout << endl;
        switch (opcao)
        {
        case 0:
            cout << "==========================================" << endl;
            cout << "| Voce escolheu a opcao Sair do Programa |" << endl;
            cout << "==========================================" << endl << endl;
            cout << "\n Voce escolheu o 0. Pressione uma letra + <Enter> para continuar ...";
            cin >> continua;
            break;
        case 1:
            cout << "============================================" << endl;
            cout << "| Voce escolheu a opcao Cadastrar passagem |" << endl;
            cout << "============================================" << endl << endl;
            cadastrarPassagem ();
            cout << "\n Cadastrado com Sucesso !! Pressione uma letra + <Enter> para continuar ...";
            cin >> continua;
            break;
        case 2:
            cout << "==========================================" << endl;
            cout << "| Voce escolheu a opcao Listar Passagens |" << endl;
            cout << "==========================================" << endl << endl;
            listarPassagem();
            cout << "\n Listagem com Sucesso !! Pressione uma letra + <Enter> para continuar ...";
            cin >> continua;
            break;
        
        default:
            cout << "==================" << endl;
            cout << "| Opcao Invalida |" << endl;
            cout << "==================" << endl;
        }
    }
    while (opcao != 0);
    system ("cls");
    cout << "==========================================" << endl;
    cout << "Obrigado por utilizar o nosso programa :)" << endl;
    cout << "==========================================" << endl << endl;

    return 0;
}