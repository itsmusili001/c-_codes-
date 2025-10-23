/*
NAME:VICTORIA MUTETHYA MUSILI
REGNO:PA106/G/29037/25
DESCRIPTION:A program that uses functions to calculate fare per kilometers taken
*/

#include <stdio.h>

//function 
float calculateFare(int distance)
 {
    float fare;
    fare = distance * 50;
    return fare;
 }
 
 // Main function to test calculateFare()
int main() 
{
    float distance, totalFare;

    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    totalFare = calculateFare(distance);

    printf("Total Fare: KSh. %.2f\n", totalFare);

    return 0;
}
    