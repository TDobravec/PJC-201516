int main(int argc, char *args[]) {
  int i;

  scanf("%d", &i);

  switch (i) {
    case 10: printf("Odlicno!\n");  
    case 9 : printf("Prav dobro!\n"); 
    case 8 : printf("Prav dobro!\n");
    case 7 : printf("Dobro!\n");     
    case 6 : printf("Zadostno!\n");
    case 5 : printf("Nezadostno!\n");
    default: printf("Ni ocena!\n");
  }

  return 0;
}

