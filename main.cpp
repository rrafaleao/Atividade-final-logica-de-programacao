#include <iostream>
using namespace std;

//Você deverá criar um programa em C++ que simule um sistema de gerenciamento de tarefas. 
//O sistema deve permitir que o usuário adicione, visualize, edite e remova tarefas. Cada tarefa deve conter as seguintes informações:

int addTarefa(){ 
    int id;
    string vencimento, status, titulo, descricao;
    cout<<"Você escolheu Adicionar Tarefa"<<endl;
    cout<<"Digite o ID da tarefa: ";
    cin>>id;
    cout<<"Digite uma Descrição para a tarefa: ";
    getline(cin,descricao);
    cout<<"Digite o Titulo da Tarefa: ";
    getline(cin,titulo);
    cout<<"Digite a data de vencimento da tarefa conforme o exemplo(25/05/2024): ";
    getline(cin,vencimento);
    cout<<"Digite o Status da Tarefa(Pendente, Progresso, Concluida): ";
    getline(cin,status);
    cout<<"Tarefa Adicionada Com Sucesso!!"<<endl;


    return false;
}

int main(){
    int opcao;
    cout<<"Sistema De Gerenciamento de Tarefas"<<endl;
    cout<<"1. Adicionar Tarefas"<<endl;
    cout<<"2. Visualizar Tarefas"<<endl;
    cout<<"3. Editar Tarefas"<<endl;
    cout<<"4. Remover Tarefas"<<endl;
    cout<<"5. Buscar Tarefas"<<endl;
    cout<<"6. Filtrar Tarefas por Status"<<endl;
    cout<<"0. Sair "<<endl;
    cout<<"Digite o número da opção:"<<endl;
    cin>>opcao;

    switch(opcao){
    case 1:
    addTarefa();
    break;
    }


    return false;
}