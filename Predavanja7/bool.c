#include <stdio.h>
#include <stdbool.h>

// Standard C99 omogoča tudi uporabo tipa bool 
int main(int argc, char ** args) {
    bool test = true;  // poznamo vrednosti true in false

    // pogoj preverjamo z (test==true) ali preprosteje (test)
    if (test) {
        printf("OK");
    } else {
        printf("NOK");
    }
 }