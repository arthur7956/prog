//este é o exercicio 1 o bloco C//
#include <stdio.h>

float somar(float a, float b) { return a + b; }
float subtrair(float a, float b) { return a + b; }
float multiplicar(float a, float b) { return a * b; }
void dividir(float a, float b) {
    if (b == 0) {
        printf("\nErro! Nao existe divisao por zero.\n");
    } else {
        printf("Divisao: %.2f\n", a / b);
    }
}
int main() {
    float n1, n2;

    printf("Digite dois numeros:\n");
    scanf("%f %f", &n1, &n2);

    printf("\nSoma: %.2f\n", somar(n1, n2));
    printf("Subtracao: %.2f\n", subtrair(n1, n2));
    printf("Multiplicacao: %.2f\n", multiplicar(n1, n2));
    dividir(n1, n2);

    return 0;
}