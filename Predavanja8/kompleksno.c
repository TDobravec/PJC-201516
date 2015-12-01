#include <stdio.h>

struct kompleksno {
    double re, im;
};

void izpisi(struct kompleksno x) {
    printf("%.2f + %.2fi\n", x.re, x.im);
}

struct kompleksno sestej(struct kompleksno a, struct kompleksno b) {
    struct kompleksno rezultat;
    rezultat.re = a.re + b.re;
    rezultat.im = a.im + b.im;

    return rezultat;
}


void zamenjaj(struct kompleksno x) {
    double tmp = x.re;
    x.re = x.im;
    x.im = tmp;
}

int main(int argc, char **argv) {
  struct kompleksno w  = {.re=13, .im=7};
  struct kompleksno z;

  w.re = 7;
  w.im = 9;
  izpisi(w);
  
  z.re = 3; 
  z.im = -3;  
  izpisi(z);
  
  struct kompleksno r = sestej(w, z);
  izpisi(r);
  
  // zamenjava se ne zgodi, saj se zamenja le vrednost lokalnih spremenljivk!
  zamenjaj(w);
  printf("Po zamenjavi :\n");
  izpisi(w); 
}
