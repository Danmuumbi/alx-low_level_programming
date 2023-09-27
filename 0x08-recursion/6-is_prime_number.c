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
        return 0; // 0 and 1 are not prime numbers
    return is_prime_helper(n, 2);
}

/**
 * is_prime_helper - helper function to check if a number is prime
 * @n: the integer to check
 * @divisor: the current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int divisor)
{
    if (divisor >= n)
        return 1; // It's prime if no divisor is found
    if (n % divisor == 0)
        return 0; // Found a divisor other than 1 and itself
    return is_prime_helper(n, divisor + 1);
}

