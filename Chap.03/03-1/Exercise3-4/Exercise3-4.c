#include <stdio.h>

int main(void)
{
	unsigned int a;

	a = 4294967295;			// Store huge Postive Number into int var a
	printf("%d\n", a);		// Print with %d
	a = -1;					// Store Negative Number into a
	printf("%u\n", a);		// Print with %u

	return 0;
}