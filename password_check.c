/*
NAME:VICTORIA MUTETHYA MUSILI
REGNO:PA106/G/29037/25
Description:a do while loop for entering password

*/

#include <stdio.h>

int main() {
    int password;

    do {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password != 1234) {
            printf("Incorrect password. Try again.\n");
        }

    } while (password != 1234);

    printf("Access Granted.\n");

    return 0;
}
