/* Const variable */

#include <stdio.h>

int main(void)
{
	int income = 0;					// Reset income
	double tax;						// Set tax variable
	const double tax_rate = 0.12;	// Reset tax rate
/*  tax_rate = 0.15;				// even though we put this, compiler just show us error and don't change the value of it.*/	
	income = 456;					// Store value of income
	tax = income * tax_rate;		// Calculate tax
	printf("Your tax is %.1lf.\n", tax);

	return 0;
}