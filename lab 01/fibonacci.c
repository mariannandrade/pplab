/* Arquivo: fibonacci.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 10/11
*/

#include <stdio.h>
int main (int argc, char *argv[]){
    int n = 0;
    int x = 1;
    int y = 0;
    int i = 0;
    int w = 0;
    printf("digite o termo\n");
    scanf("%d", &n);
       for(int x=1, y=0, i=0, w=0; i<n; ++i, w = y + x, y = x, x = w) printf("%d, ", y);
        printf("...");
return 0;
}