#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// poveca tabelo na dvokratno velikost
int * povecaj(int *tabela, int n) {
}


int main(int argc, char **argv)
{   
    int n = 10; // velikost tabele (število podatkov)
    int *tabela = malloc(n * sizeof(int)); // tabela z n števili
    
    // ...
    // ...
    
    // ugotovim, da je tabela premajhna, potrebujem vecjo
    // ... zato jo povecam (ustvarim 2x vecjo tabelo) in prepisem vsebino
    tabela = povecaj(tabela, n); 
    n = 2*n;
    
    // ...
    // ...

    // ... na koncu pospravim za sabo
    free(tabela);
    
    return 0;
}
