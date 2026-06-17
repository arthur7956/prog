#include<stdio.h>

int soma (int n) {
    if (n == 0) {
        return 1;
    }
    return n + soma(n-1);
}

int main() {
    int n;
    printf("Entre com seu número: ");
    scanf("%d")
    
}
