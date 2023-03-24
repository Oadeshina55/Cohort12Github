#include <stdio.h>

/* To add a variable to another variable, you van use the + operator
 * To declare more than one variable of the same type, use a comma-separated list
 * You can also assign the same value to multiple variables of the same type
 *
 * All C variables must be identified with unique names.
 * These unique names are called identifiers.
 * Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume)
 * Note: It is recommended to use descriptive names in order to create understandable and maintainable code
 */

int main()
{
	int a = 5;
	int b = 5;
	int sum = a + b;
	printf("%d", sum);
	return (0);
}
{
	int x = 7, y = 8, z = 10;
	printf("%d", x + y + z);
	return (0);
}
{
	int p, q, r;
	p = q = r = 20;
	printf("%d", p + q + r);
	return (0);
}


