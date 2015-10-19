/*
 * Prvi program za ogrevanje: izpis stevil od 10 do 0
 * 
 */

#include <stdio.h>

int main(int argc, char **args) {
  int i;
  for(i=10; i>=0; i--) {
    printf("%d\n", i); 
  }
  printf("BUM!\n");

  return 0;
}
