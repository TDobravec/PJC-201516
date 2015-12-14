#include <stdio.h>
#include <string.h>

void bla(int x) {
    x=10;
}

int main(int argc, char **argv)
{
	int a=5;
    bla(a);
    printf("%d\n", a);
	return 0;
}
