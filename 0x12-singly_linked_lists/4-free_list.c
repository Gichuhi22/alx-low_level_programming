#include"lists.h"

/**
 * free_list - frees a list
 * @head: pointer to list
 */

void free_list(list_t *head)
{
	list_t *curr = head;
	list_t *previous;

	while (curr)
	{
		previous = curr;
		curr = curr->next;
		free(previous);
	}
	head = NULL;
}

