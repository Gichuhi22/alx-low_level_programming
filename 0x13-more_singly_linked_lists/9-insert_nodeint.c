#include"lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to first element of the list
 * @idx: index to insert the node
 * @n: data
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;

	temp = *head;
	if (temp)
	{
		while (temp)
		{
			if ((count + 1) != idx)
			{
				temp = temp->next;
				count++;
			}
			else
			{
				new_node->next = temp->next;
				temp->next = new_node;
				break;
			}
		}
	}
	else
		return (NULL);

	return (new_node);
}
