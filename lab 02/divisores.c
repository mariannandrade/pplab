/**
 * Arquivo: divisores.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 24/11
*/

#include <stdio.h>

int main (int argc, char *argv[]){
    int n, m = 0;
    int i = 1;
    printf("digite um inteiro positivo: ");
    scanf("%d", &n);

    for(m=i; m<=n; m++){
        if(n % m == 0){
            printf("%d, ", m);
        }
    }

    return 0;
}