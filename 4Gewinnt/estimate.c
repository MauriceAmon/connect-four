
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include "feld.h"
#include "main.h"
#include "neu.h"

#define B ' '

extern char brett[6][7];

extern struct Player {

	char name[20];
	char titel[30];
	int siege;
	int niederlagen;

}eins, zwei, CPU;


int estimate() {

char zeichen = 'O';
char symbol = 'X';

int z;
int s;

for(z = 5; z >= 0; z--) {
    for(s = 0; s < 7; s++) {
        if((brett[z][s] == symbol && brett[z-1][s] == symbol && brett[z-2][s] == symbol && brett[z-3][s] == symbol) || (brett[z][s] == symbol && brett[z][s+1] == symbol && brett[z][s+2] == symbol && brett[z][s+3] == symbol) || (brett[z][s] == symbol && brett[z-1][s+1] == symbol && brett[z-2][s+2] == symbol && brett[z-3][s+3] ==  symbol) || (brett[z][s] == symbol && brett[z-1][s-1] == symbol && brett[z-2][s-2] == symbol && brett[z-3][s-3] == symbol)) {
            printf("\n\n\nGlueckwunsch %s! Du hast gewonnen!\n", eins.name);
            eins.siege++;
            zwei.niederlagen++;
            sleep(4000);
            neu();
        }
        if((brett[z][s] == zeichen && brett[z-1][s] == zeichen && brett[z-2][s] == zeichen && brett[z-3][s] == zeichen) || (brett[z][s] == zeichen && brett[z][s+1] == zeichen && brett[z+2][s+2] == zeichen && brett[z][s+3] == zeichen) || (brett[z][s] == zeichen && brett[z-1][s+1] == zeichen && brett[z-2][s+2] == zeichen && brett[z-3][s+3] ==  zeichen) || (brett[z][s] == zeichen && brett[z-1][s-1] == zeichen && brett[z-2][s-2] == zeichen && brett[z-3][s-3] == symbol)) {
            printf("\n\n\nGlueckwunsch %s! Du hast gewonnen!\n", zwei.name);
            zwei.siege++;
            eins.niederlagen++;
            sleep(4000);
            neu();
        }
    }
}
return 0;
}

int estimateCPU() {

char zeichen = 'O';
char symbol = 'X';

int z;
int s;

for(z = 5; z >= 0; z--) {
    for(s = 0; s < 7; s++) {
        if((brett[z][s] == symbol && brett[z-1][s] == symbol && brett[z-2][s] == symbol && brett[z-3][s] == symbol) || (brett[z][s] == symbol && brett[z][s+1] == symbol && brett[z][s+2] == symbol && brett[z][s+3] == symbol) || (brett[z][s] == symbol && brett[z-1][s+1] == symbol && brett[z-2][s+2] == symbol && brett[z-3][s+3] ==  symbol) || (brett[z][s] == symbol && brett[z-1][s-1] == symbol && brett[z-2][s-2] == symbol && brett[z-3][s-3] == symbol)) {
            printf("\n\nGlueckwunsch %s! Du hast gewonnen!\n", eins.name);
            eins.siege++;
            CPU.niederlagen++;
            sleep(4000);
            neu();
        }
        if((brett[z][s] == zeichen && brett[z-1][s] == zeichen && brett[z-2][s] == zeichen && brett[z-3][s] == zeichen) || (brett[z][s] == zeichen && brett[z][s+1] == zeichen && brett[z][s+2] == zeichen && brett[z][s+3] == zeichen) || (brett[z][s] == zeichen && brett[z-1][s+1] == zeichen && brett[z-2][s+2] == zeichen && brett[z-3][s+3] ==  zeichen) || (brett[z][s] == zeichen && brett[z-1][s-1] == zeichen && brett[z-2][s-2] == zeichen && brett[z-3][s-3] == zeichen)) {
            printf("\n\nGlueckwunsch CPU! Du hast gewonnen!\n");
            CPU.siege++;
            eins.niederlagen++;
            sleep(4000);
            neuCPU();
        }
    }
}

return 0;
}
