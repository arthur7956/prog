//Exercicio 3 da aula 7 Funcoes Matematicas
#include <stdio.h>

int potencia(int base, int exp) {
    int resultado = 1;
    int i;
    for (i = 0; i < exp; i++) {
        resultado *= base;
    }
    return resultado;
}

int fatorial(int n) {
    int resultado = 1;
    int i;
    for (i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int ehPrimo(int n) {
    int i;
    if (n <= 1) return 0;
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int numero;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    printf("Potência ao quadrado: %d\n", potencia(numero, 2));
    printf("Fatorial: %d\n", fatorial(numero));
    
    if (ehPrimo(numero)) {
        printf("O número %d é primo.\n", numero);
    } else {
        printf("O número %d não é primo.\n", numero);
    }
    
    return 0;
}
