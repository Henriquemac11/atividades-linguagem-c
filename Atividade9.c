// 9. Faça um programa que determine a soma dos dígitos ao quadrado de um número digitado pelo usuário.

#include <stdio.h>

int main() {
    int num, d, soma = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        d = num % 10;
        soma += d * d;
        num /= 10;
    }

    printf("A soma dos quadrados dos dígitos é: %d\n", soma);

    return 0;
}
