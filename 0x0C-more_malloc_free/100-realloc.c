#include <stdlib.h>
#include <string.h>

/**
* _realloc - Reallocates a memory block using malloc and free
* @ptr: Pointer to the previously allocated memory block
* @old_size: Size of the previously allocated memory block
* @new_size: Size of the new memory block
*
* Return: Pointer to the newly allocated memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
		return (malloc(new_size));

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (!new_ptr)
		return (NULL);

	if (new_size > old_size)
		memcpy(new_ptr, ptr, old_size);
	else
		memcpy(new_ptr, ptr, new_size);

	free(ptr);

	return (new_ptr);
}
