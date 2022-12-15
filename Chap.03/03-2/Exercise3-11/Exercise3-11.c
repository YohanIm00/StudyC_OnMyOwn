/*Input charater and string*/
#include <stdio.h>

int main(void)
{
	char grade;
	char name[20];

	printf("Please enter your grade: ");
	scanf("%c", &grade);
	printf("Please enter your name: ");
	scanf("%s", name);
	printf("%s's grade is %c.\n", name, grade);

	return 0;
}