/*
NAME:VICTORIA MUTETHYA MUSILI
REGNO:PA106/G/29037/25
DATE:02/10/25
DESCRIPTION:A program to compute mobile data purchase 
*/

#include <stdio.h>

int main() {
    int choice;

    // Display the menu
    printf("Mobile Data Bundle Buy\n");
    printf("Option\tBundle\tCost (KES)\n");
    printf("1\t100 MB\t50\n");
    printf("2\t500 MB\t200\n");
    printf("3\t1 GB\t350\n");
    printf("4\t2 GB\t600\n");

    // Ask the user for their choice
    printf("\nEnter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice) 
	{
        case 1:
            printf("you have chosen 100 MB bundle). Cost: KES 50\n");
            break;
        case 2:
            printf(" have chosen 500MB package. Cost: KES 200\n");
            break;
        case 3:
           printf("You have chosen 1 GB package. Cost: KES 350\n");
            break;
        case 4:
            printf("have chosen 2 GB bundle. Cost: KES 600\n");
            break;
        default:
            printf("Invalid choice! Please select between 1 and 4.\n");
    }

return 0;
}
