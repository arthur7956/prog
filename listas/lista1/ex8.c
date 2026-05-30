//este é o exercicio 2 o bloco C//
#include <stdio.h>

void fizzBuzz(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 &&  i % 5 == 0) {
            printf("FizzBuzz ");
        } else if (i % 3 == 0) {
            printf("Fizz ");
        } else if (i % 5 == 0) {
            printf("Buzz ");
        } else {
            printf("%d", i);
        }
    }
        printf("\n");
}
int main() {
    int n;
    
    printf("Digite o valor de N para o FizzBuzz: ");
    scanf("%d ", &n);

    fizzBuzz(n);
    return 0;
}