//exercicio 1 Ficha de Produto//
#include <stdio.h>
typedef struct {
    char Nome[50];
    float Preco;
    int Quantidade;
} Produto;

int main() {
    Produto p;

    printf("Que produto temos em estoque?\n");
    scanf(" %[^\n]", p.Nome);
    printf("\nQual o preco do produto?\nR$");
    scanf("%f", &p.Preco);
    printf("\nQuantos desse produto temos no estoque?\n");
    scanf("%d", &p.Quantidade);
    
     float valor_total = p.Quantidade * p.Preco;

     printf("\n\nNome: %s", p.Nome);
     printf("\nPreco: %f", p.Preco);
     printf("\nQuantidade: %d", p.Quantidade);
     printf("--------------------------------")
     printf("Valor total do estoque: R$%.2f\n", valor_total);

     return 0;
}
