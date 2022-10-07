#include "main.h"
/**
 * _realloc - a function that reallocates a memory block using malloc
 * and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size of old memory in bytes
 * @new_size: size of new memory block in bytes
 *
 * Return: returns a pointer to new memory address
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *newptr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	newptr = malloc(new_size);
	if (newptr == NULL)
		return (NULL);
	if (ptr == NULL)
		return (newptr);
	for (i = 0; i < old_size && i < new_size; i++)
		*((char *)newptr + i) = *((char *) ptr + i);

	free(ptr);
	return (newptr);
}
