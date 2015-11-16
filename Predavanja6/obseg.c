#include <stdio.h>
#include <limits.h>

int main(int argc, char **args) {        
    char format[]  = "%-28s%-10d%20d ... %-20d\n";
    char formatU[] = "%-28s%-10d%20u ... %-20u\n";
    char formatL[] = "%-28s%-10d%20lu ... %-20lu\n";
    
    printf("Tip                       Velikost                        Obseg\n");
    printf(format,  "short int",          sizeof(short int),          SHRT_MIN, SHRT_MAX);
    printf(formatU, "unsigned short int", sizeof(unsigned short int), 0, USHRT_MAX);
    printf(format,  "int",                sizeof(int),                INT_MIN, INT_MAX);
    printf(formatU, "unsigned int",       sizeof(unsigned int),       0, UINT_MAX);
    printf(formatL, "long int",           sizeof(long int),           LONG_MIN, LONG_MAX);
    printf(formatL, "unsigned long int",  sizeof(unsigned long int),  0, ULONG_MAX);
    
}



