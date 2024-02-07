 /*
 * menu.c
 *
 *  Created on: 13.06.2013
 *      Author: m.amon
 */

#pragma hdrstop
#pragma argsused

#include <stdio.h>
#include <tchar.h>

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Anleitung.h"
#include "Initialisierung.h"
#include "AI.h"
#include "loadsave.h"

int menu() {



	int auswahl1;
	int auswahl2;



	system("color 0A");



	printf("------------ Willkommen bei Haseo - dem 4 Gewinnt-Programm ------------\n "
		  "======================================================================\n\n");

	printf("1. --------- Neues Spiel ---------------------------------------------- \n");
	printf("2. --------- Spiel laden ----------------------------------------------\n");
	printf("3. --------- Anleitung   ----------------------------------------------\n");
	printf("4. --------- Beenden     ----------------------------------------------\n");

	scanf("%d", &auswahl1);

	switch(auswahl1) {

	case 1:

		system("CLS");

		printf("------------ Willkommen bei Haseo - dem 4 Gewinnt-Programm ------------\n "
				  "======================================================================\n\n");
		printf("1. --------- Spiel gegen CPU        -----------------------------------\n");
		printf("2. --------- Spiel gegen Spieler    -----------------------------------\n");
		printf("3. --------- Zurueck zum Hauptmenue -----------------------------------\n");

		scanf("%d", &auswahl2);
		switch(auswahl2) {

		case 1:
                InitialisierungPlayer();
                InitialisierungCPU();
                spielCPU();
				//artificalIntelligence();

				/*printf("------------ Willkommen bei Haseo - dem 4 Gewinnt-Programm ------------\n "
				  "======================================================================\n\n");
				printf("Waehlen Sie Ihren Schwierigkeitgrad.\n"
					   "1. Einfach\n"
					   "2. Mittel\n");
					   "3. Schwer\n"
					   "4. Ultra schwer");*/

					   break;

		case 2:
		Initialisierung();
		spiel();

				break;

		case 3:
		system("CLS");
			main();

			break;


		}

		break;

	case 2:

		system("CLS");

		printf("------------ Willkommen bei Haseo - dem 4 Gewinnt-Programm ------------\n "
			   "======================================================================\n\n");
		/*printf("1. --------- Pfad angeben           ----------------------------------------------\n");
		printf("2. --------- Zurueck zum Hauptmenue ----------------------------------------------\n");
*/


		break;

	/*case 3:

		printf("------------ Willkommen bei Haseo - dem 4 Gewinnt-Programm ------------\n "
			   "======================================================================\n\n");
		printf("1. ------------ Deutsch   ---------------------------------------------\n");
		printf("2. ------------ Japanisch ---------------------------------------------\n");

		break;*/

	case 3:
		Anleitung();

	case 4:

		exit(0);
		break;

	}

 return 0;
}


