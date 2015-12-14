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
    
    // kaj pa kazalec na clpx?
    cplx *w2;
    w2 = &w1;
    printf("w2 = %.2f + %.2fi\n", (*w2).re, w2 -> im);
    w2 -> re = 42;
    printf("w1 = %.2f + %.2fi\n", w1.re, w1.im);
    
    cplx *w3; 
    w3 = (cplx *) malloc(sizeof(cplx));
    (*w3) = w1;
    (*w3).re = w1.re;
    (*w3).im = w1.im;
    printf("w2 = %.2f + %.2fi\n", (*w3).re, w3 -> im);

    
	return 0;
}
