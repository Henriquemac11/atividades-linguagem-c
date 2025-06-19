// 6. Escreva um programa que determine se um número digitado pelo usuário é uma potência de 2.

#include <stdio.h>

int main() {
    int num;
   int pot = 1;


    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("%d não é uma potência de 2.\n", num);
    } else {
      
        while (num > 1) {
            if (num % 2 != 0) {
                pot = 0;
                break;
            }
            num = num / 2;
        }

        if (pot) {
            printf("É uma potência de 2.\n");
        } else {
            printf("Não é uma potência de 2.\n");
        }
    }

    return 0;
}
