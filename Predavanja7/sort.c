#include <stdio.h>

// Primerjalnik dveh števil tipa int
int primerjava(const void *x, const void *y) {
    int a = *(int*)x;
    int b = *(int*)y;
    
    return a-b;
}

// Tabele lahko v C urejamo s funkcijo qsort. Ker je funkcija splosna (z njo 
// lahko urejamo tabele poljubnih tipov), moramo poleg tabele in stevila elementov,
// ki jih zelimo urediti, podati se velikosti posameznega elementa in funkcijo,
// ki opravi primerjavo med dvema elementova in vrne <0, ==0 ali >0.
int main(int argc, char **args) {
    int tab[] = {4, 3, 9, 1, 45, 42, 13, 7};
    
    qsort(tab, 8, sizeof(int), primerjava);
    
    for(int i=0; i<8; i++)
        printf("%d ", tab[i]);
    printf("\n");
}