/**
 * Arquivo: somaPrimos.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 27/11
*/

#include <stdio.h>
int primo(int n);
int somaprimos(int inicio, int fim);

int main(int argc, char *argv[]){
    int menor, maior;
    printf("digite um intervalo em que o primeiro numero seja maior que o segundo: ");
    scanf("%d %d", &menor, &maior);
    printf("a soma dos primos equivale a: %d", somaprimos(menor, maior));
    return 0;
}

int primo(int n){
    int i = 0;
    if(n <= 1)
        return 0;

    if((n % 2 == 0) && (n > 2))
        return 0;

    for(i = 3; i < n/2; i += 2)
        if(n % i == 0)
            return 0;

    return 1;
}
int somaprimos(int inicio, int fim){
    int i = 0;
    int soma = 0;

    for(i = inicio; i<=fim; i++)
        if(primo(i))
            soma += i;

    return soma;
}