#include"lists.h"
/**
 *delete_dnodeint_at_index - deletes a node at a specifies index
 *@index: index of node to be deleted
 *@head: pointer to first node
 *Return: returns 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *x = NULL, *y = NULL;
	unsigned int count = 0;

	temp = *head;
	if (!*head)
		return (-1);
	if (index == 0)
	{
		if (!temp->next && !temp->prev)
			free(temp), *head = NULL;
		else
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		return (1);
	}
	while (temp)
	{
		if (count == index)
		{
			x = temp->prev, x->next = temp->next;
			y = temp->next, y->prev = temp->prev;
			temp->next = NULL, temp->prev = NULL;
			temp = y;
			return (1);
		}
		else if (temp->next == NULL && count == index)
		{
			temp = x, temp = temp->prev;
			temp->next = NULL, x->prev = NULL;
			x = NULL;
			return (1);
		}
		else if (!temp->next && count != index)
			return (-1);
		count++, temp = temp->next;
	}
	return (1);
}
