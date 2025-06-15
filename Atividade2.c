//2. Faça um programa que verifique se um número digitado pelo usuário é par
#include <stdio.h>  

int main() {

int num = 1; 

printf("Digite o número:\t") ;
scanf("%d", &num);

if( num % 2 == 0 ){
    printf("Seu número é par!");
} else{
    printf("Seu número não é par!");
}

    return 0;
}
