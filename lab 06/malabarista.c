/**
 * Arquivo: malabarista.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 12/01/23
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef 
    long long int
llint;

llint malabarista(llint a);
llint minimo(llint * v, int n);
llint maximo(llint * v, int n);
double media(llint * v, int n);

int main(void) {
    llint * vetor;
    int n; llint a0;
    printf("numero de elementos no vetor:\n");
    scanf("%d", &n);
    printf("elemento inicial do vetor:\n");
    scanf("%lld", &a0);
    vetor = (llint *) malloc(n*sizeof(llint));
    vetor[0] = a0;
    for(int i = 1; i < n; i++)
        vetor[i] = malabarista(vetor[i-1]);
    printf("minimo: %lld\nmaximo: %lld\nmedia: %lg\n",
        minimo(vetor, n), maximo(vetor, n), media(vetor, n));
    free(vetor);
    return 0;
}

llint malabarista(llint a) {
    return (llint) floor(sqrt((a % 2 == 0)? a : a*a*a));
}

llint minimo(llint * v, int n) {
    llint m = v[0];
    for(int i = 1; i < n; i++){
        if(v[i] < m) m = v[i];
    }
    return m;
}

llint maximo(llint * v, int n) {
    llint m = v[0];
    for(int i = 1; i < n; i++){
        if(v[i] > m) m = v[i];
    }
    return m;
}

double media(llint * v, int n) {
    llint m = 0;
    for(int i = 0; i < n; i++){
        m += v[i];
    }
    return ((double) m)/n;
}
