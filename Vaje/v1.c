//
//  pretvorba.c
//  DN2
//
//  Created by 63110045
//  Copyright (c) 2013. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pomoc() {
    printf("\nUporaba:\n");
    printf("pretvorba 1 x y -> tabela pretvorb od x do y sekund\n");
    printf("pertvorba 2 x -> pretvorba x sekund v ure, minute in sekunde\n");
    printf("pretvorba 3 h m s -> pretvorba ur, minut in sekund v sekunde\n");
    printf("pretvorba -> interaktivna razlicica\n");
    exit(-1);
}

void pretvoriSekunde(int sekunde) {
    int sekund = sekunde;
    int ur = sekund / 3600;
    sekund -= ur * 3600;
    int minute = sekund / 60;
    sekund -= minute * 60;
    
    printf("%d sekund je %d ur %d minut, %d sekund.\n", sekunde, ur, minute, sekund);
}

void pretvoriUre(int ure, int minute, int sekunde) {
    printf("%d ura, %d minut, %d sekund je %d sekund.\n", ure, minute, sekunde, ure * 3600 + minute * 60 + sekunde);
}

int main(int argc, char * argv[]) {
    
    int opcija;
    
    if (argc == 1) {
        printf("Katero akcijo naj izvedem? ");
        scanf("%d", &opcija);

        if (opcija == 1) {
            printf("Zacetek tabele: ");
            scanf("%s", argv[2]);
            printf("Konec tabele: ");
            scanf("%s", argv[3]);
            argc = 4;
            
        } else if (opcija == 2) {
            printf("Vpi??i sekunde: ");
            scanf("%s", argv[2]);
            argc = 3;
            
        } else if (opcija == 3) {
            printf("Ure: ");
            scanf("%s", argv[2]);
            printf("Minute: ");
            scanf("%s", argv[3]);
            printf("Sekunde: ");
            scanf("%s", argv[4]);
            argc = 5;
        } else {
            pomoc();
        }
    
    } else {
        opcija = atoi(argv[1]);
    }
    
    if (opcija == 1 && argc == 4) {

        int i;
        int zacetek = atoi(argv[2]);
        int konec = atoi(argv[3]) + 1;
        
        for (i = zacetek; i < konec; i++) {
            pretvoriSekunde(i);
        }
        
    } else if (opcija == 2 && argc == 3) {
        pretvoriSekunde(atoi(argv[2]));
        
    } else if (opcija == 3 && argc == 5) {
        int ure = atoi(argv[2]);
        int minute = atoi(argv[3]);
        int sekunde = atoi(argv[4]);

        pretvoriUre(ure, minute, sekunde);

    } else {
        pomoc();
    }
    
    return 0;
}
