//4. Crie um programa que calcule a média seis números inteiros digitados pelo usuário.

#include <stdio.h>

int main() {
    
    int numeros[6];
    int soma = 0;
    float media;

    printf("Digite 6 números inteiros:\n");
    for(int i = 0; i < 6; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / 6;

    printf("A média dos números digitados é: %.2f\n", media);

    return 0;
}
