#include"lists.h"

/**
 * free_listint - frees an entire list
 * @head: pointer to first element of the list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (temp->next != NULL)
	{
		head = head->next;
		free(temp->next);
		temp->next = NULL;
		free(temp);
		temp = head;
	}
	head = NULL;
	temp = NULL;
}
