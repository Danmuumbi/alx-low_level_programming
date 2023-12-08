#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * A program  that performs simple operations
 * Program prints result of operation followed by a new line
 */

int num1;
int num2;
char *operator;
int *operation;
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	(*operation)(int, int) = get_op_func(operator);
	int result = operation(num1, num2);

	printf("%d\n", result);

	return (0);
}
