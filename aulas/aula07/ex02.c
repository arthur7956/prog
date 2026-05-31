//Exercicio 2 da aula 7 Verificaor de Aprovaçao
#include <stdio.h>

float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3.0;
}

char definirConceito(float media) {
    if (media >= 9.0) return 'A';
    if (media >= 7.0) return 'B';
    if (media >= 5.0) return 'C';
    return 'D';
}

void imprimirSituacao(char nome[], float media, char conceito) {
    printf("Aluno: %s | Média: %.2f | Conceito: %c\n", nome, media, conceito);
}

int main() {
    char nome[50];
    float nota1, nota2, nota3, media;
    char conceito;
    int i;
    
    for (i = 0; i < 3; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", nome);
        printf("Digite as três notas: ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);
        
        media = calcularMedia(nota1, nota2, nota3);
        conceito = definirConceito(media);
        imprimirSituacao(nome, media, conceito);
        printf("\n");
    }
    
    return 0;
}
