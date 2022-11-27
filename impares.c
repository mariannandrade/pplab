/**
 * Arquivo: impares.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 24/11
*/

#include <stdio.h>
int main (int argc, char *argv[]){
    int a, b;
    int i = 1;
    printf("digite um intervalo em que o primeiro numero seja maior que o segundo\n");
    scanf("%d %d", &a, &b);

    for(i=a; i<=b; i++){
        if(i % 2 != 0){
            printf("%d, ", i);
        }
    }

    return 0;
}