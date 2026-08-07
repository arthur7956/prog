//Questao 6 - Desafio: soma de vetor recursiva (ate 0,5 pt extra)
//No livro "Entendendo Algoritmos", a soma dos elementos de um vetor eh o exemplo classico de
//dividir para conquistar.
//Implemente int somaVetor(int v[], int n) que retorna a soma de todos os elementos sem
//usar laco - apenas recursao. A ideia eh: a soma do vetor eh o primeiro elemento mais a soma
//do restante.
//Exemplo: somaVetor({2, 4, 6, 8}, 4) retorna 20.
//Responda tambem: qual eh o caso-base deste problema?

//Resposta:
//O caso-base é quando o tamnho do vetor é zero (n == 0), nessa hora a função nao tem mais nada 
//para somar e se encerra retornando 0.


#include <stdio.h>

int somaVetor (int v[], int n) {
    if (n == 0) { //Caso-base, vetor vazio vai somar 0
        return 0;
    }
    return v[n-1] + somaVetor(v, n - 1); //Entrega n - 1 pra encurtar o vetor
}

int main() {
    //Variaveis para mudar a soma
    int v[] = {2, 4, 6, 8};
    int n = 4;

    //Chama a funcao e guarda o resultado
    int resultado = somaVetor(v, n);

    printf("A soma o vetor eh: %d\n", resultado);

    return 0;
}