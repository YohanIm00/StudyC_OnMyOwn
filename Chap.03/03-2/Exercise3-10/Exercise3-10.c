/*Continuous input with using scanf*/
#include <stdio.h>

int main(void)
{
	int age;										// Age is int var
	double height;									// Height is double var

	printf("Please enter your age and height: ");	// Print notice to input your data
	scanf("%d%lf", &age, &height);					// Enter both data of age and height
	printf("Your age is %d, and height is %.1lfcm.", age, height);	// Print inputs

	return 0;
}