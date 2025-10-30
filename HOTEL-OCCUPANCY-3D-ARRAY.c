/*
NAME:KIBE KELVIN
REG NO:CT101/G/24702/24
DATE:28/10/2025
DESCRIPTION:A 3D ARRAY TO CALCULATE AND DISPLAY TOTAL NUMBER OF OCCUPIED ROOMS ACROSS 3 BRANCHES WITH 10 FLOORS EACH
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int total_occupied = 0;

    srand(time(NULL));

    for (int b = 0; b < 3; b++) {
        for (int f = 0; f < 5; f++) {
            for (int r = 0; r < 10; r++) {
                chain[b][f][r] = rand() % 2; // 0 or 1
                total_occupied += chain[b][f][r];
            }
        }
    }

    printf("Total number of occupied rooms across all branches: %d\n", total_occupied);

    return 0;
}
