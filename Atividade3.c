// 3. Escreva um programa que calcule o fatorial de um número digitado pelo usuário.

#include <stdio.h>

int main() {
    int num, i;
    int fatorial = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Fatorial não existe para números negativos.\n");
    } else {
        for (i=1; i<=num; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d é: %d\n", num, fatorial);
    }

    return 0;
}
