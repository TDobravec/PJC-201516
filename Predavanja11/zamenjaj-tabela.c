#include <stdio.h>
#include <string.h>

void zamenjaj(int tabela[], int i, int j) {
    int tmp = tabela[i];
    tabela[i] = tabela[j];
    tabela[j] = tmp;
}

int main(int argc, char **argv)
{
    int tabela[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("Pred zamenjavo: tabela[5]=%d, tabela[7]=%d\n", tabela[5], tabela[7]);
    
    zamenjaj(tabela, 5, 7);
    
    printf("Po zamenjavi  : tabela[5]=%d, tabela[7]=%d\n", tabela[5], tabela[7]);	
    return 0;
}
