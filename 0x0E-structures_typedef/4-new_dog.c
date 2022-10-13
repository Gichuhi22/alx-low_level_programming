#include "dog.h"
#include<string.h>


/**
 * new_dog - function that creates a new dog
 *@name: name of dog
 *@age: dogs age
 *@owner: dogs owner
 *
 * Return: a pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
		exit(1);
	}

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
		exit(1);
	}

	ptr->name = malloc(sizeof(char) * (strlen(name) + 1));
	if ((ptr->name) == NULL)
	{
		free(ptr->name);
		return (NULL);
		exit(1);
	}

	ptr->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if ((ptr->owner) == NULL)
	{
		free(ptr->owner);
		return (NULL);
		exit(1);
	}

	strcpy(ptr->name, name);
	ptr->age = age;
	strcpy(ptr->owner, owner);

	return (ptr);
}
