#include <stdio.h>

/*
 * The data type specifies the size and type of information the variable will store
 * In this tutorial, we will focus on the most basic ones
 * int 2 or 4 bytes Stores whole numbers, without decimals
 * float 4 bytes Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
 * double 8 bytes Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
 * char 1 byte Stores a single character/letter/number, or ASCII values
 *
 * On %here we'll also learn about other format specifiers,
 * %i or %d for int
 * %c for char
 * %f for float
 * %lf for double
 * %s for stings
 * Return 0 Success.
 */

int main()
{
	int a = 5;
	float b = 7.2;
	double c = 16.752;

	printf("%d\n", a);
	printf("%.2f\n", b);
	print("%.lf", c);
	return (0);
}
