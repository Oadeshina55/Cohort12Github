#include <stdio.h>

/*
 * Operators are used to perform operations on variables and values
 * Although the + operator is often used to add together two values
 * it can also be used to add together a variable and a value, or a variable and another variable
 * C divides the operators in the following group
 * Arithmetic operators
 * Assignment operators
 * Comparison operators
 * Logical operators
 * Bitwise Operators
 * Arithmetic operators are used to perform common mathematical operations
 * Assignment operators are used to assign values to variables.
 * Comparison operators are used to compare two values (or variables). This is important in programming, because it helps us to find answers and make decisions.
 * The return value of a comparison is either 1 or 0, which means true (1) or false (0). These values are known as Boolean values
 *
 * Return 0 Success
 */

int main(void)
{
	int x = 50 + 70;
	x += 5;
	int y = 60 + 40;
	y -= 50;
	float z = 45.5 + 65.9;
	z *= 1.5;

	printf("Value of x: %d\n", x);
	printf("Value of y: %i\n", y);
	printf("Value of z: %.2f\n", z);

	printf("	
