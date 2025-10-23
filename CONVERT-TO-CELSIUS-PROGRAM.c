//SIMPLE-C-PROGRAM//
/*
NAME:KIBE KELVIN
REG NO:CT101/G/24702/24
DESCRIPTION:A PROGRAM CONVERT TEMPERATURE FROM FAHRENHEIT TO CELSIUS
DATE:20/10/2025
*/
#include <stdio.h>
double convertToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

/* Example main to demonstrate usage */
int main(void) {
    double f;
    printf("Enter temperature in Fahrenheit: ");
    if (scanf("%lf", &f) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    double c = convertToCelsius(f);
    printf("%.2f F = %.2f C\n", f, c);

    return 0;
}
