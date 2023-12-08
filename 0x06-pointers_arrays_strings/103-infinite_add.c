#include "main.h"

/**
* infinite_add - Adds two numbers as strings and stores the result in a buffer
* @n1: The first number as a string
* @n2: The second number as a string
* @r: The buffer to store the result
* @size_r: The size of the buffer 'r'
*
* Return: A pointer to the result (stored in 'r') or 0 if the result cannot
* be stored in 'r' due to its size.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, carry, sum;
	int len1 = 0, len2 = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	if (size_r <= len1 || size_r <= len2)
		return (0);
	i = len1 - 1;
	j = len2 - 1;
	k = 0;
	carry = 0;
	while (i >= 0 || j >= 0 || carry)
	{
        int num1 = (i >= 0) ? (n1[i] - '0') : 0;
        int num2 = (j >= 0) ? (n2[j] - '0') : 0;

        sum = num1 + num2 + carry;

        if (sum >= 10)
        {
            carry = 1;
            sum -= 10;
        }
        else
        {
            carry = 0;
        }

        r[k] = sum + '0';
        k++;
        i--;
        j--;
    }

    r[k] = '\0';

    // Reverse the result in 'r'
    for (i = 0, j = k - 1; i < j; i++, j--)
    {
        char temp = r[i];
        r[i] = r[j];
        r[j] = temp;
    }

    return r;
}

