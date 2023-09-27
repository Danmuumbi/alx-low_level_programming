#include "main.h"

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number for which to calculate the square root
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;
    else if (n == 0 || n == 1)
        return n;
    else
        return _sqrt_helper(n, 1);
}

/**
 * _sqrt_helper - helper function to calculate square root using recursion
 * @n: the number for which to calculate the square root
 * @guess: the current guess for the square root
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int guess)
{
    if (guess * guess == n)
        return guess;
    else if (guess * guess > n)
        return -1;
    else
        return _sqrt_helper(n, guess + 1);
}

