/**
 * Arquivo: muSigma.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 04/11
*/

#include <stdio.h>
#include <math.h>

int main (void){
    int n;
    float med, desv, conta;
    printf("digite a quantidade de elementos: ");
    scanf("%d", &n);
    float vetor[n];
    for(int i = 0; i < n; i++){
        printf("digite o elemento %d: ", i + 1);
        scanf("%f", vetor + i);
        med = med + vetor[i];
    }


    med = med/n;

    for(int i=0; i<n; i++){
        conta = vetor[i] - med;
        desv = desv + (conta*conta);
    }

    desv = desv/n;
    desv = sqrt(desv);
    printf("media %g", med);
    printf(" desvio %g", desv);

    return 0;
}

