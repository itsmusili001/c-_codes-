/*
NAME:VICTORIA MUTETHYA MUSILI
REGNO:PA106/G/29037/25
DESCRIPTION:A C program that implements the age of a customer and state whether the customer is qualified or not for a loan
*/

#include <stdio.h>
int main()
{
	int age;
	float income;
	
	//user prompt
	printf("USER DETAILS\n");
	printf("Enter your age:-");
	scanf("%d", &age);
	
	printf("Enter your monthly income:-");
	scanf("%f", &income);
	
	//computing two if functions
	if(age >= 21 && income >= 21000)
	{
		printf("congratulations you qualify for the loan");
	}
	else
	{
		printf("Unfortunately,we are unable to offer you a loan at this time");
	}
	
	return 0;
}