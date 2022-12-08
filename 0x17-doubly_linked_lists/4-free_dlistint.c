#include"lists.h"
/**
 *free_dlistint - frees a linked list
 *@head: pointer to first node
 */

void free_dlistint(dlistint_t *head)
{
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
	head = NULL;
}
