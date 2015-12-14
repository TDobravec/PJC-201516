#include <stdio.h>
#include <string.h>


// funkcija nastavi vrednost LOKALNI spremenljivki
void bla(int x) {
    x=10;
}

int main(int argc, char **argv)
{
    int a=5;
    // po klicu funkcije bla se vrednost spremenljivke a ne spremeni!
    bla(a);
    printf("%d\n", a);  // izpise se 5 (in ne 10!)
    return 0;
}
