#include <stdio.h>

int main(void)
{
	printf("Be happy\n");				// break line(\n) after print "Be happy"
	printf("12345678901234567890\n");	// break line(\n) after print 10 numbers on screen
	printf("MY\tfrined\n");				
	// print "friend" then break line(\n) after print "My" and move tap space(\t)
	printf("Goot\bd\tchance\n");			// move the curser to one left letter(\b) after print "Goot"
	// then change "t" to "d" thus move tap space(\t), lastly, print "chance" and break line(\n)
	printf("Cow\rW\a\n");
	// move to forward(\r), change C to W, make a ringing sound(\a), and break line(\n)

	return 0;
}