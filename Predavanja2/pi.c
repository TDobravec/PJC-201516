/*
 * Naloga: Napisi program, ki s pomocjo nakljucnih stevil 
 * izracuna stevilo PI.
 *
 * Matematicno ozadje: razmerje med ploscino kvadrata in
 * ploscino kvadratu vcrtanega kroga je 4 : PI. 
 * 
 * Resitev naloge: generiraj  n nakljucnih tock znotraj 
 * kvadrata v prvem kvadrantu [0..1] x [0..1] in preveri, 
 * koliko izmed njih jih lezi tudi v vcrtanem krogu. 
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **args) {
    long n=10000000;
    
    int vKrogu = 0; // koliko generiranih tock je padlo v krog
    
    int i;
    for(i=0; i<n; i++) {
      // generiramo tocko v kvadratu [0..1] x [0..1] ...
      float x = (float) rand() / RAND_MAX;   
      float y = (float) rand() / RAND_MAX;   
      
      // ... in preverimo, ali tocka lezi v krogu
      if (x*x + y*y < 1)
        vKrogu++;
    }
    printf("PI = %.10f\n", (double) 4*vKrogu / n);
}
    