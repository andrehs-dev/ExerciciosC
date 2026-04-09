// 5. Senha correta
// Crie uma variável senha.
// Se o valor digitado for igual a 1234, mostre:

// "Acesso permitido"
// Senão:
// "Senha incorreta"

#include <stdio.h>

int main () {

    // Dado
    int senha;

    // Entrada do dado
    printf("Digite a senha: "); //Aqui o Pc pede a senha
    scanf("%d", &senha); // Aqui ele guarda a variavel

    // Lógica
    if (senha == 1234) { //Aqui ele compara o resultado
        printf("Senha correta! Acesso Permitido!"); //Aqui mostra
    }
    else {
        printf("Senha Incorreta! Acesso Negado!");
    }
    return 0;

}