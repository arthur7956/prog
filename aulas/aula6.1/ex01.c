//Exercício 1 aula 6.1: Boletim Completo
#include <stdio.h>

typedef struct {
    char nome[50];
    float nota;
} Aluno;

int main() {
    int n;
    float soma = 0;
    int indice_maior = 0;
    int indice_menor = 0;
    int aprovados = 0;

    printf("Quantos alunos quer cadastrar?\n");
    scanf("%d", &n);

    Aluno turma[n];

    for (int i = 0; i < n; i++) {
        printf("Digite o nome do aluno %d: \n", i + 1);
        scanf(" %[^\n]", turma[i].nome);
        printf("Digite a nota do aluno %d: \n", i + 1);
        scanf("%f", &turma[i].nota);

        soma += turma[i].nota;

        if (turma[i].nota > turma[indice_maior].nota) {
            indice_maior = i;
        }
        if (turma[i].nota < turma[indice_menor].nota) {
            indice_menor = i;
        }
    }

    float media = soma / n;

    for (int i = 0; i < n; i++) {
        if (turma[i].nota >= media) {
            aprovados++;
        }
    }

    printf("\n================ TABELA DE ALUNOS ================\n");
    printf("%-30s %-5s\n", "Nome", "Nota");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-30s %.2f\n", turma[i].nome, turma[i].nota);
    }
    printf("==================================================\n");

    printf("Media da turma: %.2f\n", media);
    printf("Aluno com maior nota: %s (Nota: %.2f)\n", turma[indice_maior].nome, turma[indice_maior].nota);
    printf("Aluno com menor nota: %s (Nota: %.2f)\n", turma[indice_menor].nome, turma[indice_menor].nota);
    printf("Alunos acima ou na media: %d\n", aprovados);

    return 0;
}
