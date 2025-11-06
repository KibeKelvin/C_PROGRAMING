/*
NAME:KIBE KELVIN
REG NO:CT101/G/24702/24
DATE:6/11/2025
DESCRIPTION:A 2D ARRAY TO PRINT ELEMENTS IN TWO ROWS AND TWO COLUMNS.
*/
#include <stdio.h>

int main() {
    int scores[2][2] = {
        {65, 92},
        {84, 72}
    };
    printf("Elements of the array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ",scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}
