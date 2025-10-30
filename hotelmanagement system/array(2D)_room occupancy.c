/*
name: victoria mutethya musili
regno: PA106/G/29037/25
DESCRIPTION: A hotel management system 
two dimensional array

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];       
    int i, j;                  
    int occupied, vacant;       

    srand(time(0));             

    printf("=== ROOM OCCUPANCY TRACKER (ONE BRANCH) ===\n\n");

    // Generate and display occupancy data for each floor
    for (i = 0; i < 5; i++) {
        occupied = 0;
        vacant = 0;

        // Generate random 0 or 1 for each room
        for (j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2;   // 0 = vacant, 1 = occupied

            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }

        // Display occupancy summary per floor
        printf("Floor %d -> Occupied Rooms: %d, Vacant Rooms: %d\n", i + 1, occupied, vacant);
    }

    return 0;
}
