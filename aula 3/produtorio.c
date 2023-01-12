/**
 * Arquivo: produtorio.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 01/11
*/

#include <stdio.h>

float produtorio(float * vetor, float lim);

int main (void){
    int n, i;
    printf("digite a quantidade de elementos: ");
    scanf("%d", &n);
    float vetor[n];
    for(i = 0; i < n; i++){
        printf("digite o elemento %d: ", i+1);
        scanf("%f", vetor+i);
    }
    printf("%g", vetor[0]);
    for(i = 1; i < n; i++){
        printf(" * %g", vetor[i]);
    }
    printf(" = %g\n", produtorio(vetor, n));
    return 0;
}

float produtorio(float * vetor, float lim){
    float produto = 1;
    int i;
    for(i=0; i < lim; i++){
        produto = produto * vetor[i];
    }
    return produto;
}