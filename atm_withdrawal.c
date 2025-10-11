/*
NAME:VICTORIA MUTETHYA MUSILI
REGNO:PA106/G/29037/25
Description:a progam that displays 


*/

#include <stdio.h>

int main() {
    float balance, withdraw;

    // Initialization
    printf("Enter your starting account balance: ");
    scanf("%f", &balance);

    // while loop 
    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance -= withdraw; // deduct withdrawal from balance
        printf("Current balance: %.2f\n", balance);

        if (balance <= 0) {
            printf("Insufficient funds. Transaction stopped.\n");
        }
    }

    return 0;
}
