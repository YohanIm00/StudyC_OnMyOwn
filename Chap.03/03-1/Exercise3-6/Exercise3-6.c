#include <stdio.h>

int main(void)
{
	char fruit[20] = "µş±â";										// Declare char array and Reset string
	
	printf("In Korean, strawberry is: %s\n", fruit);				// Print string that stored as an array name
	printf("In Korean, strawberry jam is: %s%s\n", fruit, "Àë");	// Print character constant directly by %s

	return 0;
}