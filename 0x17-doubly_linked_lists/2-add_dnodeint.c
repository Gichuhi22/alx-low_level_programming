#include"lists.h"
/**
 *add_dnodeint - adds a node at the beginning of a list
 *@head: pointer to first node
 *@n: passed integer in node
 *Return: Returns address of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
	{
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
		newnode->next = *head;
		newnode->prev = NULL;
		*head = newnode;
	}
	return (newnode);
}
