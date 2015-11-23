#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main(int argc, char ** args) {
    char x;
    // Standard C99 doda nekaj celostevilskih tipov
    uint64_t total = 0; 

    // Prevajalniku moramo sporociti, da delamo s 64 bitnimi stevili, 
    // na primer z uporabo dolocila ull (unsigned long long)
    for(x = 1; x < 63; x++){
        total = 1ull << x;
        printf("%d - %llu\n", x, total);        
    }  
 }