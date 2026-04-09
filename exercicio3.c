// 3. Número par ou ímpar
// Leia um número inteiro e mostre:

// "Par" se o número for divisível por 2
// "Ímpar" caso contrário

#include <stdio.h>

int main() {

    int numero ;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("Par\n");
    }
    else {
        printf("Ímpar\n");
    }
    return 0;

}