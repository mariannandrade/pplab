/**
 * Arquivo: somaDivisores.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 10/11
*/

#include <stdio.h>

int main (int argc, char *argv[]){
    int n = 0;
    int i = 1;
    int soma = 0;
    printf("digite seu numero:\n");
    scanf("%d", &n);

while (n>=i){
    int resto = n%i;
    if (resto==0){
        soma = i + soma;
    }
    i+=1;
}
printf("%d", soma);
return 0;
}