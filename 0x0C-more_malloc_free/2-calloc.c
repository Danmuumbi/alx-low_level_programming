#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - Allocates memory for an array and sets it to zero.
* @nmemb: Number of elements in the array.
* @size: Size of each element in bytes.
*
* Return: A pointer to the allocated memory, or NULL if malloc fails.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *temp;

	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);
	
	temp = ptr;
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
	{
		temp[i] = 0;
	}

	return (ptr);
}
