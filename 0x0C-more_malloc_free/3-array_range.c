#include <stdlib.h>

/*
* function writes an array of integers
* array contains all the values from min to max
*/

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = (int *)malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; min++, i++)
		arr[i] = min;

	return (arr);
}
