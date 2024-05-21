#include <iostream>
using namespace std;

#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_RESET   "\x1b[0m"

//Você deverá criar um programa em C++ que simule um sistema de gerenciamento de tarefas. 
//O sistema deve permitir que o usuário adicione, visualize, edite e remova tarefas. Cada tarefa deve conter as seguintes informações:

int addTarefa() {
    string id, status, descricao, vencimento, titulo;

    cout<<"Você escolheu Adicionar Tarefa"<<endl;

    cout << "Digite o" <<ANSI_COLOR_GREEN<<" ID" <<ANSI_COLOR_RESET<<" da tarefa: ";
    cin.ignore();
    getline(cin,id);

    cout << "Digite o" <<ANSI_COLOR_GREEN<<" Titulo"<<ANSI_COLOR_RESET<<" da Tarefa: ";
    cin.ignore();
    getline(cin,titulo);

    cout << "Digite a data de"<<ANSI_COLOR_GREEN<<" vencimento"<<ANSI_COLOR_RESET<<" da tarefa conforme o exemplo(25/05/2024): ";
    cin.ignore(); 
    getline(cin, vencimento);

    cout << "Digite o"<<ANSI_COLOR_GREEN<<" Status"<<ANSI_COLOR_RESET<<" da Tarefa" <<ANSI_COLOR_RED<<" (1 - Pendente "<<ANSI_COLOR_RESET<<ANSI_COLOR_YELLOW<< " 2 - Em Progresso, "<<ANSI_COLOR_RESET<<ANSI_COLOR_GREEN<<"3 - Concluida): "<<ANSI_COLOR_RESET;
    cin.ignore();
    getline(cin, status);

    cout << "Digite uma"<<ANSI_COLOR_GREEN<<" Descrição "<<ANSI_COLOR_RESET<<"para a tarefa: ";
    cin.ignore();
    getline(cin, descricao);
    
    cout <<ANSI_COLOR_GREEN<<"Tarefa Adicionada Com Sucesso!!"<<ANSI_COLOR_RESET<< endl;

    return false;
}

//int visualizarTarefa(){
    //cout<<"ID: " << id << ", Titulo: "<< titulo << ", Descrição: " << descricao << ", Data de vencimento: "<<vencimento<<", Status: "<< status;

    //return false;
//}

int main(){
    int opcao;
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
    case 1:
    addTarefa();
    break;
    }


    return false;
}