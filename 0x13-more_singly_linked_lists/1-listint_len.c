#include "lists.h"
/**
 * listint_len - returns number of nodes
 * @h: pointer
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
