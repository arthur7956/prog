//este é o exercicio 4 do bloco C (o desafio)
#include <stdio.h>
typedef struct {
    char nome[50];
    float nota1, nota2, nota3;
    float media;
    char conceito;
} Aluno;

Aluno calcularMedia(Aluno a) {
    a.media = (a.nota1 + a.nota2 + a.nota3) / 3.0;
    return a;
}

char definirConceito (float media) {
    if (media >= 9.0) return 'A';
    if (media >= 7.5) return 'B';
    if (media >= 6.0) return 'C';
    return 'D';
}

void imprimirAluno (Aluno a) {
    printf("%-20s Média: %-5.2f | Conceito: %c\n", a.nome, a.media, a.conceito);
}

void ordenarPorNota (Aluno turma[], int n) {
    for (int i = 0; i < n; i++) {
        int indice_maior = i;
        for (int j = i + 1; j < n; j++) {
            if (turma[j].media > turma[indice_maior].media) {
                indice_maior = j;
            }
        }
        Aluno temp = turma[i];
        turma[i] = turma[indice_maior];
        turma[indice_maior] = temp;
    }

}

int main() {
    int n;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);

    Aluno turma[n];

    for (int i = 0; i < n; i++) {
        printf("\nNome do aluno %d: ",  i + 1);
        scanf(" %[^\n]", turma[i].nome);
        printf("Digite as 3 notas: ");
        scanf("%f %f %f", &turma[i].nota1, &turma[i].nota2, &turma[i].nota3);

        turma[i] = calcularMedia(turma[i]);
        turma[i].conceito = definirConceito(turma[i].media);
    }

    ordenarPorNota(turma, n);

    printf("\n========== Boletim ==========\n");
    for (int i =0; i < n; i++) {
        imprimirAluno(turma[i]);
    }
    return 0;
}
