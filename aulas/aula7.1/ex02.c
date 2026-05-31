//Exercicio 2 da aula 7.1 Placar de Torneio
#include <stdio.h>

typedef struct {
    char nome[50];
    int vitorias;
    int empates;
    int derrotas;
    int pontos;
} Time;

void lerTimes(Time times[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Digite o nome do time %d: ", i + 1);
        scanf("%s", times[i].nome);
        printf("Digite as vitorias: ");
        scanf("%d", &times[i].vitorias);
        printf("Digite os empates: ");
        scanf("%d", &times[i].empates);
        printf("Digite as derrotas: ");
        scanf("%d", &times[i].derrotas);
        printf("\n");
    }
}

void calcularPontos(Time times[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        times[i].pontos = (times[i].vitorias * 3) + (times[i].empates * 1);
    }
}

void imprimirClassificacao(Time times[], int n) {
    int i;
    printf("--- CLASSIFICACAO ---\n");
    for (i = 0; i < n; i++) {
        printf("Time: %s | V: %d | E: %d | D: %d | PONTOS: %d\n", 
               times[i].nome, times[i].vitorias, times[i].empates, times[i].derrotas, times[i].pontos);
    }
    printf("\n");
}

int encontrarLider(Time times[], int n) {
    int i;
    int indiceLider = 0;
    for (i = 1; i < n; i++) {
        if (times[i].pontos > times[indiceLider].pontos) {
            indiceLider = i;
        }
    }
    return indiceLider;
}

int main() {
    Time campeonato[3];
    int totalTimes = 3;
    int posLider;

    lerTimes(campeonato, totalTimes);
    calcularPontos(campeonato, totalTimes);
    imprimirClassificacao(campeonato, totalTimes);

    posLider = encontrarLider(campeonato, totalTimes);
    printf("O lider do campeonato e: %s com %d pontos!\n", campeonato[posLider].nome, campeonato[posLider].pontos);

    return 0;
}
