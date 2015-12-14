#include <stdio.h>
#include <string.h>

typedef struct kompleksno {
    double re;
    double im;
} cplx;

int main(int argc, char **argv)
{
    cplx w1 = {3, 5};   
    printf("w1 = %.2f + %.2fi\n", w1.re, w1.im);
    
    cplx *w2; // kazalec na tip "cplx"
    w2 = &w1; // pokazem na w1 (w1 in w2 sedaj pomenita ISTO spominsko lokacijo)
    printf("w2 = %.2f + %.2fi\n", (*w2).re, w2 -> im); // isto kot izpis w1

    w2 -> re = 42;  // ce spremenim w2, spremenim tudi w1!
    printf("w1 = %.2f + %.2fi\n", w1.re, w1.im);
    
    cplx *w3; // kazalec na tip "cplx"
    w3 = (cplx *) malloc(sizeof(cplx)); // rezerviram DRUG del pomnilnika

    (*w3).re = w1.re;  // v w3 nastavim enake vrednosti kot so v w1
    (*w3).im = w1.im;
    // namesto zgornjih dveh ukazov lahko tudi z enim samim ukazom: 
    // (*w3) = w1;
    
    printf("w3 = %.2f + %.2fi\n", (*w3).re, w3 -> im);

    
    return 0;
}
