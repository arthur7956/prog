//Exercicio 1 da aula 7.1 Sistema de Produtos
#include <stdio.h>

typedef struct {
    char nome[50];
    float preco;
    int quantidade;
    float totalEstoque;
} Produto;

void lerProdutos(Produto est[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Digite o nome do produto %d: ", i + 1);
        scanf("%s", est[i].nome);
        printf("Digite o preco: ");
        scanf("%f", &est[i].preco);
        printf("Digite a quantidade: ");
        scanf("%d", &est[i].quantidade);
        printf("\n");
    }
}

void calcularEstoque(Produto est[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        est[i].totalEstoque = est[i].preco * est[i].quantidade;
    }
}

void imprimirEstoque(Produto est[], int n) {
    int i;
    float totalGeral = 0;
    
    printf("--- TABELA DE ESTOQUE ---\n");
    for (i = 0; i < n; i++) {
        printf("Produto: %s | Preco: %.2f | Qtd: %d | Total: %.2f\n", 
               est[i].nome, est[i].preco, est[i].quantidade, est[i].totalEstoque);
        totalGeral = totalGeral + est[i].totalEstoque;
    }
    printf("TOTAL GERAL DO ESTOQUE: %.2f\n\n", totalGeral);
}

int encontrarMaiorEstoque(Produto est[], int n) {
    int i;
    int indiceMaior = 0;
    for (i = 1; i < n; i++) {
        if (est[i].totalEstoque > est[indiceMaior].totalEstoque) {
            indiceMaior = i;
        }
    }
    return indiceMaior;
}

int encontrarMenorPreco(Produto est[], int n) {
    int i;
    int indiceMenor = 0;
    for (i = 1; i < n; i++) {
        if (est[i].preco < est[indiceMenor].preco) {
            indiceMenor = i;
        }
    }
    return indiceMenor;
}

int main() {
    Produto estoque[3];
    int totalProdutos = 3;
    int posMaiorEstoque;
    int posMenorPreco;

    lerProdutos(estoque, totalProdutos);
    calcularEstoque(estoque, totalProdutos);
    imprimirEstoque(estoque, totalProdutos);

    posMaiorEstoque = encontrarMaiorEstoque(estoque, totalProdutos);
    posMenorPreco = encontrarMenorPreco(estoque, totalProdutos);

    printf("Produto com maior valor em estoque: %s (Total: %.2f)\n", estoque[posMaiorEstoque].nome, estoque[posMaiorEstoque].totalEstoque);
    printf("Produto com menor preco unitario: %s (Preco: %.2f)\n", estoque[posMenorPreco].nome, estoque[posMenorPreco].preco);

    return 0;
}
