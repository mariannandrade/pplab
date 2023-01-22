/**
 * Arquivo: somaGauss.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 10/11
*/

#include <stdio.h>

int main (int argc, char *argv[]){
    int n = 0;
    printf("digite um numero positivo: ");
    scanf("%d", &n);
    int i, soma=0;
    for (i=1; i<=n; i++){
        soma = soma + i;
    }
    printf("resultado da soma de Gauss: %d", soma);
    return 0;
}