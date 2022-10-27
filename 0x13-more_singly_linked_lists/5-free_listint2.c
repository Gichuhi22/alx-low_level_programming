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
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
		temp = *head;
	}
	temp = *head = NULL;
}
