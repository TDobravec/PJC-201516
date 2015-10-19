/*
 * Naloga: izpisi vsoto prvih dveh argumentov programa.
 * 
 * Namig: argumenti so zapisani v obliki niza (string).
 * Ce zelimo niz pretvoriti v celo stevilo, uporabimo
 * funkcijo atoi.
 * Podobno: pretvorbo v realno stevilo opravimo s 
 * funkcijo atof.
 * 
 */ 

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **args) {
  if (argc < 3) {
      printf("Podaj dva argumenta!\n");
      exit(0);
  }
    
  // pretvorba iz "string" v "int"
  int x = atoi(args[1]);
  int y = atoi(args[2]);

  printf("%d + %d = %d\n", x, y, x+y);

  return 0;
}
