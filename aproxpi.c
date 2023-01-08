/**
 * Arquivo: aproxpi.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 07/01/23
*/

#include <stdio.h>
#include <math.h>

int S(int n);

int main(void){
    int n = 0;
    printf("digite o limite superior n:\n");
    scanf("%d", &n);
    printf("%d", S(n));
    return 0;
}

int S(int n){
    if(n == 0){
        return 4;
    }
    if(n != 0){
        return S(n-1)+4*(pow(-1,n)/2*n+1);
    }
}