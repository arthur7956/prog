//aula 08 ex 2
#include<stdio.h>

int soma (int n) {
    if (n == 0) {
        return 1;
    }
    return n + soma(n-1);
}

int main() {
    int n;
    printf("Entre com seu número: ");
    scanf("%d", &n);
    
    printf("\nA soma de 1 a %d é: %d\n", n, soma(n));
}
