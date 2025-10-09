/*
NAME:KIBE KELVIN
REG NO:CT101/G/24702/24
DATE:08/10/2025
*/
#include <stdio.h>
#include <string.h>

int main() {
    char password[20];

    do {
        printf("Enter password: ");
        scanf("%s", password);
    } while (strcmp(password, "2004") != 0);

    printf("Access Granted\n");
    return 0;
}
