/*
NAME:KIBE KELVIN
REG NO:CT101/G/24702/24
DATE:3/11/2025
DESCRIPTION:A C PROGRAM THAT CALCULATES AND DISPLAYS THE TOTAL SALES FOR THE DAY.
*/
#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0.0;
    int n, i;

    file = fopen("sales.txt", "a");
    if (file == NULL) {
        printf("Error: Could not open sales.txt for writing\n");
        return 1;
    }

    printf("Enter number of transactions to record: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter amount for transaction %d: ", i + 1);
        scanf("%f", &amount);
        fprintf(file, "%.2f\n", amount);
    }

    fclose(file);
    printf("\nTransactions successfully recorded in sales.txt!\n\n");

    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open sales.txt for reading\n");
        return 1;
    }

    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(file);

    printf("Total sales for the day: %.2f\n", total);

    return 0;
}
