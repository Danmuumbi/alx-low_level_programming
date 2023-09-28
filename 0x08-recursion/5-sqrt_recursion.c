#include "main.h"

/**
* _sqrt - Helper function to find the square root using recursion
* @n: Number to find the square root of
* @guess: Current guess for the square root
*
* Return: Square root of n if found, -1 if not found
*/
int _sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (_sqrt(n, guess + 1));
}

/**
* _sqrt_recursion - Returns the natural square root of a number
* @n: Number to find the square root of
*
* Return: Square root of n if found, -1 if not found
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

