#include <stdio.h>
#include <stdlib.h>

// en element seznama
typedef struct stevilo {
    // poleg podatkovnega dela...
    int x; 
    
    //... element vsebuje tudi kazalec na naslednji element
    struct stevilo * next;
} stevilo;


// Funkcija ustvari in vrne nov element seznama
stevilo * novElement(int x) {
    stevilo *nov = malloc(sizeof(stevilo));
    nov -> x = x;
    nov -> next = NULL;
    
    return nov;
}

// Vstavljanje na začetek seznama je preprosto: nov element postane zacetek; 
// "naslednik" od novega elementa pa je prejsnji zacetek
stevilo * vstaviNaZacetek(stevilo *zacetek, int x) {
    stevilo *nov = novElement(x);
    
    nov -> next = zacetek;
    zacetek = nov;
    
    return zacetek;
}

// Za vstavljenje na konec seznama se moram najprej "sprehoditi" po 
// vseh ze obstojecih elementih. 
stevilo * vstaviNaKonec(stevilo *zacetek, int x) {
    stevilo *nov = novElement(x);
    
    stevilo *t = zacetek;
    
    // edina izjema: vstavljanje v prazen seznam
    if (zacetek == NULL) 
        return nov;
        
    // S pomoznim kazalcem t se sprehodim
    // do zadnjega elementa seznama    
    while (t -> next != NULL)
        t = t -> next;
    t -> next = nov;
    
    return zacetek;
}

// Vstavljenje v urejen seznam. Poiskati moram mesto, kamor element sodi.
stevilo * vstaviUrejeno(stevilo *zacetek, int x) {
    stevilo *nov = novElement(x);

    // Ce je seznam prazen -> zacetek mora pokazati na nov elemen
    if (zacetek == NULL)
        return nov;
        
    // Ali element sodi na zacetek seznama?
    if (zacetek -> x > x) 
        return vstaviNaZacetek(zacetek, x);
        
    // Sicer: poiscem mesto...
    stevilo *t = zacetek;
    while (t->next != NULL && t->next->x < x)
        t = t->next;
    
    // ... in vstavim nov element
    nov->next = t->next;
    t->next = nov;    
    
    return zacetek;
}



void izpisi(stevilo *zacetek) {
  while (zacetek != NULL) {
      printf("%d\n", zacetek -> x);
      zacetek = zacetek -> next;
  } 
}

int main(int argc, char* args[])
{
    stevilo *zacetek = NULL;
    
    zacetek = vstaviUrejeno(zacetek, 5);
    zacetek = vstaviUrejeno(zacetek, 3);
    zacetek = vstaviUrejeno(zacetek, 9);
    zacetek = vstaviUrejeno(zacetek, 1);
    zacetek = vstaviUrejeno(zacetek, 7);
    zacetek = vstaviUrejeno(zacetek, 6);

    
    izpisi(zacetek);
    
    return 0;
}
