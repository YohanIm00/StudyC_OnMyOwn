#include <stdio.h>
#include <string.h>						//include string.h files that can deal with strings

int main(void)
{
	char fruit[20] = "strawberry";		// Reset chat array fruit as strawberry

	printf("%s\n", fruit);				// print strawberry
	strcpy(fruit, "banana");			// copy and paste banana into fruit
	printf("%s\n", fruit);				// print banana

	return 0;
}