/*
 * main.c
 *
 *  Created on: 24.06.2013
 *      Author: m.amon
 */


#include <stdio.h>
#include <stdlib.h>

#include "setzen.h"
#include "Initialisierung.h"
#include "loadsave.h"
#include "menu.h"
#include "AI.h"

#define B ' '

char brett[6][7] = { {B,B,B,B,B,B,B},
                     {B,B,B,B,B,B,B},
                     {B,B,B,B,B,B,B},
                     {B,B,B,B,B,B,B},
                     {B,B,B,B,B,B,B},
                     {B,B,B,B,B,B,B} };






int main()
{
mkdir("C:\\file");
menu();
//laden();
//system("PAUSE");
Initialisierung();
spiel();


    return 0;

}



   // system("PAUSE");

    int spiel() {

    	int a = 49;
    	   int game;

   /* printf("\n\nNeues Spiel?\n");
            printf("1. Ja\n");
            printf("2. Nein\n");
            scanf("%d", &game);*/

            system("CLS");
   /* switch(game) {

case 1:*/
    feld();

    while(a >= 0) {

    play1();
    a--;

    play2();
    //artificalIntelligence();
    a--;
    }

    printf("Unentschieden!");
 return 0;

    }

/*case 2:

    exit(1);

    }*/



int spielCPU() {

    	int a = 49;
    	   int game;

   /* printf("\n\nNeues Spiel?\n");
            printf("1. Ja\n");
            printf("2. Nein\n");
            scanf("%d", &game);*/
            system("CLS");
   /* switch(game) {

case 1:*/
    feld();

    while(a >= 0) {

    play1();
    a--;

    artificalIntelligence();
    a--;
    }
    printf("Unentschieden!");

/*case 2:

    exit(1);

    }*/

    return 0;
}




