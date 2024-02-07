#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include "setzen.h"



#define B ' '

extern char brett[6][7];


int v, w, z1, z2;

int goback() {
int zeichen = 'O';
int symbol = 'X';

z1 = 0;
z2 = 0;


for(v = 5; v >= 0; v-- ) {
    for(w = 0; w < 7; w++) {
        if(brett[v][w] == symbol) {
            z1++;
        }
        if(brett[v][w] == zeichen) {
            z2++;
        }
    }
}
return 0;
}
