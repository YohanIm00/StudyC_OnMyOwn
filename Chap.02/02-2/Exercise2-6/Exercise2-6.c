#include <stdio.h>

int main(void)
{
	printf("%.1lf\n", 1e6);			// print exponent formed real nubmer as decimal formed
	printf("%.7lf\n", 3.14e-5);		// print decimal number to tenmilionths
	printf("%le\n", 0.0000314);		// print decimal formed real number as exponent formed
	printf("%.2le\n", 0.0000314);	// print it shown to hundredths with decimal number form

	return 0;
}