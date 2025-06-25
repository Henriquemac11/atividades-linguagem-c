// 10. Escreva um programa que receba as medidas dos três lados de um triângulo e determine se ele é isósceles, escaleno ou equilátero.

#include <stdio.h>

int main() {
    float l1, l2, l3;

    printf("Digite o valor do primeiro lado: ");
    scanf("%f", &l1);

    printf("Digite o valor do segundo lado: ");
    scanf("%f", &l2);

    printf("Digite o valor do terceiro lado: ");
    scanf("%f", &l3);

    if (l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1) {
        if (l1 == l2 && l2 == l3) {
            printf("Triângulo equilátero.\n");
        } else if (l1 == l2 || l1 == l3 || l2 == l3) {
            printf("Triângulo isósceles.\n");
        } else {
            printf("Triângulo escaleno.\n");
        }
    } else {
        printf("Os valores inseridos não formam um triângulo válido.\n");
    }

    return 0;
}
