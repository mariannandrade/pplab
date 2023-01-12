/**
 * Arquivo: contaVogais.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 08/12
*/

#include <stdio.h>
#include <string.h>

int main (void) {
    char palavra[50];
    int letras, vogais = 0, i;
    printf("digite uma palavra: ");
    scanf("%s", &palavra);
    
    letras = strlen(palavra);

    for(i = 0; i<= letras; i++){
        switch(palavra[i]){
            case 'A': 
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
                vogais++;
                break;
        }
    }
    printf("%d", vogais);
    return 0;
}