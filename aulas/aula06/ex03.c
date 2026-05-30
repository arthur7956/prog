//Exercicio 3 Maior e Menor Nota/
#include <stdio.h>
typedef struct {
    char nome[50];
    float nota;
} Aluno;

int main () {
    int n;
    int aprovados = 0;
    float soma = 0;
    int indice_maior = 0;
    int indice_menor = 0;

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
        if (turma[i].nota <  turma[indice_menor].nota) {
            indice_menor = i;
        }
        
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
    printf("Alunos acima da media (nota >= 7): %d\n", aprovados);
    printf("--------------------------------------------------\n");
    printf("Aluno com a maior nota: %s (Nota: %.2f)\n", turma[indice_maior].nome, turma[indice_maior].nota);
    printf("Aluno com a menor nota: %s (Nota: %.2f)\n", turma[indice_menor].nome, turma[indice_menor].nota);

    return 0;
}

