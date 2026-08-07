//Questao 5 - Problemas classicos
//Opcao A - MDC de Euclides. Usando mdc(a, 0) = a e mdc(a, b)= mdc(b, a mod b),
//implemente int mdc(int a, int b) e faca o teste de mesa de mdc(48,18).

#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0) {
        return a; //Se b for 0 retorna o a
    }
    return mdc(b, a % b); //Se b nao for 0 retorna mdc(b, a mod b)
}

int main () {
    int x = 48;    //A e B que podem ser mudados
    int y = 18;

    //Chamando a funcao
    int resultado = mdc(x, y);

    printf("O MDC de %d e %d eh: %d", x, y, resultado);

    return 0;
}