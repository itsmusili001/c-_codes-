/*
NAME:VICTORIA MUTETHYA MUSILI
REG NO:PA106/G/29037/25
DESCRIPTION:PROGRAM THAT PROMPTS THE USER TO ENTER AND DISPLAY 
(HEIGHT,ID NUMBER,BANK BALANCE)
*/

#include <stdio.h>
int main()
{
	int height,IDNo,BankBalance;
	printf("Enter your height-");
	scanf("%d",&height);
	
	printf("Enter your Id number-");
	scanf("%d", &IDNo);
	
	printf("enter your bank balance-");
	scanf("%d", &BankBalance);
	
	printf("height: %d\n", height );
	printf("IDNo: %d\n", IDNo);
	printf("Bank Balance: %d\n", BankBalance);
	
	
	return 0;
}