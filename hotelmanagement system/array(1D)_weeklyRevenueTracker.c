/*
name: victoria mutethya musili
regno: PA106/G/29037/25
DESCRIPTION: A hotel management system 
one dimensional array

*/

#include <stdio.h>
//weekly revenue tracker
int main() {
    float revenue[7];       
    float total = 0.0;      
    float average;        
    int i;

    printf("=== WEEKLY REVENUE TRACKER ===\n");

    
    for (i = 0; i < 7; i++) {
        printf("Enter revenue for Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];   
    }

    // Calculate average daily revenue
    average = total / 7.0;

    // Display the results
    printf("\n--- Revenue Summary ---\n");
    printf("Total Weekly Revenue: %.2f\n", total);
    printf("Average Daily Revenue: %.2f\n", average);

    return 0;
}
