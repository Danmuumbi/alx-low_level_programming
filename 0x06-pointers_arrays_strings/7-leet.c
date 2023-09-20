#include "main.h"

/**
* leet - Encode a string into 1337
* @str: The input string
*
* Return: A pointer to the resulting string
*/
char *leet(char *str)
{
	char *ptr = str;
	char leet_map[] = "aAeEoOtTlL";
	char leet_replace[] = "4433007711";

	while (*ptr != '\0')
	{
		int i;
		for (i = 0; leet_map[i] != '\0'; i++)
		{
			if (*ptr == leet_map[i])
			{
				*ptr = leet_replace[i];
				break;
			}
		}
		ptr++;
	}

	return (str);
}

