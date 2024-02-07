/*
 * neu.c
 *
 *  Created on: 24.06.2013
 *      Author: m.amon
 */


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include "feld.h"


#define B ' '

extern char brett[6][7];

int neu() {


int j;
int k;
int ng;

for(j = 0; j < 7; j++) {
    for(k = 0; k < 6; k++) {
        brett[k][j] = B;
    }
}

system("CLS");

		printf("------------ Willkommen bei Haseo - dem 4 Gewinnt-Programm ------------\n "
               "======================================================================\n\n");
        printf("1. Neues Spiel?\n");
        printf("2. Zurueck zum hauptmenue\n\n");
        scanf("%d", &ng);

        switch(ng) {

    case 1:
        system("CLS");
        feld();
        break;

    case 2:
        menu();
        break;
        }

return 0;
}
