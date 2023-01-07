/**
 * Arquivo: fib.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 05/01/23
*/

#include <stdio.h>

int fib(int n);

int main(void){
    int n = 0;
    printf("digite o indice da sequencia:\n");
    scanf("%d", &n);
    printf("numero de Fibonacci equivalente: %d", fib(n));
    return 0;
}

int fib(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1 || n == 2){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}