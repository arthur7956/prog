//b) (0,25) Implemente int buscaBinaria(int v[], int n, int alvo) que recebe um vetor
//ordenado e retorna o indice de alvo ou -1 se nao estiver presente. Exemplo: para v=
//{1,3,5,7,9} e alvo = 5, retorna 2.

#include <stdio.h>
int buscaBinaria (int v[], int n, int alvo) {

    int inicio = 0;
    int fim = (n - 1);

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (v[meio] == alvo) {
            return meio;      // achou o numero e retorna o indice
        }

        if (v[meio] < alvo) {
            inicio = meio + 1;  //Se o valor do meio for MENOR que o alvo, busca na direita
        } else {
            fim = meio - 1;     //Se o valor do meio for MAIOR que o alvo, busca na esquerda
        }
        }
        return -1;             //Se o laco terminar e nao encontrar, retorna -1
    }

    int main () {
        int v[] = {1, 3, 5, 7, 9}; //Vetor de teste ja ordenado
        int n = 5;   //Tamanho do vetor de teste
        int alvo = 5;   //Numero que queremos procurar

        //Chama a funcao e guarda o retorno
        int resultado = buscaBinaria(v, n, alvo);

        //Checa o retorno e exibe a mensagem
        if (resultado != -1) {
            printf("O alvo %d foi encontrao no indice: %d\n", n, resultado);
        } else {
            printf("O alvo %d nao foi encontrado no vetor.\n", n);
        }
        return 0;
    }