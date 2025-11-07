/*
name: victoria mutethya musili
regno: PA106/G/29037/25
DESCRIPTION:a C file program of a librarian for storing book records
*/



#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    float amount, totalSales = 0.0;

    // Open the file for reading
    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open sales.txt file.\n");
        return 1;
    }

    printf("=== DAILY SALES SUMMARY ===\n\n");

    // Read each transaction amount from the file
    while (fscanf(file, "%f", &amount) == 1) {
        totalSales += amount;
    }

    // Display the total sales
    printf("Total Sales for the Day: KSh %.2f\n", totalSales);

    // Close the file properly
    fclose(file);

    printf("\nFile closed successfully.\n");

    return 0;
}
