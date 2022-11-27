/**
 * Arquivo: dist.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 24/11
*/

#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[]){
    float xA, yA, xB, yB, i = 0.0;
    printf("digite as coordenadas do ponto A\n");
    scanf("%f %f", &xA, &yA);
    printf("digite as coordenadas do ponto B\n");
    scanf("%f %f", &xB, &yB);

    float X = xA - xB;
    float Y = yA - yB;

    float raiz = (sqrtf((pow(X,2))+(pow(Y,2))));
    printf("%g", raiz);
    return 0;
}