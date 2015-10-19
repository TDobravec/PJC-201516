/*
 * Naloga: napisi program, ki izpise 7 nakljucnih stevil
 * iz intervala [1..39]  (loto listek)
 * 
 * Za generiranje (psevdo) nakljucnih stevil uporabljamo 
 * funkcijo rand() (stdlib.h). 
 * 
 * Funkcija srand() po privzetku uporabi vedno isto seme in
 * posledicno vraca vedno ista nakljucna stevila. 
 * 
 * Seme spremenimo s pomocjo funkcije srand(). Primerno seme (ki
 * bo ob vsakem zagonu programa razlicno) je "trenutni cas". V ta
 * namen uporabimo funkcijo time()  (time.h).
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **args) {
    srand(time(NULL));

    int i;
    for (i=0; i<7; i++) 
      printf("%d \n", rand() % 39 + 1);
    
    
}
    