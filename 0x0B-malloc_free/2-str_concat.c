#include <stdlib.h>

/**
 * str_concat - Concatenate two strings.
 * @s1: The first input string.
 * @s2: The second input string.
 *
 * Return: A pointer to a newly allocated string containing s1 followed by s2,
 *         or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;

	/* Check if s1 is NULL and treat it as an empty string */
	if (s1 == NULL)
		s1 = "";

	/* Check if s2 is NULL and treat it as an empty string */
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of s1 and s2 */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* Allocate memory for the concatenated string (+1 for null-terminator) */
	concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	/* Copy the characters from s1 to concatenated */
	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	/* Copy the characters from s2 to concatenated */
	for (j = 0; j < len2; j++)
		concatenated[i + j] = s2[j];

	/* Add null-terminator to the end of the concatenated string */
	concatenated[i + j] = '\0';

	return (concatenated);
}
