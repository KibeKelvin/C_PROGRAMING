//SIMPLE-C-PROGRAM//
/*
NAME:KIBE KELVIN
REG NO:CT101/G/24702/24
DESCRIPTION:A PROGRAM TO COMPUTE TOTAL ELECTRICBILL OF USER
DATE:19/10/2025
*/
#include <stdio.h>
double calculateElectricBill(int units) {
    if (units <= 0) return 0.0;

    double bill = 0.0;

    if (units <= 100) {
        bill = units * 10.0;
    } else if (units <= 200) {
        bill = 100 * 10.0 + (units - 100) * 15.0;
    } else {
        bill = 100 * 10.0 + 100 * 15.0 + (units - 200) * 20.0;
    }

    return bill;
}

// Example main to demonstrate usage
int main(void) {
    int units;
    printf("Enter number of units consumed: ");
    if (scanf("%d", &units) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    if (units < 0) {
        fprintf(stderr, "Units cannot be negative.\n");
        return 1;
    }

    double total = calculateElectricBill(units);
    printf("Total bill for %d units: KSh. %.2f\n", units, total);

    return 0;
}
