#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(int argc, char* args[])
{
  int i, x=1024;
  
  // POZOR: meja zanke for se preverja ob vsaki iteraciji.
  // Z drugimi besedami: če se meja (v tem primeru vrednost 
  // spr. x) v telesu zanke spremeni, to vpliva na število
  // iteracij, ki se bodo izvedle!
  for(i=0; i<x; i++) {
      printf("%d\n", i);
      x=x/2;
  }    
}