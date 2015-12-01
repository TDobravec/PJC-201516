#include <stdio.h>
#include <string.h>

struct oseba {
  char ime[20];
  char priimek[20];
  int starost;
};

int primerjalnik(const void *x, const void *y) {
    struct oseba a = *(struct oseba *)x;
    struct oseba b = *(struct oseba *)y;
    // urejanje po starosti
    // return a.starost - b.starost;
    
    // urejanje po imenih
    return strcmp(a.ime, b.ime);
}

int main(int argc, char **argv) {

    // tabela petih oseb
    struct oseba osebe[5];
    
    int i;
    for(i=0; i<5; i++) {
      printf("Vpisi ime osebe %d: ", i+1);
      scanf("%s", osebe[i].ime);

      printf("Vpisi starost osebe %d: ", i+1);
      scanf("%d", &osebe[i].starost);
    }
    
    qsort(osebe, 5, sizeof(struct oseba), primerjalnik);

    for(i=0; i<5; i++) {
        printf("%s - %d\n", osebe[i].ime, osebe[i].starost);
    }
    
}
