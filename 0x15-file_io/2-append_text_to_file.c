#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The text to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[length])
		length++;

	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == -1)
		return (-1);

	write_result = write(file_descriptor, text_content, length);

	if (write_result == -1)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);

	return (1);
}
