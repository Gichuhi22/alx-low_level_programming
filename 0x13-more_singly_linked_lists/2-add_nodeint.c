#include"lists.h"

/**
 * add_nodeint - adds a node at the beginning of a list
 * @head: pointer
 * @n: struct element
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
