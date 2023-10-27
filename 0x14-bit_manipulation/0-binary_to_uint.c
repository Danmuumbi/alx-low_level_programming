#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: A pointer to the binary string.
 *
 * Return: The converted number, or 0 if there are non-binary characters
 *         or if the string is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = (result << 1) | (b[i] - '0');
	}

	return (result);
}
