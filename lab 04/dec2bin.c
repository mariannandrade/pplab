/**
 * Arquivo: dec2bin.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 11/12
*/

#include <stdio.h>
#include <stdlib.h>

void bin(int n);

int main (void){
    int num;
    printf("digite um numero decimal:\n");
    scanf("%lld", &num);
    bin(num);
    return 0;
}

void bin(int n){
    if(n<2){
        printf("%d", n);
    }
    else if(n!=0){
        bin(n/2);
        printf("%d", n%2);
    }
}