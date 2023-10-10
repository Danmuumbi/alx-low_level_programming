#ifndef DOG_H
#define DOG_H

/**
* struct dog - Define a new data type struct dog
* @name: The name of the dog (a string)
* @age: The age of the dog (a float)
* @owner: The owner of the dog (a string)
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

/* Function prototypes */
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
