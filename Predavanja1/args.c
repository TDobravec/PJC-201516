/*
 * Naloga: izpisi vse argumente, s katerimi je bil 
 * program pognan. 
 * 
 * Ce funkcijo main deklariramo takole
 * 
 *   int main(int argc, char **args) 
 * 
 * potem je argc stevilo argumentov + 1, 
 * argumenti pa so v args[1], args[2], ..., args[argc-1]. 
 *
 * V tabeli args je na prvem mestu (args[0]) zapisano ime programa,
 * zato je argc vedno vsaj 1.
 */ 

#include <stdio.h>

int main(int argc, char **args) {

  printf("Stevilo argumentov: %d\n", argc-1);
  printf("Ime programa: %s\n", args[0]);

  int i;
  for(i=1; i<argc; i++) {
    printf("Argument %d: %s\n", i, args[i]);
  }

  return 0;
}
