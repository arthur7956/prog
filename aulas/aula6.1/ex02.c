//Exercício 2 aula 6.1: Estoque de Produtos
#include <stdio.h>

typedef struct {
    char nome[50];
    float preco;
    int quantidade;
} Produto;

int main() {
    int n;
    float valor_total_geral = 0;
    int indice_maior_estoque = 0;
    int indice_menor_preco = 0;

    printf("Quantos produtos quer cadastrar?\n");
    scanf("%d", &n);

    Produto estoque[n];

    for (int i = 0; i < n; i++) {
        printf("\nDigite o nome do produto %d: ", i + 1);
        scanf(" %[^\n]", estoque[i].nome);
        printf("Digite o preco desse produto: ");
        scanf("%f", &estoque[i].preco);
        printf("Digite a quantidade desse produto: ");
        scanf("%d", &estoque[i].quantidade);

        float total_atual = estoque[i].preco * estoque[i].quantidade;
        valor_total_geral += total_atual;

        float maior_total_ate_agora = estoque[indice_maior_estoque].preco * estoque[indice_maior_estoque].quantidade;
        if (total_atual > maior_total_ate_agora) {
            indice_maior_estoque = i;
        }

        if (estoque[i].preco < estoque[indice_menor_preco].preco) {
            indice_menor_preco = i;
        }
    }

    printf("\n%-20s %-10s %-5s %-10s\n", "Produto", "Preco", "Qtd", "Total");
    printf("------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        float total_item = estoque[i].preco * estoque[i].quantidade;
        printf("%-20s R$ %-8.2f %-5d R$ %-8.2f\n", estoque[i].nome, estoque[i].preco, estoque[i].quantidade, total_item);
    }
    printf("------------------------------------------------------\n");

    float valor_maior_estoque = estoque[indice_maior_estoque].preco * estoque[indice_maior_estoque].quantidade;
    printf("Produto com maior valor em estoque: %s (R$ %.2f)\n", estoque[indice_maior_estoque].nome, valor_maior_estoque);
    printf("Produto com menor preco unitario: %s (R$ %.2f)\n", estoque[indice_menor_preco].nome, estoque[indice_menor_preco].preco);
    printf("Valor total geral do estoque: R$ %.2f\n", valor_total_geral);

    return 0;
}
