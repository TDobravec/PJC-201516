#include <stdio.h>
#include <string.h>

// Funkcija strtok se uporablja v podobne namene kot
// metoda split() v javi.
// Problem: ce se v vhodnem nizu pojavi veckratno locilo,
// strtok NE vraca praznih zetonov; veckratno locilo razume
// kot enojno locilo. Zato izgubimo podatek o zaporedni stevilki
// zetona (npr: v nizu abc:::def:ghi je prvi zeton abc, drugi 
// def in tretji ghi, prav pa bi bilo, da bi bila def in ghi 
// cetrti in peti zeton). V tej verziji programa je prikazano, 
// kako resimo opisan problem. 
int main(int argc, char *args[]) {

   char niz[]   = "::abc::def:xyz";
   char delim[] = ":";

   char *result; 
   int i=0; // stevilo do sedaj najdenih zetonov

   result = strtok(niz, delim);
   while(result != NULL) {
      char *back = result;
      int cnt = 0;
      do {
        back--;
        if (back < niz) break;
        cnt++;
      } while (*back == delim[0]);

      i += cnt;

      printf("%d - %s\n", i, result);

      result = strtok(NULL, delim);

      //i++;

    }

}

