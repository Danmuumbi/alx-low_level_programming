#include "main.h"

/**
* string_toupper - Convert all lowercase letters of a string to uppercase
* @str: The input string
*
* Return: A pointer to the resulting string
*/
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr = *ptr - 32;
		ptr++;
	}

	return (str);
}

