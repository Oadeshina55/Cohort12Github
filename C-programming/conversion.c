#include <stdio.h>

/*
 * Sometimes, you have to convert the value of one data type to another type. This is known as type conversion
 * For example, if you try to divide two integers, 5 by 2, you would expect the result to be 2.5. But since we are working with integers (and not floating-point values), the following example will just output 2
 * To get the right result, you need to know how type conversion works
 * There are two types of conversion in c
 * IMPLICIT CONVERSION (Automatically)
 * EXPLICIT CONVERSION (Manually)
 * Implicit conversion is done automatically by the compiler when you assign a value of one type to another.
 * Explicit conversion is done manually by placing the type in parentheses () in front of the value
 * Considering our problem from the example above, we can now get the right result
 *
 * Return 0 Success.
 */

int main()
{
	int a = 5;
	int b = 2;
	float div = (float) a / b;

	printf("div: %f\n", div);

	/*
	 * And since you learned about "decimal precision" in the previous chapter, you could make the output even cleaner by removing the extra zeros (if you like)
	 */

	int c = 7;
	int d = 2;
	float sum = (float) c / d;

	printf("sum: %.1f", sum);
	return (0);
}
