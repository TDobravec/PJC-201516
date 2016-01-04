#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// poveca tabelo na dvokratno velikost
void povecaj(int ** tab, int *n) {
    int *novaTabela = (int *) malloc(2*(*n)*sizeof(int));    
    
    int i;
    for(i=0; i<*n; i++)
        novaTabela[i] = *tab[i];
        
    free(*tab);
    
    *n=2*(*n);
    
    *tab = novaTabela;
}


int main(int argc, char **argv)
{   
    int n = 10; // velikost tabele (število podatkov)
    int *tabela = (int *) malloc(n * sizeof(int)); // tabela z n števili
    
    // ...
    // ...
    
    // ugotovim, da je tabela premajhna, potrebujem vecjo
    // ... zato jo povecam (ustvarim 2x vecjo tabelo) in prepisem vsebino
    povecaj(&tabela, &n);
    
    // ...
    // ...

    // ... na koncu pospravim za sabo
    free(tabela);
    
    return 0;
}
