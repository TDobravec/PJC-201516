#include <stdio.h>

/**
 * Branje tekstovne datoteke. 
 * Če uporabim fukncijo fscanf, se bo prebrala cela beseda (tudi, če je daljša od 10 znakov),
 * če uporagim fgets, pa se bo prebralo omejeno število znakov (največ 9).
 */
 */
int main(int argc, char **args) {
    char beseda[10];
    
   FILE *vhod;

   vhod = fopen("test.txt", "r");
   
   if (vhod != NULL) {
       //fscanf(vhod, "%s", beseda);
       fgets(beseda, 10, vhod);
       printf("%s\n", beseda);
       
       fclose(vhod);
   } else {
       printf("Datoteka ne obstaja");
   }
   
   return 0;
}