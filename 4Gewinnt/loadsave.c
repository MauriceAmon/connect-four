#pragma hdrstop
#pragma argsused

#include <stdio.h>
#include <tchar.h>
#include "setzen.h"
#include "main.h"
#include "feld.h"

#define B ' '

int lastmovex;
int lastmovey;

int speichern()
{



int a = 3;      // extern Spalte letzter Spielzug
int b = 6;      // extern Zeile letzter Spielzug
int c;
int d;


extern char brett[6][7];
extern char zeichen;
extern char symbol;


	FILE *datei = fopen("C:\\file\\speicher.txt", "w"); //Spiel schreiben

	for(c = 5; c >= 0; c--) {
            for(d = 0; d < 7; d++) {

            if(brett[c][d] == 'X') {

    fprintf(datei, "X ");
	fprintf(datei, "%d ", c);
	fprintf(datei, "%d ", d);
}

            if(brett[c][d] == 'O') {

    fprintf(datei, "O ");
	fprintf(datei, "%d ", c);
	fprintf(datei, "%d ", d);

            }
	}
}
	fclose(datei);

	 //fseek(load, 3, SEEK_SET);

return 0;

}

int laden() {


extern char brett[6][7];


int lx;
int ly;
char h;

int j;
int k;

for(j = 0; j < 7; j++) {
    for(k = 0; k < 6; k++) {
        brett[k][j] = B;
    }
}

FILE *load = fopen("C:\\file\\speicher.txt", "r");    //Spiel lesen
	while(!feof(load)) {

    fscanf(load, "%c", &h);
            if(h == 'O'){
	fscanf(load, "%d", &lx);
	fscanf(load, "%d", &ly);

	brett[lx][ly] = 'O';

            }
            if(h == 'X') {
                fscanf(load, "%d", &lx);
                fscanf(load, "%d", &ly);

                brett[lx][ly] = 'X';

            }

	// Hier folgt die Funktion, welche die Steine anhand der ermittelten Koordinaten
	// auf dem Brett positioniert.

           }



	fclose(load);

feld();

return 0;

}



