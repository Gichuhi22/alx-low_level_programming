#include"lists.h"

/**
 * free_list - frees a list
 * @head: pointer to list
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp)
	{
		free(temp->str);
		temp->str = NULL;
		temp = temp->next;
		free(head);
		head = temp;
	}
	head = temp = NULL;

}

