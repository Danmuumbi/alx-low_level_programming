#include <stdio.h>
#include <stdlib.h>

/**
* count_words - Counts the number of words in a string.
* @str: The input string.
*
* Return: The number of words.
*/
int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			if (in_word)
				in_word = 0;
		}
		else
		{
			if (!in_word)
			{
				count++;
				in_word = 1;
			}
		}
		str++;
	}

	return (count);
}

/**
* strtow - Splits a string into words.
* @str: The input string.
*
* Return: A pointer to an array of strings (words), or NULL if it fails.
*/
char **strtow(char *str)
{
	int j = 0;
	if (str == NULL || *str == '\0')
		return (NULL);

	int num_words = count_words(str);
	if (num_words == 0)

		return (NULL);

	char **words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)

		return (NULL);

	int i = 0;
	while (*str)

	{
		if (*str == ' ')
		{
			str++;
		}
		else
		{
			int word_len = 0;
			while (str[word_len] != ' ' && str[word_len] != '\0')
				word_len++;

			words[i] = malloc((word_len + 1) * sizeof(char));
			if (words[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}

			for (j = 0; j < word_len; j++)
				words[i][j] = *str++;

			words[i][word_len] = '\0';
			i++;
		}
	}

	words[i] = NULL;
	return (words);
}
