

// 2. Maior de idade
// Leia a idade de uma pessoa e mostre:

// "Maior de idade" se idade for 18 ou mais
// "Menor de idade" caso contrário

#include <stdio.h>

int main() {

// Variável para armazenar a idade
    int idade;

// Solicitar ao usuário que insira a idade
    printf("Digite sua idade: ");
    scanf("%d", &idade);

// Resultado
    printf("Você tem %d anos\n", idade);


// Verificar se a idade é maior ou menor de 18
    if (idade >= 18) {
        printf("Maior de idade\n");
    } else {
        printf("Menor de idade\n");
    }

    return 0;

}