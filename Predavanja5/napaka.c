#include <stdio.h>

int main(int argc, char **args) {   
  int i;    
  for(i=0; i<10; i++) {     
    if (i == 5)        
      printf("%d - OK \n", i);     
    else       
      printf("%d - NOK \n", i);   
  } 
}

