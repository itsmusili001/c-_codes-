/*
NAME:VICTORIA MUTETHYA MUSILI
REGNO:PA106/G/29037/25
DATE:28/9/2025
DESCRIPTION:A program to check the exam eligibility of a student
*/

#include <stdio.h>

int main()
{
	int attendance;
	float average_marks;
	
	//user prompt
	printf("Enter the percentage attendance:");
	scanf("%d", &attendance);
	
	printf("Enter the average marks scored:");
	scanf("%f", &average_marks);
	
	//eligibilty check
	if(attendance>=75 && average_marks>=40)
	{
		printf("Eligible");
	}
	else
	{
		printf("Not Eligible");
	}
	return 0;
}