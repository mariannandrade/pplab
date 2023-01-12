/**
 * Arquivo: areaTriRet.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 24/11
*/

#include <math.h>
#include <stdio.h>

int main (int argc, char *argv[]){
    float xA, xB, yA, yB, xC, yC;
    printf("digite as coordenadas do ponto A\n");
    scanf("%f %f", &xA, &yA);
    printf("digite as coordenadas do ponto B\n");
    scanf("%f %f", &xB, &yB);

    xC = xA - xB;
    yC = yA - yB;

    float A = (xC*yC)/2;

    printf("%g", A);

    return 0;
}