#include"lists.h"
/**
 *sum_dlistint - adds all the data of a linked list
 *@head: pointer to first node
 *Return: returns sum of all data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head)
	{
		temp = head;
		while (temp)
		{
			sum += temp->n;
			temp = temp->next;
		}
		return (sum);
	}
	else
		return (0);
}
