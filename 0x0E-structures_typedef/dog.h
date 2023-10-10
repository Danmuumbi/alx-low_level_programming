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

typedef struct dog dog_t;

#endif /* DOG_H */
