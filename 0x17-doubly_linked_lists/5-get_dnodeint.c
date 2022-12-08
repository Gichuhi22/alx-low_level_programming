#include"lists.h"
/**
 *get_dnodeint_at_index - gets node at a given index
 *@head: pointer to first node
 *@index: index of node to return
 *Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int idx = 0;

	if (head)
	{
		temp = head;
		while (idx != index)
		{
			if (temp->next == NULL)
			{
				return (NULL);
			}
			temp = temp->next;
			idx++;
		}
		return (temp);
	}
	else
		return (NULL);
}
