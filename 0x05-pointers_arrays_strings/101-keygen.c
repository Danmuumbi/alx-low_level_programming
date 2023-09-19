#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
	char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int i;

	srand(time(0)); // Seed the random number generator with the current time

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		int index = rand() % (sizeof(charset) - 1); // Generate a random index within the charset
		password[i] = charset[index];
	}

	password[PASSWORD_LENGTH] = '\0'; // Null-terminate the password string

	printf("%s\n", password);

	return 0;
}

