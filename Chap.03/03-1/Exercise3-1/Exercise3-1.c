#include <stdio.h>

int main(void)
{
	int a;			// Variable declaration(Var declaration); integer variable a
	int b, c;		// Var declaration; 2 integer var b, c
	double da;		// Var declaration; double var da
	char ch;		// Var declaration; character var ch

	a = 10;			// Assignment; set integer 10 into integer var a
	b = a;			// set value of a into int var b
	c = a + 20;		// set addiotion of 10 and value of a into int var c
	da = 3.5;		// set decimal number 3.5 into double var da
	ch = 'A';		// set character 'A' into char var ch

	printf("Value of Variable a : %d\n", a);
	printf("Value of Variable b : %d\n", b);
	printf("Value of Variable c : %d\n", c);
	printf("Value of Variable da : %.1lf\n", da);
	printf("Value of Variable ch : %c\n", ch);

	return 0;
}