/*
NAME:KIBE KELVIN
REG NO:CT101/G/24702/24
DATE:27/10/2025
DESCRIPTION:A 2D ARRAY TO TRACK ROOM OCCUPANCY PER FLOOR IN A BUILDING WITH 5 FLOORS
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FLOORS 5
#define ROOMS 10

int main() {
    int occupancy[FLOORS][ROOMS];
    int floor, room;
    int occupied, vacant;

    srand(time(NULL));

    for (floor = 0; floor < FLOORS; floor++) {
        for (room = 0; room < ROOMS; room++) {
            occupancy[floor][room] = rand() % 2;
        }
    }
    printf("Floor\tOccupied\tVacant\n");
    printf("-------------------------------\n");
    for (floor = 0; floor < FLOORS; floor++) {
        occupied = 0;
        vacant = 0;
        for (room = 0; room < ROOMS; room++) {
            if (occupancy[floor][room] == 1) {
                occupied++;
            } else {
                vacant++;
            }
        }
        printf("%d\t%d\t\t%d\n", floor + 1, occupied, vacant);
    }

    return 0;
}
