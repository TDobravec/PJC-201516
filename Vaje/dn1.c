/*

Napisite program, ki izpise 4 stevila (x, a, b in c), 
pri cemer je

- x enak vsoti vseh stevil med 1 in y, 
  ki so deljiva s 3 in 5 (y je vrednost prvega argumenta;
	pozor: obvezno preverite obstoj tega argumenta in 
  javite napako, ce ne obstaja!)
- a, b, c edini pitagorejski trojcek 
  (a2+b2=c2), za katerega velja a+b+c=1000;

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	int x=0, y, i;

	if(argc > 1) {
		y = atoi(argv[1]);
	} else {
		printf("Vnesite vsaj 1 argument.\n");
		return 1;
	}

	for(i = 1; i < y; i++) {
		if(i % 15 == 0) x++;
	}
	printf("x = %d\n", x);

	int a, b;
	double c;
	for (a = 1; a <= 1000; a++) {
		for(b = 1; b <= 1000; b++) {
			c = sqrt(a*a+b*b);
			if(a+b+c==1000) {
				printf("a = %d\nb = %d\nc = %.0f\n", a, b, c);
				return 0;
			}
		}
	}

	return 0;
}

