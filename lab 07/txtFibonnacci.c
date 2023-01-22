/**
 * Arquivo: txtFibonnacci.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 22/01/23
*/

#include <stdio.h>

int fib(int n);

int main (void){
    int n = 0;
    FILE *fiboarq;

    printf("digite um numero ate 94:\n");
    scanf("%d%c*", &n);

    fiboarq = fopen("fibonac.txt", "w+");

    for(int i = 0; i<n; i++){
        fprintf(fiboarq, "%d\n", fib(n));
    }

    printf("%d", fib(n));

    fclose(fiboarq);
    return 0;
}

int fib(int j){
    if(j == 0){
        return 0;
    }
    if(j == 1 || j == 2){
        return 1;
    }
    else{
        return fib(j-1)+fib(j-2);
    }
}