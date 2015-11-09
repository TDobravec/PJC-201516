#include <stdio.h>

extern int K;
extern int pristej(int a);

int main(int argc, char **args) {
    int x =7;
    
    K = 10;
    
    int b = pristej(x);
    
    printf("%d\n", b);
}