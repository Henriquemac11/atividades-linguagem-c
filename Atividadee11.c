// 11. Implemente um programa que calcule a sequência de Fibonacci até um determinado número escolhido pelo usuário.

#include <stdio.h>

int main() {
    int limite, a = 0, b = 1, proximo;

    printf("Digite um número limite para a sequência de Fibonacci: ");
    scanf("%d", &limite);

    if (limite < 0) {
        printf("Digite um número inteiro não negativo.\n");
        return 1;
    }

    printf("Sequência de Fibonacci até %d:\n", limite);

    if (a <= limite) printf("%d ", a);
    if (b <= limite) printf("%d ", b);

    proximo = a + b;
    while (proximo <= limite) {
        printf("%d ", proximo);
        a = b;
        b = proximo;
        proximo = a + b;
    }

    printf("\n");
    return 0;
}
