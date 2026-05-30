//Exercício 3 aula 6.1: Ranking de Jogadores
#include <stdio.h>

typedef struct {
    char nome[50];
    int pontos;
    int vitorias;
} Jogador;

int main() {
    int n;
    float soma_vitorias = 0;
    int indice_mais_pontos = 0;
    int indice_mais_vitorias = 0;
    int acima_media_vitorias = 0;

    printf("Quantos jogadores quer cadastrar?\n");
    scanf("%d", &n);

    Jogador grupo[n];

    for (int i = 0; i < n; i++) {
        printf("\nDigite o nome do jogador %d: ", i + 1);
        scanf(" %[^\n]", grupo[i].nome);
        printf("Digite os pontos: ");
        scanf("%d", &grupo[i].pontos);
        printf("Digite as vitorias: ");
        scanf("%d", &grupo[i].vitorias);

        soma_vitorias += grupo[i].vitorias;

        if (grupo[i].pontos > grupo[indice_mais_pontos].pontos) {
            indice_mais_pontos = i;
        }

        if (grupo[i].vitorias > grupo[indice_mais_vitorias].vitorias) {
            indice_mais_vitorias = i;
        }
    }

    float media_vitorias = soma_vitorias / n;

    for (int i = 0; i < n; i++) {
        if (grupo[i].vitorias > media_vitorias) {
            acima_media_vitorias++;
        }
    }

    printf("\n%-20s %-10s %-10s\n", "Jogador", "Pontos", "Vitorias");
    printf("-----------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-20s %-10d %-10d\n", grupo[i].nome, grupo[i].pontos, grupo[i].vitorias);
    }
    printf("-----------------------------------------\n");

    printf("Jogador com mais pontos: %s (%d pontos)\n", grupo[indice_mais_pontos].nome, grupo[indice_mais_pontos].pontos);
    printf("Jogador com mais vitorias: %s (%d vitorias)\n", grupo[indice_mais_vitorias].nome, grupo[indice_mais_vitorias].vitorias);
    printf("Jogadores com vitorias acima da media (%.1f): %d\n", media_vitorias, acima_media_vitorias);

    return 0;
}
