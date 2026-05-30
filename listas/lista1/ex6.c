//Este é o exercicio 3 do bloco B//
#include <stdio.h>
typedef struct {
    char nome[50];
    int pontos;
} jogador;

int main() {
    int n;
    
    printf("Digite a quantidade de Jogadores: ");
    scanf("%d", &n);

    jogador ranking[n];
    int indice_maior = 0;
    int indice_menor = 0;

    for (int i = 0; i < n; i++) {
        printf("\nDigite o nome do jogador %d: ", i + 1);
        scanf(" %[^\n]", ranking[i].nome);
        printf("\nPontos do jogador %d: ", i + 1);
        scanf("%d", &ranking[i].pontos);

        if (i == 0) {
            indice_maior = i;
            indice_menor = i;
        } else {
            if (ranking[i].pontos > ranking[indice_maior].pontos) {
                indice_maior = i;
            }
        }   if (ranking[i].pontos < ranking[indice_menor].pontos) {
                indice_menor = i;
            }
    }
    printf("\n\n===== RESULTADOS =====");
    printf("\nMais pontos: %s com %d pontos", ranking[indice_maior].nome, ranking[indice_maior].pontos);
    printf("\nMenos pontos: %s com %d pontos", ranking[indice_menor].nome, ranking[indice_menor].pontos);

    return 0;
}