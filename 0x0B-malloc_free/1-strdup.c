#include <stdlib.h>

/**
* _strdup - Duplicate a string in memory.
* @str: The input string to duplicate.
*
* Return: Pointer to a newly allocated duplicated string.
*         NULL if str is NULL or memory allocation fails.
*/
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	/* Calculate the length of the input string */
	while (str[length] != '\0')
		length++;

	/* Allocate memory for the duplicate string */
	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	/* Copy the input string to the duplicate */
	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
