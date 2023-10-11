#include "function_pointers.h"

/**
* array_iterator - Execute a function on each element of an array
* @array: Pointer to the array
* @size: Size of the array
* @action: Pointer to the function to execute on each element
*
* This function takes an array, its size, and a function pointer 'action'.
* It iterates through the elements of the array and applies the 'action'
* function to each element.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
