#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
* new_dog - Creates a new dog.
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
*
* Return: Pointer to the new dog, or NULL on failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;

	/* Check for NULL input */
	if (name == NULL || owner == NULL)
		return (NULL);

	/* Allocate memory for the new dog struct */
	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	/* Allocate memory for the name and owner strings */
	new_dog_ptr->name = malloc(strlen(name) + 1);
	new_dog_ptr->owner = malloc(strlen(owner) + 1);

	/* Check for memory allocation failure */
	if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr->owner);
		free(new_dog_ptr);
		return (NULL);
	}

	/* Copy values to the new dog */
	strcpy(new_dog_ptr->name, name);
	new_dog_ptr->age = age;
	strcpy(new_dog_ptr->owner, owner);

	return (new_dog_ptr);
}
