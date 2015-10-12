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
