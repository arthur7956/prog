//Este é o exercício nùmero 3 do Bloco A//
#include <stdio.h>
typedef struct {
    char Nome[50];
    float Preco;
    int Quantidade;
} Produto;

int main() {
    Produto p;
    float valor_total = p.Quantidade * p.Preco;

    printf("Que produto temos me estoque?\n");
    scanf(" %[^\n]", p.Nome);
    printf("\nQual o preco do produto?\n");
    scanf("%f", &p.Preco);
    printf("\nQuantos desse produto temos no estoque?\n");
    scanf("%d", &p.Quantidade);
    
}
