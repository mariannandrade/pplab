/**
 * Arquivo: minMax.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 01/11
*/

#include <stdio.h>

int main (void) {
    int n, i, max, min;
    printf("digite a quantidade de elementos:\n");
    scanf("%d", &n);
    int vetor[n];
    for(i=0; i<n; i++){
        printf("digite o elemento %d: ", i+1);
        scanf("%d", vetor+i);
    }
    max = vetor[0];
    min = vetor[0];
    for(i=0; i<n; i++){
        if(vetor[i] > max){
            max = vetor[i];
        }
        if(vetor[i] < min){
            min = vetor[i];
        }
    }
    for(i=0; i<n; i++){
        if(vetor[i] == max){
            printf("%d> ", max);
        }
        if(vetor[i] == min){
            printf("%d< ", min);
        }
        if(vetor[i] != max && vetor[i] != min){
            printf("%d ", vetor[i]);
        }
    }
    return 0;
}
