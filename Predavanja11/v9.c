// avtor: 63980186

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
  char *ime;
  char *priimek;
  char *telefon;
} oseba;

oseba newOseba(char *ime, char *priimek, char *telefon) {
    oseba o;
    
    o.ime     = (char *) malloc(sizeof(char)*(strlen(ime)+1));
    o.priimek = (char *) malloc(sizeof(char)*(strlen(priimek)+1));
    o.telefon = (char *) malloc(sizeof(char)*(strlen(telefon)+1));

    strcpy(o.ime, ime);
    strcpy(o.priimek, priimek);
    strcpy(o.telefon, telefon);
    
    return o;
}

void zlij(oseba *osebe, int z, int k) {
    int s = (z+k)/2;

    oseba *nova = malloc(sizeof(oseba)*(k -z + 1));
    int i = z, j = s + 1;

    int l;
    int *t;
    while ((i <= s) && (j <= k)) {
        if (strcmp(osebe[i].ime, osebe[j].ime) < 0) 
            t = &i; else t=&j;
        nova[l++] = osebe[(*t)++];
    }
    for(; i <= s; i++) {
        nova[l++] = osebe[i];
    }
    
    memcpy(osebe+z, nova, sizeof(oseba)*l);
}
    

void msort(oseba *osebe, int z, int k) {
    if (z >= k) return;
    
    int s = (z+k)/2;
    msort(osebe, z, s);
    msort(osebe, s+1, k);
    
    zlij(osebe, z, k);
}

int main(int argc, char *args[]) {	
    FILE *f = fopen(args[1], "r");
    if(f == NULL)
        exit(1);

    char vrstica[100];
    char locila[] = ":\n";

    int velikost;
    fscanf(f, "%d\n", &velikost);	
    
    oseba *o = (oseba *) malloc(velikost*(sizeof(oseba)));
     int velikostPomnilnika = velikost*sizeof(oseba);

    char *ime, *priimek, *telefon;
    int i = 0;	
    
    while(fgets(vrstica, 100, f) != NULL)  {	
        
        ime     = strtok(vrstica, locila);
        priimek = strtok(NULL, locila);
        telefon = strtok(NULL, locila);
        
        // fscanf(f, "%[^:]:%[^:]:%s", ime, priimek, telefon);

        o[i] = newOseba(ime, priimek, telefon);

        velikostPomnilnika += strlen(o[i].ime) + strlen(o[i].priimek)  + strlen(o[i].telefon) + 3;		
        i++;
    }

    printf("Pomnilnik: %d\n", velikostPomnilnika);

    int k;
    for(k=0; k<i; k++) {
      printf("%s %s %s\n", o[k].ime, o[k].priimek, o[k].telefon);
    }

    return 0;
}

