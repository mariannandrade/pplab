/**
 * Arquivo: fatorial.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 10/11
*/

#include <stdio.h>
#include <stdint.h>

int main (int argc, char *argv[]){
    long int n = 0;
    printf("digite um numero positivo:\n");
    scanf("%ld", &n);
    long int i = 1;
    long int fat = 1;
    while(i <= n){
        fat = fat * i; 
        i++;
    }
    printf("%ld", fat);
    return 0;
}