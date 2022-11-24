/**
 * Arquivo: dist.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 24/11
*/

#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[]){
    int xA, yA, xB, yB, i = 0;
    printf("digite as coordenadas do ponto A\n");
    scanf("%f %f", &xA, &yA);
    printf("digite as coordenadas do ponto B\n");
    scanf("%f %f", &xB, &yB);

    int raiz = (sqrtf((pow((xA-xB),2))+(pow((yA-yB),2))));
    printf("%f", raiz);

    return 0;
}