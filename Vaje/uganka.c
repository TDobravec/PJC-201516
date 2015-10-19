#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>


int main(int argc, char*argv[]){
	int n=100, t=0, i;
	
	if(argc > 1) 
		n = atoi(argv[1]);

	srand(time(NULL));
	int r=rand()%n + 1;

	printf("Vpisi stevilo med 1 in %d \n",n);

	do{
		scanf("%d", &i);
		t++;
		if(i<r)printf("PREMALO\n");
		if(i>r)printf("PREVEC\n");
	} while (i != r);

	printf("Stevilo : %d Poskusi : %d \n",r,t);
	return 0;
}

