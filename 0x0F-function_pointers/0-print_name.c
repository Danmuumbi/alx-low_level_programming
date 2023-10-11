#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - prints a name using a function pointer
* @name: name of the person
* @f: function pointer to the printing function
*
* This function takes a name and a function pointer as arguments. It calls the
* function pointed to by the function pointer, passing the name as an argument.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
