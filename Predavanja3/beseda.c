#include <stdio.h>
#include <string.h>

/** Preberemo besedo in jo izpisemo crko po crki
 *  Niz v C je tabela znakov. Niz se konca z znakom \0 (znak z ASCII kodo 0).
 */ 

int main(int argc, char **args) {
  // Deklaracija in inicializacija niza. Rezerviram prostor za besedo dolgo do
  // 19 znakov in v rezerviran prostor napišem besedo "BlaBlaBla". V ostaliem 
  // delu rezervirane tabele (zadnjh 10 znakov) vsebina ni znana (tam je lahko 
  // karkoli). Vsebina tabele je tako B l a B l a B l a \0 ? ? ? ? ? ? ? ? ? ?
  char beseda[20] = "BlaBlaBla";
  
  printf("Vpisi besedo: ");
  // s tem branjem prepisem vsebino tabele (kje je bilo prej "BlaBlaBla"), vendar 
  // samo toliko znakov, kolikor je dolga prebrana beseda. Primer: če če uporabnik 
  // vpiše besdo "Petek", bo vsebina tabele P e t e k \0 B l a \0 ? ? ? ? ? ? ? ? ? ?
  scanf("%s", beseda);
  
  // prebrana beseda NE vsebuje znaka za prehod v novo vrstico.
  printf("%s\n", beseda);
  
  int i;
  // za izpis besede znak po znaku uporabim zanko; i-to črko dobim v beseda[i] 
  for(i=0; i<strlen(beseda); i++) {
      printf("%c\n", beseda[i]);
  }
  
  return 0;
}