/*
NAME:VICTORIA MUTETHYA MUSILI
REGNO:PA106/G/29037/25
DATE:28/9/2025
DESCRIPTION:A program that computes the total water bill for a user
*/

#include <stdio.h>
int main()
{
	float units_consumed, total_bill;
	 printf("Enter the number of water units consumed:");
	 scanf("%f", &units_consumed);
	 
	 //if else computation 
	 if (units_consumed<=30)
	 {
	 	
	 	total_bill= 20 * units_consumed;
	 }
	 else if (units_consumed>30 && units_consumed<=60)
	 {
	 	total_bill = 25 * units_consumed;
	 }
	 else 
	 {
	 	total_bill = 30 * units_consumed;
	 }
	 printf("The total water bill is KES:%.2f", total_bill);
	return 0;
}