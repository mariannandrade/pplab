/**
 * Arquivo: somatorio.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 01/11
*/

#include <stdio.h>

float somatorio(float *vetor, float lim);

int main (void){
    int n;
    printf("digite a quantidade de elementos: ");
    scanf("%d", &n);
    float vetor[n];
    for(int i = 0; i < n; i++){
        printf("digite o elemento %d: ", i + 1);
        scanf("%f", vetor + i);
    }
    printf("%g", vetor[0]);
    for(int i = 1; i < n; i++){
        printf(" + %g", vetor[i]);
    }
    printf(" = %g\n", somatorio(vetor, n));
    return 0;
}

float somatorio(float *vetor, float lim){
    float somar = 0;
    int i;
    for(i=0; i < lim; i++){
        somar = somar + vetor[i];
    }
    return somar;
}