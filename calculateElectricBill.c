/*
NAME:VICTORIA MUTETHYA MUSILI
REGNO:PA106/G/29037/25
DESCRIPTION:A program that uses functions to calculate the elictricity bill
*/

#include <stdio.h>

//function 
float calculateElectricBill(int units)
 {
    float bill;
    
    if(units<=100)
	{
		bill= units * 10;
	}
    else if (units<=200)
	{
	bill = (100 * 10) + ((units - 100) * 15);
    } 
	else 
	{
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;	
	}

	//main function
	int main()
	{
		int units;
        float totalBill;
        
        printf("Enter the number of units consumed: ");
        scanf("%d", &units);

        totalBill = calculateElectricBill(units);

        printf("Total Electric Bill: KSh. %.2f\n", totalBill);

		return 0;
	}