/**
 * Arquivo: bin2dec.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 11/12
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void){
    char bin[65];
    unsigned long dec = 0;
    int s, i = 0;
    printf("digite um numero binario:\n");
    scanf("%lld", &bin);
    fgets(bin, sizeof(bin), stdin);
    s = strlen(bin);
    while(s--) {
        if(bin[s] == '0' || bin[s] == '1') {
            dec = dec + pow(2, i++) * (bin[s] - '0');
        }
    }

    printf("%u", dec);

    return 0;
}