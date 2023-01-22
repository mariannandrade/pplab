/**
 * Arquivo: inside.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 12/01/23
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define n = 500

int contem(char * s1, char * s2);

int main (void){
    int idx = 0;
    char s1[n];
    char s2[n];
    printf("digite uma string: \n");
    getstr(s1, n);
    printf("digite outra string: \n");
    getstr(s2, n);
    idx = contem(s1, s2);
    if(idx >= 0){
        for(int i = 0; i<strlen(s2); i++){
            if(i == idx){
                printf("*");
            }
            if(i == idx+strlen(s1)-1){
                printf("*");
            }
        }
        if(idx+strlen(s1) == strlen(s2)){
            printf("\n");
        }
    }
    else{
        printf("nao contem");
    }
    return 0;
}

int contem(char * s1, char * s2){
    int i, j;
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    for(i = 0; i < n2; i++){
        if(s1[0] == s2[i]){
            for(j = 1; j < n1; j++){
                if(i+j >= n2){
                    return -1;
                }
                if(s1[j] != s2[i+j]){
                    break;
                }
            }
            if(j==n1){
                return i;
            }
        }
    }
    return -1;
}