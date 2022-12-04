/**
 * Arquivo: quaisDiv.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 01/11
*/

#include <stdio.h>

void divisor(int * vetor, int tam, int ref);

int main (void){
    int x, ref;
    printf("digite a quantidade de elementos:\n");
    scanf("%d", &x);
    int vetor[x];
    for(int i=0; i < x; i++){
        printf("digite o elemento %d: ", i+1);
        scanf("%d", vetor+i);
    }
    printf("escolha a referencia: ");
    scanf("%d", &ref);
    divisor(vetor, x, ref);
    return 0;
}
void divisor(int * vetor, int tam, int ref) {
    for(int i = 0; i < tam; i++) {
        printf("%d", vetor[i]);
        if(!(ref % vetor[i]))
            printf("#");
        printf(" ");
    }
    printf("\n");
}