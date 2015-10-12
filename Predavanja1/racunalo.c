#include <stdio.h>

int main(int argc, char **args) {
  // pravilno bi bilo, da bi prej preveril obstoj argumentov!
  int x = atoi(args[1]);
  int y = atoi(args[2]);

  printf("%d + %d = %d\n", x, y, x+y);

  return 0;
}
