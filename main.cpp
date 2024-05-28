#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_RESET   "\x1b[0m"

//Você deverá criar um programa em C++ que simule um sistema de gerenciamento de tarefas. 
//O sistema deve permitir que o usuário adicione, visualize, edite e remova tarefas. Cada tarefa deve conter as seguintes informações:

struct tarefa
{
    string id; 
    string status; 
    string descricao; 
    string vencimento; 
    string titulo;
};

void addTarefa(vector<tarefa> &tarefas) {
    tarefa tarefaNova;

    cout<<"Você escolheu Adicionar Tarefa"<<endl;
    cin.ignore();

    cout << "Digite o" <<ANSI_COLOR_GREEN<<" ID" <<ANSI_COLOR_RESET<<" da tarefa: "<<endl;
    getline(cin, tarefaNova.id);
    cin.ignore();

    cout << "Digite o" <<ANSI_COLOR_GREEN<<" Titulo"<<ANSI_COLOR_RESET<<" da Tarefa: "<<endl;
    getline(cin,tarefaNova.titulo);
    cin.ignore();
    

    cout << "Digite a data de"<<ANSI_COLOR_GREEN<<" vencimento"<<ANSI_COLOR_RESET<<" da tarefa conforme o exemplo(25/05/2024): "<<endl;
    getline(cin, tarefaNova.vencimento);
    cin.ignore(); 
    

    cout << "Digite o"<<ANSI_COLOR_GREEN<<" Status"<<ANSI_COLOR_RESET<<" da Tarefa" <<ANSI_COLOR_RED<<" (1 - Pendente "<<ANSI_COLOR_RESET<<ANSI_COLOR_YELLOW<< " 2 - Em Progresso, "<<ANSI_COLOR_RESET<<ANSI_COLOR_GREEN<<"3 - Concluida): "<<ANSI_COLOR_RESET;
    getline(cin, tarefaNova.status);
    cin.ignore();
    

    cout << "Digite uma"<<ANSI_COLOR_GREEN<<" Descrição "<<ANSI_COLOR_RESET<<"para a tarefa: ";
    getline(cin, tarefaNova.descricao);
    cin.ignore(); 

    tarefas.push_back(tarefaNova);

    cout <<ANSI_COLOR_GREEN<<"Tarefa Adicionada Com Sucesso!!"<<ANSI_COLOR_RESET<< endl;


}

void visualizarTarefa(const vector<tarefa> &tarefas){

    if (tarefas.empty()) {
        cout << "Não há tarefas cadastradas." << endl;
    } else {
        cout << "Lista de Tarefas:" << endl;
        for (const auto &tarefa : tarefas) {
            cout << ANSI_COLOR_GREEN << "Id: " << ANSI_COLOR_RESET << tarefa.id << endl;
            cout << ANSI_COLOR_GREEN << "Título: " << ANSI_COLOR_RESET << tarefa.titulo << endl;
            cout << ANSI_COLOR_GREEN << "Descrição: " << ANSI_COLOR_RESET << tarefa.descricao << endl;
            cout << ANSI_COLOR_GREEN << "Vencimento: " << ANSI_COLOR_RESET << tarefa.vencimento << endl;
            cout << ANSI_COLOR_GREEN << "Status: " << ANSI_COLOR_RESET << tarefa.vencimento << endl;

        }
    }
}

void editTarefa(vector<tarefa> &tarefas){
}

int main(){
    vector<tarefa> tarefas;
    int opcao;
    do
    {
    cout<<"Sistema De Gerenciamento de Tarefas"<<endl;
    cout<<ANSI_COLOR_GREEN<<"1. " << ANSI_COLOR_RESET << "Adicionar Tarefas"<<endl;
    cout<<ANSI_COLOR_GREEN<<"2. " <<ANSI_COLOR_RESET<<"Visualizar Tarefas"<<endl;
    cout<<ANSI_COLOR_GREEN<<"3. "<<ANSI_COLOR_RESET<<"Editar Tarefas"<<endl;
    cout<<ANSI_COLOR_GREEN"4. "<<ANSI_COLOR_RESET<<"Remover Tarefas"<<endl;
    cout<<ANSI_COLOR_GREEN"5. "<<ANSI_COLOR_RESET<<"Buscar Tarefas"<<endl;
    cout<<ANSI_COLOR_GREEN"6. "<<ANSI_COLOR_RESET<<"Filtrar Tarefas por Status"<<endl;
    cout<<ANSI_COLOR_GREEN"0. "<<ANSI_COLOR_RESET<< "Sair "<<endl;
    cout<<"Digite o número da opção:"<<endl;
    cin>>opcao;
    
    switch(opcao){
    case 0:
    cout<<"Você escolheu sair!"<<endl;
    break;
        case 1:
    addTarefa(tarefas);
    break;
        case 2:
    visualizarTarefa(tarefas);
    break;
        case 3:

        case 4:
        case 5: 
        case 6:
        default: 
    cout<<ANSI_COLOR_RED<<"ERRO, insira uma opção valida: "<<ANSI_COLOR_RESET<<endl;
    }
    } while (opcao != 0);


    return false;
}