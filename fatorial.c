/**
 * Arquivo: fatorial.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 10/11
*/

#include <stdio.h>

int main (int argc, char *argv[]){
    int n = 0;
    printf("digite um numero maior que 1:\n");
    scanf("%d", &n);
    int i = 1, fat = 1;
    while(i <= n){
        fat = fat * i; 
        i++;
    }
    printf("%d", fat);
    return 0;
}