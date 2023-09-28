#include "main.h"

/**
* is_prime_number - checks if a number is prime
* @n: the integer to check
*
* Return: 1 if n is prime, 0 otherwise
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number(n, 2));
}

/**
* is_prime_helper - helper function to check if a number is prime
* @n: the integer to check
* @divisor: the current divisor to check
*
* Return: 1 if n is prime, 0 otherwise
*/
int is_prime_number(int n, int divisor)
{
	if (divisor >= n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime_number(n, divisor + 1));
}
