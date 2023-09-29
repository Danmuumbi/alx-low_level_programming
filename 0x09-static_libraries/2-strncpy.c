#include "main.h"

/**
* _strncpy - Copy a string up to n characters
* @dest: The destination buffer
* @src: The source string to copy
* @n: The maximum number of characters to copy
*
* Return: A pointer to the resulting string `dest`
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

