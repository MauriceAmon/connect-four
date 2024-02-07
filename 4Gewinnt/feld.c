
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>


#define B ' '

extern char brett[6][7];


int feld() {

	int i;
	int y;

	int posy2 = 12;
	int posx2 = 55;
	int posy = 10;
	int posx = 60;




	printf("     1   2   3   4   5   6   7  \n   +---+---+---+---+---+---+---+\n");
	for (i = 0; i < 6; i++) {
            printf("   | ");
            for(y = 0; y <= 5; y++) {

		printf("%c", brett[i][y]);
				printf(" | ");
            }
		printf("%c", brett[i][6]);
				printf(" |\n");


		printf("   +---+---+---+---+---+---+---+\n");

	}

COORD coords = {(posx), (posy)};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , coords);

printf("Spiel speichern = 8\n\n");

COORD coords2 = {(posx), (posy2)};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , coords2);

printf("Spiel laden = 9");

return 0;
}
