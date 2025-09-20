/*
NAME:VICTORIA MUTETHYA MUSILI
REGNO:PA106/G/29037/25
DESCRIPTION:A Program to compute the volume and surface area of a cylinder
*/
#include <stdio.h>
int main()
{
	int radius,height;
	double volume,surfaceArea;
	double pi = 3.142;
	
	//user prompt 
	printf("Enter the radius of the cylinder:-");
	scanf("%d", &radius);
	
	printf("Enter the height of the cylinder:-");
	scanf("%d", &height);
	
	volume = pi * radius * radius * height;
	surfaceArea = (2 * pi * radius * radius) + (2 * pi * radius * height);
	
	//displaying the output
	printf("volume = %.2f\n", volume);
	printf("surface Area = %.2f", surfaceArea);
	
	
	return 0;
}