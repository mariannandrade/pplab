/**
 * Arquivo: altura.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 05/01/23
*/

#include <stdio.h>

typedef
    struct altura {
        int metros, centimetros;
    }
Altura;

int cm(int n);

int main(void){
    Altura h;
    printf("digite uma altura em metros separada por ponto:\n");
    scanf("%d.%d", &h.metros, &h.centimetros);
    h.centimetros = cm(h.centimetros);
    printf("Altura %dm%d\n", h.metros, h.centimetros);
    return 0;   
}

int cm(int n) {
    if(n < 10) return n*10;
    if(n > 99) return cm(n/10);
    return n;
}