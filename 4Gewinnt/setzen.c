#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include "feld.h"
#include "neu.h"
#include "Initialisierung.h"
#include "loadsave.h"
#include "back.h"

#define B ' '

extern char brett[6][7];

extern struct Player {

	char name[20];
	char titel[30];
	int siege;
	int niederlagen;

}eins, zwei, CPU;

feld();

int z;
int spalte;


int play1() {

extern int z1, z2;
int m;
int zaehler = 1;
int g;
char symbol = 'X';
char zeichen = 'O';

 Ausgabe();

    printf("\n\tSie sind am Zug, %s \n\n", eins.name);
    /*printf("\tZeile (1-7): \t");
    scanf("%d", &zeile);*/

    printf("Werfen Sie mit den Tasten 1-7:");
    scanf("%d", &spalte);

    if(spalte == 8) {
    speichern();

    scanf("%d", &spalte);
    }


    if(spalte == 9) {
        system("CLS");
        laden();
        goback();

        if(z2 == z1) {
            Ausgabe();
            printf("\n\tSie sind am Zug, %s\n\n", eins.name);
            printf("Werfen Sie mit den Tasten 1-7:");
            scanf("%d", &spalte);

        }

    }

if(spalte < 8){
    for(z = 5; z >= 0; z--) {
            if(brett[z][spalte-1] == ' ') {
                break;
            }

    }
    if(z < 0) {
            printf("Diese Reihe ist bereits besetzt!\n");
            play1();
    }
    else {
        brett[z][spalte-1] = symbol;
        system("cls");
		feld();
		estimate();

    }
}

        return 0;
}

int play2() {
char zeichen = 'O';
int z;
int m = 1;
int zaehler = 1;
int spalte;
extern int z1, z2;


Ausgabe2();

printf("\n\tSie sind am Zug, %s\n\n", zwei.name);
    /*printf("\tZeile (1-7): \t");
    scanf("%d", &zeile);*/

    printf("\tWerfen Sie mit den Tasten 1-7: \t");
    scanf("%d", &spalte);

       if(spalte == 8) {
    speichern();

    scanf("%d\n", &spalte);
    }


    if(spalte == 9) {
        system("CLS");
        laden();
        goback();

        if(z2 < z1) {
            Ausgabe();
            printf("\n\tSie sind am Zug, %s\n\n", zwei.name);
            printf("Werfen Sie mit den Tasten 1-7:");
            scanf("%d", &spalte);

        }

    }
if(spalte < 8) {
    for(z = 5; z >= 0; z--) {
            if(brett[z][spalte-1] == ' ') {
                break;
            }

    }
     if(z < 0) {
            printf("Diese Reihe ist bereits besetzt!\n");
            play2();
     }
    else {
        brett[z][spalte-1] = zeichen;
        system("cls");
		feld();
		estimate();
    }
}

return 0;
}

