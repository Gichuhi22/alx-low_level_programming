#include"lists.h"

/**
 * sum_listint - calculates and returns the sum od all data(n) of
 * a linked list
 * @head: pointer to first element
 * Return: sum of data or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (temp)
	{
		while (temp)
		{
			sum = sum + temp->n;
			temp = temp->next;
		}
	}
	else
		return (0);

	return (sum);
}
