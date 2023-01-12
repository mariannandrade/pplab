/**
 * Arquivo: somaSeqHailst.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 24/11
*/

#include <stdio.h>

int main (int argc, char *argv[]){
    int n, X;
    printf("digite um numero inteiro positivo\n");
    scanf("%d", &n);
    int seq = n;

   for(int i = n; i!=1; i=X){
        if(i % 2 == 0){
            X = i/2;
            seq = seq + X;
        }
        if(i % 2 != 0){
            X = (3*i) + 1;
            seq = seq + X;
        }
    }
    printf("%d", seq);
    return 0;
}