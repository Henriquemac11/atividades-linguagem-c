// 9. Faça um programa que determine a soma dos dígitos ao quadrado de um número digitado pelo usuário.

#include <stdio.h>

int main() {
    int numero, digito, soma = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        numero = -numero;
    }

    while (numero > 0) {
        digito = numero % 10;
        soma += digito * digito;
        numero /= 10;
    }

    printf("A soma dos quadrados dos dígitos é: %d\n", soma);

    return 0;
}
