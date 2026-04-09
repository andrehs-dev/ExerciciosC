// Leia um número inteiro e mostre:

// "Positivo" se for maior que zero
// "Negativo" se for menor que zero
// "Zero" se for igual a zero
// 2. Maior de idade

#include <stdio.h>
int main() {

//Dados
int numero ;

// Entrada de dados
printf("Digite um número inteiro: ");
scanf("%d", &numero);

printf("--------------------------------\n");

//Resultado - O resultado esta acima da estrutura de decisão, pois a decisão será mostrada independete do número ser P/N/0
printf("O número digitado é: %d\n", numero);

// Positivo, se for maior que zero
if (numero > 0) {
    printf("Numero maior que 0: Positivo\n");

// Negativo, se for menor que zero
} else if (numero < 0) {
    printf("Número menor que 0: Negativo \n");

// Zero, se for igual a zero
} else {
    printf("O número é igual a Zero\n");

}
    return 0;
}
