#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>


#define B ' '



struct Player {

	char name[20];
	char titel[30];
	int siege;
	int niederlagen;

};



char name1;
char titel1;
char name2;
char titel2;

//struct player  *playerpointer;


struct Player eins;
struct Player zwei;
struct Player CPU;

int InitialisierungPlayer() {

    printf("Bitte waehlen Sie Ihren Namen, Spieler X\n\n");
	scanf("%s", &name1);
	strcpy(eins.name, &name1);

	printf("Bitte waehlen Sie Ihren Titel, Spieler X\n\n");
	scanf("%s", &titel1);
	strcpy(eins.titel, &titel1);

	eins.siege = 0;
	eins.niederlagen = 0;

return 0;
}
int InitialisierungCPU() {


	scanf("CPU");
	strcpy(CPU.name, "CPU");

	//printf("Bitte waehlen Sie Ihren Titel, Spieler X\n\n");
	//scanf("%s", &titel1);
	strcpy(CPU.titel, "Hirnvernichter");

	CPU.siege = 0;
	CPU.niederlagen = 0;

return 0;
}

int Initialisierung() {  //Initialisierung des Namens und Titels





	printf("Bitte waehlen Sie Ihren Namen, Spieler X\n\n");
	scanf("%s", &name1);
	strcpy(eins.name, &name1);

	printf("\n\nBitte waehlen Sie Ihren Titel, Spieler X\n\n");
	scanf("%s", &titel1);
	strcpy(eins.titel, &titel1);

	eins.siege = 0;
	eins.niederlagen = 0;

	printf("\n\nBitte waehlen Sie Ihren Namen, Spieler O\n\n");
		scanf("%s", &name2);
		strcpy(zwei.name, &name2);

		printf("\n\nBitte waehlen Sie Ihren Titel, Spieler O\n\n");
		scanf("%s", &titel2);
		strcpy(zwei.titel, &titel2);

		zwei.siege = 0;
		zwei.niederlagen = 0;




	return 0;
}

int Ausgabe() {

	int posy = 15;
	int posx = 0;

	COORD coords = {(posx), (posy)};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , coords);

	printf("Spielername: %s\n", eins.name);
	printf("Titel:       %s\n", eins.titel);
	printf("Siege:       %d\n", eins.siege);
	printf("Niederlagen: %d\n\n", eins.niederlagen);


	return 0;
}

int Ausgabe2() {

	int posy = 15;
	int posx = 0;

	COORD coords = {(posx), (posy)};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , coords);

	printf("Spielername: %s\n", zwei.name);
	printf("Titel:       %s\n", zwei.titel);
	printf("Siege:       %d\n", zwei.siege);
	printf("Niederlagen: %d\n\n", zwei.niederlagen);


	return 0;
}

int AusgabeCPU() {

	int posy = 15;
	int posx = 0;

	COORD coords = {(posx), (posy)};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , coords);

	printf("Spielername: %s\n", CPU.name);
	printf("Titel:       %s\n", CPU.titel);
	printf("Siege:       %d\n", CPU.siege);
	printf("Niederlagen: %d\n\n", CPU.niederlagen);


	return 0;
}





