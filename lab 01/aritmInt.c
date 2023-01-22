/**
 * Arquivo: aritmInt.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 09/11
*/

#include <stdio.h>

int main (int argc, char *argv[]) {
    int x = 0;
    int y = 0;
    printf("digite seu numero:\n");

    scanf("%d %d", &x, &y);

    printf("%d+%d = %d, %d-%d = %d, %d*%d = %d, %d/%d = %d e %d%%%d = %d",x,y,x+y,x,y,x-y,x,y,x*y,x,y,x/y,x,y,x%y);
    return 0;
}