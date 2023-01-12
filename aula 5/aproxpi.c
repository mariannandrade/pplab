/**
 * Arquivo: aproxpi.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 07/01/23
*/

#include <stdio.h>
#include <math.h>

int S(long double n);

int main(void){
    int n = 0;
    printf("digite o limite superior n:\n");
    scanf("%ld", &n);
    printf("%ld", S(n));
    return 0;
}

int S(long double n){
    int c1 = 0;
    if(n == 0){
        return 4;
    }
    if(n != 0){
        c1 = pow(-1,n);
        return S(n-1)+4*(c1/2*n+1);
    }
}