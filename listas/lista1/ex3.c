//Este é o exercício nùmero 3 do Bloco A//
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
     float total_com_desconto = (p.Quantidade * p.Preco) * 0.90;
     float desconto = valor_total * 0.10;

     printf("Valor total do estoque: R$%.2f\n", valor_total);
     printf("Valor com 10%% de desconto: R$%.2f\n", total_com_desconto);
     printf("Valor do desconto: R$%.2f", desconto);

     return 0;
}