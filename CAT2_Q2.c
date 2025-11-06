/*
NAME:KIBE KELVIN
REG NO:CT101/G/24702/24
DATE:6/11/2025
DESCRIPTION:A C PROGRAM THAT REQUESTS THE USER TO ENTER HOURS WORKED IN A WEEK AND THE HOURLY WAGE TO PRINT GROSS PAY,TAXES,AND THE NET PAY
*/
#include <stdio.h>

#define STANDARD_HOURS 40
#define OVERTIME_RATE 1.5

double calculateTaxes(double gross) {
    double tax = 0.0;
    if (gross <= 600)
        tax = 0.15 * gross;
    else
        tax = 0.15 * 600 + 0.20 * (gross - 600);
    return tax;
}

int main() {
    double hours, wage, gross, taxes, net_pay;
    printf("Enter hours worked in a week: ");
    scanf("%lf", &hours);
    printf("Enter hourly wage: ");
    scanf("%lf", &wage);

    if (hours <= STANDARD_HOURS)
        gross = hours * wage;
    else
        gross = STANDARD_HOURS * wage + (hours - STANDARD_HOURS) * wage * OVERTIME_RATE;

    taxes = calculateTaxes(gross);
    net_pay = gross - taxes;

    printf("Gross pay: $%.2lf\n", gross);
    printf("Taxes: $%.2lf\n", taxes);
    printf("Net pay: $%.2lf\n", net_pay);

    return 0;
}
