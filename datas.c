/**
 * Arquivo: altura.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 05/01/23
*/

#include <stdio.h>
#include <string.h>

typedef
    struct data {
        int dia, mes, ano;
    }
Data;

int main(void) {
    Data data;
    char m[4];
    printf("digite uma data como D/M/YYYY: ");
    scanf("%d/%d/%d", &data.dia, &data.mes, &data.ano);
    printf("%02d.%02d.%04d ", data.dia, data.mes, data.ano);
    printf(" %02d-%02d-%04d ", data.mes, data.dia, data.ano);
    printf(" %02d/%02d/%02d ", data.dia, data.mes, data.ano%100);
    switch(data.mes) {
        case 1: strcpy(m, "JAN");
            break;
        case 2: strcpy(m, "FEV");
            break;
        case 3: strcpy(m, "MAR");
            break;
        case 4: strcpy(m, "ABR");
            break;
        case 5: strcpy(m, "MAI");
            break;
        case 6: strcpy(m, "JUN");
            break;
        case 7: strcpy(m, "JUL");
            break;
        case 8: strcpy(m, "AGO");
            break;
        case 9: strcpy(m, "SET");
            break;
        case 10: strcpy(m, "OUT");
            break;
        case 11: strcpy(m, "NOV");
            break;
        case 12: strcpy(m, "DEZ");
            break;
        default: strcpy(m, "???");
    }
    printf(" %02d%s%04d\n", data.dia, m, data.ano);
    return 0;
}