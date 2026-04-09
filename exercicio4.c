//4. Aprovação simples
// Leia a nota de um aluno.

// Se a nota for maior ou igual a 6, mostre "Aprovado"
// Caso contrário, mostre "Reprovado"

#include <stdio.h>

int main() {

    float nota;
    
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 6)
        printf("Aprovado!");

    else  
        printf("Reprovado!");
    
    return 0;


    
}