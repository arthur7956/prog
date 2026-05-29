#include <stdio.h>

typedef struct {
    char nome[50];
    int quantidade;
    float preco;
} Produto;

int main() {
    int n;
    float valor_total_geral = 0;
    float maior_valor = 0;
    int indice_maior = 0;
    
    printf("digite quantos produtos temos: ");
    scanf("%d", &n);

    Produto estoque[n];

    for (int i = 0; i < n; i++) {
        printf("\nDigite o nome do produto %d: ", i + 1);
        scanf(" %[^\n]", estoque[i].nome);
        printf("\nDigite a quantidade desse produto: ");
        scanf("%d", &estoque[i].quantidade);
        printf("\nDigite o preco desse produto: ");
        scanf("%f", &estoque[i].preco);
        
        float valor_produto_atual = estoque[i].quantidade * estoque[i].preco;

        valor_total_geral += valor_produto_atual;

        if (valor_produto_atual > maior_valor) {
            maior_valor = valor_produto_atual;
            indice_maior = i;
        }
    }
    printf("\n\n================ RELATORIO DE ESTOQUE ================\n");
    printf("%-20s %-10s %-10s %-10s\n", "Produto", "Qtd", "Preco Un.", "Vl. Estoque");
    printf("------------------------------------------------------\n");

    for(int i = 0; i < n; i++) {
        float valor_item = estoque[i].quantidade * estoque[i].preco;
        printf("%-20s %-10d R$ %-8.2f R$ %-8.2f\n", 
               estoque[i].nome, 
               estoque[i].quantidade, 
               estoque[i].preco, 
               valor_item);
    }
    printf("======================================================\n");
    printf("Valor total geral do estoque: R$ %.2f\n", valor_total_geral);
    printf("Produto com maior valor em estoque: %s (%.2f)\n", estoque[indice_maior].nome, maior_valor);

    return 0;
    
}