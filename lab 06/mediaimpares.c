/**
 * Arquivo: mediaimpares.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 29/01/23
*/

#include <stdio.h>
#include <stdlib.h>
#define N 500

typedef
    unsigned long long int
uint;

uint mediav(int n, int *vetor);
int impares(int n, int s, int *vetor);

int main(void){
    int ins, eln, penul = 0;
    uint media = 0.0;
    int * vetor;
    printf("digite o numero de elementos para o primeiro vetor: ");
    scanf("%d%*c", &eln);
    printf("digite o numero inicial: ");
    scanf("%d%*c", &ins);

    if(ins%2)
        ins--;

    vetor = malloc(eln*sizeof(int));
    penul = impares(eln, ins, vetor);
    media = mediav(eln, vetor);
    printf("%d\t%llu\n", penul, media);
    free(vetor);

return 0;
}

int impares(int n, int s, int *vetor){
    int i;
    s++;
    for (i= 0; i < n; i++, s+=2){
        vetor[i] = s;
    }
    return vetor[i-2];
}

uint mediav(int n, int *vetor){
    uint media = 0.0;
    for (int i = 0; i < n; i++){
        media = media + vetor[i];
    }
    return media/n;
}
