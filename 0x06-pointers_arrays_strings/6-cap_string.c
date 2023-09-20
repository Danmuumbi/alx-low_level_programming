#include "main.h"
#include <stdbool.h>

/**
* is_separator - Check if a character is a word separator
* @c: The character to check
*
* Return: true if c is a separator, false otherwise
*/
bool is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
			return (true);
	}

	return (false);
}

/**
* cap_string - Capitalize all words of a string
* @str: The input string
*
* Return: A pointer to the resulting string
*/
char *cap_string(char *str)
{
	bool new_word = true;
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (is_separator(*ptr))
		{
			new_word = true;
		}
		else if (new_word && *ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
			new_word = false;
		}
		else
		{
			new_word = false;
		}

		ptr++;
	}

	return (str);
}

