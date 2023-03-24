#include <stdio.h>

/* In this file i want to assign a variable
 * It can be declared immediately or later
 * You can also declare a variable without assigning the value, and assign the value later
 * You learned from the output chapter that you can output values/print text with the printf() function
 * In many other programming languages (like Python, Java, and C++), you would normally use a print function to display the value of a variable. However, this is not possible in C
 * To output variables in C, you must get familiar with something called format specifiers.
 * To print other types, use %c for char and %f for float
 * Return 0 Always.
 */

int main()
{
	int Age = 27;
	float Height = 5.7;
	char Grade = 'B';
	char Name = 'Samuel';

	printf("My Age: %d\n", Age);
	printf("My Height: %f\n", Height);
	printf("My Grade: %c\n", Grade);
	ptintf("My Name: %c", Name);
	return (0);
}
