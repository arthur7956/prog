#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float altura;
} Pessoa;

int main() {
    Pessoa p;

    printf("digite seu nome: ");
    scanf("%s", p.nome);
    printf("\ndigite sua idade: ");
    scanf("%d", &p.idade);
    printf("\ndigite sua altura em metros: ");
    scanf("%f", &p.altura);

    printf("\n====== Ficha de Pessoa ======\n
           "Nome: %s \n "
}