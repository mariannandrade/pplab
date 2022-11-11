/**
 * Arquivo: imc.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 10/11
*/

#include <stdio.h>
int main (int argc, char *argv[]){
    float p = 0;
    float h = 0;
    printf("qual seu peso?\n");
    scanf("%f", &p);
    printf("qual sua altura?\n");
    scanf("%f", &h);
    float IMC = p/(h*h);

    if(IMC<16){
        printf("%f (Perigo de vida)", IMC);
    }
    if(IMC>=16 && IMC<17){
        printf("%f (Muito abaixo do peso", IMC);
    }
    if(IMC>=17 && IMC<18.5){
        printf("%f (Abaixo do peso)", IMC);
    }
    if(IMC>=18.5 && IMC<25){
        printf("%f (Peso normal)", IMC);
    }
    if(IMC>=25 && IMC<30){
        printf("%f (Acima do peso)", IMC);

    }
    if(IMC>=30 && IMC<35){
        printf("%f (Obesidade grau I)", IMC);
    }
    if(IMC>=35 && IMC<40){
        printf("%f (Obesidade grau II)", IMC);
    }
    if(IMC>=40){
        printf("%f (Obesidade grau II)", IMC);
    }
    return 0;
}