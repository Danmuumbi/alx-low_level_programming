#include "main.h"

/**
* print_line - Prints a straight line of '_' characters.
* @n: The number of times to print '_'.
*/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}

