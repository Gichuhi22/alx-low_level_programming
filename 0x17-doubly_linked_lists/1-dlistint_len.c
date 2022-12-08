#include"lists.h"
/**
 *dlistint_len - counts the number of elements in a list
 *@h: pointer to first element
 *Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h)
	{
		while (h)
		{
			count++;
			h = h->next;
		}
	}
	else
		count = 0;

	return (count);
}
