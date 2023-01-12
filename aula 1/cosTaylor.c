/* Arquivo: cosTaylor.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 10/11
*/

#include <stdio.h>
#include <math.h>
#ifdef M_PI
  #undef M_PI
#endif
#define M_PI 3.141592653589793115997963468544185161590576171875

int fatorial (float n);

int main (int argc, char *argv[]){
    float n = 0.0;
    float x = 0.0;
    float i = 0.0;
    float f = 0.0;
    printf("digite um numero:\n");
    scanf("%f", &n);
    printf("mais um:\n");
    scanf("%f", &x);

while(n>=i){
    f = (pow(-1,i)*(pow (x*M_PI,2*i))/(fatorial(2*i))) + f;
    i=i+1;
}
printf("%f", f);
return 0;
}

int fatorial (float n){
    float k = 1, fat = 1;
    while(k <= n){
        fat = fat * k; 
        k++;
    }
    return fat;
}