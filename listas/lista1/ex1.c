//Este é o exercício número 1 do Bloco A//
#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float altura;
} Pessoa;

int main() {
    Pessoa p;

    printf("digite seu nome: ");
    scanf(" %[^\n]", p.nome);
    printf("\ndigite sua idade: ");
    scanf("%d", &p.idade);
    printf("\ndigite sua altura em metros: ");
    scanf("%f", &p.altura);

    printf("\n====== Ficha de Pessoa ======\n");
    printf("Nome:   %s \n", p.nome);
    printf("Idade:  %d \n", p.idade);
    printf("Altura: %.2f m\n", p.altura);
    printf("=============================");

    return 0;
}
