#include <stdio.h>
#include <stdlib.h>

int _putchar(char c)
{
	return write(1, &c, 1);
}

void print_error(void)
{
	printf("Error\n");
	exit(98);
}

int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int str_len(char *str)
{
	int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return len;
}

void multiply(char *num1, char *num2)
{
	int len1 = str_len(num1);
	int len2 = str_len(num2);
	int len_res = len1 + len2;
	int *result = malloc(sizeof(int) * len_res);

	if (result == NULL)
	{
		print_error();
	}

	for (int i = 0; i < len_res; i++)
	{
		result[i] = 0;
	}

	for (int i = len1 - 1; i >= 0; i--)
	{
		for (int j = len2 - 1; j >= 0; j--)
		{
			int digit1 = num1[i] - '0';
			int digit2 = num2[j] - '0';
			int product = digit1 * digit2;
			int sum = product + result[i + j + 1];

           
			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}

	int print_result = 0;
	for (int i = 0; i < len_res; i++)
	{
		if (result[i] != 0)
		{
			print_result = 1;
		}
		if (print_result)
		{
			_putchar(result[i] + '0');
		}
	}

	if (!print_result)
	{
		_putchar('0');
	}

	_putchar('\n');
	free(result);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error();
	}

	char *num1 = argv[1];
	char *num2 = argv[2];

	for (int i = 0; num1[i]; i++)
	{
		if (!is_digit(num1[i]))
		{
			print_error();
		}
	}

	for (int i = 0; num2[i]; i++)
	{
		if (!is_digit(num2[i]))
		{
			print_error();
		}
	}

	multiply(num1, num2);

	return 0;
}
