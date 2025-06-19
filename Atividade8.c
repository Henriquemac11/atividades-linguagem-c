// 8. Implemente um programa que calcule a raiz quadrada de um número digitado pelo usuário. (math.h)
#include <stdio.h>
#include <math.h>

int main() {
    double num, r;

    printf("Digite um número: ");
    scanf("%lf", &num);

    if (num < 0) {
        printf("Não é possível calcular a raiz quadrada de um número negativo.\n");
    } else {
        r = sqrt(num);
        printf("A raiz quadrada de %.2lf é %.2lf\n", num, r);
    }

    return 0;
}
