// 5. Escreva um programa que peça para o usuário inserir um ano e verifique se esse ano é bissexto.

#include <stdio.h>
int main(){

  int ano;
  
  printf("Digite um ano: ");
    scanf("%d", &ano);

    // Verificando se é bissexto
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("%d é um ano bissexto.\n", ano);
    } else {
        printf("%d não é um ano bissexto.\n", ano);
    }

    return 0;
}

