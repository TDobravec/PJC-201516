#include <stdio.h>

int main(int argc, char ** args) {
  char ime[5]; // niz dolg najvec 5 znakov
  int starost;  // celo stevilo
  
  printf("Vpisi starost: ");
  scanf("%d", &starost);

  // Ce vpises dolgo ime (vec kot 5 znakov), se bo ime shranilo v 
  // pomnilnik na mesto, ki je izven obsega tabele. Ker je spr.
  // starost deklarirana za sprememnljivko ime, se bo predolgo
  // ime zapisalo na spomnisko lokacijo, ki je rezervirana za 
  // spremenljivko starost in s tem se bo prava vrednost starosti
  // izgubila.
  printf("Vpisi ime: ");
  scanf("%s",  &ime);


  printf("Pozdravljen, %s, star si %d let\n", ime, starost);
 }
