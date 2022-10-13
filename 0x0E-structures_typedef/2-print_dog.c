#include"dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: pointer to struct
 *
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		if (d->age < 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %.6f\n", d->age);

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
	else
		return;

}
