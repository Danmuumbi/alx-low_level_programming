#include <stdio.h>

/**
* main - Entry point of the program
* @argc: prints its name
* @argv: the name is followed by a new line
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	return (1);
}

