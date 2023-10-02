#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/* Declaration of simple_print_buffer function */
void simple_print_buffer(char *buffer, unsigned int size);

/**
* main - Entry point of the program.
*
* Description:
* This function is the entry point of the program. It calls the create_array
* function to allocate and initialize an array of characters, prints the
* contents, and then frees the allocated memory.
*
* Return:
* 0 on success, 1 on failure.
*/
int main(void)
{
	char *buffer;

	buffer = create_array(98, 'H');
	if (buffer == NULL)
	{
		printf("Failed to allocate memory\n");
		return (1);
	}
	simple_print_buffer(buffer, 98);
	free(buffer);
	return (0);
}
