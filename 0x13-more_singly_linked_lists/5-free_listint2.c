#include"lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to first node
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		(*head)->next = NULL;
		free(*head);
		*head = temp;
	}
	temp = *head = NULL;
}
