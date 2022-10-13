#include"dog.h"

/**
 *free_dog - function that frees all previuosly dynamically allocated
 *memory for struct my_dog
 *@d: pointer to struct
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
