#include <stdio.h>
#include <limits.h>
int main(int argc, char *args[]) {
  int i = 0xFFFFFFFF; // === -1
  if (i < i+1) { // -1 < (-1+1=0)
    printf("int: OK\n", i);
  }

  unsigned int ui = 0xFFFFFFFF;  // === 4.294.967.295
  if (ui < ui+1) { // 4.294.967.295 > 4.294.967.295 + 1 = 0
    printf("unsigned int: OK\n", i);
  }
  
  return 0;
}

