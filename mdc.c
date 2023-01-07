/**
 * Arquivo: mdc.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 05/01/23
*/

#include <stdio.h>

int mdc(int a, int b);

int main(void){
    int a = 0;
    int b = 0;
    printf("digite dois numeros:\n");
    scanf("%d %d", &a, &b);
    printf("mdc: %d", mdc(a, b));

return 0;
}

int mdc(int a, int b){
    if(b == 0){
        return a;
    }
    if(b != 0){
        mdc(b, a%b);
}
}