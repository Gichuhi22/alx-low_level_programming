#include"lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: pointer to first node
 * @idx: index to insert node
 * @n: integer member value of node
 * Return: returns address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int count = 0;

	temp = *h;
	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
	{
		free(newnode);
		printf("Failed to allocate memory\n");
		return (NULL);
	}
	newnode->n = n;
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (*h)
	{
		while (count != (idx - 1))
		{
			temp = temp->next;
			count++;
			if (temp->next == NULL)
				return (add_dnodeint_end(h, n));
		}
		newnode->next = temp->next;
		newnode->prev = temp;
		temp->next = newnode;
		newnode->next->prev = newnode;
	}
	else
	{
		*h = newnode;
		newnode->next = NULL;
		newnode->prev = NULL;
	}
	return (newnode);
}
