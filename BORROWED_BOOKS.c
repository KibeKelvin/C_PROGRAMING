/*
NAME:KIBE KELVIN
REG NO:CT101/G/24702/24
DATE:3/11/2025
DESCRIPTION:A C PROGRAM THAT ALLOWS A LIBRARIAN TO ENTER BOOK TITLES AND STORE EACH TITLE IN A TEXT FILE NAMED BORROWED_BOOKS.TXT
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char title[512];
    FILE *fp = fopen("borrowed_books.txt", "a");
    if (!fp) {
        perror("Error opening borrowed_books.txt");
        return 1;
    }

    printf("Enter book titles (leave empty and press Enter to finish):\n");

    while (1) {
        printf("Title: ");
        if (!fgets(title, sizeof(title), stdin)) {
            break;
        }

        size_t len = strlen(title);
        if (len > 0 && title[len - 1] == '\n') {
            title[len - 1] = '\0';
            --len;
        }

        if (len == 0) {
            break;
        }

        if (fprintf(fp, "%s\n", title) < 0) {
            perror("Error writing to file");
            fclose(fp);
            return 1;
        }
        fflush(fp);

        printf("Saved: \"%s\"\n", title);
    }

    fclose(fp);
    printf("Done. All entries stored in borrowed_books.txt\n");
    return 0;
}
