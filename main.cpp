#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_RESET   "\x1b[0m"

// Definição da estrutura de tarefa
struct Tarefa {
    string id;
    string status;
    string descricao;
    string vencimento;
    string titulo;
};

// Protótipos das funções
void addTarefa(vector<Tarefa> &tarefas);
void visualizarTarefa(const vector<Tarefa> &tarefas);
void editarTarefa(vector<Tarefa> &tarefas);
void apagarTarefa(vector<Tarefa> &tarefas);

void addTarefa(vector<Tarefa> &tarefas) {
    Tarefa tarefaNova;

    cout << "Você escolheu Adicionar Tarefa" << endl;
    cin.ignore();

    cout << "Digite o " << ANSI_COLOR_GREEN << "ID" << ANSI_COLOR_RESET << " da tarefa: ";
    getline(cin, tarefaNova.id);

    cout << "Digite o " << ANSI_COLOR_GREEN << "Título" << ANSI_COLOR_RESET << " da Tarefa: ";
    getline(cin, tarefaNova.titulo);

    cout << "Digite a data de " << ANSI_COLOR_GREEN << "vencimento" << ANSI_COLOR_RESET << " da tarefa conforme o exemplo(25/05/2024): ";
    getline(cin, tarefaNova.vencimento);

    cout << "Digite o " << ANSI_COLOR_GREEN << "Status" << ANSI_COLOR_RESET << " da Tarefa (" << ANSI_COLOR_RED << "1 - Pendente" << ANSI_COLOR_RESET << ", " << ANSI_COLOR_YELLOW << "2 - Em Progresso" << ANSI_COLOR_RESET << ", " << ANSI_COLOR_GREEN << "3 - Concluída" << ANSI_COLOR_RESET << "): ";
    getline(cin, tarefaNova.status);

    cout << "Digite uma " << ANSI_COLOR_GREEN << "Descrição " << ANSI_COLOR_RESET << "para a tarefa: ";
    getline(cin, tarefaNova.descricao);

    tarefas.push_back(tarefaNova);

    cout << ANSI_COLOR_GREEN << "Tarefa Adicionada Com Sucesso!!" << ANSI_COLOR_RESET << endl;
}

void visualizarTarefa(const vector<Tarefa> &tarefas) {
    if (tarefas.empty()) {
        cout << "Não há tarefas cadastradas." << endl;
    } else {
        cout << "Lista de Tarefas:" << endl;
        for (const auto &tarefa : tarefas) {
            cout << ANSI_COLOR_GREEN << "Id: " << ANSI_COLOR_RESET << tarefa.id << endl;
            cout << ANSI_COLOR_GREEN << "Título: " << ANSI_COLOR_RESET << tarefa.titulo << endl;
            cout << ANSI_COLOR_GREEN << "Descrição: " << ANSI_COLOR_RESET << tarefa.descricao << endl;
            cout << ANSI_COLOR_GREEN << "Vencimento: " << ANSI_COLOR_RESET << tarefa.vencimento << endl;
            cout << ANSI_COLOR_GREEN << "Status: " << ANSI_COLOR_RESET << tarefa.status << endl;
            cout <<"****************"<<endl;
        }
    }
}

void editarTarefa(vector<Tarefa> &tarefas) {
    if (tarefas.empty()) {
        cout << ANSI_COLOR_RED<<"Não há tarefas cadastradas para editar."<<ANSI_COLOR_RESET<< endl;
    }

    string idProcurado;
    cout << "Digite o ID da tarefa que deseja editar: ";
    cin >> idProcurado;

    bool encontrou = false;
    for (auto &tarefa : tarefas) {
        if (tarefa.id == idProcurado) {
            encontrou = true;

            cout << "Tarefa encontrada. Agora você pode editar os campos:" << endl;

            cout << "Digite o novo" << ANSI_COLOR_GREEN << " ID" ANSI_COLOR_RESET " da tarefa: ";
            cin.ignore();
            getline(cin, tarefa.id);

            cout << "Digite o novo" << ANSI_COLOR_GREEN << " título" ANSI_COLOR_RESET " da tarefa: ";
            getline(cin, tarefa.titulo);

            cout << "Digite a nova data de" <<ANSI_COLOR_GREEN<< " vencimento"<< ANSI_COLOR_RESET <<" da tarefa (conforme o exemplo: 25/05/2024): ";
            getline(cin, tarefa.vencimento);

            cout << "Digite o novo" <<ANSI_COLOR_GREEN<<" status" <<ANSI_COLOR_RESET << " da tarefa (1 - Pendente, 2 - Em Progresso, 3 - Concluída): ";
            getline(cin, tarefa.status);

            cout << "Digite a nova" <<ANSI_COLOR_GREEN<<" descrição"<<ANSI_COLOR_RESET<<" da tarefa: ";
            getline(cin, tarefa.descricao);

            cout << ANSI_COLOR_GREEN "Tarefa editada com sucesso!" ANSI_COLOR_RESET << endl;
            break;
        }
    }

    if (encontrou = false) {
        cout << "Tarefa com o ID fornecido não encontrada." << endl;
    }
}

void apagarTarefa(vector<Tarefa> &tarefas){
    string apagarId;
    cout<<"Você escolheu Apagar Tarefa."<<endl;
    cout<<"Digite o ID da tarefa que quer Apagar: "<<endl;
    cin>>apagarId;

}

int main() {
    vector<Tarefa> tarefas;
    int opcao;
    do {
        cout << "Sistema De Gerenciamento de Tarefas" << endl;
        cout << ANSI_COLOR_GREEN << "1. " << ANSI_COLOR_RESET << "Adicionar Tarefas" << endl;
        cout << ANSI_COLOR_GREEN << "2. " << ANSI_COLOR_RESET << "Visualizar Tarefas" << endl;
        cout << ANSI_COLOR_GREEN << "3. " << ANSI_COLOR_RESET << "Editar Tarefas" << endl;
        cout << ANSI_COLOR_GREEN << "4. " << ANSI_COLOR_RESET << "Remover Tarefas" << endl;
        cout << ANSI_COLOR_GREEN << "5. " << ANSI_COLOR_RESET << "Buscar Tarefas" << endl;
        cout << ANSI_COLOR_GREEN << "6. " << ANSI_COLOR_RESET << "Filtrar Tarefas por Status" << endl;
        cout << ANSI_COLOR_GREEN << "0. " << ANSI_COLOR_RESET << "Sair " << endl;
        cout << "Digite o número da opção:" << endl;
        cin >> opcao;

        switch (opcao) {
            case 0:
                cout << "Você escolheu sair!" << endl;
                break;
            case 1:
                addTarefa(tarefas);
                break;
            case 2:
                visualizarTarefa(tarefas);
                break;
            case 3:
                editarTarefa(tarefas);
                break;
            case 4:
            case 5:
            case 6:
            default:
                cout << ANSI_COLOR_RED << "ERRO, insira uma opção válida: " << ANSI_COLOR_RESET << endl;
        }
    } while (opcao != 0);

    return 0;
}