#include"lists.h"

/**
 *print_list - prints all elements of a list
 *@h: struct pointer to elements of the list
 *Return: number of elements in the list
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	while (h != NULL)
	{
		if (h -> str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] ", h -> len);
			printf("%s\n", h -> str);
		}
		count++;
		h = h -> next;
	}
	return (count);
}
