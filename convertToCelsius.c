/*NAME:VICTORIA MUTETHYA MUSILI
REGNO:PA106/G/29037/25
DESCRIPTION:A program that uses functions to convert Fahrenheit to Celsius
*/

#include <stdio.h>
float convertToCelsius(float fahrenheit) 
{
    float celsius;
    celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

// Main function to test convertToCelsius()
int main() 
{
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = convertToCelsius(fahrenheit);

    printf("Temperature in Celsius: %.2fC\n", celsius);

    return 0;
}



