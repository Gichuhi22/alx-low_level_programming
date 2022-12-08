#include "lists.h"
/**
 * add_dnodeint_end -  adds a node at the end of a linked list
 *@head: pointer to first node
 *@n: integer value in new node
 *Return: address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
	{
		free(newnode);
		return (NULL);
		exit(1);
	}

	newnode->n = n;
	if (*head == NULL)
	{
		newnode->next = NULL;
		newnode->prev = NULL;
		*head = newnode;
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		newnode->next = NULL;
		newnode->prev = temp;
		temp->next = newnode;
	}
	return (newnode);
}
