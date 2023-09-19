#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int i;

	srand(time(0));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{

		int index = rand() % (sizeof(charset) - 1);
		password[i] = charset[index];

	}

	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return (0);
}

