//Exercicio 4 (desafio) da aula 7 Menu Interativo
#include <stdio.h>

float calcularMedia(float n1, float n2, float n3) {
    float resultado;
    resultado = (n1 + n2 + n3) / 3.0;
    return resultado;
}

int ehPrimo(int n) {
    int i;
    if (n <= 1) {
        return 0;
    }
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int potencia(int base, int exp) {
    int resultado = 1;
    int i;
    for (i = 0; i < exp; i++) {
        resultado = resultado * base;
    }
    return resultado;
}

void imprimirMenu() {
    printf("=== CALCULADORA ===\n");
    printf("1. Calcular media de 3 notas\n");
    printf("2. Verificar se numero e primo\n");
    printf("3. Calcular potencia\n");
    printf("0. Sair\n");
    printf("Opcao: ");
}

int main() {
    int opcao;
    float nota1, nota2, nota3, media_final;
    int numero, resultado_primo;
    int base_num, expoente_num, resultado_potencia;

    opcao = -1;

    while (opcao != 0) {
        imprimirMenu();
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite as 3 notas: ");
            scanf("%f %f %f", &nota1, &nota2, &nota3);
            media_final = calcularMedia(nota1, nota2, nota3);
            printf("Média: %.2f\n\n", media_final);
        } 
        else if (opcao == 2) {
            printf("Digite o número: ");
            scanf("%d", &numero);
            resultado_primo = ehPrimo(numero);
            if (resultado_primo == 1) {
                printf("É primo.\n\n");
            } else {
                printf("Não é primo.\n\n");
            }
        } 
        else if (opcao == 3) {
            printf("Digite a base e o expoente: ");
            scanf("%d %d", &base_num, &expoente_num);
            resultado_potencia = potencia(base_num, expoente_num);
            printf("Resultado: %d\n\n", resultado_potencia);
        } 
        else if (opcao == 0) {
            printf("Saindo...\n");
        } 
        else {
            printf("Opção inválida!\n\n");
        }
    }

    return 0;
}
