// aula 8 ex 2 //

#include<stdio.h>
int potencia (int base, int expo){
    if (expo == 0) {
        return 1;
    }
    return base * potencia(base, expo - 1);
}

int main () {
    int b, e;
    
    printf("Digite a BASE da potencia: ");
    scanf("%d", &b);
    printf("\nDigite o EXPOENTE da potencia: ");
    scanf("%d", &e);
    
    printf("\nResultado: %d\n", potencia(b, e));
    
    return 0;
}