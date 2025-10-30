/*
NAME:KIBE KELVIN
REG NO:CT101/G/24702/24
DATE:27/10/2025
DESCRIPTION:A 1D ARRAY TO RECORD A HOTELS WEEKLY REVENUE
*/
#include <stdio.h>

int main() {
    float revenue[7];
    float total = 0.0, average;
    int i;

    printf("Enter the revenue for each day of the week (7 days):\n");
    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7;

    printf("\nTotal weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n", average);

    return 0;
}
