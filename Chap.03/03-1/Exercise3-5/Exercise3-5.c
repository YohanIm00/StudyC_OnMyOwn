#include <stdio.h>

int main(void)
{
	float ft = 1.2345678901234567890;								// Reset value that has lots of effective numbers
	double db = 1.2345678901234567890;

	printf("The Value of float type variable: %.20f\n", ft);		// Print 20 latter numbers than point
	printf("The Value of double type variable: %.20lf\n", db);		// Q. are both %f and %lf have same meaning?

	return 0;
}