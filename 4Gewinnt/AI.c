#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include "feld.h"
#include "back.h"
#include "Initialisierung.h"
#include "estimate.h"


#define B ' '

extern char brett[6][7];

extern int z1, z2;

int artificalIntelligence() {

    int t;
    int u;
    int zeichen = 'O';
    int symbol = 'X';
    int sonst;
    int z;

    AusgabeCPU();
    Sleep(3000);

	 for(t = 5; t >= 0; t--) { // Horizontal - Spiel gewinnen (von Links nach Rechts ... )
	              for(u = 0; u < 7; u++) {
	                  if(brett[t][u] == zeichen) {
	                      if(brett[t][u+1] == zeichen) {
	                          if(brett[t][u+2] == zeichen) {
	                              if(brett[t][u+3] == ' ') {
	                                  brett[t][u+3] = zeichen;

break;



	                              }
	                          }
	                      }
	                  }
	              }

	 }

	 goback();

	  if(z2 < z1) {
	           for(t = 5; t >= 0; t--) {  // Horizontal - Spiel gewinnen (von Rechts nach Links ... )
	               for(u = 6; u > -1; u--) {
	                   if(brett[t][u] == zeichen) {
	                       if(brett[t][u-1] == zeichen) {
	                           if(brett[t][u-2] == zeichen) {
	                               if(brett[t][u-3] == ' ') {
	                                   brett[t][u-3] = zeichen;

break;


	                               }
	                           }
	                       }
	                   }
	               }
	           }

	       }

	       goback();

    if(z2 < z1) { // Vertikal - Spiel gewinnen
        for(u = 0; u < 7; u++) {
        for(t = 5; t >= 0; t--) {

                if(brett[t][u] == zeichen) {
                    if(brett[t-1][u] == zeichen) {
                        if(brett[t-2][u] == zeichen) {
                            if(brett[t-3][u] == ' ') {

                                brett[t-3][u] = zeichen;
break;


                            }
                        }
                    }
                }
            }
        }
    }

    goback();

if(z2 < z1) {
            for(t = 5; t >= 0; t--) { // Diagonal - Spiel gewinnen von Links unten nach Rechts oben
                 for(u = 0; u < 7; u++) {
                     if(brett[t][u] == zeichen) {
                         if(brett[t-1][u+1] == zeichen) {
                             if(brett[t-2][u+2] == zeichen) {
                                 if(brett[t-3][u+3] == ' ') {
                                     //if(brett[t+1][u-1] != ' ') {
                                         if(brett[t-2][u+3] != ' ') {
                                     brett[t-3][u+3] = zeichen;
break;


                                     }

                                 }
                             }
                         }
                     }
                 }
             }
            }

goback();

	       if(z2 < z1) {
	          for(t = 5; t >= 0; t--) { // Diagonal - Spiel gewinnen von Rechts unten nach Links oben
	               for(u = 0; u < 7; u++) {
	                   if(brett[t][u] == zeichen) {
	                       if(brett[t-1][u-1] == zeichen) {
	                           if(brett[t-2][u-2] == zeichen) {
	                               if(brett[t-3][u-3] == ' ') {
	                                   //if(brett[t+1][u-1] != ' ') {
	                                       if(brett[t-2][u-3] != ' ') {
	                                   brett[t-3][u-3] = zeichen;
break;


	                                   }

	                               }
	                           }
	                       }
	                   }
	               }
	           }
	          }
goback();



if(z2 < z1) {
    for(t = 5; t >= 0; t--) { //Horizontal
        for(u = 0; u < 7; u++) {
            if(brett[t][u] == symbol) {
                if(brett[t][u+1] == symbol) {
                    if(brett[t][u+2] == symbol) {
                        if(brett[t][u+3] == ' ') {
                            if(brett[t][u+3] != brett[t+1][u+3]) {
                            if(brett[t+1][u+3] != ' ') {
                            brett[t][u+3] = zeichen;
break;
                            }
                            }
                        }
                    }
                }
            }
        }
    }
}

goback();

if(z2 < z1) {
    for(t = 5; t >= 0; t--) {  // Horizontal
        for(u = 6; u > -1; u--) {
            if(brett[t][u] == symbol) {
                if(brett[t][u-1] == symbol) {
                    if(brett[t][u-2] == symbol) {
                        if(brett[t][u-3] == ' ') {
                                if(brett[t-1][u-3] != ' '){
                                brett[t][u-3] = zeichen;
                        break;
                            /*if(brett[t][u-3] != brett[t+1][u-3]) {
                                if(brett[t][u+1] == zeichen) {
                                    break;
                                }
                                if(brett[t+1][u-3] != ' ') {

                            brett[t][u-3] = zeichen;
                                }
                            }*/
                        }
                    }
                }
            }
        }
    }

}
}

goback();

if(z2 < z1) { // VERTIKAL
    for(u = 0; u < 7; u++) {
    for(t = 5; t >= 0; t--) {

            if(brett[t][u] == symbol) {
                if(brett[t-1][u] == symbol) {
                    if(brett[t-2][u] == symbol) {
                        if(brett[t-3][u] == ' ') {

                            brett[t-3][u] = zeichen;
break;

                        }
                    }
                }
            }
        }
    }
}

goback();
if(z2 < z1) {
   for(t = 5; t >= 0; t--) { // First Diagonal
        for(u = 0; u < 7; u++) {
            if(brett[t][u] == symbol) {
                if(brett[t-1][u+1] == symbol) {
                    if(brett[t-2][u+2] == symbol) {
                        if(brett[t-3][u+3] == ' ') {
                            //if(brett[t+1][u-1] != ' ') {
                                if(brett[t-2][u+3] != ' ') {
                            brett[t-3][u+3] = zeichen;
                            break;
                            }

                        }
                    }
                }
            }
        }
    }
   }

goback();

if(z2 < z1) {
   for(t = 5; t >= 0; t--) { // First Diagonal
        for(u = 0; u < 7; u++) {
            if(brett[t][u] == symbol) {
                if(brett[t-1][u-1] == symbol) {
                    if(brett[t-2][u-2] == symbol) {
                        if(brett[t-3][u-3] == ' ') {
                            //if(brett[t+1][u-1] != ' ') {
                                if(brett[t-2][u-3] != ' ') {
                            brett[t-3][u-3] = zeichen;
                            break;
                            }

                        }
                    }
                }
            }
        }
    }
   }



goback();


if(z2 < z1) {
time_t start; //Speichert die aktuelle Zeit als Integer
time(&start);
srand((unsigned int)start);
int wert = rand() % 6 + 1; //Ermittelt Wert zwischen 0 und 6.

    for(z = 5; z >= 0; z--) {
            if(brett[z][wert] == ' ') {
                break;
            }

    }

brett[z][wert] = zeichen;


}


        system("cls");
		feld();
		estimateCPU();

    return 0;
}
