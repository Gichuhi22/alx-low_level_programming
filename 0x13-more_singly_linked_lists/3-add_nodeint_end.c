#include"lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: pointer
 * @n: integer value
 * Return: address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = temp = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
