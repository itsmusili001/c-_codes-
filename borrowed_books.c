/*
name: victoria mutethya musili
regno: PA106/G/29037/25
DESCRIPTION:a C file program of a librarian for storing book records
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char title[200];
    char choice;

    
    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("=== LIBRARY BOOK BORROWING RECORD ===\n");

    do {
        printf("\nEnter the book title: ");
        fflush(stdin);  
        fgets(title, sizeof(title), stdin);

        
        fprintf(file, "%s", title);

        printf("Book title stored successfully!\n");

        
        printf("Do you want to add another book title? (Y/N): ");
        scanf(" %c", &choice);
        getchar();  

    } while (choice == 'Y' || choice == 'y');

    fclose(file);
    printf("\nAll entries have been saved to borrowed_books.txt\n");

    return 0;
}
