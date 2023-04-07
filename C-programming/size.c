#include <stdio.h>
#include <stdlib.h>

/**
 * print the size of variables
 * int, char, float, double
 *
 * Return 0 Success
 */
int main()
{
	int myInt;
	float myFloat;
	double myDouble;
	char myChar;

	printf("Size of int = %lu\n", sizeof(myInt));
	printf("Size of float = %lu\n", sizeof(myFloat));
	printf("Size of double = %lu\n", sizeof(myDouble));
	printf("Size of char = %lu\n", sizeof(myChar));
	return (0);
}
