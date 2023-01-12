/**
 * Arquivo: racionais.c
 * Autora: Marianna Andrade
 * Matrícula: 12121EAU002
 * Criado em: 07/01/23
*/

#include <stdio.h>

typedef
    struct racionais {
        int p, s, t, q;
    }
Racional;

int mdc(int a, int b);

int main(void){
    Racional racional;
    int q1, p1, p2, q2, Q1, Q2, ad1, ad2, s1, s2, m1, m2, d1, d2;
    int adicao1, adicao2, sub1, sub2, mult1, mult2, div1, div2;
    printf("digite os dois primeiros racionais:\n");
    scanf("%d %d", &racional.p, &racional.s);
    printf("digite os dois segundos racionais:\n");
    scanf("%d %d", &racional.t, &racional.q);

    p1 = (racional.p/mdc(racional.p, racional.s));
    q1 = (racional.s/mdc(racional.p, racional.s));
    p2 = (racional.t/mdc(racional.t, racional.q));
    q2 = (racional.q/mdc(racional.t, racional.q));
    
    if(p1 == 0){
        q1 == 1;
    }

    if(q1 < 0){
        p1 = 0 - p1;
        q1 = 0 - q1;
    }

    if(p2 == 0){
        q2 = 1;
    }

    if(q2 < 0){
        p2 = 0 - p2;
        q2 = 0 - q2;
    }

    adicao1 = (p1*q2+p2*q1);
    adicao2 = q1*q2;

    sub1 = (p1*q2-p2*q1);
    sub2 = q1*q2;

    mult1 = p1*p2;
    mult2 = q1*q2;

    div1 = p1*q2;
    div2 = q1*p2;

    ad1 = adicao1/mdc(adicao1, adicao2);
    ad2 = adicao2/mdc(adicao1, adicao2);

    s1 = sub1/mdc(sub1, sub2);
    s2 = sub2/mdc(sub1, sub2);

    m1 = mult1/mdc(mult1, mult2);
    m2 = mult2/mdc(mult1, mult2);

    d1 = div1/mdc(div1, div2);
    d2 = div2/mdc(div1, div2);

    if(ad1 == 0){
        ad2 = 1;
    }

    if(s1 == 0){
        s2 = 1;
    }

    if(m1 == 0){
        m2 = 1;
    }

    if(d1 == 0){
        d2 = 1;
    }

    if(ad2 < 0){
        ad1 = 0 - ad1;
        ad2 = 0 - ad2;
    }

    if(s2 < 0){
        s1 = 0 - s1;
        s2 = 0 - s2;
    }

    if(m2 < 0){
        m1 = 0 - m1;
        m2 = 0 - m2;
    }
    
    if(d2 < 0){
        d1 = 0 - d1;
        d2 = 0 - d2;
    }

    printf("%d/%d ", p1, q1);
    printf("%d/%d ", p2, q2);
    printf("%d/%d ", ad1, ad2);
    printf("%d/%d ", s1, s2);
    printf("%d/%d ", m1, m2);
    printf("%d/%d ", d1, d2);

    return 0;
}

int mdc(int a, int b){
    if(b == 0){
        return a;
    }
    if(b != 0){
        mdc(b, a%b);
}
}