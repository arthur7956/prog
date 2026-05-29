//Este é o exercício nùmero 4 do Bloco A//
#include <stdio.h>
typedef struct {
    char nome[50];
    float nota;
} Aluno;

int main () {
    int n;
    int aprovados = 0;
    float soma = 0;

    printf("Quantos alunos quer cadastrar?\n");
    scanf("%d", &n);

    Aluno turma[n];
    
    for (int i = 0; i < n; i++) {
        printf("Digite o nome do aluno %d: \n", i + 1);
        scanf(" %[^\n]", turma[i].nome);
        printf("Digite a nota do aluno %d: \n", i + 1);
        scanf("%f", &turma[i].nota);

        soma += turma[i].nota;
        
        if (turma[i].nota >= 7.0){
            aprovados++;
        }
    }
    printf("\n\n================ TABELA DE ALUNOS ================\n");
    printf("%-30s %-5s\n", "Nome", "Nota");
    printf("--------------------------------------------------\n");
    
    for (int i = 0; i < n; i++) {
        printf("%-30s %.2f\n", turma[i].nome, turma[i].nota);
    }
    printf("==================================================\n");

    float media = soma / n;
    printf("Media da turma: %.2f\n", media);
    printf("Alunos aprovados (nota >= 7): %d", aprovados);

    return 0;
}

