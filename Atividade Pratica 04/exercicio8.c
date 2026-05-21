#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 1000

int main() {
    char nomes[MAX_PRODUTOS][100];
    int quantidades[MAX_PRODUTOS];
    int total = 0;
    int opcao;

    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. Adicionar produto\n");
        printf("2. Realizar entrada no estoque\n");
        printf("3. Realizar saida no estoque\n");
        printf("4. Listar estoque\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("\nEncerrando o programa...\n");
            break;

        } else if (opcao == 1) {
            if (total >= MAX_PRODUTOS) {
                printf("Limite de produtos atingido.\n");
                continue;
            }
            printf("Nome do produto: ");
            scanf(" %[^\n]", nomes[total]);
            printf("Quantidade inicial: ");
            scanf("%d", &quantidades[total]);
            total++;
            printf("Produto adicionado com sucesso!\n");

        } else if (opcao == 2) {
            if (total == 0) {
                printf("Nenhum produto cadastrado.\n");
                continue;
            }
            int num, qtd;
            printf("Numero do produto (1 a %d): ", total);
            scanf("%d", &num);
            if (num < 1 || num > total) {
                printf("Produto invalido.\n");
                continue;
            }
            printf("Quantidade a adicionar: ");
            scanf("%d", &qtd);
            quantidades[num - 1] += qtd;
            printf("Entrada realizada com sucesso!\n");

        } else if (opcao == 3) {
            if (total == 0) {
                printf("Nenhum produto cadastrado.\n");
                continue;
            }
            int num, qtd;
            printf("Numero do produto (1 a %d): ", total);
            scanf("%d", &num);
            if (num < 1 || num > total) {
                printf("Produto invalido.\n");
                continue;
            }
            printf("Quantidade a retirar: ");
            scanf("%d", &qtd);
            if (qtd > quantidades[num - 1]) {
                printf("Quantidade insuficiente em estoque.\n");
                continue;
            }
            quantidades[num - 1] -= qtd;
            printf("Saida realizada com sucesso!\n");

        } else if (opcao == 4) {
            if (total == 0) {
                printf("Nenhum produto cadastrado.\n");
                continue;
            }
            printf("\nEstoque atual:\n");
            for (int i = 0; i < total; i++)
                printf("Produto %d: %s - %d unidades\n", i + 1, nomes[i], quantidades[i]);

        } else {
            printf("Opcao invalida.\n");
        }
    }

    return 0;
}