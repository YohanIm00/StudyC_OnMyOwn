#include <stdio.h>

int main(void)
{
	short sh = 32767;					// Reset Maximum Number of Short type variable
	int in = 2147483647;				// Reset Maximum Number of Int type var
	long ln = 2147483647;				// Reset Maximum Number of Long type var
	long long lln = 123451234512345;	// Reset Enormous Value

	printf("Print short type variable: %d\n", sh);
	printf("Print integer type variable: %d\n", in);
	printf("Print long type variable: %ld\n", ln);
	printf("Print long long type variable: %lld\n", lln);	// Print long long type data with %lld

	printf("\nScale of long long data type in this compiler: %dbyte\n", sizeof(long long)); // trivia

	return 0;
}