#include <stdio.h>
#include <string.h>

#define MAX_TAREFAS 100

int main() {
    char tarefas[MAX_TAREFAS][100];
    int concluidas[MAX_TAREFAS];
    int total = 0;
    int opcao;

    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. Adicionar tarefa\n");
        printf("2. Listar tarefas\n");
        printf("3. Marcar concluida\n");
        printf("4. Exibir pendentes\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("\nEncerrando o programa...\n");
            break;

        } else if (opcao == 1) {
            printf("Nome da tarefa: ");
            scanf(" %[^\n]", tarefas[total]);
            concluidas[total] = 0;
            total++;
            printf("Tarefa adicionada com sucesso!\n");

        } else if (opcao == 2) {
            if (total == 0) {
                printf("Nenhuma tarefa cadastrada.\n");
                continue;
            }
            printf("\nLista de tarefas:\n");
            for (int i = 0; i < total; i++)
                printf("%d - [%s] %s\n", i + 1, concluidas[i] ? "X" : " ", tarefas[i]);

        } else if (opcao == 3) {
            if (total == 0) {
                printf("Nenhuma tarefa cadastrada.\n");
                continue;
            }
            int num;
            printf("Numero da tarefa a concluir (1 a %d): ", total);
            scanf("%d", &num);
            if (num < 1 || num > total) {
                printf("Tarefa invalida.\n");
                continue;
            }
            concluidas[num - 1] = 1;
            printf("Tarefa %d marcada como concluida.\n", num);

        } else if (opcao == 4) {
            if (total == 0) {
                printf("Nenhuma tarefa cadastrada.\n");
                continue;
            }
            int encontrou = 0;
            printf("\nTarefas pendentes:\n");
            for (int i = 0; i < total; i++) {
                if (!concluidas[i]) {
                    printf("%d - [ ] %s\n", i + 1, tarefas[i]);
                    encontrou = 1;
                }
            }
            if (!encontrou)
                printf("Todas as tarefas foram concluidas.\n");

        } else {
            printf("Opcao invalida.\n");
        }
    }

    return 0;
}