//Questão 2 — Fatorial e teste de mesa (0,30 pt)
//a) (0,15) Escreva a função int fatorial(int n) que calcula o fatorial de n usando recursão
//(0! = 1). Exemplo: fatorial(4) retorna 24.

#include <stdio.h> 

int fatorial (int n) {
    if (n == 0) {                 //caso base
        return 1;
    }
    return n * fatorial (n - 1);  // caso recursivo
}

int main() {

    int x;

    printf("Digite um numero para fatorial: ");
    scanf("%d", &x);

    int resultado = fatorial(x);

    printf("O fatorial de %d é: %d\n", x, resultado);

    return 0;
}