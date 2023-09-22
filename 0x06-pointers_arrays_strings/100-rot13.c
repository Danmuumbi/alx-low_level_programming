#include "main.h"
#include <stdio.h>

/**
* rot13 - Encode a string using ROT13 substitution.
* @str: The input string to be encoded.
*
* Return: A pointer to the encoded string.
*/

char *rot13(char *str)
{
	char *ptr = str;
	char rot13_result[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; *str != '\0'; str++)
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		{
			*str = rot13_result[*str - ((*str >= 'a') ? 'a' : 'A')];
		}
	}
	return (ptr);
}

