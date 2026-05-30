//Este é o exercício nùmero 2 do Bloco A//
#include <stdio.h>

typedef struct {
    char TimeA [50];
    char TimeB [50];
    int golsA;
    int golsB;
} Placar;

int main() {

Placar p;

printf("digite o nome do time A: ");
scanf(" %[^\n]", p.TimeA);
printf("\ndigite o nome do time B: ");
scanf(" %[^\n]", p.TimeB);

printf("\n quantos gols o time %s marcou?\n", p.TimeA);
scanf("%d", &p.golsA);
printf("\n e quantos gols o time %s marcou?\n", p.TimeB);
scanf("%d", &p.golsB);

printf("\n====== Placar ======");
printf("\nGols time %s: %d", p.TimeA, p.golsA);
printf("\nGols time %s: %d", p.TimeB, p.golsB);
printf("\n====================\n");

if (p.golsA > p.golsB) {
    printf("O time %s foi vencedor", p.TimeA);
} else if (p.golsA < p.golsB) {
    printf("O time %s foi vencedor", p.TimeB);
} else {
    printf("Empate, sem vencedor");
}

return 0;

}
