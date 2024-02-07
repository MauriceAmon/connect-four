 /*
 * main.c
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

int Anleitung() {

	int back;

   system("CLS");
   printf("------------ Willkommen bei Haseo - dem 4 Gewinnt-Programm ------------\n "
		  "======================================================================\n\n");

   printf("1. Modus auswaehlen (Keine Navigation moeglich!)\n\n"
		  "Sie haben die Moeglichkeit sowohl gegen einen menschlichen Gegner, "
		  "wie auch gegen eine KI zu spielen. Entscheiden Sie sich fuer ersteres "
		  "so wird dem Spieler 'X' den ersten Zug zugeteilt. Die Partie endet bei diesem "
		  "Modus, sobald einer der beiden Spieler das Spiel, aufgrund der Regeln "
		  "gewinnt. Diese Regeln gelten ebenso fuer die KI. \n\n\n");

   printf("2. Die Regeln des Strategiespiels 4 Gewinnt (Keine Navigation moeglich!)\n\n");
   printf("Jeder Spieler wirft abwechselnd einen Spielstein in die Spalten von 1 bis 7. "
		  "Die Zeile koennen Sie somit nicht bestimmen - der Spielstein faellt schlicht auf den "
		  "unter ihm liegenden Stein (falls dieser denn vorhanden ist). "
		  "Ziel des Spiels ist es, wie vermutlich schon der Name sugerriert, 4 Spielsteine in eine "
		  "zu bekommen. Ob diese Verbindungen horizontal, vertikal oder diagonal sind, ist irrelevant, denn "
		  "alle gelten als korrekt, und verhelfen dem jeweiligen Spieler zum Sieg."
		  "Sobald ein Spieler das Spiel gewinnt, steht einem die Wahl offen, ob man ein neues Spiel starten, "
		  "oder die Applikation beenden will.\n\n\n");

   printf("3. Navigation der Applikation & des Spiels (Keine Navigation moeglich!)\n\n");
   printf("Sie koennen sich mithilfe der auf Ihrer Tastatur vorhandenen Zahlen-Tasten durch das Programm navigieren. "
		  "Rechts von jedem Navigations-Punkt wird eine Ziffer abgebildet, welche die entsprechende Zahl auf Ihrer Tastatur "
		  "symbolisiert. Wenn Sie sich entscheiden eine Partie zu spielen, koennen Sie hierfuer die Tasten 1 bis 7 verwenden - "
		  "ueber jeder Spalte ist die entsprechende Nummerierun abgebildet, welche mit der Taste auf Ihrer Tastatur konform geht.\n\n\n");

   printf("4. Zurueck zum Hauptmenue\n\n");
   scanf("%d", &back);

   switch(back) {
   case 4:
   system("CLS");
   main();
   break;

   }
		  system("Pause");
return 0;
}
