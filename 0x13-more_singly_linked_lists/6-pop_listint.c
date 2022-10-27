#include"lists.h"

/**
 * pop_listint - deletes the head node sof a list
 * @head: pointer to head node
 * Return: returns 0 if list empty
 */

int pop_listint(listint_t **head)
{
	int x;
	listint_t *temp;

	temp = *head;
	if (temp == NULL)
	{
		return (0);
	}
	else if (temp->next == NULL)
	{
		x = temp->n;
		free(temp);
		temp = *head = NULL;
		return (x);
	}
	else
	{
		x = (*head)->n;
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
		temp = *head;
		return (x);
	}
}
