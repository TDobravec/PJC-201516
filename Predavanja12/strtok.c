#include <stdio.h>
#include <string.h>

// Funkcija strtok se uporablja v podobne namene kot
// metoda split() v javi.
// Problem: ce se v vhodnem nizu pojavi veckratno locilo,
// strtok NE vraca praznih zetonov; veckratno locilo razume
// kot enojno locilo. Zato izgubimo podatek o zaporedni stevilki
// zetona (npr: v nizu abc:::def:ghi je prvi zeton abc, drugi 
// def in tretji ghi, prav pa bi bilo, da bi bila def in ghi 
// cetrti in peti zeton. 
int main(int argc, char **argv)
{
char str[] = "abc:::def:xyz";   
  char delims[] = ":";

  char *result;int i=0;   
  result = strtok(str, delims);   
  while (result != NULL) {     
    printf("%d - %s\n", i++, result);     
    result = strtok(NULL, delims);   
  }
  return 0;
}
