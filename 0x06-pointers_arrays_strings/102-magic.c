#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: This is the main function that initializes variables
*              and prints the result.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/**
	 * write your line of code here...
	 * * Remember:
	 * - You are not allowed to use the variable a in your new line of code
	 *- You are not allowed to modify the variable p
	 * - You can only write one statement
	 *- You are not allowed to use ,
	 * - You are not allowed to code anything else than the line of expected line
	 *- Your code should be written at line 19, before the ;
	 * - Do not remove anything from the initial code (not even the comments)
	 *- and don't change anything but the line of code you are adding
	 */

	*(p + 2) = 98;  /* This line sets a[2] to 98 */

	printf("a[2] = %d\n", a[2]);
	return (0);
}

