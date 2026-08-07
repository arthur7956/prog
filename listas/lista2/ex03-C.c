
//Questao 3 - Recursao sobre dados (obrigatarias)
//c) Palindromo. int ehPalindromo(char s[], int ini, int fim) que retorna 1 se a pala-
//vra e um palindromo (ex.: "arara"), e 0 caso contrario. Considere a string ja em minusculas e
//sem espacos.

#include <stdio.h>
int ehPalindromo (char s[], int ini, int fim) {
    if (ini >= fim) {
        return 1;
    }
    if (s[ini] != s[fim]) {
        return 0;
    }
    return ehPalindromo(s, ini + 1, fim - 1);

}
int main() {
    char palavra[] = "arara";

    int tamanho = 0;

    while (palavra[tamanho] != '\0') {
        tamanho++;
    }

    int fim = tamanho - 1;

    if (ehPalindromo (palavra, 0, fim)) {
        printf("A palavra '%s' eh palindromo", palavra);
    } else {
        printf("A palavra '%s' nao eh palindromo", palavra);
    }
    return 0;
}