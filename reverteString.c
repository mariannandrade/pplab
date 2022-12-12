/**
 * Arquivo: reverteString.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 10/12
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define n 65

int main (void){
    int tam = 0, s = 0, i;
    char string[n];
    char reverte[n];
    
    printf("digite uma frase qualquer:\n");
    fgets(string, 64, stdin);
    tam = strlen(string)-1;
    s = tam;

    for(i=0; tam >= i; i++){
        reverte[i] = toupper(string[s]);
        s = s-1;
    }
    reverte[strlen(string)] = '\0';
    printf("%s", reverte);
    return 0;
}