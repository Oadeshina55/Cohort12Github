#include <stdio.h>

/*
 * If you don't want others (or yourself) to change existing variable values, you can use the const keyword
 * This will declare the variable as "constant", which means unchangeable and read-only
 * ou should always declare the variable as constant when you have values that are unlikely to change
 * NOTE: When you declare a constant variable, it must be assigned with a value
 * Another thing about constant variables, is that it is considered good practice to declare them with uppercase. It is not required, but useful for code readability and common for C programmers
 *
 * Return 0
 */

int main(void)
{
	const int MINUTESPERHOUR = 60;
	const float PI = 3.142;
	const int BIRTHYEAR = 1960;

	printf("MINUTES PER HOUR: %d\n", MINUTESPERHOUR);
	printf("PI: %.3f\n", PI);
	printf("BIRTHYEAR: %i", BIRTHYEAR);
	return (0);
}
