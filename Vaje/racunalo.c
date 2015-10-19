#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *args[]) {
  if (argc < 4) {
    printf("Uporaba: x op y\n");
    exit(0);
  }

  char op = args[2][0]; // znak za operacijo
  int x = atoi(args[1]);
  int y = atoi(args[3]);
  double rezultat = 0;

  if (op == '+')
    rezultat = x + y;
  else if (op == '-')
    rezultat = x - y;
  else if (op == '*')
    rezultat = x * y;
  else if (op == '/') 
    rezultat = (double) x / y;
  else {
    printf("Napacna operacija\n");
    exit(0);
  }

  if (op=='/' && argc==5) {

    int decimalke = atoi(args[4]);

    printf("%d %c %d = %.*f", x, op, y, decimalke, rezultat);

  } else {

    printf("%d %c %d = %.0f\n", x, op, y, rezultat);

  }

  return 0;

}

