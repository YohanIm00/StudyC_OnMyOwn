#include <stdio.h>

int main(void)
{
	printf("%d\n", 10);				// print 10 on space of %d
	printf("%lf\n", 3.4);			// print 3.4 with showing to the milionths on space of %lf
	printf("%.1lf\n", 3.45);		// print the numbers be shown to tenths(round if off at hundredths)
	printf("%.10lf\n", 3.4);		// print the numbers be shown to ten bilionths

	printf("addtion of %d and %d is %d.\n", 10, 20, 10+20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	return 0;
}