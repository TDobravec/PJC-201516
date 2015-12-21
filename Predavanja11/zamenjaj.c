#include <stdio.h>
#include <string.h>


void zamenjaj(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(int argc, char **argv)
{
    int a=5;
    int b=7;
    
    printf("Pred zamenjavo: a=%d, b=%d\n", a, b);
    zamenjaj(&a,&b);
    printf("Po zamenjavi  : a=%d, b=%d\n", a, b);
	return 0;
}
