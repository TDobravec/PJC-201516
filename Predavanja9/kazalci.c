#include <stdio.h>

int main(int argc, char **argv)
{
     int *p;

  int x = 13;

  //p = (int*) 0x12ff80; 
  p = &x; // naslov od x
  *p=42;

  printf("%d\n", x);
  printf("%p\n", p);
  
  
  int a[10];
  printf("%p %p\n", a, &a[1]);
  
  int *pa;
  
  pa = a;
  pa[1] = 7;   // isto kot *(pa+1)=7,  a[1]=7
  
  printf("a[1] = %d\n", a[1]);
  
}

