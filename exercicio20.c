// Criar um programa que:

// receba 2 números
// calcule a soma
// mostre o resultado

#include <stdio.h>

// Dados 
int numero1 ;
int numero2 ;

// Operação
int soma ; 

int main() {
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;

    // Resultado
    printf("A soma dos números é: %d\n", soma);

    return 0;
}