/*
 * Naloga: Program naj iz tipkovnice prebere dva podatka: 
 * ime uporabnika (niz) in starost (celo število).
 * 
 * Za branje tipkovnice uporabljamo funkcijo scanf() (stdio.h). 
 * 
 * POZOR: pred posameznim parametrom v funkciji scanf pisi znak &
 */
 
 #include <stdio.h>
 
int main(int argc, char **args) {
  int starost;    // celostevilska spremenljivka
  char ime[100];  // tabela znakov velikosti 100 

    printf("Vpisi ime: ");
    scanf("%s", ime);      // pri parametrih tipa "string", znak & ni potreben
    
    printf("Vpisi starost: ");
    scanf("%d", &starost);  // pri ostalih tipih pa je OBVEZEN!!!
    
    printf("Zivjo %s, stari si %d\n", ime, starost);
}
    