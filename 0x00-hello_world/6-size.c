#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return (0) Success
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %lu byte(s)\n",(unsigned long)sinzeof(a));
printf("Size of an int: %lu byte(s)\n",(unsigned long)sinzeof(b));
printf("Size of a long int: %lu byte(s)\n",(unsigned long)sinzeof(c));
printf("Size of a long long int: %lu byte(s)\n",(unsigned long)sinzeof(d));
printf("Size of a float: %lu byte(s)\n",(unsigned long)sinzeof(f));
return (0);
}
