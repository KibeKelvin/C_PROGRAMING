//SIMPLE-C-PROGRAM//
/*
NAME:KIBE KELVIN
REG NO:CT101/G/24702/24
DESCRIPTION:A PROGRAM TO COMPUTE FARE
DATE:19/10/2025
*/
#include <stdio.h>
double calculateFare(double distance) {
    if (distance <= 0.0) return 0.0;
    const double RATE_PER_KM = 50.0;
    return distance * RATE_PER_KM;
}

/* Example main to demonstrate usage */
int main(void) {
    double km;
    printf("Enter distance traveled (km): ");
    if (scanf("%lf", &km) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    if (km < 0.0) {
        fprintf(stderr, "Distance cannot be negative.\n");
        return 1;
    }

    double fare = calculateFare(km);
    printf("Total fare for %.2f km: KSh. %.2f\n", km, fare);

    return 0;
}
