#include <stdio.h>

int main(void)
{
	char ch1 = 'A';		// Reset as a character, stored value is an ASCII value
	char ch2 = 65;		// Reset as an integer that represent ASCII value of 'A'

	printf("ASCII value of %c: %d\n", ch1, ch2);
	printf("The charater has %d as its ASCII value: %c\n", ch2, ch1);

	return 0;
}