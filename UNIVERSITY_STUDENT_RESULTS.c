/*
NAME:KIBE KELVIN
REG NO:CT101/G/24702/24
DATE:3/11/2025
DESCRIPTION:A C PROGRAM THAT READS AND DISPLAYS THE NAME AND MARKS OF STUDENTS IN A UNIVERSITY.
*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char regNo[20];
    float totalMarks;
};

int main() {
    FILE *file;
    struct Student s;
    int n, i;
    char choice;

    file = fopen("results.dat", "ab");
    if (file == NULL) {
        printf("Error: Could not open results.dat for writing\n");
        return 1;
    }

    printf("Enter number of students to record: ");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        printf("\nEnter name: ");
        fgets(s.name, sizeof(s.name), stdin);

        printf("Enter registration number: ");
        fgets(s.regNo, sizeof(s.regNo), stdin);

        printf("Enter total marks: ");
        scanf("%f", &s.totalMarks);
        getchar();

        fwrite(&s, sizeof(struct Student), 1, file);
    }

    fclose(file);
    printf("\nRecords saved successfully to results.dat!\n\n");

    file = fopen("results.dat", "rb");
    if (file == NULL) {
        printf("Error: Could not open results.dat for reading\n");
        return 1;
    }

    printf("Student Examination Results:\n");
    printf("----------------------------------\n");

    while (fread(&s, sizeof(struct Student), 1, file) == 1) {
        printf("Name: %s", s.name);
        printf("Registration No: %s", s.regNo);
        printf("Total Marks: %.2f\n", s.totalMarks);
        printf("----------------------------------\n");
    }

    fclose(file);
    return 0;
}
