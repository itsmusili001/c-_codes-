/*
name: victoria mutethya musili
regno: PA106/G/29037/25
DESCRIPTION: A hotel management system 
three dimensional array

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//3d array multiple branches
int main() {
    int chain[3][5][10];  
    int i, j, k;          
    int totalOccupied = 0;
    int totalVacant = 0; 

    srand(time(0)); // Seed random number generator

    printf("=== MULTIPLE BRANCHES OCCUPANCY TRACKER ===\n\n");

    // Generate random occupancy and count totals
    for (i = 0; i < 3; i++) { // Branches
        printf("Branch %d:\n", i + 1);
        for (j = 0; j < 5; j++) { // Floors
            int occupied = 0, vacant = 0;
            for (k = 0; k < 10; k++) { // Rooms
                chain[i][j][k] = rand() % 2; // 1 = occupied, 0 = vacant
                if (chain[i][j][k] == 1)
                    occupied++;
                else
                    vacant++;
            }
            totalOccupied += occupied;
            totalVacant += vacant;
            printf("  Floor %d -> Occupied: %d, Vacant: %d\n", j + 1, occupied, vacant);
        }
        printf("\n");
    }

    printf("=== SUMMARY ACROSS ALL BRANCHES ===\n");
    printf("Total Occupied Rooms: %d\n", totalOccupied);
    printf("Total Vacant Rooms: %d\n", totalVacant);
    printf("Total Rooms: %d\n", 3 * 5 * 10);

    return 0;
}
