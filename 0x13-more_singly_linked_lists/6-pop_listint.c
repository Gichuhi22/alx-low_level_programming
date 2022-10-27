#include"lists.h"

/**
 * pop_listint - deletes the head node sof a list
 * @head: pointer to head node
 * Return: returns 0 if list empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	if (temp->next == NULL)
	{
		free(temp);
		*head = temp = NULL;
		return (0);
	}
	else
	{
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
		temp = *head;
		return ((*head)->n);
	}
}
