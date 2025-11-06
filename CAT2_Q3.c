/*
NAME: KIBE KELVIN
REG NO: CT101/G/24702/24
DESCRIPTION: A C PROGRAM THAT READS A LIST OF INTEGERS FROM A FILE,PROCESSES THE INTEGERS AND WRITES THE RESULTS TO A DIFFERENT FILE.
DATE: 6/11/2025
*/
#include <stdio.h>
#include <stdlib.h>

#define NUM_INTEGERS 10

void writeInputFile() {
    FILE *f = fopen("input.txt", "w");
    if (f == NULL) {
        printf("Error opening input.txt for writing.\n");
        exit(1);
    }
    int i, num;
    printf("Enter %d integers:\n", NUM_INTEGERS);
    for (i = 0; i < NUM_INTEGERS; i++) {
        printf("Integer %d: ", i+1);
        if (scanf("%d", &num) != 1) {
            printf("Invalid input. Exiting.\n");
            fclose(f);
            exit(1);
        }
        fprintf(f, "%d\n", num);
    }
    fclose(f);
}

void processInputFile() {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    if (fin == NULL || fout == NULL) {
        printf("Error opening file(s) for processing.\n");
        if (fin) fclose(fin);
        if (fout) fclose(fout);
        exit(1);
    }
    int num, sum = 0, count = 0;
    while (fscanf(fin, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    if (count == 0) {
        fprintf(fout, "No integers found in input.txt.\n");
    } else {
        double average = (double)sum / count;
        fprintf(fout, "Sum: %d\nAverage: %.2lf\n", sum, average);
    }
    fclose(fin);
    fclose(fout);
}

void displayFilesFormatted() {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "r");
    char buffer[256];
    if (fin == NULL || fout == NULL) {
        printf("Error opening files for displaying contents.\n");
        if (fin) fclose(fin);
        if (fout) fclose(fout);
        exit(1);
    }
    printf("Contents of input.txt:\n");
    while (fgets(buffer, sizeof(buffer), fin)) {
        printf("%s", buffer);
    }
    printf("\nContents of output.txt:\n");
    while (fgets(buffer, sizeof(buffer), fout)) {
        printf("%s", buffer);
    }
    fclose(fin);
    fclose(fout);
}

int main() {
    writeInputFile();
    processInputFile();
    displayFilesFormatted();
    return 0;
}
