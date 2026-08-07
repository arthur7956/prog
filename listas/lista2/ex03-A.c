//Questao 3 - Recursao sobre dados (obrigatarias)
//a) Soma dos digitos. int somaDigitos(int n) que retorna a soma dos algarismos de n.
//Exemplo: somaDigitos(472) -> 4 + 7 + 2 = 13.

#include <stdio.h>

int somaDigitos (int n) {
    if (n == 0){
        return 0;
    }
    return (n %10) + somaDigitos (n / 10);
}

int main() {
    
    int x;

    printf("Digite um numero com mais de dois digitos: ");
    scanf("%d", &x);

    int resultado = somaDigitos(x);

    printf("A soma de %d é: %d\n", x, resultado);

    return 0;
}