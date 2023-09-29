#include "main.h"

/**
* _strncat - Concatenate two strings, using at most n bytes from src
* @dest: The destination string
* @src: The source string to append to dest
* @n: The maximum number of bytes from src to append
*
* Return: A pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr)
		ptr++;

	while (*src && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	*ptr = '\0';

	return (dest);
}

