/**
 * Arquivo: contaVogais.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 10/12
*/

#include <stdio.h>
#define n 50

int main (void) {
    int vogais = 0, i;
    char palavra[n];
    printf("digite uma palavra qualquer:\n");
    scanf("%s", &palavra);
    for(i = 0; i < n; i++){
        if(palavra[i] == 'a' || palavra[i] == 'A' 
        || palavra[i] == 'e' || palavra[i] == 'E' 
        || palavra[i] == 'i' || palavra[i] == 'I' 
        || palavra[i] == 'o' || palavra[i] == 'O' 
        || palavra[i] == 'u' || palavra[i] == 'U'){
        vogais++;
    }
        if (palavra[i] == 0){
            break;
        }
    }
    printf("%d", vogais);
    return 0;
}