#include <stdlib.h>

/**
* argstostr - Concatenates all the arguments of your program.
* @ac: The argument count.
* @av: An array of strings containing the arguments.
*
* Return: A pointer to a new string containing the concatenated arguments
*         separated by newlines, or NULL if it fails.
*/
char *argstostr(int ac, char **av)
{
	char *concatenated_args;
	int i, j, k, total_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_length++;
		total_length++; /* Add 1 for the newline character */
	}

	/* Allocate memory for the concatenated string */
	concatenated_args = malloc(total_length + 1);

	if (concatenated_args == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			concatenated_args[k++] = av[i][j];
		concatenated_args[k++] = '\n';
	}

	concatenated_args[k] = '\0';

	return (concatenated_args);
}
