//b) Contar caracteres. int contarChar(char s[], int i, char c) que retorna quantas
//vezes o caractere c aparece em s a partir do indice i (chamada inicial com i=0). Exemplo:
//contarChar("banana", 0, 'a') retorna 3.
#include <stdio.h>

int contarChar (char s[], int i, char c) {
    if (s[i] == '\0') {
        return 0;
    }
    
    if (s[i] == c) {
        return 1 + contarChar(s, i + 1, c);
    }

    return contarChar(s, i + 1, c);
}

int main() {
    char s[50];

    printf("Digite uma palavra: ");
    scanf("%s", s);

    int total = contarChar(s, 0, 'a');

    printf("O caractere 'a' aparece %d vezes.\n", total); 

    return 0;
}