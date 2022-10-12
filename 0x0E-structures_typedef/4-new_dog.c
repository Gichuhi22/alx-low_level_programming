#include "main.h"

/**
 * new_dog - function that creates a new dog
 *@name: name of dog
 *@age: dogs age
 *@owner: dogs owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *ptr;
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return ptr;
}
